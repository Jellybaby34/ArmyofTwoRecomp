#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83108728"))) PPC_WEAK_FUNC(sub_83108728);
PPC_FUNC_IMPL(__imp__sub_83108728) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30748
	ctx.r4.s64 = ctx.r11.s64 + 30748;
	// bl 0x82429b48
	ctx.lr = 0x83108744;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3900(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3900, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108760"))) PPC_WEAK_FUNC(sub_83108760);
PPC_FUNC_IMPL(__imp__sub_83108760) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30752
	ctx.r4.s64 = ctx.r11.s64 + 30752;
	// bl 0x82429b48
	ctx.lr = 0x8310877C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,648(r11)
	PPC_STORE_U8(ctx.r11.u32 + 648, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108798"))) PPC_WEAK_FUNC(sub_83108798);
PPC_FUNC_IMPL(__imp__sub_83108798) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30756
	ctx.r4.s64 = ctx.r11.s64 + 30756;
	// bl 0x82429b48
	ctx.lr = 0x831087B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-148(r11)
	PPC_STORE_U8(ctx.r11.u32 + -148, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831087D0"))) PPC_WEAK_FUNC(sub_831087D0);
PPC_FUNC_IMPL(__imp__sub_831087D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30760
	ctx.r4.s64 = ctx.r11.s64 + 30760;
	// bl 0x82429b48
	ctx.lr = 0x831087EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108808"))) PPC_WEAK_FUNC(sub_83108808);
PPC_FUNC_IMPL(__imp__sub_83108808) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30764
	ctx.r4.s64 = ctx.r11.s64 + 30764;
	// bl 0x82429b48
	ctx.lr = 0x83108824;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4895(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4895, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108840"))) PPC_WEAK_FUNC(sub_83108840);
PPC_FUNC_IMPL(__imp__sub_83108840) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30768
	ctx.r4.s64 = ctx.r11.s64 + 30768;
	// bl 0x82429b48
	ctx.lr = 0x8310885C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83108878"))) PPC_WEAK_FUNC(sub_83108878);
PPC_FUNC_IMPL(__imp__sub_83108878) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30772
	ctx.r4.s64 = ctx.r11.s64 + 30772;
	// bl 0x82429b48
	ctx.lr = 0x83108894;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,202(r11)
	PPC_STORE_U8(ctx.r11.u32 + 202, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831088B0"))) PPC_WEAK_FUNC(sub_831088B0);
PPC_FUNC_IMPL(__imp__sub_831088B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30776
	ctx.r4.s64 = ctx.r11.s64 + 30776;
	// bl 0x82429b48
	ctx.lr = 0x831088CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2749(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2749, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831088E8"))) PPC_WEAK_FUNC(sub_831088E8);
PPC_FUNC_IMPL(__imp__sub_831088E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30780
	ctx.r4.s64 = ctx.r11.s64 + 30780;
	// bl 0x82429b48
	ctx.lr = 0x83108904;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83108920"))) PPC_WEAK_FUNC(sub_83108920);
PPC_FUNC_IMPL(__imp__sub_83108920) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30784
	ctx.r4.s64 = ctx.r11.s64 + 30784;
	// bl 0x82429b48
	ctx.lr = 0x8310893C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1069(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1069, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108958"))) PPC_WEAK_FUNC(sub_83108958);
PPC_FUNC_IMPL(__imp__sub_83108958) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30788
	ctx.r4.s64 = ctx.r11.s64 + 30788;
	// bl 0x82429b48
	ctx.lr = 0x83108974;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1844(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1844, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108990"))) PPC_WEAK_FUNC(sub_83108990);
PPC_FUNC_IMPL(__imp__sub_83108990) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30792
	ctx.r4.s64 = ctx.r11.s64 + 30792;
	// bl 0x82429b48
	ctx.lr = 0x831089AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_831089C8"))) PPC_WEAK_FUNC(sub_831089C8);
PPC_FUNC_IMPL(__imp__sub_831089C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30796
	ctx.r4.s64 = ctx.r11.s64 + 30796;
	// bl 0x82429b48
	ctx.lr = 0x831089E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3099(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3099, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108A00"))) PPC_WEAK_FUNC(sub_83108A00);
PPC_FUNC_IMPL(__imp__sub_83108A00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30800
	ctx.r4.s64 = ctx.r11.s64 + 30800;
	// bl 0x82429b48
	ctx.lr = 0x83108A1C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4928(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4928, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108A38"))) PPC_WEAK_FUNC(sub_83108A38);
PPC_FUNC_IMPL(__imp__sub_83108A38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30804
	ctx.r4.s64 = ctx.r11.s64 + 30804;
	// bl 0x82429b48
	ctx.lr = 0x83108A54;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3513(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3513, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108A70"))) PPC_WEAK_FUNC(sub_83108A70);
PPC_FUNC_IMPL(__imp__sub_83108A70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30808
	ctx.r4.s64 = ctx.r11.s64 + 30808;
	// bl 0x82429b48
	ctx.lr = 0x83108A8C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-20(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108AA8"))) PPC_WEAK_FUNC(sub_83108AA8);
PPC_FUNC_IMPL(__imp__sub_83108AA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30812
	ctx.r4.s64 = ctx.r11.s64 + 30812;
	// bl 0x82429b48
	ctx.lr = 0x83108AC4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3824(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3824, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108AE0"))) PPC_WEAK_FUNC(sub_83108AE0);
PPC_FUNC_IMPL(__imp__sub_83108AE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30816
	ctx.r4.s64 = ctx.r11.s64 + 30816;
	// bl 0x82429b48
	ctx.lr = 0x83108AFC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,967(r11)
	PPC_STORE_U8(ctx.r11.u32 + 967, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108B18"))) PPC_WEAK_FUNC(sub_83108B18);
PPC_FUNC_IMPL(__imp__sub_83108B18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30820
	ctx.r4.s64 = ctx.r11.s64 + 30820;
	// bl 0x82429b48
	ctx.lr = 0x83108B34;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3836(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3836, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108B50"))) PPC_WEAK_FUNC(sub_83108B50);
PPC_FUNC_IMPL(__imp__sub_83108B50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30824
	ctx.r4.s64 = ctx.r11.s64 + 30824;
	// bl 0x82429b48
	ctx.lr = 0x83108B6C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3690(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3690, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108B88"))) PPC_WEAK_FUNC(sub_83108B88);
PPC_FUNC_IMPL(__imp__sub_83108B88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30828
	ctx.r4.s64 = ctx.r11.s64 + 30828;
	// bl 0x82429b48
	ctx.lr = 0x83108BA4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3453(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3453, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108BC0"))) PPC_WEAK_FUNC(sub_83108BC0);
PPC_FUNC_IMPL(__imp__sub_83108BC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30832
	ctx.r4.s64 = ctx.r11.s64 + 30832;
	// bl 0x82429b48
	ctx.lr = 0x83108BDC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4393(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4393, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108BF8"))) PPC_WEAK_FUNC(sub_83108BF8);
PPC_FUNC_IMPL(__imp__sub_83108BF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30836
	ctx.r4.s64 = ctx.r11.s64 + 30836;
	// bl 0x82429b48
	ctx.lr = 0x83108C14;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83108C30"))) PPC_WEAK_FUNC(sub_83108C30);
PPC_FUNC_IMPL(__imp__sub_83108C30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30840
	ctx.r4.s64 = ctx.r11.s64 + 30840;
	// bl 0x82429b48
	ctx.lr = 0x83108C4C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4686(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4686, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108C68"))) PPC_WEAK_FUNC(sub_83108C68);
PPC_FUNC_IMPL(__imp__sub_83108C68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30844
	ctx.r4.s64 = ctx.r11.s64 + 30844;
	// bl 0x82429b48
	ctx.lr = 0x83108C84;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1670(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1670, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108CA0"))) PPC_WEAK_FUNC(sub_83108CA0);
PPC_FUNC_IMPL(__imp__sub_83108CA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30848
	ctx.r4.s64 = ctx.r11.s64 + 30848;
	// bl 0x82429b48
	ctx.lr = 0x83108CBC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5024(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5024, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108CD8"))) PPC_WEAK_FUNC(sub_83108CD8);
PPC_FUNC_IMPL(__imp__sub_83108CD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30852
	ctx.r4.s64 = ctx.r11.s64 + 30852;
	// bl 0x82429b48
	ctx.lr = 0x83108CF4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,200(r11)
	PPC_STORE_U8(ctx.r11.u32 + 200, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108D10"))) PPC_WEAK_FUNC(sub_83108D10);
PPC_FUNC_IMPL(__imp__sub_83108D10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30856
	ctx.r4.s64 = ctx.r11.s64 + 30856;
	// bl 0x82429b48
	ctx.lr = 0x83108D2C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1018(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1018, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108D48"))) PPC_WEAK_FUNC(sub_83108D48);
PPC_FUNC_IMPL(__imp__sub_83108D48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30860
	ctx.r4.s64 = ctx.r11.s64 + 30860;
	// bl 0x82429b48
	ctx.lr = 0x83108D64;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5045(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5045, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108D80"))) PPC_WEAK_FUNC(sub_83108D80);
PPC_FUNC_IMPL(__imp__sub_83108D80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30864
	ctx.r4.s64 = ctx.r11.s64 + 30864;
	// bl 0x82429b48
	ctx.lr = 0x83108D9C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2730(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2730, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108DB8"))) PPC_WEAK_FUNC(sub_83108DB8);
PPC_FUNC_IMPL(__imp__sub_83108DB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30868
	ctx.r4.s64 = ctx.r11.s64 + 30868;
	// bl 0x82429b48
	ctx.lr = 0x83108DD4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1088(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1088, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108DF0"))) PPC_WEAK_FUNC(sub_83108DF0);
PPC_FUNC_IMPL(__imp__sub_83108DF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30872
	ctx.r4.s64 = ctx.r11.s64 + 30872;
	// bl 0x82429b48
	ctx.lr = 0x83108E0C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1215(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1215, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108E28"))) PPC_WEAK_FUNC(sub_83108E28);
PPC_FUNC_IMPL(__imp__sub_83108E28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30876
	ctx.r4.s64 = ctx.r11.s64 + 30876;
	// bl 0x82429b48
	ctx.lr = 0x83108E44;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,488(r11)
	PPC_STORE_U8(ctx.r11.u32 + 488, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108E60"))) PPC_WEAK_FUNC(sub_83108E60);
PPC_FUNC_IMPL(__imp__sub_83108E60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30880
	ctx.r4.s64 = ctx.r11.s64 + 30880;
	// bl 0x82429b48
	ctx.lr = 0x83108E7C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1384(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1384, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108E98"))) PPC_WEAK_FUNC(sub_83108E98);
PPC_FUNC_IMPL(__imp__sub_83108E98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30884
	ctx.r4.s64 = ctx.r11.s64 + 30884;
	// bl 0x82429b48
	ctx.lr = 0x83108EB4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4572(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4572, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108ED0"))) PPC_WEAK_FUNC(sub_83108ED0);
PPC_FUNC_IMPL(__imp__sub_83108ED0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30888
	ctx.r4.s64 = ctx.r11.s64 + 30888;
	// bl 0x82429b48
	ctx.lr = 0x83108EEC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-49(r11)
	PPC_STORE_U8(ctx.r11.u32 + -49, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108F08"))) PPC_WEAK_FUNC(sub_83108F08);
PPC_FUNC_IMPL(__imp__sub_83108F08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30892
	ctx.r4.s64 = ctx.r11.s64 + 30892;
	// bl 0x82429b48
	ctx.lr = 0x83108F24;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1795(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1795, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108F40"))) PPC_WEAK_FUNC(sub_83108F40);
PPC_FUNC_IMPL(__imp__sub_83108F40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30896
	ctx.r4.s64 = ctx.r11.s64 + 30896;
	// bl 0x82429b48
	ctx.lr = 0x83108F5C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108F78"))) PPC_WEAK_FUNC(sub_83108F78);
PPC_FUNC_IMPL(__imp__sub_83108F78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30900
	ctx.r4.s64 = ctx.r11.s64 + 30900;
	// bl 0x82429b48
	ctx.lr = 0x83108F94;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4578(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4578, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108FB0"))) PPC_WEAK_FUNC(sub_83108FB0);
PPC_FUNC_IMPL(__imp__sub_83108FB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30904
	ctx.r4.s64 = ctx.r11.s64 + 30904;
	// bl 0x82429b48
	ctx.lr = 0x83108FCC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3148, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83108FE8"))) PPC_WEAK_FUNC(sub_83108FE8);
PPC_FUNC_IMPL(__imp__sub_83108FE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30908
	ctx.r4.s64 = ctx.r11.s64 + 30908;
	// bl 0x82429b48
	ctx.lr = 0x83109004;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1410(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1410, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109020"))) PPC_WEAK_FUNC(sub_83109020);
PPC_FUNC_IMPL(__imp__sub_83109020) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30912
	ctx.r4.s64 = ctx.r11.s64 + 30912;
	// bl 0x82429b48
	ctx.lr = 0x8310903C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83109058"))) PPC_WEAK_FUNC(sub_83109058);
PPC_FUNC_IMPL(__imp__sub_83109058) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30916
	ctx.r4.s64 = ctx.r11.s64 + 30916;
	// bl 0x82429b48
	ctx.lr = 0x83109074;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2870(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2870, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109090"))) PPC_WEAK_FUNC(sub_83109090);
PPC_FUNC_IMPL(__imp__sub_83109090) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30920
	ctx.r4.s64 = ctx.r11.s64 + 30920;
	// bl 0x82429b48
	ctx.lr = 0x831090AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2503(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2503, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831090C8"))) PPC_WEAK_FUNC(sub_831090C8);
PPC_FUNC_IMPL(__imp__sub_831090C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30924
	ctx.r4.s64 = ctx.r11.s64 + 30924;
	// bl 0x82429b48
	ctx.lr = 0x831090E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2301(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2301, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109100"))) PPC_WEAK_FUNC(sub_83109100);
PPC_FUNC_IMPL(__imp__sub_83109100) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30928
	ctx.r4.s64 = ctx.r11.s64 + 30928;
	// bl 0x82429b48
	ctx.lr = 0x8310911C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5073(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5073, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109138"))) PPC_WEAK_FUNC(sub_83109138);
PPC_FUNC_IMPL(__imp__sub_83109138) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30932
	ctx.r4.s64 = ctx.r11.s64 + 30932;
	// bl 0x82429b48
	ctx.lr = 0x83109154;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,993(r11)
	PPC_STORE_U8(ctx.r11.u32 + 993, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109170"))) PPC_WEAK_FUNC(sub_83109170);
PPC_FUNC_IMPL(__imp__sub_83109170) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30936
	ctx.r4.s64 = ctx.r11.s64 + 30936;
	// bl 0x82429b48
	ctx.lr = 0x8310918C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,945(r11)
	PPC_STORE_U8(ctx.r11.u32 + 945, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831091A8"))) PPC_WEAK_FUNC(sub_831091A8);
PPC_FUNC_IMPL(__imp__sub_831091A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30940
	ctx.r4.s64 = ctx.r11.s64 + 30940;
	// bl 0x82429b48
	ctx.lr = 0x831091C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1511(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1511, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831091E0"))) PPC_WEAK_FUNC(sub_831091E0);
PPC_FUNC_IMPL(__imp__sub_831091E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30944
	ctx.r4.s64 = ctx.r11.s64 + 30944;
	// bl 0x82429b48
	ctx.lr = 0x831091FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2946(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2946, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109218"))) PPC_WEAK_FUNC(sub_83109218);
PPC_FUNC_IMPL(__imp__sub_83109218) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30948
	ctx.r4.s64 = ctx.r11.s64 + 30948;
	// bl 0x82429b48
	ctx.lr = 0x83109234;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1671(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1671, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109250"))) PPC_WEAK_FUNC(sub_83109250);
PPC_FUNC_IMPL(__imp__sub_83109250) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30952
	ctx.r4.s64 = ctx.r11.s64 + 30952;
	// bl 0x82429b48
	ctx.lr = 0x8310926C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,630(r11)
	PPC_STORE_U8(ctx.r11.u32 + 630, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109288"))) PPC_WEAK_FUNC(sub_83109288);
PPC_FUNC_IMPL(__imp__sub_83109288) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30956
	ctx.r4.s64 = ctx.r11.s64 + 30956;
	// bl 0x82429b48
	ctx.lr = 0x831092A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,55(r11)
	PPC_STORE_U8(ctx.r11.u32 + 55, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831092C0"))) PPC_WEAK_FUNC(sub_831092C0);
PPC_FUNC_IMPL(__imp__sub_831092C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30960
	ctx.r4.s64 = ctx.r11.s64 + 30960;
	// bl 0x82429b48
	ctx.lr = 0x831092DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1555(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1555, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831092F8"))) PPC_WEAK_FUNC(sub_831092F8);
PPC_FUNC_IMPL(__imp__sub_831092F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30964
	ctx.r4.s64 = ctx.r11.s64 + 30964;
	// bl 0x82429b48
	ctx.lr = 0x83109314;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4433(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4433, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109330"))) PPC_WEAK_FUNC(sub_83109330);
PPC_FUNC_IMPL(__imp__sub_83109330) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30968
	ctx.r4.s64 = ctx.r11.s64 + 30968;
	// bl 0x82429b48
	ctx.lr = 0x8310934C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2670(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2670, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109368"))) PPC_WEAK_FUNC(sub_83109368);
PPC_FUNC_IMPL(__imp__sub_83109368) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30972
	ctx.r4.s64 = ctx.r11.s64 + 30972;
	// bl 0x82429b48
	ctx.lr = 0x83109384;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,866(r11)
	PPC_STORE_U8(ctx.r11.u32 + 866, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831093A0"))) PPC_WEAK_FUNC(sub_831093A0);
PPC_FUNC_IMPL(__imp__sub_831093A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30976
	ctx.r4.s64 = ctx.r11.s64 + 30976;
	// bl 0x82429b48
	ctx.lr = 0x831093BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1775(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1775, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831093D8"))) PPC_WEAK_FUNC(sub_831093D8);
PPC_FUNC_IMPL(__imp__sub_831093D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30980
	ctx.r4.s64 = ctx.r11.s64 + 30980;
	// bl 0x82429b48
	ctx.lr = 0x831093F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1892(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1892, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109410"))) PPC_WEAK_FUNC(sub_83109410);
PPC_FUNC_IMPL(__imp__sub_83109410) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30984
	ctx.r4.s64 = ctx.r11.s64 + 30984;
	// bl 0x82429b48
	ctx.lr = 0x8310942C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,257(r11)
	PPC_STORE_U8(ctx.r11.u32 + 257, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109448"))) PPC_WEAK_FUNC(sub_83109448);
PPC_FUNC_IMPL(__imp__sub_83109448) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30988
	ctx.r4.s64 = ctx.r11.s64 + 30988;
	// bl 0x82429b48
	ctx.lr = 0x83109464;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4125(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4125, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109480"))) PPC_WEAK_FUNC(sub_83109480);
PPC_FUNC_IMPL(__imp__sub_83109480) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30992
	ctx.r4.s64 = ctx.r11.s64 + 30992;
	// bl 0x82429b48
	ctx.lr = 0x8310949C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3888(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3888, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831094B8"))) PPC_WEAK_FUNC(sub_831094B8);
PPC_FUNC_IMPL(__imp__sub_831094B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,30996
	ctx.r4.s64 = ctx.r11.s64 + 30996;
	// bl 0x82429b48
	ctx.lr = 0x831094D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1415(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1415, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831094F0"))) PPC_WEAK_FUNC(sub_831094F0);
PPC_FUNC_IMPL(__imp__sub_831094F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31000
	ctx.r4.s64 = ctx.r11.s64 + 31000;
	// bl 0x82429b48
	ctx.lr = 0x8310950C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4726(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4726, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109528"))) PPC_WEAK_FUNC(sub_83109528);
PPC_FUNC_IMPL(__imp__sub_83109528) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31004
	ctx.r4.s64 = ctx.r11.s64 + 31004;
	// bl 0x82429b48
	ctx.lr = 0x83109544;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-62(r11)
	PPC_STORE_U8(ctx.r11.u32 + -62, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109560"))) PPC_WEAK_FUNC(sub_83109560);
PPC_FUNC_IMPL(__imp__sub_83109560) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31008
	ctx.r4.s64 = ctx.r11.s64 + 31008;
	// bl 0x82429b48
	ctx.lr = 0x8310957C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3772(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3772, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109598"))) PPC_WEAK_FUNC(sub_83109598);
PPC_FUNC_IMPL(__imp__sub_83109598) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31012
	ctx.r4.s64 = ctx.r11.s64 + 31012;
	// bl 0x82429b48
	ctx.lr = 0x831095B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3775(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3775, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831095D0"))) PPC_WEAK_FUNC(sub_831095D0);
PPC_FUNC_IMPL(__imp__sub_831095D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31016
	ctx.r4.s64 = ctx.r11.s64 + 31016;
	// bl 0x82429b48
	ctx.lr = 0x831095EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1260(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1260, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109608"))) PPC_WEAK_FUNC(sub_83109608);
PPC_FUNC_IMPL(__imp__sub_83109608) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31020
	ctx.r4.s64 = ctx.r11.s64 + 31020;
	// bl 0x82429b48
	ctx.lr = 0x83109624;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3911(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3911, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109640"))) PPC_WEAK_FUNC(sub_83109640);
PPC_FUNC_IMPL(__imp__sub_83109640) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31024
	ctx.r4.s64 = ctx.r11.s64 + 31024;
	// bl 0x82429b48
	ctx.lr = 0x8310965C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4791(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4791, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109678"))) PPC_WEAK_FUNC(sub_83109678);
PPC_FUNC_IMPL(__imp__sub_83109678) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31028
	ctx.r4.s64 = ctx.r11.s64 + 31028;
	// bl 0x82429b48
	ctx.lr = 0x83109694;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4391(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4391, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831096B0"))) PPC_WEAK_FUNC(sub_831096B0);
PPC_FUNC_IMPL(__imp__sub_831096B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31032
	ctx.r4.s64 = ctx.r11.s64 + 31032;
	// bl 0x82429b48
	ctx.lr = 0x831096CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2154(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2154, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831096E8"))) PPC_WEAK_FUNC(sub_831096E8);
PPC_FUNC_IMPL(__imp__sub_831096E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31036
	ctx.r4.s64 = ctx.r11.s64 + 31036;
	// bl 0x82429b48
	ctx.lr = 0x83109704;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4017(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4017, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109720"))) PPC_WEAK_FUNC(sub_83109720);
PPC_FUNC_IMPL(__imp__sub_83109720) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31040
	ctx.r4.s64 = ctx.r11.s64 + 31040;
	// bl 0x82429b48
	ctx.lr = 0x8310973C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3796(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3796, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109758"))) PPC_WEAK_FUNC(sub_83109758);
PPC_FUNC_IMPL(__imp__sub_83109758) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31044
	ctx.r4.s64 = ctx.r11.s64 + 31044;
	// bl 0x82429b48
	ctx.lr = 0x83109774;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-90(r11)
	PPC_STORE_U8(ctx.r11.u32 + -90, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109790"))) PPC_WEAK_FUNC(sub_83109790);
PPC_FUNC_IMPL(__imp__sub_83109790) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31048
	ctx.r4.s64 = ctx.r11.s64 + 31048;
	// bl 0x82429b48
	ctx.lr = 0x831097AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-172(r11)
	PPC_STORE_U8(ctx.r11.u32 + -172, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831097C8"))) PPC_WEAK_FUNC(sub_831097C8);
PPC_FUNC_IMPL(__imp__sub_831097C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31052
	ctx.r4.s64 = ctx.r11.s64 + 31052;
	// bl 0x82429b48
	ctx.lr = 0x831097E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5013(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5013, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109800"))) PPC_WEAK_FUNC(sub_83109800);
PPC_FUNC_IMPL(__imp__sub_83109800) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31056
	ctx.r4.s64 = ctx.r11.s64 + 31056;
	// bl 0x82429b48
	ctx.lr = 0x8310981C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4394(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4394, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109838"))) PPC_WEAK_FUNC(sub_83109838);
PPC_FUNC_IMPL(__imp__sub_83109838) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31060
	ctx.r4.s64 = ctx.r11.s64 + 31060;
	// bl 0x82429b48
	ctx.lr = 0x83109854;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5079(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5079, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109870"))) PPC_WEAK_FUNC(sub_83109870);
PPC_FUNC_IMPL(__imp__sub_83109870) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31064
	ctx.r4.s64 = ctx.r11.s64 + 31064;
	// bl 0x82429b48
	ctx.lr = 0x8310988C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,412(r11)
	PPC_STORE_U8(ctx.r11.u32 + 412, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831098A8"))) PPC_WEAK_FUNC(sub_831098A8);
PPC_FUNC_IMPL(__imp__sub_831098A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31068
	ctx.r4.s64 = ctx.r11.s64 + 31068;
	// bl 0x82429b48
	ctx.lr = 0x831098C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4929(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4929, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831098E0"))) PPC_WEAK_FUNC(sub_831098E0);
PPC_FUNC_IMPL(__imp__sub_831098E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31072
	ctx.r4.s64 = ctx.r11.s64 + 31072;
	// bl 0x82429b48
	ctx.lr = 0x831098FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2624(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2624, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109918"))) PPC_WEAK_FUNC(sub_83109918);
PPC_FUNC_IMPL(__imp__sub_83109918) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31076
	ctx.r4.s64 = ctx.r11.s64 + 31076;
	// bl 0x82429b48
	ctx.lr = 0x83109934;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109950"))) PPC_WEAK_FUNC(sub_83109950);
PPC_FUNC_IMPL(__imp__sub_83109950) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31080
	ctx.r4.s64 = ctx.r11.s64 + 31080;
	// bl 0x82429b48
	ctx.lr = 0x8310996C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1058(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1058, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109988"))) PPC_WEAK_FUNC(sub_83109988);
PPC_FUNC_IMPL(__imp__sub_83109988) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31084
	ctx.r4.s64 = ctx.r11.s64 + 31084;
	// bl 0x82429b48
	ctx.lr = 0x831099A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4596(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4596, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831099C0"))) PPC_WEAK_FUNC(sub_831099C0);
PPC_FUNC_IMPL(__imp__sub_831099C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31088
	ctx.r4.s64 = ctx.r11.s64 + 31088;
	// bl 0x82429b48
	ctx.lr = 0x831099DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,631(r11)
	PPC_STORE_U8(ctx.r11.u32 + 631, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831099F8"))) PPC_WEAK_FUNC(sub_831099F8);
PPC_FUNC_IMPL(__imp__sub_831099F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31092
	ctx.r4.s64 = ctx.r11.s64 + 31092;
	// bl 0x82429b48
	ctx.lr = 0x83109A14;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4184, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109A30"))) PPC_WEAK_FUNC(sub_83109A30);
PPC_FUNC_IMPL(__imp__sub_83109A30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31096
	ctx.r4.s64 = ctx.r11.s64 + 31096;
	// bl 0x82429b48
	ctx.lr = 0x83109A4C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83109A68"))) PPC_WEAK_FUNC(sub_83109A68);
PPC_FUNC_IMPL(__imp__sub_83109A68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31100
	ctx.r4.s64 = ctx.r11.s64 + 31100;
	// bl 0x82429b48
	ctx.lr = 0x83109A84;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,947(r11)
	PPC_STORE_U8(ctx.r11.u32 + 947, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109AA0"))) PPC_WEAK_FUNC(sub_83109AA0);
PPC_FUNC_IMPL(__imp__sub_83109AA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31104
	ctx.r4.s64 = ctx.r11.s64 + 31104;
	// bl 0x82429b48
	ctx.lr = 0x83109ABC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5106(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5106, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109AD8"))) PPC_WEAK_FUNC(sub_83109AD8);
PPC_FUNC_IMPL(__imp__sub_83109AD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31108
	ctx.r4.s64 = ctx.r11.s64 + 31108;
	// bl 0x82429b48
	ctx.lr = 0x83109AF4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4637(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4637, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109B10"))) PPC_WEAK_FUNC(sub_83109B10);
PPC_FUNC_IMPL(__imp__sub_83109B10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31112
	ctx.r4.s64 = ctx.r11.s64 + 31112;
	// bl 0x82429b48
	ctx.lr = 0x83109B2C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109B48"))) PPC_WEAK_FUNC(sub_83109B48);
PPC_FUNC_IMPL(__imp__sub_83109B48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31116
	ctx.r4.s64 = ctx.r11.s64 + 31116;
	// bl 0x82429b48
	ctx.lr = 0x83109B64;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83109B80"))) PPC_WEAK_FUNC(sub_83109B80);
PPC_FUNC_IMPL(__imp__sub_83109B80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31120
	ctx.r4.s64 = ctx.r11.s64 + 31120;
	// bl 0x82429b48
	ctx.lr = 0x83109B9C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109BB8"))) PPC_WEAK_FUNC(sub_83109BB8);
PPC_FUNC_IMPL(__imp__sub_83109BB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31124
	ctx.r4.s64 = ctx.r11.s64 + 31124;
	// bl 0x82429b48
	ctx.lr = 0x83109BD4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2329(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2329, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109BF0"))) PPC_WEAK_FUNC(sub_83109BF0);
PPC_FUNC_IMPL(__imp__sub_83109BF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31128
	ctx.r4.s64 = ctx.r11.s64 + 31128;
	// bl 0x82429b48
	ctx.lr = 0x83109C0C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4120, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109C28"))) PPC_WEAK_FUNC(sub_83109C28);
PPC_FUNC_IMPL(__imp__sub_83109C28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31132
	ctx.r4.s64 = ctx.r11.s64 + 31132;
	// bl 0x82429b48
	ctx.lr = 0x83109C44;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2194(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2194, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109C60"))) PPC_WEAK_FUNC(sub_83109C60);
PPC_FUNC_IMPL(__imp__sub_83109C60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31136
	ctx.r4.s64 = ctx.r11.s64 + 31136;
	// bl 0x82429b48
	ctx.lr = 0x83109C7C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4314(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4314, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109C98"))) PPC_WEAK_FUNC(sub_83109C98);
PPC_FUNC_IMPL(__imp__sub_83109C98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31140
	ctx.r4.s64 = ctx.r11.s64 + 31140;
	// bl 0x82429b48
	ctx.lr = 0x83109CB4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,971(r11)
	PPC_STORE_U8(ctx.r11.u32 + 971, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109CD0"))) PPC_WEAK_FUNC(sub_83109CD0);
PPC_FUNC_IMPL(__imp__sub_83109CD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31144
	ctx.r4.s64 = ctx.r11.s64 + 31144;
	// bl 0x82429b48
	ctx.lr = 0x83109CEC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3426(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3426, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109D08"))) PPC_WEAK_FUNC(sub_83109D08);
PPC_FUNC_IMPL(__imp__sub_83109D08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31148
	ctx.r4.s64 = ctx.r11.s64 + 31148;
	// bl 0x82429b48
	ctx.lr = 0x83109D24;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2709(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2709, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109D40"))) PPC_WEAK_FUNC(sub_83109D40);
PPC_FUNC_IMPL(__imp__sub_83109D40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31152
	ctx.r4.s64 = ctx.r11.s64 + 31152;
	// bl 0x82429b48
	ctx.lr = 0x83109D5C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4224(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4224, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109D78"))) PPC_WEAK_FUNC(sub_83109D78);
PPC_FUNC_IMPL(__imp__sub_83109D78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31156
	ctx.r4.s64 = ctx.r11.s64 + 31156;
	// bl 0x82429b48
	ctx.lr = 0x83109D94;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,634(r11)
	PPC_STORE_U8(ctx.r11.u32 + 634, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109DB0"))) PPC_WEAK_FUNC(sub_83109DB0);
PPC_FUNC_IMPL(__imp__sub_83109DB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31160
	ctx.r4.s64 = ctx.r11.s64 + 31160;
	// bl 0x82429b48
	ctx.lr = 0x83109DCC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4395(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4395, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109DE8"))) PPC_WEAK_FUNC(sub_83109DE8);
PPC_FUNC_IMPL(__imp__sub_83109DE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31164
	ctx.r4.s64 = ctx.r11.s64 + 31164;
	// bl 0x82429b48
	ctx.lr = 0x83109E04;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3375(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3375, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109E20"))) PPC_WEAK_FUNC(sub_83109E20);
PPC_FUNC_IMPL(__imp__sub_83109E20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31168
	ctx.r4.s64 = ctx.r11.s64 + 31168;
	// bl 0x82429b48
	ctx.lr = 0x83109E3C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1007(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1007, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109E58"))) PPC_WEAK_FUNC(sub_83109E58);
PPC_FUNC_IMPL(__imp__sub_83109E58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31172
	ctx.r4.s64 = ctx.r11.s64 + 31172;
	// bl 0x82429b48
	ctx.lr = 0x83109E74;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1380(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1380, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109E90"))) PPC_WEAK_FUNC(sub_83109E90);
PPC_FUNC_IMPL(__imp__sub_83109E90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31176
	ctx.r4.s64 = ctx.r11.s64 + 31176;
	// bl 0x82429b48
	ctx.lr = 0x83109EAC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,651(r11)
	PPC_STORE_U8(ctx.r11.u32 + 651, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109EC8"))) PPC_WEAK_FUNC(sub_83109EC8);
PPC_FUNC_IMPL(__imp__sub_83109EC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31180
	ctx.r4.s64 = ctx.r11.s64 + 31180;
	// bl 0x82429b48
	ctx.lr = 0x83109EE4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2306(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2306, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109F00"))) PPC_WEAK_FUNC(sub_83109F00);
PPC_FUNC_IMPL(__imp__sub_83109F00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31184
	ctx.r4.s64 = ctx.r11.s64 + 31184;
	// bl 0x82429b48
	ctx.lr = 0x83109F1C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83109F38"))) PPC_WEAK_FUNC(sub_83109F38);
PPC_FUNC_IMPL(__imp__sub_83109F38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31188
	ctx.r4.s64 = ctx.r11.s64 + 31188;
	// bl 0x82429b48
	ctx.lr = 0x83109F54;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1390(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1390, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109F70"))) PPC_WEAK_FUNC(sub_83109F70);
PPC_FUNC_IMPL(__imp__sub_83109F70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31192
	ctx.r4.s64 = ctx.r11.s64 + 31192;
	// bl 0x82429b48
	ctx.lr = 0x83109F8C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2625(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2625, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109FA8"))) PPC_WEAK_FUNC(sub_83109FA8);
PPC_FUNC_IMPL(__imp__sub_83109FA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31196
	ctx.r4.s64 = ctx.r11.s64 + 31196;
	// bl 0x82429b48
	ctx.lr = 0x83109FC4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1949(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1949, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83109FE0"))) PPC_WEAK_FUNC(sub_83109FE0);
PPC_FUNC_IMPL(__imp__sub_83109FE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31200
	ctx.r4.s64 = ctx.r11.s64 + 31200;
	// bl 0x82429b48
	ctx.lr = 0x83109FFC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2319(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2319, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A018"))) PPC_WEAK_FUNC(sub_8310A018);
PPC_FUNC_IMPL(__imp__sub_8310A018) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31204
	ctx.r4.s64 = ctx.r11.s64 + 31204;
	// bl 0x82429b48
	ctx.lr = 0x8310A034;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2869(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2869, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A050"))) PPC_WEAK_FUNC(sub_8310A050);
PPC_FUNC_IMPL(__imp__sub_8310A050) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31208
	ctx.r4.s64 = ctx.r11.s64 + 31208;
	// bl 0x82429b48
	ctx.lr = 0x8310A06C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,632(r11)
	PPC_STORE_U8(ctx.r11.u32 + 632, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A088"))) PPC_WEAK_FUNC(sub_8310A088);
PPC_FUNC_IMPL(__imp__sub_8310A088) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31212
	ctx.r4.s64 = ctx.r11.s64 + 31212;
	// bl 0x82429b48
	ctx.lr = 0x8310A0A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2140, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A0C0"))) PPC_WEAK_FUNC(sub_8310A0C0);
PPC_FUNC_IMPL(__imp__sub_8310A0C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31216
	ctx.r4.s64 = ctx.r11.s64 + 31216;
	// bl 0x82429b48
	ctx.lr = 0x8310A0DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5077(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5077, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A0F8"))) PPC_WEAK_FUNC(sub_8310A0F8);
PPC_FUNC_IMPL(__imp__sub_8310A0F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31220
	ctx.r4.s64 = ctx.r11.s64 + 31220;
	// bl 0x82429b48
	ctx.lr = 0x8310A114;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1509(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1509, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A130"))) PPC_WEAK_FUNC(sub_8310A130);
PPC_FUNC_IMPL(__imp__sub_8310A130) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31224
	ctx.r4.s64 = ctx.r11.s64 + 31224;
	// bl 0x82429b48
	ctx.lr = 0x8310A14C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4714(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4714, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A168"))) PPC_WEAK_FUNC(sub_8310A168);
PPC_FUNC_IMPL(__imp__sub_8310A168) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31228
	ctx.r4.s64 = ctx.r11.s64 + 31228;
	// bl 0x82429b48
	ctx.lr = 0x8310A184;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310A1A0"))) PPC_WEAK_FUNC(sub_8310A1A0);
PPC_FUNC_IMPL(__imp__sub_8310A1A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31232
	ctx.r4.s64 = ctx.r11.s64 + 31232;
	// bl 0x82429b48
	ctx.lr = 0x8310A1BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1261(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1261, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A1D8"))) PPC_WEAK_FUNC(sub_8310A1D8);
PPC_FUNC_IMPL(__imp__sub_8310A1D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31236
	ctx.r4.s64 = ctx.r11.s64 + 31236;
	// bl 0x82429b48
	ctx.lr = 0x8310A1F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2769(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2769, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A210"))) PPC_WEAK_FUNC(sub_8310A210);
PPC_FUNC_IMPL(__imp__sub_8310A210) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31240
	ctx.r4.s64 = ctx.r11.s64 + 31240;
	// bl 0x82429b48
	ctx.lr = 0x8310A22C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5101(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5101, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A248"))) PPC_WEAK_FUNC(sub_8310A248);
PPC_FUNC_IMPL(__imp__sub_8310A248) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31244
	ctx.r4.s64 = ctx.r11.s64 + 31244;
	// bl 0x82429b48
	ctx.lr = 0x8310A264;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1019(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1019, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A280"))) PPC_WEAK_FUNC(sub_8310A280);
PPC_FUNC_IMPL(__imp__sub_8310A280) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31248
	ctx.r4.s64 = ctx.r11.s64 + 31248;
	// bl 0x82429b48
	ctx.lr = 0x8310A29C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2086(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2086, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A2B8"))) PPC_WEAK_FUNC(sub_8310A2B8);
PPC_FUNC_IMPL(__imp__sub_8310A2B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31252
	ctx.r4.s64 = ctx.r11.s64 + 31252;
	// bl 0x82429b48
	ctx.lr = 0x8310A2D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3263(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3263, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A2F0"))) PPC_WEAK_FUNC(sub_8310A2F0);
PPC_FUNC_IMPL(__imp__sub_8310A2F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31256
	ctx.r4.s64 = ctx.r11.s64 + 31256;
	// bl 0x82429b48
	ctx.lr = 0x8310A30C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3703(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3703, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A328"))) PPC_WEAK_FUNC(sub_8310A328);
PPC_FUNC_IMPL(__imp__sub_8310A328) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31260
	ctx.r4.s64 = ctx.r11.s64 + 31260;
	// bl 0x82429b48
	ctx.lr = 0x8310A344;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4636(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4636, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A360"))) PPC_WEAK_FUNC(sub_8310A360);
PPC_FUNC_IMPL(__imp__sub_8310A360) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31264
	ctx.r4.s64 = ctx.r11.s64 + 31264;
	// bl 0x82429b48
	ctx.lr = 0x8310A37C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310A398"))) PPC_WEAK_FUNC(sub_8310A398);
PPC_FUNC_IMPL(__imp__sub_8310A398) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31268
	ctx.r4.s64 = ctx.r11.s64 + 31268;
	// bl 0x82429b48
	ctx.lr = 0x8310A3B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3235(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3235, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A3D0"))) PPC_WEAK_FUNC(sub_8310A3D0);
PPC_FUNC_IMPL(__imp__sub_8310A3D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31272
	ctx.r4.s64 = ctx.r11.s64 + 31272;
	// bl 0x82429b48
	ctx.lr = 0x8310A3EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A408"))) PPC_WEAK_FUNC(sub_8310A408);
PPC_FUNC_IMPL(__imp__sub_8310A408) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31276
	ctx.r4.s64 = ctx.r11.s64 + 31276;
	// bl 0x82429b48
	ctx.lr = 0x8310A424;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310A440"))) PPC_WEAK_FUNC(sub_8310A440);
PPC_FUNC_IMPL(__imp__sub_8310A440) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31280
	ctx.r4.s64 = ctx.r11.s64 + 31280;
	// bl 0x82429b48
	ctx.lr = 0x8310A45C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4111(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4111, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A478"))) PPC_WEAK_FUNC(sub_8310A478);
PPC_FUNC_IMPL(__imp__sub_8310A478) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31284
	ctx.r4.s64 = ctx.r11.s64 + 31284;
	// bl 0x82429b48
	ctx.lr = 0x8310A494;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,185(r11)
	PPC_STORE_U8(ctx.r11.u32 + 185, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A4B0"))) PPC_WEAK_FUNC(sub_8310A4B0);
PPC_FUNC_IMPL(__imp__sub_8310A4B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31288
	ctx.r4.s64 = ctx.r11.s64 + 31288;
	// bl 0x82429b48
	ctx.lr = 0x8310A4CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310A4E8"))) PPC_WEAK_FUNC(sub_8310A4E8);
PPC_FUNC_IMPL(__imp__sub_8310A4E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31292
	ctx.r4.s64 = ctx.r11.s64 + 31292;
	// bl 0x82429b48
	ctx.lr = 0x8310A504;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1059(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1059, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A520"))) PPC_WEAK_FUNC(sub_8310A520);
PPC_FUNC_IMPL(__imp__sub_8310A520) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31296
	ctx.r4.s64 = ctx.r11.s64 + 31296;
	// bl 0x82429b48
	ctx.lr = 0x8310A53C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5103(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5103, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A558"))) PPC_WEAK_FUNC(sub_8310A558);
PPC_FUNC_IMPL(__imp__sub_8310A558) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31300
	ctx.r4.s64 = ctx.r11.s64 + 31300;
	// bl 0x82429b48
	ctx.lr = 0x8310A574;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,555(r11)
	PPC_STORE_U8(ctx.r11.u32 + 555, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A590"))) PPC_WEAK_FUNC(sub_8310A590);
PPC_FUNC_IMPL(__imp__sub_8310A590) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31304
	ctx.r4.s64 = ctx.r11.s64 + 31304;
	// bl 0x82429b48
	ctx.lr = 0x8310A5AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1554(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1554, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A5C8"))) PPC_WEAK_FUNC(sub_8310A5C8);
PPC_FUNC_IMPL(__imp__sub_8310A5C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31308
	ctx.r4.s64 = ctx.r11.s64 + 31308;
	// bl 0x82429b48
	ctx.lr = 0x8310A5E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,384(r11)
	PPC_STORE_U8(ctx.r11.u32 + 384, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A600"))) PPC_WEAK_FUNC(sub_8310A600);
PPC_FUNC_IMPL(__imp__sub_8310A600) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31312
	ctx.r4.s64 = ctx.r11.s64 + 31312;
	// bl 0x82429b48
	ctx.lr = 0x8310A61C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A638"))) PPC_WEAK_FUNC(sub_8310A638);
PPC_FUNC_IMPL(__imp__sub_8310A638) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31316
	ctx.r4.s64 = ctx.r11.s64 + 31316;
	// bl 0x82429b48
	ctx.lr = 0x8310A654;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2988(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2988, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A670"))) PPC_WEAK_FUNC(sub_8310A670);
PPC_FUNC_IMPL(__imp__sub_8310A670) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31320
	ctx.r4.s64 = ctx.r11.s64 + 31320;
	// bl 0x82429b48
	ctx.lr = 0x8310A68C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2300(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2300, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A6A8"))) PPC_WEAK_FUNC(sub_8310A6A8);
PPC_FUNC_IMPL(__imp__sub_8310A6A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31324
	ctx.r4.s64 = ctx.r11.s64 + 31324;
	// bl 0x82429b48
	ctx.lr = 0x8310A6C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,380(r11)
	PPC_STORE_U8(ctx.r11.u32 + 380, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A6E0"))) PPC_WEAK_FUNC(sub_8310A6E0);
PPC_FUNC_IMPL(__imp__sub_8310A6E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31328
	ctx.r4.s64 = ctx.r11.s64 + 31328;
	// bl 0x82429b48
	ctx.lr = 0x8310A6FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3515(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3515, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A718"))) PPC_WEAK_FUNC(sub_8310A718);
PPC_FUNC_IMPL(__imp__sub_8310A718) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31332
	ctx.r4.s64 = ctx.r11.s64 + 31332;
	// bl 0x82429b48
	ctx.lr = 0x8310A734;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3315(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3315, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A750"))) PPC_WEAK_FUNC(sub_8310A750);
PPC_FUNC_IMPL(__imp__sub_8310A750) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31336
	ctx.r4.s64 = ctx.r11.s64 + 31336;
	// bl 0x82429b48
	ctx.lr = 0x8310A76C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2251(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2251, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A788"))) PPC_WEAK_FUNC(sub_8310A788);
PPC_FUNC_IMPL(__imp__sub_8310A788) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31340
	ctx.r4.s64 = ctx.r11.s64 + 31340;
	// bl 0x82429b48
	ctx.lr = 0x8310A7A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4252(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4252, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A7C0"))) PPC_WEAK_FUNC(sub_8310A7C0);
PPC_FUNC_IMPL(__imp__sub_8310A7C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31344
	ctx.r4.s64 = ctx.r11.s64 + 31344;
	// bl 0x82429b48
	ctx.lr = 0x8310A7DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,941(r11)
	PPC_STORE_U8(ctx.r11.u32 + 941, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A7F8"))) PPC_WEAK_FUNC(sub_8310A7F8);
PPC_FUNC_IMPL(__imp__sub_8310A7F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31348
	ctx.r4.s64 = ctx.r11.s64 + 31348;
	// bl 0x82429b48
	ctx.lr = 0x8310A814;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1193(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1193, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A830"))) PPC_WEAK_FUNC(sub_8310A830);
PPC_FUNC_IMPL(__imp__sub_8310A830) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// bl 0x82429b48
	ctx.lr = 0x8310A84C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4070(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4070, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A868"))) PPC_WEAK_FUNC(sub_8310A868);
PPC_FUNC_IMPL(__imp__sub_8310A868) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31356
	ctx.r4.s64 = ctx.r11.s64 + 31356;
	// bl 0x82429b48
	ctx.lr = 0x8310A884;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,908(r11)
	PPC_STORE_U8(ctx.r11.u32 + 908, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A8A0"))) PPC_WEAK_FUNC(sub_8310A8A0);
PPC_FUNC_IMPL(__imp__sub_8310A8A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31360
	ctx.r4.s64 = ctx.r11.s64 + 31360;
	// bl 0x82429b48
	ctx.lr = 0x8310A8BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4870(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4870, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A8D8"))) PPC_WEAK_FUNC(sub_8310A8D8);
PPC_FUNC_IMPL(__imp__sub_8310A8D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31364
	ctx.r4.s64 = ctx.r11.s64 + 31364;
	// bl 0x82429b48
	ctx.lr = 0x8310A8F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4434(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4434, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A910"))) PPC_WEAK_FUNC(sub_8310A910);
PPC_FUNC_IMPL(__imp__sub_8310A910) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31368
	ctx.r4.s64 = ctx.r11.s64 + 31368;
	// bl 0x82429b48
	ctx.lr = 0x8310A92C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2710(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2710, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A948"))) PPC_WEAK_FUNC(sub_8310A948);
PPC_FUNC_IMPL(__imp__sub_8310A948) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31372
	ctx.r4.s64 = ctx.r11.s64 + 31372;
	// bl 0x82429b48
	ctx.lr = 0x8310A964;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3902(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3902, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A980"))) PPC_WEAK_FUNC(sub_8310A980);
PPC_FUNC_IMPL(__imp__sub_8310A980) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31376
	ctx.r4.s64 = ctx.r11.s64 + 31376;
	// bl 0x82429b48
	ctx.lr = 0x8310A99C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310A9B8"))) PPC_WEAK_FUNC(sub_8310A9B8);
PPC_FUNC_IMPL(__imp__sub_8310A9B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31380
	ctx.r4.s64 = ctx.r11.s64 + 31380;
	// bl 0x82429b48
	ctx.lr = 0x8310A9D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3889(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3889, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310A9F0"))) PPC_WEAK_FUNC(sub_8310A9F0);
PPC_FUNC_IMPL(__imp__sub_8310A9F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31384
	ctx.r4.s64 = ctx.r11.s64 + 31384;
	// bl 0x82429b48
	ctx.lr = 0x8310AA0C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5117, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AA28"))) PPC_WEAK_FUNC(sub_8310AA28);
PPC_FUNC_IMPL(__imp__sub_8310AA28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31388
	ctx.r4.s64 = ctx.r11.s64 + 31388;
	// bl 0x82429b48
	ctx.lr = 0x8310AA44;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4230(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4230, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AA60"))) PPC_WEAK_FUNC(sub_8310AA60);
PPC_FUNC_IMPL(__imp__sub_8310AA60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31392
	ctx.r4.s64 = ctx.r11.s64 + 31392;
	// bl 0x82429b48
	ctx.lr = 0x8310AA7C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,553(r11)
	PPC_STORE_U8(ctx.r11.u32 + 553, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AA98"))) PPC_WEAK_FUNC(sub_8310AA98);
PPC_FUNC_IMPL(__imp__sub_8310AA98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31396
	ctx.r4.s64 = ctx.r11.s64 + 31396;
	// bl 0x82429b48
	ctx.lr = 0x8310AAB4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,201(r11)
	PPC_STORE_U8(ctx.r11.u32 + 201, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AAD0"))) PPC_WEAK_FUNC(sub_8310AAD0);
PPC_FUNC_IMPL(__imp__sub_8310AAD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31400
	ctx.r4.s64 = ctx.r11.s64 + 31400;
	// bl 0x82429b48
	ctx.lr = 0x8310AAEC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1348(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1348, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AB08"))) PPC_WEAK_FUNC(sub_8310AB08);
PPC_FUNC_IMPL(__imp__sub_8310AB08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31404
	ctx.r4.s64 = ctx.r11.s64 + 31404;
	// bl 0x82429b48
	ctx.lr = 0x8310AB24;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310AB40"))) PPC_WEAK_FUNC(sub_8310AB40);
PPC_FUNC_IMPL(__imp__sub_8310AB40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31408
	ctx.r4.s64 = ctx.r11.s64 + 31408;
	// bl 0x82429b48
	ctx.lr = 0x8310AB5C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1016(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1016, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AB78"))) PPC_WEAK_FUNC(sub_8310AB78);
PPC_FUNC_IMPL(__imp__sub_8310AB78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31412
	ctx.r4.s64 = ctx.r11.s64 + 31412;
	// bl 0x82429b48
	ctx.lr = 0x8310AB94;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1753(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1753, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310ABB0"))) PPC_WEAK_FUNC(sub_8310ABB0);
PPC_FUNC_IMPL(__imp__sub_8310ABB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31416
	ctx.r4.s64 = ctx.r11.s64 + 31416;
	// bl 0x82429b48
	ctx.lr = 0x8310ABCC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,105(r11)
	PPC_STORE_U8(ctx.r11.u32 + 105, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310ABE8"))) PPC_WEAK_FUNC(sub_8310ABE8);
PPC_FUNC_IMPL(__imp__sub_8310ABE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31420
	ctx.r4.s64 = ctx.r11.s64 + 31420;
	// bl 0x82429b48
	ctx.lr = 0x8310AC04;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2597(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2597, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AC20"))) PPC_WEAK_FUNC(sub_8310AC20);
PPC_FUNC_IMPL(__imp__sub_8310AC20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31424
	ctx.r4.s64 = ctx.r11.s64 + 31424;
	// bl 0x82429b48
	ctx.lr = 0x8310AC3C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,382(r11)
	PPC_STORE_U8(ctx.r11.u32 + 382, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AC58"))) PPC_WEAK_FUNC(sub_8310AC58);
PPC_FUNC_IMPL(__imp__sub_8310AC58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31428
	ctx.r4.s64 = ctx.r11.s64 + 31428;
	// bl 0x82429b48
	ctx.lr = 0x8310AC74;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3753(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3753, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AC90"))) PPC_WEAK_FUNC(sub_8310AC90);
PPC_FUNC_IMPL(__imp__sub_8310AC90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31432
	ctx.r4.s64 = ctx.r11.s64 + 31432;
	// bl 0x82429b48
	ctx.lr = 0x8310ACAC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3514(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3514, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310ACC8"))) PPC_WEAK_FUNC(sub_8310ACC8);
PPC_FUNC_IMPL(__imp__sub_8310ACC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31436
	ctx.r4.s64 = ctx.r11.s64 + 31436;
	// bl 0x82429b48
	ctx.lr = 0x8310ACE4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2558(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2558, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AD00"))) PPC_WEAK_FUNC(sub_8310AD00);
PPC_FUNC_IMPL(__imp__sub_8310AD00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31440
	ctx.r4.s64 = ctx.r11.s64 + 31440;
	// bl 0x82429b48
	ctx.lr = 0x8310AD1C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2704(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2704, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AD38"))) PPC_WEAK_FUNC(sub_8310AD38);
PPC_FUNC_IMPL(__imp__sub_8310AD38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31444
	ctx.r4.s64 = ctx.r11.s64 + 31444;
	// bl 0x82429b48
	ctx.lr = 0x8310AD54;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2120, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AD70"))) PPC_WEAK_FUNC(sub_8310AD70);
PPC_FUNC_IMPL(__imp__sub_8310AD70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31448
	ctx.r4.s64 = ctx.r11.s64 + 31448;
	// bl 0x82429b48
	ctx.lr = 0x8310AD8C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4618(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4618, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310ADA8"))) PPC_WEAK_FUNC(sub_8310ADA8);
PPC_FUNC_IMPL(__imp__sub_8310ADA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31452
	ctx.r4.s64 = ctx.r11.s64 + 31452;
	// bl 0x82429b48
	ctx.lr = 0x8310ADC4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,415(r11)
	PPC_STORE_U8(ctx.r11.u32 + 415, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310ADE0"))) PPC_WEAK_FUNC(sub_8310ADE0);
PPC_FUNC_IMPL(__imp__sub_8310ADE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31456
	ctx.r4.s64 = ctx.r11.s64 + 31456;
	// bl 0x82429b48
	ctx.lr = 0x8310ADFC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3667(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3667, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AE18"))) PPC_WEAK_FUNC(sub_8310AE18);
PPC_FUNC_IMPL(__imp__sub_8310AE18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31460
	ctx.r4.s64 = ctx.r11.s64 + 31460;
	// bl 0x82429b48
	ctx.lr = 0x8310AE34;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1510(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1510, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AE50"))) PPC_WEAK_FUNC(sub_8310AE50);
PPC_FUNC_IMPL(__imp__sub_8310AE50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31464
	ctx.r4.s64 = ctx.r11.s64 + 31464;
	// bl 0x82429b48
	ctx.lr = 0x8310AE6C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1382(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1382, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AE88"))) PPC_WEAK_FUNC(sub_8310AE88);
PPC_FUNC_IMPL(__imp__sub_8310AE88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31468
	ctx.r4.s64 = ctx.r11.s64 + 31468;
	// bl 0x82429b48
	ctx.lr = 0x8310AEA4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4898(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4898, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AEC0"))) PPC_WEAK_FUNC(sub_8310AEC0);
PPC_FUNC_IMPL(__imp__sub_8310AEC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31472
	ctx.r4.s64 = ctx.r11.s64 + 31472;
	// bl 0x82429b48
	ctx.lr = 0x8310AEDC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,285(r11)
	PPC_STORE_U8(ctx.r11.u32 + 285, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AEF8"))) PPC_WEAK_FUNC(sub_8310AEF8);
PPC_FUNC_IMPL(__imp__sub_8310AEF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31476
	ctx.r4.s64 = ctx.r11.s64 + 31476;
	// bl 0x82429b48
	ctx.lr = 0x8310AF14;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4384(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4384, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AF30"))) PPC_WEAK_FUNC(sub_8310AF30);
PPC_FUNC_IMPL(__imp__sub_8310AF30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31480
	ctx.r4.s64 = ctx.r11.s64 + 31480;
	// bl 0x82429b48
	ctx.lr = 0x8310AF4C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4789(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4789, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AF68"))) PPC_WEAK_FUNC(sub_8310AF68);
PPC_FUNC_IMPL(__imp__sub_8310AF68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31484
	ctx.r4.s64 = ctx.r11.s64 + 31484;
	// bl 0x82429b48
	ctx.lr = 0x8310AF84;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4068(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4068, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AFA0"))) PPC_WEAK_FUNC(sub_8310AFA0);
PPC_FUNC_IMPL(__imp__sub_8310AFA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31488
	ctx.r4.s64 = ctx.r11.s64 + 31488;
	// bl 0x82429b48
	ctx.lr = 0x8310AFBC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3720(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3720, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310AFD8"))) PPC_WEAK_FUNC(sub_8310AFD8);
PPC_FUNC_IMPL(__imp__sub_8310AFD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31492
	ctx.r4.s64 = ctx.r11.s64 + 31492;
	// bl 0x82429b48
	ctx.lr = 0x8310AFF4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4253(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4253, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B010"))) PPC_WEAK_FUNC(sub_8310B010);
PPC_FUNC_IMPL(__imp__sub_8310B010) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31496
	ctx.r4.s64 = ctx.r11.s64 + 31496;
	// bl 0x82429b48
	ctx.lr = 0x8310B02C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1537(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1537, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B048"))) PPC_WEAK_FUNC(sub_8310B048);
PPC_FUNC_IMPL(__imp__sub_8310B048) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31500
	ctx.r4.s64 = ctx.r11.s64 + 31500;
	// bl 0x82429b48
	ctx.lr = 0x8310B064;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310B080"))) PPC_WEAK_FUNC(sub_8310B080);
PPC_FUNC_IMPL(__imp__sub_8310B080) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31504
	ctx.r4.s64 = ctx.r11.s64 + 31504;
	// bl 0x82429b48
	ctx.lr = 0x8310B09C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2304, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B0B8"))) PPC_WEAK_FUNC(sub_8310B0B8);
PPC_FUNC_IMPL(__imp__sub_8310B0B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31508
	ctx.r4.s64 = ctx.r11.s64 + 31508;
	// bl 0x82429b48
	ctx.lr = 0x8310B0D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3110(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3110, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B0F0"))) PPC_WEAK_FUNC(sub_8310B0F0);
PPC_FUNC_IMPL(__imp__sub_8310B0F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31512
	ctx.r4.s64 = ctx.r11.s64 + 31512;
	// bl 0x82429b48
	ctx.lr = 0x8310B10C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2991(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2991, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B128"))) PPC_WEAK_FUNC(sub_8310B128);
PPC_FUNC_IMPL(__imp__sub_8310B128) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31516
	ctx.r4.s64 = ctx.r11.s64 + 31516;
	// bl 0x82429b48
	ctx.lr = 0x8310B144;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,286(r11)
	PPC_STORE_U8(ctx.r11.u32 + 286, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B160"))) PPC_WEAK_FUNC(sub_8310B160);
PPC_FUNC_IMPL(__imp__sub_8310B160) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31520
	ctx.r4.s64 = ctx.r11.s64 + 31520;
	// bl 0x82429b48
	ctx.lr = 0x8310B17C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3425(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3425, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B198"))) PPC_WEAK_FUNC(sub_8310B198);
PPC_FUNC_IMPL(__imp__sub_8310B198) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31524
	ctx.r4.s64 = ctx.r11.s64 + 31524;
	// bl 0x82429b48
	ctx.lr = 0x8310B1B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3237(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3237, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B1D0"))) PPC_WEAK_FUNC(sub_8310B1D0);
PPC_FUNC_IMPL(__imp__sub_8310B1D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31528
	ctx.r4.s64 = ctx.r11.s64 + 31528;
	// bl 0x82429b48
	ctx.lr = 0x8310B1EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4126(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4126, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B208"))) PPC_WEAK_FUNC(sub_8310B208);
PPC_FUNC_IMPL(__imp__sub_8310B208) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31532
	ctx.r4.s64 = ctx.r11.s64 + 31532;
	// bl 0x82429b48
	ctx.lr = 0x8310B224;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2818(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2818, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B240"))) PPC_WEAK_FUNC(sub_8310B240);
PPC_FUNC_IMPL(__imp__sub_8310B240) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31536
	ctx.r4.s64 = ctx.r11.s64 + 31536;
	// bl 0x82429b48
	ctx.lr = 0x8310B25C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4573(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4573, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B278"))) PPC_WEAK_FUNC(sub_8310B278);
PPC_FUNC_IMPL(__imp__sub_8310B278) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31540
	ctx.r4.s64 = ctx.r11.s64 + 31540;
	// bl 0x82429b48
	ctx.lr = 0x8310B294;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3541(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3541, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B2B0"))) PPC_WEAK_FUNC(sub_8310B2B0);
PPC_FUNC_IMPL(__imp__sub_8310B2B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31544
	ctx.r4.s64 = ctx.r11.s64 + 31544;
	// bl 0x82429b48
	ctx.lr = 0x8310B2CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1194(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1194, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B2E8"))) PPC_WEAK_FUNC(sub_8310B2E8);
PPC_FUNC_IMPL(__imp__sub_8310B2E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31548
	ctx.r4.s64 = ctx.r11.s64 + 31548;
	// bl 0x82429b48
	ctx.lr = 0x8310B304;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,363(r11)
	PPC_STORE_U8(ctx.r11.u32 + 363, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B320"))) PPC_WEAK_FUNC(sub_8310B320);
PPC_FUNC_IMPL(__imp__sub_8310B320) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31552
	ctx.r4.s64 = ctx.r11.s64 + 31552;
	// bl 0x82429b48
	ctx.lr = 0x8310B33C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3623(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3623, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B358"))) PPC_WEAK_FUNC(sub_8310B358);
PPC_FUNC_IMPL(__imp__sub_8310B358) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31556
	ctx.r4.s64 = ctx.r11.s64 + 31556;
	// bl 0x82429b48
	ctx.lr = 0x8310B374;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310B390"))) PPC_WEAK_FUNC(sub_8310B390);
PPC_FUNC_IMPL(__imp__sub_8310B390) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31560
	ctx.r4.s64 = ctx.r11.s64 + 31560;
	// bl 0x82429b48
	ctx.lr = 0x8310B3AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,923(r11)
	PPC_STORE_U8(ctx.r11.u32 + 923, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B3C8"))) PPC_WEAK_FUNC(sub_8310B3C8);
PPC_FUNC_IMPL(__imp__sub_8310B3C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31564
	ctx.r4.s64 = ctx.r11.s64 + 31564;
	// bl 0x82429b48
	ctx.lr = 0x8310B3E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,163(r11)
	PPC_STORE_U8(ctx.r11.u32 + 163, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B400"))) PPC_WEAK_FUNC(sub_8310B400);
PPC_FUNC_IMPL(__imp__sub_8310B400) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31568
	ctx.r4.s64 = ctx.r11.s64 + 31568;
	// bl 0x82429b48
	ctx.lr = 0x8310B41C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310B438"))) PPC_WEAK_FUNC(sub_8310B438);
PPC_FUNC_IMPL(__imp__sub_8310B438) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31572
	ctx.r4.s64 = ctx.r11.s64 + 31572;
	// bl 0x82429b48
	ctx.lr = 0x8310B454;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2659(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2659, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B470"))) PPC_WEAK_FUNC(sub_8310B470);
PPC_FUNC_IMPL(__imp__sub_8310B470) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31576
	ctx.r4.s64 = ctx.r11.s64 + 31576;
	// bl 0x82429b48
	ctx.lr = 0x8310B48C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,968(r11)
	PPC_STORE_U8(ctx.r11.u32 + 968, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B4A8"))) PPC_WEAK_FUNC(sub_8310B4A8);
PPC_FUNC_IMPL(__imp__sub_8310B4A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31580
	ctx.r4.s64 = ctx.r11.s64 + 31580;
	// bl 0x82429b48
	ctx.lr = 0x8310B4C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4536(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4536, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B4E0"))) PPC_WEAK_FUNC(sub_8310B4E0);
PPC_FUNC_IMPL(__imp__sub_8310B4E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31584
	ctx.r4.s64 = ctx.r11.s64 + 31584;
	// bl 0x82429b48
	ctx.lr = 0x8310B4FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4254(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4254, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B518"))) PPC_WEAK_FUNC(sub_8310B518);
PPC_FUNC_IMPL(__imp__sub_8310B518) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31588
	ctx.r4.s64 = ctx.r11.s64 + 31588;
	// bl 0x82429b48
	ctx.lr = 0x8310B534;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4339(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4339, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B550"))) PPC_WEAK_FUNC(sub_8310B550);
PPC_FUNC_IMPL(__imp__sub_8310B550) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31592
	ctx.r4.s64 = ctx.r11.s64 + 31592;
	// bl 0x82429b48
	ctx.lr = 0x8310B56C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1815(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1815, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B588"))) PPC_WEAK_FUNC(sub_8310B588);
PPC_FUNC_IMPL(__imp__sub_8310B588) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31596
	ctx.r4.s64 = ctx.r11.s64 + 31596;
	// bl 0x82429b48
	ctx.lr = 0x8310B5A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3849(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3849, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B5C0"))) PPC_WEAK_FUNC(sub_8310B5C0);
PPC_FUNC_IMPL(__imp__sub_8310B5C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31600
	ctx.r4.s64 = ctx.r11.s64 + 31600;
	// bl 0x82429b48
	ctx.lr = 0x8310B5DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,139(r11)
	PPC_STORE_U8(ctx.r11.u32 + 139, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B5F8"))) PPC_WEAK_FUNC(sub_8310B5F8);
PPC_FUNC_IMPL(__imp__sub_8310B5F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31604
	ctx.r4.s64 = ctx.r11.s64 + 31604;
	// bl 0x82429b48
	ctx.lr = 0x8310B614;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1538(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1538, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B630"))) PPC_WEAK_FUNC(sub_8310B630);
PPC_FUNC_IMPL(__imp__sub_8310B630) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31608
	ctx.r4.s64 = ctx.r11.s64 + 31608;
	// bl 0x82429b48
	ctx.lr = 0x8310B64C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310B668"))) PPC_WEAK_FUNC(sub_8310B668);
PPC_FUNC_IMPL(__imp__sub_8310B668) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31612
	ctx.r4.s64 = ctx.r11.s64 + 31612;
	// bl 0x82429b48
	ctx.lr = 0x8310B684;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,426(r11)
	PPC_STORE_U8(ctx.r11.u32 + 426, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B6A0"))) PPC_WEAK_FUNC(sub_8310B6A0);
PPC_FUNC_IMPL(__imp__sub_8310B6A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31616
	ctx.r4.s64 = ctx.r11.s64 + 31616;
	// bl 0x82429b48
	ctx.lr = 0x8310B6BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2627(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2627, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B6D8"))) PPC_WEAK_FUNC(sub_8310B6D8);
PPC_FUNC_IMPL(__imp__sub_8310B6D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31620
	ctx.r4.s64 = ctx.r11.s64 + 31620;
	// bl 0x82429b48
	ctx.lr = 0x8310B6F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1195(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1195, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B710"))) PPC_WEAK_FUNC(sub_8310B710);
PPC_FUNC_IMPL(__imp__sub_8310B710) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31624
	ctx.r4.s64 = ctx.r11.s64 + 31624;
	// bl 0x82429b48
	ctx.lr = 0x8310B72C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3239(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3239, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B748"))) PPC_WEAK_FUNC(sub_8310B748);
PPC_FUNC_IMPL(__imp__sub_8310B748) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31628
	ctx.r4.s64 = ctx.r11.s64 + 31628;
	// bl 0x82429b48
	ctx.lr = 0x8310B764;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5090(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5090, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B780"))) PPC_WEAK_FUNC(sub_8310B780);
PPC_FUNC_IMPL(__imp__sub_8310B780) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31632
	ctx.r4.s64 = ctx.r11.s64 + 31632;
	// bl 0x82429b48
	ctx.lr = 0x8310B79C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1304, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B7B8"))) PPC_WEAK_FUNC(sub_8310B7B8);
PPC_FUNC_IMPL(__imp__sub_8310B7B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31636
	ctx.r4.s64 = ctx.r11.s64 + 31636;
	// bl 0x82429b48
	ctx.lr = 0x8310B7D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2554(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2554, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B7F0"))) PPC_WEAK_FUNC(sub_8310B7F0);
PPC_FUNC_IMPL(__imp__sub_8310B7F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31640
	ctx.r4.s64 = ctx.r11.s64 + 31640;
	// bl 0x82429b48
	ctx.lr = 0x8310B80C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3243(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3243, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B828"))) PPC_WEAK_FUNC(sub_8310B828);
PPC_FUNC_IMPL(__imp__sub_8310B828) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31644
	ctx.r4.s64 = ctx.r11.s64 + 31644;
	// bl 0x82429b48
	ctx.lr = 0x8310B844;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,911(r11)
	PPC_STORE_U8(ctx.r11.u32 + 911, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B860"))) PPC_WEAK_FUNC(sub_8310B860);
PPC_FUNC_IMPL(__imp__sub_8310B860) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31648
	ctx.r4.s64 = ctx.r11.s64 + 31648;
	// bl 0x82429b48
	ctx.lr = 0x8310B87C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2069(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2069, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B898"))) PPC_WEAK_FUNC(sub_8310B898);
PPC_FUNC_IMPL(__imp__sub_8310B898) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31652
	ctx.r4.s64 = ctx.r11.s64 + 31652;
	// bl 0x82429b48
	ctx.lr = 0x8310B8B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3786(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3786, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B8D0"))) PPC_WEAK_FUNC(sub_8310B8D0);
PPC_FUNC_IMPL(__imp__sub_8310B8D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31656
	ctx.r4.s64 = ctx.r11.s64 + 31656;
	// bl 0x82429b48
	ctx.lr = 0x8310B8EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,574(r11)
	PPC_STORE_U8(ctx.r11.u32 + 574, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B908"))) PPC_WEAK_FUNC(sub_8310B908);
PPC_FUNC_IMPL(__imp__sub_8310B908) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31660
	ctx.r4.s64 = ctx.r11.s64 + 31660;
	// bl 0x82429b48
	ctx.lr = 0x8310B924;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2559(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2559, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B940"))) PPC_WEAK_FUNC(sub_8310B940);
PPC_FUNC_IMPL(__imp__sub_8310B940) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31664
	ctx.r4.s64 = ctx.r11.s64 + 31664;
	// bl 0x82429b48
	ctx.lr = 0x8310B95C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1047(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1047, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B978"))) PPC_WEAK_FUNC(sub_8310B978);
PPC_FUNC_IMPL(__imp__sub_8310B978) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31668
	ctx.r4.s64 = ctx.r11.s64 + 31668;
	// bl 0x82429b48
	ctx.lr = 0x8310B994;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2468(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2468, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B9B0"))) PPC_WEAK_FUNC(sub_8310B9B0);
PPC_FUNC_IMPL(__imp__sub_8310B9B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31672
	ctx.r4.s64 = ctx.r11.s64 + 31672;
	// bl 0x82429b48
	ctx.lr = 0x8310B9CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3542(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3542, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310B9E8"))) PPC_WEAK_FUNC(sub_8310B9E8);
PPC_FUNC_IMPL(__imp__sub_8310B9E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31676
	ctx.r4.s64 = ctx.r11.s64 + 31676;
	// bl 0x82429b48
	ctx.lr = 0x8310BA04;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2530(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2530, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BA20"))) PPC_WEAK_FUNC(sub_8310BA20);
PPC_FUNC_IMPL(__imp__sub_8310BA20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31680
	ctx.r4.s64 = ctx.r11.s64 + 31680;
	// bl 0x82429b48
	ctx.lr = 0x8310BA3C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,307(r11)
	PPC_STORE_U8(ctx.r11.u32 + 307, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BA58"))) PPC_WEAK_FUNC(sub_8310BA58);
PPC_FUNC_IMPL(__imp__sub_8310BA58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31684
	ctx.r4.s64 = ctx.r11.s64 + 31684;
	// bl 0x82429b48
	ctx.lr = 0x8310BA74;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2121(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2121, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BA90"))) PPC_WEAK_FUNC(sub_8310BA90);
PPC_FUNC_IMPL(__imp__sub_8310BA90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31688
	ctx.r4.s64 = ctx.r11.s64 + 31688;
	// bl 0x82429b48
	ctx.lr = 0x8310BAAC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4308(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4308, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BAC8"))) PPC_WEAK_FUNC(sub_8310BAC8);
PPC_FUNC_IMPL(__imp__sub_8310BAC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31692
	ctx.r4.s64 = ctx.r11.s64 + 31692;
	// bl 0x82429b48
	ctx.lr = 0x8310BAE4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4069(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4069, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BB00"))) PPC_WEAK_FUNC(sub_8310BB00);
PPC_FUNC_IMPL(__imp__sub_8310BB00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31696
	ctx.r4.s64 = ctx.r11.s64 + 31696;
	// bl 0x82429b48
	ctx.lr = 0x8310BB1C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2247(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2247, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BB38"))) PPC_WEAK_FUNC(sub_8310BB38);
PPC_FUNC_IMPL(__imp__sub_8310BB38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31700
	ctx.r4.s64 = ctx.r11.s64 + 31700;
	// bl 0x82429b48
	ctx.lr = 0x8310BB54;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4849(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4849, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BB70"))) PPC_WEAK_FUNC(sub_8310BB70);
PPC_FUNC_IMPL(__imp__sub_8310BB70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31704
	ctx.r4.s64 = ctx.r11.s64 + 31704;
	// bl 0x82429b48
	ctx.lr = 0x8310BB8C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4792(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4792, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BBA8"))) PPC_WEAK_FUNC(sub_8310BBA8);
PPC_FUNC_IMPL(__imp__sub_8310BBA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31708
	ctx.r4.s64 = ctx.r11.s64 + 31708;
	// bl 0x82429b48
	ctx.lr = 0x8310BBC4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310BBE0"))) PPC_WEAK_FUNC(sub_8310BBE0);
PPC_FUNC_IMPL(__imp__sub_8310BBE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31712
	ctx.r4.s64 = ctx.r11.s64 + 31712;
	// bl 0x82429b48
	ctx.lr = 0x8310BBFC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2512(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2512, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BC18"))) PPC_WEAK_FUNC(sub_8310BC18);
PPC_FUNC_IMPL(__imp__sub_8310BC18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31716
	ctx.r4.s64 = ctx.r11.s64 + 31716;
	// bl 0x82429b48
	ctx.lr = 0x8310BC34;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5102(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5102, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BC50"))) PPC_WEAK_FUNC(sub_8310BC50);
PPC_FUNC_IMPL(__imp__sub_8310BC50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31720
	ctx.r4.s64 = ctx.r11.s64 + 31720;
	// bl 0x82429b48
	ctx.lr = 0x8310BC6C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1470(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1470, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BC88"))) PPC_WEAK_FUNC(sub_8310BC88);
PPC_FUNC_IMPL(__imp__sub_8310BC88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31724
	ctx.r4.s64 = ctx.r11.s64 + 31724;
	// bl 0x82429b48
	ctx.lr = 0x8310BCA4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1895(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1895, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BCC0"))) PPC_WEAK_FUNC(sub_8310BCC0);
PPC_FUNC_IMPL(__imp__sub_8310BCC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31728
	ctx.r4.s64 = ctx.r11.s64 + 31728;
	// bl 0x82429b48
	ctx.lr = 0x8310BCDC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3540(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3540, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BCF8"))) PPC_WEAK_FUNC(sub_8310BCF8);
PPC_FUNC_IMPL(__imp__sub_8310BCF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31732
	ctx.r4.s64 = ctx.r11.s64 + 31732;
	// bl 0x82429b48
	ctx.lr = 0x8310BD14;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4348(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4348, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BD30"))) PPC_WEAK_FUNC(sub_8310BD30);
PPC_FUNC_IMPL(__imp__sub_8310BD30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31736
	ctx.r4.s64 = ctx.r11.s64 + 31736;
	// bl 0x82429b48
	ctx.lr = 0x8310BD4C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1240(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1240, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BD68"))) PPC_WEAK_FUNC(sub_8310BD68);
PPC_FUNC_IMPL(__imp__sub_8310BD68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31740
	ctx.r4.s64 = ctx.r11.s64 + 31740;
	// bl 0x82429b48
	ctx.lr = 0x8310BD84;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3669(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3669, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BDA0"))) PPC_WEAK_FUNC(sub_8310BDA0);
PPC_FUNC_IMPL(__imp__sub_8310BDA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31744
	ctx.r4.s64 = ctx.r11.s64 + 31744;
	// bl 0x82429b48
	ctx.lr = 0x8310BDBC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3023(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3023, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BDD8"))) PPC_WEAK_FUNC(sub_8310BDD8);
PPC_FUNC_IMPL(__imp__sub_8310BDD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31748
	ctx.r4.s64 = ctx.r11.s64 + 31748;
	// bl 0x82429b48
	ctx.lr = 0x8310BDF4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,270(r11)
	PPC_STORE_U8(ctx.r11.u32 + 270, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BE10"))) PPC_WEAK_FUNC(sub_8310BE10);
PPC_FUNC_IMPL(__imp__sub_8310BE10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31752
	ctx.r4.s64 = ctx.r11.s64 + 31752;
	// bl 0x82429b48
	ctx.lr = 0x8310BE2C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3838(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3838, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BE48"))) PPC_WEAK_FUNC(sub_8310BE48);
PPC_FUNC_IMPL(__imp__sub_8310BE48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31756
	ctx.r4.s64 = ctx.r11.s64 + 31756;
	// bl 0x82429b48
	ctx.lr = 0x8310BE64;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3584(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3584, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BE80"))) PPC_WEAK_FUNC(sub_8310BE80);
PPC_FUNC_IMPL(__imp__sub_8310BE80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31760
	ctx.r4.s64 = ctx.r11.s64 + 31760;
	// bl 0x82429b48
	ctx.lr = 0x8310BE9C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1147(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1147, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BEB8"))) PPC_WEAK_FUNC(sub_8310BEB8);
PPC_FUNC_IMPL(__imp__sub_8310BEB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31764
	ctx.r4.s64 = ctx.r11.s64 + 31764;
	// bl 0x82429b48
	ctx.lr = 0x8310BED4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2819(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2819, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BEF0"))) PPC_WEAK_FUNC(sub_8310BEF0);
PPC_FUNC_IMPL(__imp__sub_8310BEF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31768
	ctx.r4.s64 = ctx.r11.s64 + 31768;
	// bl 0x82429b48
	ctx.lr = 0x8310BF0C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2122(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2122, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

