#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83139AE0"))) PPC_WEAK_FUNC(sub_83139AE0);
PPC_FUNC_IMPL(__imp__sub_83139AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1800
	ctx.r4.s64 = ctx.r11.s64 + 1800;
	// bl 0x82429b48
	ctx.lr = 0x83139AFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4883(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4883, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139B18"))) PPC_WEAK_FUNC(sub_83139B18);
PPC_FUNC_IMPL(__imp__sub_83139B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1804
	ctx.r4.s64 = ctx.r11.s64 + 1804;
	// bl 0x82429b48
	ctx.lr = 0x83139B34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3423(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3423, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139B50"))) PPC_WEAK_FUNC(sub_83139B50);
PPC_FUNC_IMPL(__imp__sub_83139B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1808
	ctx.r4.s64 = ctx.r11.s64 + 1808;
	// bl 0x82429b48
	ctx.lr = 0x83139B6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4973(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4973, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139B88"))) PPC_WEAK_FUNC(sub_83139B88);
PPC_FUNC_IMPL(__imp__sub_83139B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1812
	ctx.r4.s64 = ctx.r11.s64 + 1812;
	// bl 0x82429b48
	ctx.lr = 0x83139BA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,333(r11)
	PPC_STORE_U8(ctx.r11.u32 + 333, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139BC0"))) PPC_WEAK_FUNC(sub_83139BC0);
PPC_FUNC_IMPL(__imp__sub_83139BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1816
	ctx.r4.s64 = ctx.r11.s64 + 1816;
	// bl 0x82429b48
	ctx.lr = 0x83139BDC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,530(r11)
	PPC_STORE_U8(ctx.r11.u32 + 530, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139BF8"))) PPC_WEAK_FUNC(sub_83139BF8);
PPC_FUNC_IMPL(__imp__sub_83139BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1820
	ctx.r4.s64 = ctx.r11.s64 + 1820;
	// bl 0x82429b48
	ctx.lr = 0x83139C14;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4766(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4766, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139C30"))) PPC_WEAK_FUNC(sub_83139C30);
PPC_FUNC_IMPL(__imp__sub_83139C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1824
	ctx.r4.s64 = ctx.r11.s64 + 1824;
	// bl 0x82429b48
	ctx.lr = 0x83139C4C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4968(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4968, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139C68"))) PPC_WEAK_FUNC(sub_83139C68);
PPC_FUNC_IMPL(__imp__sub_83139C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1828
	ctx.r4.s64 = ctx.r11.s64 + 1828;
	// bl 0x82429b48
	ctx.lr = 0x83139C84;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2148, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139CA0"))) PPC_WEAK_FUNC(sub_83139CA0);
PPC_FUNC_IMPL(__imp__sub_83139CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1832
	ctx.r4.s64 = ctx.r11.s64 + 1832;
	// bl 0x82429b48
	ctx.lr = 0x83139CBC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3140, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139CD8"))) PPC_WEAK_FUNC(sub_83139CD8);
PPC_FUNC_IMPL(__imp__sub_83139CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1836
	ctx.r4.s64 = ctx.r11.s64 + 1836;
	// bl 0x82429b48
	ctx.lr = 0x83139CF4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,735(r11)
	PPC_STORE_U8(ctx.r11.u32 + 735, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139D10"))) PPC_WEAK_FUNC(sub_83139D10);
PPC_FUNC_IMPL(__imp__sub_83139D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1840
	ctx.r4.s64 = ctx.r11.s64 + 1840;
	// bl 0x82429b48
	ctx.lr = 0x83139D2C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,594(r11)
	PPC_STORE_U8(ctx.r11.u32 + 594, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139D48"))) PPC_WEAK_FUNC(sub_83139D48);
PPC_FUNC_IMPL(__imp__sub_83139D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1844
	ctx.r4.s64 = ctx.r11.s64 + 1844;
	// bl 0x82429b48
	ctx.lr = 0x83139D64;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5208(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5208, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139D80"))) PPC_WEAK_FUNC(sub_83139D80);
PPC_FUNC_IMPL(__imp__sub_83139D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1848
	ctx.r4.s64 = ctx.r11.s64 + 1848;
	// bl 0x82429b48
	ctx.lr = 0x83139D9C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83139DB8"))) PPC_WEAK_FUNC(sub_83139DB8);
PPC_FUNC_IMPL(__imp__sub_83139DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1852
	ctx.r4.s64 = ctx.r11.s64 + 1852;
	// bl 0x82429b48
	ctx.lr = 0x83139DD4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83139DF0"))) PPC_WEAK_FUNC(sub_83139DF0);
PPC_FUNC_IMPL(__imp__sub_83139DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1856
	ctx.r4.s64 = ctx.r11.s64 + 1856;
	// bl 0x82429b48
	ctx.lr = 0x83139E0C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4900(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4900, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139E28"))) PPC_WEAK_FUNC(sub_83139E28);
PPC_FUNC_IMPL(__imp__sub_83139E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1860
	ctx.r4.s64 = ctx.r11.s64 + 1860;
	// bl 0x82429b48
	ctx.lr = 0x83139E44;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,47(r11)
	PPC_STORE_U8(ctx.r11.u32 + 47, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139E60"))) PPC_WEAK_FUNC(sub_83139E60);
PPC_FUNC_IMPL(__imp__sub_83139E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1864
	ctx.r4.s64 = ctx.r11.s64 + 1864;
	// bl 0x82429b48
	ctx.lr = 0x83139E7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,373(r11)
	PPC_STORE_U8(ctx.r11.u32 + 373, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139E98"))) PPC_WEAK_FUNC(sub_83139E98);
PPC_FUNC_IMPL(__imp__sub_83139E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1868
	ctx.r4.s64 = ctx.r11.s64 + 1868;
	// bl 0x82429b48
	ctx.lr = 0x83139EB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83139ED0"))) PPC_WEAK_FUNC(sub_83139ED0);
PPC_FUNC_IMPL(__imp__sub_83139ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1872
	ctx.r4.s64 = ctx.r11.s64 + 1872;
	// bl 0x82429b48
	ctx.lr = 0x83139EEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-225(r11)
	PPC_STORE_U8(ctx.r11.u32 + -225, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139F08"))) PPC_WEAK_FUNC(sub_83139F08);
PPC_FUNC_IMPL(__imp__sub_83139F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1876
	ctx.r4.s64 = ctx.r11.s64 + 1876;
	// bl 0x82429b48
	ctx.lr = 0x83139F24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2774(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2774, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139F40"))) PPC_WEAK_FUNC(sub_83139F40);
PPC_FUNC_IMPL(__imp__sub_83139F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1880
	ctx.r4.s64 = ctx.r11.s64 + 1880;
	// bl 0x82429b48
	ctx.lr = 0x83139F5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3066(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3066, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139F78"))) PPC_WEAK_FUNC(sub_83139F78);
PPC_FUNC_IMPL(__imp__sub_83139F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1884
	ctx.r4.s64 = ctx.r11.s64 + 1884;
	// bl 0x82429b48
	ctx.lr = 0x83139F94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3748(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3748, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139FB0"))) PPC_WEAK_FUNC(sub_83139FB0);
PPC_FUNC_IMPL(__imp__sub_83139FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1888
	ctx.r4.s64 = ctx.r11.s64 + 1888;
	// bl 0x82429b48
	ctx.lr = 0x83139FCC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-180(r11)
	PPC_STORE_U8(ctx.r11.u32 + -180, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139FE8"))) PPC_WEAK_FUNC(sub_83139FE8);
PPC_FUNC_IMPL(__imp__sub_83139FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1892
	ctx.r4.s64 = ctx.r11.s64 + 1892;
	// bl 0x82429b48
	ctx.lr = 0x8313A004;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 241, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A020"))) PPC_WEAK_FUNC(sub_8313A020);
PPC_FUNC_IMPL(__imp__sub_8313A020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1896
	ctx.r4.s64 = ctx.r11.s64 + 1896;
	// bl 0x82429b48
	ctx.lr = 0x8313A03C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2975(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2975, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A058"))) PPC_WEAK_FUNC(sub_8313A058);
PPC_FUNC_IMPL(__imp__sub_8313A058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1900
	ctx.r4.s64 = ctx.r11.s64 + 1900;
	// bl 0x82429b48
	ctx.lr = 0x8313A074;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4389(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4389, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A090"))) PPC_WEAK_FUNC(sub_8313A090);
PPC_FUNC_IMPL(__imp__sub_8313A090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1904
	ctx.r4.s64 = ctx.r11.s64 + 1904;
	// bl 0x82429b48
	ctx.lr = 0x8313A0AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313A0C8"))) PPC_WEAK_FUNC(sub_8313A0C8);
PPC_FUNC_IMPL(__imp__sub_8313A0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1908
	ctx.r4.s64 = ctx.r11.s64 + 1908;
	// bl 0x82429b48
	ctx.lr = 0x8313A0E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2675(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2675, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A100"))) PPC_WEAK_FUNC(sub_8313A100);
PPC_FUNC_IMPL(__imp__sub_8313A100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1912
	ctx.r4.s64 = ctx.r11.s64 + 1912;
	// bl 0x82429b48
	ctx.lr = 0x8313A11C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,733(r11)
	PPC_STORE_U8(ctx.r11.u32 + 733, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A138"))) PPC_WEAK_FUNC(sub_8313A138);
PPC_FUNC_IMPL(__imp__sub_8313A138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1916
	ctx.r4.s64 = ctx.r11.s64 + 1916;
	// bl 0x82429b48
	ctx.lr = 0x8313A154;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3877(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3877, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A170"))) PPC_WEAK_FUNC(sub_8313A170);
PPC_FUNC_IMPL(__imp__sub_8313A170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1920
	ctx.r4.s64 = ctx.r11.s64 + 1920;
	// bl 0x82429b48
	ctx.lr = 0x8313A18C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3017(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3017, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A1A8"))) PPC_WEAK_FUNC(sub_8313A1A8);
PPC_FUNC_IMPL(__imp__sub_8313A1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1924
	ctx.r4.s64 = ctx.r11.s64 + 1924;
	// bl 0x82429b48
	ctx.lr = 0x8313A1C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4764(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4764, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A1E0"))) PPC_WEAK_FUNC(sub_8313A1E0);
PPC_FUNC_IMPL(__imp__sub_8313A1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1928
	ctx.r4.s64 = ctx.r11.s64 + 1928;
	// bl 0x82429b48
	ctx.lr = 0x8313A1FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3950(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3950, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A218"))) PPC_WEAK_FUNC(sub_8313A218);
PPC_FUNC_IMPL(__imp__sub_8313A218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1932
	ctx.r4.s64 = ctx.r11.s64 + 1932;
	// bl 0x82429b48
	ctx.lr = 0x8313A234;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3440(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3440, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A250"))) PPC_WEAK_FUNC(sub_8313A250);
PPC_FUNC_IMPL(__imp__sub_8313A250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1936
	ctx.r4.s64 = ctx.r11.s64 + 1936;
	// bl 0x82429b48
	ctx.lr = 0x8313A26C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2373(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2373, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A288"))) PPC_WEAK_FUNC(sub_8313A288);
PPC_FUNC_IMPL(__imp__sub_8313A288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1940
	ctx.r4.s64 = ctx.r11.s64 + 1940;
	// bl 0x82429b48
	ctx.lr = 0x8313A2A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3694(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3694, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A2C0"))) PPC_WEAK_FUNC(sub_8313A2C0);
PPC_FUNC_IMPL(__imp__sub_8313A2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1944
	ctx.r4.s64 = ctx.r11.s64 + 1944;
	// bl 0x82429b48
	ctx.lr = 0x8313A2DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4978(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4978, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A2F8"))) PPC_WEAK_FUNC(sub_8313A2F8);
PPC_FUNC_IMPL(__imp__sub_8313A2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1948
	ctx.r4.s64 = ctx.r11.s64 + 1948;
	// bl 0x82429b48
	ctx.lr = 0x8313A314;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1520(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1520, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A330"))) PPC_WEAK_FUNC(sub_8313A330);
PPC_FUNC_IMPL(__imp__sub_8313A330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1952
	ctx.r4.s64 = ctx.r11.s64 + 1952;
	// bl 0x82429b48
	ctx.lr = 0x8313A34C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-447(r11)
	PPC_STORE_U8(ctx.r11.u32 + -447, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A368"))) PPC_WEAK_FUNC(sub_8313A368);
PPC_FUNC_IMPL(__imp__sub_8313A368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1956
	ctx.r4.s64 = ctx.r11.s64 + 1956;
	// bl 0x82429b48
	ctx.lr = 0x8313A384;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4008(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4008, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A3A0"))) PPC_WEAK_FUNC(sub_8313A3A0);
PPC_FUNC_IMPL(__imp__sub_8313A3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1960
	ctx.r4.s64 = ctx.r11.s64 + 1960;
	// bl 0x82429b48
	ctx.lr = 0x8313A3BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5246, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A3D8"))) PPC_WEAK_FUNC(sub_8313A3D8);
PPC_FUNC_IMPL(__imp__sub_8313A3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1964
	ctx.r4.s64 = ctx.r11.s64 + 1964;
	// bl 0x82429b48
	ctx.lr = 0x8313A3F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3602(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3602, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A410"))) PPC_WEAK_FUNC(sub_8313A410);
PPC_FUNC_IMPL(__imp__sub_8313A410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1968
	ctx.r4.s64 = ctx.r11.s64 + 1968;
	// bl 0x82429b48
	ctx.lr = 0x8313A42C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313A448"))) PPC_WEAK_FUNC(sub_8313A448);
PPC_FUNC_IMPL(__imp__sub_8313A448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1972
	ctx.r4.s64 = ctx.r11.s64 + 1972;
	// bl 0x82429b48
	ctx.lr = 0x8313A464;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,450(r11)
	PPC_STORE_U8(ctx.r11.u32 + 450, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A480"))) PPC_WEAK_FUNC(sub_8313A480);
PPC_FUNC_IMPL(__imp__sub_8313A480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1976
	ctx.r4.s64 = ctx.r11.s64 + 1976;
	// bl 0x82429b48
	ctx.lr = 0x8313A49C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2135(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2135, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A4B8"))) PPC_WEAK_FUNC(sub_8313A4B8);
PPC_FUNC_IMPL(__imp__sub_8313A4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1980
	ctx.r4.s64 = ctx.r11.s64 + 1980;
	// bl 0x82429b48
	ctx.lr = 0x8313A4D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4523(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4523, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A4F0"))) PPC_WEAK_FUNC(sub_8313A4F0);
PPC_FUNC_IMPL(__imp__sub_8313A4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1984
	ctx.r4.s64 = ctx.r11.s64 + 1984;
	// bl 0x82429b48
	ctx.lr = 0x8313A50C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,406(r11)
	PPC_STORE_U8(ctx.r11.u32 + 406, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A528"))) PPC_WEAK_FUNC(sub_8313A528);
PPC_FUNC_IMPL(__imp__sub_8313A528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1988
	ctx.r4.s64 = ctx.r11.s64 + 1988;
	// bl 0x82429b48
	ctx.lr = 0x8313A544;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 508, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A560"))) PPC_WEAK_FUNC(sub_8313A560);
PPC_FUNC_IMPL(__imp__sub_8313A560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1992
	ctx.r4.s64 = ctx.r11.s64 + 1992;
	// bl 0x82429b48
	ctx.lr = 0x8313A57C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-304(r11)
	PPC_STORE_U8(ctx.r11.u32 + -304, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A598"))) PPC_WEAK_FUNC(sub_8313A598);
PPC_FUNC_IMPL(__imp__sub_8313A598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1996
	ctx.r4.s64 = ctx.r11.s64 + 1996;
	// bl 0x82429b48
	ctx.lr = 0x8313A5B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-690(r11)
	PPC_STORE_U8(ctx.r11.u32 + -690, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A5D0"))) PPC_WEAK_FUNC(sub_8313A5D0);
PPC_FUNC_IMPL(__imp__sub_8313A5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2000
	ctx.r4.s64 = ctx.r11.s64 + 2000;
	// bl 0x82429b48
	ctx.lr = 0x8313A5EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3819(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3819, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A608"))) PPC_WEAK_FUNC(sub_8313A608);
PPC_FUNC_IMPL(__imp__sub_8313A608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2004
	ctx.r4.s64 = ctx.r11.s64 + 2004;
	// bl 0x82429b48
	ctx.lr = 0x8313A624;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,497(r11)
	PPC_STORE_U8(ctx.r11.u32 + 497, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A640"))) PPC_WEAK_FUNC(sub_8313A640);
PPC_FUNC_IMPL(__imp__sub_8313A640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2008
	ctx.r4.s64 = ctx.r11.s64 + 2008;
	// bl 0x82429b48
	ctx.lr = 0x8313A65C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4262(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4262, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A678"))) PPC_WEAK_FUNC(sub_8313A678);
PPC_FUNC_IMPL(__imp__sub_8313A678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2012
	ctx.r4.s64 = ctx.r11.s64 + 2012;
	// bl 0x82429b48
	ctx.lr = 0x8313A694;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-303(r11)
	PPC_STORE_U8(ctx.r11.u32 + -303, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A6B0"))) PPC_WEAK_FUNC(sub_8313A6B0);
PPC_FUNC_IMPL(__imp__sub_8313A6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2016
	ctx.r4.s64 = ctx.r11.s64 + 2016;
	// bl 0x82429b48
	ctx.lr = 0x8313A6CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-424(r11)
	PPC_STORE_U8(ctx.r11.u32 + -424, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A6E8"))) PPC_WEAK_FUNC(sub_8313A6E8);
PPC_FUNC_IMPL(__imp__sub_8313A6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2020
	ctx.r4.s64 = ctx.r11.s64 + 2020;
	// bl 0x82429b48
	ctx.lr = 0x8313A704;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,650(r11)
	PPC_STORE_U8(ctx.r11.u32 + 650, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A720"))) PPC_WEAK_FUNC(sub_8313A720);
PPC_FUNC_IMPL(__imp__sub_8313A720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2024
	ctx.r4.s64 = ctx.r11.s64 + 2024;
	// bl 0x82429b48
	ctx.lr = 0x8313A73C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,279(r11)
	PPC_STORE_U8(ctx.r11.u32 + 279, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A758"))) PPC_WEAK_FUNC(sub_8313A758);
PPC_FUNC_IMPL(__imp__sub_8313A758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2028
	ctx.r4.s64 = ctx.r11.s64 + 2028;
	// bl 0x82429b48
	ctx.lr = 0x8313A774;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5239(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5239, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A790"))) PPC_WEAK_FUNC(sub_8313A790);
PPC_FUNC_IMPL(__imp__sub_8313A790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2032
	ctx.r4.s64 = ctx.r11.s64 + 2032;
	// bl 0x82429b48
	ctx.lr = 0x8313A7AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313A7C8"))) PPC_WEAK_FUNC(sub_8313A7C8);
PPC_FUNC_IMPL(__imp__sub_8313A7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2036
	ctx.r4.s64 = ctx.r11.s64 + 2036;
	// bl 0x82429b48
	ctx.lr = 0x8313A7E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-747(r11)
	PPC_STORE_U8(ctx.r11.u32 + -747, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A800"))) PPC_WEAK_FUNC(sub_8313A800);
PPC_FUNC_IMPL(__imp__sub_8313A800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2040
	ctx.r4.s64 = ctx.r11.s64 + 2040;
	// bl 0x82429b48
	ctx.lr = 0x8313A81C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1631(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1631, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A838"))) PPC_WEAK_FUNC(sub_8313A838);
PPC_FUNC_IMPL(__imp__sub_8313A838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2044
	ctx.r4.s64 = ctx.r11.s64 + 2044;
	// bl 0x82429b48
	ctx.lr = 0x8313A854;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-228(r11)
	PPC_STORE_U8(ctx.r11.u32 + -228, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A870"))) PPC_WEAK_FUNC(sub_8313A870);
PPC_FUNC_IMPL(__imp__sub_8313A870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2048
	ctx.r4.s64 = ctx.r11.s64 + 2048;
	// bl 0x82429b48
	ctx.lr = 0x8313A88C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,149(r11)
	PPC_STORE_U8(ctx.r11.u32 + 149, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A8A8"))) PPC_WEAK_FUNC(sub_8313A8A8);
PPC_FUNC_IMPL(__imp__sub_8313A8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2052
	ctx.r4.s64 = ctx.r11.s64 + 2052;
	// bl 0x82429b48
	ctx.lr = 0x8313A8C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1517(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1517, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A8E0"))) PPC_WEAK_FUNC(sub_8313A8E0);
PPC_FUNC_IMPL(__imp__sub_8313A8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2056
	ctx.r4.s64 = ctx.r11.s64 + 2056;
	// bl 0x82429b48
	ctx.lr = 0x8313A8FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4737(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4737, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A918"))) PPC_WEAK_FUNC(sub_8313A918);
PPC_FUNC_IMPL(__imp__sub_8313A918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2060
	ctx.r4.s64 = ctx.r11.s64 + 2060;
	// bl 0x82429b48
	ctx.lr = 0x8313A934;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4650(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4650, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A950"))) PPC_WEAK_FUNC(sub_8313A950);
PPC_FUNC_IMPL(__imp__sub_8313A950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2064
	ctx.r4.s64 = ctx.r11.s64 + 2064;
	// bl 0x82429b48
	ctx.lr = 0x8313A96C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313A988"))) PPC_WEAK_FUNC(sub_8313A988);
PPC_FUNC_IMPL(__imp__sub_8313A988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2068
	ctx.r4.s64 = ctx.r11.s64 + 2068;
	// bl 0x82429b48
	ctx.lr = 0x8313A9A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2253(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2253, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A9C0"))) PPC_WEAK_FUNC(sub_8313A9C0);
PPC_FUNC_IMPL(__imp__sub_8313A9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2072
	ctx.r4.s64 = ctx.r11.s64 + 2072;
	// bl 0x82429b48
	ctx.lr = 0x8313A9DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4009(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4009, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313A9F8"))) PPC_WEAK_FUNC(sub_8313A9F8);
PPC_FUNC_IMPL(__imp__sub_8313A9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2076
	ctx.r4.s64 = ctx.r11.s64 + 2076;
	// bl 0x82429b48
	ctx.lr = 0x8313AA14;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-254(r11)
	PPC_STORE_U8(ctx.r11.u32 + -254, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AA30"))) PPC_WEAK_FUNC(sub_8313AA30);
PPC_FUNC_IMPL(__imp__sub_8313AA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2080
	ctx.r4.s64 = ctx.r11.s64 + 2080;
	// bl 0x82429b48
	ctx.lr = 0x8313AA4C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2061(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2061, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AA68"))) PPC_WEAK_FUNC(sub_8313AA68);
PPC_FUNC_IMPL(__imp__sub_8313AA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2084
	ctx.r4.s64 = ctx.r11.s64 + 2084;
	// bl 0x82429b48
	ctx.lr = 0x8313AA84;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3046(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3046, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AAA0"))) PPC_WEAK_FUNC(sub_8313AAA0);
PPC_FUNC_IMPL(__imp__sub_8313AAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2088
	ctx.r4.s64 = ctx.r11.s64 + 2088;
	// bl 0x82429b48
	ctx.lr = 0x8313AABC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,277(r11)
	PPC_STORE_U8(ctx.r11.u32 + 277, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AAD8"))) PPC_WEAK_FUNC(sub_8313AAD8);
PPC_FUNC_IMPL(__imp__sub_8313AAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2092
	ctx.r4.s64 = ctx.r11.s64 + 2092;
	// bl 0x82429b48
	ctx.lr = 0x8313AAF4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,509(r11)
	PPC_STORE_U8(ctx.r11.u32 + 509, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AB10"))) PPC_WEAK_FUNC(sub_8313AB10);
PPC_FUNC_IMPL(__imp__sub_8313AB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2096
	ctx.r4.s64 = ctx.r11.s64 + 2096;
	// bl 0x82429b48
	ctx.lr = 0x8313AB2C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4988(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4988, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AB48"))) PPC_WEAK_FUNC(sub_8313AB48);
PPC_FUNC_IMPL(__imp__sub_8313AB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2100
	ctx.r4.s64 = ctx.r11.s64 + 2100;
	// bl 0x82429b48
	ctx.lr = 0x8313AB64;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3816(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3816, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AB80"))) PPC_WEAK_FUNC(sub_8313AB80);
PPC_FUNC_IMPL(__imp__sub_8313AB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2104
	ctx.r4.s64 = ctx.r11.s64 + 2104;
	// bl 0x82429b48
	ctx.lr = 0x8313AB9C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1858(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1858, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ABB8"))) PPC_WEAK_FUNC(sub_8313ABB8);
PPC_FUNC_IMPL(__imp__sub_8313ABB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2108
	ctx.r4.s64 = ctx.r11.s64 + 2108;
	// bl 0x82429b48
	ctx.lr = 0x8313ABD4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1782(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1782, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ABF0"))) PPC_WEAK_FUNC(sub_8313ABF0);
PPC_FUNC_IMPL(__imp__sub_8313ABF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2112
	ctx.r4.s64 = ctx.r11.s64 + 2112;
	// bl 0x82429b48
	ctx.lr = 0x8313AC0C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,982(r11)
	PPC_STORE_U8(ctx.r11.u32 + 982, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AC28"))) PPC_WEAK_FUNC(sub_8313AC28);
PPC_FUNC_IMPL(__imp__sub_8313AC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2116
	ctx.r4.s64 = ctx.r11.s64 + 2116;
	// bl 0x82429b48
	ctx.lr = 0x8313AC44;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4509(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4509, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AC60"))) PPC_WEAK_FUNC(sub_8313AC60);
PPC_FUNC_IMPL(__imp__sub_8313AC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2120
	ctx.r4.s64 = ctx.r11.s64 + 2120;
	// bl 0x82429b48
	ctx.lr = 0x8313AC7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4995(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4995, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AC98"))) PPC_WEAK_FUNC(sub_8313AC98);
PPC_FUNC_IMPL(__imp__sub_8313AC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2124
	ctx.r4.s64 = ctx.r11.s64 + 2124;
	// bl 0x82429b48
	ctx.lr = 0x8313ACB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3467(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3467, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ACD0"))) PPC_WEAK_FUNC(sub_8313ACD0);
PPC_FUNC_IMPL(__imp__sub_8313ACD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// bl 0x82429b48
	ctx.lr = 0x8313ACEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313AD08"))) PPC_WEAK_FUNC(sub_8313AD08);
PPC_FUNC_IMPL(__imp__sub_8313AD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2132
	ctx.r4.s64 = ctx.r11.s64 + 2132;
	// bl 0x82429b48
	ctx.lr = 0x8313AD24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3340(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3340, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AD40"))) PPC_WEAK_FUNC(sub_8313AD40);
PPC_FUNC_IMPL(__imp__sub_8313AD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2136
	ctx.r4.s64 = ctx.r11.s64 + 2136;
	// bl 0x82429b48
	ctx.lr = 0x8313AD5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-421(r11)
	PPC_STORE_U8(ctx.r11.u32 + -421, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AD78"))) PPC_WEAK_FUNC(sub_8313AD78);
PPC_FUNC_IMPL(__imp__sub_8313AD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2140
	ctx.r4.s64 = ctx.r11.s64 + 2140;
	// bl 0x82429b48
	ctx.lr = 0x8313AD94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5329(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5329, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ADB0"))) PPC_WEAK_FUNC(sub_8313ADB0);
PPC_FUNC_IMPL(__imp__sub_8313ADB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2144
	ctx.r4.s64 = ctx.r11.s64 + 2144;
	// bl 0x82429b48
	ctx.lr = 0x8313ADCC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3685(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3685, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ADE8"))) PPC_WEAK_FUNC(sub_8313ADE8);
PPC_FUNC_IMPL(__imp__sub_8313ADE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2148
	ctx.r4.s64 = ctx.r11.s64 + 2148;
	// bl 0x82429b48
	ctx.lr = 0x8313AE04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3281(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3281, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AE20"))) PPC_WEAK_FUNC(sub_8313AE20);
PPC_FUNC_IMPL(__imp__sub_8313AE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2152
	ctx.r4.s64 = ctx.r11.s64 + 2152;
	// bl 0x82429b48
	ctx.lr = 0x8313AE3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2145(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2145, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AE58"))) PPC_WEAK_FUNC(sub_8313AE58);
PPC_FUNC_IMPL(__imp__sub_8313AE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2156
	ctx.r4.s64 = ctx.r11.s64 + 2156;
	// bl 0x82429b48
	ctx.lr = 0x8313AE74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,110(r11)
	PPC_STORE_U8(ctx.r11.u32 + 110, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AE90"))) PPC_WEAK_FUNC(sub_8313AE90);
PPC_FUNC_IMPL(__imp__sub_8313AE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2160
	ctx.r4.s64 = ctx.r11.s64 + 2160;
	// bl 0x82429b48
	ctx.lr = 0x8313AEAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2971(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2971, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AEC8"))) PPC_WEAK_FUNC(sub_8313AEC8);
PPC_FUNC_IMPL(__imp__sub_8313AEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2164
	ctx.r4.s64 = ctx.r11.s64 + 2164;
	// bl 0x82429b48
	ctx.lr = 0x8313AEE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3275(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3275, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AF00"))) PPC_WEAK_FUNC(sub_8313AF00);
PPC_FUNC_IMPL(__imp__sub_8313AF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2168
	ctx.r4.s64 = ctx.r11.s64 + 2168;
	// bl 0x82429b48
	ctx.lr = 0x8313AF1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,819(r11)
	PPC_STORE_U8(ctx.r11.u32 + 819, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AF38"))) PPC_WEAK_FUNC(sub_8313AF38);
PPC_FUNC_IMPL(__imp__sub_8313AF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2172
	ctx.r4.s64 = ctx.r11.s64 + 2172;
	// bl 0x82429b48
	ctx.lr = 0x8313AF54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5075(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5075, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AF70"))) PPC_WEAK_FUNC(sub_8313AF70);
PPC_FUNC_IMPL(__imp__sub_8313AF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2176
	ctx.r4.s64 = ctx.r11.s64 + 2176;
	// bl 0x82429b48
	ctx.lr = 0x8313AF8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2492(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2492, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AFA8"))) PPC_WEAK_FUNC(sub_8313AFA8);
PPC_FUNC_IMPL(__imp__sub_8313AFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2180
	ctx.r4.s64 = ctx.r11.s64 + 2180;
	// bl 0x82429b48
	ctx.lr = 0x8313AFC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3636(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3636, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313AFE0"))) PPC_WEAK_FUNC(sub_8313AFE0);
PPC_FUNC_IMPL(__imp__sub_8313AFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2184
	ctx.r4.s64 = ctx.r11.s64 + 2184;
	// bl 0x82429b48
	ctx.lr = 0x8313AFFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3949(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3949, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B018"))) PPC_WEAK_FUNC(sub_8313B018);
PPC_FUNC_IMPL(__imp__sub_8313B018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2188
	ctx.r4.s64 = ctx.r11.s64 + 2188;
	// bl 0x82429b48
	ctx.lr = 0x8313B034;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-48(r11)
	PPC_STORE_U8(ctx.r11.u32 + -48, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B050"))) PPC_WEAK_FUNC(sub_8313B050);
PPC_FUNC_IMPL(__imp__sub_8313B050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2192
	ctx.r4.s64 = ctx.r11.s64 + 2192;
	// bl 0x82429b48
	ctx.lr = 0x8313B06C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,628(r11)
	PPC_STORE_U8(ctx.r11.u32 + 628, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B088"))) PPC_WEAK_FUNC(sub_8313B088);
PPC_FUNC_IMPL(__imp__sub_8313B088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2196
	ctx.r4.s64 = ctx.r11.s64 + 2196;
	// bl 0x82429b48
	ctx.lr = 0x8313B0A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3770(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3770, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B0C0"))) PPC_WEAK_FUNC(sub_8313B0C0);
PPC_FUNC_IMPL(__imp__sub_8313B0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2200
	ctx.r4.s64 = ctx.r11.s64 + 2200;
	// bl 0x82429b48
	ctx.lr = 0x8313B0DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-395(r11)
	PPC_STORE_U8(ctx.r11.u32 + -395, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B0F8"))) PPC_WEAK_FUNC(sub_8313B0F8);
PPC_FUNC_IMPL(__imp__sub_8313B0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2204
	ctx.r4.s64 = ctx.r11.s64 + 2204;
	// bl 0x82429b48
	ctx.lr = 0x8313B114;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-255(r11)
	PPC_STORE_U8(ctx.r11.u32 + -255, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B130"))) PPC_WEAK_FUNC(sub_8313B130);
PPC_FUNC_IMPL(__imp__sub_8313B130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2208
	ctx.r4.s64 = ctx.r11.s64 + 2208;
	// bl 0x82429b48
	ctx.lr = 0x8313B14C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3464(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3464, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B168"))) PPC_WEAK_FUNC(sub_8313B168);
PPC_FUNC_IMPL(__imp__sub_8313B168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2212
	ctx.r4.s64 = ctx.r11.s64 + 2212;
	// bl 0x82429b48
	ctx.lr = 0x8313B184;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4829(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4829, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B1A0"))) PPC_WEAK_FUNC(sub_8313B1A0);
PPC_FUNC_IMPL(__imp__sub_8313B1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2216
	ctx.r4.s64 = ctx.r11.s64 + 2216;
	// bl 0x82429b48
	ctx.lr = 0x8313B1BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3638(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3638, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B1D8"))) PPC_WEAK_FUNC(sub_8313B1D8);
PPC_FUNC_IMPL(__imp__sub_8313B1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2220
	ctx.r4.s64 = ctx.r11.s64 + 2220;
	// bl 0x82429b48
	ctx.lr = 0x8313B1F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,89(r11)
	PPC_STORE_U8(ctx.r11.u32 + 89, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B210"))) PPC_WEAK_FUNC(sub_8313B210);
PPC_FUNC_IMPL(__imp__sub_8313B210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2224
	ctx.r4.s64 = ctx.r11.s64 + 2224;
	// bl 0x82429b48
	ctx.lr = 0x8313B22C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4066(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4066, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B248"))) PPC_WEAK_FUNC(sub_8313B248);
PPC_FUNC_IMPL(__imp__sub_8313B248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2228
	ctx.r4.s64 = ctx.r11.s64 + 2228;
	// bl 0x82429b48
	ctx.lr = 0x8313B264;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1159(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1159, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B280"))) PPC_WEAK_FUNC(sub_8313B280);
PPC_FUNC_IMPL(__imp__sub_8313B280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2232
	ctx.r4.s64 = ctx.r11.s64 + 2232;
	// bl 0x82429b48
	ctx.lr = 0x8313B29C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3006(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3006, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B2B8"))) PPC_WEAK_FUNC(sub_8313B2B8);
PPC_FUNC_IMPL(__imp__sub_8313B2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2236
	ctx.r4.s64 = ctx.r11.s64 + 2236;
	// bl 0x82429b48
	ctx.lr = 0x8313B2D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3116, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B2F0"))) PPC_WEAK_FUNC(sub_8313B2F0);
PPC_FUNC_IMPL(__imp__sub_8313B2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2240
	ctx.r4.s64 = ctx.r11.s64 + 2240;
	// bl 0x82429b48
	ctx.lr = 0x8313B30C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3282(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3282, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B328"))) PPC_WEAK_FUNC(sub_8313B328);
PPC_FUNC_IMPL(__imp__sub_8313B328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2244
	ctx.r4.s64 = ctx.r11.s64 + 2244;
	// bl 0x82429b48
	ctx.lr = 0x8313B344;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1518(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1518, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B360"))) PPC_WEAK_FUNC(sub_8313B360);
PPC_FUNC_IMPL(__imp__sub_8313B360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2248
	ctx.r4.s64 = ctx.r11.s64 + 2248;
	// bl 0x82429b48
	ctx.lr = 0x8313B37C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5379(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5379, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B398"))) PPC_WEAK_FUNC(sub_8313B398);
PPC_FUNC_IMPL(__imp__sub_8313B398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2252
	ctx.r4.s64 = ctx.r11.s64 + 2252;
	// bl 0x82429b48
	ctx.lr = 0x8313B3B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-745(r11)
	PPC_STORE_U8(ctx.r11.u32 + -745, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B3D0"))) PPC_WEAK_FUNC(sub_8313B3D0);
PPC_FUNC_IMPL(__imp__sub_8313B3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2256
	ctx.r4.s64 = ctx.r11.s64 + 2256;
	// bl 0x82429b48
	ctx.lr = 0x8313B3EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4449(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4449, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B408"))) PPC_WEAK_FUNC(sub_8313B408);
PPC_FUNC_IMPL(__imp__sub_8313B408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2260
	ctx.r4.s64 = ctx.r11.s64 + 2260;
	// bl 0x82429b48
	ctx.lr = 0x8313B424;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4485(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4485, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B440"))) PPC_WEAK_FUNC(sub_8313B440);
PPC_FUNC_IMPL(__imp__sub_8313B440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2264
	ctx.r4.s64 = ctx.r11.s64 + 2264;
	// bl 0x82429b48
	ctx.lr = 0x8313B45C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3411(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3411, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B478"))) PPC_WEAK_FUNC(sub_8313B478);
PPC_FUNC_IMPL(__imp__sub_8313B478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2268
	ctx.r4.s64 = ctx.r11.s64 + 2268;
	// bl 0x82429b48
	ctx.lr = 0x8313B494;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5282(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5282, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B4B0"))) PPC_WEAK_FUNC(sub_8313B4B0);
PPC_FUNC_IMPL(__imp__sub_8313B4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2272
	ctx.r4.s64 = ctx.r11.s64 + 2272;
	// bl 0x82429b48
	ctx.lr = 0x8313B4CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-28(r11)
	PPC_STORE_U8(ctx.r11.u32 + -28, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B4E8"))) PPC_WEAK_FUNC(sub_8313B4E8);
PPC_FUNC_IMPL(__imp__sub_8313B4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2276
	ctx.r4.s64 = ctx.r11.s64 + 2276;
	// bl 0x82429b48
	ctx.lr = 0x8313B504;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3966(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3966, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B520"))) PPC_WEAK_FUNC(sub_8313B520);
PPC_FUNC_IMPL(__imp__sub_8313B520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2280
	ctx.r4.s64 = ctx.r11.s64 + 2280;
	// bl 0x82429b48
	ctx.lr = 0x8313B53C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4602(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4602, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B558"))) PPC_WEAK_FUNC(sub_8313B558);
PPC_FUNC_IMPL(__imp__sub_8313B558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2284
	ctx.r4.s64 = ctx.r11.s64 + 2284;
	// bl 0x82429b48
	ctx.lr = 0x8313B574;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2033(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2033, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B590"))) PPC_WEAK_FUNC(sub_8313B590);
PPC_FUNC_IMPL(__imp__sub_8313B590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2288
	ctx.r4.s64 = ctx.r11.s64 + 2288;
	// bl 0x82429b48
	ctx.lr = 0x8313B5AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3248(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3248, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B5C8"))) PPC_WEAK_FUNC(sub_8313B5C8);
PPC_FUNC_IMPL(__imp__sub_8313B5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2292
	ctx.r4.s64 = ctx.r11.s64 + 2292;
	// bl 0x82429b48
	ctx.lr = 0x8313B5E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-671(r11)
	PPC_STORE_U8(ctx.r11.u32 + -671, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B600"))) PPC_WEAK_FUNC(sub_8313B600);
PPC_FUNC_IMPL(__imp__sub_8313B600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2296
	ctx.r4.s64 = ctx.r11.s64 + 2296;
	// bl 0x82429b48
	ctx.lr = 0x8313B61C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3465(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3465, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B638"))) PPC_WEAK_FUNC(sub_8313B638);
PPC_FUNC_IMPL(__imp__sub_8313B638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2300
	ctx.r4.s64 = ctx.r11.s64 + 2300;
	// bl 0x82429b48
	ctx.lr = 0x8313B654;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5283(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5283, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B670"))) PPC_WEAK_FUNC(sub_8313B670);
PPC_FUNC_IMPL(__imp__sub_8313B670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2304
	ctx.r4.s64 = ctx.r11.s64 + 2304;
	// bl 0x82429b48
	ctx.lr = 0x8313B68C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1841(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1841, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B6A8"))) PPC_WEAK_FUNC(sub_8313B6A8);
PPC_FUNC_IMPL(__imp__sub_8313B6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2308
	ctx.r4.s64 = ctx.r11.s64 + 2308;
	// bl 0x82429b48
	ctx.lr = 0x8313B6C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-674(r11)
	PPC_STORE_U8(ctx.r11.u32 + -674, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B6E0"))) PPC_WEAK_FUNC(sub_8313B6E0);
PPC_FUNC_IMPL(__imp__sub_8313B6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2312
	ctx.r4.s64 = ctx.r11.s64 + 2312;
	// bl 0x82429b48
	ctx.lr = 0x8313B6FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3446(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3446, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B718"))) PPC_WEAK_FUNC(sub_8313B718);
PPC_FUNC_IMPL(__imp__sub_8313B718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2316
	ctx.r4.s64 = ctx.r11.s64 + 2316;
	// bl 0x82429b48
	ctx.lr = 0x8313B734;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2548(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2548, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B750"))) PPC_WEAK_FUNC(sub_8313B750);
PPC_FUNC_IMPL(__imp__sub_8313B750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2320
	ctx.r4.s64 = ctx.r11.s64 + 2320;
	// bl 0x82429b48
	ctx.lr = 0x8313B76C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3302(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3302, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B788"))) PPC_WEAK_FUNC(sub_8313B788);
PPC_FUNC_IMPL(__imp__sub_8313B788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2324
	ctx.r4.s64 = ctx.r11.s64 + 2324;
	// bl 0x82429b48
	ctx.lr = 0x8313B7A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-458(r11)
	PPC_STORE_U8(ctx.r11.u32 + -458, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B7C0"))) PPC_WEAK_FUNC(sub_8313B7C0);
PPC_FUNC_IMPL(__imp__sub_8313B7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2328
	ctx.r4.s64 = ctx.r11.s64 + 2328;
	// bl 0x82429b48
	ctx.lr = 0x8313B7DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3897(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3897, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B7F8"))) PPC_WEAK_FUNC(sub_8313B7F8);
PPC_FUNC_IMPL(__imp__sub_8313B7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2332
	ctx.r4.s64 = ctx.r11.s64 + 2332;
	// bl 0x82429b48
	ctx.lr = 0x8313B814;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3865(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3865, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B830"))) PPC_WEAK_FUNC(sub_8313B830);
PPC_FUNC_IMPL(__imp__sub_8313B830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2336
	ctx.r4.s64 = ctx.r11.s64 + 2336;
	// bl 0x82429b48
	ctx.lr = 0x8313B84C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3660(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3660, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B868"))) PPC_WEAK_FUNC(sub_8313B868);
PPC_FUNC_IMPL(__imp__sub_8313B868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2340
	ctx.r4.s64 = ctx.r11.s64 + 2340;
	// bl 0x82429b48
	ctx.lr = 0x8313B884;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2673(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2673, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B8A0"))) PPC_WEAK_FUNC(sub_8313B8A0);
PPC_FUNC_IMPL(__imp__sub_8313B8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2344
	ctx.r4.s64 = ctx.r11.s64 + 2344;
	// bl 0x82429b48
	ctx.lr = 0x8313B8BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4832(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4832, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B8D8"))) PPC_WEAK_FUNC(sub_8313B8D8);
PPC_FUNC_IMPL(__imp__sub_8313B8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2348
	ctx.r4.s64 = ctx.r11.s64 + 2348;
	// bl 0x82429b48
	ctx.lr = 0x8313B8F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3866(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3866, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B910"))) PPC_WEAK_FUNC(sub_8313B910);
PPC_FUNC_IMPL(__imp__sub_8313B910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2352
	ctx.r4.s64 = ctx.r11.s64 + 2352;
	// bl 0x82429b48
	ctx.lr = 0x8313B92C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3070(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3070, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B948"))) PPC_WEAK_FUNC(sub_8313B948);
PPC_FUNC_IMPL(__imp__sub_8313B948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2356
	ctx.r4.s64 = ctx.r11.s64 + 2356;
	// bl 0x82429b48
	ctx.lr = 0x8313B964;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2845(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2845, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B980"))) PPC_WEAK_FUNC(sub_8313B980);
PPC_FUNC_IMPL(__imp__sub_8313B980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2360
	ctx.r4.s64 = ctx.r11.s64 + 2360;
	// bl 0x82429b48
	ctx.lr = 0x8313B99C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4738(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4738, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B9B8"))) PPC_WEAK_FUNC(sub_8313B9B8);
PPC_FUNC_IMPL(__imp__sub_8313B9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2364
	ctx.r4.s64 = ctx.r11.s64 + 2364;
	// bl 0x82429b48
	ctx.lr = 0x8313B9D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3692(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3692, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313B9F0"))) PPC_WEAK_FUNC(sub_8313B9F0);
PPC_FUNC_IMPL(__imp__sub_8313B9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2368
	ctx.r4.s64 = ctx.r11.s64 + 2368;
	// bl 0x82429b48
	ctx.lr = 0x8313BA0C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2570(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2570, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BA28"))) PPC_WEAK_FUNC(sub_8313BA28);
PPC_FUNC_IMPL(__imp__sub_8313BA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2372
	ctx.r4.s64 = ctx.r11.s64 + 2372;
	// bl 0x82429b48
	ctx.lr = 0x8313BA44;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4857(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4857, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BA60"))) PPC_WEAK_FUNC(sub_8313BA60);
PPC_FUNC_IMPL(__imp__sub_8313BA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2376
	ctx.r4.s64 = ctx.r11.s64 + 2376;
	// bl 0x82429b48
	ctx.lr = 0x8313BA7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3146(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3146, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BA98"))) PPC_WEAK_FUNC(sub_8313BA98);
PPC_FUNC_IMPL(__imp__sub_8313BA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2380
	ctx.r4.s64 = ctx.r11.s64 + 2380;
	// bl 0x82429b48
	ctx.lr = 0x8313BAB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-448(r11)
	PPC_STORE_U8(ctx.r11.u32 + -448, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BAD0"))) PPC_WEAK_FUNC(sub_8313BAD0);
PPC_FUNC_IMPL(__imp__sub_8313BAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2384
	ctx.r4.s64 = ctx.r11.s64 + 2384;
	// bl 0x82429b48
	ctx.lr = 0x8313BAEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2550(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2550, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BB08"))) PPC_WEAK_FUNC(sub_8313BB08);
PPC_FUNC_IMPL(__imp__sub_8313BB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2388
	ctx.r4.s64 = ctx.r11.s64 + 2388;
	// bl 0x82429b48
	ctx.lr = 0x8313BB24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,568(r11)
	PPC_STORE_U8(ctx.r11.u32 + 568, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BB40"))) PPC_WEAK_FUNC(sub_8313BB40);
PPC_FUNC_IMPL(__imp__sub_8313BB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2392
	ctx.r4.s64 = ctx.r11.s64 + 2392;
	// bl 0x82429b48
	ctx.lr = 0x8313BB5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4491(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4491, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BB78"))) PPC_WEAK_FUNC(sub_8313BB78);
PPC_FUNC_IMPL(__imp__sub_8313BB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2396
	ctx.r4.s64 = ctx.r11.s64 + 2396;
	// bl 0x82429b48
	ctx.lr = 0x8313BB94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5242(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5242, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BBB0"))) PPC_WEAK_FUNC(sub_8313BBB0);
PPC_FUNC_IMPL(__imp__sub_8313BBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2400
	ctx.r4.s64 = ctx.r11.s64 + 2400;
	// bl 0x82429b48
	ctx.lr = 0x8313BBCC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1859(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1859, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BBE8"))) PPC_WEAK_FUNC(sub_8313BBE8);
PPC_FUNC_IMPL(__imp__sub_8313BBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2404
	ctx.r4.s64 = ctx.r11.s64 + 2404;
	// bl 0x82429b48
	ctx.lr = 0x8313BC04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,409(r11)
	PPC_STORE_U8(ctx.r11.u32 + 409, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BC20"))) PPC_WEAK_FUNC(sub_8313BC20);
PPC_FUNC_IMPL(__imp__sub_8313BC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2408
	ctx.r4.s64 = ctx.r11.s64 + 2408;
	// bl 0x82429b48
	ctx.lr = 0x8313BC3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-179(r11)
	PPC_STORE_U8(ctx.r11.u32 + -179, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BC58"))) PPC_WEAK_FUNC(sub_8313BC58);
PPC_FUNC_IMPL(__imp__sub_8313BC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2412
	ctx.r4.s64 = ctx.r11.s64 + 2412;
	// bl 0x82429b48
	ctx.lr = 0x8313BC74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,558(r11)
	PPC_STORE_U8(ctx.r11.u32 + 558, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BC90"))) PPC_WEAK_FUNC(sub_8313BC90);
PPC_FUNC_IMPL(__imp__sub_8313BC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2416
	ctx.r4.s64 = ctx.r11.s64 + 2416;
	// bl 0x82429b48
	ctx.lr = 0x8313BCAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4901(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4901, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BCC8"))) PPC_WEAK_FUNC(sub_8313BCC8);
PPC_FUNC_IMPL(__imp__sub_8313BCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2420
	ctx.r4.s64 = ctx.r11.s64 + 2420;
	// bl 0x82429b48
	ctx.lr = 0x8313BCE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1886(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1886, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BD00"))) PPC_WEAK_FUNC(sub_8313BD00);
PPC_FUNC_IMPL(__imp__sub_8313BD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2424
	ctx.r4.s64 = ctx.r11.s64 + 2424;
	// bl 0x82429b48
	ctx.lr = 0x8313BD1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1219(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1219, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BD38"))) PPC_WEAK_FUNC(sub_8313BD38);
PPC_FUNC_IMPL(__imp__sub_8313BD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2428
	ctx.r4.s64 = ctx.r11.s64 + 2428;
	// bl 0x82429b48
	ctx.lr = 0x8313BD54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,790(r11)
	PPC_STORE_U8(ctx.r11.u32 + 790, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BD70"))) PPC_WEAK_FUNC(sub_8313BD70);
PPC_FUNC_IMPL(__imp__sub_8313BD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2432
	ctx.r4.s64 = ctx.r11.s64 + 2432;
	// bl 0x82429b48
	ctx.lr = 0x8313BD8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5048(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5048, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BDA8"))) PPC_WEAK_FUNC(sub_8313BDA8);
PPC_FUNC_IMPL(__imp__sub_8313BDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2436
	ctx.r4.s64 = ctx.r11.s64 + 2436;
	// bl 0x82429b48
	ctx.lr = 0x8313BDC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3007(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3007, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BDE0"))) PPC_WEAK_FUNC(sub_8313BDE0);
PPC_FUNC_IMPL(__imp__sub_8313BDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2440
	ctx.r4.s64 = ctx.r11.s64 + 2440;
	// bl 0x82429b48
	ctx.lr = 0x8313BDFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2429(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2429, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BE18"))) PPC_WEAK_FUNC(sub_8313BE18);
PPC_FUNC_IMPL(__imp__sub_8313BE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2444
	ctx.r4.s64 = ctx.r11.s64 + 2444;
	// bl 0x82429b48
	ctx.lr = 0x8313BE34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2063(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2063, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BE50"))) PPC_WEAK_FUNC(sub_8313BE50);
PPC_FUNC_IMPL(__imp__sub_8313BE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2448
	ctx.r4.s64 = ctx.r11.s64 + 2448;
	// bl 0x82429b48
	ctx.lr = 0x8313BE6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4629(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4629, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BE88"))) PPC_WEAK_FUNC(sub_8313BE88);
PPC_FUNC_IMPL(__imp__sub_8313BE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2452
	ctx.r4.s64 = ctx.r11.s64 + 2452;
	// bl 0x82429b48
	ctx.lr = 0x8313BEA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5165(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5165, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BEC0"))) PPC_WEAK_FUNC(sub_8313BEC0);
PPC_FUNC_IMPL(__imp__sub_8313BEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2456
	ctx.r4.s64 = ctx.r11.s64 + 2456;
	// bl 0x82429b48
	ctx.lr = 0x8313BEDC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1742(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1742, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BEF8"))) PPC_WEAK_FUNC(sub_8313BEF8);
PPC_FUNC_IMPL(__imp__sub_8313BEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2460
	ctx.r4.s64 = ctx.r11.s64 + 2460;
	// bl 0x82429b48
	ctx.lr = 0x8313BF14;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1295(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1295, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BF30"))) PPC_WEAK_FUNC(sub_8313BF30);
PPC_FUNC_IMPL(__imp__sub_8313BF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2464
	ctx.r4.s64 = ctx.r11.s64 + 2464;
	// bl 0x82429b48
	ctx.lr = 0x8313BF4C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2146(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2146, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BF68"))) PPC_WEAK_FUNC(sub_8313BF68);
PPC_FUNC_IMPL(__imp__sub_8313BF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2468
	ctx.r4.s64 = ctx.r11.s64 + 2468;
	// bl 0x82429b48
	ctx.lr = 0x8313BF84;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1217(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1217, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BFA0"))) PPC_WEAK_FUNC(sub_8313BFA0);
PPC_FUNC_IMPL(__imp__sub_8313BFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2472
	ctx.r4.s64 = ctx.r11.s64 + 2472;
	// bl 0x82429b48
	ctx.lr = 0x8313BFBC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3567(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3567, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313BFD8"))) PPC_WEAK_FUNC(sub_8313BFD8);
PPC_FUNC_IMPL(__imp__sub_8313BFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2476
	ctx.r4.s64 = ctx.r11.s64 + 2476;
	// bl 0x82429b48
	ctx.lr = 0x8313BFF4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4752(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4752, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C010"))) PPC_WEAK_FUNC(sub_8313C010);
PPC_FUNC_IMPL(__imp__sub_8313C010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2480
	ctx.r4.s64 = ctx.r11.s64 + 2480;
	// bl 0x82429b48
	ctx.lr = 0x8313C02C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1628(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1628, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C048"))) PPC_WEAK_FUNC(sub_8313C048);
PPC_FUNC_IMPL(__imp__sub_8313C048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2484
	ctx.r4.s64 = ctx.r11.s64 + 2484;
	// bl 0x82429b48
	ctx.lr = 0x8313C064;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-720(r11)
	PPC_STORE_U8(ctx.r11.u32 + -720, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C080"))) PPC_WEAK_FUNC(sub_8313C080);
PPC_FUNC_IMPL(__imp__sub_8313C080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2488
	ctx.r4.s64 = ctx.r11.s64 + 2488;
	// bl 0x82429b48
	ctx.lr = 0x8313C09C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1556(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1556, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C0B8"))) PPC_WEAK_FUNC(sub_8313C0B8);
PPC_FUNC_IMPL(__imp__sub_8313C0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2492
	ctx.r4.s64 = ctx.r11.s64 + 2492;
	// bl 0x82429b48
	ctx.lr = 0x8313C0D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3813(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3813, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C0F0"))) PPC_WEAK_FUNC(sub_8313C0F0);
PPC_FUNC_IMPL(__imp__sub_8313C0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2496
	ctx.r4.s64 = ctx.r11.s64 + 2496;
	// bl 0x82429b48
	ctx.lr = 0x8313C10C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2976(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2976, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C128"))) PPC_WEAK_FUNC(sub_8313C128);
PPC_FUNC_IMPL(__imp__sub_8313C128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2500
	ctx.r4.s64 = ctx.r11.s64 + 2500;
	// bl 0x82429b48
	ctx.lr = 0x8313C144;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3565(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3565, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C160"))) PPC_WEAK_FUNC(sub_8313C160);
PPC_FUNC_IMPL(__imp__sub_8313C160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2504
	ctx.r4.s64 = ctx.r11.s64 + 2504;
	// bl 0x82429b48
	ctx.lr = 0x8313C17C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3878(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3878, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C198"))) PPC_WEAK_FUNC(sub_8313C198);
PPC_FUNC_IMPL(__imp__sub_8313C198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2508
	ctx.r4.s64 = ctx.r11.s64 + 2508;
	// bl 0x82429b48
	ctx.lr = 0x8313C1B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-25(r11)
	PPC_STORE_U8(ctx.r11.u32 + -25, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C1D0"))) PPC_WEAK_FUNC(sub_8313C1D0);
PPC_FUNC_IMPL(__imp__sub_8313C1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2512
	ctx.r4.s64 = ctx.r11.s64 + 2512;
	// bl 0x82429b48
	ctx.lr = 0x8313C1EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-256(r11)
	PPC_STORE_U8(ctx.r11.u32 + -256, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C208"))) PPC_WEAK_FUNC(sub_8313C208);
PPC_FUNC_IMPL(__imp__sub_8313C208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2516
	ctx.r4.s64 = ctx.r11.s64 + 2516;
	// bl 0x82429b48
	ctx.lr = 0x8313C224;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3814(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3814, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C240"))) PPC_WEAK_FUNC(sub_8313C240);
PPC_FUNC_IMPL(__imp__sub_8313C240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2520
	ctx.r4.s64 = ctx.r11.s64 + 2520;
	// bl 0x82429b48
	ctx.lr = 0x8313C25C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C278"))) PPC_WEAK_FUNC(sub_8313C278);
PPC_FUNC_IMPL(__imp__sub_8313C278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2524
	ctx.r4.s64 = ctx.r11.s64 + 2524;
	// bl 0x82429b48
	ctx.lr = 0x8313C294;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,609(r11)
	PPC_STORE_U8(ctx.r11.u32 + 609, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C2B0"))) PPC_WEAK_FUNC(sub_8313C2B0);
PPC_FUNC_IMPL(__imp__sub_8313C2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2528
	ctx.r4.s64 = ctx.r11.s64 + 2528;
	// bl 0x82429b48
	ctx.lr = 0x8313C2CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2977(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2977, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C2E8"))) PPC_WEAK_FUNC(sub_8313C2E8);
PPC_FUNC_IMPL(__imp__sub_8313C2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2532
	ctx.r4.s64 = ctx.r11.s64 + 2532;
	// bl 0x82429b48
	ctx.lr = 0x8313C304;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-445(r11)
	PPC_STORE_U8(ctx.r11.u32 + -445, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C320"))) PPC_WEAK_FUNC(sub_8313C320);
PPC_FUNC_IMPL(__imp__sub_8313C320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2536
	ctx.r4.s64 = ctx.r11.s64 + 2536;
	// bl 0x82429b48
	ctx.lr = 0x8313C33C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-6(r11)
	PPC_STORE_U8(ctx.r11.u32 + -6, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C358"))) PPC_WEAK_FUNC(sub_8313C358);
PPC_FUNC_IMPL(__imp__sub_8313C358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2540
	ctx.r4.s64 = ctx.r11.s64 + 2540;
	// bl 0x82429b48
	ctx.lr = 0x8313C374;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-47(r11)
	PPC_STORE_U8(ctx.r11.u32 + -47, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C390"))) PPC_WEAK_FUNC(sub_8313C390);
PPC_FUNC_IMPL(__imp__sub_8313C390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2544
	ctx.r4.s64 = ctx.r11.s64 + 2544;
	// bl 0x82429b48
	ctx.lr = 0x8313C3AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1523(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1523, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C3C8"))) PPC_WEAK_FUNC(sub_8313C3C8);
PPC_FUNC_IMPL(__imp__sub_8313C3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2548
	ctx.r4.s64 = ctx.r11.s64 + 2548;
	// bl 0x82429b48
	ctx.lr = 0x8313C3E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4293(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4293, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C400"))) PPC_WEAK_FUNC(sub_8313C400);
PPC_FUNC_IMPL(__imp__sub_8313C400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2552
	ctx.r4.s64 = ctx.r11.s64 + 2552;
	// bl 0x82429b48
	ctx.lr = 0x8313C41C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2805(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2805, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C438"))) PPC_WEAK_FUNC(sub_8313C438);
PPC_FUNC_IMPL(__imp__sub_8313C438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2556
	ctx.r4.s64 = ctx.r11.s64 + 2556;
	// bl 0x82429b48
	ctx.lr = 0x8313C454;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1012(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1012, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C470"))) PPC_WEAK_FUNC(sub_8313C470);
PPC_FUNC_IMPL(__imp__sub_8313C470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2560
	ctx.r4.s64 = ctx.r11.s64 + 2560;
	// bl 0x82429b48
	ctx.lr = 0x8313C48C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4282(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4282, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C4A8"))) PPC_WEAK_FUNC(sub_8313C4A8);
PPC_FUNC_IMPL(__imp__sub_8313C4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2564
	ctx.r4.s64 = ctx.r11.s64 + 2564;
	// bl 0x82429b48
	ctx.lr = 0x8313C4C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,372(r11)
	PPC_STORE_U8(ctx.r11.u32 + 372, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C4E0"))) PPC_WEAK_FUNC(sub_8313C4E0);
PPC_FUNC_IMPL(__imp__sub_8313C4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2568
	ctx.r4.s64 = ctx.r11.s64 + 2568;
	// bl 0x82429b48
	ctx.lr = 0x8313C4FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3176, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C518"))) PPC_WEAK_FUNC(sub_8313C518);
PPC_FUNC_IMPL(__imp__sub_8313C518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2572
	ctx.r4.s64 = ctx.r11.s64 + 2572;
	// bl 0x82429b48
	ctx.lr = 0x8313C534;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2274(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2274, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C550"))) PPC_WEAK_FUNC(sub_8313C550);
PPC_FUNC_IMPL(__imp__sub_8313C550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2576
	ctx.r4.s64 = ctx.r11.s64 + 2576;
	// bl 0x82429b48
	ctx.lr = 0x8313C56C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1128, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C588"))) PPC_WEAK_FUNC(sub_8313C588);
PPC_FUNC_IMPL(__imp__sub_8313C588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2580
	ctx.r4.s64 = ctx.r11.s64 + 2580;
	// bl 0x82429b48
	ctx.lr = 0x8313C5A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3509(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3509, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C5C0"))) PPC_WEAK_FUNC(sub_8313C5C0);
PPC_FUNC_IMPL(__imp__sub_8313C5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2584
	ctx.r4.s64 = ctx.r11.s64 + 2584;
	// bl 0x82429b48
	ctx.lr = 0x8313C5DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3686(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3686, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C5F8"))) PPC_WEAK_FUNC(sub_8313C5F8);
PPC_FUNC_IMPL(__imp__sub_8313C5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2588
	ctx.r4.s64 = ctx.r11.s64 + 2588;
	// bl 0x82429b48
	ctx.lr = 0x8313C614;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3447(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3447, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C630"))) PPC_WEAK_FUNC(sub_8313C630);
PPC_FUNC_IMPL(__imp__sub_8313C630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2592
	ctx.r4.s64 = ctx.r11.s64 + 2592;
	// bl 0x82429b48
	ctx.lr = 0x8313C64C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4834(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4834, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C668"))) PPC_WEAK_FUNC(sub_8313C668);
PPC_FUNC_IMPL(__imp__sub_8313C668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2596
	ctx.r4.s64 = ctx.r11.s64 + 2596;
	// bl 0x82429b48
	ctx.lr = 0x8313C684;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1077(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1077, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C6A0"))) PPC_WEAK_FUNC(sub_8313C6A0);
PPC_FUNC_IMPL(__imp__sub_8313C6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2600
	ctx.r4.s64 = ctx.r11.s64 + 2600;
	// bl 0x82429b48
	ctx.lr = 0x8313C6BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3811(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3811, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C6D8"))) PPC_WEAK_FUNC(sub_8313C6D8);
PPC_FUNC_IMPL(__imp__sub_8313C6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2604
	ctx.r4.s64 = ctx.r11.s64 + 2604;
	// bl 0x82429b48
	ctx.lr = 0x8313C6F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2806(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2806, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C710"))) PPC_WEAK_FUNC(sub_8313C710);
PPC_FUNC_IMPL(__imp__sub_8313C710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2608
	ctx.r4.s64 = ctx.r11.s64 + 2608;
	// bl 0x82429b48
	ctx.lr = 0x8313C72C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2240(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2240, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C748"))) PPC_WEAK_FUNC(sub_8313C748);
PPC_FUNC_IMPL(__imp__sub_8313C748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2612
	ctx.r4.s64 = ctx.r11.s64 + 2612;
	// bl 0x82429b48
	ctx.lr = 0x8313C764;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4204(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4204, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C780"))) PPC_WEAK_FUNC(sub_8313C780);
PPC_FUNC_IMPL(__imp__sub_8313C780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2616
	ctx.r4.s64 = ctx.r11.s64 + 2616;
	// bl 0x82429b48
	ctx.lr = 0x8313C79C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3693(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3693, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C7B8"))) PPC_WEAK_FUNC(sub_8313C7B8);
PPC_FUNC_IMPL(__imp__sub_8313C7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2620
	ctx.r4.s64 = ctx.r11.s64 + 2620;
	// bl 0x82429b48
	ctx.lr = 0x8313C7D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4838(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4838, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C7F0"))) PPC_WEAK_FUNC(sub_8313C7F0);
PPC_FUNC_IMPL(__imp__sub_8313C7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2624
	ctx.r4.s64 = ctx.r11.s64 + 2624;
	// bl 0x82429b48
	ctx.lr = 0x8313C80C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4294(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4294, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C828"))) PPC_WEAK_FUNC(sub_8313C828);
PPC_FUNC_IMPL(__imp__sub_8313C828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2628
	ctx.r4.s64 = ctx.r11.s64 + 2628;
	// bl 0x82429b48
	ctx.lr = 0x8313C844;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4510(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4510, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C860"))) PPC_WEAK_FUNC(sub_8313C860);
PPC_FUNC_IMPL(__imp__sub_8313C860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2632
	ctx.r4.s64 = ctx.r11.s64 + 2632;
	// bl 0x82429b48
	ctx.lr = 0x8313C87C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5049(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5049, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C898"))) PPC_WEAK_FUNC(sub_8313C898);
PPC_FUNC_IMPL(__imp__sub_8313C898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2636
	ctx.r4.s64 = ctx.r11.s64 + 2636;
	// bl 0x82429b48
	ctx.lr = 0x8313C8B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,604(r11)
	PPC_STORE_U8(ctx.r11.u32 + 604, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C8D0"))) PPC_WEAK_FUNC(sub_8313C8D0);
PPC_FUNC_IMPL(__imp__sub_8313C8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2640
	ctx.r4.s64 = ctx.r11.s64 + 2640;
	// bl 0x82429b48
	ctx.lr = 0x8313C8EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1370(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1370, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C908"))) PPC_WEAK_FUNC(sub_8313C908);
PPC_FUNC_IMPL(__imp__sub_8313C908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2644
	ctx.r4.s64 = ctx.r11.s64 + 2644;
	// bl 0x82429b48
	ctx.lr = 0x8313C924;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4753(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4753, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C940"))) PPC_WEAK_FUNC(sub_8313C940);
PPC_FUNC_IMPL(__imp__sub_8313C940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2648
	ctx.r4.s64 = ctx.r11.s64 + 2648;
	// bl 0x82429b48
	ctx.lr = 0x8313C95C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3067(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3067, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C978"))) PPC_WEAK_FUNC(sub_8313C978);
PPC_FUNC_IMPL(__imp__sub_8313C978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2652
	ctx.r4.s64 = ctx.r11.s64 + 2652;
	// bl 0x82429b48
	ctx.lr = 0x8313C994;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313C9B0"))) PPC_WEAK_FUNC(sub_8313C9B0);
PPC_FUNC_IMPL(__imp__sub_8313C9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2656
	ctx.r4.s64 = ctx.r11.s64 + 2656;
	// bl 0x82429b48
	ctx.lr = 0x8313C9CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4194(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4194, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313C9E8"))) PPC_WEAK_FUNC(sub_8313C9E8);
PPC_FUNC_IMPL(__imp__sub_8313C9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2660
	ctx.r4.s64 = ctx.r11.s64 + 2660;
	// bl 0x82429b48
	ctx.lr = 0x8313CA04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3749(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3749, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CA20"))) PPC_WEAK_FUNC(sub_8313CA20);
PPC_FUNC_IMPL(__imp__sub_8313CA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2664
	ctx.r4.s64 = ctx.r11.s64 + 2664;
	// bl 0x82429b48
	ctx.lr = 0x8313CA3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1847(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1847, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CA58"))) PPC_WEAK_FUNC(sub_8313CA58);
PPC_FUNC_IMPL(__imp__sub_8313CA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2668
	ctx.r4.s64 = ctx.r11.s64 + 2668;
	// bl 0x82429b48
	ctx.lr = 0x8313CA74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2149(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2149, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CA90"))) PPC_WEAK_FUNC(sub_8313CA90);
PPC_FUNC_IMPL(__imp__sub_8313CA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2672
	ctx.r4.s64 = ctx.r11.s64 + 2672;
	// bl 0x82429b48
	ctx.lr = 0x8313CAAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1843(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1843, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CAC8"))) PPC_WEAK_FUNC(sub_8313CAC8);
PPC_FUNC_IMPL(__imp__sub_8313CAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2676
	ctx.r4.s64 = ctx.r11.s64 + 2676;
	// bl 0x82429b48
	ctx.lr = 0x8313CAE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2978(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2978, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CB00"))) PPC_WEAK_FUNC(sub_8313CB00);
PPC_FUNC_IMPL(__imp__sub_8313CB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2680
	ctx.r4.s64 = ctx.r11.s64 + 2680;
	// bl 0x82429b48
	ctx.lr = 0x8313CB1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313CB38"))) PPC_WEAK_FUNC(sub_8313CB38);
PPC_FUNC_IMPL(__imp__sub_8313CB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2684
	ctx.r4.s64 = ctx.r11.s64 + 2684;
	// bl 0x82429b48
	ctx.lr = 0x8313CB54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3672(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3672, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CB70"))) PPC_WEAK_FUNC(sub_8313CB70);
PPC_FUNC_IMPL(__imp__sub_8313CB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2688
	ctx.r4.s64 = ctx.r11.s64 + 2688;
	// bl 0x82429b48
	ctx.lr = 0x8313CB8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2842(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2842, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CBA8"))) PPC_WEAK_FUNC(sub_8313CBA8);
PPC_FUNC_IMPL(__imp__sub_8313CBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2692
	ctx.r4.s64 = ctx.r11.s64 + 2692;
	// bl 0x82429b48
	ctx.lr = 0x8313CBC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2275(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2275, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CBE0"))) PPC_WEAK_FUNC(sub_8313CBE0);
PPC_FUNC_IMPL(__imp__sub_8313CBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2696
	ctx.r4.s64 = ctx.r11.s64 + 2696;
	// bl 0x82429b48
	ctx.lr = 0x8313CBFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-8(r11)
	PPC_STORE_U8(ctx.r11.u32 + -8, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CC18"))) PPC_WEAK_FUNC(sub_8313CC18);
PPC_FUNC_IMPL(__imp__sub_8313CC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2700
	ctx.r4.s64 = ctx.r11.s64 + 2700;
	// bl 0x82429b48
	ctx.lr = 0x8313CC34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3707(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3707, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CC50"))) PPC_WEAK_FUNC(sub_8313CC50);
PPC_FUNC_IMPL(__imp__sub_8313CC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2704
	ctx.r4.s64 = ctx.r11.s64 + 2704;
	// bl 0x82429b48
	ctx.lr = 0x8313CC6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-167(r11)
	PPC_STORE_U8(ctx.r11.u32 + -167, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CC88"))) PPC_WEAK_FUNC(sub_8313CC88);
PPC_FUNC_IMPL(__imp__sub_8313CC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2708
	ctx.r4.s64 = ctx.r11.s64 + 2708;
	// bl 0x82429b48
	ctx.lr = 0x8313CCA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,872(r11)
	PPC_STORE_U8(ctx.r11.u32 + 872, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CCC0"))) PPC_WEAK_FUNC(sub_8313CCC0);
PPC_FUNC_IMPL(__imp__sub_8313CCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2712
	ctx.r4.s64 = ctx.r11.s64 + 2712;
	// bl 0x82429b48
	ctx.lr = 0x8313CCDC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3144(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3144, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CCF8"))) PPC_WEAK_FUNC(sub_8313CCF8);
PPC_FUNC_IMPL(__imp__sub_8313CCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2716
	ctx.r4.s64 = ctx.r11.s64 + 2716;
	// bl 0x82429b48
	ctx.lr = 0x8313CD14;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-692(r11)
	PPC_STORE_U8(ctx.r11.u32 + -692, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CD30"))) PPC_WEAK_FUNC(sub_8313CD30);
PPC_FUNC_IMPL(__imp__sub_8313CD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2720
	ctx.r4.s64 = ctx.r11.s64 + 2720;
	// bl 0x82429b48
	ctx.lr = 0x8313CD4C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3141(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3141, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CD68"))) PPC_WEAK_FUNC(sub_8313CD68);
PPC_FUNC_IMPL(__imp__sub_8313CD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2724
	ctx.r4.s64 = ctx.r11.s64 + 2724;
	// bl 0x82429b48
	ctx.lr = 0x8313CD84;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-341(r11)
	PPC_STORE_U8(ctx.r11.u32 + -341, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CDA0"))) PPC_WEAK_FUNC(sub_8313CDA0);
PPC_FUNC_IMPL(__imp__sub_8313CDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2728
	ctx.r4.s64 = ctx.r11.s64 + 2728;
	// bl 0x82429b48
	ctx.lr = 0x8313CDBC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,486(r11)
	PPC_STORE_U8(ctx.r11.u32 + 486, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CDD8"))) PPC_WEAK_FUNC(sub_8313CDD8);
PPC_FUNC_IMPL(__imp__sub_8313CDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2732
	ctx.r4.s64 = ctx.r11.s64 + 2732;
	// bl 0x82429b48
	ctx.lr = 0x8313CDF4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2105(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2105, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CE10"))) PPC_WEAK_FUNC(sub_8313CE10);
PPC_FUNC_IMPL(__imp__sub_8313CE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2736
	ctx.r4.s64 = ctx.r11.s64 + 2736;
	// bl 0x82429b48
	ctx.lr = 0x8313CE2C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3661(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3661, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CE48"))) PPC_WEAK_FUNC(sub_8313CE48);
PPC_FUNC_IMPL(__imp__sub_8313CE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82429b48
	ctx.lr = 0x8313CE64;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3147(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3147, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CE80"))) PPC_WEAK_FUNC(sub_8313CE80);
PPC_FUNC_IMPL(__imp__sub_8313CE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2744
	ctx.r4.s64 = ctx.r11.s64 + 2744;
	// bl 0x82429b48
	ctx.lr = 0x8313CE9C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-614(r11)
	PPC_STORE_U8(ctx.r11.u32 + -614, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CEB8"))) PPC_WEAK_FUNC(sub_8313CEB8);
PPC_FUNC_IMPL(__imp__sub_8313CEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2748
	ctx.r4.s64 = ctx.r11.s64 + 2748;
	// bl 0x82429b48
	ctx.lr = 0x8313CED4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4206(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4206, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CEF0"))) PPC_WEAK_FUNC(sub_8313CEF0);
PPC_FUNC_IMPL(__imp__sub_8313CEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2752
	ctx.r4.s64 = ctx.r11.s64 + 2752;
	// bl 0x82429b48
	ctx.lr = 0x8313CF0C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4754(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4754, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CF28"))) PPC_WEAK_FUNC(sub_8313CF28);
PPC_FUNC_IMPL(__imp__sub_8313CF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2756
	ctx.r4.s64 = ctx.r11.s64 + 2756;
	// bl 0x82429b48
	ctx.lr = 0x8313CF44;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313CF60"))) PPC_WEAK_FUNC(sub_8313CF60);
PPC_FUNC_IMPL(__imp__sub_8313CF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82429b48
	ctx.lr = 0x8313CF7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,405(r11)
	PPC_STORE_U8(ctx.r11.u32 + 405, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CF98"))) PPC_WEAK_FUNC(sub_8313CF98);
PPC_FUNC_IMPL(__imp__sub_8313CF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2764
	ctx.r4.s64 = ctx.r11.s64 + 2764;
	// bl 0x82429b48
	ctx.lr = 0x8313CFB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4989(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4989, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CFD0"))) PPC_WEAK_FUNC(sub_8313CFD0);
PPC_FUNC_IMPL(__imp__sub_8313CFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2768
	ctx.r4.s64 = ctx.r11.s64 + 2768;
	// bl 0x82429b48
	ctx.lr = 0x8313CFEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3068(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3068, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D008"))) PPC_WEAK_FUNC(sub_8313D008);
PPC_FUNC_IMPL(__imp__sub_8313D008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2772
	ctx.r4.s64 = ctx.r11.s64 + 2772;
	// bl 0x82429b48
	ctx.lr = 0x8313D024;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4511(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4511, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D040"))) PPC_WEAK_FUNC(sub_8313D040);
PPC_FUNC_IMPL(__imp__sub_8313D040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2776
	ctx.r4.s64 = ctx.r11.s64 + 2776;
	// bl 0x82429b48
	ctx.lr = 0x8313D05C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2085(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2085, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D078"))) PPC_WEAK_FUNC(sub_8313D078);
PPC_FUNC_IMPL(__imp__sub_8313D078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82429b48
	ctx.lr = 0x8313D094;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5243(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5243, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D0B0"))) PPC_WEAK_FUNC(sub_8313D0B0);
PPC_FUNC_IMPL(__imp__sub_8313D0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2784
	ctx.r4.s64 = ctx.r11.s64 + 2784;
	// bl 0x82429b48
	ctx.lr = 0x8313D0CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-748(r11)
	PPC_STORE_U8(ctx.r11.u32 + -748, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D0E8"))) PPC_WEAK_FUNC(sub_8313D0E8);
PPC_FUNC_IMPL(__imp__sub_8313D0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2788
	ctx.r4.s64 = ctx.r11.s64 + 2788;
	// bl 0x82429b48
	ctx.lr = 0x8313D104;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4520(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4520, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D120"))) PPC_WEAK_FUNC(sub_8313D120);
PPC_FUNC_IMPL(__imp__sub_8313D120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2792
	ctx.r4.s64 = ctx.r11.s64 + 2792;
	// bl 0x82429b48
	ctx.lr = 0x8313D13C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8313D158"))) PPC_WEAK_FUNC(sub_8313D158);
PPC_FUNC_IMPL(__imp__sub_8313D158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2796
	ctx.r4.s64 = ctx.r11.s64 + 2796;
	// bl 0x82429b48
	ctx.lr = 0x8313D174;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D190"))) PPC_WEAK_FUNC(sub_8313D190);
PPC_FUNC_IMPL(__imp__sub_8313D190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82429b48
	ctx.lr = 0x8313D1AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4767(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4767, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D1C8"))) PPC_WEAK_FUNC(sub_8313D1C8);
PPC_FUNC_IMPL(__imp__sub_8313D1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2804
	ctx.r4.s64 = ctx.r11.s64 + 2804;
	// bl 0x82429b48
	ctx.lr = 0x8313D1E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1667(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1667, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D200"))) PPC_WEAK_FUNC(sub_8313D200);
PPC_FUNC_IMPL(__imp__sub_8313D200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2808
	ctx.r4.s64 = ctx.r11.s64 + 2808;
	// bl 0x82429b48
	ctx.lr = 0x8313D21C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4835(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4835, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D238"))) PPC_WEAK_FUNC(sub_8313D238);
PPC_FUNC_IMPL(__imp__sub_8313D238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2812
	ctx.r4.s64 = ctx.r11.s64 + 2812;
	// bl 0x82429b48
	ctx.lr = 0x8313D254;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2350(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2350, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D270"))) PPC_WEAK_FUNC(sub_8313D270);
PPC_FUNC_IMPL(__imp__sub_8313D270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2816
	ctx.r4.s64 = ctx.r11.s64 + 2816;
	// bl 0x82429b48
	ctx.lr = 0x8313D28C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1559(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1559, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D2A8"))) PPC_WEAK_FUNC(sub_8313D2A8);
PPC_FUNC_IMPL(__imp__sub_8313D2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82429b48
	ctx.lr = 0x8313D2C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2257(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2257, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

