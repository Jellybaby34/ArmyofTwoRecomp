#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8310F728"))) PPC_WEAK_FUNC(sub_8310F728);
PPC_FUNC_IMPL(__imp__sub_8310F728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32740
	ctx.r4.s64 = ctx.r11.s64 + -32740;
	// bl 0x82429b48
	ctx.lr = 0x8310F744;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2896(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2896, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F760"))) PPC_WEAK_FUNC(sub_8310F760);
PPC_FUNC_IMPL(__imp__sub_8310F760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32736
	ctx.r4.s64 = ctx.r11.s64 + -32736;
	// bl 0x82429b48
	ctx.lr = 0x8310F77C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3020(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3020, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F798"))) PPC_WEAK_FUNC(sub_8310F798);
PPC_FUNC_IMPL(__imp__sub_8310F798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32732
	ctx.r4.s64 = ctx.r11.s64 + -32732;
	// bl 0x82429b48
	ctx.lr = 0x8310F7B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310F7D0"))) PPC_WEAK_FUNC(sub_8310F7D0);
PPC_FUNC_IMPL(__imp__sub_8310F7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32728
	ctx.r4.s64 = ctx.r11.s64 + -32728;
	// bl 0x82429b48
	ctx.lr = 0x8310F7EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,269(r11)
	PPC_STORE_U8(ctx.r11.u32 + 269, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F808"))) PPC_WEAK_FUNC(sub_8310F808);
PPC_FUNC_IMPL(__imp__sub_8310F808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32724
	ctx.r4.s64 = ctx.r11.s64 + -32724;
	// bl 0x82429b48
	ctx.lr = 0x8310F824;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,413(r11)
	PPC_STORE_U8(ctx.r11.u32 + 413, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F840"))) PPC_WEAK_FUNC(sub_8310F840);
PPC_FUNC_IMPL(__imp__sub_8310F840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32720
	ctx.r4.s64 = ctx.r11.s64 + -32720;
	// bl 0x82429b48
	ctx.lr = 0x8310F85C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2858(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2858, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F878"))) PPC_WEAK_FUNC(sub_8310F878);
PPC_FUNC_IMPL(__imp__sub_8310F878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32716
	ctx.r4.s64 = ctx.r11.s64 + -32716;
	// bl 0x82429b48
	ctx.lr = 0x8310F894;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1046(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1046, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F8B0"))) PPC_WEAK_FUNC(sub_8310F8B0);
PPC_FUNC_IMPL(__imp__sub_8310F8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32712
	ctx.r4.s64 = ctx.r11.s64 + -32712;
	// bl 0x82429b48
	ctx.lr = 0x8310F8CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4187(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4187, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F8E8"))) PPC_WEAK_FUNC(sub_8310F8E8);
PPC_FUNC_IMPL(__imp__sub_8310F8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32708
	ctx.r4.s64 = ctx.r11.s64 + -32708;
	// bl 0x82429b48
	ctx.lr = 0x8310F904;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,349(r11)
	PPC_STORE_U8(ctx.r11.u32 + 349, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F920"))) PPC_WEAK_FUNC(sub_8310F920);
PPC_FUNC_IMPL(__imp__sub_8310F920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32704
	ctx.r4.s64 = ctx.r11.s64 + -32704;
	// bl 0x82429b48
	ctx.lr = 0x8310F93C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3424(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3424, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F958"))) PPC_WEAK_FUNC(sub_8310F958);
PPC_FUNC_IMPL(__imp__sub_8310F958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32700
	ctx.r4.s64 = ctx.r11.s64 + -32700;
	// bl 0x82429b48
	ctx.lr = 0x8310F974;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,59(r11)
	PPC_STORE_U8(ctx.r11.u32 + 59, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F990"))) PPC_WEAK_FUNC(sub_8310F990);
PPC_FUNC_IMPL(__imp__sub_8310F990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32696
	ctx.r4.s64 = ctx.r11.s64 + -32696;
	// bl 0x82429b48
	ctx.lr = 0x8310F9AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1243(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1243, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F9C8"))) PPC_WEAK_FUNC(sub_8310F9C8);
PPC_FUNC_IMPL(__imp__sub_8310F9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32692
	ctx.r4.s64 = ctx.r11.s64 + -32692;
	// bl 0x82429b48
	ctx.lr = 0x8310F9E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,534(r11)
	PPC_STORE_U8(ctx.r11.u32 + 534, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FA00"))) PPC_WEAK_FUNC(sub_8310FA00);
PPC_FUNC_IMPL(__imp__sub_8310FA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32688
	ctx.r4.s64 = ctx.r11.s64 + -32688;
	// bl 0x82429b48
	ctx.lr = 0x8310FA1C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310FA38"))) PPC_WEAK_FUNC(sub_8310FA38);
PPC_FUNC_IMPL(__imp__sub_8310FA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32684
	ctx.r4.s64 = ctx.r11.s64 + -32684;
	// bl 0x82429b48
	ctx.lr = 0x8310FA54;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1280(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1280, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FA70"))) PPC_WEAK_FUNC(sub_8310FA70);
PPC_FUNC_IMPL(__imp__sub_8310FA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32680
	ctx.r4.s64 = ctx.r11.s64 + -32680;
	// bl 0x82429b48
	ctx.lr = 0x8310FA8C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,639(r11)
	PPC_STORE_U8(ctx.r11.u32 + 639, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FAA8"))) PPC_WEAK_FUNC(sub_8310FAA8);
PPC_FUNC_IMPL(__imp__sub_8310FAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32676
	ctx.r4.s64 = ctx.r11.s64 + -32676;
	// bl 0x82429b48
	ctx.lr = 0x8310FAC4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1145(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1145, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FAE0"))) PPC_WEAK_FUNC(sub_8310FAE0);
PPC_FUNC_IMPL(__imp__sub_8310FAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32672
	ctx.r4.s64 = ctx.r11.s64 + -32672;
	// bl 0x82429b48
	ctx.lr = 0x8310FAFC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-115(r11)
	PPC_STORE_U8(ctx.r11.u32 + -115, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FB18"))) PPC_WEAK_FUNC(sub_8310FB18);
PPC_FUNC_IMPL(__imp__sub_8310FB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32668
	ctx.r4.s64 = ctx.r11.s64 + -32668;
	// bl 0x82429b48
	ctx.lr = 0x8310FB34;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2626(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2626, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FB50"))) PPC_WEAK_FUNC(sub_8310FB50);
PPC_FUNC_IMPL(__imp__sub_8310FB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32664
	ctx.r4.s64 = ctx.r11.s64 + -32664;
	// bl 0x82429b48
	ctx.lr = 0x8310FB6C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1352(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1352, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FB88"))) PPC_WEAK_FUNC(sub_8310FB88);
PPC_FUNC_IMPL(__imp__sub_8310FB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32660
	ctx.r4.s64 = ctx.r11.s64 + -32660;
	// bl 0x82429b48
	ctx.lr = 0x8310FBA4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4769(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4769, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FBC0"))) PPC_WEAK_FUNC(sub_8310FBC0);
PPC_FUNC_IMPL(__imp__sub_8310FBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32656
	ctx.r4.s64 = ctx.r11.s64 + -32656;
	// bl 0x82429b48
	ctx.lr = 0x8310FBDC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4793(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4793, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FBF8"))) PPC_WEAK_FUNC(sub_8310FBF8);
PPC_FUNC_IMPL(__imp__sub_8310FBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32652
	ctx.r4.s64 = ctx.r11.s64 + -32652;
	// bl 0x82429b48
	ctx.lr = 0x8310FC14;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5071(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5071, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FC30"))) PPC_WEAK_FUNC(sub_8310FC30);
PPC_FUNC_IMPL(__imp__sub_8310FC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32648
	ctx.r4.s64 = ctx.r11.s64 + -32648;
	// bl 0x82429b48
	ctx.lr = 0x8310FC4C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2123(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2123, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FC68"))) PPC_WEAK_FUNC(sub_8310FC68);
PPC_FUNC_IMPL(__imp__sub_8310FC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32644
	ctx.r4.s64 = ctx.r11.s64 + -32644;
	// bl 0x82429b48
	ctx.lr = 0x8310FC84;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4381(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4381, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FCA0"))) PPC_WEAK_FUNC(sub_8310FCA0);
PPC_FUNC_IMPL(__imp__sub_8310FCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32640
	ctx.r4.s64 = ctx.r11.s64 + -32640;
	// bl 0x82429b48
	ctx.lr = 0x8310FCBC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-160(r11)
	PPC_STORE_U8(ctx.r11.u32 + -160, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FCD8"))) PPC_WEAK_FUNC(sub_8310FCD8);
PPC_FUNC_IMPL(__imp__sub_8310FCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32636
	ctx.r4.s64 = ctx.r11.s64 + -32636;
	// bl 0x82429b48
	ctx.lr = 0x8310FCF4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3903(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3903, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FD10"))) PPC_WEAK_FUNC(sub_8310FD10);
PPC_FUNC_IMPL(__imp__sub_8310FD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32632
	ctx.r4.s64 = ctx.r11.s64 + -32632;
	// bl 0x82429b48
	ctx.lr = 0x8310FD2C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1710(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1710, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FD48"))) PPC_WEAK_FUNC(sub_8310FD48);
PPC_FUNC_IMPL(__imp__sub_8310FD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32628
	ctx.r4.s64 = ctx.r11.s64 + -32628;
	// bl 0x82429b48
	ctx.lr = 0x8310FD64;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,464(r11)
	PPC_STORE_U8(ctx.r11.u32 + 464, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FD80"))) PPC_WEAK_FUNC(sub_8310FD80);
PPC_FUNC_IMPL(__imp__sub_8310FD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32624
	ctx.r4.s64 = ctx.r11.s64 + -32624;
	// bl 0x82429b48
	ctx.lr = 0x8310FD9C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,636(r11)
	PPC_STORE_U8(ctx.r11.u32 + 636, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FDB8"))) PPC_WEAK_FUNC(sub_8310FDB8);
PPC_FUNC_IMPL(__imp__sub_8310FDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32620
	ctx.r4.s64 = ctx.r11.s64 + -32620;
	// bl 0x82429b48
	ctx.lr = 0x8310FDD4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3890(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3890, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FDF0"))) PPC_WEAK_FUNC(sub_8310FDF0);
PPC_FUNC_IMPL(__imp__sub_8310FDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32616
	ctx.r4.s64 = ctx.r11.s64 + -32616;
	// bl 0x82429b48
	ctx.lr = 0x8310FE0C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1282(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1282, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FE28"))) PPC_WEAK_FUNC(sub_8310FE28);
PPC_FUNC_IMPL(__imp__sub_8310FE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32612
	ctx.r4.s64 = ctx.r11.s64 + -32612;
	// bl 0x82429b48
	ctx.lr = 0x8310FE44;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310FE60"))) PPC_WEAK_FUNC(sub_8310FE60);
PPC_FUNC_IMPL(__imp__sub_8310FE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32608
	ctx.r4.s64 = ctx.r11.s64 + -32608;
	// bl 0x82429b48
	ctx.lr = 0x8310FE7C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310FE98"))) PPC_WEAK_FUNC(sub_8310FE98);
PPC_FUNC_IMPL(__imp__sub_8310FE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32604
	ctx.r4.s64 = ctx.r11.s64 + -32604;
	// bl 0x82429b48
	ctx.lr = 0x8310FEB4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310FED0"))) PPC_WEAK_FUNC(sub_8310FED0);
PPC_FUNC_IMPL(__imp__sub_8310FED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32600
	ctx.r4.s64 = ctx.r11.s64 + -32600;
	// bl 0x82429b48
	ctx.lr = 0x8310FEEC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,203(r11)
	PPC_STORE_U8(ctx.r11.u32 + 203, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FF08"))) PPC_WEAK_FUNC(sub_8310FF08);
PPC_FUNC_IMPL(__imp__sub_8310FF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32596
	ctx.r4.s64 = ctx.r11.s64 + -32596;
	// bl 0x82429b48
	ctx.lr = 0x8310FF24;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4946(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4946, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FF40"))) PPC_WEAK_FUNC(sub_8310FF40);
PPC_FUNC_IMPL(__imp__sub_8310FF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32592
	ctx.r4.s64 = ctx.r11.s64 + -32592;
	// bl 0x82429b48
	ctx.lr = 0x8310FF5C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2070(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2070, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FF78"))) PPC_WEAK_FUNC(sub_8310FF78);
PPC_FUNC_IMPL(__imp__sub_8310FF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32588
	ctx.r4.s64 = ctx.r11.s64 + -32588;
	// bl 0x82429b48
	ctx.lr = 0x8310FF94;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3825(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3825, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FFB0"))) PPC_WEAK_FUNC(sub_8310FFB0);
PPC_FUNC_IMPL(__imp__sub_8310FFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32584
	ctx.r4.s64 = ctx.r11.s64 + -32584;
	// bl 0x82429b48
	ctx.lr = 0x8310FFCC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4198(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4198, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310FFE8"))) PPC_WEAK_FUNC(sub_8310FFE8);
PPC_FUNC_IMPL(__imp__sub_8310FFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32580
	ctx.r4.s64 = ctx.r11.s64 + -32580;
	// bl 0x82429b48
	ctx.lr = 0x83110004;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,988(r11)
	PPC_STORE_U8(ctx.r11.u32 + 988, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110020"))) PPC_WEAK_FUNC(sub_83110020);
PPC_FUNC_IMPL(__imp__sub_83110020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32576
	ctx.r4.s64 = ctx.r11.s64 + -32576;
	// bl 0x82429b48
	ctx.lr = 0x8311003C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,190(r11)
	PPC_STORE_U8(ctx.r11.u32 + 190, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110058"))) PPC_WEAK_FUNC(sub_83110058);
PPC_FUNC_IMPL(__imp__sub_83110058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32572
	ctx.r4.s64 = ctx.r11.s64 + -32572;
	// bl 0x82429b48
	ctx.lr = 0x83110074;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1575(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1575, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110090"))) PPC_WEAK_FUNC(sub_83110090);
PPC_FUNC_IMPL(__imp__sub_83110090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32568
	ctx.r4.s64 = ctx.r11.s64 + -32568;
	// bl 0x82429b48
	ctx.lr = 0x831100AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,166(r11)
	PPC_STORE_U8(ctx.r11.u32 + 166, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831100C8"))) PPC_WEAK_FUNC(sub_831100C8);
PPC_FUNC_IMPL(__imp__sub_831100C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32564
	ctx.r4.s64 = ctx.r11.s64 + -32564;
	// bl 0x82429b48
	ctx.lr = 0x831100E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,637(r11)
	PPC_STORE_U8(ctx.r11.u32 + 637, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110100"))) PPC_WEAK_FUNC(sub_83110100);
PPC_FUNC_IMPL(__imp__sub_83110100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32560
	ctx.r4.s64 = ctx.r11.s64 + -32560;
	// bl 0x82429b48
	ctx.lr = 0x8311011C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1536(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1536, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110138"))) PPC_WEAK_FUNC(sub_83110138);
PPC_FUNC_IMPL(__imp__sub_83110138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32556
	ctx.r4.s64 = ctx.r11.s64 + -32556;
	// bl 0x82429b48
	ctx.lr = 0x83110154;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 942, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110170"))) PPC_WEAK_FUNC(sub_83110170);
PPC_FUNC_IMPL(__imp__sub_83110170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32552
	ctx.r4.s64 = ctx.r11.s64 + -32552;
	// bl 0x82429b48
	ctx.lr = 0x8311018C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,990(r11)
	PPC_STORE_U8(ctx.r11.u32 + 990, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831101A8"))) PPC_WEAK_FUNC(sub_831101A8);
PPC_FUNC_IMPL(__imp__sub_831101A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32548
	ctx.r4.s64 = ctx.r11.s64 + -32548;
	// bl 0x82429b48
	ctx.lr = 0x831101C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2470(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2470, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831101E0"))) PPC_WEAK_FUNC(sub_831101E0);
PPC_FUNC_IMPL(__imp__sub_831101E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32544
	ctx.r4.s64 = ctx.r11.s64 + -32544;
	// bl 0x82429b48
	ctx.lr = 0x831101FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83110218"))) PPC_WEAK_FUNC(sub_83110218);
PPC_FUNC_IMPL(__imp__sub_83110218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32540
	ctx.r4.s64 = ctx.r11.s64 + -32540;
	// bl 0x82429b48
	ctx.lr = 0x83110234;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-39(r11)
	PPC_STORE_U8(ctx.r11.u32 + -39, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110250"))) PPC_WEAK_FUNC(sub_83110250);
PPC_FUNC_IMPL(__imp__sub_83110250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32536
	ctx.r4.s64 = ctx.r11.s64 + -32536;
	// bl 0x82429b48
	ctx.lr = 0x8311026C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4947(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4947, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110288"))) PPC_WEAK_FUNC(sub_83110288);
PPC_FUNC_IMPL(__imp__sub_83110288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32532
	ctx.r4.s64 = ctx.r11.s64 + -32532;
	// bl 0x82429b48
	ctx.lr = 0x831102A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3774(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3774, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831102C0"))) PPC_WEAK_FUNC(sub_831102C0);
PPC_FUNC_IMPL(__imp__sub_831102C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32528
	ctx.r4.s64 = ctx.r11.s64 + -32528;
	// bl 0x82429b48
	ctx.lr = 0x831102DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_831102F8"))) PPC_WEAK_FUNC(sub_831102F8);
PPC_FUNC_IMPL(__imp__sub_831102F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32524
	ctx.r4.s64 = ctx.r11.s64 + -32524;
	// bl 0x82429b48
	ctx.lr = 0x83110314;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83110330"))) PPC_WEAK_FUNC(sub_83110330);
PPC_FUNC_IMPL(__imp__sub_83110330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32520
	ctx.r4.s64 = ctx.r11.s64 + -32520;
	// bl 0x82429b48
	ctx.lr = 0x8311034C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4199(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4199, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110368"))) PPC_WEAK_FUNC(sub_83110368);
PPC_FUNC_IMPL(__imp__sub_83110368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32516
	ctx.r4.s64 = ctx.r11.s64 + -32516;
	// bl 0x82429b48
	ctx.lr = 0x83110384;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1056(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1056, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831103A0"))) PPC_WEAK_FUNC(sub_831103A0);
PPC_FUNC_IMPL(__imp__sub_831103A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32512
	ctx.r4.s64 = ctx.r11.s64 + -32512;
	// bl 0x82429b48
	ctx.lr = 0x831103BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_831103D8"))) PPC_WEAK_FUNC(sub_831103D8);
PPC_FUNC_IMPL(__imp__sub_831103D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32508
	ctx.r4.s64 = ctx.r11.s64 + -32508;
	// bl 0x82429b48
	ctx.lr = 0x831103F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4196(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4196, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110410"))) PPC_WEAK_FUNC(sub_83110410);
PPC_FUNC_IMPL(__imp__sub_83110410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32504
	ctx.r4.s64 = ctx.r11.s64 + -32504;
	// bl 0x82429b48
	ctx.lr = 0x8311042C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3236(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3236, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110448"))) PPC_WEAK_FUNC(sub_83110448);
PPC_FUNC_IMPL(__imp__sub_83110448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32500
	ctx.r4.s64 = ctx.r11.s64 + -32500;
	// bl 0x82429b48
	ctx.lr = 0x83110464;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1496(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1496, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110480"))) PPC_WEAK_FUNC(sub_83110480);
PPC_FUNC_IMPL(__imp__sub_83110480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32496
	ctx.r4.s64 = ctx.r11.s64 + -32496;
	// bl 0x82429b48
	ctx.lr = 0x8311049C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-19(r11)
	PPC_STORE_U8(ctx.r11.u32 + -19, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831104B8"))) PPC_WEAK_FUNC(sub_831104B8);
PPC_FUNC_IMPL(__imp__sub_831104B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32492
	ctx.r4.s64 = ctx.r11.s64 + -32492;
	// bl 0x82429b48
	ctx.lr = 0x831104D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,213(r11)
	PPC_STORE_U8(ctx.r11.u32 + 213, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831104F0"))) PPC_WEAK_FUNC(sub_831104F0);
PPC_FUNC_IMPL(__imp__sub_831104F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32488
	ctx.r4.s64 = ctx.r11.s64 + -32488;
	// bl 0x82429b48
	ctx.lr = 0x8311050C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1070(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1070, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110528"))) PPC_WEAK_FUNC(sub_83110528);
PPC_FUNC_IMPL(__imp__sub_83110528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32484
	ctx.r4.s64 = ctx.r11.s64 + -32484;
	// bl 0x82429b48
	ctx.lr = 0x83110544;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4121(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4121, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110560"))) PPC_WEAK_FUNC(sub_83110560);
PPC_FUNC_IMPL(__imp__sub_83110560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32480
	ctx.r4.s64 = ctx.r11.s64 + -32480;
	// bl 0x82429b48
	ctx.lr = 0x8311057C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-110(r11)
	PPC_STORE_U8(ctx.r11.u32 + -110, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110598"))) PPC_WEAK_FUNC(sub_83110598);
PPC_FUNC_IMPL(__imp__sub_83110598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32476
	ctx.r4.s64 = ctx.r11.s64 + -32476;
	// bl 0x82429b48
	ctx.lr = 0x831105B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1612(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1612, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831105D0"))) PPC_WEAK_FUNC(sub_831105D0);
PPC_FUNC_IMPL(__imp__sub_831105D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32472
	ctx.r4.s64 = ctx.r11.s64 + -32472;
	// bl 0x82429b48
	ctx.lr = 0x831105EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,124(r11)
	PPC_STORE_U8(ctx.r11.u32 + 124, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110608"))) PPC_WEAK_FUNC(sub_83110608);
PPC_FUNC_IMPL(__imp__sub_83110608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32468
	ctx.r4.s64 = ctx.r11.s64 + -32468;
	// bl 0x82429b48
	ctx.lr = 0x83110624;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110640"))) PPC_WEAK_FUNC(sub_83110640);
PPC_FUNC_IMPL(__imp__sub_83110640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32464
	ctx.r4.s64 = ctx.r11.s64 + -32464;
	// bl 0x82429b48
	ctx.lr = 0x8311065C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,910(r11)
	PPC_STORE_U8(ctx.r11.u32 + 910, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110678"))) PPC_WEAK_FUNC(sub_83110678);
PPC_FUNC_IMPL(__imp__sub_83110678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32460
	ctx.r4.s64 = ctx.r11.s64 + -32460;
	// bl 0x82429b48
	ctx.lr = 0x83110694;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_831106B0"))) PPC_WEAK_FUNC(sub_831106B0);
PPC_FUNC_IMPL(__imp__sub_831106B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32456
	ctx.r4.s64 = ctx.r11.s64 + -32456;
	// bl 0x82429b48
	ctx.lr = 0x831106CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1089(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1089, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831106E8"))) PPC_WEAK_FUNC(sub_831106E8);
PPC_FUNC_IMPL(__imp__sub_831106E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32452
	ctx.r4.s64 = ctx.r11.s64 + -32452;
	// bl 0x82429b48
	ctx.lr = 0x83110704;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83110720"))) PPC_WEAK_FUNC(sub_83110720);
PPC_FUNC_IMPL(__imp__sub_83110720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32448
	ctx.r4.s64 = ctx.r11.s64 + -32448;
	// bl 0x82429b48
	ctx.lr = 0x8311073C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4432(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4432, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110758"))) PPC_WEAK_FUNC(sub_83110758);
PPC_FUNC_IMPL(__imp__sub_83110758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32444
	ctx.r4.s64 = ctx.r11.s64 + -32444;
	// bl 0x82429b48
	ctx.lr = 0x83110774;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1613(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1613, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110790"))) PPC_WEAK_FUNC(sub_83110790);
PPC_FUNC_IMPL(__imp__sub_83110790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32440
	ctx.r4.s64 = ctx.r11.s64 + -32440;
	// bl 0x82429b48
	ctx.lr = 0x831107AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,867(r11)
	PPC_STORE_U8(ctx.r11.u32 + 867, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831107C8"))) PPC_WEAK_FUNC(sub_831107C8);
PPC_FUNC_IMPL(__imp__sub_831107C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32436
	ctx.r4.s64 = ctx.r11.s64 + -32436;
	// bl 0x82429b48
	ctx.lr = 0x831107E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,167(r11)
	PPC_STORE_U8(ctx.r11.u32 + 167, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110800"))) PPC_WEAK_FUNC(sub_83110800);
PPC_FUNC_IMPL(__imp__sub_83110800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32432
	ctx.r4.s64 = ctx.r11.s64 + -32432;
	// bl 0x82429b48
	ctx.lr = 0x8311081C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2668(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2668, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110838"))) PPC_WEAK_FUNC(sub_83110838);
PPC_FUNC_IMPL(__imp__sub_83110838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32428
	ctx.r4.s64 = ctx.r11.s64 + -32428;
	// bl 0x82429b48
	ctx.lr = 0x83110854;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4617(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4617, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110870"))) PPC_WEAK_FUNC(sub_83110870);
PPC_FUNC_IMPL(__imp__sub_83110870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32424
	ctx.r4.s64 = ctx.r11.s64 + -32424;
	// bl 0x82429b48
	ctx.lr = 0x8311088C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4538(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4538, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831108A8"))) PPC_WEAK_FUNC(sub_831108A8);
PPC_FUNC_IMPL(__imp__sub_831108A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32420
	ctx.r4.s64 = ctx.r11.s64 + -32420;
	// bl 0x82429b48
	ctx.lr = 0x831108C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2515(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2515, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831108E0"))) PPC_WEAK_FUNC(sub_831108E0);
PPC_FUNC_IMPL(__imp__sub_831108E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32416
	ctx.r4.s64 = ctx.r11.s64 + -32416;
	// bl 0x82429b48
	ctx.lr = 0x831108FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,871(r11)
	PPC_STORE_U8(ctx.r11.u32 + 871, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110918"))) PPC_WEAK_FUNC(sub_83110918);
PPC_FUNC_IMPL(__imp__sub_83110918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32412
	ctx.r4.s64 = ctx.r11.s64 + -32412;
	// bl 0x82429b48
	ctx.lr = 0x83110934;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4747(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4747, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110950"))) PPC_WEAK_FUNC(sub_83110950);
PPC_FUNC_IMPL(__imp__sub_83110950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32408
	ctx.r4.s64 = ctx.r11.s64 + -32408;
	// bl 0x82429b48
	ctx.lr = 0x8311096C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2233, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110988"))) PPC_WEAK_FUNC(sub_83110988);
PPC_FUNC_IMPL(__imp__sub_83110988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32404
	ctx.r4.s64 = ctx.r11.s64 + -32404;
	// bl 0x82429b48
	ctx.lr = 0x831109A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2333(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2333, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831109C0"))) PPC_WEAK_FUNC(sub_831109C0);
PPC_FUNC_IMPL(__imp__sub_831109C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32400
	ctx.r4.s64 = ctx.r11.s64 + -32400;
	// bl 0x82429b48
	ctx.lr = 0x831109DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4122(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4122, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831109F8"))) PPC_WEAK_FUNC(sub_831109F8);
PPC_FUNC_IMPL(__imp__sub_831109F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32396
	ctx.r4.s64 = ctx.r11.s64 + -32396;
	// bl 0x82429b48
	ctx.lr = 0x83110A14;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4168(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4168, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110A30"))) PPC_WEAK_FUNC(sub_83110A30);
PPC_FUNC_IMPL(__imp__sub_83110A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32392
	ctx.r4.s64 = ctx.r11.s64 + -32392;
	// bl 0x82429b48
	ctx.lr = 0x83110A4C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4407(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4407, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110A68"))) PPC_WEAK_FUNC(sub_83110A68);
PPC_FUNC_IMPL(__imp__sub_83110A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32388
	ctx.r4.s64 = ctx.r11.s64 + -32388;
	// bl 0x82429b48
	ctx.lr = 0x83110A84;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1711(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1711, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110AA0"))) PPC_WEAK_FUNC(sub_83110AA0);
PPC_FUNC_IMPL(__imp__sub_83110AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32384
	ctx.r4.s64 = ctx.r11.s64 + -32384;
	// bl 0x82429b48
	ctx.lr = 0x83110ABC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2152(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2152, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110AD8"))) PPC_WEAK_FUNC(sub_83110AD8);
PPC_FUNC_IMPL(__imp__sub_83110AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32380
	ctx.r4.s64 = ctx.r11.s64 + -32380;
	// bl 0x82429b48
	ctx.lr = 0x83110AF4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1305(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1305, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110B10"))) PPC_WEAK_FUNC(sub_83110B10);
PPC_FUNC_IMPL(__imp__sub_83110B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32376
	ctx.r4.s64 = ctx.r11.s64 + -32376;
	// bl 0x82429b48
	ctx.lr = 0x83110B2C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4794(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4794, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110B48"))) PPC_WEAK_FUNC(sub_83110B48);
PPC_FUNC_IMPL(__imp__sub_83110B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32372
	ctx.r4.s64 = ctx.r11.s64 + -32372;
	// bl 0x82429b48
	ctx.lr = 0x83110B64;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2143(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2143, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110B80"))) PPC_WEAK_FUNC(sub_83110B80);
PPC_FUNC_IMPL(__imp__sub_83110B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32368
	ctx.r4.s64 = ctx.r11.s64 + -32368;
	// bl 0x82429b48
	ctx.lr = 0x83110B9C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3668(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3668, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110BB8"))) PPC_WEAK_FUNC(sub_83110BB8);
PPC_FUNC_IMPL(__imp__sub_83110BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32364
	ctx.r4.s64 = ctx.r11.s64 + -32364;
	// bl 0x82429b48
	ctx.lr = 0x83110BD4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5116, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110BF0"))) PPC_WEAK_FUNC(sub_83110BF0);
PPC_FUNC_IMPL(__imp__sub_83110BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32360
	ctx.r4.s64 = ctx.r11.s64 + -32360;
	// bl 0x82429b48
	ctx.lr = 0x83110C0C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-112(r11)
	PPC_STORE_U8(ctx.r11.u32 + -112, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110C28"))) PPC_WEAK_FUNC(sub_83110C28);
PPC_FUNC_IMPL(__imp__sub_83110C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32356
	ctx.r4.s64 = ctx.r11.s64 + -32356;
	// bl 0x82429b48
	ctx.lr = 0x83110C44;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83110C60"))) PPC_WEAK_FUNC(sub_83110C60);
PPC_FUNC_IMPL(__imp__sub_83110C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32352
	ctx.r4.s64 = ctx.r11.s64 + -32352;
	// bl 0x82429b48
	ctx.lr = 0x83110C7C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1071(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1071, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110C98"))) PPC_WEAK_FUNC(sub_83110C98);
PPC_FUNC_IMPL(__imp__sub_83110C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32348
	ctx.r4.s64 = ctx.r11.s64 + -32348;
	// bl 0x82429b48
	ctx.lr = 0x83110CB4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4454(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4454, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110CD0"))) PPC_WEAK_FUNC(sub_83110CD0);
PPC_FUNC_IMPL(__imp__sub_83110CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32344
	ctx.r4.s64 = ctx.r11.s64 + -32344;
	// bl 0x82429b48
	ctx.lr = 0x83110CEC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-50(r11)
	PPC_STORE_U8(ctx.r11.u32 + -50, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110D08"))) PPC_WEAK_FUNC(sub_83110D08);
PPC_FUNC_IMPL(__imp__sub_83110D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32340
	ctx.r4.s64 = ctx.r11.s64 + -32340;
	// bl 0x82429b48
	ctx.lr = 0x83110D24;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5104, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110D40"))) PPC_WEAK_FUNC(sub_83110D40);
PPC_FUNC_IMPL(__imp__sub_83110D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32336
	ctx.r4.s64 = ctx.r11.s64 + -32336;
	// bl 0x82429b48
	ctx.lr = 0x83110D5C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5046(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5046, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110D78"))) PPC_WEAK_FUNC(sub_83110D78);
PPC_FUNC_IMPL(__imp__sub_83110D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32332
	ctx.r4.s64 = ctx.r11.s64 + -32332;
	// bl 0x82429b48
	ctx.lr = 0x83110D94;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2029(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2029, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110DB0"))) PPC_WEAK_FUNC(sub_83110DB0);
PPC_FUNC_IMPL(__imp__sub_83110DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32328
	ctx.r4.s64 = ctx.r11.s64 + -32328;
	// bl 0x82429b48
	ctx.lr = 0x83110DCC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2944(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2944, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110DE8"))) PPC_WEAK_FUNC(sub_83110DE8);
PPC_FUNC_IMPL(__imp__sub_83110DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32324
	ctx.r4.s64 = ctx.r11.s64 + -32324;
	// bl 0x82429b48
	ctx.lr = 0x83110E04;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,106(r11)
	PPC_STORE_U8(ctx.r11.u32 + 106, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110E20"))) PPC_WEAK_FUNC(sub_83110E20);
PPC_FUNC_IMPL(__imp__sub_83110E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32320
	ctx.r4.s64 = ctx.r11.s64 + -32320;
	// bl 0x82429b48
	ctx.lr = 0x83110E3C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4257(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4257, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110E58"))) PPC_WEAK_FUNC(sub_83110E58);
PPC_FUNC_IMPL(__imp__sub_83110E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32316
	ctx.r4.s64 = ctx.r11.s64 + -32316;
	// bl 0x82429b48
	ctx.lr = 0x83110E74;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83110E90"))) PPC_WEAK_FUNC(sub_83110E90);
PPC_FUNC_IMPL(__imp__sub_83110E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32312
	ctx.r4.s64 = ctx.r11.s64 + -32312;
	// bl 0x82429b48
	ctx.lr = 0x83110EAC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,870(r11)
	PPC_STORE_U8(ctx.r11.u32 + 870, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110EC8"))) PPC_WEAK_FUNC(sub_83110EC8);
PPC_FUNC_IMPL(__imp__sub_83110EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32308
	ctx.r4.s64 = ctx.r11.s64 + -32308;
	// bl 0x82429b48
	ctx.lr = 0x83110EE4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2859(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2859, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110F00"))) PPC_WEAK_FUNC(sub_83110F00);
PPC_FUNC_IMPL(__imp__sub_83110F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32304
	ctx.r4.s64 = ctx.r11.s64 + -32304;
	// bl 0x82429b48
	ctx.lr = 0x83110F1C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4894(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4894, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110F38"))) PPC_WEAK_FUNC(sub_83110F38);
PPC_FUNC_IMPL(__imp__sub_83110F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32300
	ctx.r4.s64 = ctx.r11.s64 + -32300;
	// bl 0x82429b48
	ctx.lr = 0x83110F54;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83110F70"))) PPC_WEAK_FUNC(sub_83110F70);
PPC_FUNC_IMPL(__imp__sub_83110F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32296
	ctx.r4.s64 = ctx.r11.s64 + -32296;
	// bl 0x82429b48
	ctx.lr = 0x83110F8C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,78(r11)
	PPC_STORE_U8(ctx.r11.u32 + 78, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110FA8"))) PPC_WEAK_FUNC(sub_83110FA8);
PPC_FUNC_IMPL(__imp__sub_83110FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32292
	ctx.r4.s64 = ctx.r11.s64 + -32292;
	// bl 0x82429b48
	ctx.lr = 0x83110FC4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2316(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2316, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83110FE0"))) PPC_WEAK_FUNC(sub_83110FE0);
PPC_FUNC_IMPL(__imp__sub_83110FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32288
	ctx.r4.s64 = ctx.r11.s64 + -32288;
	// bl 0x82429b48
	ctx.lr = 0x83110FFC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4016(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4016, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111018"))) PPC_WEAK_FUNC(sub_83111018);
PPC_FUNC_IMPL(__imp__sub_83111018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32284
	ctx.r4.s64 = ctx.r11.s64 + -32284;
	// bl 0x82429b48
	ctx.lr = 0x83111034;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,189(r11)
	PPC_STORE_U8(ctx.r11.u32 + 189, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111050"))) PPC_WEAK_FUNC(sub_83111050);
PPC_FUNC_IMPL(__imp__sub_83111050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32280
	ctx.r4.s64 = ctx.r11.s64 + -32280;
	// bl 0x82429b48
	ctx.lr = 0x8311106C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3240(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3240, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111088"))) PPC_WEAK_FUNC(sub_83111088);
PPC_FUNC_IMPL(__imp__sub_83111088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32276
	ctx.r4.s64 = ctx.r11.s64 + -32276;
	// bl 0x82429b48
	ctx.lr = 0x831110A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2483(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2483, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831110C0"))) PPC_WEAK_FUNC(sub_831110C0);
PPC_FUNC_IMPL(__imp__sub_831110C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32272
	ctx.r4.s64 = ctx.r11.s64 + -32272;
	// bl 0x82429b48
	ctx.lr = 0x831110DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_831110F8"))) PPC_WEAK_FUNC(sub_831110F8);
PPC_FUNC_IMPL(__imp__sub_831110F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32268
	ctx.r4.s64 = ctx.r11.s64 + -32268;
	// bl 0x82429b48
	ctx.lr = 0x83111114;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4944(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4944, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111130"))) PPC_WEAK_FUNC(sub_83111130);
PPC_FUNC_IMPL(__imp__sub_83111130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32264
	ctx.r4.s64 = ctx.r11.s64 + -32264;
	// bl 0x82429b48
	ctx.lr = 0x8311114C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3262(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3262, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111168"))) PPC_WEAK_FUNC(sub_83111168);
PPC_FUNC_IMPL(__imp__sub_83111168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32260
	ctx.r4.s64 = ctx.r11.s64 + -32260;
	// bl 0x82429b48
	ctx.lr = 0x83111184;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-126(r11)
	PPC_STORE_U8(ctx.r11.u32 + -126, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831111A0"))) PPC_WEAK_FUNC(sub_831111A0);
PPC_FUNC_IMPL(__imp__sub_831111A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32256
	ctx.r4.s64 = ctx.r11.s64 + -32256;
	// bl 0x82429b48
	ctx.lr = 0x831111BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4053(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4053, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831111D8"))) PPC_WEAK_FUNC(sub_831111D8);
PPC_FUNC_IMPL(__imp__sub_831111D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32252
	ctx.r4.s64 = ctx.r11.s64 + -32252;
	// bl 0x82429b48
	ctx.lr = 0x831111F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2030(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2030, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111210"))) PPC_WEAK_FUNC(sub_83111210);
PPC_FUNC_IMPL(__imp__sub_83111210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32248
	ctx.r4.s64 = ctx.r11.s64 + -32248;
	// bl 0x82429b48
	ctx.lr = 0x8311122C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4169(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4169, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111248"))) PPC_WEAK_FUNC(sub_83111248);
PPC_FUNC_IMPL(__imp__sub_83111248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32244
	ctx.r4.s64 = ctx.r11.s64 + -32244;
	// bl 0x82429b48
	ctx.lr = 0x83111264;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2189(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2189, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111280"))) PPC_WEAK_FUNC(sub_83111280);
PPC_FUNC_IMPL(__imp__sub_83111280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32240
	ctx.r4.s64 = ctx.r11.s64 + -32240;
	// bl 0x82429b48
	ctx.lr = 0x8311129C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1846(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1846, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831112B8"))) PPC_WEAK_FUNC(sub_831112B8);
PPC_FUNC_IMPL(__imp__sub_831112B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32236
	ctx.r4.s64 = ctx.r11.s64 + -32236;
	// bl 0x82429b48
	ctx.lr = 0x831112D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_831112F0"))) PPC_WEAK_FUNC(sub_831112F0);
PPC_FUNC_IMPL(__imp__sub_831112F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32232
	ctx.r4.s64 = ctx.r11.s64 + -32232;
	// bl 0x82429b48
	ctx.lr = 0x8311130C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83111328"))) PPC_WEAK_FUNC(sub_83111328);
PPC_FUNC_IMPL(__imp__sub_83111328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32228
	ctx.r4.s64 = ctx.r11.s64 + -32228;
	// bl 0x82429b48
	ctx.lr = 0x83111344;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4019(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4019, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111360"))) PPC_WEAK_FUNC(sub_83111360);
PPC_FUNC_IMPL(__imp__sub_83111360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32224
	ctx.r4.s64 = ctx.r11.s64 + -32224;
	// bl 0x82429b48
	ctx.lr = 0x8311137C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3910(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3910, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111398"))) PPC_WEAK_FUNC(sub_83111398);
PPC_FUNC_IMPL(__imp__sub_83111398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32220
	ctx.r4.s64 = ctx.r11.s64 + -32220;
	// bl 0x82429b48
	ctx.lr = 0x831113B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4313(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4313, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831113D0"))) PPC_WEAK_FUNC(sub_831113D0);
PPC_FUNC_IMPL(__imp__sub_831113D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32216
	ctx.r4.s64 = ctx.r11.s64 + -32216;
	// bl 0x82429b48
	ctx.lr = 0x831113EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2868(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2868, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111408"))) PPC_WEAK_FUNC(sub_83111408);
PPC_FUNC_IMPL(__imp__sub_83111408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32212
	ctx.r4.s64 = ctx.r11.s64 + -32212;
	// bl 0x82429b48
	ctx.lr = 0x83111424;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,868(r11)
	PPC_STORE_U8(ctx.r11.u32 + 868, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111440"))) PPC_WEAK_FUNC(sub_83111440);
PPC_FUNC_IMPL(__imp__sub_83111440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32208
	ctx.r4.s64 = ctx.r11.s64 + -32208;
	// bl 0x82429b48
	ctx.lr = 0x8311145C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4259(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4259, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111478"))) PPC_WEAK_FUNC(sub_83111478);
PPC_FUNC_IMPL(__imp__sub_83111478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32204
	ctx.r4.s64 = ctx.r11.s64 + -32204;
	// bl 0x82429b48
	ctx.lr = 0x83111494;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-51(r11)
	PPC_STORE_U8(ctx.r11.u32 + -51, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831114B0"))) PPC_WEAK_FUNC(sub_831114B0);
PPC_FUNC_IMPL(__imp__sub_831114B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32200
	ctx.r4.s64 = ctx.r11.s64 + -32200;
	// bl 0x82429b48
	ctx.lr = 0x831114CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1572(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1572, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831114E8"))) PPC_WEAK_FUNC(sub_831114E8);
PPC_FUNC_IMPL(__imp__sub_831114E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32196
	ctx.r4.s64 = ctx.r11.s64 + -32196;
	// bl 0x82429b48
	ctx.lr = 0x83111504;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3785(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3785, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111520"))) PPC_WEAK_FUNC(sub_83111520);
PPC_FUNC_IMPL(__imp__sub_83111520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32192
	ctx.r4.s64 = ctx.r11.s64 + -32192;
	// bl 0x82429b48
	ctx.lr = 0x8311153C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1385(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1385, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111558"))) PPC_WEAK_FUNC(sub_83111558);
PPC_FUNC_IMPL(__imp__sub_83111558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32188
	ctx.r4.s64 = ctx.r11.s64 + -32188;
	// bl 0x82429b48
	ctx.lr = 0x83111574;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83111590"))) PPC_WEAK_FUNC(sub_83111590);
PPC_FUNC_IMPL(__imp__sub_83111590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32184
	ctx.r4.s64 = ctx.r11.s64 + -32184;
	// bl 0x82429b48
	ctx.lr = 0x831115AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,989(r11)
	PPC_STORE_U8(ctx.r11.u32 + 989, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831115C8"))) PPC_WEAK_FUNC(sub_831115C8);
PPC_FUNC_IMPL(__imp__sub_831115C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32180
	ctx.r4.s64 = ctx.r11.s64 + -32180;
	// bl 0x82429b48
	ctx.lr = 0x831115E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4227, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111600"))) PPC_WEAK_FUNC(sub_83111600);
PPC_FUNC_IMPL(__imp__sub_83111600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32176
	ctx.r4.s64 = ctx.r11.s64 + -32176;
	// bl 0x82429b48
	ctx.lr = 0x8311161C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111638"))) PPC_WEAK_FUNC(sub_83111638);
PPC_FUNC_IMPL(__imp__sub_83111638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32172
	ctx.r4.s64 = ctx.r11.s64 + -32172;
	// bl 0x82429b48
	ctx.lr = 0x83111654;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1146(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1146, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111670"))) PPC_WEAK_FUNC(sub_83111670);
PPC_FUNC_IMPL(__imp__sub_83111670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32168
	ctx.r4.s64 = ctx.r11.s64 + -32168;
	// bl 0x82429b48
	ctx.lr = 0x8311168C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1118(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1118, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831116A8"))) PPC_WEAK_FUNC(sub_831116A8);
PPC_FUNC_IMPL(__imp__sub_831116A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32164
	ctx.r4.s64 = ctx.r11.s64 + -32164;
	// bl 0x82429b48
	ctx.lr = 0x831116C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4455(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4455, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831116E0"))) PPC_WEAK_FUNC(sub_831116E0);
PPC_FUNC_IMPL(__imp__sub_831116E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32160
	ctx.r4.s64 = ctx.r11.s64 + -32160;
	// bl 0x82429b48
	ctx.lr = 0x831116FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3722(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3722, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111718"))) PPC_WEAK_FUNC(sub_83111718);
PPC_FUNC_IMPL(__imp__sub_83111718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32156
	ctx.r4.s64 = ctx.r11.s64 + -32156;
	// bl 0x82429b48
	ctx.lr = 0x83111734;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,535(r11)
	PPC_STORE_U8(ctx.r11.u32 + 535, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111750"))) PPC_WEAK_FUNC(sub_83111750);
PPC_FUNC_IMPL(__imp__sub_83111750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32152
	ctx.r4.s64 = ctx.r11.s64 + -32152;
	// bl 0x82429b48
	ctx.lr = 0x8311176C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,991(r11)
	PPC_STORE_U8(ctx.r11.u32 + 991, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111788"))) PPC_WEAK_FUNC(sub_83111788);
PPC_FUNC_IMPL(__imp__sub_83111788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32148
	ctx.r4.s64 = ctx.r11.s64 + -32148;
	// bl 0x82429b48
	ctx.lr = 0x831117A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831117C0"))) PPC_WEAK_FUNC(sub_831117C0);
PPC_FUNC_IMPL(__imp__sub_831117C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32144
	ctx.r4.s64 = ctx.r11.s64 + -32144;
	// bl 0x82429b48
	ctx.lr = 0x831117DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4170(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4170, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831117F8"))) PPC_WEAK_FUNC(sub_831117F8);
PPC_FUNC_IMPL(__imp__sub_831117F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32140
	ctx.r4.s64 = ctx.r11.s64 + -32140;
	// bl 0x82429b48
	ctx.lr = 0x83111814;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,125(r11)
	PPC_STORE_U8(ctx.r11.u32 + 125, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111830"))) PPC_WEAK_FUNC(sub_83111830);
PPC_FUNC_IMPL(__imp__sub_83111830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32136
	ctx.r4.s64 = ctx.r11.s64 + -32136;
	// bl 0x82429b48
	ctx.lr = 0x8311184C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2771(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2771, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111868"))) PPC_WEAK_FUNC(sub_83111868);
PPC_FUNC_IMPL(__imp__sub_83111868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32132
	ctx.r4.s64 = ctx.r11.s64 + -32132;
	// bl 0x82429b48
	ctx.lr = 0x83111884;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,898(r11)
	PPC_STORE_U8(ctx.r11.u32 + 898, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831118A0"))) PPC_WEAK_FUNC(sub_831118A0);
PPC_FUNC_IMPL(__imp__sub_831118A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32128
	ctx.r4.s64 = ctx.r11.s64 + -32128;
	// bl 0x82429b48
	ctx.lr = 0x831118BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,77(r11)
	PPC_STORE_U8(ctx.r11.u32 + 77, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831118D8"))) PPC_WEAK_FUNC(sub_831118D8);
PPC_FUNC_IMPL(__imp__sub_831118D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32124
	ctx.r4.s64 = ctx.r11.s64 + -32124;
	// bl 0x82429b48
	ctx.lr = 0x831118F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,896(r11)
	PPC_STORE_U8(ctx.r11.u32 + 896, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111910"))) PPC_WEAK_FUNC(sub_83111910);
PPC_FUNC_IMPL(__imp__sub_83111910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32120
	ctx.r4.s64 = ctx.r11.s64 + -32120;
	// bl 0x82429b48
	ctx.lr = 0x8311192C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5044(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5044, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111948"))) PPC_WEAK_FUNC(sub_83111948);
PPC_FUNC_IMPL(__imp__sub_83111948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32116
	ctx.r4.s64 = ctx.r11.s64 + -32116;
	// bl 0x82429b48
	ctx.lr = 0x83111964;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4456(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4456, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111980"))) PPC_WEAK_FUNC(sub_83111980);
PPC_FUNC_IMPL(__imp__sub_83111980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32112
	ctx.r4.s64 = ctx.r11.s64 + -32112;
	// bl 0x82429b48
	ctx.lr = 0x8311199C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4759(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4759, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831119B8"))) PPC_WEAK_FUNC(sub_831119B8);
PPC_FUNC_IMPL(__imp__sub_831119B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32108
	ctx.r4.s64 = ctx.r11.s64 + -32108;
	// bl 0x82429b48
	ctx.lr = 0x831119D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5076(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5076, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831119F0"))) PPC_WEAK_FUNC(sub_831119F0);
PPC_FUNC_IMPL(__imp__sub_831119F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32104
	ctx.r4.s64 = ctx.r11.s64 + -32104;
	// bl 0x82429b48
	ctx.lr = 0x83111A0C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2990(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2990, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111A28"))) PPC_WEAK_FUNC(sub_83111A28);
PPC_FUNC_IMPL(__imp__sub_83111A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32100
	ctx.r4.s64 = ctx.r11.s64 + -32100;
	// bl 0x82429b48
	ctx.lr = 0x83111A44;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4712(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4712, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111A60"))) PPC_WEAK_FUNC(sub_83111A60);
PPC_FUNC_IMPL(__imp__sub_83111A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32096
	ctx.r4.s64 = ctx.r11.s64 + -32096;
	// bl 0x82429b48
	ctx.lr = 0x83111A7C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-171(r11)
	PPC_STORE_U8(ctx.r11.u32 + -171, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111A98"))) PPC_WEAK_FUNC(sub_83111A98);
PPC_FUNC_IMPL(__imp__sub_83111A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32092
	ctx.r4.s64 = ctx.r11.s64 + -32092;
	// bl 0x82429b48
	ctx.lr = 0x83111AB4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3839(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3839, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111AD0"))) PPC_WEAK_FUNC(sub_83111AD0);
PPC_FUNC_IMPL(__imp__sub_83111AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32088
	ctx.r4.s64 = ctx.r11.s64 + -32088;
	// bl 0x82429b48
	ctx.lr = 0x83111AEC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4576, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111B08"))) PPC_WEAK_FUNC(sub_83111B08);
PPC_FUNC_IMPL(__imp__sub_83111B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32084
	ctx.r4.s64 = ctx.r11.s64 + -32084;
	// bl 0x82429b48
	ctx.lr = 0x83111B24;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3688(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3688, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111B40"))) PPC_WEAK_FUNC(sub_83111B40);
PPC_FUNC_IMPL(__imp__sub_83111B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32080
	ctx.r4.s64 = ctx.r11.s64 + -32080;
	// bl 0x82429b48
	ctx.lr = 0x83111B5C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1349(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1349, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111B78"))) PPC_WEAK_FUNC(sub_83111B78);
PPC_FUNC_IMPL(__imp__sub_83111B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32076
	ctx.r4.s64 = ctx.r11.s64 + -32076;
	// bl 0x82429b48
	ctx.lr = 0x83111B94;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,381(r11)
	PPC_STORE_U8(ctx.r11.u32 + 381, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111BB0"))) PPC_WEAK_FUNC(sub_83111BB0);
PPC_FUNC_IMPL(__imp__sub_83111BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32072
	ctx.r4.s64 = ctx.r11.s64 + -32072;
	// bl 0x82429b48
	ctx.lr = 0x83111BCC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83111BE8"))) PPC_WEAK_FUNC(sub_83111BE8);
PPC_FUNC_IMPL(__imp__sub_83111BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32068
	ctx.r4.s64 = ctx.r11.s64 + -32068;
	// bl 0x82429b48
	ctx.lr = 0x83111C04;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3109(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3109, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111C20"))) PPC_WEAK_FUNC(sub_83111C20);
PPC_FUNC_IMPL(__imp__sub_83111C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32064
	ctx.r4.s64 = ctx.r11.s64 + -32064;
	// bl 0x82429b48
	ctx.lr = 0x83111C3C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2410(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2410, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111C58"))) PPC_WEAK_FUNC(sub_83111C58);
PPC_FUNC_IMPL(__imp__sub_83111C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32060
	ctx.r4.s64 = ctx.r11.s64 + -32060;
	// bl 0x82429b48
	ctx.lr = 0x83111C74;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5105(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5105, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111C90"))) PPC_WEAK_FUNC(sub_83111C90);
PPC_FUNC_IMPL(__imp__sub_83111C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32056
	ctx.r4.s64 = ctx.r11.s64 + -32056;
	// bl 0x82429b48
	ctx.lr = 0x83111CAC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,212(r11)
	PPC_STORE_U8(ctx.r11.u32 + 212, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111CC8"))) PPC_WEAK_FUNC(sub_83111CC8);
PPC_FUNC_IMPL(__imp__sub_83111CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32052
	ctx.r4.s64 = ctx.r11.s64 + -32052;
	// bl 0x82429b48
	ctx.lr = 0x83111CE4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83111D00"))) PPC_WEAK_FUNC(sub_83111D00);
PPC_FUNC_IMPL(__imp__sub_83111D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32048
	ctx.r4.s64 = ctx.r11.s64 + -32048;
	// bl 0x82429b48
	ctx.lr = 0x83111D1C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1409(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1409, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111D38"))) PPC_WEAK_FUNC(sub_83111D38);
PPC_FUNC_IMPL(__imp__sub_83111D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32044
	ctx.r4.s64 = ctx.r11.s64 + -32044;
	// bl 0x82429b48
	ctx.lr = 0x83111D54;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2707(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2707, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111D70"))) PPC_WEAK_FUNC(sub_83111D70);
PPC_FUNC_IMPL(__imp__sub_83111D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32040
	ctx.r4.s64 = ctx.r11.s64 + -32040;
	// bl 0x82429b48
	ctx.lr = 0x83111D8C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4724(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4724, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111DA8"))) PPC_WEAK_FUNC(sub_83111DA8);
PPC_FUNC_IMPL(__imp__sub_83111DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32036
	ctx.r4.s64 = ctx.r11.s64 + -32036;
	// bl 0x82429b48
	ctx.lr = 0x83111DC4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,478(r11)
	PPC_STORE_U8(ctx.r11.u32 + 478, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111DE0"))) PPC_WEAK_FUNC(sub_83111DE0);
PPC_FUNC_IMPL(__imp__sub_83111DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32032
	ctx.r4.s64 = ctx.r11.s64 + -32032;
	// bl 0x82429b48
	ctx.lr = 0x83111DFC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1354(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1354, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111E18"))) PPC_WEAK_FUNC(sub_83111E18);
PPC_FUNC_IMPL(__imp__sub_83111E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32028
	ctx.r4.s64 = ctx.r11.s64 + -32028;
	// bl 0x82429b48
	ctx.lr = 0x83111E34;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4498(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4498, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111E50"))) PPC_WEAK_FUNC(sub_83111E50);
PPC_FUNC_IMPL(__imp__sub_83111E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32024
	ctx.r4.s64 = ctx.r11.s64 + -32024;
	// bl 0x82429b48
	ctx.lr = 0x83111E6C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2669(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2669, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111E88"))) PPC_WEAK_FUNC(sub_83111E88);
PPC_FUNC_IMPL(__imp__sub_83111E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32020
	ctx.r4.s64 = ctx.r11.s64 + -32020;
	// bl 0x82429b48
	ctx.lr = 0x83111EA4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-146(r11)
	PPC_STORE_U8(ctx.r11.u32 + -146, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111EC0"))) PPC_WEAK_FUNC(sub_83111EC0);
PPC_FUNC_IMPL(__imp__sub_83111EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32016
	ctx.r4.s64 = ctx.r11.s64 + -32016;
	// bl 0x82429b48
	ctx.lr = 0x83111EDC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3891(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3891, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111EF8"))) PPC_WEAK_FUNC(sub_83111EF8);
PPC_FUNC_IMPL(__imp__sub_83111EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32012
	ctx.r4.s64 = ctx.r11.s64 + -32012;
	// bl 0x82429b48
	ctx.lr = 0x83111F14;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-114(r11)
	PPC_STORE_U8(ctx.r11.u32 + -114, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111F30"))) PPC_WEAK_FUNC(sub_83111F30);
PPC_FUNC_IMPL(__imp__sub_83111F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32008
	ctx.r4.s64 = ctx.r11.s64 + -32008;
	// bl 0x82429b48
	ctx.lr = 0x83111F4C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1826(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1826, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111F68"))) PPC_WEAK_FUNC(sub_83111F68);
PPC_FUNC_IMPL(__imp__sub_83111F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32004
	ctx.r4.s64 = ctx.r11.s64 + -32004;
	// bl 0x82429b48
	ctx.lr = 0x83111F84;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83111FA0"))) PPC_WEAK_FUNC(sub_83111FA0);
PPC_FUNC_IMPL(__imp__sub_83111FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32000
	ctx.r4.s64 = ctx.r11.s64 + -32000;
	// bl 0x82429b48
	ctx.lr = 0x83111FBC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4123(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4123, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83111FD8"))) PPC_WEAK_FUNC(sub_83111FD8);
PPC_FUNC_IMPL(__imp__sub_83111FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31996
	ctx.r4.s64 = ctx.r11.s64 + -31996;
	// bl 0x82429b48
	ctx.lr = 0x83111FF4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-52(r11)
	PPC_STORE_U8(ctx.r11.u32 + -52, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112010"))) PPC_WEAK_FUNC(sub_83112010);
PPC_FUNC_IMPL(__imp__sub_83112010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31992
	ctx.r4.s64 = ctx.r11.s64 + -31992;
	// bl 0x82429b48
	ctx.lr = 0x8311202C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,633(r11)
	PPC_STORE_U8(ctx.r11.u32 + 633, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112048"))) PPC_WEAK_FUNC(sub_83112048);
PPC_FUNC_IMPL(__imp__sub_83112048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31988
	ctx.r4.s64 = ctx.r11.s64 + -31988;
	// bl 0x82429b48
	ctx.lr = 0x83112064;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2071(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2071, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112080"))) PPC_WEAK_FUNC(sub_83112080);
PPC_FUNC_IMPL(__imp__sub_83112080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31984
	ctx.r4.s64 = ctx.r11.s64 + -31984;
	// bl 0x82429b48
	ctx.lr = 0x8311209C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2947(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2947, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831120B8"))) PPC_WEAK_FUNC(sub_831120B8);
PPC_FUNC_IMPL(__imp__sub_831120B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31980
	ctx.r4.s64 = ctx.r11.s64 + -31980;
	// bl 0x82429b48
	ctx.lr = 0x831120D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3149(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3149, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831120F0"))) PPC_WEAK_FUNC(sub_831120F0);
PPC_FUNC_IMPL(__imp__sub_831120F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31976
	ctx.r4.s64 = ctx.r11.s64 + -31976;
	// bl 0x82429b48
	ctx.lr = 0x8311210C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-116(r11)
	PPC_STORE_U8(ctx.r11.u32 + -116, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112128"))) PPC_WEAK_FUNC(sub_83112128);
PPC_FUNC_IMPL(__imp__sub_83112128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31972
	ctx.r4.s64 = ctx.r11.s64 + -31972;
	// bl 0x82429b48
	ctx.lr = 0x83112144;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1429(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1429, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112160"))) PPC_WEAK_FUNC(sub_83112160);
PPC_FUNC_IMPL(__imp__sub_83112160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31968
	ctx.r4.s64 = ctx.r11.s64 + -31968;
	// bl 0x82429b48
	ctx.lr = 0x8311217C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2532(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2532, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112198"))) PPC_WEAK_FUNC(sub_83112198);
PPC_FUNC_IMPL(__imp__sub_83112198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31964
	ctx.r4.s64 = ctx.r11.s64 + -31964;
	// bl 0x82429b48
	ctx.lr = 0x831121B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4382(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4382, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831121D0"))) PPC_WEAK_FUNC(sub_831121D0);
PPC_FUNC_IMPL(__imp__sub_831121D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31960
	ctx.r4.s64 = ctx.r11.s64 + -31960;
	// bl 0x82429b48
	ctx.lr = 0x831121EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1497(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1497, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112208"))) PPC_WEAK_FUNC(sub_83112208);
PPC_FUNC_IMPL(__imp__sub_83112208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31956
	ctx.r4.s64 = ctx.r11.s64 + -31956;
	// bl 0x82429b48
	ctx.lr = 0x83112224;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5088(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5088, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112240"))) PPC_WEAK_FUNC(sub_83112240);
PPC_FUNC_IMPL(__imp__sub_83112240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31952
	ctx.r4.s64 = ctx.r11.s64 + -31952;
	// bl 0x82429b48
	ctx.lr = 0x8311225C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1346(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1346, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112278"))) PPC_WEAK_FUNC(sub_83112278);
PPC_FUNC_IMPL(__imp__sub_83112278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31948
	ctx.r4.s64 = ctx.r11.s64 + -31948;
	// bl 0x82429b48
	ctx.lr = 0x83112294;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4457(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4457, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831122B0"))) PPC_WEAK_FUNC(sub_831122B0);
PPC_FUNC_IMPL(__imp__sub_831122B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31944
	ctx.r4.s64 = ctx.r11.s64 + -31944;
	// bl 0x82429b48
	ctx.lr = 0x831122CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4392(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4392, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831122E8"))) PPC_WEAK_FUNC(sub_831122E8);
PPC_FUNC_IMPL(__imp__sub_831122E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31940
	ctx.r4.s64 = ctx.r11.s64 + -31940;
	// bl 0x82429b48
	ctx.lr = 0x83112304;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2335(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2335, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112320"))) PPC_WEAK_FUNC(sub_83112320);
PPC_FUNC_IMPL(__imp__sub_83112320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31936
	ctx.r4.s64 = ctx.r11.s64 + -31936;
	// bl 0x82429b48
	ctx.lr = 0x8311233C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83112358"))) PPC_WEAK_FUNC(sub_83112358);
PPC_FUNC_IMPL(__imp__sub_83112358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31932
	ctx.r4.s64 = ctx.r11.s64 + -31932;
	// bl 0x82429b48
	ctx.lr = 0x83112374;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-128(r11)
	PPC_STORE_U8(ctx.r11.u32 + -128, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112390"))) PPC_WEAK_FUNC(sub_83112390);
PPC_FUNC_IMPL(__imp__sub_83112390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31928
	ctx.r4.s64 = ctx.r11.s64 + -31928;
	// bl 0x82429b48
	ctx.lr = 0x831123AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-125(r11)
	PPC_STORE_U8(ctx.r11.u32 + -125, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831123C8"))) PPC_WEAK_FUNC(sub_831123C8);
PPC_FUNC_IMPL(__imp__sub_831123C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31924
	ctx.r4.s64 = ctx.r11.s64 + -31924;
	// bl 0x82429b48
	ctx.lr = 0x831123E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2190(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2190, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112400"))) PPC_WEAK_FUNC(sub_83112400);
PPC_FUNC_IMPL(__imp__sub_83112400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31920
	ctx.r4.s64 = ctx.r11.s64 + -31920;
	// bl 0x82429b48
	ctx.lr = 0x8311241C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4537(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4537, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112438"))) PPC_WEAK_FUNC(sub_83112438);
PPC_FUNC_IMPL(__imp__sub_83112438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31916
	ctx.r4.s64 = ctx.r11.s64 + -31916;
	// bl 0x82429b48
	ctx.lr = 0x83112454;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83112470"))) PPC_WEAK_FUNC(sub_83112470);
PPC_FUNC_IMPL(__imp__sub_83112470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31912
	ctx.r4.s64 = ctx.r11.s64 + -31912;
	// bl 0x82429b48
	ctx.lr = 0x8311248C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3700(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3700, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831124A8"))) PPC_WEAK_FUNC(sub_831124A8);
PPC_FUNC_IMPL(__imp__sub_831124A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31908
	ctx.r4.s64 = ctx.r11.s64 + -31908;
	// bl 0x82429b48
	ctx.lr = 0x831124C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3512(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3512, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831124E0"))) PPC_WEAK_FUNC(sub_831124E0);
PPC_FUNC_IMPL(__imp__sub_831124E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31904
	ctx.r4.s64 = ctx.r11.s64 + -31904;
	// bl 0x82429b48
	ctx.lr = 0x831124FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,897(r11)
	PPC_STORE_U8(ctx.r11.u32 + 897, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112518"))) PPC_WEAK_FUNC(sub_83112518);
PPC_FUNC_IMPL(__imp__sub_83112518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31900
	ctx.r4.s64 = ctx.r11.s64 + -31900;
	// bl 0x82429b48
	ctx.lr = 0x83112534;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2645(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2645, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112550"))) PPC_WEAK_FUNC(sub_83112550);
PPC_FUNC_IMPL(__imp__sub_83112550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31896
	ctx.r4.s64 = ctx.r11.s64 + -31896;
	// bl 0x82429b48
	ctx.lr = 0x8311256C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4173(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4173, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112588"))) PPC_WEAK_FUNC(sub_83112588);
PPC_FUNC_IMPL(__imp__sub_83112588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31892
	ctx.r4.s64 = ctx.r11.s64 + -31892;
	// bl 0x82429b48
	ctx.lr = 0x831125A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2533(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2533, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831125C0"))) PPC_WEAK_FUNC(sub_831125C0);
PPC_FUNC_IMPL(__imp__sub_831125C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31888
	ctx.r4.s64 = ctx.r11.s64 + -31888;
	// bl 0x82429b48
	ctx.lr = 0x831125DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_831125F8"))) PPC_WEAK_FUNC(sub_831125F8);
PPC_FUNC_IMPL(__imp__sub_831125F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31884
	ctx.r4.s64 = ctx.r11.s64 + -31884;
	// bl 0x82429b48
	ctx.lr = 0x83112614;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83112630"))) PPC_WEAK_FUNC(sub_83112630);
PPC_FUNC_IMPL(__imp__sub_83112630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31880
	ctx.r4.s64 = ctx.r11.s64 + -31880;
	// bl 0x82429b48
	ctx.lr = 0x8311264C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1347(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1347, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112668"))) PPC_WEAK_FUNC(sub_83112668);
PPC_FUNC_IMPL(__imp__sub_83112668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31876
	ctx.r4.s64 = ctx.r11.s64 + -31876;
	// bl 0x82429b48
	ctx.lr = 0x83112684;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4124(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4124, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831126A0"))) PPC_WEAK_FUNC(sub_831126A0);
PPC_FUNC_IMPL(__imp__sub_831126A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31872
	ctx.r4.s64 = ctx.r11.s64 + -31872;
	// bl 0x82429b48
	ctx.lr = 0x831126BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2281(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2281, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831126D8"))) PPC_WEAK_FUNC(sub_831126D8);
PPC_FUNC_IMPL(__imp__sub_831126D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31868
	ctx.r4.s64 = ctx.r11.s64 + -31868;
	// bl 0x82429b48
	ctx.lr = 0x831126F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2748(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2748, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112710"))) PPC_WEAK_FUNC(sub_83112710);
PPC_FUNC_IMPL(__imp__sub_83112710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31864
	ctx.r4.s64 = ctx.r11.s64 + -31864;
	// bl 0x82429b48
	ctx.lr = 0x8311272C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83112748"))) PPC_WEAK_FUNC(sub_83112748);
PPC_FUNC_IMPL(__imp__sub_83112748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31860
	ctx.r4.s64 = ctx.r11.s64 + -31860;
	// bl 0x82429b48
	ctx.lr = 0x83112764;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-111(r11)
	PPC_STORE_U8(ctx.r11.u32 + -111, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112780"))) PPC_WEAK_FUNC(sub_83112780);
PPC_FUNC_IMPL(__imp__sub_83112780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31856
	ctx.r4.s64 = ctx.r11.s64 + -31856;
	// bl 0x82429b48
	ctx.lr = 0x8311279C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2025(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2025, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831127B8"))) PPC_WEAK_FUNC(sub_831127B8);
PPC_FUNC_IMPL(__imp__sub_831127B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31852
	ctx.r4.s64 = ctx.r11.s64 + -31852;
	// bl 0x82429b48
	ctx.lr = 0x831127D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2552(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2552, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831127F0"))) PPC_WEAK_FUNC(sub_831127F0);
PPC_FUNC_IMPL(__imp__sub_831127F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31848
	ctx.r4.s64 = ctx.r11.s64 + -31848;
	// bl 0x82429b48
	ctx.lr = 0x8311280C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1708(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1708, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112828"))) PPC_WEAK_FUNC(sub_83112828);
PPC_FUNC_IMPL(__imp__sub_83112828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31844
	ctx.r4.s64 = ctx.r11.s64 + -31844;
	// bl 0x82429b48
	ctx.lr = 0x83112844;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2534(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2534, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112860"))) PPC_WEAK_FUNC(sub_83112860);
PPC_FUNC_IMPL(__imp__sub_83112860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31840
	ctx.r4.s64 = ctx.r11.s64 + -31840;
	// bl 0x82429b48
	ctx.lr = 0x8311287C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3826(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3826, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112898"))) PPC_WEAK_FUNC(sub_83112898);
PPC_FUNC_IMPL(__imp__sub_83112898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31836
	ctx.r4.s64 = ctx.r11.s64 + -31836;
	// bl 0x82429b48
	ctx.lr = 0x831128B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2555(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2555, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831128D0"))) PPC_WEAK_FUNC(sub_831128D0);
PPC_FUNC_IMPL(__imp__sub_831128D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31832
	ctx.r4.s64 = ctx.r11.s64 + -31832;
	// bl 0x82429b48
	ctx.lr = 0x831128EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83112908"))) PPC_WEAK_FUNC(sub_83112908);
PPC_FUNC_IMPL(__imp__sub_83112908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31828
	ctx.r4.s64 = ctx.r11.s64 + -31828;
	// bl 0x82429b48
	ctx.lr = 0x83112924;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4872(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4872, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112940"))) PPC_WEAK_FUNC(sub_83112940);
PPC_FUNC_IMPL(__imp__sub_83112940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31824
	ctx.r4.s64 = ctx.r11.s64 + -31824;
	// bl 0x82429b48
	ctx.lr = 0x8311295C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3985(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3985, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112978"))) PPC_WEAK_FUNC(sub_83112978);
PPC_FUNC_IMPL(__imp__sub_83112978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31820
	ctx.r4.s64 = ctx.r11.s64 + -31820;
	// bl 0x82429b48
	ctx.lr = 0x83112994;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1386(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1386, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831129B0"))) PPC_WEAK_FUNC(sub_831129B0);
PPC_FUNC_IMPL(__imp__sub_831129B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31816
	ctx.r4.s64 = ctx.r11.s64 + -31816;
	// bl 0x82429b48
	ctx.lr = 0x831129CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_831129E8"))) PPC_WEAK_FUNC(sub_831129E8);
PPC_FUNC_IMPL(__imp__sub_831129E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31812
	ctx.r4.s64 = ctx.r11.s64 + -31812;
	// bl 0x82429b48
	ctx.lr = 0x83112A04;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3850(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3850, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112A20"))) PPC_WEAK_FUNC(sub_83112A20);
PPC_FUNC_IMPL(__imp__sub_83112A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31808
	ctx.r4.s64 = ctx.r11.s64 + -31808;
	// bl 0x82429b48
	ctx.lr = 0x83112A3C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4539(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4539, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112A58"))) PPC_WEAK_FUNC(sub_83112A58);
PPC_FUNC_IMPL(__imp__sub_83112A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31804
	ctx.r4.s64 = ctx.r11.s64 + -31804;
	// bl 0x82429b48
	ctx.lr = 0x83112A74;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2317(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2317, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112A90"))) PPC_WEAK_FUNC(sub_83112A90);
PPC_FUNC_IMPL(__imp__sub_83112A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31800
	ctx.r4.s64 = ctx.r11.s64 + -31800;
	// bl 0x82429b48
	ctx.lr = 0x83112AAC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,970(r11)
	PPC_STORE_U8(ctx.r11.u32 + 970, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112AC8"))) PPC_WEAK_FUNC(sub_83112AC8);
PPC_FUNC_IMPL(__imp__sub_83112AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31796
	ctx.r4.s64 = ctx.r11.s64 + -31796;
	// bl 0x82429b48
	ctx.lr = 0x83112AE4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2409(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2409, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112B00"))) PPC_WEAK_FUNC(sub_83112B00);
PPC_FUNC_IMPL(__imp__sub_83112B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31792
	ctx.r4.s64 = ctx.r11.s64 + -31792;
	// bl 0x82429b48
	ctx.lr = 0x83112B1C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2711(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2711, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112B38"))) PPC_WEAK_FUNC(sub_83112B38);
PPC_FUNC_IMPL(__imp__sub_83112B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31788
	ctx.r4.s64 = ctx.r11.s64 + -31788;
	// bl 0x82429b48
	ctx.lr = 0x83112B54;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3666(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3666, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112B70"))) PPC_WEAK_FUNC(sub_83112B70);
PPC_FUNC_IMPL(__imp__sub_83112B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31784
	ctx.r4.s64 = ctx.r11.s64 + -31784;
	// bl 0x82429b48
	ctx.lr = 0x83112B8C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3373(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3373, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112BA8"))) PPC_WEAK_FUNC(sub_83112BA8);
PPC_FUNC_IMPL(__imp__sub_83112BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31780
	ctx.r4.s64 = ctx.r11.s64 + -31780;
	// bl 0x82429b48
	ctx.lr = 0x83112BC4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83112BE0"))) PPC_WEAK_FUNC(sub_83112BE0);
PPC_FUNC_IMPL(__imp__sub_83112BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31776
	ctx.r4.s64 = ctx.r11.s64 + -31776;
	// bl 0x82429b48
	ctx.lr = 0x83112BFC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1772(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1772, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112C18"))) PPC_WEAK_FUNC(sub_83112C18);
PPC_FUNC_IMPL(__imp__sub_83112C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31772
	ctx.r4.s64 = ctx.r11.s64 + -31772;
	// bl 0x82429b48
	ctx.lr = 0x83112C34;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4387(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4387, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112C50"))) PPC_WEAK_FUNC(sub_83112C50);
PPC_FUNC_IMPL(__imp__sub_83112C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31768
	ctx.r4.s64 = ctx.r11.s64 + -31768;
	// bl 0x82429b48
	ctx.lr = 0x83112C6C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4942, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112C88"))) PPC_WEAK_FUNC(sub_83112C88);
PPC_FUNC_IMPL(__imp__sub_83112C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31764
	ctx.r4.s64 = ctx.r11.s64 + -31764;
	// bl 0x82429b48
	ctx.lr = 0x83112CA4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1864(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1864, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112CC0"))) PPC_WEAK_FUNC(sub_83112CC0);
PPC_FUNC_IMPL(__imp__sub_83112CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31760
	ctx.r4.s64 = ctx.r11.s64 + -31760;
	// bl 0x82429b48
	ctx.lr = 0x83112CDC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1440(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1440, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112CF8"))) PPC_WEAK_FUNC(sub_83112CF8);
PPC_FUNC_IMPL(__imp__sub_83112CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31756
	ctx.r4.s64 = ctx.r11.s64 + -31756;
	// bl 0x82429b48
	ctx.lr = 0x83112D14;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3735(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3735, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112D30"))) PPC_WEAK_FUNC(sub_83112D30);
PPC_FUNC_IMPL(__imp__sub_83112D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31752
	ctx.r4.s64 = ctx.r11.s64 + -31752;
	// bl 0x82429b48
	ctx.lr = 0x83112D4C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4333(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4333, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112D68"))) PPC_WEAK_FUNC(sub_83112D68);
PPC_FUNC_IMPL(__imp__sub_83112D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31748
	ctx.r4.s64 = ctx.r11.s64 + -31748;
	// bl 0x82429b48
	ctx.lr = 0x83112D84;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,187(r11)
	PPC_STORE_U8(ctx.r11.u32 + 187, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112DA0"))) PPC_WEAK_FUNC(sub_83112DA0);
PPC_FUNC_IMPL(__imp__sub_83112DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31744
	ctx.r4.s64 = ctx.r11.s64 + -31744;
	// bl 0x82429b48
	ctx.lr = 0x83112DBC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2282(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2282, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112DD8"))) PPC_WEAK_FUNC(sub_83112DD8);
PPC_FUNC_IMPL(__imp__sub_83112DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31740
	ctx.r4.s64 = ctx.r11.s64 + -31740;
	// bl 0x82429b48
	ctx.lr = 0x83112DF4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1306(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1306, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112E10"))) PPC_WEAK_FUNC(sub_83112E10);
PPC_FUNC_IMPL(__imp__sub_83112E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31736
	ctx.r4.s64 = ctx.r11.s64 + -31736;
	// bl 0x82429b48
	ctx.lr = 0x83112E2C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,638(r11)
	PPC_STORE_U8(ctx.r11.u32 + 638, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112E48"))) PPC_WEAK_FUNC(sub_83112E48);
PPC_FUNC_IMPL(__imp__sub_83112E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31732
	ctx.r4.s64 = ctx.r11.s64 + -31732;
	// bl 0x82429b48
	ctx.lr = 0x83112E64;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3997(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3997, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112E80"))) PPC_WEAK_FUNC(sub_83112E80);
PPC_FUNC_IMPL(__imp__sub_83112E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31728
	ctx.r4.s64 = ctx.r11.s64 + -31728;
	// bl 0x82429b48
	ctx.lr = 0x83112E9C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,386(r11)
	PPC_STORE_U8(ctx.r11.u32 + 386, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112EB8"))) PPC_WEAK_FUNC(sub_83112EB8);
PPC_FUNC_IMPL(__imp__sub_83112EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31724
	ctx.r4.s64 = ctx.r11.s64 + -31724;
	// bl 0x82429b48
	ctx.lr = 0x83112ED4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-64(r11)
	PPC_STORE_U8(ctx.r11.u32 + -64, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112EF0"))) PPC_WEAK_FUNC(sub_83112EF0);
PPC_FUNC_IMPL(__imp__sub_83112EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31720
	ctx.r4.s64 = ctx.r11.s64 + -31720;
	// bl 0x82429b48
	ctx.lr = 0x83112F0C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,137(r11)
	PPC_STORE_U8(ctx.r11.u32 + 137, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

