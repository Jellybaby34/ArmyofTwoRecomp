#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8313D2E0"))) PPC_WEAK_FUNC(sub_8313D2E0);
PPC_FUNC_IMPL(__imp__sub_8313D2E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2824
	ctx.r4.s64 = ctx.r11.s64 + 2824;
	// bl 0x82429b48
	ctx.lr = 0x8313D2FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1170(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1170, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D318"))) PPC_WEAK_FUNC(sub_8313D318);
PPC_FUNC_IMPL(__imp__sub_8313D318) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2828
	ctx.r4.s64 = ctx.r11.s64 + 2828;
	// bl 0x82429b48
	ctx.lr = 0x8313D334;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-561(r11)
	PPC_STORE_U8(ctx.r11.u32 + -561, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D350"))) PPC_WEAK_FUNC(sub_8313D350);
PPC_FUNC_IMPL(__imp__sub_8313D350) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2832
	ctx.r4.s64 = ctx.r11.s64 + 2832;
	// bl 0x82429b48
	ctx.lr = 0x8313D36C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2072(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2072, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D388"))) PPC_WEAK_FUNC(sub_8313D388);
PPC_FUNC_IMPL(__imp__sub_8313D388) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2836
	ctx.r4.s64 = ctx.r11.s64 + 2836;
	// bl 0x82429b48
	ctx.lr = 0x8313D3A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,335(r11)
	PPC_STORE_U8(ctx.r11.u32 + 335, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D3C0"))) PPC_WEAK_FUNC(sub_8313D3C0);
PPC_FUNC_IMPL(__imp__sub_8313D3C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2840
	ctx.r4.s64 = ctx.r11.s64 + 2840;
	// bl 0x82429b48
	ctx.lr = 0x8313D3DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2400, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D3F8"))) PPC_WEAK_FUNC(sub_8313D3F8);
PPC_FUNC_IMPL(__imp__sub_8313D3F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2844
	ctx.r4.s64 = ctx.r11.s64 + 2844;
	// bl 0x82429b48
	ctx.lr = 0x8313D414;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,487(r11)
	PPC_STORE_U8(ctx.r11.u32 + 487, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D430"))) PPC_WEAK_FUNC(sub_8313D430);
PPC_FUNC_IMPL(__imp__sub_8313D430) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2848
	ctx.r4.s64 = ctx.r11.s64 + 2848;
	// bl 0x82429b48
	ctx.lr = 0x8313D44C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,791(r11)
	PPC_STORE_U8(ctx.r11.u32 + 791, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D468"))) PPC_WEAK_FUNC(sub_8313D468);
PPC_FUNC_IMPL(__imp__sub_8313D468) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2852
	ctx.r4.s64 = ctx.r11.s64 + 2852;
	// bl 0x82429b48
	ctx.lr = 0x8313D484;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,360(r11)
	PPC_STORE_U8(ctx.r11.u32 + 360, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D4A0"))) PPC_WEAK_FUNC(sub_8313D4A0);
PPC_FUNC_IMPL(__imp__sub_8313D4A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2856
	ctx.r4.s64 = ctx.r11.s64 + 2856;
	// bl 0x82429b48
	ctx.lr = 0x8313D4BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313D4D8"))) PPC_WEAK_FUNC(sub_8313D4D8);
PPC_FUNC_IMPL(__imp__sub_8313D4D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2860
	ctx.r4.s64 = ctx.r11.s64 + 2860;
	// bl 0x82429b48
	ctx.lr = 0x8313D4F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4739(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4739, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D510"))) PPC_WEAK_FUNC(sub_8313D510);
PPC_FUNC_IMPL(__imp__sub_8313D510) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82429b48
	ctx.lr = 0x8313D52C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1629(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1629, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D548"))) PPC_WEAK_FUNC(sub_8313D548);
PPC_FUNC_IMPL(__imp__sub_8313D548) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2868
	ctx.r4.s64 = ctx.r11.s64 + 2868;
	// bl 0x82429b48
	ctx.lr = 0x8313D564;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2787(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2787, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D580"))) PPC_WEAK_FUNC(sub_8313D580);
PPC_FUNC_IMPL(__imp__sub_8313D580) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2872
	ctx.r4.s64 = ctx.r11.s64 + 2872;
	// bl 0x82429b48
	ctx.lr = 0x8313D59C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3867(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3867, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D5B8"))) PPC_WEAK_FUNC(sub_8313D5B8);
PPC_FUNC_IMPL(__imp__sub_8313D5B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2876
	ctx.r4.s64 = ctx.r11.s64 + 2876;
	// bl 0x82429b48
	ctx.lr = 0x8313D5D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3508, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D5F0"))) PPC_WEAK_FUNC(sub_8313D5F0);
PPC_FUNC_IMPL(__imp__sub_8313D5F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2880
	ctx.r4.s64 = ctx.r11.s64 + 2880;
	// bl 0x82429b48
	ctx.lr = 0x8313D60C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3072(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3072, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D628"))) PPC_WEAK_FUNC(sub_8313D628);
PPC_FUNC_IMPL(__imp__sub_8313D628) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2884
	ctx.r4.s64 = ctx.r11.s64 + 2884;
	// bl 0x82429b48
	ctx.lr = 0x8313D644;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313D660"))) PPC_WEAK_FUNC(sub_8313D660);
PPC_FUNC_IMPL(__imp__sub_8313D660) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2888
	ctx.r4.s64 = ctx.r11.s64 + 2888;
	// bl 0x82429b48
	ctx.lr = 0x8313D67C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-673(r11)
	PPC_STORE_U8(ctx.r11.u32 + -673, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D698"))) PPC_WEAK_FUNC(sub_8313D698);
PPC_FUNC_IMPL(__imp__sub_8313D698) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2892
	ctx.r4.s64 = ctx.r11.s64 + 2892;
	// bl 0x82429b48
	ctx.lr = 0x8313D6B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5209(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5209, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D6D0"))) PPC_WEAK_FUNC(sub_8313D6D0);
PPC_FUNC_IMPL(__imp__sub_8313D6D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2896
	ctx.r4.s64 = ctx.r11.s64 + 2896;
	// bl 0x82429b48
	ctx.lr = 0x8313D6EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1218(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1218, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D708"))) PPC_WEAK_FUNC(sub_8313D708);
PPC_FUNC_IMPL(__imp__sub_8313D708) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2900
	ctx.r4.s64 = ctx.r11.s64 + 2900;
	// bl 0x82429b48
	ctx.lr = 0x8313D724;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-396(r11)
	PPC_STORE_U8(ctx.r11.u32 + -396, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D740"))) PPC_WEAK_FUNC(sub_8313D740);
PPC_FUNC_IMPL(__imp__sub_8313D740) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2904
	ctx.r4.s64 = ctx.r11.s64 + 2904;
	// bl 0x82429b48
	ctx.lr = 0x8313D75C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 231, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D778"))) PPC_WEAK_FUNC(sub_8313D778);
PPC_FUNC_IMPL(__imp__sub_8313D778) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2908
	ctx.r4.s64 = ctx.r11.s64 + 2908;
	// bl 0x82429b48
	ctx.lr = 0x8313D794;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3771(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3771, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D7B0"))) PPC_WEAK_FUNC(sub_8313D7B0);
PPC_FUNC_IMPL(__imp__sub_8313D7B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2912
	ctx.r4.s64 = ctx.r11.s64 + 2912;
	// bl 0x82429b48
	ctx.lr = 0x8313D7CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-282(r11)
	PPC_STORE_U8(ctx.r11.u32 + -282, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D7E8"))) PPC_WEAK_FUNC(sub_8313D7E8);
PPC_FUNC_IMPL(__imp__sub_8313D7E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2916
	ctx.r4.s64 = ctx.r11.s64 + 2916;
	// bl 0x82429b48
	ctx.lr = 0x8313D804;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4010(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4010, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D820"))) PPC_WEAK_FUNC(sub_8313D820);
PPC_FUNC_IMPL(__imp__sub_8313D820) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2920
	ctx.r4.s64 = ctx.r11.s64 + 2920;
	// bl 0x82429b48
	ctx.lr = 0x8313D83C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2886(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2886, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D858"))) PPC_WEAK_FUNC(sub_8313D858);
PPC_FUNC_IMPL(__imp__sub_8313D858) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2924
	ctx.r4.s64 = ctx.r11.s64 + 2924;
	// bl 0x82429b48
	ctx.lr = 0x8313D874;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3964(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3964, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D890"))) PPC_WEAK_FUNC(sub_8313D890);
PPC_FUNC_IMPL(__imp__sub_8313D890) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2928
	ctx.r4.s64 = ctx.r11.s64 + 2928;
	// bl 0x82429b48
	ctx.lr = 0x8313D8AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4108, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D8C8"))) PPC_WEAK_FUNC(sub_8313D8C8);
PPC_FUNC_IMPL(__imp__sub_8313D8C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2932
	ctx.r4.s64 = ctx.r11.s64 + 2932;
	// bl 0x82429b48
	ctx.lr = 0x8313D8E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5166(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5166, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D900"))) PPC_WEAK_FUNC(sub_8313D900);
PPC_FUNC_IMPL(__imp__sub_8313D900) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2936
	ctx.r4.s64 = ctx.r11.s64 + 2936;
	// bl 0x82429b48
	ctx.lr = 0x8313D91C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4234(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4234, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D938"))) PPC_WEAK_FUNC(sub_8313D938);
PPC_FUNC_IMPL(__imp__sub_8313D938) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2940
	ctx.r4.s64 = ctx.r11.s64 + 2940;
	// bl 0x82429b48
	ctx.lr = 0x8313D954;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1078(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1078, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D970"))) PPC_WEAK_FUNC(sub_8313D970);
PPC_FUNC_IMPL(__imp__sub_8313D970) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2944
	ctx.r4.s64 = ctx.r11.s64 + 2944;
	// bl 0x82429b48
	ctx.lr = 0x8313D98C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,571(r11)
	PPC_STORE_U8(ctx.r11.u32 + 571, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D9A8"))) PPC_WEAK_FUNC(sub_8313D9A8);
PPC_FUNC_IMPL(__imp__sub_8313D9A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2948
	ctx.r4.s64 = ctx.r11.s64 + 2948;
	// bl 0x82429b48
	ctx.lr = 0x8313D9C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4836(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4836, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D9E0"))) PPC_WEAK_FUNC(sub_8313D9E0);
PPC_FUNC_IMPL(__imp__sub_8313D9E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2952
	ctx.r4.s64 = ctx.r11.s64 + 2952;
	// bl 0x82429b48
	ctx.lr = 0x8313D9FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4969(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4969, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DA18"))) PPC_WEAK_FUNC(sub_8313DA18);
PPC_FUNC_IMPL(__imp__sub_8313DA18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2956
	ctx.r4.s64 = ctx.r11.s64 + 2956;
	// bl 0x82429b48
	ctx.lr = 0x8313DA34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5293(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5293, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DA50"))) PPC_WEAK_FUNC(sub_8313DA50);
PPC_FUNC_IMPL(__imp__sub_8313DA50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2960
	ctx.r4.s64 = ctx.r11.s64 + 2960;
	// bl 0x82429b48
	ctx.lr = 0x8313DA6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4839(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4839, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DA88"))) PPC_WEAK_FUNC(sub_8313DA88);
PPC_FUNC_IMPL(__imp__sub_8313DA88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2964
	ctx.r4.s64 = ctx.r11.s64 + 2964;
	// bl 0x82429b48
	ctx.lr = 0x8313DAA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313DAC0"))) PPC_WEAK_FUNC(sub_8313DAC0);
PPC_FUNC_IMPL(__imp__sub_8313DAC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2968
	ctx.r4.s64 = ctx.r11.s64 + 2968;
	// bl 0x82429b48
	ctx.lr = 0x8313DADC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2972(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2972, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DAF8"))) PPC_WEAK_FUNC(sub_8313DAF8);
PPC_FUNC_IMPL(__imp__sub_8313DAF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2972
	ctx.r4.s64 = ctx.r11.s64 + 2972;
	// bl 0x82429b48
	ctx.lr = 0x8313DB14;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1293(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1293, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DB30"))) PPC_WEAK_FUNC(sub_8313DB30);
PPC_FUNC_IMPL(__imp__sub_8313DB30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2976
	ctx.r4.s64 = ctx.r11.s64 + 2976;
	// bl 0x82429b48
	ctx.lr = 0x8313DB4C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1489(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1489, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DB68"))) PPC_WEAK_FUNC(sub_8313DB68);
PPC_FUNC_IMPL(__imp__sub_8313DB68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2980
	ctx.r4.s64 = ctx.r11.s64 + 2980;
	// bl 0x82429b48
	ctx.lr = 0x8313DB84;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4365(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4365, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DBA0"))) PPC_WEAK_FUNC(sub_8313DBA0);
PPC_FUNC_IMPL(__imp__sub_8313DBA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2984
	ctx.r4.s64 = ctx.r11.s64 + 2984;
	// bl 0x82429b48
	ctx.lr = 0x8313DBBC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2374(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2374, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DBD8"))) PPC_WEAK_FUNC(sub_8313DBD8);
PPC_FUNC_IMPL(__imp__sub_8313DBD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2988
	ctx.r4.s64 = ctx.r11.s64 + 2988;
	// bl 0x82429b48
	ctx.lr = 0x8313DBF4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3420(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3420, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DC10"))) PPC_WEAK_FUNC(sub_8313DC10);
PPC_FUNC_IMPL(__imp__sub_8313DC10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2992
	ctx.r4.s64 = ctx.r11.s64 + 2992;
	// bl 0x82429b48
	ctx.lr = 0x8313DC2C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2255(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2255, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DC48"))) PPC_WEAK_FUNC(sub_8313DC48);
PPC_FUNC_IMPL(__imp__sub_8313DC48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,2996
	ctx.r4.s64 = ctx.r11.s64 + 2996;
	// bl 0x82429b48
	ctx.lr = 0x8313DC64;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2144(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2144, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DC80"))) PPC_WEAK_FUNC(sub_8313DC80);
PPC_FUNC_IMPL(__imp__sub_8313DC80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3000
	ctx.r4.s64 = ctx.r11.s64 + 3000;
	// bl 0x82429b48
	ctx.lr = 0x8313DC9C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4521(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4521, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DCB8"))) PPC_WEAK_FUNC(sub_8313DCB8);
PPC_FUNC_IMPL(__imp__sub_8313DCB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3004
	ctx.r4.s64 = ctx.r11.s64 + 3004;
	// bl 0x82429b48
	ctx.lr = 0x8313DCD4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3117, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DCF0"))) PPC_WEAK_FUNC(sub_8313DCF0);
PPC_FUNC_IMPL(__imp__sub_8313DCF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3008
	ctx.r4.s64 = ctx.r11.s64 + 3008;
	// bl 0x82429b48
	ctx.lr = 0x8313DD0C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DD28"))) PPC_WEAK_FUNC(sub_8313DD28);
PPC_FUNC_IMPL(__imp__sub_8313DD28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3012
	ctx.r4.s64 = ctx.r11.s64 + 3012;
	// bl 0x82429b48
	ctx.lr = 0x8313DD44;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,722(r11)
	PPC_STORE_U8(ctx.r11.u32 + 722, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DD60"))) PPC_WEAK_FUNC(sub_8313DD60);
PPC_FUNC_IMPL(__imp__sub_8313DD60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3016
	ctx.r4.s64 = ctx.r11.s64 + 3016;
	// bl 0x82429b48
	ctx.lr = 0x8313DD7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313DD98"))) PPC_WEAK_FUNC(sub_8313DD98);
PPC_FUNC_IMPL(__imp__sub_8313DD98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3020
	ctx.r4.s64 = ctx.r11.s64 + 3020;
	// bl 0x82429b48
	ctx.lr = 0x8313DDB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4367(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4367, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DDD0"))) PPC_WEAK_FUNC(sub_8313DDD0);
PPC_FUNC_IMPL(__imp__sub_8313DDD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3024
	ctx.r4.s64 = ctx.r11.s64 + 3024;
	// bl 0x82429b48
	ctx.lr = 0x8313DDEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2259(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2259, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DE08"))) PPC_WEAK_FUNC(sub_8313DE08);
PPC_FUNC_IMPL(__imp__sub_8313DE08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3028
	ctx.r4.s64 = ctx.r11.s64 + 3028;
	// bl 0x82429b48
	ctx.lr = 0x8313DE24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2660(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2660, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DE40"))) PPC_WEAK_FUNC(sub_8313DE40);
PPC_FUNC_IMPL(__imp__sub_8313DE40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3032
	ctx.r4.s64 = ctx.r11.s64 + 3032;
	// bl 0x82429b48
	ctx.lr = 0x8313DE5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1802(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1802, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DE78"))) PPC_WEAK_FUNC(sub_8313DE78);
PPC_FUNC_IMPL(__imp__sub_8313DE78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3036
	ctx.r4.s64 = ctx.r11.s64 + 3036;
	// bl 0x82429b48
	ctx.lr = 0x8313DE94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2495(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2495, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DEB0"))) PPC_WEAK_FUNC(sub_8313DEB0);
PPC_FUNC_IMPL(__imp__sub_8313DEB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3040
	ctx.r4.s64 = ctx.r11.s64 + 3040;
	// bl 0x82429b48
	ctx.lr = 0x8313DECC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2021(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2021, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DEE8"))) PPC_WEAK_FUNC(sub_8313DEE8);
PPC_FUNC_IMPL(__imp__sub_8313DEE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3044
	ctx.r4.s64 = ctx.r11.s64 + 3044;
	// bl 0x82429b48
	ctx.lr = 0x8313DF04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3346(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3346, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DF20"))) PPC_WEAK_FUNC(sub_8313DF20);
PPC_FUNC_IMPL(__imp__sub_8313DF20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3048
	ctx.r4.s64 = ctx.r11.s64 + 3048;
	// bl 0x82429b48
	ctx.lr = 0x8313DF3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4354(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4354, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DF58"))) PPC_WEAK_FUNC(sub_8313DF58);
PPC_FUNC_IMPL(__imp__sub_8313DF58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3052
	ctx.r4.s64 = ctx.r11.s64 + 3052;
	// bl 0x82429b48
	ctx.lr = 0x8313DF74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3662(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3662, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DF90"))) PPC_WEAK_FUNC(sub_8313DF90);
PPC_FUNC_IMPL(__imp__sub_8313DF90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3056
	ctx.r4.s64 = ctx.r11.s64 + 3056;
	// bl 0x82429b48
	ctx.lr = 0x8313DFAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5012(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5012, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DFC8"))) PPC_WEAK_FUNC(sub_8313DFC8);
PPC_FUNC_IMPL(__imp__sub_8313DFC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3060
	ctx.r4.s64 = ctx.r11.s64 + 3060;
	// bl 0x82429b48
	ctx.lr = 0x8313DFE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5050(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5050, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E000"))) PPC_WEAK_FUNC(sub_8313E000);
PPC_FUNC_IMPL(__imp__sub_8313E000) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3064
	ctx.r4.s64 = ctx.r11.s64 + 3064;
	// bl 0x82429b48
	ctx.lr = 0x8313E01C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1557(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1557, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E038"))) PPC_WEAK_FUNC(sub_8313E038);
PPC_FUNC_IMPL(__imp__sub_8313E038) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3068
	ctx.r4.s64 = ctx.r11.s64 + 3068;
	// bl 0x82429b48
	ctx.lr = 0x8313E054;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313E070"))) PPC_WEAK_FUNC(sub_8313E070);
PPC_FUNC_IMPL(__imp__sub_8313E070) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3072
	ctx.r4.s64 = ctx.r11.s64 + 3072;
	// bl 0x82429b48
	ctx.lr = 0x8313E08C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4651(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4651, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E0A8"))) PPC_WEAK_FUNC(sub_8313E0A8);
PPC_FUNC_IMPL(__imp__sub_8313E0A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3076
	ctx.r4.s64 = ctx.r11.s64 + 3076;
	// bl 0x82429b48
	ctx.lr = 0x8313E0C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E0E0"))) PPC_WEAK_FUNC(sub_8313E0E0);
PPC_FUNC_IMPL(__imp__sub_8313E0E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3080
	ctx.r4.s64 = ctx.r11.s64 + 3080;
	// bl 0x82429b48
	ctx.lr = 0x8313E0FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5244(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5244, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E118"))) PPC_WEAK_FUNC(sub_8313E118);
PPC_FUNC_IMPL(__imp__sub_8313E118) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3084
	ctx.r4.s64 = ctx.r11.s64 + 3084;
	// bl 0x82429b48
	ctx.lr = 0x8313E134;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,788(r11)
	PPC_STORE_U8(ctx.r11.u32 + 788, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E150"))) PPC_WEAK_FUNC(sub_8313E150);
PPC_FUNC_IMPL(__imp__sub_8313E150) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3088
	ctx.r4.s64 = ctx.r11.s64 + 3088;
	// bl 0x82429b48
	ctx.lr = 0x8313E16C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313E188"))) PPC_WEAK_FUNC(sub_8313E188);
PPC_FUNC_IMPL(__imp__sub_8313E188) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3092
	ctx.r4.s64 = ctx.r11.s64 + 3092;
	// bl 0x82429b48
	ctx.lr = 0x8313E1A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,593(r11)
	PPC_STORE_U8(ctx.r11.u32 + 593, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E1C0"))) PPC_WEAK_FUNC(sub_8313E1C0);
PPC_FUNC_IMPL(__imp__sub_8313E1C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3096
	ctx.r4.s64 = ctx.r11.s64 + 3096;
	// bl 0x82429b48
	ctx.lr = 0x8313E1DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1368(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1368, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E1F8"))) PPC_WEAK_FUNC(sub_8313E1F8);
PPC_FUNC_IMPL(__imp__sub_8313E1F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3100
	ctx.r4.s64 = ctx.r11.s64 + 3100;
	// bl 0x82429b48
	ctx.lr = 0x8313E214;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-444(r11)
	PPC_STORE_U8(ctx.r11.u32 + -444, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E230"))) PPC_WEAK_FUNC(sub_8313E230);
PPC_FUNC_IMPL(__imp__sub_8313E230) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3104
	ctx.r4.s64 = ctx.r11.s64 + 3104;
	// bl 0x82429b48
	ctx.lr = 0x8313E24C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4038(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4038, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E268"))) PPC_WEAK_FUNC(sub_8313E268);
PPC_FUNC_IMPL(__imp__sub_8313E268) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3108
	ctx.r4.s64 = ctx.r11.s64 + 3108;
	// bl 0x82429b48
	ctx.lr = 0x8313E284;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2898(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2898, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E2A0"))) PPC_WEAK_FUNC(sub_8313E2A0);
PPC_FUNC_IMPL(__imp__sub_8313E2A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3112
	ctx.r4.s64 = ctx.r11.s64 + 3112;
	// bl 0x82429b48
	ctx.lr = 0x8313E2BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,278(r11)
	PPC_STORE_U8(ctx.r11.u32 + 278, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E2D8"))) PPC_WEAK_FUNC(sub_8313E2D8);
PPC_FUNC_IMPL(__imp__sub_8313E2D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3116
	ctx.r4.s64 = ctx.r11.s64 + 3116;
	// bl 0x82429b48
	ctx.lr = 0x8313E2F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,374(r11)
	PPC_STORE_U8(ctx.r11.u32 + 374, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E310"))) PPC_WEAK_FUNC(sub_8313E310);
PPC_FUNC_IMPL(__imp__sub_8313E310) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3120
	ctx.r4.s64 = ctx.r11.s64 + 3120;
	// bl 0x82429b48
	ctx.lr = 0x8313E32C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2880(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2880, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E348"))) PPC_WEAK_FUNC(sub_8313E348);
PPC_FUNC_IMPL(__imp__sub_8313E348) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3124
	ctx.r4.s64 = ctx.r11.s64 + 3124;
	// bl 0x82429b48
	ctx.lr = 0x8313E364;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5330(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5330, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E380"))) PPC_WEAK_FUNC(sub_8313E380);
PPC_FUNC_IMPL(__imp__sub_8313E380) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3128
	ctx.r4.s64 = ctx.r11.s64 + 3128;
	// bl 0x82429b48
	ctx.lr = 0x8313E39C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1665(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1665, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E3B8"))) PPC_WEAK_FUNC(sub_8313E3B8);
PPC_FUNC_IMPL(__imp__sub_8313E3B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3132
	ctx.r4.s64 = ctx.r11.s64 + 3132;
	// bl 0x82429b48
	ctx.lr = 0x8313E3D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3118(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3118, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E3F0"))) PPC_WEAK_FUNC(sub_8313E3F0);
PPC_FUNC_IMPL(__imp__sub_8313E3F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3136
	ctx.r4.s64 = ctx.r11.s64 + 3136;
	// bl 0x82429b48
	ctx.lr = 0x8313E40C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,91(r11)
	PPC_STORE_U8(ctx.r11.u32 + 91, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E428"))) PPC_WEAK_FUNC(sub_8313E428);
PPC_FUNC_IMPL(__imp__sub_8313E428) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3140
	ctx.r4.s64 = ctx.r11.s64 + 3140;
	// bl 0x82429b48
	ctx.lr = 0x8313E444;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5052(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5052, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E460"))) PPC_WEAK_FUNC(sub_8313E460);
PPC_FUNC_IMPL(__imp__sub_8313E460) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3144
	ctx.r4.s64 = ctx.r11.s64 + 3144;
	// bl 0x82429b48
	ctx.lr = 0x8313E47C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-198(r11)
	PPC_STORE_U8(ctx.r11.u32 + -198, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E498"))) PPC_WEAK_FUNC(sub_8313E498);
PPC_FUNC_IMPL(__imp__sub_8313E498) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3148
	ctx.r4.s64 = ctx.r11.s64 + 3148;
	// bl 0x82429b48
	ctx.lr = 0x8313E4B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2785(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2785, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E4D0"))) PPC_WEAK_FUNC(sub_8313E4D0);
PPC_FUNC_IMPL(__imp__sub_8313E4D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3152
	ctx.r4.s64 = ctx.r11.s64 + 3152;
	// bl 0x82429b48
	ctx.lr = 0x8313E4EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3347(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3347, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E508"))) PPC_WEAK_FUNC(sub_8313E508);
PPC_FUNC_IMPL(__imp__sub_8313E508) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3156
	ctx.r4.s64 = ctx.r11.s64 + 3156;
	// bl 0x82429b48
	ctx.lr = 0x8313E524;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,755(r11)
	PPC_STORE_U8(ctx.r11.u32 + 755, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E540"))) PPC_WEAK_FUNC(sub_8313E540);
PPC_FUNC_IMPL(__imp__sub_8313E540) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3160
	ctx.r4.s64 = ctx.r11.s64 + 3160;
	// bl 0x82429b48
	ctx.lr = 0x8313E55C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4603(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4603, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E578"))) PPC_WEAK_FUNC(sub_8313E578);
PPC_FUNC_IMPL(__imp__sub_8313E578) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3164
	ctx.r4.s64 = ctx.r11.s64 + 3164;
	// bl 0x82429b48
	ctx.lr = 0x8313E594;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-567(r11)
	PPC_STORE_U8(ctx.r11.u32 + -567, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E5B0"))) PPC_WEAK_FUNC(sub_8313E5B0);
PPC_FUNC_IMPL(__imp__sub_8313E5B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3168
	ctx.r4.s64 = ctx.r11.s64 + 3168;
	// bl 0x82429b48
	ctx.lr = 0x8313E5CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3639(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3639, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E5E8"))) PPC_WEAK_FUNC(sub_8313E5E8);
PPC_FUNC_IMPL(__imp__sub_8313E5E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3172
	ctx.r4.s64 = ctx.r11.s64 + 3172;
	// bl 0x82429b48
	ctx.lr = 0x8313E604;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5130(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5130, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E620"))) PPC_WEAK_FUNC(sub_8313E620);
PPC_FUNC_IMPL(__imp__sub_8313E620) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3176
	ctx.r4.s64 = ctx.r11.s64 + 3176;
	// bl 0x82429b48
	ctx.lr = 0x8313E63C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4248(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4248, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E658"))) PPC_WEAK_FUNC(sub_8313E658);
PPC_FUNC_IMPL(__imp__sub_8313E658) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3180
	ctx.r4.s64 = ctx.r11.s64 + 3180;
	// bl 0x82429b48
	ctx.lr = 0x8313E674;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2443(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2443, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E690"))) PPC_WEAK_FUNC(sub_8313E690);
PPC_FUNC_IMPL(__imp__sub_8313E690) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3184
	ctx.r4.s64 = ctx.r11.s64 + 3184;
	// bl 0x82429b48
	ctx.lr = 0x8313E6AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,361(r11)
	PPC_STORE_U8(ctx.r11.u32 + 361, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E6C8"))) PPC_WEAK_FUNC(sub_8313E6C8);
PPC_FUNC_IMPL(__imp__sub_8313E6C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3188
	ctx.r4.s64 = ctx.r11.s64 + 3188;
	// bl 0x82429b48
	ctx.lr = 0x8313E6E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2034(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2034, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E700"))) PPC_WEAK_FUNC(sub_8313E700);
PPC_FUNC_IMPL(__imp__sub_8313E700) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3192
	ctx.r4.s64 = ctx.r11.s64 + 3192;
	// bl 0x82429b48
	ctx.lr = 0x8313E71C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3637(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3637, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E738"))) PPC_WEAK_FUNC(sub_8313E738);
PPC_FUNC_IMPL(__imp__sub_8313E738) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3196
	ctx.r4.s64 = ctx.r11.s64 + 3196;
	// bl 0x82429b48
	ctx.lr = 0x8313E754;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,375(r11)
	PPC_STORE_U8(ctx.r11.u32 + 375, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E770"))) PPC_WEAK_FUNC(sub_8313E770);
PPC_FUNC_IMPL(__imp__sub_8313E770) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3200
	ctx.r4.s64 = ctx.r11.s64 + 3200;
	// bl 0x82429b48
	ctx.lr = 0x8313E78C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3183(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3183, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E7A8"))) PPC_WEAK_FUNC(sub_8313E7A8);
PPC_FUNC_IMPL(__imp__sub_8313E7A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3204
	ctx.r4.s64 = ctx.r11.s64 + 3204;
	// bl 0x82429b48
	ctx.lr = 0x8313E7C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4687(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4687, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E7E0"))) PPC_WEAK_FUNC(sub_8313E7E0);
PPC_FUNC_IMPL(__imp__sub_8313E7E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3208
	ctx.r4.s64 = ctx.r11.s64 + 3208;
	// bl 0x82429b48
	ctx.lr = 0x8313E7FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3071(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3071, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E818"))) PPC_WEAK_FUNC(sub_8313E818);
PPC_FUNC_IMPL(__imp__sub_8313E818) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3212
	ctx.r4.s64 = ctx.r11.s64 + 3212;
	// bl 0x82429b48
	ctx.lr = 0x8313E834;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2272(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2272, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E850"))) PPC_WEAK_FUNC(sub_8313E850);
PPC_FUNC_IMPL(__imp__sub_8313E850) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3216
	ctx.r4.s64 = ctx.r11.s64 + 3216;
	// bl 0x82429b48
	ctx.lr = 0x8313E86C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4175(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4175, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E888"))) PPC_WEAK_FUNC(sub_8313E888);
PPC_FUNC_IMPL(__imp__sub_8313E888) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3220
	ctx.r4.s64 = ctx.r11.s64 + 3220;
	// bl 0x82429b48
	ctx.lr = 0x8313E8A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-442(r11)
	PPC_STORE_U8(ctx.r11.u32 + -442, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E8C0"))) PPC_WEAK_FUNC(sub_8313E8C0);
PPC_FUNC_IMPL(__imp__sub_8313E8C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// bl 0x82429b48
	ctx.lr = 0x8313E8DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,873(r11)
	PPC_STORE_U8(ctx.r11.u32 + 873, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E8F8"))) PPC_WEAK_FUNC(sub_8313E8F8);
PPC_FUNC_IMPL(__imp__sub_8313E8F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3228
	ctx.r4.s64 = ctx.r11.s64 + 3228;
	// bl 0x82429b48
	ctx.lr = 0x8313E914;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1168(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1168, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E930"))) PPC_WEAK_FUNC(sub_8313E930);
PPC_FUNC_IMPL(__imp__sub_8313E930) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3232
	ctx.r4.s64 = ctx.r11.s64 + 3232;
	// bl 0x82429b48
	ctx.lr = 0x8313E94C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1051(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1051, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E968"))) PPC_WEAK_FUNC(sub_8313E968);
PPC_FUNC_IMPL(__imp__sub_8313E968) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3236
	ctx.r4.s64 = ctx.r11.s64 + 3236;
	// bl 0x82429b48
	ctx.lr = 0x8313E984;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3142(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3142, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E9A0"))) PPC_WEAK_FUNC(sub_8313E9A0);
PPC_FUNC_IMPL(__imp__sub_8313E9A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3240
	ctx.r4.s64 = ctx.r11.s64 + 3240;
	// bl 0x82429b48
	ctx.lr = 0x8313E9BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4109(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4109, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E9D8"))) PPC_WEAK_FUNC(sub_8313E9D8);
PPC_FUNC_IMPL(__imp__sub_8313E9D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3244
	ctx.r4.s64 = ctx.r11.s64 + 3244;
	// bl 0x82429b48
	ctx.lr = 0x8313E9F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4994(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4994, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EA10"))) PPC_WEAK_FUNC(sub_8313EA10);
PPC_FUNC_IMPL(__imp__sub_8313EA10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3248
	ctx.r4.s64 = ctx.r11.s64 + 3248;
	// bl 0x82429b48
	ctx.lr = 0x8313EA2C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4011(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4011, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EA48"))) PPC_WEAK_FUNC(sub_8313EA48);
PPC_FUNC_IMPL(__imp__sub_8313EA48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3252
	ctx.r4.s64 = ctx.r11.s64 + 3252;
	// bl 0x82429b48
	ctx.lr = 0x8313EA64;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,243(r11)
	PPC_STORE_U8(ctx.r11.u32 + 243, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EA80"))) PPC_WEAK_FUNC(sub_8313EA80);
PPC_FUNC_IMPL(__imp__sub_8313EA80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3256
	ctx.r4.s64 = ctx.r11.s64 + 3256;
	// bl 0x82429b48
	ctx.lr = 0x8313EA9C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1856(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1856, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EAB8"))) PPC_WEAK_FUNC(sub_8313EAB8);
PPC_FUNC_IMPL(__imp__sub_8313EAB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3260
	ctx.r4.s64 = ctx.r11.s64 + 3260;
	// bl 0x82429b48
	ctx.lr = 0x8313EAD4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4877(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4877, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EAF0"))) PPC_WEAK_FUNC(sub_8313EAF0);
PPC_FUNC_IMPL(__imp__sub_8313EAF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3264
	ctx.r4.s64 = ctx.r11.s64 + 3264;
	// bl 0x82429b48
	ctx.lr = 0x8313EB0C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4630(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4630, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EB28"))) PPC_WEAK_FUNC(sub_8313EB28);
PPC_FUNC_IMPL(__imp__sub_8313EB28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3268
	ctx.r4.s64 = ctx.r11.s64 + 3268;
	// bl 0x82429b48
	ctx.lr = 0x8313EB44;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4784(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4784, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EB60"))) PPC_WEAK_FUNC(sub_8313EB60);
PPC_FUNC_IMPL(__imp__sub_8313EB60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3272
	ctx.r4.s64 = ctx.r11.s64 + 3272;
	// bl 0x82429b48
	ctx.lr = 0x8313EB7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-446(r11)
	PPC_STORE_U8(ctx.r11.u32 + -446, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EB98"))) PPC_WEAK_FUNC(sub_8313EB98);
PPC_FUNC_IMPL(__imp__sub_8313EB98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3276
	ctx.r4.s64 = ctx.r11.s64 + 3276;
	// bl 0x82429b48
	ctx.lr = 0x8313EBB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5331(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5331, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EBD0"))) PPC_WEAK_FUNC(sub_8313EBD0);
PPC_FUNC_IMPL(__imp__sub_8313EBD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3280
	ctx.r4.s64 = ctx.r11.s64 + 3280;
	// bl 0x82429b48
	ctx.lr = 0x8313EBEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5247(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5247, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EC08"))) PPC_WEAK_FUNC(sub_8313EC08);
PPC_FUNC_IMPL(__imp__sub_8313EC08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3284
	ctx.r4.s64 = ctx.r11.s64 + 3284;
	// bl 0x82429b48
	ctx.lr = 0x8313EC24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 448, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EC40"))) PPC_WEAK_FUNC(sub_8313EC40);
PPC_FUNC_IMPL(__imp__sub_8313EC40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3288
	ctx.r4.s64 = ctx.r11.s64 + 3288;
	// bl 0x82429b48
	ctx.lr = 0x8313EC5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4652(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4652, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EC78"))) PPC_WEAK_FUNC(sub_8313EC78);
PPC_FUNC_IMPL(__imp__sub_8313EC78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3292
	ctx.r4.s64 = ctx.r11.s64 + 3292;
	// bl 0x82429b48
	ctx.lr = 0x8313EC94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-651(r11)
	PPC_STORE_U8(ctx.r11.u32 + -651, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ECB0"))) PPC_WEAK_FUNC(sub_8313ECB0);
PPC_FUNC_IMPL(__imp__sub_8313ECB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3296
	ctx.r4.s64 = ctx.r11.s64 + 3296;
	// bl 0x82429b48
	ctx.lr = 0x8313ECCC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3390(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3390, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ECE8"))) PPC_WEAK_FUNC(sub_8313ECE8);
PPC_FUNC_IMPL(__imp__sub_8313ECE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3300
	ctx.r4.s64 = ctx.r11.s64 + 3300;
	// bl 0x82429b48
	ctx.lr = 0x8313ED04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2241, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ED20"))) PPC_WEAK_FUNC(sub_8313ED20);
PPC_FUNC_IMPL(__imp__sub_8313ED20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3304
	ctx.r4.s64 = ctx.r11.s64 + 3304;
	// bl 0x82429b48
	ctx.lr = 0x8313ED3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1491(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1491, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ED58"))) PPC_WEAK_FUNC(sub_8313ED58);
PPC_FUNC_IMPL(__imp__sub_8313ED58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3308
	ctx.r4.s64 = ctx.r11.s64 + 3308;
	// bl 0x82429b48
	ctx.lr = 0x8313ED74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2440(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2440, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ED90"))) PPC_WEAK_FUNC(sub_8313ED90);
PPC_FUNC_IMPL(__imp__sub_8313ED90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3312
	ctx.r4.s64 = ctx.r11.s64 + 3312;
	// bl 0x82429b48
	ctx.lr = 0x8313EDAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3845(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3845, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EDC8"))) PPC_WEAK_FUNC(sub_8313EDC8);
PPC_FUNC_IMPL(__imp__sub_8313EDC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3316
	ctx.r4.s64 = ctx.r11.s64 + 3316;
	// bl 0x82429b48
	ctx.lr = 0x8313EDE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3139(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3139, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EE00"))) PPC_WEAK_FUNC(sub_8313EE00);
PPC_FUNC_IMPL(__imp__sub_8313EE00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3320
	ctx.r4.s64 = ctx.r11.s64 + 3320;
	// bl 0x82429b48
	ctx.lr = 0x8313EE1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4155(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4155, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EE38"))) PPC_WEAK_FUNC(sub_8313EE38);
PPC_FUNC_IMPL(__imp__sub_8313EE38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3324
	ctx.r4.s64 = ctx.r11.s64 + 3324;
	// bl 0x82429b48
	ctx.lr = 0x8313EE54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-324(r11)
	PPC_STORE_U8(ctx.r11.u32 + -324, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EE70"))) PPC_WEAK_FUNC(sub_8313EE70);
PPC_FUNC_IMPL(__imp__sub_8313EE70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3328
	ctx.r4.s64 = ctx.r11.s64 + 3328;
	// bl 0x82429b48
	ctx.lr = 0x8313EE8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-441(r11)
	PPC_STORE_U8(ctx.r11.u32 + -441, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EEA8"))) PPC_WEAK_FUNC(sub_8313EEA8);
PPC_FUNC_IMPL(__imp__sub_8313EEA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3332
	ctx.r4.s64 = ctx.r11.s64 + 3332;
	// bl 0x82429b48
	ctx.lr = 0x8313EEC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4368(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4368, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EEE0"))) PPC_WEAK_FUNC(sub_8313EEE0);
PPC_FUNC_IMPL(__imp__sub_8313EEE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3336
	ctx.r4.s64 = ctx.r11.s64 + 3336;
	// bl 0x82429b48
	ctx.lr = 0x8313EEFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2979(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2979, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EF18"))) PPC_WEAK_FUNC(sub_8313EF18);
PPC_FUNC_IMPL(__imp__sub_8313EF18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3340
	ctx.r4.s64 = ctx.r11.s64 + 3340;
	// bl 0x82429b48
	ctx.lr = 0x8313EF34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4487(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4487, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EF50"))) PPC_WEAK_FUNC(sub_8313EF50);
PPC_FUNC_IMPL(__imp__sub_8313EF50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3344
	ctx.r4.s64 = ctx.r11.s64 + 3344;
	// bl 0x82429b48
	ctx.lr = 0x8313EF6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,887(r11)
	PPC_STORE_U8(ctx.r11.u32 + 887, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EF88"))) PPC_WEAK_FUNC(sub_8313EF88);
PPC_FUNC_IMPL(__imp__sub_8313EF88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3348
	ctx.r4.s64 = ctx.r11.s64 + 3348;
	// bl 0x82429b48
	ctx.lr = 0x8313EFA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4450(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4450, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EFC0"))) PPC_WEAK_FUNC(sub_8313EFC0);
PPC_FUNC_IMPL(__imp__sub_8313EFC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3352
	ctx.r4.s64 = ctx.r11.s64 + 3352;
	// bl 0x82429b48
	ctx.lr = 0x8313EFDC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313EFF8"))) PPC_WEAK_FUNC(sub_8313EFF8);
PPC_FUNC_IMPL(__imp__sub_8313EFF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3356
	ctx.r4.s64 = ctx.r11.s64 + 3356;
	// bl 0x82429b48
	ctx.lr = 0x8313F014;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3566(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3566, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F030"))) PPC_WEAK_FUNC(sub_8313F030);
PPC_FUNC_IMPL(__imp__sub_8313F030) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3360
	ctx.r4.s64 = ctx.r11.s64 + 3360;
	// bl 0x82429b48
	ctx.lr = 0x8313F04C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1714(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1714, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F068"))) PPC_WEAK_FUNC(sub_8313F068);
PPC_FUNC_IMPL(__imp__sub_8313F068) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3364
	ctx.r4.s64 = ctx.r11.s64 + 3364;
	// bl 0x82429b48
	ctx.lr = 0x8313F084;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2661(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2661, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F0A0"))) PPC_WEAK_FUNC(sub_8313F0A0);
PPC_FUNC_IMPL(__imp__sub_8313F0A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3368
	ctx.r4.s64 = ctx.r11.s64 + 3368;
	// bl 0x82429b48
	ctx.lr = 0x8313F0BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1703(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1703, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F0D8"))) PPC_WEAK_FUNC(sub_8313F0D8);
PPC_FUNC_IMPL(__imp__sub_8313F0D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3372
	ctx.r4.s64 = ctx.r11.s64 + 3372;
	// bl 0x82429b48
	ctx.lr = 0x8313F0F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3421(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3421, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F110"))) PPC_WEAK_FUNC(sub_8313F110);
PPC_FUNC_IMPL(__imp__sub_8313F110) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3376
	ctx.r4.s64 = ctx.r11.s64 + 3376;
	// bl 0x82429b48
	ctx.lr = 0x8313F12C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,511(r11)
	PPC_STORE_U8(ctx.r11.u32 + 511, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F148"))) PPC_WEAK_FUNC(sub_8313F148);
PPC_FUNC_IMPL(__imp__sub_8313F148) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3380
	ctx.r4.s64 = ctx.r11.s64 + 3380;
	// bl 0x82429b48
	ctx.lr = 0x8313F164;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3601(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3601, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F180"))) PPC_WEAK_FUNC(sub_8313F180);
PPC_FUNC_IMPL(__imp__sub_8313F180) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3384
	ctx.r4.s64 = ctx.r11.s64 + 3384;
	// bl 0x82429b48
	ctx.lr = 0x8313F19C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3249(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3249, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F1B8"))) PPC_WEAK_FUNC(sub_8313F1B8);
PPC_FUNC_IMPL(__imp__sub_8313F1B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3388
	ctx.r4.s64 = ctx.r11.s64 + 3388;
	// bl 0x82429b48
	ctx.lr = 0x8313F1D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,723(r11)
	PPC_STORE_U8(ctx.r11.u32 + 723, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F1F0"))) PPC_WEAK_FUNC(sub_8313F1F0);
PPC_FUNC_IMPL(__imp__sub_8313F1F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,3392
	ctx.r4.s64 = ctx.r11.s64 + 3392;
	// bl 0x82429b48
	ctx.lr = 0x8313F20C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4920(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4920, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F228"))) PPC_WEAK_FUNC(sub_8313F228);
PPC_FUNC_IMPL(__imp__sub_8313F228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23608
	ctx.r11.s64 = ctx.r11.s64 + -23608;
	// addi r10,r10,19248
	ctx.r10.s64 = ctx.r10.s64 + 19248;
	// lis r5,-32140
	ctx.r5.s64 = -2106327040;
	// lis r6,-32140
	ctx.r6.s64 = -2106327040;
	// addi r5,r5,19376
	ctx.r5.s64 = ctx.r5.s64 + 19376;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,-4040
	ctx.r6.s64 = ctx.r6.s64 + -4040;
	// lis r7,-32140
	ctx.r7.s64 = -2106327040;
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,-4160
	ctx.r7.s64 = ctx.r7.s64 + -4160;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,-4280
	ctx.r8.s64 = ctx.r8.s64 + -4280;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,-4400
	ctx.r9.s64 = ctx.r9.s64 + -4400;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,14040
	ctx.r11.s64 = ctx.r11.s64 + 14040;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F2F0"))) PPC_WEAK_FUNC(sub_8313F2F0);
PPC_FUNC_IMPL(__imp__sub_8313F2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r11,r11,26648
	ctx.r11.s64 = ctx.r11.s64 + 26648;
	// addi r10,r10,26048
	ctx.r10.s64 = ctx.r10.s64 + 26048;
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// addi r9,r9,26408
	ctx.r9.s64 = ctx.r9.s64 + 26408;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r11,r11,16420
	ctx.r11.s64 = ctx.r11.s64 + 16420;
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
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F358"))) PPC_WEAK_FUNC(sub_8313F358);
PPC_FUNC_IMPL(__imp__sub_8313F358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,4928
	ctx.r11.s64 = ctx.r11.s64 + 4928;
	// addi r10,r10,12400
	ctx.r10.s64 = ctx.r10.s64 + 12400;
	// lis r6,-32140
	ctx.r6.s64 = -2106327040;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// addi r6,r6,12616
	ctx.r6.s64 = ctx.r6.s64 + 12616;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r7,r7,27312
	ctx.r7.s64 = ctx.r7.s64 + 27312;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// addi r8,r8,4752
	ctx.r8.s64 = ctx.r8.s64 + 4752;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r9,r9,4528
	ctx.r9.s64 = ctx.r9.s64 + 4528;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,13872
	ctx.r11.s64 = ctx.r11.s64 + 13872;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F408"))) PPC_WEAK_FUNC(sub_8313F408);
PPC_FUNC_IMPL(__imp__sub_8313F408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,28648
	ctx.r11.s64 = ctx.r11.s64 + 28648;
	// addi r10,r10,18808
	ctx.r10.s64 = ctx.r10.s64 + 18808;
	// lis r4,-32171
	ctx.r4.s64 = -2108358656;
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// addi r4,r4,15888
	ctx.r4.s64 = ctx.r4.s64 + 15888;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r5,r5,29632
	ctx.r5.s64 = ctx.r5.s64 + 29632;
	// lis r6,-32142
	ctx.r6.s64 = -2106458112;
	// lis r7,-32142
	ctx.r7.s64 = -2106458112;
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// addi r6,r6,4752
	ctx.r6.s64 = ctx.r6.s64 + 4752;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r7,r7,16896
	ctx.r7.s64 = ctx.r7.s64 + 16896;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r8,r8,16728
	ctx.r8.s64 = ctx.r8.s64 + 16728;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r9,r9,16616
	ctx.r9.s64 = ctx.r9.s64 + 16616;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,15736
	ctx.r11.s64 = ctx.r11.s64 + 15736;
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F4E8"))) PPC_WEAK_FUNC(sub_8313F4E8);
PPC_FUNC_IMPL(__imp__sub_8313F4E8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e40
	ctx.lr = 0x8313F4F0;
	__savegprlr_18(ctx, base);
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// lis r21,-32117
	ctx.r21.s64 = -2104819712;
	// addi r10,r10,-24168
	ctx.r10.s64 = ctx.r10.s64 + -24168;
	// lis r22,-32117
	ctx.r22.s64 = -2104819712;
	// lis r23,-32117
	ctx.r23.s64 = -2104819712;
	// lis r24,-32117
	ctx.r24.s64 = -2104819712;
	// lis r25,-32118
	ctx.r25.s64 = -2104885248;
	// lis r26,-32118
	ctx.r26.s64 = -2104885248;
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// lis r27,-32117
	ctx.r27.s64 = -2104819712;
	// lis r28,-32118
	ctx.r28.s64 = -2104885248;
	// lis r29,-32118
	ctx.r29.s64 = -2104885248;
	// lis r30,-32115
	ctx.r30.s64 = -2104688640;
	// lis r31,-32115
	ctx.r31.s64 = -2104688640;
	// lis r3,-32116
	ctx.r3.s64 = -2104754176;
	// lis r4,-32115
	ctx.r4.s64 = -2104688640;
	// lis r5,-32115
	ctx.r5.s64 = -2104688640;
	// lis r6,-32115
	ctx.r6.s64 = -2104688640;
	// lis r7,-32115
	ctx.r7.s64 = -2104688640;
	// lis r8,-32118
	ctx.r8.s64 = -2104885248;
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r21,r21,3720
	ctx.r21.s64 = ctx.r21.s64 + 3720;
	// addi r22,r22,3360
	ctx.r22.s64 = ctx.r22.s64 + 3360;
	// addi r23,r23,3176
	ctx.r23.s64 = ctx.r23.s64 + 3176;
	// addi r24,r24,2944
	ctx.r24.s64 = ctx.r24.s64 + 2944;
	// addi r25,r25,-24320
	ctx.r25.s64 = ctx.r25.s64 + -24320;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r26,r26,-24480
	ctx.r26.s64 = ctx.r26.s64 + -24480;
	// stw r21,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r21.u32);
	// addi r27,r27,2568
	ctx.r27.s64 = ctx.r27.s64 + 2568;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r28,r28,-24608
	ctx.r28.s64 = ctx.r28.s64 + -24608;
	// stw r22,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r22.u32);
	// addi r29,r29,-24744
	ctx.r29.s64 = ctx.r29.s64 + -24744;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r30,r30,-728
	ctx.r30.s64 = ctx.r30.s64 + -728;
	// stw r23,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r23.u32);
	// addi r31,r31,25056
	ctx.r31.s64 = ctx.r31.s64 + 25056;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r3,r3,6848
	ctx.r3.s64 = ctx.r3.s64 + 6848;
	// stw r24,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r24.u32);
	// addi r4,r4,-984
	ctx.r4.s64 = ctx.r4.s64 + -984;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r5,r5,-1200
	ctx.r5.s64 = ctx.r5.s64 + -1200;
	// stw r25,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r25.u32);
	// addi r6,r6,-1496
	ctx.r6.s64 = ctx.r6.s64 + -1496;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r7,r7,-1728
	ctx.r7.s64 = ctx.r7.s64 + -1728;
	// stw r26,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r26.u32);
	// addi r8,r8,25768
	ctx.r8.s64 = ctx.r8.s64 + 25768;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// addi r9,r9,-24840
	ctx.r9.s64 = ctx.r9.s64 + -24840;
	// stw r27,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r27.u32);
	// addi r11,r11,-14480
	ctx.r11.s64 = ctx.r11.s64 + -14480;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r28,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r28.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stw r29,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r29.u32);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r30,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r30.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r31,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r31.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r3,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r3.u32);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// stw r4,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r4.u32);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r5,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r5.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r6,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r6.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// stw r7,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r7.u32);
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// stw r8,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r8.u32);
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// stw r9,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r9.u32);
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// stw r11,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r11.u32);
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// lis r18,-32129
	ctx.r18.s64 = -2105606144;
	// addi r11,r11,14248
	ctx.r11.s64 = ctx.r11.s64 + 14248;
	// lis r19,-32115
	ctx.r19.s64 = -2104688640;
	// lis r20,-32117
	ctx.r20.s64 = -2104819712;
	// lis r21,-32118
	ctx.r21.s64 = -2104885248;
	// lis r22,-32118
	ctx.r22.s64 = -2104885248;
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// lis r23,-32116
	ctx.r23.s64 = -2104754176;
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// addi r18,r18,-7248
	ctx.r18.s64 = ctx.r18.s64 + -7248;
	// addi r19,r19,-2312
	ctx.r19.s64 = ctx.r19.s64 + -2312;
	// addi r20,r20,2368
	ctx.r20.s64 = ctx.r20.s64 + 2368;
	// addi r21,r21,-25352
	ctx.r21.s64 = ctx.r21.s64 + -25352;
	// addi r22,r22,-25544
	ctx.r22.s64 = ctx.r22.s64 + -25544;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// addi r23,r23,4664
	ctx.r23.s64 = ctx.r23.s64 + 4664;
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lis r24,-32116
	ctx.r24.s64 = -2104754176;
	// lis r25,-32115
	ctx.r25.s64 = -2104688640;
	// lis r26,-32115
	ctx.r26.s64 = -2104688640;
	// lis r27,-32118
	ctx.r27.s64 = -2104885248;
	// lis r28,-32116
	ctx.r28.s64 = -2104754176;
	// std r9,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r9.u64);
	// lis r29,-32116
	ctx.r29.s64 = -2104754176;
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lis r30,-32115
	ctx.r30.s64 = -2104688640;
	// lis r31,-32117
	ctx.r31.s64 = -2104819712;
	// lis r3,-32116
	ctx.r3.s64 = -2104754176;
	// lis r4,-32116
	ctx.r4.s64 = -2104754176;
	// lis r5,-32118
	ctx.r5.s64 = -2104885248;
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// lis r6,-32116
	ctx.r6.s64 = -2104754176;
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lis r7,-32115
	ctx.r7.s64 = -2104688640;
	// lis r8,-32118
	ctx.r8.s64 = -2104885248;
	// std r9,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r9,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r9,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,124(r11)
	PPC_STORE_U64(ctx.r11.u32 + 124, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,148(r11)
	PPC_STORE_U64(ctx.r11.u32 + 148, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// stw r23,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r23.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// std r9,172(r11)
	PPC_STORE_U64(ctx.r11.u32 + 172, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// stw r22,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r22.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// std r9,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// stw r21,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r21.u32);
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// std r9,196(r11)
	PPC_STORE_U64(ctx.r11.u32 + 196, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// stw r20,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r20.u32);
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// std r9,208(r11)
	PPC_STORE_U64(ctx.r11.u32 + 208, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// stw r19,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r19.u32);
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// std r9,220(r11)
	PPC_STORE_U64(ctx.r11.u32 + 220, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// stw r18,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r18.u32);
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// std r9,232(r11)
	PPC_STORE_U64(ctx.r11.u32 + 232, ctx.r9.u64);
	// lis r9,-32115
	ctx.r9.s64 = -2104688640;
	// addi r9,r9,-3096
	ctx.r9.s64 = ctx.r9.s64 + -3096;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// addi r24,r24,4552
	ctx.r24.s64 = ctx.r24.s64 + 4552;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// addi r25,r25,-3256
	ctx.r25.s64 = ctx.r25.s64 + -3256;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r26,r26,24792
	ctx.r26.s64 = ctx.r26.s64 + 24792;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// addi r27,r27,24784
	ctx.r27.s64 = ctx.r27.s64 + 24784;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r9,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// addi r28,r28,3720
	ctx.r28.s64 = ctx.r28.s64 + 3720;
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// addi r29,r29,2880
	ctx.r29.s64 = ctx.r29.s64 + 2880;
	// stw r24,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r24.u32);
	// addi r30,r30,-2560
	ctx.r30.s64 = ctx.r30.s64 + -2560;
	// stw r25,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r25.u32);
	// addi r31,r31,1184
	ctx.r31.s64 = ctx.r31.s64 + 1184;
	// stw r26,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r26.u32);
	// addi r3,r3,432
	ctx.r3.s64 = ctx.r3.s64 + 432;
	// stw r27,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r27.u32);
	// addi r4,r4,144
	ctx.r4.s64 = ctx.r4.s64 + 144;
	// std r9,244(r11)
	PPC_STORE_U64(ctx.r11.u32 + 244, ctx.r9.u64);
	// addi r5,r5,22184
	ctx.r5.s64 = ctx.r5.s64 + 22184;
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// addi r6,r6,-72
	ctx.r6.s64 = ctx.r6.s64 + -72;
	// stw r28,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r28.u32);
	// addi r7,r7,-2824
	ctx.r7.s64 = ctx.r7.s64 + -2824;
	// stw r29,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r29.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stw r30,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r30.u32);
	// std r9,256(r11)
	PPC_STORE_U64(ctx.r11.u32 + 256, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r3,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r3.u32);
	// std r9,268(r11)
	PPC_STORE_U64(ctx.r11.u32 + 268, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// stw r4,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r4.u32);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// stw r5,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r5.u32);
	// std r9,280(r11)
	PPC_STORE_U64(ctx.r11.u32 + 280, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r6,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r6.u32);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stw r7,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r7.u32);
	// std r9,292(r11)
	PPC_STORE_U64(ctx.r11.u32 + 292, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// std r9,304(r11)
	PPC_STORE_U64(ctx.r11.u32 + 304, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,316(r11)
	PPC_STORE_U64(ctx.r11.u32 + 316, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,328(r11)
	PPC_STORE_U64(ctx.r11.u32 + 328, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,340(r11)
	PPC_STORE_U64(ctx.r11.u32 + 340, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,352(r11)
	PPC_STORE_U64(ctx.r11.u32 + 352, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,364(r11)
	PPC_STORE_U64(ctx.r11.u32 + 364, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r9,376(r11)
	PPC_STORE_U64(ctx.r11.u32 + 376, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,388(r11)
	PPC_STORE_U64(ctx.r11.u32 + 388, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r9,400(r11)
	PPC_STORE_U64(ctx.r11.u32 + 400, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,412(r11)
	PPC_STORE_U64(ctx.r11.u32 + 412, ctx.r9.u64);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r9,424(r11)
	PPC_STORE_U64(ctx.r11.u32 + 424, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,436(r11)
	PPC_STORE_U64(ctx.r11.u32 + 436, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,448(r11)
	PPC_STORE_U64(ctx.r11.u32 + 448, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,460(r11)
	PPC_STORE_U64(ctx.r11.u32 + 460, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r9,472(r11)
	PPC_STORE_U64(ctx.r11.u32 + 472, ctx.r9.u64);
	// addi r9,r8,25344
	ctx.r9.s64 = ctx.r8.s64 + 25344;
	// lis r19,-32118
	ctx.r19.s64 = -2104885248;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// lis r20,-32117
	ctx.r20.s64 = -2104819712;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// lis r21,-32118
	ctx.r21.s64 = -2104885248;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// lis r22,-32118
	ctx.r22.s64 = -2104885248;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// stw r9,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r9.u32);
	// lis r23,-32115
	ctx.r23.s64 = -2104688640;
	// lis r24,-32127
	ctx.r24.s64 = -2105475072;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lis r25,-32129
	ctx.r25.s64 = -2105606144;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r26,-32127
	ctx.r26.s64 = -2105475072;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r27,-32125
	ctx.r27.s64 = -2105344000;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lis r28,-32118
	ctx.r28.s64 = -2104885248;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// lis r29,-32118
	ctx.r29.s64 = -2104885248;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// lis r30,-32115
	ctx.r30.s64 = -2104688640;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// lis r31,-32118
	ctx.r31.s64 = -2104885248;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// lis r3,-32118
	ctx.r3.s64 = -2104885248;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r4,-32118
	ctx.r4.s64 = -2104885248;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r5,-32118
	ctx.r5.s64 = -2104885248;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r6,-32118
	ctx.r6.s64 = -2104885248;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lis r7,-32118
	ctx.r7.s64 = -2104885248;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r19,r19,25144
	ctx.r19.s64 = ctx.r19.s64 + 25144;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r20,r20,1712
	ctx.r20.s64 = ctx.r20.s64 + 1712;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r21,r21,-25736
	ctx.r21.s64 = ctx.r21.s64 + -25736;
	// addi r22,r22,22704
	ctx.r22.s64 = ctx.r22.s64 + 22704;
	// addi r23,r23,-3424
	ctx.r23.s64 = ctx.r23.s64 + -3424;
	// addi r24,r24,25568
	ctx.r24.s64 = ctx.r24.s64 + 25568;
	// stw r19,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r19.u32);
	// addi r25,r25,-6840
	ctx.r25.s64 = ctx.r25.s64 + -6840;
	// stw r20,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r20.u32);
	// addi r26,r26,24160
	ctx.r26.s64 = ctx.r26.s64 + 24160;
	// stw r21,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r21.u32);
	// addi r27,r27,21856
	ctx.r27.s64 = ctx.r27.s64 + 21856;
	// stw r22,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r22.u32);
	// addi r28,r28,-27448
	ctx.r28.s64 = ctx.r28.s64 + -27448;
	// stw r23,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r23.u32);
	// addi r29,r29,-25896
	ctx.r29.s64 = ctx.r29.s64 + -25896;
	// stw r24,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r24.u32);
	// addi r30,r30,24544
	ctx.r30.s64 = ctx.r30.s64 + 24544;
	// stw r25,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r25.u32);
	// addi r31,r31,23472
	ctx.r31.s64 = ctx.r31.s64 + 23472;
	// stw r26,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r26.u32);
	// addi r3,r3,-26136
	ctx.r3.s64 = ctx.r3.s64 + -26136;
	// stw r27,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r27.u32);
	// addi r4,r4,23136
	ctx.r4.s64 = ctx.r4.s64 + 23136;
	// stw r28,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r28.u32);
	// addi r5,r5,22872
	ctx.r5.s64 = ctx.r5.s64 + 22872;
	// stw r29,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r29.u32);
	// addi r6,r6,-25152
	ctx.r6.s64 = ctx.r6.s64 + -25152;
	// stw r30,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r30.u32);
	// addi r7,r7,-26320
	ctx.r7.s64 = ctx.r7.s64 + -26320;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// addi r9,r9,-26712
	ctx.r9.s64 = ctx.r9.s64 + -26712;
	// stw r3,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r3.u32);
	// lis r8,-32118
	ctx.r8.s64 = -2104885248;
	// stw r4,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r4.u32);
	// stw r5,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r5.u32);
	// stw r6,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r6.u32);
	// stw r7,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r7.u32);
	// stw r9,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// std r9,484(r11)
	PPC_STORE_U64(ctx.r11.u32 + 484, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// std r9,496(r11)
	PPC_STORE_U64(ctx.r11.u32 + 496, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// std r9,508(r11)
	PPC_STORE_U64(ctx.r11.u32 + 508, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// stw r10,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r10.u32);
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// std r9,520(r11)
	PPC_STORE_U64(ctx.r11.u32 + 520, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r9,532(r11)
	PPC_STORE_U64(ctx.r11.u32 + 532, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,544(r11)
	PPC_STORE_U64(ctx.r11.u32 + 544, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,556(r11)
	PPC_STORE_U64(ctx.r11.u32 + 556, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,568(r11)
	PPC_STORE_U64(ctx.r11.u32 + 568, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,580(r11)
	PPC_STORE_U64(ctx.r11.u32 + 580, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,592(r11)
	PPC_STORE_U64(ctx.r11.u32 + 592, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,604(r11)
	PPC_STORE_U64(ctx.r11.u32 + 604, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r9,616(r11)
	PPC_STORE_U64(ctx.r11.u32 + 616, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,628(r11)
	PPC_STORE_U64(ctx.r11.u32 + 628, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r9,640(r11)
	PPC_STORE_U64(ctx.r11.u32 + 640, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,652(r11)
	PPC_STORE_U64(ctx.r11.u32 + 652, ctx.r9.u64);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r9,664(r11)
	PPC_STORE_U64(ctx.r11.u32 + 664, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,676(r11)
	PPC_STORE_U64(ctx.r11.u32 + 676, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,688(r11)
	PPC_STORE_U64(ctx.r11.u32 + 688, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,700(r11)
	PPC_STORE_U64(ctx.r11.u32 + 700, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r9,712(r11)
	PPC_STORE_U64(ctx.r11.u32 + 712, ctx.r9.u64);
	// addi r9,r8,-27176
	ctx.r9.s64 = ctx.r8.s64 + -27176;
	// lis r8,-32113
	ctx.r8.s64 = -2104557568;
	// addi r8,r8,13760
	ctx.r8.s64 = ctx.r8.s64 + 13760;
	// stw r9,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r9.u32);
	// lis r9,-32113
	ctx.r9.s64 = -2104557568;
	// ld r10,-272(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// addi r9,r9,13184
	ctx.r9.s64 = ctx.r9.s64 + 13184;
	// stw r8,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r8.u32);
	// std r10,724(r11)
	PPC_STORE_U64(ctx.r11.u32 + 724, ctx.r10.u64);
	// ld r10,-264(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// stw r9,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r9.u32);
	// std r10,736(r11)
	PPC_STORE_U64(ctx.r11.u32 + 736, ctx.r10.u64);
	// ld r10,-280(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r10,748(r11)
	PPC_STORE_U64(ctx.r11.u32 + 748, ctx.r10.u64);
	// ld r10,-288(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// std r10,760(r11)
	PPC_STORE_U64(ctx.r11.u32 + 760, ctx.r10.u64);
	// b 0x82e28e90
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313FAF8"))) PPC_WEAK_FUNC(sub_8313FAF8);
PPC_FUNC_IMPL(__imp__sub_8313FAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32111
	ctx.r11.s64 = -2104426496;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// addi r11,r11,17040
	ctx.r11.s64 = ctx.r11.s64 + 17040;
	// addi r10,r10,15392
	ctx.r10.s64 = ctx.r10.s64 + 15392;
	// lis r5,-32111
	ctx.r5.s64 = -2104426496;
	// lis r6,-32111
	ctx.r6.s64 = -2104426496;
	// addi r5,r5,16528
	ctx.r5.s64 = ctx.r5.s64 + 16528;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,16136
	ctx.r6.s64 = ctx.r6.s64 + 16136;
	// lis r7,-32111
	ctx.r7.s64 = -2104426496;
	// lis r8,-32111
	ctx.r8.s64 = -2104426496;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,15672
	ctx.r7.s64 = ctx.r7.s64 + 15672;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,31864
	ctx.r8.s64 = ctx.r8.s64 + 31864;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,25224
	ctx.r9.s64 = ctx.r9.s64 + 25224;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,13416
	ctx.r11.s64 = ctx.r11.s64 + 13416;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313FBC0"))) PPC_WEAK_FUNC(sub_8313FBC0);
PPC_FUNC_IMPL(__imp__sub_8313FBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,18920
	ctx.r11.s64 = ctx.r11.s64 + 18920;
	// addi r10,r10,18664
	ctx.r10.s64 = ctx.r10.s64 + 18664;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// addi r8,r8,18792
	ctx.r8.s64 = ctx.r8.s64 + 18792;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r9,r9,5224
	ctx.r9.s64 = ctx.r9.s64 + 5224;
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// addi r11,r11,13980
	ctx.r11.s64 = ctx.r11.s64 + 13980;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313FC40"))) PPC_WEAK_FUNC(sub_8313FC40);
PPC_FUNC_IMPL(__imp__sub_8313FC40) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x8313FC48;
	__savegprlr_28(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,24384
	ctx.r11.s64 = ctx.r11.s64 + 24384;
	// addi r10,r10,21488
	ctx.r10.s64 = ctx.r10.s64 + 21488;
	// lis r28,-32141
	ctx.r28.s64 = -2106392576;
	// lis r29,-32141
	ctx.r29.s64 = -2106392576;
	// addi r28,r28,23984
	ctx.r28.s64 = ctx.r28.s64 + 23984;
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// addi r29,r29,23696
	ctx.r29.s64 = ctx.r29.s64 + 23696;
	// lis r30,-32141
	ctx.r30.s64 = -2106392576;
	// lis r31,-32141
	ctx.r31.s64 = -2106392576;
	// stw r28,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r28.u32);
	// addi r30,r30,23520
	ctx.r30.s64 = ctx.r30.s64 + 23520;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// addi r31,r31,23352
	ctx.r31.s64 = ctx.r31.s64 + 23352;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// lis r3,-32141
	ctx.r3.s64 = -2106392576;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// lis r4,-32141
	ctx.r4.s64 = -2106392576;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// addi r3,r3,23128
	ctx.r3.s64 = ctx.r3.s64 + 23128;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// addi r4,r4,22848
	ctx.r4.s64 = ctx.r4.s64 + 22848;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// lis r5,-32141
	ctx.r5.s64 = -2106392576;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// addi r5,r5,22624
	ctx.r5.s64 = ctx.r5.s64 + 22624;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// addi r6,r6,22344
	ctx.r6.s64 = ctx.r6.s64 + 22344;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// lis r7,-32141
	ctx.r7.s64 = -2106392576;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r7,r7,22064
	ctx.r7.s64 = ctx.r7.s64 + 22064;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,21784
	ctx.r8.s64 = ctx.r8.s64 + 21784;
	// stw r11,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r11.u32);
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// addi r9,r9,21616
	ctx.r9.s64 = ctx.r9.s64 + 21616;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// stw r29,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r29.u32);
	// stw r30,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r30.u32);
	// stw r31,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r31.u32);
	// stw r3,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r3.u32);
	// stw r4,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r4.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-152(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// stw r5,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r5.u32);
	// stw r6,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r6.u32);
	// stw r7,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r7.u32);
	// stw r8,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r8.u32);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// stw r9,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r9.u32);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r10,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r10.u64);
	// ld r10,-88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// std r10,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r10.u64);
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// std r10,124(r11)
	PPC_STORE_U64(ctx.r11.u32 + 124, ctx.r10.u64);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r10,148(r11)
	PPC_STORE_U64(ctx.r11.u32 + 148, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r10.u64);
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313FDA0"))) PPC_WEAK_FUNC(sub_8313FDA0);
PPC_FUNC_IMPL(__imp__sub_8313FDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r11,r11,24560
	ctx.r11.s64 = ctx.r11.s64 + 24560;
	// addi r10,r10,6312
	ctx.r10.s64 = ctx.r10.s64 + 6312;
	// lis r5,-32142
	ctx.r5.s64 = -2106458112;
	// lis r6,-32142
	ctx.r6.s64 = -2106458112;
	// addi r5,r5,24272
	ctx.r5.s64 = ctx.r5.s64 + 24272;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,24032
	ctx.r6.s64 = ctx.r6.s64 + 24032;
	// lis r7,-32139
	ctx.r7.s64 = -2106261504;
	// lis r8,-32139
	ctx.r8.s64 = -2106261504;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,6488
	ctx.r7.s64 = ctx.r7.s64 + 6488;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,23536
	ctx.r8.s64 = ctx.r8.s64 + 23536;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,23312
	ctx.r9.s64 = ctx.r9.s64 + 23312;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,17128
	ctx.r11.s64 = ctx.r11.s64 + 17128;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313FE68"))) PPC_WEAK_FUNC(sub_8313FE68);
PPC_FUNC_IMPL(__imp__sub_8313FE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r11,r11,25544
	ctx.r11.s64 = ctx.r11.s64 + 25544;
	// addi r10,r10,12312
	ctx.r10.s64 = ctx.r10.s64 + 12312;
	// lis r4,-32142
	ctx.r4.s64 = -2106458112;
	// lis r5,-32106
	ctx.r5.s64 = -2104098816;
	// addi r4,r4,25320
	ctx.r4.s64 = ctx.r4.s64 + 25320;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r5,r5,12184
	ctx.r5.s64 = ctx.r5.s64 + 12184;
	// lis r6,-32142
	ctx.r6.s64 = -2106458112;
	// lis r7,-32142
	ctx.r7.s64 = -2106458112;
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// addi r6,r6,25136
	ctx.r6.s64 = ctx.r6.s64 + 25136;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r7,r7,24912
	ctx.r7.s64 = ctx.r7.s64 + 24912;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r8,r8,-28424
	ctx.r8.s64 = ctx.r8.s64 + -28424;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r9,r9,12688
	ctx.r9.s64 = ctx.r9.s64 + 12688;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,15512
	ctx.r11.s64 = ctx.r11.s64 + 15512;
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313FF48"))) PPC_WEAK_FUNC(sub_8313FF48);
PPC_FUNC_IMPL(__imp__sub_8313FF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,20352
	ctx.r11.s64 = ctx.r11.s64 + 20352;
	// addi r10,r10,-24184
	ctx.r10.s64 = ctx.r10.s64 + -24184;
	// lis r7,-32141
	ctx.r7.s64 = -2106392576;
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// addi r7,r7,-23752
	ctx.r7.s64 = ctx.r7.s64 + -23752;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r8,r8,-24016
	ctx.r8.s64 = ctx.r8.s64 + -24016;
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// addi r9,r9,-20912
	ctx.r9.s64 = ctx.r9.s64 + -20912;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// addi r11,r11,16776
	ctx.r11.s64 = ctx.r11.s64 + 16776;
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313FFE0"))) PPC_WEAK_FUNC(sub_8313FFE0);
PPC_FUNC_IMPL(__imp__sub_8313FFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,8688
	ctx.r11.s64 = ctx.r11.s64 + 8688;
	// addi r10,r10,7808
	ctx.r10.s64 = ctx.r10.s64 + 7808;
	// lis r5,-32141
	ctx.r5.s64 = -2106392576;
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// addi r5,r5,8576
	ctx.r5.s64 = ctx.r5.s64 + 8576;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,8464
	ctx.r6.s64 = ctx.r6.s64 + 8464;
	// lis r7,-32141
	ctx.r7.s64 = -2106392576;
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,8224
	ctx.r7.s64 = ctx.r7.s64 + 8224;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,7936
	ctx.r8.s64 = ctx.r8.s64 + 7936;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32098
	ctx.r9.s64 = -2103574528;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,-30144
	ctx.r9.s64 = ctx.r9.s64 + -30144;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,16680
	ctx.r11.s64 = ctx.r11.s64 + 16680;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831400A8"))) PPC_WEAK_FUNC(sub_831400A8);
PPC_FUNC_IMPL(__imp__sub_831400A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,9216
	ctx.r11.s64 = ctx.r11.s64 + 9216;
	// addi r10,r10,25248
	ctx.r10.s64 = ctx.r10.s64 + 25248;
	// lis r5,-32207
	ctx.r5.s64 = -2110717952;
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// addi r5,r5,-1104
	ctx.r5.s64 = ctx.r5.s64 + -1104;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,9088
	ctx.r6.s64 = ctx.r6.s64 + 9088;
	// lis r7,-32207
	ctx.r7.s64 = -2110717952;
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,-1360
	ctx.r7.s64 = ctx.r7.s64 + -1360;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,8896
	ctx.r8.s64 = ctx.r8.s64 + 8896;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,25688
	ctx.r9.s64 = ctx.r9.s64 + 25688;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,16496
	ctx.r11.s64 = ctx.r11.s64 + 16496;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140170"))) PPC_WEAK_FUNC(sub_83140170);
PPC_FUNC_IMPL(__imp__sub_83140170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,10192
	ctx.r11.s64 = ctx.r11.s64 + 10192;
	// addi r10,r10,27112
	ctx.r10.s64 = ctx.r10.s64 + 27112;
	// lis r7,-32139
	ctx.r7.s64 = -2106261504;
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// addi r7,r7,-18968
	ctx.r7.s64 = ctx.r7.s64 + -18968;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r8,r8,15352
	ctx.r8.s64 = ctx.r8.s64 + 15352;
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// addi r9,r9,27624
	ctx.r9.s64 = ctx.r9.s64 + 27624;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// addi r11,r11,15112
	ctx.r11.s64 = ctx.r11.s64 + 15112;
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140208"))) PPC_WEAK_FUNC(sub_83140208);
PPC_FUNC_IMPL(__imp__sub_83140208) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x83140210;
	__savegprlr_27(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r10,-32097
	ctx.r10.s64 = -2103508992;
	// addi r11,r11,3232
	ctx.r11.s64 = ctx.r11.s64 + 3232;
	// addi r10,r10,12432
	ctx.r10.s64 = ctx.r10.s64 + 12432;
	// lis r27,-32141
	ctx.r27.s64 = -2106392576;
	// lis r28,-32141
	ctx.r28.s64 = -2106392576;
	// addi r27,r27,1144
	ctx.r27.s64 = ctx.r27.s64 + 1144;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// addi r28,r28,3072
	ctx.r28.s64 = ctx.r28.s64 + 3072;
	// lis r29,-32141
	ctx.r29.s64 = -2106392576;
	// lis r30,-32141
	ctx.r30.s64 = -2106392576;
	// stw r27,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r27.u32);
	// addi r29,r29,1016
	ctx.r29.s64 = ctx.r29.s64 + 1016;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// addi r30,r30,904
	ctx.r30.s64 = ctx.r30.s64 + 904;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// lis r31,-32141
	ctx.r31.s64 = -2106392576;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// lis r3,-32141
	ctx.r3.s64 = -2106392576;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// addi r31,r31,792
	ctx.r31.s64 = ctx.r31.s64 + 792;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// addi r3,r3,680
	ctx.r3.s64 = ctx.r3.s64 + 680;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// lis r4,-32141
	ctx.r4.s64 = -2106392576;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// lis r5,-32140
	ctx.r5.s64 = -2106327040;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// addi r4,r4,568
	ctx.r4.s64 = ctx.r4.s64 + 568;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// addi r5,r5,24296
	ctx.r5.s64 = ctx.r5.s64 + 24296;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r7,-32141
	ctx.r7.s64 = -2106392576;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// addi r6,r6,408
	ctx.r6.s64 = ctx.r6.s64 + 408;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// addi r8,r8,104
	ctx.r8.s64 = ctx.r8.s64 + 104;
	// addi r11,r11,16944
	ctx.r11.s64 = ctx.r11.s64 + 16944;
	// stw r28,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r28.u32);
	// stw r29,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r29.u32);
	// addi r9,r9,-56
	ctx.r9.s64 = ctx.r9.s64 + -56;
	// stw r30,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r30.u32);
	// stw r31,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r31.u32);
	// stw r3,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r3.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// stw r4,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r4.u32);
	// stw r5,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r5.u32);
	// stw r6,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r6.u32);
	// stw r7,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r7.u32);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stw r8,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r8.u32);
	// stw r9,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r9.u32);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-152(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r10,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r10.u64);
	// ld r10,-104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// std r10,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r10.u64);
	// ld r10,-96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r10,124(r11)
	PPC_STORE_U64(ctx.r11.u32 + 124, ctx.r10.u64);
	// ld r10,-88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// std r10,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r10.u64);
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// std r10,148(r11)
	PPC_STORE_U64(ctx.r11.u32 + 148, ctx.r10.u64);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r10,172(r11)
	PPC_STORE_U64(ctx.r11.u32 + 172, ctx.r10.u64);
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83140380"))) PPC_WEAK_FUNC(sub_83140380);
PPC_FUNC_IMPL(__imp__sub_83140380) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x83140388;
	__savegprlr_23(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,3232
	ctx.r11.s64 = ctx.r11.s64 + 3232;
	// addi r10,r10,24504
	ctx.r10.s64 = ctx.r10.s64 + 24504;
	// lis r23,-32141
	ctx.r23.s64 = -2106392576;
	// lis r24,-32141
	ctx.r24.s64 = -2106392576;
	// addi r23,r23,1144
	ctx.r23.s64 = ctx.r23.s64 + 1144;
	// stw r11,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r10.u32);
	// lis r25,-32141
	ctx.r25.s64 = -2106392576;
	// lis r26,-32097
	ctx.r26.s64 = -2103508992;
	// lis r27,-32141
	ctx.r27.s64 = -2106392576;
	// lis r28,-32141
	ctx.r28.s64 = -2106392576;
	// stw r23,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r23.u32);
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// lis r29,-32141
	ctx.r29.s64 = -2106392576;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lis r30,-32141
	ctx.r30.s64 = -2106392576;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// lis r31,-32141
	ctx.r31.s64 = -2106392576;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// lis r3,-32141
	ctx.r3.s64 = -2106392576;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// lis r4,-32141
	ctx.r4.s64 = -2106392576;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// lis r5,-32141
	ctx.r5.s64 = -2106392576;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// lis r7,-32141
	ctx.r7.s64 = -2106392576;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// addi r24,r24,3072
	ctx.r24.s64 = ctx.r24.s64 + 3072;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// addi r25,r25,2832
	ctx.r25.s64 = ctx.r25.s64 + 2832;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// addi r26,r26,15944
	ctx.r26.s64 = ctx.r26.s64 + 15944;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// addi r27,r27,2720
	ctx.r27.s64 = ctx.r27.s64 + 2720;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// addi r28,r28,2608
	ctx.r28.s64 = ctx.r28.s64 + 2608;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// addi r29,r29,2496
	ctx.r29.s64 = ctx.r29.s64 + 2496;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// addi r30,r30,2384
	ctx.r30.s64 = ctx.r30.s64 + 2384;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// addi r31,r31,2272
	ctx.r31.s64 = ctx.r31.s64 + 2272;
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// addi r3,r3,2064
	ctx.r3.s64 = ctx.r3.s64 + 2064;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-232(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// addi r4,r4,1912
	ctx.r4.s64 = ctx.r4.s64 + 1912;
	// addi r11,r11,16192
	ctx.r11.s64 = ctx.r11.s64 + 16192;
	// stw r24,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r24.u32);
	// addi r5,r5,1752
	ctx.r5.s64 = ctx.r5.s64 + 1752;
	// stw r25,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r25.u32);
	// addi r6,r6,1592
	ctx.r6.s64 = ctx.r6.s64 + 1592;
	// stw r26,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r26.u32);
	// addi r7,r7,1440
	ctx.r7.s64 = ctx.r7.s64 + 1440;
	// stw r27,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r27.u32);
	// addi r8,r8,1328
	ctx.r8.s64 = ctx.r8.s64 + 1328;
	// stw r28,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r28.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// addi r9,r9,24688
	ctx.r9.s64 = ctx.r9.s64 + 24688;
	// ld r10,-104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// stw r29,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r29.u32);
	// stw r30,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r30.u32);
	// stw r31,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r31.u32);
	// stw r3,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r3.u32);
	// stw r4,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r4.u32);
	// stw r5,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// stw r6,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// stw r7,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r7.u32);
	// stw r8,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r8.u32);
	// stw r9,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-152(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-200(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r10,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r10.u64);
	// ld r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r10,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r10.u64);
	// ld r10,-224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r10,124(r11)
	PPC_STORE_U64(ctx.r11.u32 + 124, ctx.r10.u64);
	// ld r10,-208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r10,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r10.u64);
	// ld r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r10,148(r11)
	PPC_STORE_U64(ctx.r11.u32 + 148, ctx.r10.u64);
	// ld r10,-176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r10,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r10.u64);
	// ld r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r10,172(r11)
	PPC_STORE_U64(ctx.r11.u32 + 172, ctx.r10.u64);
	// ld r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r10,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r10.u64);
	// ld r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// std r10,196(r11)
	PPC_STORE_U64(ctx.r11.u32 + 196, ctx.r10.u64);
	// ld r10,-112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r10,208(r11)
	PPC_STORE_U64(ctx.r11.u32 + 208, ctx.r10.u64);
	// ld r10,-96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r10,220(r11)
	PPC_STORE_U64(ctx.r11.u32 + 220, ctx.r10.u64);
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83140558"))) PPC_WEAK_FUNC(sub_83140558);
PPC_FUNC_IMPL(__imp__sub_83140558) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r10,r10,5352
	ctx.r10.s64 = ctx.r10.s64 + 5352;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// addi r11,r11,13956
	ctx.r11.s64 = ctx.r11.s64 + 13956;
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140590"))) PPC_WEAK_FUNC(sub_83140590);
PPC_FUNC_IMPL(__imp__sub_83140590) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r10,r10,5352
	ctx.r10.s64 = ctx.r10.s64 + 5352;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// addi r11,r11,16468
	ctx.r11.s64 = ctx.r11.s64 + 16468;
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831405C8"))) PPC_WEAK_FUNC(sub_831405C8);
PPC_FUNC_IMPL(__imp__sub_831405C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-18712
	ctx.r11.s64 = ctx.r11.s64 + -18712;
	// addi r10,r10,26376
	ctx.r10.s64 = ctx.r10.s64 + 26376;
	// lis r3,-32141
	ctx.r3.s64 = -2106392576;
	// lis r4,-32139
	ctx.r4.s64 = -2106261504;
	// addi r3,r3,10192
	ctx.r3.s64 = ctx.r3.s64 + 10192;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r4,r4,-18968
	ctx.r4.s64 = ctx.r4.s64 + -18968;
	// lis r5,-32141
	ctx.r5.s64 = -2106392576;
	// lis r6,-32140
	ctx.r6.s64 = -2106327040;
	// stw r3,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r3.u32);
	// addi r5,r5,15352
	ctx.r5.s64 = ctx.r5.s64 + 15352;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r6,r6,27624
	ctx.r6.s64 = ctx.r6.s64 + 27624;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r7,-32140
	ctx.r7.s64 = -2106327040;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r7,r7,27112
	ctx.r7.s64 = ctx.r7.s64 + 27112;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r8,r8,11536
	ctx.r8.s64 = ctx.r8.s64 + 11536;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// addi r9,r9,26712
	ctx.r9.s64 = ctx.r9.s64 + 26712;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,13752
	ctx.r11.s64 = ctx.r11.s64 + 13752;
	// stw r4,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r4.u32);
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831406C0"))) PPC_WEAK_FUNC(sub_831406C0);
PPC_FUNC_IMPL(__imp__sub_831406C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-18712
	ctx.r11.s64 = ctx.r11.s64 + -18712;
	// addi r10,r10,27112
	ctx.r10.s64 = ctx.r10.s64 + 27112;
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// lis r7,-32139
	ctx.r7.s64 = -2106261504;
	// addi r6,r6,10192
	ctx.r6.s64 = ctx.r6.s64 + 10192;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r7,r7,-18968
	ctx.r7.s64 = ctx.r7.s64 + -18968;
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// addi r8,r8,15352
	ctx.r8.s64 = ctx.r8.s64 + 15352;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r9,r9,27624
	ctx.r9.s64 = ctx.r9.s64 + 27624;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,15936
	ctx.r11.s64 = ctx.r11.s64 + 15936;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140770"))) PPC_WEAK_FUNC(sub_83140770);
PPC_FUNC_IMPL(__imp__sub_83140770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,10192
	ctx.r11.s64 = ctx.r11.s64 + 10192;
	// addi r10,r10,26936
	ctx.r10.s64 = ctx.r10.s64 + 26936;
	// lis r5,-32139
	ctx.r5.s64 = -2106261504;
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// addi r5,r5,-18968
	ctx.r5.s64 = ctx.r5.s64 + -18968;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,15352
	ctx.r6.s64 = ctx.r6.s64 + 15352;
	// lis r7,-32140
	ctx.r7.s64 = -2106327040;
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,27624
	ctx.r7.s64 = ctx.r7.s64 + 27624;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,27112
	ctx.r8.s64 = ctx.r8.s64 + 27112;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,12512
	ctx.r9.s64 = ctx.r9.s64 + 12512;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,15016
	ctx.r11.s64 = ctx.r11.s64 + 15016;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140838"))) PPC_WEAK_FUNC(sub_83140838);
PPC_FUNC_IMPL(__imp__sub_83140838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-1104
	ctx.r11.s64 = ctx.r11.s64 + -1104;
	// addi r10,r10,25504
	ctx.r10.s64 = ctx.r10.s64 + 25504;
	// lis r4,-32141
	ctx.r4.s64 = -2106392576;
	// lis r5,-32207
	ctx.r5.s64 = -2110717952;
	// addi r4,r4,9088
	ctx.r4.s64 = ctx.r4.s64 + 9088;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r5,r5,-1360
	ctx.r5.s64 = ctx.r5.s64 + -1360;
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// lis r7,-32140
	ctx.r7.s64 = -2106327040;
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// addi r6,r6,8896
	ctx.r6.s64 = ctx.r6.s64 + 8896;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r7,r7,25688
	ctx.r7.s64 = ctx.r7.s64 + 25688;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r8,r8,25248
	ctx.r8.s64 = ctx.r8.s64 + 25248;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r9,r9,9464
	ctx.r9.s64 = ctx.r9.s64 + 9464;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,15624
	ctx.r11.s64 = ctx.r11.s64 + 15624;
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140918"))) PPC_WEAK_FUNC(sub_83140918);
PPC_FUNC_IMPL(__imp__sub_83140918) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e4c
	ctx.lr = 0x83140920;
	__savegprlr_21(ctx, base);
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// lis r21,-32139
	ctx.r21.s64 = -2106261504;
	// addi r10,r10,15544
	ctx.r10.s64 = ctx.r10.s64 + 15544;
	// lis r22,-32141
	ctx.r22.s64 = -2106392576;
	// lis r23,-32139
	ctx.r23.s64 = -2106261504;
	// lis r24,-32141
	ctx.r24.s64 = -2106392576;
	// lis r25,-32140
	ctx.r25.s64 = -2106327040;
	// lis r26,-32140
	ctx.r26.s64 = -2106327040;
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// lis r27,-32141
	ctx.r27.s64 = -2106392576;
	// lis r28,-32141
	ctx.r28.s64 = -2106392576;
	// lis r29,-32141
	ctx.r29.s64 = -2106392576;
	// lis r30,-32141
	ctx.r30.s64 = -2106392576;
	// lis r31,-32140
	ctx.r31.s64 = -2106327040;
	// lis r3,-32141
	ctx.r3.s64 = -2106392576;
	// lis r4,-32139
	ctx.r4.s64 = -2106261504;
	// lis r5,-32106
	ctx.r5.s64 = -2104098816;
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// lis r7,-32141
	ctx.r7.s64 = -2106392576;
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r21,r21,-18712
	ctx.r21.s64 = ctx.r21.s64 + -18712;
	// addi r22,r22,10192
	ctx.r22.s64 = ctx.r22.s64 + 10192;
	// addi r23,r23,-18968
	ctx.r23.s64 = ctx.r23.s64 + -18968;
	// addi r24,r24,15352
	ctx.r24.s64 = ctx.r24.s64 + 15352;
	// addi r25,r25,27624
	ctx.r25.s64 = ctx.r25.s64 + 27624;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r26,r26,27112
	ctx.r26.s64 = ctx.r26.s64 + 27112;
	// stw r21,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r21.u32);
	// addi r27,r27,15184
	ctx.r27.s64 = ctx.r27.s64 + 15184;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r28,r28,15016
	ctx.r28.s64 = ctx.r28.s64 + 15016;
	// stw r22,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r22.u32);
	// addi r29,r29,14744
	ctx.r29.s64 = ctx.r29.s64 + 14744;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r30,r30,14392
	ctx.r30.s64 = ctx.r30.s64 + 14392;
	// stw r23,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r23.u32);
	// addi r31,r31,27368
	ctx.r31.s64 = ctx.r31.s64 + 27368;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r3,r3,14264
	ctx.r3.s64 = ctx.r3.s64 + 14264;
	// stw r24,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r24.u32);
	// addi r4,r4,-11672
	ctx.r4.s64 = ctx.r4.s64 + -11672;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r5,r5,-4992
	ctx.r5.s64 = ctx.r5.s64 + -4992;
	// stw r25,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r25.u32);
	// addi r6,r6,14048
	ctx.r6.s64 = ctx.r6.s64 + 14048;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r7,r7,13888
	ctx.r7.s64 = ctx.r7.s64 + 13888;
	// stw r26,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r26.u32);
	// addi r8,r8,13696
	ctx.r8.s64 = ctx.r8.s64 + 13696;
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// addi r9,r9,13512
	ctx.r9.s64 = ctx.r9.s64 + 13512;
	// stw r27,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r27.u32);
	// addi r11,r11,13384
	ctx.r11.s64 = ctx.r11.s64 + 13384;
	// stw r10,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r10.u32);
	// stw r28,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r28.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r29,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r29.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// stw r30,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r30.u32);
	// stw r10,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r3,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r3.u32);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// stw r4,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r5,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r5.u32);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r6,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r6.u32);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r7,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r7.u32);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// stw r8,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r8.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r9,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stw r11,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r11.u32);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lis r4,-32141
	ctx.r4.s64 = -2106392576;
	// addi r11,r11,15184
	ctx.r11.s64 = ctx.r11.s64 + 15184;
	// addi r4,r4,13256
	ctx.r4.s64 = ctx.r4.s64 + 13256;
	// lis r5,-32141
	ctx.r5.s64 = -2106392576;
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// addi r5,r5,13128
	ctx.r5.s64 = ctx.r5.s64 + 13128;
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// addi r6,r6,13000
	ctx.r6.s64 = ctx.r6.s64 + 13000;
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// lis r7,-32140
	ctx.r7.s64 = -2106327040;
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// addi r7,r7,-12632
	ctx.r7.s64 = ctx.r7.s64 + -12632;
	// addi r8,r8,-12776
	ctx.r8.s64 = ctx.r8.s64 + -12776;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r9.u64);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r9,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r9.u64);
	// ld r9,-120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r9,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r9.u64);
	// ld r9,-104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// std r9,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r9,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r9.u64);
	// ld r9,-112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r9,124(r11)
	PPC_STORE_U64(ctx.r11.u32 + 124, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r9,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r9.u64);
	// ld r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// std r9,148(r11)
	PPC_STORE_U64(ctx.r11.u32 + 148, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// stw r10,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// std r9,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// std r9,172(r11)
	PPC_STORE_U64(ctx.r11.u32 + 172, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r8,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r8.u32);
	// std r9,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// stw r7,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r7.u32);
	// std r9,196(r11)
	PPC_STORE_U64(ctx.r11.u32 + 196, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r6,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r6.u32);
	// std r9,208(r11)
	PPC_STORE_U64(ctx.r11.u32 + 208, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stw r5,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r5.u32);
	// std r9,220(r11)
	PPC_STORE_U64(ctx.r11.u32 + 220, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// stw r4,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// ld r10,-248(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,232(r11)
	PPC_STORE_U64(ctx.r11.u32 + 232, ctx.r9.u64);
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// addi r9,r9,12736
	ctx.r9.s64 = ctx.r9.s64 + 12736;
	// std r10,244(r11)
	PPC_STORE_U64(ctx.r11.u32 + 244, ctx.r10.u64);
	// ld r10,-208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r9,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r9.u32);
	// std r10,256(r11)
	PPC_STORE_U64(ctx.r11.u32 + 256, ctx.r10.u64);
	// ld r10,-224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r10,268(r11)
	PPC_STORE_U64(ctx.r11.u32 + 268, ctx.r10.u64);
	// ld r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r10,280(r11)
	PPC_STORE_U64(ctx.r11.u32 + 280, ctx.r10.u64);
	// ld r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r10,292(r11)
	PPC_STORE_U64(ctx.r11.u32 + 292, ctx.r10.u64);
	// ld r10,-232(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r10,304(r11)
	PPC_STORE_U64(ctx.r11.u32 + 304, ctx.r10.u64);
	// ld r10,-216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r10,316(r11)
	PPC_STORE_U64(ctx.r11.u32 + 316, ctx.r10.u64);
	// b 0x82e28e9c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83140BB0"))) PPC_WEAK_FUNC(sub_83140BB0);
PPC_FUNC_IMPL(__imp__sub_83140BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,-18712
	ctx.r11.s64 = ctx.r11.s64 + -18712;
	// addi r10,r10,11800
	ctx.r10.s64 = ctx.r10.s64 + 11800;
	// lis r5,-32139
	ctx.r5.s64 = -2106261504;
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// addi r5,r5,-18968
	ctx.r5.s64 = ctx.r5.s64 + -18968;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,15352
	ctx.r6.s64 = ctx.r6.s64 + 15352;
	// lis r7,-32141
	ctx.r7.s64 = -2106392576;
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,12384
	ctx.r7.s64 = ctx.r7.s64 + 12384;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,12216
	ctx.r8.s64 = ctx.r8.s64 + 12216;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,12008
	ctx.r9.s64 = ctx.r9.s64 + 12008;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,13512
	ctx.r11.s64 = ctx.r11.s64 + 13512;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140C78"))) PPC_WEAK_FUNC(sub_83140C78);
PPC_FUNC_IMPL(__imp__sub_83140C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,16208
	ctx.r11.s64 = ctx.r11.s64 + 16208;
	// addi r10,r10,27112
	ctx.r10.s64 = ctx.r10.s64 + 27112;
	// lis r4,-32141
	ctx.r4.s64 = -2106392576;
	// lis r5,-32139
	ctx.r5.s64 = -2106261504;
	// addi r4,r4,15944
	ctx.r4.s64 = ctx.r4.s64 + 15944;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r5,r5,-18712
	ctx.r5.s64 = ctx.r5.s64 + -18712;
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// lis r7,-32139
	ctx.r7.s64 = -2106261504;
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// addi r6,r6,10192
	ctx.r6.s64 = ctx.r6.s64 + 10192;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r7,r7,-18968
	ctx.r7.s64 = ctx.r7.s64 + -18968;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r8,r8,15352
	ctx.r8.s64 = ctx.r8.s64 + 15352;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r9,r9,27624
	ctx.r9.s64 = ctx.r9.s64 + 27624;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,13608
	ctx.r11.s64 = ctx.r11.s64 + 13608;
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140D58"))) PPC_WEAK_FUNC(sub_83140D58);
PPC_FUNC_IMPL(__imp__sub_83140D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,18792
	ctx.r11.s64 = ctx.r11.s64 + 18792;
	// addi r10,r10,27112
	ctx.r10.s64 = ctx.r10.s64 + 27112;
	// lis r4,-32141
	ctx.r4.s64 = -2106392576;
	// lis r5,-32139
	ctx.r5.s64 = -2106261504;
	// addi r4,r4,18528
	ctx.r4.s64 = ctx.r4.s64 + 18528;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r5,r5,-18712
	ctx.r5.s64 = ctx.r5.s64 + -18712;
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// lis r7,-32139
	ctx.r7.s64 = -2106261504;
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// addi r6,r6,10192
	ctx.r6.s64 = ctx.r6.s64 + 10192;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r7,r7,-18968
	ctx.r7.s64 = ctx.r7.s64 + -18968;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r8,r8,15352
	ctx.r8.s64 = ctx.r8.s64 + 15352;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r9,r9,27624
	ctx.r9.s64 = ctx.r9.s64 + 27624;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,14136
	ctx.r11.s64 = ctx.r11.s64 + 14136;
	// stw r5,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r5.u32);
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140E38"))) PPC_WEAK_FUNC(sub_83140E38);
PPC_FUNC_IMPL(__imp__sub_83140E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32100
	ctx.r11.s64 = -2103705600;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,-280
	ctx.r11.s64 = ctx.r11.s64 + -280;
	// addi r10,r10,9688
	ctx.r10.s64 = ctx.r10.s64 + 9688;
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r11,r11,13716
	ctx.r11.s64 = ctx.r11.s64 + 13716;
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

__attribute__((alias("__imp__sub_83140E88"))) PPC_WEAK_FUNC(sub_83140E88);
PPC_FUNC_IMPL(__imp__sub_83140E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,11328
	ctx.r11.s64 = ctx.r11.s64 + 11328;
	// addi r10,r10,11008
	ctx.r10.s64 = ctx.r10.s64 + 11008;
	// lis r6,-32139
	ctx.r6.s64 = -2106261504;
	// lis r7,-32141
	ctx.r7.s64 = -2106392576;
	// addi r6,r6,-19224
	ctx.r6.s64 = ctx.r6.s64 + -19224;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r7,r7,11136
	ctx.r7.s64 = ctx.r7.s64 + 11136;
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// addi r8,r8,26160
	ctx.r8.s64 = ctx.r8.s64 + 26160;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r9,r9,25904
	ctx.r9.s64 = ctx.r9.s64 + 25904;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,15848
	ctx.r11.s64 = ctx.r11.s64 + 15848;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140F38"))) PPC_WEAK_FUNC(sub_83140F38);
PPC_FUNC_IMPL(__imp__sub_83140F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,9864
	ctx.r11.s64 = ctx.r11.s64 + 9864;
	// addi r10,r10,25504
	ctx.r10.s64 = ctx.r10.s64 + 25504;
	// lis r6,-32207
	ctx.r6.s64 = -2110717952;
	// lis r7,-32141
	ctx.r7.s64 = -2106392576;
	// addi r6,r6,-1104
	ctx.r6.s64 = ctx.r6.s64 + -1104;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r7,r7,9088
	ctx.r7.s64 = ctx.r7.s64 + 9088;
	// lis r8,-32207
	ctx.r8.s64 = -2110717952;
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// addi r8,r8,-1360
	ctx.r8.s64 = ctx.r8.s64 + -1360;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r9,r9,8896
	ctx.r9.s64 = ctx.r9.s64 + 8896;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// stw r8,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r8.u32);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-56(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83140FE8"))) PPC_WEAK_FUNC(sub_83140FE8);
PPC_FUNC_IMPL(__imp__sub_83140FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,31304
	ctx.r11.s64 = ctx.r11.s64 + 31304;
	// addi r10,r10,-28216
	ctx.r10.s64 = ctx.r10.s64 + -28216;
	// lis r7,-32140
	ctx.r7.s64 = -2106327040;
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// addi r7,r7,-28088
	ctx.r7.s64 = ctx.r7.s64 + -28088;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r8,r8,-8600
	ctx.r8.s64 = ctx.r8.s64 + -8600;
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// addi r9,r9,-16984
	ctx.r9.s64 = ctx.r9.s64 + -16984;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// addi r11,r11,16872
	ctx.r11.s64 = ctx.r11.s64 + 16872;
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-40(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r10.u64);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141080"))) PPC_WEAK_FUNC(sub_83141080);
PPC_FUNC_IMPL(__imp__sub_83141080) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r10,r10,-27920
	ctx.r10.s64 = ctx.r10.s64 + -27920;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// addi r11,r11,16848
	ctx.r11.s64 = ctx.r11.s64 + 16848;
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831410B8"))) PPC_WEAK_FUNC(sub_831410B8);
PPC_FUNC_IMPL(__imp__sub_831410B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x831410C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31969
	ctx.r31.s64 = -2095120384;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28540
	ctx.r29.s64 = ctx.r10.s64 + -28540;
	// lwz r11,-17500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831410f0
	if (!ctx.cr6.eq) goto loc_831410F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8264d138
	ctx.lr = 0x831410E4;
	sub_8264D138(ctx, base);
	// stw r3,-17500(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17500, ctx.r3.u32);
	// bl 0x8264d1f0
	ctx.lr = 0x831410EC;
	sub_8264D1F0(ctx, base);
	// lwz r11,-17500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17500);
loc_831410F0:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// addi r31,r10,5400
	ctx.r31.s64 = ctx.r10.s64 + 5400;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141128
	if (!ctx.cr6.eq) goto loc_83141128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828ebc30
	ctx.lr = 0x8314111C;
	sub_828EBC30(ctx, base);
	// stw r3,8656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8656, ctx.r3.u32);
	// bl 0x8289b738
	ctx.lr = 0x83141124;
	sub_8289B738(ctx, base);
	// lwz r11,8656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8656);
loc_83141128:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,8660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8660);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141158
	if (!ctx.cr6.eq) goto loc_83141158;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828dfa68
	ctx.lr = 0x8314114C;
	sub_828DFA68(ctx, base);
	// stw r3,8660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8660, ctx.r3.u32);
	// bl 0x8289b8d0
	ctx.lr = 0x83141154;
	sub_8289B8D0(ctx, base);
	// lwz r11,8660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8660);
loc_83141158:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141188
	if (!ctx.cr6.eq) goto loc_83141188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828ebdf0
	ctx.lr = 0x8314117C;
	sub_828EBDF0(ctx, base);
	// stw r3,8684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8684, ctx.r3.u32);
	// bl 0x8289c158
	ctx.lr = 0x83141184;
	sub_8289C158(ctx, base);
	// lwz r11,8684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8684);
loc_83141188:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,9308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831411b8
	if (!ctx.cr6.eq) goto loc_831411B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8293fe88
	ctx.lr = 0x831411AC;
	sub_8293FE88(ctx, base);
	// stw r3,9308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9308, ctx.r3.u32);
	// bl 0x829134b0
	ctx.lr = 0x831411B4;
	sub_829134B0(ctx, base);
	// lwz r11,9308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9308);
loc_831411B8:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,6332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831411e8
	if (!ctx.cr6.eq) goto loc_831411E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827c46e0
	ctx.lr = 0x831411DC;
	sub_827C46E0(ctx, base);
	// stw r3,6332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6332, ctx.r3.u32);
	// bl 0x827c0448
	ctx.lr = 0x831411E4;
	sub_827C0448(ctx, base);
	// lwz r11,6332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6332);
loc_831411E8:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,-29916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29916);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141218
	if (!ctx.cr6.eq) goto loc_83141218;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ecae0
	ctx.lr = 0x8314120C;
	sub_825ECAE0(ctx, base);
	// stw r3,-29916(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29916, ctx.r3.u32);
	// bl 0x82604c20
	ctx.lr = 0x83141214;
	sub_82604C20(ctx, base);
	// lwz r11,-29916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29916);
loc_83141218:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,8584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141248
	if (!ctx.cr6.eq) goto loc_83141248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828e9c40
	ctx.lr = 0x8314123C;
	sub_828E9C40(ctx, base);
	// stw r3,8584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8584, ctx.r3.u32);
	// bl 0x82898718
	ctx.lr = 0x83141244;
	sub_82898718(ctx, base);
	// lwz r11,8584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8584);
loc_83141248:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,6352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141278
	if (!ctx.cr6.eq) goto loc_83141278;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827c2540
	ctx.lr = 0x8314126C;
	sub_827C2540(ctx, base);
	// stw r3,6352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6352, ctx.r3.u32);
	// bl 0x8278e248
	ctx.lr = 0x83141274;
	sub_8278E248(ctx, base);
	// lwz r11,6352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6352);
loc_83141278:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,6356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831412a8
	if (!ctx.cr6.eq) goto loc_831412A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827bdd20
	ctx.lr = 0x8314129C;
	sub_827BDD20(ctx, base);
	// stw r3,6356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6356, ctx.r3.u32);
	// bl 0x8278e668
	ctx.lr = 0x831412A4;
	sub_8278E668(ctx, base);
	// lwz r11,6356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6356);
loc_831412A8:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,-14224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x831412d8
	if (!ctx.cr6.eq) goto loc_831412D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826ae9c8
	ctx.lr = 0x831412CC;
	sub_826AE9C8(ctx, base);
	// stw r3,-14224(r30)
	PPC_STORE_U32(ctx.r30.u32 + -14224, ctx.r3.u32);
	// bl 0x826688b8
	ctx.lr = 0x831412D4;
	sub_826688B8(ctx, base);
	// lwz r11,-14224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14224);
loc_831412D8:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,-14240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141308
	if (!ctx.cr6.eq) goto loc_83141308;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8269b988
	ctx.lr = 0x831412FC;
	sub_8269B988(ctx, base);
	// stw r3,-14240(r30)
	PPC_STORE_U32(ctx.r30.u32 + -14240, ctx.r3.u32);
	// bl 0x826682f8
	ctx.lr = 0x83141304;
	sub_826682F8(ctx, base);
	// lwz r11,-14240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14240);
loc_83141308:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,-14300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141338
	if (!ctx.cr6.eq) goto loc_83141338;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8268f648
	ctx.lr = 0x8314132C;
	sub_8268F648(ctx, base);
	// stw r3,-14300(r30)
	PPC_STORE_U32(ctx.r30.u32 + -14300, ctx.r3.u32);
	// bl 0x82667b60
	ctx.lr = 0x83141334;
	sub_82667B60(ctx, base);
	// lwz r11,-14300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14300);
loc_83141338:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,-14444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83141368
	if (!ctx.cr6.eq) goto loc_83141368;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826975d0
	ctx.lr = 0x8314135C;
	sub_826975D0(ctx, base);
	// stw r3,-14444(r30)
	PPC_STORE_U32(ctx.r30.u32 + -14444, ctx.r3.u32);
	// bl 0x82678058
	ctx.lr = 0x83141364;
	sub_82678058(ctx, base);
	// lwz r11,-14444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14444);
loc_83141368:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141380"))) PPC_WEAK_FUNC(sub_83141380);
PPC_FUNC_IMPL(__imp__sub_83141380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,6064
	ctx.r11.s64 = ctx.r11.s64 + 6064;
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

__attribute__((alias("__imp__sub_831413B0"))) PPC_WEAK_FUNC(sub_831413B0);
PPC_FUNC_IMPL(__imp__sub_831413B0) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6128
	ctx.r11.s64 = ctx.r11.s64 + 6128;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831413E0"))) PPC_WEAK_FUNC(sub_831413E0);
PPC_FUNC_IMPL(__imp__sub_831413E0) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6160
	ctx.r11.s64 = ctx.r11.s64 + 6160;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141428"))) PPC_WEAK_FUNC(sub_83141428);
PPC_FUNC_IMPL(__imp__sub_83141428) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6080
	ctx.r11.s64 = ctx.r11.s64 + 6080;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141470"))) PPC_WEAK_FUNC(sub_83141470);
PPC_FUNC_IMPL(__imp__sub_83141470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15168
	ctx.r3.s64 = ctx.r11.s64 + 15168;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141480"))) PPC_WEAK_FUNC(sub_83141480);
PPC_FUNC_IMPL(__imp__sub_83141480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15240
	ctx.r3.s64 = ctx.r11.s64 + 15240;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141490"))) PPC_WEAK_FUNC(sub_83141490);
PPC_FUNC_IMPL(__imp__sub_83141490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15000
	ctx.r3.s64 = ctx.r11.s64 + 15000;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831414A0"))) PPC_WEAK_FUNC(sub_831414A0);
PPC_FUNC_IMPL(__imp__sub_831414A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-29761
	ctx.r4.s64 = ctx.r11.s64 + -29761;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,6188
	ctx.r3.s64 = ctx.r11.s64 + 6188;
	// bl 0x823099b0
	ctx.lr = 0x831414C0;
	sub_823099B0(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15120
	ctx.r3.s64 = ctx.r11.s64 + 15120;
	// bl 0x82e29708
	ctx.lr = 0x831414CC;
	sub_82E29708(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831414E0"))) PPC_WEAK_FUNC(sub_831414E0);
PPC_FUNC_IMPL(__imp__sub_831414E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r11,-23440
	ctx.r4.s64 = ctx.r11.s64 + -23440;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,6236
	ctx.r3.s64 = ctx.r11.s64 + 6236;
	// bl 0x823099b0
	ctx.lr = 0x83141500;
	sub_823099B0(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15136
	ctx.r3.s64 = ctx.r11.s64 + 15136;
	// bl 0x82e29708
	ctx.lr = 0x8314150C;
	sub_82E29708(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141520"))) PPC_WEAK_FUNC(sub_83141520);
PPC_FUNC_IMPL(__imp__sub_83141520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15152
	ctx.r3.s64 = ctx.r11.s64 + 15152;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141530"))) PPC_WEAK_FUNC(sub_83141530);
PPC_FUNC_IMPL(__imp__sub_83141530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,6704
	ctx.r11.s64 = ctx.r11.s64 + 6704;
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

__attribute__((alias("__imp__sub_83141560"))) PPC_WEAK_FUNC(sub_83141560);
PPC_FUNC_IMPL(__imp__sub_83141560) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6880
	ctx.r11.s64 = ctx.r11.s64 + 6880;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141590"))) PPC_WEAK_FUNC(sub_83141590);
PPC_FUNC_IMPL(__imp__sub_83141590) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6896
	ctx.r11.s64 = ctx.r11.s64 + 6896;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831415D8"))) PPC_WEAK_FUNC(sub_831415D8);
PPC_FUNC_IMPL(__imp__sub_831415D8) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6736
	ctx.r11.s64 = ctx.r11.s64 + 6736;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141620"))) PPC_WEAK_FUNC(sub_83141620);
PPC_FUNC_IMPL(__imp__sub_83141620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-14712
	ctx.r3.s64 = ctx.r11.s64 + -14712;
	// bl 0x82461a08
	ctx.lr = 0x8314163C;
	sub_82461A08(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r3,6600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141658"))) PPC_WEAK_FUNC(sub_83141658);
PPC_FUNC_IMPL(__imp__sub_83141658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15344
	ctx.r3.s64 = ctx.r11.s64 + 15344;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141668"))) PPC_WEAK_FUNC(sub_83141668);
PPC_FUNC_IMPL(__imp__sub_83141668) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r31,r11,17648
	ctx.r31.s64 = ctx.r11.s64 + 17648;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0788
	ctx.lr = 0x83141690;
	sub_822E0788(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,15360
	ctx.r3.s64 = ctx.r10.s64 + 15360;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831416A4;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831416B8"))) PPC_WEAK_FUNC(sub_831416B8);
PPC_FUNC_IMPL(__imp__sub_831416B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15376
	ctx.r3.s64 = ctx.r11.s64 + 15376;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831416C8"))) PPC_WEAK_FUNC(sub_831416C8);
PPC_FUNC_IMPL(__imp__sub_831416C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15712
	ctx.r3.s64 = ctx.r11.s64 + 15712;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831416D8"))) PPC_WEAK_FUNC(sub_831416D8);
PPC_FUNC_IMPL(__imp__sub_831416D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,-13884(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13884);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsqrts f11,f0
	ctx.f11.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,-18328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,-18308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18308);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// lfs f11,-19000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19000);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// addi r11,r11,6448
	ctx.r11.s64 = ctx.r11.s64 + 6448;
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,-13880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13880);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fdivs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fmuls f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141760"))) PPC_WEAK_FUNC(sub_83141760);
PPC_FUNC_IMPL(__imp__sub_83141760) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,30628
	ctx.r6.s64 = ctx.r10.s64 + 30628;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-7604
	ctx.r5.s64 = ctx.r10.s64 + -7604;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-7628
	ctx.r4.s64 = ctx.r10.s64 + -7628;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,6484
	ctx.r31.s64 = ctx.r10.s64 + 6484;
	// addi r10,r11,-22416
	ctx.r10.s64 = ctx.r11.s64 + -22416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831417B8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,15784
	ctx.r3.s64 = ctx.r8.s64 + 15784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18720
	ctx.r11.s64 = ctx.r9.s64 + 18720;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831417E8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83141800"))) PPC_WEAK_FUNC(sub_83141800);
PPC_FUNC_IMPL(__imp__sub_83141800) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,30672
	ctx.r6.s64 = ctx.r10.s64 + 30672;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-7604
	ctx.r5.s64 = ctx.r10.s64 + -7604;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-7584
	ctx.r4.s64 = ctx.r10.s64 + -7584;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,6604
	ctx.r31.s64 = ctx.r10.s64 + 6604;
	// addi r10,r11,20264
	ctx.r10.s64 = ctx.r11.s64 + 20264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83141858;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32131
	ctx.r9.s64 = -2105737216;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,15456
	ctx.r3.s64 = ctx.r8.s64 + 15456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,856
	ctx.r11.s64 = ctx.r9.s64 + 856;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83141888;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831418A0"))) PPC_WEAK_FUNC(sub_831418A0);
PPC_FUNC_IMPL(__imp__sub_831418A0) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-7516
	ctx.r6.s64 = ctx.r10.s64 + -7516;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-7604
	ctx.r5.s64 = ctx.r10.s64 + -7604;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-7560
	ctx.r4.s64 = ctx.r10.s64 + -7560;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,6788
	ctx.r31.s64 = ctx.r10.s64 + 6788;
	// addi r10,r11,22000
	ctx.r10.s64 = ctx.r11.s64 + 22000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831418F8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32131
	ctx.r9.s64 = -2105737216;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,15536
	ctx.r3.s64 = ctx.r8.s64 + 15536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,944
	ctx.r11.s64 = ctx.r9.s64 + 944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83141928;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83141940"))) PPC_WEAK_FUNC(sub_83141940);
PPC_FUNC_IMPL(__imp__sub_83141940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15864
	ctx.r3.s64 = ctx.r11.s64 + 15864;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141950"))) PPC_WEAK_FUNC(sub_83141950);
PPC_FUNC_IMPL(__imp__sub_83141950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141960"))) PPC_WEAK_FUNC(sub_83141960);
PPC_FUNC_IMPL(__imp__sub_83141960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15632
	ctx.r3.s64 = ctx.r11.s64 + 15632;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141970"))) PPC_WEAK_FUNC(sub_83141970);
PPC_FUNC_IMPL(__imp__sub_83141970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15648
	ctx.r3.s64 = ctx.r11.s64 + 15648;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141980"))) PPC_WEAK_FUNC(sub_83141980);
PPC_FUNC_IMPL(__imp__sub_83141980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15664
	ctx.r3.s64 = ctx.r11.s64 + 15664;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141990"))) PPC_WEAK_FUNC(sub_83141990);
PPC_FUNC_IMPL(__imp__sub_83141990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15680
	ctx.r3.s64 = ctx.r11.s64 + 15680;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831419A0"))) PPC_WEAK_FUNC(sub_831419A0);
PPC_FUNC_IMPL(__imp__sub_831419A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15696
	ctx.r3.s64 = ctx.r11.s64 + 15696;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831419B0"))) PPC_WEAK_FUNC(sub_831419B0);
PPC_FUNC_IMPL(__imp__sub_831419B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r11,r11,18616
	ctx.r11.s64 = ctx.r11.s64 + 18616;
	// lfs f0,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831419E8"))) PPC_WEAK_FUNC(sub_831419E8);
PPC_FUNC_IMPL(__imp__sub_831419E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,7776
	ctx.r11.s64 = ctx.r11.s64 + 7776;
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

__attribute__((alias("__imp__sub_83141A18"))) PPC_WEAK_FUNC(sub_83141A18);
PPC_FUNC_IMPL(__imp__sub_83141A18) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7840
	ctx.r11.s64 = ctx.r11.s64 + 7840;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141A48"))) PPC_WEAK_FUNC(sub_83141A48);
PPC_FUNC_IMPL(__imp__sub_83141A48) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141A90"))) PPC_WEAK_FUNC(sub_83141A90);
PPC_FUNC_IMPL(__imp__sub_83141A90) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7792
	ctx.r11.s64 = ctx.r11.s64 + 7792;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141AD8"))) PPC_WEAK_FUNC(sub_83141AD8);
PPC_FUNC_IMPL(__imp__sub_83141AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,16024
	ctx.r3.s64 = ctx.r11.s64 + 16024;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141AE8"))) PPC_WEAK_FUNC(sub_83141AE8);
PPC_FUNC_IMPL(__imp__sub_83141AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r11,r11,20648
	ctx.r11.s64 = ctx.r11.s64 + 20648;
	// lfs f0,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141B20"))) PPC_WEAK_FUNC(sub_83141B20);
PPC_FUNC_IMPL(__imp__sub_83141B20) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r11,20668
	ctx.r3.s64 = ctx.r11.s64 + 20668;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x822e0788
	ctx.lr = 0x83141B40;
	sub_822E0788(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,16040
	ctx.r3.s64 = ctx.r11.s64 + 16040;
	// bl 0x82e29708
	ctx.lr = 0x83141B4C;
	sub_82E29708(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141B60"))) PPC_WEAK_FUNC(sub_83141B60);
PPC_FUNC_IMPL(__imp__sub_83141B60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18648
	ctx.r4.s64 = ctx.r11.s64 + 18648;
	// bl 0x82429b48
	ctx.lr = 0x83141B7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7756(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7756, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141B98"))) PPC_WEAK_FUNC(sub_83141B98);
PPC_FUNC_IMPL(__imp__sub_83141B98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18652
	ctx.r4.s64 = ctx.r11.s64 + 18652;
	// bl 0x82429b48
	ctx.lr = 0x83141BB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7732(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7732, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141BD0"))) PPC_WEAK_FUNC(sub_83141BD0);
PPC_FUNC_IMPL(__imp__sub_83141BD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18656
	ctx.r4.s64 = ctx.r11.s64 + 18656;
	// bl 0x82429b48
	ctx.lr = 0x83141BEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7751(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7751, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141C08"))) PPC_WEAK_FUNC(sub_83141C08);
PPC_FUNC_IMPL(__imp__sub_83141C08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18660
	ctx.r4.s64 = ctx.r11.s64 + 18660;
	// bl 0x82429b48
	ctx.lr = 0x83141C24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7759(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7759, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141C40"))) PPC_WEAK_FUNC(sub_83141C40);
PPC_FUNC_IMPL(__imp__sub_83141C40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18664
	ctx.r4.s64 = ctx.r11.s64 + 18664;
	// bl 0x82429b48
	ctx.lr = 0x83141C5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7749(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7749, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141C78"))) PPC_WEAK_FUNC(sub_83141C78);
PPC_FUNC_IMPL(__imp__sub_83141C78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18668
	ctx.r4.s64 = ctx.r11.s64 + 18668;
	// bl 0x82429b48
	ctx.lr = 0x83141C94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7735(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7735, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141CB0"))) PPC_WEAK_FUNC(sub_83141CB0);
PPC_FUNC_IMPL(__imp__sub_83141CB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18672
	ctx.r4.s64 = ctx.r11.s64 + 18672;
	// bl 0x82429b48
	ctx.lr = 0x83141CCC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7836(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7836, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141CE8"))) PPC_WEAK_FUNC(sub_83141CE8);
PPC_FUNC_IMPL(__imp__sub_83141CE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18676
	ctx.r4.s64 = ctx.r11.s64 + 18676;
	// bl 0x82429b48
	ctx.lr = 0x83141D04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7775(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7775, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141D20"))) PPC_WEAK_FUNC(sub_83141D20);
PPC_FUNC_IMPL(__imp__sub_83141D20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18680
	ctx.r4.s64 = ctx.r11.s64 + 18680;
	// bl 0x82429b48
	ctx.lr = 0x83141D3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7774(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7774, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141D58"))) PPC_WEAK_FUNC(sub_83141D58);
PPC_FUNC_IMPL(__imp__sub_83141D58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18684
	ctx.r4.s64 = ctx.r11.s64 + 18684;
	// bl 0x82429b48
	ctx.lr = 0x83141D74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7773(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7773, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141D90"))) PPC_WEAK_FUNC(sub_83141D90);
PPC_FUNC_IMPL(__imp__sub_83141D90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18688
	ctx.r4.s64 = ctx.r11.s64 + 18688;
	// bl 0x82429b48
	ctx.lr = 0x83141DAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7772(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7772, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141DC8"))) PPC_WEAK_FUNC(sub_83141DC8);
PPC_FUNC_IMPL(__imp__sub_83141DC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18692
	ctx.r4.s64 = ctx.r11.s64 + 18692;
	// bl 0x82429b48
	ctx.lr = 0x83141DE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7758(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7758, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141E00"))) PPC_WEAK_FUNC(sub_83141E00);
PPC_FUNC_IMPL(__imp__sub_83141E00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18696
	ctx.r4.s64 = ctx.r11.s64 + 18696;
	// bl 0x82429b48
	ctx.lr = 0x83141E1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7734(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7734, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141E38"))) PPC_WEAK_FUNC(sub_83141E38);
PPC_FUNC_IMPL(__imp__sub_83141E38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18700
	ctx.r4.s64 = ctx.r11.s64 + 18700;
	// bl 0x82429b48
	ctx.lr = 0x83141E54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7748(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7748, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141E70"))) PPC_WEAK_FUNC(sub_83141E70);
PPC_FUNC_IMPL(__imp__sub_83141E70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18704
	ctx.r4.s64 = ctx.r11.s64 + 18704;
	// bl 0x82429b48
	ctx.lr = 0x83141E8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7757(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7757, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141EA8"))) PPC_WEAK_FUNC(sub_83141EA8);
PPC_FUNC_IMPL(__imp__sub_83141EA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18708
	ctx.r4.s64 = ctx.r11.s64 + 18708;
	// bl 0x82429b48
	ctx.lr = 0x83141EC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7750(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7750, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141EE0"))) PPC_WEAK_FUNC(sub_83141EE0);
PPC_FUNC_IMPL(__imp__sub_83141EE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,18712
	ctx.r4.s64 = ctx.r11.s64 + 18712;
	// bl 0x82429b48
	ctx.lr = 0x83141EFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7733(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7733, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141F18"))) PPC_WEAK_FUNC(sub_83141F18);
PPC_FUNC_IMPL(__imp__sub_83141F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15936
	ctx.r3.s64 = ctx.r11.s64 + 15936;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141F28"))) PPC_WEAK_FUNC(sub_83141F28);
PPC_FUNC_IMPL(__imp__sub_83141F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15960
	ctx.r3.s64 = ctx.r11.s64 + 15960;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141F38"))) PPC_WEAK_FUNC(sub_83141F38);
PPC_FUNC_IMPL(__imp__sub_83141F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,15984
	ctx.r3.s64 = ctx.r11.s64 + 15984;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83141F48"))) PPC_WEAK_FUNC(sub_83141F48);
PPC_FUNC_IMPL(__imp__sub_83141F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lbz r9,18724(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18724);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,18720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18720);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,7728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83141F68"))) PPC_WEAK_FUNC(sub_83141F68);
PPC_FUNC_IMPL(__imp__sub_83141F68) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82545e80
	ctx.lr = 0x83141F80;
	sub_82545E80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83141ffc
	if (ctx.cr6.eq) goto loc_83141FFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// addi r10,r10,12644
	ctx.r10.s64 = ctx.r10.s64 + 12644;
	// lfd f0,-11432(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11432);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825f48b8
	ctx.lr = 0x83141FE0;
	sub_825F48B8(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r31,7752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7752, ctx.r31.u32);
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
loc_83141FFC:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7752, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83142020"))) PPC_WEAK_FUNC(sub_83142020);
PPC_FUNC_IMPL(__imp__sub_83142020) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82545e80
	ctx.lr = 0x83142038;
	sub_82545E80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x831420b4
	if (ctx.cr6.eq) goto loc_831420B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// addi r10,r10,12684
	ctx.r10.s64 = ctx.r10.s64 + 12684;
	// lfd f0,-11432(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11432);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825f48b8
	ctx.lr = 0x83142098;
	sub_825F48B8(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r31,7724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7724, ctx.r31.u32);
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
loc_831420B4:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7724, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831420D8"))) PPC_WEAK_FUNC(sub_831420D8);
PPC_FUNC_IMPL(__imp__sub_831420D8) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82545e80
	ctx.lr = 0x831420F0;
	sub_82545E80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8314216c
	if (ctx.cr6.eq) goto loc_8314216C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// addi r10,r10,12724
	ctx.r10.s64 = ctx.r10.s64 + 12724;
	// lfd f0,-11432(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11432);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x825f48b8
	ctx.lr = 0x83142150;
	sub_825F48B8(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r31,7872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7872, ctx.r31.u32);
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
loc_8314216C:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7872, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83142190"))) PPC_WEAK_FUNC(sub_83142190);
PPC_FUNC_IMPL(__imp__sub_83142190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,9088
	ctx.r11.s64 = ctx.r11.s64 + 9088;
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

__attribute__((alias("__imp__sub_831421C0"))) PPC_WEAK_FUNC(sub_831421C0);
PPC_FUNC_IMPL(__imp__sub_831421C0) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,9168
	ctx.r11.s64 = ctx.r11.s64 + 9168;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831421F0"))) PPC_WEAK_FUNC(sub_831421F0);
PPC_FUNC_IMPL(__imp__sub_831421F0) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,9184
	ctx.r11.s64 = ctx.r11.s64 + 9184;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142238"))) PPC_WEAK_FUNC(sub_83142238);
PPC_FUNC_IMPL(__imp__sub_83142238) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,9104
	ctx.r11.s64 = ctx.r11.s64 + 9104;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142280"))) PPC_WEAK_FUNC(sub_83142280);
PPC_FUNC_IMPL(__imp__sub_83142280) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,384
	ctx.r3.s64 = 384;
	// addi r4,r11,20740
	ctx.r4.s64 = ctx.r11.s64 + 20740;
	// bl 0x82429b48
	ctx.lr = 0x8314229C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,8710(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8710, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831422B8"))) PPC_WEAK_FUNC(sub_831422B8);
PPC_FUNC_IMPL(__imp__sub_831422B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20744
	ctx.r4.s64 = ctx.r11.s64 + 20744;
	// bl 0x82429b48
	ctx.lr = 0x831422D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,8709(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8709, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831422F0"))) PPC_WEAK_FUNC(sub_831422F0);
PPC_FUNC_IMPL(__imp__sub_831422F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20748
	ctx.r4.s64 = ctx.r11.s64 + 20748;
	// bl 0x82429b48
	ctx.lr = 0x8314230C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,9023(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9023, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142328"))) PPC_WEAK_FUNC(sub_83142328);
PPC_FUNC_IMPL(__imp__sub_83142328) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20752
	ctx.r4.s64 = ctx.r11.s64 + 20752;
	// bl 0x82429b48
	ctx.lr = 0x83142344;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,8719(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8719, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142360"))) PPC_WEAK_FUNC(sub_83142360);
PPC_FUNC_IMPL(__imp__sub_83142360) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20756
	ctx.r4.s64 = ctx.r11.s64 + 20756;
	// bl 0x82429b48
	ctx.lr = 0x8314237C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,9200(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9200, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142398"))) PPC_WEAK_FUNC(sub_83142398);
PPC_FUNC_IMPL(__imp__sub_83142398) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20760
	ctx.r4.s64 = ctx.r11.s64 + 20760;
	// bl 0x82429b48
	ctx.lr = 0x831423B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,9206(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9206, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831423D0"))) PPC_WEAK_FUNC(sub_831423D0);
PPC_FUNC_IMPL(__imp__sub_831423D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20764
	ctx.r4.s64 = ctx.r11.s64 + 20764;
	// bl 0x82429b48
	ctx.lr = 0x831423EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,8706(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8706, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142408"))) PPC_WEAK_FUNC(sub_83142408);
PPC_FUNC_IMPL(__imp__sub_83142408) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20768
	ctx.r4.s64 = ctx.r11.s64 + 20768;
	// bl 0x82429b48
	ctx.lr = 0x83142424;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,9081(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9081, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142440"))) PPC_WEAK_FUNC(sub_83142440);
PPC_FUNC_IMPL(__imp__sub_83142440) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20772
	ctx.r4.s64 = ctx.r11.s64 + 20772;
	// bl 0x82429b48
	ctx.lr = 0x8314245C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,9021(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9021, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142478"))) PPC_WEAK_FUNC(sub_83142478);
PPC_FUNC_IMPL(__imp__sub_83142478) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20776
	ctx.r4.s64 = ctx.r11.s64 + 20776;
	// bl 0x82429b48
	ctx.lr = 0x83142494;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,9075(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9075, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831424B0"))) PPC_WEAK_FUNC(sub_831424B0);
PPC_FUNC_IMPL(__imp__sub_831424B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20780
	ctx.r4.s64 = ctx.r11.s64 + 20780;
	// bl 0x82429b48
	ctx.lr = 0x831424CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,8703(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8703, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831424E8"))) PPC_WEAK_FUNC(sub_831424E8);
PPC_FUNC_IMPL(__imp__sub_831424E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20784
	ctx.r4.s64 = ctx.r11.s64 + 20784;
	// bl 0x82429b48
	ctx.lr = 0x83142504;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,9203(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9203, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142520"))) PPC_WEAK_FUNC(sub_83142520);
PPC_FUNC_IMPL(__imp__sub_83142520) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20788
	ctx.r4.s64 = ctx.r11.s64 + 20788;
	// bl 0x82429b48
	ctx.lr = 0x8314253C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,8715(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8715, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142558"))) PPC_WEAK_FUNC(sub_83142558);
PPC_FUNC_IMPL(__imp__sub_83142558) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20792
	ctx.r4.s64 = ctx.r11.s64 + 20792;
	// bl 0x82429b48
	ctx.lr = 0x83142574;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,9076(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9076, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142590"))) PPC_WEAK_FUNC(sub_83142590);
PPC_FUNC_IMPL(__imp__sub_83142590) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,20796
	ctx.r4.s64 = ctx.r11.s64 + 20796;
	// bl 0x82429b48
	ctx.lr = 0x831425AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,8714(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8714, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

