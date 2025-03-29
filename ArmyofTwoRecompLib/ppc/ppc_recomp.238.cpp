#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83132AE0"))) PPC_WEAK_FUNC(sub_83132AE0);
PPC_FUNC_IMPL(__imp__sub_83132AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-248
	ctx.r4.s64 = ctx.r11.s64 + -248;
	// bl 0x82429b48
	ctx.lr = 0x83132AFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-672(r11)
	PPC_STORE_U8(ctx.r11.u32 + -672, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132B18"))) PPC_WEAK_FUNC(sub_83132B18);
PPC_FUNC_IMPL(__imp__sub_83132B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-244
	ctx.r4.s64 = ctx.r11.s64 + -244;
	// bl 0x82429b48
	ctx.lr = 0x83132B34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,411(r11)
	PPC_STORE_U8(ctx.r11.u32 + 411, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132B50"))) PPC_WEAK_FUNC(sub_83132B50);
PPC_FUNC_IMPL(__imp__sub_83132B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-240
	ctx.r4.s64 = ctx.r11.s64 + -240;
	// bl 0x82429b48
	ctx.lr = 0x83132B6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,46(r11)
	PPC_STORE_U8(ctx.r11.u32 + 46, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132B88"))) PPC_WEAK_FUNC(sub_83132B88);
PPC_FUNC_IMPL(__imp__sub_83132B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-236
	ctx.r4.s64 = ctx.r11.s64 + -236;
	// bl 0x82429b48
	ctx.lr = 0x83132BA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4232(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4232, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132BC0"))) PPC_WEAK_FUNC(sub_83132BC0);
PPC_FUNC_IMPL(__imp__sub_83132BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-232
	ctx.r4.s64 = ctx.r11.s64 + -232;
	// bl 0x82429b48
	ctx.lr = 0x83132BDC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3844(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3844, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132BF8"))) PPC_WEAK_FUNC(sub_83132BF8);
PPC_FUNC_IMPL(__imp__sub_83132BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-228
	ctx.r4.s64 = ctx.r11.s64 + -228;
	// bl 0x82429b48
	ctx.lr = 0x83132C14;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83132C30"))) PPC_WEAK_FUNC(sub_83132C30);
PPC_FUNC_IMPL(__imp__sub_83132C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-224
	ctx.r4.s64 = ctx.r11.s64 + -224;
	// bl 0x82429b48
	ctx.lr = 0x83132C4C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4921(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4921, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132C68"))) PPC_WEAK_FUNC(sub_83132C68);
PPC_FUNC_IMPL(__imp__sub_83132C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-220
	ctx.r4.s64 = ctx.r11.s64 + -220;
	// bl 0x82429b48
	ctx.lr = 0x83132C84;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2881(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2881, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132CA0"))) PPC_WEAK_FUNC(sub_83132CA0);
PPC_FUNC_IMPL(__imp__sub_83132CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-216
	ctx.r4.s64 = ctx.r11.s64 + -216;
	// bl 0x82429b48
	ctx.lr = 0x83132CBC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,111(r11)
	PPC_STORE_U8(ctx.r11.u32 + 111, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132CD8"))) PPC_WEAK_FUNC(sub_83132CD8);
PPC_FUNC_IMPL(__imp__sub_83132CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-212
	ctx.r4.s64 = ctx.r11.s64 + -212;
	// bl 0x82429b48
	ctx.lr = 0x83132CF4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,913(r11)
	PPC_STORE_U8(ctx.r11.u32 + 913, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132D10"))) PPC_WEAK_FUNC(sub_83132D10);
PPC_FUNC_IMPL(__imp__sub_83132D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-208
	ctx.r4.s64 = ctx.r11.s64 + -208;
	// bl 0x82429b48
	ctx.lr = 0x83132D2C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2361(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2361, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132D48"))) PPC_WEAK_FUNC(sub_83132D48);
PPC_FUNC_IMPL(__imp__sub_83132D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-204
	ctx.r4.s64 = ctx.r11.s64 + -204;
	// bl 0x82429b48
	ctx.lr = 0x83132D64;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4765(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4765, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132D80"))) PPC_WEAK_FUNC(sub_83132D80);
PPC_FUNC_IMPL(__imp__sub_83132D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-200
	ctx.r4.s64 = ctx.r11.s64 + -200;
	// bl 0x82429b48
	ctx.lr = 0x83132D9C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1010(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1010, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132DB8"))) PPC_WEAK_FUNC(sub_83132DB8);
PPC_FUNC_IMPL(__imp__sub_83132DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-196
	ctx.r4.s64 = ctx.r11.s64 + -196;
	// bl 0x82429b48
	ctx.lr = 0x83132DD4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3965(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3965, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132DF0"))) PPC_WEAK_FUNC(sub_83132DF0);
PPC_FUNC_IMPL(__imp__sub_83132DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-192
	ctx.r4.s64 = ctx.r11.s64 + -192;
	// bl 0x82429b48
	ctx.lr = 0x83132E0C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-45(r11)
	PPC_STORE_U8(ctx.r11.u32 + -45, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132E28"))) PPC_WEAK_FUNC(sub_83132E28);
PPC_FUNC_IMPL(__imp__sub_83132E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-188
	ctx.r4.s64 = ctx.r11.s64 + -188;
	// bl 0x82429b48
	ctx.lr = 0x83132E44;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83132E60"))) PPC_WEAK_FUNC(sub_83132E60);
PPC_FUNC_IMPL(__imp__sub_83132E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-184
	ctx.r4.s64 = ctx.r11.s64 + -184;
	// bl 0x82429b48
	ctx.lr = 0x83132E7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2897(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2897, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132E98"))) PPC_WEAK_FUNC(sub_83132E98);
PPC_FUNC_IMPL(__imp__sub_83132E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82429b48
	ctx.lr = 0x83132EB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,404(r11)
	PPC_STORE_U8(ctx.r11.u32 + 404, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132ED0"))) PPC_WEAK_FUNC(sub_83132ED0);
PPC_FUNC_IMPL(__imp__sub_83132ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-176
	ctx.r4.s64 = ctx.r11.s64 + -176;
	// bl 0x82429b48
	ctx.lr = 0x83132EEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3555(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3555, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132F08"))) PPC_WEAK_FUNC(sub_83132F08);
PPC_FUNC_IMPL(__imp__sub_83132F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-172
	ctx.r4.s64 = ctx.r11.s64 + -172;
	// bl 0x82429b48
	ctx.lr = 0x83132F24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1715(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1715, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132F40"))) PPC_WEAK_FUNC(sub_83132F40);
PPC_FUNC_IMPL(__imp__sub_83132F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-168
	ctx.r4.s64 = ctx.r11.s64 + -168;
	// bl 0x82429b48
	ctx.lr = 0x83132F5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,436(r11)
	PPC_STORE_U8(ctx.r11.u32 + 436, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132F78"))) PPC_WEAK_FUNC(sub_83132F78);
PPC_FUNC_IMPL(__imp__sub_83132F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-164
	ctx.r4.s64 = ctx.r11.s64 + -164;
	// bl 0x82429b48
	ctx.lr = 0x83132F94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4979(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4979, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132FB0"))) PPC_WEAK_FUNC(sub_83132FB0);
PPC_FUNC_IMPL(__imp__sub_83132FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-160
	ctx.r4.s64 = ctx.r11.s64 + -160;
	// bl 0x82429b48
	ctx.lr = 0x83132FCC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4736(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4736, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132FE8"))) PPC_WEAK_FUNC(sub_83132FE8);
PPC_FUNC_IMPL(__imp__sub_83132FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-156
	ctx.r4.s64 = ctx.r11.s64 + -156;
	// bl 0x82429b48
	ctx.lr = 0x83133004;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4741(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4741, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133020"))) PPC_WEAK_FUNC(sub_83133020);
PPC_FUNC_IMPL(__imp__sub_83133020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-152
	ctx.r4.s64 = ctx.r11.s64 + -152;
	// bl 0x82429b48
	ctx.lr = 0x8313303C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,334(r11)
	PPC_STORE_U8(ctx.r11.u32 + 334, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133058"))) PPC_WEAK_FUNC(sub_83133058);
PPC_FUNC_IMPL(__imp__sub_83133058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-148
	ctx.r4.s64 = ctx.r11.s64 + -148;
	// bl 0x82429b48
	ctx.lr = 0x83133074;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1063(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1063, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133090"))) PPC_WEAK_FUNC(sub_83133090);
PPC_FUNC_IMPL(__imp__sub_83133090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-144
	ctx.r4.s64 = ctx.r11.s64 + -144;
	// bl 0x82429b48
	ctx.lr = 0x831330AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-323(r11)
	PPC_STORE_U8(ctx.r11.u32 + -323, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831330C8"))) PPC_WEAK_FUNC(sub_831330C8);
PPC_FUNC_IMPL(__imp__sub_831330C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// bl 0x82429b48
	ctx.lr = 0x831330E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133100"))) PPC_WEAK_FUNC(sub_83133100);
PPC_FUNC_IMPL(__imp__sub_83133100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-136
	ctx.r4.s64 = ctx.r11.s64 + -136;
	// bl 0x82429b48
	ctx.lr = 0x8313311C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133138"))) PPC_WEAK_FUNC(sub_83133138);
PPC_FUNC_IMPL(__imp__sub_83133138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-132
	ctx.r4.s64 = ctx.r11.s64 + -132;
	// bl 0x82429b48
	ctx.lr = 0x83133154;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2023(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2023, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133170"))) PPC_WEAK_FUNC(sub_83133170);
PPC_FUNC_IMPL(__imp__sub_83133170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// bl 0x82429b48
	ctx.lr = 0x8313318C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,252(r11)
	PPC_STORE_U8(ctx.r11.u32 + 252, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831331A8"))) PPC_WEAK_FUNC(sub_831331A8);
PPC_FUNC_IMPL(__imp__sub_831331A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-124
	ctx.r4.s64 = ctx.r11.s64 + -124;
	// bl 0x82429b48
	ctx.lr = 0x831331C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_831331E0"))) PPC_WEAK_FUNC(sub_831331E0);
PPC_FUNC_IMPL(__imp__sub_831331E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-120
	ctx.r4.s64 = ctx.r11.s64 + -120;
	// bl 0x82429b48
	ctx.lr = 0x831331FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5236(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5236, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133218"))) PPC_WEAK_FUNC(sub_83133218);
PPC_FUNC_IMPL(__imp__sub_83133218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-116
	ctx.r4.s64 = ctx.r11.s64 + -116;
	// bl 0x82429b48
	ctx.lr = 0x83133234;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-166(r11)
	PPC_STORE_U8(ctx.r11.u32 + -166, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133250"))) PPC_WEAK_FUNC(sub_83133250);
PPC_FUNC_IMPL(__imp__sub_83133250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-112
	ctx.r4.s64 = ctx.r11.s64 + -112;
	// bl 0x82429b48
	ctx.lr = 0x8313326C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3768(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3768, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133288"))) PPC_WEAK_FUNC(sub_83133288);
PPC_FUNC_IMPL(__imp__sub_83133288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-108
	ctx.r4.s64 = ctx.r11.s64 + -108;
	// bl 0x82429b48
	ctx.lr = 0x831332A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3064(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3064, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831332C0"))) PPC_WEAK_FUNC(sub_831332C0);
PPC_FUNC_IMPL(__imp__sub_831332C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-104
	ctx.r4.s64 = ctx.r11.s64 + -104;
	// bl 0x82429b48
	ctx.lr = 0x831332DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2268(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2268, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831332F8"))) PPC_WEAK_FUNC(sub_831332F8);
PPC_FUNC_IMPL(__imp__sub_831332F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
	// bl 0x82429b48
	ctx.lr = 0x83133314;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-199(r11)
	PPC_STORE_U8(ctx.r11.u32 + -199, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133330"))) PPC_WEAK_FUNC(sub_83133330);
PPC_FUNC_IMPL(__imp__sub_83133330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
	// bl 0x82429b48
	ctx.lr = 0x8313334C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3641(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3641, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133368"))) PPC_WEAK_FUNC(sub_83133368);
PPC_FUNC_IMPL(__imp__sub_83133368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// bl 0x82429b48
	ctx.lr = 0x83133384;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-344(r11)
	PPC_STORE_U8(ctx.r11.u32 + -344, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831333A0"))) PPC_WEAK_FUNC(sub_831333A0);
PPC_FUNC_IMPL(__imp__sub_831333A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-88
	ctx.r4.s64 = ctx.r11.s64 + -88;
	// bl 0x82429b48
	ctx.lr = 0x831333BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5237(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5237, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831333D8"))) PPC_WEAK_FUNC(sub_831333D8);
PPC_FUNC_IMPL(__imp__sub_831333D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x82429b48
	ctx.lr = 0x831333F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2968(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2968, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133410"))) PPC_WEAK_FUNC(sub_83133410);
PPC_FUNC_IMPL(__imp__sub_83133410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x82429b48
	ctx.lr = 0x8313342C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2662(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2662, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133448"))) PPC_WEAK_FUNC(sub_83133448);
PPC_FUNC_IMPL(__imp__sub_83133448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x82429b48
	ctx.lr = 0x83133464;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2513(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2513, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133480"))) PPC_WEAK_FUNC(sub_83133480);
PPC_FUNC_IMPL(__imp__sub_83133480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x82429b48
	ctx.lr = 0x8313349C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-568(r11)
	PPC_STORE_U8(ctx.r11.u32 + -568, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831334B8"))) PPC_WEAK_FUNC(sub_831334B8);
PPC_FUNC_IMPL(__imp__sub_831334B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x82429b48
	ctx.lr = 0x831334D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_831334F0"))) PPC_WEAK_FUNC(sub_831334F0);
PPC_FUNC_IMPL(__imp__sub_831334F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x82429b48
	ctx.lr = 0x8313350C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3797(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3797, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133528"))) PPC_WEAK_FUNC(sub_83133528);
PPC_FUNC_IMPL(__imp__sub_83133528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// bl 0x82429b48
	ctx.lr = 0x83133544;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1369(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1369, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133560"))) PPC_WEAK_FUNC(sub_83133560);
PPC_FUNC_IMPL(__imp__sub_83133560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x82429b48
	ctx.lr = 0x8313357C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5378(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5378, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133598"))) PPC_WEAK_FUNC(sub_83133598);
PPC_FUNC_IMPL(__imp__sub_83133598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x82429b48
	ctx.lr = 0x831335B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4600(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4600, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831335D0"))) PPC_WEAK_FUNC(sub_831335D0);
PPC_FUNC_IMPL(__imp__sub_831335D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x82429b48
	ctx.lr = 0x831335EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83133608"))) PPC_WEAK_FUNC(sub_83133608);
PPC_FUNC_IMPL(__imp__sub_83133608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x82429b48
	ctx.lr = 0x83133624;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2258(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2258, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133640"))) PPC_WEAK_FUNC(sub_83133640);
PPC_FUNC_IMPL(__imp__sub_83133640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x82429b48
	ctx.lr = 0x8313365C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83133678"))) PPC_WEAK_FUNC(sub_83133678);
PPC_FUNC_IMPL(__imp__sub_83133678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x82429b48
	ctx.lr = 0x83133694;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5211(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5211, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831336B0"))) PPC_WEAK_FUNC(sub_831336B0);
PPC_FUNC_IMPL(__imp__sub_831336B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x82429b48
	ctx.lr = 0x831336CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-27(r11)
	PPC_STORE_U8(ctx.r11.u32 + -27, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831336E8"))) PPC_WEAK_FUNC(sub_831336E8);
PPC_FUNC_IMPL(__imp__sub_831336E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x82429b48
	ctx.lr = 0x83133704;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4193(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4193, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133720"))) PPC_WEAK_FUNC(sub_83133720);
PPC_FUNC_IMPL(__imp__sub_83133720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x82429b48
	ctx.lr = 0x8313373C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4574(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4574, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133758"))) PPC_WEAK_FUNC(sub_83133758);
PPC_FUNC_IMPL(__imp__sub_83133758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x82429b48
	ctx.lr = 0x83133774;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4283(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4283, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133790"))) PPC_WEAK_FUNC(sub_83133790);
PPC_FUNC_IMPL(__imp__sub_83133790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82429b48
	ctx.lr = 0x831337AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,592(r11)
	PPC_STORE_U8(ctx.r11.u32 + 592, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831337C8"))) PPC_WEAK_FUNC(sub_831337C8);
PPC_FUNC_IMPL(__imp__sub_831337C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x82429b48
	ctx.lr = 0x831337E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2618(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2618, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133800"))) PPC_WEAK_FUNC(sub_83133800);
PPC_FUNC_IMPL(__imp__sub_83133800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x82429b48
	ctx.lr = 0x8313381C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,449(r11)
	PPC_STORE_U8(ctx.r11.u32 + 449, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133838"))) PPC_WEAK_FUNC(sub_83133838);
PPC_FUNC_IMPL(__imp__sub_83133838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x82429b48
	ctx.lr = 0x83133854;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83133870"))) PPC_WEAK_FUNC(sub_83133870);
PPC_FUNC_IMPL(__imp__sub_83133870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,0
	ctx.r4.s64 = ctx.r11.s64 + 0;
	// bl 0x82429b48
	ctx.lr = 0x8313388C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1197(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1197, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831338A8"))) PPC_WEAK_FUNC(sub_831338A8);
PPC_FUNC_IMPL(__imp__sub_831338A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82429b48
	ctx.lr = 0x831338C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3466(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3466, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831338E0"))) PPC_WEAK_FUNC(sub_831338E0);
PPC_FUNC_IMPL(__imp__sub_831338E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82429b48
	ctx.lr = 0x831338FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4352(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4352, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133918"))) PPC_WEAK_FUNC(sub_83133918);
PPC_FUNC_IMPL(__imp__sub_83133918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82429b48
	ctx.lr = 0x83133934;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3388(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3388, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133950"))) PPC_WEAK_FUNC(sub_83133950);
PPC_FUNC_IMPL(__imp__sub_83133950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82429b48
	ctx.lr = 0x8313396C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2402(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2402, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133988"))) PPC_WEAK_FUNC(sub_83133988);
PPC_FUNC_IMPL(__imp__sub_83133988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x82429b48
	ctx.lr = 0x831339A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2617(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2617, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831339C0"))) PPC_WEAK_FUNC(sub_831339C0);
PPC_FUNC_IMPL(__imp__sub_831339C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x82429b48
	ctx.lr = 0x831339DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,980(r11)
	PPC_STORE_U8(ctx.r11.u32 + 980, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831339F8"))) PPC_WEAK_FUNC(sub_831339F8);
PPC_FUNC_IMPL(__imp__sub_831339F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// bl 0x82429b48
	ctx.lr = 0x83133A14;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2616(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2616, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133A30"))) PPC_WEAK_FUNC(sub_83133A30);
PPC_FUNC_IMPL(__imp__sub_83133A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82429b48
	ctx.lr = 0x83133A4C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2549(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2549, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133A68"))) PPC_WEAK_FUNC(sub_83133A68);
PPC_FUNC_IMPL(__imp__sub_83133A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82429b48
	ctx.lr = 0x83133A84;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1198(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1198, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133AA0"))) PPC_WEAK_FUNC(sub_83133AA0);
PPC_FUNC_IMPL(__imp__sub_83133AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x82429b48
	ctx.lr = 0x83133ABC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4653(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4653, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133AD8"))) PPC_WEAK_FUNC(sub_83133AD8);
PPC_FUNC_IMPL(__imp__sub_83133AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x82429b48
	ctx.lr = 0x83133AF4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,150(r11)
	PPC_STORE_U8(ctx.r11.u32 + 150, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133B10"))) PPC_WEAK_FUNC(sub_83133B10);
PPC_FUNC_IMPL(__imp__sub_83133B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x82429b48
	ctx.lr = 0x83133B2C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3151(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3151, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133B48"))) PPC_WEAK_FUNC(sub_83133B48);
PPC_FUNC_IMPL(__imp__sub_83133B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// bl 0x82429b48
	ctx.lr = 0x83133B64;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4837(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4837, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133B80"))) PPC_WEAK_FUNC(sub_83133B80);
PPC_FUNC_IMPL(__imp__sub_83133B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x82429b48
	ctx.lr = 0x83133B9C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,874(r11)
	PPC_STORE_U8(ctx.r11.u32 + 874, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133BB8"))) PPC_WEAK_FUNC(sub_83133BB8);
PPC_FUNC_IMPL(__imp__sub_83133BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x82429b48
	ctx.lr = 0x83133BD4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-689(r11)
	PPC_STORE_U8(ctx.r11.u32 + -689, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133BF0"))) PPC_WEAK_FUNC(sub_83133BF0);
PPC_FUNC_IMPL(__imp__sub_83133BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// bl 0x82429b48
	ctx.lr = 0x83133C0C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,402(r11)
	PPC_STORE_U8(ctx.r11.u32 + 402, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133C28"))) PPC_WEAK_FUNC(sub_83133C28);
PPC_FUNC_IMPL(__imp__sub_83133C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// bl 0x82429b48
	ctx.lr = 0x83133C44;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-92(r11)
	PPC_STORE_U8(ctx.r11.u32 + -92, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133C60"))) PPC_WEAK_FUNC(sub_83133C60);
PPC_FUNC_IMPL(__imp__sub_83133C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,72
	ctx.r4.s64 = ctx.r11.s64 + 72;
	// bl 0x82429b48
	ctx.lr = 0x83133C7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-96(r11)
	PPC_STORE_U8(ctx.r11.u32 + -96, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133C98"))) PPC_WEAK_FUNC(sub_83133C98);
PPC_FUNC_IMPL(__imp__sub_83133C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,76
	ctx.r4.s64 = ctx.r11.s64 + 76;
	// bl 0x82429b48
	ctx.lr = 0x83133CB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,575(r11)
	PPC_STORE_U8(ctx.r11.u32 + 575, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133CD0"))) PPC_WEAK_FUNC(sub_83133CD0);
PPC_FUNC_IMPL(__imp__sub_83133CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// bl 0x82429b48
	ctx.lr = 0x83133CEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3847(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3847, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133D08"))) PPC_WEAK_FUNC(sub_83133D08);
PPC_FUNC_IMPL(__imp__sub_83133D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,84
	ctx.r4.s64 = ctx.r11.s64 + 84;
	// bl 0x82429b48
	ctx.lr = 0x83133D24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3642(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3642, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133D40"))) PPC_WEAK_FUNC(sub_83133D40);
PPC_FUNC_IMPL(__imp__sub_83133D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// bl 0x82429b48
	ctx.lr = 0x83133D5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3301(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3301, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133D78"))) PPC_WEAK_FUNC(sub_83133D78);
PPC_FUNC_IMPL(__imp__sub_83133D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,92
	ctx.r4.s64 = ctx.r11.s64 + 92;
	// bl 0x82429b48
	ctx.lr = 0x83133D94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4975(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4975, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133DB0"))) PPC_WEAK_FUNC(sub_83133DB0);
PPC_FUNC_IMPL(__imp__sub_83133DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bl 0x82429b48
	ctx.lr = 0x83133DCC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2663(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2663, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133DE8"))) PPC_WEAK_FUNC(sub_83133DE8);
PPC_FUNC_IMPL(__imp__sub_83133DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bl 0x82429b48
	ctx.lr = 0x83133E04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5127(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5127, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133E20"))) PPC_WEAK_FUNC(sub_83133E20);
PPC_FUNC_IMPL(__imp__sub_83133E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,104
	ctx.r4.s64 = ctx.r11.s64 + 104;
	// bl 0x82429b48
	ctx.lr = 0x83133E3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4039(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4039, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133E58"))) PPC_WEAK_FUNC(sub_83133E58);
PPC_FUNC_IMPL(__imp__sub_83133E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,108
	ctx.r4.s64 = ctx.r11.s64 + 108;
	// bl 0x82429b48
	ctx.lr = 0x83133E74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2882(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2882, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133E90"))) PPC_WEAK_FUNC(sub_83133E90);
PPC_FUNC_IMPL(__imp__sub_83133E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// bl 0x82429b48
	ctx.lr = 0x83133EAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2974(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2974, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133EC8"))) PPC_WEAK_FUNC(sub_83133EC8);
PPC_FUNC_IMPL(__imp__sub_83133EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,116
	ctx.r4.s64 = ctx.r11.s64 + 116;
	// bl 0x82429b48
	ctx.lr = 0x83133EE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,720(r11)
	PPC_STORE_U8(ctx.r11.u32 + 720, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133F00"))) PPC_WEAK_FUNC(sub_83133F00);
PPC_FUNC_IMPL(__imp__sub_83133F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82429b48
	ctx.lr = 0x83133F1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3689(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3689, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133F38"))) PPC_WEAK_FUNC(sub_83133F38);
PPC_FUNC_IMPL(__imp__sub_83133F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// bl 0x82429b48
	ctx.lr = 0x83133F54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4684(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4684, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133F70"))) PPC_WEAK_FUNC(sub_83133F70);
PPC_FUNC_IMPL(__imp__sub_83133F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// bl 0x82429b48
	ctx.lr = 0x83133F8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2568(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2568, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133FA8"))) PPC_WEAK_FUNC(sub_83133FA8);
PPC_FUNC_IMPL(__imp__sub_83133FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,132
	ctx.r4.s64 = ctx.r11.s64 + 132;
	// bl 0x82429b48
	ctx.lr = 0x83133FC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3951(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3951, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133FE0"))) PPC_WEAK_FUNC(sub_83133FE0);
PPC_FUNC_IMPL(__imp__sub_83133FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,136
	ctx.r4.s64 = ctx.r11.s64 + 136;
	// bl 0x82429b48
	ctx.lr = 0x83133FFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3073(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3073, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134018"))) PPC_WEAK_FUNC(sub_83134018);
PPC_FUNC_IMPL(__imp__sub_83134018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,140
	ctx.r4.s64 = ctx.r11.s64 + 140;
	// bl 0x82429b48
	ctx.lr = 0x83134034;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3511(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3511, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134050"))) PPC_WEAK_FUNC(sub_83134050);
PPC_FUNC_IMPL(__imp__sub_83134050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,144
	ctx.r4.s64 = ctx.r11.s64 + 144;
	// bl 0x82429b48
	ctx.lr = 0x8313406C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2612(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2612, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134088"))) PPC_WEAK_FUNC(sub_83134088);
PPC_FUNC_IMPL(__imp__sub_83134088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,148
	ctx.r4.s64 = ctx.r11.s64 + 148;
	// bl 0x82429b48
	ctx.lr = 0x831340A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4448, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831340C0"))) PPC_WEAK_FUNC(sub_831340C0);
PPC_FUNC_IMPL(__imp__sub_831340C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,152
	ctx.r4.s64 = ctx.r11.s64 + 152;
	// bl 0x82429b48
	ctx.lr = 0x831340DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3277(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3277, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831340F8"))) PPC_WEAK_FUNC(sub_831340F8);
PPC_FUNC_IMPL(__imp__sub_831340F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,156
	ctx.r4.s64 = ctx.r11.s64 + 156;
	// bl 0x82429b48
	ctx.lr = 0x83134114;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1060(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1060, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134130"))) PPC_WEAK_FUNC(sub_83134130);
PPC_FUNC_IMPL(__imp__sub_83134130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,160
	ctx.r4.s64 = ctx.r11.s64 + 160;
	// bl 0x82429b48
	ctx.lr = 0x8313414C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3177(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3177, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134168"))) PPC_WEAK_FUNC(sub_83134168);
PPC_FUNC_IMPL(__imp__sub_83134168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,164
	ctx.r4.s64 = ctx.r11.s64 + 164;
	// bl 0x82429b48
	ctx.lr = 0x83134184;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1490(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1490, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831341A0"))) PPC_WEAK_FUNC(sub_831341A0);
PPC_FUNC_IMPL(__imp__sub_831341A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,168
	ctx.r4.s64 = ctx.r11.s64 + 168;
	// bl 0x82429b48
	ctx.lr = 0x831341BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3443(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3443, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831341D8"))) PPC_WEAK_FUNC(sub_831341D8);
PPC_FUNC_IMPL(__imp__sub_831341D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,172
	ctx.r4.s64 = ctx.r11.s64 + 172;
	// bl 0x82429b48
	ctx.lr = 0x831341F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3442(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3442, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134210"))) PPC_WEAK_FUNC(sub_83134210);
PPC_FUNC_IMPL(__imp__sub_83134210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,524
	ctx.r3.s64 = 524;
	// addi r4,r11,176
	ctx.r4.s64 = ctx.r11.s64 + 176;
	// bl 0x82429b48
	ctx.lr = 0x8313422C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3769(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3769, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134248"))) PPC_WEAK_FUNC(sub_83134248);
PPC_FUNC_IMPL(__imp__sub_83134248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,180
	ctx.r4.s64 = ctx.r11.s64 + 180;
	// bl 0x82429b48
	ctx.lr = 0x83134264;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2134(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2134, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134280"))) PPC_WEAK_FUNC(sub_83134280);
PPC_FUNC_IMPL(__imp__sub_83134280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,184
	ctx.r4.s64 = ctx.r11.s64 + 184;
	// bl 0x82429b48
	ctx.lr = 0x8313429C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3864(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3864, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831342B8"))) PPC_WEAK_FUNC(sub_831342B8);
PPC_FUNC_IMPL(__imp__sub_831342B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,188
	ctx.r4.s64 = ctx.r11.s64 + 188;
	// bl 0x82429b48
	ctx.lr = 0x831342D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-676(r11)
	PPC_STORE_U8(ctx.r11.u32 + -676, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831342F0"))) PPC_WEAK_FUNC(sub_831342F0);
PPC_FUNC_IMPL(__imp__sub_831342F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// bl 0x82429b48
	ctx.lr = 0x8313430C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,669(r11)
	PPC_STORE_U8(ctx.r11.u32 + 669, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134328"))) PPC_WEAK_FUNC(sub_83134328);
PPC_FUNC_IMPL(__imp__sub_83134328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// bl 0x82429b48
	ctx.lr = 0x83134344;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-393(r11)
	PPC_STORE_U8(ctx.r11.u32 + -393, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134360"))) PPC_WEAK_FUNC(sub_83134360);
PPC_FUNC_IMPL(__imp__sub_83134360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// bl 0x82429b48
	ctx.lr = 0x8313437C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5167(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5167, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134398"))) PPC_WEAK_FUNC(sub_83134398);
PPC_FUNC_IMPL(__imp__sub_83134398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,204
	ctx.r4.s64 = ctx.r11.s64 + 204;
	// bl 0x82429b48
	ctx.lr = 0x831343B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3303(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3303, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831343D0"))) PPC_WEAK_FUNC(sub_831343D0);
PPC_FUNC_IMPL(__imp__sub_831343D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,208
	ctx.r4.s64 = ctx.r11.s64 + 208;
	// bl 0x82429b48
	ctx.lr = 0x831343EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5350(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5350, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134408"))) PPC_WEAK_FUNC(sub_83134408);
PPC_FUNC_IMPL(__imp__sub_83134408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,546
	ctx.r3.s64 = 546;
	// addi r4,r11,212
	ctx.r4.s64 = ctx.r11.s64 + 212;
	// bl 0x82429b48
	ctx.lr = 0x83134424;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4992(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4992, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134440"))) PPC_WEAK_FUNC(sub_83134440);
PPC_FUNC_IMPL(__imp__sub_83134440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,216
	ctx.r4.s64 = ctx.r11.s64 + 216;
	// bl 0x82429b48
	ctx.lr = 0x8313445C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,559(r11)
	PPC_STORE_U8(ctx.r11.u32 + 559, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134478"))) PPC_WEAK_FUNC(sub_83134478);
PPC_FUNC_IMPL(__imp__sub_83134478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,220
	ctx.r4.s64 = ctx.r11.s64 + 220;
	// bl 0x82429b48
	ctx.lr = 0x83134494;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4172(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4172, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831344B0"))) PPC_WEAK_FUNC(sub_831344B0);
PPC_FUNC_IMPL(__imp__sub_831344B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// bl 0x82429b48
	ctx.lr = 0x831344CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2919(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2919, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831344E8"))) PPC_WEAK_FUNC(sub_831344E8);
PPC_FUNC_IMPL(__imp__sub_831344E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,228
	ctx.r4.s64 = ctx.r11.s64 + 228;
	// bl 0x82429b48
	ctx.lr = 0x83134504;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3674(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3674, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134520"))) PPC_WEAK_FUNC(sub_83134520);
PPC_FUNC_IMPL(__imp__sub_83134520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x82429b48
	ctx.lr = 0x8313453C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-26(r11)
	PPC_STORE_U8(ctx.r11.u32 + -26, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134558"))) PPC_WEAK_FUNC(sub_83134558);
PPC_FUNC_IMPL(__imp__sub_83134558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,236
	ctx.r4.s64 = ctx.r11.s64 + 236;
	// bl 0x82429b48
	ctx.lr = 0x83134574;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83134590"))) PPC_WEAK_FUNC(sub_83134590);
PPC_FUNC_IMPL(__imp__sub_83134590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bl 0x82429b48
	ctx.lr = 0x831345AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_831345C8"))) PPC_WEAK_FUNC(sub_831345C8);
PPC_FUNC_IMPL(__imp__sub_831345C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,244
	ctx.r4.s64 = ctx.r11.s64 + 244;
	// bl 0x82429b48
	ctx.lr = 0x831345E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,839(r11)
	PPC_STORE_U8(ctx.r11.u32 + 839, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134600"))) PPC_WEAK_FUNC(sub_83134600);
PPC_FUNC_IMPL(__imp__sub_83134600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,248
	ctx.r4.s64 = ctx.r11.s64 + 248;
	// bl 0x82429b48
	ctx.lr = 0x8313461C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83134638"))) PPC_WEAK_FUNC(sub_83134638);
PPC_FUNC_IMPL(__imp__sub_83134638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,252
	ctx.r4.s64 = ctx.r11.s64 + 252;
	// bl 0x82429b48
	ctx.lr = 0x83134654;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5128, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134670"))) PPC_WEAK_FUNC(sub_83134670);
PPC_FUNC_IMPL(__imp__sub_83134670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x82429b48
	ctx.lr = 0x8313468C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4292(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4292, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831346A8"))) PPC_WEAK_FUNC(sub_831346A8);
PPC_FUNC_IMPL(__imp__sub_831346A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,260
	ctx.r4.s64 = ctx.r11.s64 + 260;
	// bl 0x82429b48
	ctx.lr = 0x831346C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4260(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4260, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831346E0"))) PPC_WEAK_FUNC(sub_831346E0);
PPC_FUNC_IMPL(__imp__sub_831346E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,264
	ctx.r4.s64 = ctx.r11.s64 + 264;
	// bl 0x82429b48
	ctx.lr = 0x831346FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83134718"))) PPC_WEAK_FUNC(sub_83134718);
PPC_FUNC_IMPL(__imp__sub_83134718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,268
	ctx.r4.s64 = ctx.r11.s64 + 268;
	// bl 0x82429b48
	ctx.lr = 0x83134734;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1521(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1521, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134750"))) PPC_WEAK_FUNC(sub_83134750);
PPC_FUNC_IMPL(__imp__sub_83134750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,272
	ctx.r4.s64 = ctx.r11.s64 + 272;
	// bl 0x82429b48
	ctx.lr = 0x8313476C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3278(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3278, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134788"))) PPC_WEAK_FUNC(sub_83134788);
PPC_FUNC_IMPL(__imp__sub_83134788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,276
	ctx.r4.s64 = ctx.r11.s64 + 276;
	// bl 0x82429b48
	ctx.lr = 0x831347A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4976(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4976, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831347C0"))) PPC_WEAK_FUNC(sub_831347C0);
PPC_FUNC_IMPL(__imp__sub_831347C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,280
	ctx.r4.s64 = ctx.r11.s64 + 280;
	// bl 0x82429b48
	ctx.lr = 0x831347DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1740(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1740, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831347F8"))) PPC_WEAK_FUNC(sub_831347F8);
PPC_FUNC_IMPL(__imp__sub_831347F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,284
	ctx.r4.s64 = ctx.r11.s64 + 284;
	// bl 0x82429b48
	ctx.lr = 0x83134814;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,253(r11)
	PPC_STORE_U8(ctx.r11.u32 + 253, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134830"))) PPC_WEAK_FUNC(sub_83134830);
PPC_FUNC_IMPL(__imp__sub_83134830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,288
	ctx.r4.s64 = ctx.r11.s64 + 288;
	// bl 0x82429b48
	ctx.lr = 0x8313484C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83134868"))) PPC_WEAK_FUNC(sub_83134868);
PPC_FUNC_IMPL(__imp__sub_83134868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,292
	ctx.r4.s64 = ctx.r11.s64 + 292;
	// bl 0x82429b48
	ctx.lr = 0x83134884;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3145(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3145, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831348A0"))) PPC_WEAK_FUNC(sub_831348A0);
PPC_FUNC_IMPL(__imp__sub_831348A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,296
	ctx.r4.s64 = ctx.r11.s64 + 296;
	// bl 0x82429b48
	ctx.lr = 0x831348BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1752(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1752, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831348D8"))) PPC_WEAK_FUNC(sub_831348D8);
PPC_FUNC_IMPL(__imp__sub_831348D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,300
	ctx.r4.s64 = ctx.r11.s64 + 300;
	// bl 0x82429b48
	ctx.lr = 0x831348F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2269(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2269, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134910"))) PPC_WEAK_FUNC(sub_83134910);
PPC_FUNC_IMPL(__imp__sub_83134910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,304
	ctx.r4.s64 = ctx.r11.s64 + 304;
	// bl 0x82429b48
	ctx.lr = 0x8313492C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2349(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2349, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134948"))) PPC_WEAK_FUNC(sub_83134948);
PPC_FUNC_IMPL(__imp__sub_83134948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,308
	ctx.r4.s64 = ctx.r11.s64 + 308;
	// bl 0x82429b48
	ctx.lr = 0x83134964;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83134980"))) PPC_WEAK_FUNC(sub_83134980);
PPC_FUNC_IMPL(__imp__sub_83134980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,312
	ctx.r4.s64 = ctx.r11.s64 + 312;
	// bl 0x82429b48
	ctx.lr = 0x8313499C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_831349B8"))) PPC_WEAK_FUNC(sub_831349B8);
PPC_FUNC_IMPL(__imp__sub_831349B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,316
	ctx.r4.s64 = ctx.r11.s64 + 316;
	// bl 0x82429b48
	ctx.lr = 0x831349D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1701(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1701, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831349F0"))) PPC_WEAK_FUNC(sub_831349F0);
PPC_FUNC_IMPL(__imp__sub_831349F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,320
	ctx.r4.s64 = ctx.r11.s64 + 320;
	// bl 0x82429b48
	ctx.lr = 0x83134A0C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5055(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5055, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134A28"))) PPC_WEAK_FUNC(sub_83134A28);
PPC_FUNC_IMPL(__imp__sub_83134A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,324
	ctx.r4.s64 = ctx.r11.s64 + 324;
	// bl 0x82429b48
	ctx.lr = 0x83134A44;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1603(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1603, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134A60"))) PPC_WEAK_FUNC(sub_83134A60);
PPC_FUNC_IMPL(__imp__sub_83134A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,328
	ctx.r4.s64 = ctx.r11.s64 + 328;
	// bl 0x82429b48
	ctx.lr = 0x83134A7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,572(r11)
	PPC_STORE_U8(ctx.r11.u32 + 572, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134A98"))) PPC_WEAK_FUNC(sub_83134A98);
PPC_FUNC_IMPL(__imp__sub_83134A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,332
	ctx.r4.s64 = ctx.r11.s64 + 332;
	// bl 0x82429b48
	ctx.lr = 0x83134AB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3389(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3389, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134AD0"))) PPC_WEAK_FUNC(sub_83134AD0);
PPC_FUNC_IMPL(__imp__sub_83134AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,336
	ctx.r4.s64 = ctx.r11.s64 + 336;
	// bl 0x82429b48
	ctx.lr = 0x83134AEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4280(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4280, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134B08"))) PPC_WEAK_FUNC(sub_83134B08);
PPC_FUNC_IMPL(__imp__sub_83134B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,340
	ctx.r4.s64 = ctx.r11.s64 + 340;
	// bl 0x82429b48
	ctx.lr = 0x83134B24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83134B40"))) PPC_WEAK_FUNC(sub_83134B40);
PPC_FUNC_IMPL(__imp__sub_83134B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,344
	ctx.r4.s64 = ctx.r11.s64 + 344;
	// bl 0x82429b48
	ctx.lr = 0x83134B5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1371(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1371, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134B78"))) PPC_WEAK_FUNC(sub_83134B78);
PPC_FUNC_IMPL(__imp__sub_83134B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,348
	ctx.r4.s64 = ctx.r11.s64 + 348;
	// bl 0x82429b48
	ctx.lr = 0x83134B94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,240(r11)
	PPC_STORE_U8(ctx.r11.u32 + 240, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134BB0"))) PPC_WEAK_FUNC(sub_83134BB0);
PPC_FUNC_IMPL(__imp__sub_83134BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,352
	ctx.r4.s64 = ctx.r11.s64 + 352;
	// bl 0x82429b48
	ctx.lr = 0x83134BCC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3695(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3695, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134BE8"))) PPC_WEAK_FUNC(sub_83134BE8);
PPC_FUNC_IMPL(__imp__sub_83134BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,356
	ctx.r4.s64 = ctx.r11.s64 + 356;
	// bl 0x82429b48
	ctx.lr = 0x83134C04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-746(r11)
	PPC_STORE_U8(ctx.r11.u32 + -746, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134C20"))) PPC_WEAK_FUNC(sub_83134C20);
PPC_FUNC_IMPL(__imp__sub_83134C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,360
	ctx.r4.s64 = ctx.r11.s64 + 360;
	// bl 0x82429b48
	ctx.lr = 0x83134C3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3812(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3812, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134C58"))) PPC_WEAK_FUNC(sub_83134C58);
PPC_FUNC_IMPL(__imp__sub_83134C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,364
	ctx.r4.s64 = ctx.r11.s64 + 364;
	// bl 0x82429b48
	ctx.lr = 0x83134C74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-200(r11)
	PPC_STORE_U8(ctx.r11.u32 + -200, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134C90"))) PPC_WEAK_FUNC(sub_83134C90);
PPC_FUNC_IMPL(__imp__sub_83134C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,368
	ctx.r4.s64 = ctx.r11.s64 + 368;
	// bl 0x82429b48
	ctx.lr = 0x83134CAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3069(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3069, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134CC8"))) PPC_WEAK_FUNC(sub_83134CC8);
PPC_FUNC_IMPL(__imp__sub_83134CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,372
	ctx.r4.s64 = ctx.r11.s64 + 372;
	// bl 0x82429b48
	ctx.lr = 0x83134CE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-165(r11)
	PPC_STORE_U8(ctx.r11.u32 + -165, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134D00"))) PPC_WEAK_FUNC(sub_83134D00);
PPC_FUNC_IMPL(__imp__sub_83134D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,376
	ctx.r4.s64 = ctx.r11.s64 + 376;
	// bl 0x82429b48
	ctx.lr = 0x83134D1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-284(r11)
	PPC_STORE_U8(ctx.r11.u32 + -284, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134D38"))) PPC_WEAK_FUNC(sub_83134D38);
PPC_FUNC_IMPL(__imp__sub_83134D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,380
	ctx.r4.s64 = ctx.r11.s64 + 380;
	// bl 0x82429b48
	ctx.lr = 0x83134D54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83134D70"))) PPC_WEAK_FUNC(sub_83134D70);
PPC_FUNC_IMPL(__imp__sub_83134D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,384
	ctx.r4.s64 = ctx.r11.s64 + 384;
	// bl 0x82429b48
	ctx.lr = 0x83134D8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83134DA8"))) PPC_WEAK_FUNC(sub_83134DA8);
PPC_FUNC_IMPL(__imp__sub_83134DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,388
	ctx.r4.s64 = ctx.r11.s64 + 388;
	// bl 0x82429b48
	ctx.lr = 0x83134DC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4972(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4972, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134DE0"))) PPC_WEAK_FUNC(sub_83134DE0);
PPC_FUNC_IMPL(__imp__sub_83134DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,392
	ctx.r4.s64 = ctx.r11.s64 + 392;
	// bl 0x82429b48
	ctx.lr = 0x83134DFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3879(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3879, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134E18"))) PPC_WEAK_FUNC(sub_83134E18);
PPC_FUNC_IMPL(__imp__sub_83134E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,396
	ctx.r4.s64 = ctx.r11.s64 + 396;
	// bl 0x82429b48
	ctx.lr = 0x83134E34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2150(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2150, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134E50"))) PPC_WEAK_FUNC(sub_83134E50);
PPC_FUNC_IMPL(__imp__sub_83134E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,400
	ctx.r4.s64 = ctx.r11.s64 + 400;
	// bl 0x82429b48
	ctx.lr = 0x83134E6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2970(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2970, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134E88"))) PPC_WEAK_FUNC(sub_83134E88);
PPC_FUNC_IMPL(__imp__sub_83134E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,404
	ctx.r4.s64 = ctx.r11.s64 + 404;
	// bl 0x82429b48
	ctx.lr = 0x83134EA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3960(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3960, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134EC0"))) PPC_WEAK_FUNC(sub_83134EC0);
PPC_FUNC_IMPL(__imp__sub_83134EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,408
	ctx.r4.s64 = ctx.r11.s64 + 408;
	// bl 0x82429b48
	ctx.lr = 0x83134EDC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3553(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3553, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134EF8"))) PPC_WEAK_FUNC(sub_83134EF8);
PPC_FUNC_IMPL(__imp__sub_83134EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,412
	ctx.r4.s64 = ctx.r11.s64 + 412;
	// bl 0x82429b48
	ctx.lr = 0x83134F14;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2273(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2273, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134F30"))) PPC_WEAK_FUNC(sub_83134F30);
PPC_FUNC_IMPL(__imp__sub_83134F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,416
	ctx.r4.s64 = ctx.r11.s64 + 416;
	// bl 0x82429b48
	ctx.lr = 0x83134F4C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,875(r11)
	PPC_STORE_U8(ctx.r11.u32 + 875, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134F68"))) PPC_WEAK_FUNC(sub_83134F68);
PPC_FUNC_IMPL(__imp__sub_83134F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,420
	ctx.r4.s64 = ctx.r11.s64 + 420;
	// bl 0x82429b48
	ctx.lr = 0x83134F84;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1524(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1524, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134FA0"))) PPC_WEAK_FUNC(sub_83134FA0);
PPC_FUNC_IMPL(__imp__sub_83134FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,424
	ctx.r4.s64 = ctx.r11.s64 + 424;
	// bl 0x82429b48
	ctx.lr = 0x83134FBC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-685(r11)
	PPC_STORE_U8(ctx.r11.u32 + -685, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134FD8"))) PPC_WEAK_FUNC(sub_83134FD8);
PPC_FUNC_IMPL(__imp__sub_83134FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,428
	ctx.r4.s64 = ctx.r11.s64 + 428;
	// bl 0x82429b48
	ctx.lr = 0x83134FF4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3876(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3876, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135010"))) PPC_WEAK_FUNC(sub_83135010);
PPC_FUNC_IMPL(__imp__sub_83135010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,432
	ctx.r4.s64 = ctx.r11.s64 + 432;
	// bl 0x82429b48
	ctx.lr = 0x8313502C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-602(r11)
	PPC_STORE_U8(ctx.r11.u32 + -602, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135048"))) PPC_WEAK_FUNC(sub_83135048);
PPC_FUNC_IMPL(__imp__sub_83135048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,436
	ctx.r4.s64 = ctx.r11.s64 + 436;
	// bl 0x82429b48
	ctx.lr = 0x83135064;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3554(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3554, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135080"))) PPC_WEAK_FUNC(sub_83135080);
PPC_FUNC_IMPL(__imp__sub_83135080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,440
	ctx.r4.s64 = ctx.r11.s64 + 440;
	// bl 0x82429b48
	ctx.lr = 0x8313509C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1525(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1525, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831350B8"))) PPC_WEAK_FUNC(sub_831350B8);
PPC_FUNC_IMPL(__imp__sub_831350B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,444
	ctx.r4.s64 = ctx.r11.s64 + 444;
	// bl 0x82429b48
	ctx.lr = 0x831350D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4878(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4878, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831350F0"))) PPC_WEAK_FUNC(sub_831350F0);
PPC_FUNC_IMPL(__imp__sub_831350F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,448
	ctx.r4.s64 = ctx.r11.s64 + 448;
	// bl 0x82429b48
	ctx.lr = 0x8313510C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5129(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5129, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135128"))) PPC_WEAK_FUNC(sub_83135128);
PPC_FUNC_IMPL(__imp__sub_83135128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,452
	ctx.r4.s64 = ctx.r11.s64 + 452;
	// bl 0x82429b48
	ctx.lr = 0x83135144;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3818(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3818, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135160"))) PPC_WEAK_FUNC(sub_83135160);
PPC_FUNC_IMPL(__imp__sub_83135160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,456
	ctx.r4.s64 = ctx.r11.s64 + 456;
	// bl 0x82429b48
	ctx.lr = 0x8313517C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135198"))) PPC_WEAK_FUNC(sub_83135198);
PPC_FUNC_IMPL(__imp__sub_83135198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,460
	ctx.r4.s64 = ctx.r11.s64 + 460;
	// bl 0x82429b48
	ctx.lr = 0x831351B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1079(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1079, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831351D0"))) PPC_WEAK_FUNC(sub_831351D0);
PPC_FUNC_IMPL(__imp__sub_831351D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,464
	ctx.r4.s64 = ctx.r11.s64 + 464;
	// bl 0x82429b48
	ctx.lr = 0x831351EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-616(r11)
	PPC_STORE_U8(ctx.r11.u32 + -616, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135208"))) PPC_WEAK_FUNC(sub_83135208);
PPC_FUNC_IMPL(__imp__sub_83135208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,468
	ctx.r4.s64 = ctx.r11.s64 + 468;
	// bl 0x82429b48
	ctx.lr = 0x83135224;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1115(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1115, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135240"))) PPC_WEAK_FUNC(sub_83135240);
PPC_FUNC_IMPL(__imp__sub_83135240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,472
	ctx.r4.s64 = ctx.r11.s64 + 472;
	// bl 0x82429b48
	ctx.lr = 0x8313525C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1156(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1156, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135278"))) PPC_WEAK_FUNC(sub_83135278);
PPC_FUNC_IMPL(__imp__sub_83135278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,476
	ctx.r4.s64 = ctx.r11.s64 + 476;
	// bl 0x82429b48
	ctx.lr = 0x83135294;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1857(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1857, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831352B0"))) PPC_WEAK_FUNC(sub_831352B0);
PPC_FUNC_IMPL(__imp__sub_831352B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,480
	ctx.r4.s64 = ctx.r11.s64 + 480;
	// bl 0x82429b48
	ctx.lr = 0x831352CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3704(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3704, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831352E8"))) PPC_WEAK_FUNC(sub_831352E8);
PPC_FUNC_IMPL(__imp__sub_831352E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,484
	ctx.r4.s64 = ctx.r11.s64 + 484;
	// bl 0x82429b48
	ctx.lr = 0x83135304;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-5(r11)
	PPC_STORE_U8(ctx.r11.u32 + -5, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135320"))) PPC_WEAK_FUNC(sub_83135320);
PPC_FUNC_IMPL(__imp__sub_83135320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,488
	ctx.r4.s64 = ctx.r11.s64 + 488;
	// bl 0x82429b48
	ctx.lr = 0x8313533C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-7(r11)
	PPC_STORE_U8(ctx.r11.u32 + -7, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135358"))) PPC_WEAK_FUNC(sub_83135358);
PPC_FUNC_IMPL(__imp__sub_83135358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,492
	ctx.r4.s64 = ctx.r11.s64 + 492;
	// bl 0x82429b48
	ctx.lr = 0x83135374;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3044(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3044, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135390"))) PPC_WEAK_FUNC(sub_83135390);
PPC_FUNC_IMPL(__imp__sub_83135390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,496
	ctx.r4.s64 = ctx.r11.s64 + 496;
	// bl 0x82429b48
	ctx.lr = 0x831353AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1635(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1635, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831353C8"))) PPC_WEAK_FUNC(sub_831353C8);
PPC_FUNC_IMPL(__imp__sub_831353C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,500
	ctx.r4.s64 = ctx.r11.s64 + 500;
	// bl 0x82429b48
	ctx.lr = 0x831353E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1741(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1741, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135400"))) PPC_WEAK_FUNC(sub_83135400);
PPC_FUNC_IMPL(__imp__sub_83135400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,504
	ctx.r4.s64 = ctx.r11.s64 + 504;
	// bl 0x82429b48
	ctx.lr = 0x8313541C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1519(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1519, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135438"))) PPC_WEAK_FUNC(sub_83135438);
PPC_FUNC_IMPL(__imp__sub_83135438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,508
	ctx.r4.s64 = ctx.r11.s64 + 508;
	// bl 0x82429b48
	ctx.lr = 0x83135454;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4922(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4922, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135470"))) PPC_WEAK_FUNC(sub_83135470);
PPC_FUNC_IMPL(__imp__sub_83135470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,512
	ctx.r4.s64 = ctx.r11.s64 + 512;
	// bl 0x82429b48
	ctx.lr = 0x8313548C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4787(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4787, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831354A8"))) PPC_WEAK_FUNC(sub_831354A8);
PPC_FUNC_IMPL(__imp__sub_831354A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,516
	ctx.r4.s64 = ctx.r11.s64 + 516;
	// bl 0x82429b48
	ctx.lr = 0x831354C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4856(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4856, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831354E0"))) PPC_WEAK_FUNC(sub_831354E0);
PPC_FUNC_IMPL(__imp__sub_831354E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,520
	ctx.r4.s64 = ctx.r11.s64 + 520;
	// bl 0x82429b48
	ctx.lr = 0x831354FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1199(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1199, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135518"))) PPC_WEAK_FUNC(sub_83135518);
PPC_FUNC_IMPL(__imp__sub_83135518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,524
	ctx.r4.s64 = ctx.r11.s64 + 524;
	// bl 0x82429b48
	ctx.lr = 0x83135534;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2242(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2242, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135550"))) PPC_WEAK_FUNC(sub_83135550);
PPC_FUNC_IMPL(__imp__sub_83135550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,528
	ctx.r4.s64 = ctx.r11.s64 + 528;
	// bl 0x82429b48
	ctx.lr = 0x8313556C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,915(r11)
	PPC_STORE_U8(ctx.r11.u32 + 915, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135588"))) PPC_WEAK_FUNC(sub_83135588);
PPC_FUNC_IMPL(__imp__sub_83135588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,532
	ctx.r4.s64 = ctx.r11.s64 + 532;
	// bl 0x82429b48
	ctx.lr = 0x831355A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3948(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3948, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831355C0"))) PPC_WEAK_FUNC(sub_831355C0);
PPC_FUNC_IMPL(__imp__sub_831355C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82429b48
	ctx.lr = 0x831355DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-670(r11)
	PPC_STORE_U8(ctx.r11.u32 + -670, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831355F8"))) PPC_WEAK_FUNC(sub_831355F8);
PPC_FUNC_IMPL(__imp__sub_831355F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,540
	ctx.r4.s64 = ctx.r11.s64 + 540;
	// bl 0x82429b48
	ctx.lr = 0x83135614;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1072(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1072, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135630"))) PPC_WEAK_FUNC(sub_83135630);
PPC_FUNC_IMPL(__imp__sub_83135630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,544
	ctx.r4.s64 = ctx.r11.s64 + 544;
	// bl 0x82429b48
	ctx.lr = 0x8313564C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4830(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4830, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135668"))) PPC_WEAK_FUNC(sub_83135668);
PPC_FUNC_IMPL(__imp__sub_83135668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,548
	ctx.r4.s64 = ctx.r11.s64 + 548;
	// bl 0x82429b48
	ctx.lr = 0x83135684;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2223(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2223, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831356A0"))) PPC_WEAK_FUNC(sub_831356A0);
PPC_FUNC_IMPL(__imp__sub_831356A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,552
	ctx.r4.s64 = ctx.r11.s64 + 552;
	// bl 0x82429b48
	ctx.lr = 0x831356BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2538(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2538, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831356D8"))) PPC_WEAK_FUNC(sub_831356D8);
PPC_FUNC_IMPL(__imp__sub_831356D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,556
	ctx.r4.s64 = ctx.r11.s64 + 556;
	// bl 0x82429b48
	ctx.lr = 0x831356F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-227(r11)
	PPC_STORE_U8(ctx.r11.u32 + -227, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135710"))) PPC_WEAK_FUNC(sub_83135710);
PPC_FUNC_IMPL(__imp__sub_83135710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,560
	ctx.r4.s64 = ctx.r11.s64 + 560;
	// bl 0x82429b48
	ctx.lr = 0x8313572C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-669(r11)
	PPC_STORE_U8(ctx.r11.u32 + -669, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135748"))) PPC_WEAK_FUNC(sub_83135748);
PPC_FUNC_IMPL(__imp__sub_83135748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,564
	ctx.r4.s64 = ctx.r11.s64 + 564;
	// bl 0x82429b48
	ctx.lr = 0x83135764;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3643(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3643, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135780"))) PPC_WEAK_FUNC(sub_83135780);
PPC_FUNC_IMPL(__imp__sub_83135780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,568
	ctx.r4.s64 = ctx.r11.s64 + 568;
	// bl 0x82429b48
	ctx.lr = 0x8313579C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4991(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4991, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831357B8"))) PPC_WEAK_FUNC(sub_831357B8);
PPC_FUNC_IMPL(__imp__sub_831357B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,572
	ctx.r4.s64 = ctx.r11.s64 + 572;
	// bl 0x82429b48
	ctx.lr = 0x831357D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3815(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3815, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831357F0"))) PPC_WEAK_FUNC(sub_831357F0);
PPC_FUNC_IMPL(__imp__sub_831357F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,576
	ctx.r4.s64 = ctx.r11.s64 + 576;
	// bl 0x82429b48
	ctx.lr = 0x8313580C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2073(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2073, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135828"))) PPC_WEAK_FUNC(sub_83135828);
PPC_FUNC_IMPL(__imp__sub_83135828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,580
	ctx.r4.s64 = ctx.r11.s64 + 580;
	// bl 0x82429b48
	ctx.lr = 0x83135844;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-717(r11)
	PPC_STORE_U8(ctx.r11.u32 + -717, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135860"))) PPC_WEAK_FUNC(sub_83135860);
PPC_FUNC_IMPL(__imp__sub_83135860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,584
	ctx.r4.s64 = ctx.r11.s64 + 584;
	// bl 0x82429b48
	ctx.lr = 0x8313587C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1292(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1292, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135898"))) PPC_WEAK_FUNC(sub_83135898);
PPC_FUNC_IMPL(__imp__sub_83135898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,588
	ctx.r4.s64 = ctx.r11.s64 + 588;
	// bl 0x82429b48
	ctx.lr = 0x831358B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-343(r11)
	PPC_STORE_U8(ctx.r11.u32 + -343, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831358D0"))) PPC_WEAK_FUNC(sub_831358D0);
PPC_FUNC_IMPL(__imp__sub_831358D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,592
	ctx.r4.s64 = ctx.r11.s64 + 592;
	// bl 0x82429b48
	ctx.lr = 0x831358EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4648(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4648, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135908"))) PPC_WEAK_FUNC(sub_83135908);
PPC_FUNC_IMPL(__imp__sub_83135908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,596
	ctx.r4.s64 = ctx.r11.s64 + 596;
	// bl 0x82429b48
	ctx.lr = 0x83135924;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3663(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3663, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135940"))) PPC_WEAK_FUNC(sub_83135940);
PPC_FUNC_IMPL(__imp__sub_83135940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,600
	ctx.r4.s64 = ctx.r11.s64 + 600;
	// bl 0x82429b48
	ctx.lr = 0x8313595C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1712(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1712, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135978"))) PPC_WEAK_FUNC(sub_83135978);
PPC_FUNC_IMPL(__imp__sub_83135978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,604
	ctx.r4.s64 = ctx.r11.s64 + 604;
	// bl 0x82429b48
	ctx.lr = 0x83135994;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4880(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4880, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831359B0"))) PPC_WEAK_FUNC(sub_831359B0);
PPC_FUNC_IMPL(__imp__sub_831359B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,608
	ctx.r4.s64 = ctx.r11.s64 + 608;
	// bl 0x82429b48
	ctx.lr = 0x831359CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1713(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1713, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831359E8"))) PPC_WEAK_FUNC(sub_831359E8);
PPC_FUNC_IMPL(__imp__sub_831359E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,612
	ctx.r4.s64 = ctx.r11.s64 + 612;
	// bl 0x82429b48
	ctx.lr = 0x83135A04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2676(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2676, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135A20"))) PPC_WEAK_FUNC(sub_83135A20);
PPC_FUNC_IMPL(__imp__sub_83135A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,616
	ctx.r4.s64 = ctx.r11.s64 + 616;
	// bl 0x82429b48
	ctx.lr = 0x83135A3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1048(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1048, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135A58"))) PPC_WEAK_FUNC(sub_83135A58);
PPC_FUNC_IMPL(__imp__sub_83135A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// bl 0x82429b48
	ctx.lr = 0x83135A74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-687(r11)
	PPC_STORE_U8(ctx.r11.u32 + -687, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135A90"))) PPC_WEAK_FUNC(sub_83135A90);
PPC_FUNC_IMPL(__imp__sub_83135A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,624
	ctx.r4.s64 = ctx.r11.s64 + 624;
	// bl 0x82429b48
	ctx.lr = 0x83135AAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3274(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3274, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135AC8"))) PPC_WEAK_FUNC(sub_83135AC8);
PPC_FUNC_IMPL(__imp__sub_83135AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,628
	ctx.r4.s64 = ctx.r11.s64 + 628;
	// bl 0x82429b48
	ctx.lr = 0x83135AE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1061(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1061, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135B00"))) PPC_WEAK_FUNC(sub_83135B00);
PPC_FUNC_IMPL(__imp__sub_83135B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,632
	ctx.r4.s64 = ctx.r11.s64 + 632;
	// bl 0x82429b48
	ctx.lr = 0x83135B1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1388(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1388, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135B38"))) PPC_WEAK_FUNC(sub_83135B38);
PPC_FUNC_IMPL(__imp__sub_83135B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,636
	ctx.r4.s64 = ctx.r11.s64 + 636;
	// bl 0x82429b48
	ctx.lr = 0x83135B54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,884(r11)
	PPC_STORE_U8(ctx.r11.u32 + 884, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135B70"))) PPC_WEAK_FUNC(sub_83135B70);
PPC_FUNC_IMPL(__imp__sub_83135B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,640
	ctx.r4.s64 = ctx.r11.s64 + 640;
	// bl 0x82429b48
	ctx.lr = 0x83135B8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1887(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1887, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135BA8"))) PPC_WEAK_FUNC(sub_83135BA8);
PPC_FUNC_IMPL(__imp__sub_83135BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,644
	ctx.r4.s64 = ctx.r11.s64 + 644;
	// bl 0x82429b48
	ctx.lr = 0x83135BC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4353(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4353, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135BE0"))) PPC_WEAK_FUNC(sub_83135BE0);
PPC_FUNC_IMPL(__imp__sub_83135BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,648
	ctx.r4.s64 = ctx.r11.s64 + 648;
	// bl 0x82429b48
	ctx.lr = 0x83135BFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3341(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3341, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135C18"))) PPC_WEAK_FUNC(sub_83135C18);
PPC_FUNC_IMPL(__imp__sub_83135C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,652
	ctx.r4.s64 = ctx.r11.s64 + 652;
	// bl 0x82429b48
	ctx.lr = 0x83135C34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2569(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2569, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135C50"))) PPC_WEAK_FUNC(sub_83135C50);
PPC_FUNC_IMPL(__imp__sub_83135C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,656
	ctx.r4.s64 = ctx.r11.s64 + 656;
	// bl 0x82429b48
	ctx.lr = 0x83135C6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2804(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2804, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135C88"))) PPC_WEAK_FUNC(sub_83135C88);
PPC_FUNC_IMPL(__imp__sub_83135C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,660
	ctx.r4.s64 = ctx.r11.s64 + 660;
	// bl 0x82429b48
	ctx.lr = 0x83135CA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4371(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4371, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135CC0"))) PPC_WEAK_FUNC(sub_83135CC0);
PPC_FUNC_IMPL(__imp__sub_83135CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,664
	ctx.r4.s64 = ctx.r11.s64 + 664;
	// bl 0x82429b48
	ctx.lr = 0x83135CDC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4828(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4828, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135CF8"))) PPC_WEAK_FUNC(sub_83135CF8);
PPC_FUNC_IMPL(__imp__sub_83135CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,668
	ctx.r4.s64 = ctx.r11.s64 + 668;
	// bl 0x82429b48
	ctx.lr = 0x83135D14;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83135D30"))) PPC_WEAK_FUNC(sub_83135D30);
PPC_FUNC_IMPL(__imp__sub_83135D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,672
	ctx.r4.s64 = ctx.r11.s64 + 672;
	// bl 0x82429b48
	ctx.lr = 0x83135D4C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-686(r11)
	PPC_STORE_U8(ctx.r11.u32 + -686, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135D68"))) PPC_WEAK_FUNC(sub_83135D68);
PPC_FUNC_IMPL(__imp__sub_83135D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,676
	ctx.r4.s64 = ctx.r11.s64 + 676;
	// bl 0x82429b48
	ctx.lr = 0x83135D84;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4489(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4489, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135DA0"))) PPC_WEAK_FUNC(sub_83135DA0);
PPC_FUNC_IMPL(__imp__sub_83135DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,680
	ctx.r4.s64 = ctx.r11.s64 + 680;
	// bl 0x82429b48
	ctx.lr = 0x83135DBC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,410(r11)
	PPC_STORE_U8(ctx.r11.u32 + 410, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135DD8"))) PPC_WEAK_FUNC(sub_83135DD8);
PPC_FUNC_IMPL(__imp__sub_83135DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,684
	ctx.r4.s64 = ctx.r11.s64 + 684;
	// bl 0x82429b48
	ctx.lr = 0x83135DF4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,496(r11)
	PPC_STORE_U8(ctx.r11.u32 + 496, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135E10"))) PPC_WEAK_FUNC(sub_83135E10);
PPC_FUNC_IMPL(__imp__sub_83135E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,688
	ctx.r4.s64 = ctx.r11.s64 + 688;
	// bl 0x82429b48
	ctx.lr = 0x83135E2C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83135E48"))) PPC_WEAK_FUNC(sub_83135E48);
PPC_FUNC_IMPL(__imp__sub_83135E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,692
	ctx.r4.s64 = ctx.r11.s64 + 692;
	// bl 0x82429b48
	ctx.lr = 0x83135E64;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2106(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2106, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135E80"))) PPC_WEAK_FUNC(sub_83135E80);
PPC_FUNC_IMPL(__imp__sub_83135E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,696
	ctx.r4.s64 = ctx.r11.s64 + 696;
	// bl 0x82429b48
	ctx.lr = 0x83135E9C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83135EB8"))) PPC_WEAK_FUNC(sub_83135EB8);
PPC_FUNC_IMPL(__imp__sub_83135EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,700
	ctx.r4.s64 = ctx.r11.s64 + 700;
	// bl 0x82429b48
	ctx.lr = 0x83135ED4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1755(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1755, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135EF0"))) PPC_WEAK_FUNC(sub_83135EF0);
PPC_FUNC_IMPL(__imp__sub_83135EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,704
	ctx.r4.s64 = ctx.r11.s64 + 704;
	// bl 0x82429b48
	ctx.lr = 0x83135F0C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4831(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4831, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135F28"))) PPC_WEAK_FUNC(sub_83135F28);
PPC_FUNC_IMPL(__imp__sub_83135F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,708
	ctx.r4.s64 = ctx.r11.s64 + 708;
	// bl 0x82429b48
	ctx.lr = 0x83135F44;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1117, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135F60"))) PPC_WEAK_FUNC(sub_83135F60);
PPC_FUNC_IMPL(__imp__sub_83135F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,712
	ctx.r4.s64 = ctx.r11.s64 + 712;
	// bl 0x82429b48
	ctx.lr = 0x83135F7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83135F98"))) PPC_WEAK_FUNC(sub_83135F98);
PPC_FUNC_IMPL(__imp__sub_83135F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,716
	ctx.r4.s64 = ctx.r11.s64 + 716;
	// bl 0x82429b48
	ctx.lr = 0x83135FB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,332(r11)
	PPC_STORE_U8(ctx.r11.u32 + 332, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135FD0"))) PPC_WEAK_FUNC(sub_83135FD0);
PPC_FUNC_IMPL(__imp__sub_83135FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,720
	ctx.r4.s64 = ctx.r11.s64 + 720;
	// bl 0x82429b48
	ctx.lr = 0x83135FEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-691(r11)
	PPC_STORE_U8(ctx.r11.u32 + -691, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136008"))) PPC_WEAK_FUNC(sub_83136008);
PPC_FUNC_IMPL(__imp__sub_83136008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,724
	ctx.r4.s64 = ctx.r11.s64 + 724;
	// bl 0x82429b48
	ctx.lr = 0x83136024;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83136040"))) PPC_WEAK_FUNC(sub_83136040);
PPC_FUNC_IMPL(__imp__sub_83136040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,728
	ctx.r4.s64 = ctx.r11.s64 + 728;
	// bl 0x82429b48
	ctx.lr = 0x8313605C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-93(r11)
	PPC_STORE_U8(ctx.r11.u32 + -93, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136078"))) PPC_WEAK_FUNC(sub_83136078);
PPC_FUNC_IMPL(__imp__sub_83136078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,732
	ctx.r4.s64 = ctx.r11.s64 + 732;
	// bl 0x82429b48
	ctx.lr = 0x83136094;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1842(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1842, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831360B0"))) PPC_WEAK_FUNC(sub_831360B0);
PPC_FUNC_IMPL(__imp__sub_831360B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,736
	ctx.r4.s64 = ctx.r11.s64 + 736;
	// bl 0x82429b48
	ctx.lr = 0x831360CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4235(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4235, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831360E8"))) PPC_WEAK_FUNC(sub_831360E8);
PPC_FUNC_IMPL(__imp__sub_831360E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,740
	ctx.r4.s64 = ctx.r11.s64 + 740;
	// bl 0x82429b48
	ctx.lr = 0x83136104;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-95(r11)
	PPC_STORE_U8(ctx.r11.u32 + -95, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136120"))) PPC_WEAK_FUNC(sub_83136120);
PPC_FUNC_IMPL(__imp__sub_83136120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,744
	ctx.r4.s64 = ctx.r11.s64 + 744;
	// bl 0x82429b48
	ctx.lr = 0x8313613C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3143(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3143, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136158"))) PPC_WEAK_FUNC(sub_83136158);
PPC_FUNC_IMPL(__imp__sub_83136158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,748
	ctx.r4.s64 = ctx.r11.s64 + 748;
	// bl 0x82429b48
	ctx.lr = 0x83136174;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2132(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2132, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136190"))) PPC_WEAK_FUNC(sub_83136190);
PPC_FUNC_IMPL(__imp__sub_83136190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,752
	ctx.r4.s64 = ctx.r11.s64 + 752;
	// bl 0x82429b48
	ctx.lr = 0x831361AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1446(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1446, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831361C8"))) PPC_WEAK_FUNC(sub_831361C8);
PPC_FUNC_IMPL(__imp__sub_831361C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,756
	ctx.r4.s64 = ctx.r11.s64 + 756;
	// bl 0x82429b48
	ctx.lr = 0x831361E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2060(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2060, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136200"))) PPC_WEAK_FUNC(sub_83136200);
PPC_FUNC_IMPL(__imp__sub_83136200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,760
	ctx.r4.s64 = ctx.r11.s64 + 760;
	// bl 0x82429b48
	ctx.lr = 0x8313621C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,254(r11)
	PPC_STORE_U8(ctx.r11.u32 + 254, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136238"))) PPC_WEAK_FUNC(sub_83136238);
PPC_FUNC_IMPL(__imp__sub_83136238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,764
	ctx.r4.s64 = ctx.r11.s64 + 764;
	// bl 0x82429b48
	ctx.lr = 0x83136254;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-177(r11)
	PPC_STORE_U8(ctx.r11.u32 + -177, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136270"))) PPC_WEAK_FUNC(sub_83136270);
PPC_FUNC_IMPL(__imp__sub_83136270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,768
	ctx.r4.s64 = ctx.r11.s64 + 768;
	// bl 0x82429b48
	ctx.lr = 0x8313628C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4903(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4903, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831362A8"))) PPC_WEAK_FUNC(sub_831362A8);
PPC_FUNC_IMPL(__imp__sub_831362A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,772
	ctx.r4.s64 = ctx.r11.s64 + 772;
	// bl 0x82429b48
	ctx.lr = 0x831362C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1702(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1702, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

