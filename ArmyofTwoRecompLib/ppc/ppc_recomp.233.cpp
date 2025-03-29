#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83112F28"))) PPC_WEAK_FUNC(sub_83112F28);
PPC_FUNC_IMPL(__imp__sub_83112F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31716
	ctx.r4.s64 = ctx.r11.s64 + -31716;
	// bl 0x82429b48
	ctx.lr = 0x83112F44;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3827(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3827, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112F60"))) PPC_WEAK_FUNC(sub_83112F60);
PPC_FUNC_IMPL(__imp__sub_83112F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31712
	ctx.r4.s64 = ctx.r11.s64 + -31712;
	// bl 0x82429b48
	ctx.lr = 0x83112F7C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3238(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3238, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112F98"))) PPC_WEAK_FUNC(sub_83112F98);
PPC_FUNC_IMPL(__imp__sub_83112F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31708
	ctx.r4.s64 = ctx.r11.s64 + -31708;
	// bl 0x82429b48
	ctx.lr = 0x83112FB4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2250(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2250, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83112FD0"))) PPC_WEAK_FUNC(sub_83112FD0);
PPC_FUNC_IMPL(__imp__sub_83112FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31704
	ctx.r4.s64 = ctx.r11.s64 + -31704;
	// bl 0x82429b48
	ctx.lr = 0x83112FEC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1813(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1813, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113008"))) PPC_WEAK_FUNC(sub_83113008);
PPC_FUNC_IMPL(__imp__sub_83113008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31700
	ctx.r4.s64 = ctx.r11.s64 + -31700;
	// bl 0x82429b48
	ctx.lr = 0x83113024;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1300(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1300, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113040"))) PPC_WEAK_FUNC(sub_83113040);
PPC_FUNC_IMPL(__imp__sub_83113040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31696
	ctx.r4.s64 = ctx.r11.s64 + -31696;
	// bl 0x82429b48
	ctx.lr = 0x8311305C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4638(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4638, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113078"))) PPC_WEAK_FUNC(sub_83113078);
PPC_FUNC_IMPL(__imp__sub_83113078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31692
	ctx.r4.s64 = ctx.r11.s64 + -31692;
	// bl 0x82429b48
	ctx.lr = 0x83113094;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-63(r11)
	PPC_STORE_U8(ctx.r11.u32 + -63, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831130B0"))) PPC_WEAK_FUNC(sub_831130B0);
PPC_FUNC_IMPL(__imp__sub_831130B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31688
	ctx.r4.s64 = ctx.r11.s64 + -31688;
	// bl 0x82429b48
	ctx.lr = 0x831130CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1057(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1057, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831130E8"))) PPC_WEAK_FUNC(sub_831130E8);
PPC_FUNC_IMPL(__imp__sub_831130E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31684
	ctx.r4.s64 = ctx.r11.s64 + -31684;
	// bl 0x82429b48
	ctx.lr = 0x83113104;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1867(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1867, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113120"))) PPC_WEAK_FUNC(sub_83113120);
PPC_FUNC_IMPL(__imp__sub_83113120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31680
	ctx.r4.s64 = ctx.r11.s64 + -31680;
	// bl 0x82429b48
	ctx.lr = 0x8311313C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2571(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2571, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113158"))) PPC_WEAK_FUNC(sub_83113158);
PPC_FUNC_IMPL(__imp__sub_83113158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31676
	ctx.r4.s64 = ctx.r11.s64 + -31676;
	// bl 0x82429b48
	ctx.lr = 0x83113174;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5089(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5089, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113190"))) PPC_WEAK_FUNC(sub_83113190);
PPC_FUNC_IMPL(__imp__sub_83113190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31672
	ctx.r4.s64 = ctx.r11.s64 + -31672;
	// bl 0x82429b48
	ctx.lr = 0x831131AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4873(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4873, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831131C8"))) PPC_WEAK_FUNC(sub_831131C8);
PPC_FUNC_IMPL(__imp__sub_831131C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31668
	ctx.r4.s64 = ctx.r11.s64 + -31668;
	// bl 0x82429b48
	ctx.lr = 0x831131E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,629(r11)
	PPC_STORE_U8(ctx.r11.u32 + 629, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113200"))) PPC_WEAK_FUNC(sub_83113200);
PPC_FUNC_IMPL(__imp__sub_83113200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31664
	ctx.r4.s64 = ctx.r11.s64 + -31664;
	// bl 0x82429b48
	ctx.lr = 0x8311321C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-127(r11)
	PPC_STORE_U8(ctx.r11.u32 + -127, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113238"))) PPC_WEAK_FUNC(sub_83113238);
PPC_FUNC_IMPL(__imp__sub_83113238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31660
	ctx.r4.s64 = ctx.r11.s64 + -31660;
	// bl 0x82429b48
	ctx.lr = 0x83113254;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2234(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2234, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113270"))) PPC_WEAK_FUNC(sub_83113270);
PPC_FUNC_IMPL(__imp__sub_83113270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31656
	ctx.r4.s64 = ctx.r11.s64 + -31656;
	// bl 0x82429b48
	ctx.lr = 0x8311328C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2525(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2525, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831132A8"))) PPC_WEAK_FUNC(sub_831132A8);
PPC_FUNC_IMPL(__imp__sub_831132A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31652
	ctx.r4.s64 = ctx.r11.s64 + -31652;
	// bl 0x82429b48
	ctx.lr = 0x831132C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1430(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1430, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831132E0"))) PPC_WEAK_FUNC(sub_831132E0);
PPC_FUNC_IMPL(__imp__sub_831132E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31648
	ctx.r4.s64 = ctx.r11.s64 + -31648;
	// bl 0x82429b48
	ctx.lr = 0x831132FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83113318"))) PPC_WEAK_FUNC(sub_83113318);
PPC_FUNC_IMPL(__imp__sub_83113318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31644
	ctx.r4.s64 = ctx.r11.s64 + -31644;
	// bl 0x82429b48
	ctx.lr = 0x83113334;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2856(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2856, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113350"))) PPC_WEAK_FUNC(sub_83113350);
PPC_FUNC_IMPL(__imp__sub_83113350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31640
	ctx.r4.s64 = ctx.r11.s64 + -31640;
	// bl 0x82429b48
	ctx.lr = 0x8311336C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83113388"))) PPC_WEAK_FUNC(sub_83113388);
PPC_FUNC_IMPL(__imp__sub_83113388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31636
	ctx.r4.s64 = ctx.r11.s64 + -31636;
	// bl 0x82429b48
	ctx.lr = 0x831133A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3150(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3150, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831133C0"))) PPC_WEAK_FUNC(sub_831133C0);
PPC_FUNC_IMPL(__imp__sub_831133C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31632
	ctx.r4.s64 = ctx.r11.s64 + -31632;
	// bl 0x82429b48
	ctx.lr = 0x831133DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4334(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4334, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831133F8"))) PPC_WEAK_FUNC(sub_831133F8);
PPC_FUNC_IMPL(__imp__sub_831133F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31628
	ctx.r4.s64 = ctx.r11.s64 + -31628;
	// bl 0x82429b48
	ctx.lr = 0x83113414;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,424(r11)
	PPC_STORE_U8(ctx.r11.u32 + 424, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113430"))) PPC_WEAK_FUNC(sub_83113430);
PPC_FUNC_IMPL(__imp__sub_83113430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31624
	ctx.r4.s64 = ctx.r11.s64 + -31624;
	// bl 0x82429b48
	ctx.lr = 0x8311344C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4315(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4315, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113468"))) PPC_WEAK_FUNC(sub_83113468);
PPC_FUNC_IMPL(__imp__sub_83113468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31620
	ctx.r4.s64 = ctx.r11.s64 + -31620;
	// bl 0x82429b48
	ctx.lr = 0x83113484;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_831134A0"))) PPC_WEAK_FUNC(sub_831134A0);
PPC_FUNC_IMPL(__imp__sub_831134A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31616
	ctx.r4.s64 = ctx.r11.s64 + -31616;
	// bl 0x82429b48
	ctx.lr = 0x831134BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3871(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3871, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831134D8"))) PPC_WEAK_FUNC(sub_831134D8);
PPC_FUNC_IMPL(__imp__sub_831134D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31612
	ctx.r4.s64 = ctx.r11.s64 + -31612;
	// bl 0x82429b48
	ctx.lr = 0x831134F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1705(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1705, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113510"))) PPC_WEAK_FUNC(sub_83113510);
PPC_FUNC_IMPL(__imp__sub_83113510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31608
	ctx.r4.s64 = ctx.r11.s64 + -31608;
	// bl 0x82429b48
	ctx.lr = 0x8311352C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,920(r11)
	PPC_STORE_U8(ctx.r11.u32 + 920, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113548"))) PPC_WEAK_FUNC(sub_83113548);
PPC_FUNC_IMPL(__imp__sub_83113548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31604
	ctx.r4.s64 = ctx.r11.s64 + -31604;
	// bl 0x82429b48
	ctx.lr = 0x83113564;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83113580"))) PPC_WEAK_FUNC(sub_83113580);
PPC_FUNC_IMPL(__imp__sub_83113580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31600
	ctx.r4.s64 = ctx.r11.s64 + -31600;
	// bl 0x82429b48
	ctx.lr = 0x8311359C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3986(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3986, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831135B8"))) PPC_WEAK_FUNC(sub_831135B8);
PPC_FUNC_IMPL(__imp__sub_831135B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31596
	ctx.r4.s64 = ctx.r11.s64 + -31596;
	// bl 0x82429b48
	ctx.lr = 0x831135D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1794(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1794, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831135F0"))) PPC_WEAK_FUNC(sub_831135F0);
PPC_FUNC_IMPL(__imp__sub_831135F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31592
	ctx.r4.s64 = ctx.r11.s64 + -31592;
	// bl 0x82429b48
	ctx.lr = 0x8311360C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83113628"))) PPC_WEAK_FUNC(sub_83113628);
PPC_FUNC_IMPL(__imp__sub_83113628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31588
	ctx.r4.s64 = ctx.r11.s64 + -31588;
	// bl 0x82429b48
	ctx.lr = 0x83113644;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2031(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2031, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113660"))) PPC_WEAK_FUNC(sub_83113660);
PPC_FUNC_IMPL(__imp__sub_83113660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31584
	ctx.r4.s64 = ctx.r11.s64 + -31584;
	// bl 0x82429b48
	ctx.lr = 0x8311367C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2556(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2556, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113698"))) PPC_WEAK_FUNC(sub_83113698);
PPC_FUNC_IMPL(__imp__sub_83113698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31580
	ctx.r4.s64 = ctx.r11.s64 + -31580;
	// bl 0x82429b48
	ctx.lr = 0x831136B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4639(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4639, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831136D0"))) PPC_WEAK_FUNC(sub_831136D0);
PPC_FUNC_IMPL(__imp__sub_831136D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31576
	ctx.r4.s64 = ctx.r11.s64 + -31576;
	// bl 0x82429b48
	ctx.lr = 0x831136EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83113708"))) PPC_WEAK_FUNC(sub_83113708);
PPC_FUNC_IMPL(__imp__sub_83113708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31572
	ctx.r4.s64 = ctx.r11.s64 + -31572;
	// bl 0x82429b48
	ctx.lr = 0x83113724;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1241, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113740"))) PPC_WEAK_FUNC(sub_83113740);
PPC_FUNC_IMPL(__imp__sub_83113740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31568
	ctx.r4.s64 = ctx.r11.s64 + -31568;
	// bl 0x82429b48
	ctx.lr = 0x8311375C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,305(r11)
	PPC_STORE_U8(ctx.r11.u32 + 305, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113778"))) PPC_WEAK_FUNC(sub_83113778);
PPC_FUNC_IMPL(__imp__sub_83113778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31564
	ctx.r4.s64 = ctx.r11.s64 + -31564;
	// bl 0x82429b48
	ctx.lr = 0x83113794;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4054(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4054, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831137B0"))) PPC_WEAK_FUNC(sub_831137B0);
PPC_FUNC_IMPL(__imp__sub_831137B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31560
	ctx.r4.s64 = ctx.r11.s64 + -31560;
	// bl 0x82429b48
	ctx.lr = 0x831137CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3908(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3908, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831137E8"))) PPC_WEAK_FUNC(sub_831137E8);
PPC_FUNC_IMPL(__imp__sub_831137E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31556
	ctx.r4.s64 = ctx.r11.s64 + -31556;
	// bl 0x82429b48
	ctx.lr = 0x83113804;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83113820"))) PPC_WEAK_FUNC(sub_83113820);
PPC_FUNC_IMPL(__imp__sub_83113820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31552
	ctx.r4.s64 = ctx.r11.s64 + -31552;
	// bl 0x82429b48
	ctx.lr = 0x8311383C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83113858"))) PPC_WEAK_FUNC(sub_83113858);
PPC_FUNC_IMPL(__imp__sub_83113858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31548
	ctx.r4.s64 = ctx.r11.s64 + -31548;
	// bl 0x82429b48
	ctx.lr = 0x83113874;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4771(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4771, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113890"))) PPC_WEAK_FUNC(sub_83113890);
PPC_FUNC_IMPL(__imp__sub_83113890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31544
	ctx.r4.s64 = ctx.r11.s64 + -31544;
	// bl 0x82429b48
	ctx.lr = 0x831138AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4311(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4311, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831138C8"))) PPC_WEAK_FUNC(sub_831138C8);
PPC_FUNC_IMPL(__imp__sub_831138C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31540
	ctx.r4.s64 = ctx.r11.s64 + -31540;
	// bl 0x82429b48
	ctx.lr = 0x831138E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83113900"))) PPC_WEAK_FUNC(sub_83113900);
PPC_FUNC_IMPL(__imp__sub_83113900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31536
	ctx.r4.s64 = ctx.r11.s64 + -31536;
	// bl 0x82429b48
	ctx.lr = 0x8311391C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,865(r11)
	PPC_STORE_U8(ctx.r11.u32 + 865, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113938"))) PPC_WEAK_FUNC(sub_83113938);
PPC_FUNC_IMPL(__imp__sub_83113938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31532
	ctx.r4.s64 = ctx.r11.s64 + -31532;
	// bl 0x82429b48
	ctx.lr = 0x83113954;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2528(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2528, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83113970"))) PPC_WEAK_FUNC(sub_83113970);
PPC_FUNC_IMPL(__imp__sub_83113970) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e40
	ctx.lr = 0x83113978;
	__savegprlr_18(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r21,-32207
	ctx.r21.s64 = -2110717952;
	// addi r10,r10,7760
	ctx.r10.s64 = ctx.r10.s64 + 7760;
	// lis r22,-32206
	ctx.r22.s64 = -2110652416;
	// lis r23,-32206
	ctx.r23.s64 = -2110652416;
	// lis r24,-32206
	ctx.r24.s64 = -2110652416;
	// lis r25,-32208
	ctx.r25.s64 = -2110783488;
	// lis r26,-32207
	ctx.r26.s64 = -2110717952;
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// lis r27,-32208
	ctx.r27.s64 = -2110783488;
	// lis r28,-32210
	ctx.r28.s64 = -2110914560;
	// lis r29,-32209
	ctx.r29.s64 = -2110849024;
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// lis r31,-32207
	ctx.r31.s64 = -2110717952;
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r21,r21,-152
	ctx.r21.s64 = ctx.r21.s64 + -152;
	// addi r22,r22,-19616
	ctx.r22.s64 = ctx.r22.s64 + -19616;
	// addi r23,r23,-19952
	ctx.r23.s64 = ctx.r23.s64 + -19952;
	// addi r24,r24,23728
	ctx.r24.s64 = ctx.r24.s64 + 23728;
	// addi r25,r25,15880
	ctx.r25.s64 = ctx.r25.s64 + 15880;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r26,r26,-264
	ctx.r26.s64 = ctx.r26.s64 + -264;
	// stw r21,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r21.u32);
	// addi r27,r27,15752
	ctx.r27.s64 = ctx.r27.s64 + 15752;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r28,r28,9304
	ctx.r28.s64 = ctx.r28.s64 + 9304;
	// stw r22,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r22.u32);
	// addi r29,r29,-22136
	ctx.r29.s64 = ctx.r29.s64 + -22136;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r30,r30,-22392
	ctx.r30.s64 = ctx.r30.s64 + -22392;
	// stw r23,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r23.u32);
	// addi r31,r31,-21784
	ctx.r31.s64 = ctx.r31.s64 + -21784;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r3,r3,-22536
	ctx.r3.s64 = ctx.r3.s64 + -22536;
	// stw r24,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r24.u32);
	// addi r4,r4,-22680
	ctx.r4.s64 = ctx.r4.s64 + -22680;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r5,r5,-22824
	ctx.r5.s64 = ctx.r5.s64 + -22824;
	// stw r25,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r25.u32);
	// addi r6,r6,-22992
	ctx.r6.s64 = ctx.r6.s64 + -22992;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// addi r7,r7,-23136
	ctx.r7.s64 = ctx.r7.s64 + -23136;
	// stw r26,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r26.u32);
	// addi r8,r8,-23280
	ctx.r8.s64 = ctx.r8.s64 + -23280;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// addi r9,r9,-23424
	ctx.r9.s64 = ctx.r9.s64 + -23424;
	// stw r27,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r27.u32);
	// addi r11,r11,-23584
	ctx.r11.s64 = ctx.r11.s64 + -23584;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r28,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r28.u32);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r29,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r29.u32);
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// stw r30,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r30.u32);
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// stw r31,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r31.u32);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// stw r3,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r3.u32);
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// stw r4,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r4.u32);
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// stw r5,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r5.u32);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// stw r6,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r6.u32);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r7,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r7.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r8,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r8.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// stw r9,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stw r11,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r11.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lis r18,-32209
	ctx.r18.s64 = -2110849024;
	// addi r11,r11,-21368
	ctx.r11.s64 = ctx.r11.s64 + -21368;
	// lis r19,-32209
	ctx.r19.s64 = -2110849024;
	// lis r20,-32209
	ctx.r20.s64 = -2110849024;
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// addi r18,r18,-23728
	ctx.r18.s64 = ctx.r18.s64 + -23728;
	// addi r19,r19,-23872
	ctx.r19.s64 = ctx.r19.s64 + -23872;
	// addi r20,r20,-24032
	ctx.r20.s64 = ctx.r20.s64 + -24032;
	// addi r21,r21,-24272
	ctx.r21.s64 = ctx.r21.s64 + -24272;
	// addi r22,r22,-24512
	ctx.r22.s64 = ctx.r22.s64 + -24512;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// addi r23,r23,-24656
	ctx.r23.s64 = ctx.r23.s64 + -24656;
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lis r24,-32209
	ctx.r24.s64 = -2110849024;
	// lis r25,-32209
	ctx.r25.s64 = -2110849024;
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// std r9,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r9.u64);
	// lis r29,-32209
	ctx.r29.s64 = -2110849024;
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// std r9,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r9,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r9,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// std r9,124(r11)
	PPC_STORE_U64(ctx.r11.u32 + 124, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,148(r11)
	PPC_STORE_U64(ctx.r11.u32 + 148, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// stw r23,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r23.u32);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// std r9,172(r11)
	PPC_STORE_U64(ctx.r11.u32 + 172, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// stw r22,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r22.u32);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// std r9,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// stw r21,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r21.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// std r9,196(r11)
	PPC_STORE_U64(ctx.r11.u32 + 196, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// stw r20,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r20.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// std r9,208(r11)
	PPC_STORE_U64(ctx.r11.u32 + 208, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r19,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r19.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// std r9,220(r11)
	PPC_STORE_U64(ctx.r11.u32 + 220, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// stw r18,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r18.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// std r9,232(r11)
	PPC_STORE_U64(ctx.r11.u32 + 232, ctx.r9.u64);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r9,r9,-26808
	ctx.r9.s64 = ctx.r9.s64 + -26808;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r24,r24,-24800
	ctx.r24.s64 = ctx.r24.s64 + -24800;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r25,r25,-24944
	ctx.r25.s64 = ctx.r25.s64 + -24944;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r26,r26,-25088
	ctx.r26.s64 = ctx.r26.s64 + -25088;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r27,r27,-25336
	ctx.r27.s64 = ctx.r27.s64 + -25336;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// addi r28,r28,-25512
	ctx.r28.s64 = ctx.r28.s64 + -25512;
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// addi r29,r29,-25656
	ctx.r29.s64 = ctx.r29.s64 + -25656;
	// stw r24,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r24.u32);
	// addi r30,r30,-25800
	ctx.r30.s64 = ctx.r30.s64 + -25800;
	// stw r25,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r25.u32);
	// addi r31,r31,-25944
	ctx.r31.s64 = ctx.r31.s64 + -25944;
	// stw r26,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r26.u32);
	// addi r3,r3,-26088
	ctx.r3.s64 = ctx.r3.s64 + -26088;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// addi r4,r4,-26232
	ctx.r4.s64 = ctx.r4.s64 + -26232;
	// std r9,244(r11)
	PPC_STORE_U64(ctx.r11.u32 + 244, ctx.r9.u64);
	// addi r5,r5,-26376
	ctx.r5.s64 = ctx.r5.s64 + -26376;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// addi r6,r6,-26520
	ctx.r6.s64 = ctx.r6.s64 + -26520;
	// stw r28,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r28.u32);
	// addi r7,r7,-26664
	ctx.r7.s64 = ctx.r7.s64 + -26664;
	// stw r29,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r29.u32);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r30,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r30.u32);
	// std r9,256(r11)
	PPC_STORE_U64(ctx.r11.u32 + 256, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r31,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r31.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r3,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// std r9,268(r11)
	PPC_STORE_U64(ctx.r11.u32 + 268, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r4,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r4.u32);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// std r9,280(r11)
	PPC_STORE_U64(ctx.r11.u32 + 280, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stw r6,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stw r7,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// std r9,292(r11)
	PPC_STORE_U64(ctx.r11.u32 + 292, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// std r9,304(r11)
	PPC_STORE_U64(ctx.r11.u32 + 304, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,316(r11)
	PPC_STORE_U64(ctx.r11.u32 + 316, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,328(r11)
	PPC_STORE_U64(ctx.r11.u32 + 328, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,340(r11)
	PPC_STORE_U64(ctx.r11.u32 + 340, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// std r9,352(r11)
	PPC_STORE_U64(ctx.r11.u32 + 352, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r9,364(r11)
	PPC_STORE_U64(ctx.r11.u32 + 364, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,376(r11)
	PPC_STORE_U64(ctx.r11.u32 + 376, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,388(r11)
	PPC_STORE_U64(ctx.r11.u32 + 388, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,400(r11)
	PPC_STORE_U64(ctx.r11.u32 + 400, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r9,412(r11)
	PPC_STORE_U64(ctx.r11.u32 + 412, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,424(r11)
	PPC_STORE_U64(ctx.r11.u32 + 424, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,436(r11)
	PPC_STORE_U64(ctx.r11.u32 + 436, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r9,448(r11)
	PPC_STORE_U64(ctx.r11.u32 + 448, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,460(r11)
	PPC_STORE_U64(ctx.r11.u32 + 460, ctx.r9.u64);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r9,472(r11)
	PPC_STORE_U64(ctx.r11.u32 + 472, ctx.r9.u64);
	// addi r9,r8,-26952
	ctx.r9.s64 = ctx.r8.s64 + -26952;
	// lis r19,-32209
	ctx.r19.s64 = -2110849024;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r20,-32209
	ctx.r20.s64 = -2110849024;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r9,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// lis r24,-32209
	ctx.r24.s64 = -2110849024;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r25,-32209
	ctx.r25.s64 = -2110849024;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r29,-32209
	ctx.r29.s64 = -2110849024;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r19,r19,-27096
	ctx.r19.s64 = ctx.r19.s64 + -27096;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r20,r20,-27240
	ctx.r20.s64 = ctx.r20.s64 + -27240;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r21,r21,-27384
	ctx.r21.s64 = ctx.r21.s64 + -27384;
	// addi r22,r22,-27528
	ctx.r22.s64 = ctx.r22.s64 + -27528;
	// addi r23,r23,-27672
	ctx.r23.s64 = ctx.r23.s64 + -27672;
	// addi r24,r24,-27816
	ctx.r24.s64 = ctx.r24.s64 + -27816;
	// stw r19,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r19.u32);
	// addi r25,r25,-27960
	ctx.r25.s64 = ctx.r25.s64 + -27960;
	// stw r20,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r20.u32);
	// addi r26,r26,-28104
	ctx.r26.s64 = ctx.r26.s64 + -28104;
	// stw r21,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r21.u32);
	// addi r27,r27,-28248
	ctx.r27.s64 = ctx.r27.s64 + -28248;
	// stw r22,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r22.u32);
	// addi r28,r28,-28376
	ctx.r28.s64 = ctx.r28.s64 + -28376;
	// stw r23,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r23.u32);
	// addi r29,r29,-28520
	ctx.r29.s64 = ctx.r29.s64 + -28520;
	// stw r24,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r24.u32);
	// addi r30,r30,-28664
	ctx.r30.s64 = ctx.r30.s64 + -28664;
	// stw r25,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r25.u32);
	// addi r31,r31,-28824
	ctx.r31.s64 = ctx.r31.s64 + -28824;
	// stw r26,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r26.u32);
	// addi r3,r3,-28968
	ctx.r3.s64 = ctx.r3.s64 + -28968;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// addi r4,r4,-29112
	ctx.r4.s64 = ctx.r4.s64 + -29112;
	// stw r28,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r28.u32);
	// addi r5,r5,-29256
	ctx.r5.s64 = ctx.r5.s64 + -29256;
	// stw r29,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r29.u32);
	// addi r6,r6,-29400
	ctx.r6.s64 = ctx.r6.s64 + -29400;
	// stw r30,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r30.u32);
	// addi r7,r7,-29544
	ctx.r7.s64 = ctx.r7.s64 + -29544;
	// stw r31,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r31.u32);
	// addi r9,r9,-29792
	ctx.r9.s64 = ctx.r9.s64 + -29792;
	// stw r3,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r4,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r4.u32);
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// stw r6,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// stw r7,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// lis r19,-32209
	ctx.r19.s64 = -2110849024;
	// lis r20,-32209
	ctx.r20.s64 = -2110849024;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// std r9,484(r11)
	PPC_STORE_U64(ctx.r11.u32 + 484, ctx.r9.u64);
	// lis r24,-32209
	ctx.r24.s64 = -2110849024;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// addi r19,r19,-30080
	ctx.r19.s64 = ctx.r19.s64 + -30080;
	// addi r20,r20,-30256
	ctx.r20.s64 = ctx.r20.s64 + -30256;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r21,r21,-30416
	ctx.r21.s64 = ctx.r21.s64 + -30416;
	// addi r22,r22,-30560
	ctx.r22.s64 = ctx.r22.s64 + -30560;
	// addi r23,r23,-30736
	ctx.r23.s64 = ctx.r23.s64 + -30736;
	// std r9,496(r11)
	PPC_STORE_U64(ctx.r11.u32 + 496, ctx.r9.u64);
	// addi r24,r24,-30912
	ctx.r24.s64 = ctx.r24.s64 + -30912;
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// lis r25,-32209
	ctx.r25.s64 = -2110849024;
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// stw r19,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r19.u32);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// stw r20,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r20.u32);
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lis r29,-32209
	ctx.r29.s64 = -2110849024;
	// std r9,508(r11)
	PPC_STORE_U64(ctx.r11.u32 + 508, ctx.r9.u64);
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// stw r21,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r21.u32);
	// lis r4,-32208
	ctx.r4.s64 = -2110783488;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// std r9,520(r11)
	PPC_STORE_U64(ctx.r11.u32 + 520, ctx.r9.u64);
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// stw r22,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r22.u32);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// std r9,532(r11)
	PPC_STORE_U64(ctx.r11.u32 + 532, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// stw r23,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r23.u32);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// std r9,544(r11)
	PPC_STORE_U64(ctx.r11.u32 + 544, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// stw r24,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r24.u32);
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// std r9,556(r11)
	PPC_STORE_U64(ctx.r11.u32 + 556, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,568(r11)
	PPC_STORE_U64(ctx.r11.u32 + 568, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,580(r11)
	PPC_STORE_U64(ctx.r11.u32 + 580, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// std r9,592(r11)
	PPC_STORE_U64(ctx.r11.u32 + 592, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r9,604(r11)
	PPC_STORE_U64(ctx.r11.u32 + 604, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,616(r11)
	PPC_STORE_U64(ctx.r11.u32 + 616, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,628(r11)
	PPC_STORE_U64(ctx.r11.u32 + 628, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,640(r11)
	PPC_STORE_U64(ctx.r11.u32 + 640, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r9,652(r11)
	PPC_STORE_U64(ctx.r11.u32 + 652, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,664(r11)
	PPC_STORE_U64(ctx.r11.u32 + 664, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,676(r11)
	PPC_STORE_U64(ctx.r11.u32 + 676, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r9,688(r11)
	PPC_STORE_U64(ctx.r11.u32 + 688, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,700(r11)
	PPC_STORE_U64(ctx.r11.u32 + 700, ctx.r9.u64);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r9,712(r11)
	PPC_STORE_U64(ctx.r11.u32 + 712, ctx.r9.u64);
	// addi r9,r8,-29936
	ctx.r9.s64 = ctx.r8.s64 + -29936;
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// stw r9,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r9,r9,15216
	ctx.r9.s64 = ctx.r9.s64 + 15216;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r25,r25,-31056
	ctx.r25.s64 = ctx.r25.s64 + -31056;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r26,r26,-31200
	ctx.r26.s64 = ctx.r26.s64 + -31200;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r27,r27,-31344
	ctx.r27.s64 = ctx.r27.s64 + -31344;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// addi r28,r28,-31488
	ctx.r28.s64 = ctx.r28.s64 + -31488;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r9,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
	// addi r29,r29,-31632
	ctx.r29.s64 = ctx.r29.s64 + -31632;
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// addi r30,r30,-31808
	ctx.r30.s64 = ctx.r30.s64 + -31808;
	// stw r25,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r25.u32);
	// addi r31,r31,-31984
	ctx.r31.s64 = ctx.r31.s64 + -31984;
	// stw r26,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r26.u32);
	// addi r3,r3,-32152
	ctx.r3.s64 = ctx.r3.s64 + -32152;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// addi r4,r4,15592
	ctx.r4.s64 = ctx.r4.s64 + 15592;
	// stw r28,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r28.u32);
	// addi r5,r5,-32328
	ctx.r5.s64 = ctx.r5.s64 + -32328;
	// std r9,724(r11)
	PPC_STORE_U64(ctx.r11.u32 + 724, ctx.r9.u64);
	// addi r6,r6,-32496
	ctx.r6.s64 = ctx.r6.s64 + -32496;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// addi r7,r7,15480
	ctx.r7.s64 = ctx.r7.s64 + 15480;
	// stw r29,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r29.u32);
	// addi r8,r8,15344
	ctx.r8.s64 = ctx.r8.s64 + 15344;
	// stw r30,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r30.u32);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r31,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r31.u32);
	// std r9,736(r11)
	PPC_STORE_U64(ctx.r11.u32 + 736, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r3,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r4,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r4.u32);
	// std r9,748(r11)
	PPC_STORE_U64(ctx.r11.u32 + 748, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stw r6,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r6.u32);
	// std r9,760(r11)
	PPC_STORE_U64(ctx.r11.u32 + 760, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stw r7,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r8,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r8.u32);
	// std r9,772(r11)
	PPC_STORE_U64(ctx.r11.u32 + 772, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// std r9,784(r11)
	PPC_STORE_U64(ctx.r11.u32 + 784, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,796(r11)
	PPC_STORE_U64(ctx.r11.u32 + 796, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,808(r11)
	PPC_STORE_U64(ctx.r11.u32 + 808, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,820(r11)
	PPC_STORE_U64(ctx.r11.u32 + 820, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// std r9,832(r11)
	PPC_STORE_U64(ctx.r11.u32 + 832, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r9,844(r11)
	PPC_STORE_U64(ctx.r11.u32 + 844, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,856(r11)
	PPC_STORE_U64(ctx.r11.u32 + 856, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,868(r11)
	PPC_STORE_U64(ctx.r11.u32 + 868, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,880(r11)
	PPC_STORE_U64(ctx.r11.u32 + 880, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r9,892(r11)
	PPC_STORE_U64(ctx.r11.u32 + 892, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,904(r11)
	PPC_STORE_U64(ctx.r11.u32 + 904, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,916(r11)
	PPC_STORE_U64(ctx.r11.u32 + 916, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r9,928(r11)
	PPC_STORE_U64(ctx.r11.u32 + 928, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,940(r11)
	PPC_STORE_U64(ctx.r11.u32 + 940, ctx.r9.u64);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r9,952(r11)
	PPC_STORE_U64(ctx.r11.u32 + 952, ctx.r9.u64);
	// lis r19,-32209
	ctx.r19.s64 = -2110849024;
	// ld r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lis r20,-32208
	ctx.r20.s64 = -2110783488;
	// lis r21,-32210
	ctx.r21.s64 = -2110914560;
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// lis r22,-32210
	ctx.r22.s64 = -2110914560;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r23,-32208
	ctx.r23.s64 = -2110783488;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// lis r24,-32207
	ctx.r24.s64 = -2110717952;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lis r25,-32208
	ctx.r25.s64 = -2110783488;
	// std r9,964(r11)
	PPC_STORE_U64(ctx.r11.u32 + 964, ctx.r9.u64);
	// lis r26,-32207
	ctx.r26.s64 = -2110717952;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r27,-32206
	ctx.r27.s64 = -2110652416;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r28,-32207
	ctx.r28.s64 = -2110717952;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lis r29,-32206
	ctx.r29.s64 = -2110652416;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// lis r30,-32207
	ctx.r30.s64 = -2110717952;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// lis r31,-32206
	ctx.r31.s64 = -2110652416;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r3,-32207
	ctx.r3.s64 = -2110717952;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// lis r5,-32206
	ctx.r5.s64 = -2110652416;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// addi r19,r19,-32640
	ctx.r19.s64 = ctx.r19.s64 + -32640;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r20,r20,15048
	ctx.r20.s64 = ctx.r20.s64 + 15048;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r21,r21,32752
	ctx.r21.s64 = ctx.r21.s64 + 32752;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r22,r22,32608
	ctx.r22.s64 = ctx.r22.s64 + 32608;
	// addi r23,r23,14904
	ctx.r23.s64 = ctx.r23.s64 + 14904;
	// addi r24,r24,-22128
	ctx.r24.s64 = ctx.r24.s64 + -22128;
	// stw r19,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r19.u32);
	// addi r25,r25,14728
	ctx.r25.s64 = ctx.r25.s64 + 14728;
	// stw r20,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r20.u32);
	// addi r26,r26,-520
	ctx.r26.s64 = ctx.r26.s64 + -520;
	// stw r21,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r21.u32);
	// addi r27,r27,-10288
	ctx.r27.s64 = ctx.r27.s64 + -10288;
	// stw r22,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r22.u32);
	// addi r28,r28,-22288
	ctx.r28.s64 = ctx.r28.s64 + -22288;
	// stw r23,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r23.u32);
	// addi r29,r29,16592
	ctx.r29.s64 = ctx.r29.s64 + 16592;
	// stw r24,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r24.u32);
	// addi r30,r30,20448
	ctx.r30.s64 = ctx.r30.s64 + 20448;
	// stw r25,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r25.u32);
	// addi r31,r31,16296
	ctx.r31.s64 = ctx.r31.s64 + 16296;
	// stw r26,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r26.u32);
	// addi r3,r3,-648
	ctx.r3.s64 = ctx.r3.s64 + -648;
	// stw r27,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r27.u32);
	// addi r4,r4,32432
	ctx.r4.s64 = ctx.r4.s64 + 32432;
	// stw r28,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r28.u32);
	// addi r5,r5,-20248
	ctx.r5.s64 = ctx.r5.s64 + -20248;
	// stw r29,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r29.u32);
	// addi r6,r6,32248
	ctx.r6.s64 = ctx.r6.s64 + 32248;
	// stw r30,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r30.u32);
	// addi r7,r7,32064
	ctx.r7.s64 = ctx.r7.s64 + 32064;
	// stw r31,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r31.u32);
	// addi r8,r8,14552
	ctx.r8.s64 = ctx.r8.s64 + 14552;
	// stw r3,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r3.u32);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// stw r4,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r4.u32);
	// stw r5,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r5.u32);
	// stw r6,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// addi r9,r9,14344
	ctx.r9.s64 = ctx.r9.s64 + 14344;
	// stw r7,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// stw r8,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// lis r27,-32208
	ctx.r27.s64 = -2110783488;
	// ld r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lis r28,-32208
	ctx.r28.s64 = -2110783488;
	// lis r29,-32216
	ctx.r29.s64 = -2111307776;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// lis r30,-32208
	ctx.r30.s64 = -2110783488;
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// lis r31,-32208
	ctx.r31.s64 = -2110783488;
	// lis r3,-32207
	ctx.r3.s64 = -2110717952;
	// std r9,976(r11)
	PPC_STORE_U64(ctx.r11.u32 + 976, ctx.r9.u64);
	// lis r4,-32206
	ctx.r4.s64 = -2110652416;
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// lis r5,-32207
	ctx.r5.s64 = -2110717952;
	// lis r6,-32206
	ctx.r6.s64 = -2110652416;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r27,r27,14120
	ctx.r27.s64 = ctx.r27.s64 + 14120;
	// addi r28,r28,13968
	ctx.r28.s64 = ctx.r28.s64 + 13968;
	// addi r29,r29,-2592
	ctx.r29.s64 = ctx.r29.s64 + -2592;
	// std r9,988(r11)
	PPC_STORE_U64(ctx.r11.u32 + 988, ctx.r9.u64);
	// addi r30,r30,13760
	ctx.r30.s64 = ctx.r30.s64 + 13760;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// addi r31,r31,13552
	ctx.r31.s64 = ctx.r31.s64 + 13552;
	// addi r3,r3,-760
	ctx.r3.s64 = ctx.r3.s64 + -760;
	// stw r27,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r27.u32);
	// addi r4,r4,22776
	ctx.r4.s64 = ctx.r4.s64 + 22776;
	// stw r28,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r28.u32);
	// addi r5,r5,-22528
	ctx.r5.s64 = ctx.r5.s64 + -22528;
	// stw r29,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r29.u32);
	// addi r6,r6,23200
	ctx.r6.s64 = ctx.r6.s64 + 23200;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// std r9,1000(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1000, ctx.r9.u64);
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// lis r8,-32214
	ctx.r8.s64 = -2111176704;
	// stw r30,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r30.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// std r9,1012(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1012, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// stw r31,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r31.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// std r9,1024(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1024, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// stw r3,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r3.u32);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// std r9,1036(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1036, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// stw r4,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// std r9,1048(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1048, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// stw r5,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r5.u32);
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// std r9,1060(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1060, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// stw r6,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r6.u32);
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// std r9,1072(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1072, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,1084(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1084, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// std r9,1096(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1096, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r9,1108(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1108, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,1120(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1120, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,1132(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1132, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,1144(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1144, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r9,1156(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1156, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,1168(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1168, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,1180(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1180, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r9,1192(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1192, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,1204(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1204, ctx.r9.u64);
	// lis r9,-32214
	ctx.r9.s64 = -2111176704;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r7,r7,13328
	ctx.r7.s64 = ctx.r7.s64 + 13328;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r8,r8,-17352
	ctx.r8.s64 = ctx.r8.s64 + -17352;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// addi r9,r9,-17672
	ctx.r9.s64 = ctx.r9.s64 + -17672;
	// stw r10,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r10.u32);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// ld r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// stw r7,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r7.u32);
	// stw r8,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r8.u32);
	// stw r9,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r9.u32);
	// std r10,1216(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1216, ctx.r10.u64);
	// ld r10,-224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r10,1228(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1228, ctx.r10.u64);
	// ld r10,-208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r10,1240(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1240, ctx.r10.u64);
	// ld r10,-200(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r10,1252(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1252, ctx.r10.u64);
	// ld r10,-216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r10,1264(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1264, ctx.r10.u64);
	// ld r10,-232(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r10,1276(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1276, ctx.r10.u64);
	// ld r10,-248(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r10,1288(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1288, ctx.r10.u64);
	// ld r10,-264(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r10,1300(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1300, ctx.r10.u64);
	// ld r10,-272(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r10,1312(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1312, ctx.r10.u64);
	// ld r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r10,1324(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1324, ctx.r10.u64);
	// ld r10,-288(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// std r10,1336(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1336, ctx.r10.u64);
	// ld r10,-280(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r10,1348(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1348, ctx.r10.u64);
	// ld r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r10,1360(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1360, ctx.r10.u64);
	// b 0x82e28e90
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83114430"))) PPC_WEAK_FUNC(sub_83114430);
PPC_FUNC_IMPL(__imp__sub_83114430) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e4c
	ctx.lr = 0x83114438;
	__savegprlr_21(ctx, base);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r21,-32208
	ctx.r21.s64 = -2110783488;
	// addi r10,r10,17792
	ctx.r10.s64 = ctx.r10.s64 + 17792;
	// lis r22,-32210
	ctx.r22.s64 = -2110914560;
	// lis r23,-32207
	ctx.r23.s64 = -2110717952;
	// lis r24,-32208
	ctx.r24.s64 = -2110783488;
	// lis r25,-32206
	ctx.r25.s64 = -2110652416;
	// lis r26,-32208
	ctx.r26.s64 = -2110783488;
	// stw r10,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r10.u32);
	// lis r27,-32206
	ctx.r27.s64 = -2110652416;
	// lis r28,-32208
	ctx.r28.s64 = -2110783488;
	// lis r29,-32207
	ctx.r29.s64 = -2110717952;
	// lis r30,-32207
	ctx.r30.s64 = -2110717952;
	// lis r31,-32208
	ctx.r31.s64 = -2110783488;
	// lis r3,-32207
	ctx.r3.s64 = -2110717952;
	// lis r4,-32206
	ctx.r4.s64 = -2110652416;
	// lis r5,-32206
	ctx.r5.s64 = -2110652416;
	// lis r6,-32207
	ctx.r6.s64 = -2110717952;
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// lis r8,-32207
	ctx.r8.s64 = -2110717952;
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r21,r21,17664
	ctx.r21.s64 = ctx.r21.s64 + 17664;
	// addi r22,r22,18888
	ctx.r22.s64 = ctx.r22.s64 + 18888;
	// addi r23,r23,-20096
	ctx.r23.s64 = ctx.r23.s64 + -20096;
	// addi r24,r24,17520
	ctx.r24.s64 = ctx.r24.s64 + 17520;
	// addi r25,r25,-9840
	ctx.r25.s64 = ctx.r25.s64 + -9840;
	// stw r10,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r10.u32);
	// addi r26,r26,17280
	ctx.r26.s64 = ctx.r26.s64 + 17280;
	// stw r21,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r21.u32);
	// addi r27,r27,19328
	ctx.r27.s64 = ctx.r27.s64 + 19328;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r28,r28,16872
	ctx.r28.s64 = ctx.r28.s64 + 16872;
	// stw r22,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r22.u32);
	// addi r29,r29,-20336
	ctx.r29.s64 = ctx.r29.s64 + -20336;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r30,r30,23816
	ctx.r30.s64 = ctx.r30.s64 + 23816;
	// stw r23,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r23.u32);
	// addi r31,r31,16640
	ctx.r31.s64 = ctx.r31.s64 + 16640;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r3,r3,-20496
	ctx.r3.s64 = ctx.r3.s64 + -20496;
	// stw r24,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r24.u32);
	// addi r4,r4,8472
	ctx.r4.s64 = ctx.r4.s64 + 8472;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r5,r5,8280
	ctx.r5.s64 = ctx.r5.s64 + 8280;
	// stw r25,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r25.u32);
	// addi r6,r6,-20712
	ctx.r6.s64 = ctx.r6.s64 + -20712;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r7,r7,16472
	ctx.r7.s64 = ctx.r7.s64 + 16472;
	// stw r26,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r26.u32);
	// addi r8,r8,768
	ctx.r8.s64 = ctx.r8.s64 + 768;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r9,r9,496
	ctx.r9.s64 = ctx.r9.s64 + 496;
	// stw r27,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r27.u32);
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r28,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r28.u32);
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// stw r29,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r29.u32);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r30,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r30.u32);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// stw r31,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r31.u32);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r3,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r3.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r4,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r4.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// stw r5,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r5.u32);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r6,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r6.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r7,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r7.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r8,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r8.u32);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// stw r9,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r9.u32);
	// stw r10,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r9,-104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// addi r11,r11,-19544
	ctx.r11.s64 = ctx.r11.s64 + -19544;
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// lis r24,-32209
	ctx.r24.s64 = -2110849024;
	// lis r25,-32207
	ctx.r25.s64 = -2110717952;
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// lis r26,-32206
	ctx.r26.s64 = -2110652416;
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// lis r27,-32206
	ctx.r27.s64 = -2110652416;
	// addi r21,r21,-32328
	ctx.r21.s64 = ctx.r21.s64 + -32328;
	// addi r22,r22,-32496
	ctx.r22.s64 = ctx.r22.s64 + -32496;
	// addi r23,r23,-20168
	ctx.r23.s64 = ctx.r23.s64 + -20168;
	// addi r24,r24,-20352
	ctx.r24.s64 = ctx.r24.s64 + -20352;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// addi r25,r25,23600
	ctx.r25.s64 = ctx.r25.s64 + 23600;
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// addi r26,r26,19160
	ctx.r26.s64 = ctx.r26.s64 + 19160;
	// addi r27,r27,18992
	ctx.r27.s64 = ctx.r27.s64 + 18992;
	// lis r28,-32206
	ctx.r28.s64 = -2110652416;
	// lis r29,-32206
	ctx.r29.s64 = -2110652416;
	// lis r30,-32206
	ctx.r30.s64 = -2110652416;
	// std r9,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r9.u64);
	// lis r31,-32208
	ctx.r31.s64 = -2110783488;
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// lis r3,-32206
	ctx.r3.s64 = -2110652416;
	// lis r4,-32206
	ctx.r4.s64 = -2110652416;
	// lis r5,-32206
	ctx.r5.s64 = -2110652416;
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r9,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r9,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r9.u64);
	// ld r9,-120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r9,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,124(r11)
	PPC_STORE_U64(ctx.r11.u32 + 124, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,148(r11)
	PPC_STORE_U64(ctx.r11.u32 + 148, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// stw r27,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r27.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// std r9,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// stw r26,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r26.u32);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// std r9,172(r11)
	PPC_STORE_U64(ctx.r11.u32 + 172, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stw r25,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r25.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// std r9,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// stw r24,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r24.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// std r9,196(r11)
	PPC_STORE_U64(ctx.r11.u32 + 196, ctx.r9.u64);
	// ld r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// stw r23,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r23.u32);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// std r9,208(r11)
	PPC_STORE_U64(ctx.r11.u32 + 208, ctx.r9.u64);
	// ld r9,-112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// stw r22,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r22.u32);
	// stw r10,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// std r9,220(r11)
	PPC_STORE_U64(ctx.r11.u32 + 220, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// stw r21,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r21.u32);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// std r9,232(r11)
	PPC_STORE_U64(ctx.r11.u32 + 232, ctx.r9.u64);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// addi r28,r28,18768
	ctx.r28.s64 = ctx.r28.s64 + 18768;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// addi r29,r29,18600
	ctx.r29.s64 = ctx.r29.s64 + 18600;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// addi r30,r30,21976
	ctx.r30.s64 = ctx.r30.s64 + 21976;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// addi r31,r31,16352
	ctx.r31.s64 = ctx.r31.s64 + 16352;
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// addi r3,r3,18472
	ctx.r3.s64 = ctx.r3.s64 + 18472;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r4,r4,18344
	ctx.r4.s64 = ctx.r4.s64 + 18344;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r5,r5,21832
	ctx.r5.s64 = ctx.r5.s64 + 21832;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r6,r6,-29112
	ctx.r6.s64 = ctx.r6.s64 + -29112;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r7,r7,-26808
	ctx.r7.s64 = ctx.r7.s64 + -26808;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r8,r8,-25656
	ctx.r8.s64 = ctx.r8.s64 + -25656;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r9,r9,-27240
	ctx.r9.s64 = ctx.r9.s64 + -27240;
	// stw r10,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// ld r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// stw r28,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r28.u32);
	// stw r29,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r29.u32);
	// stw r30,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r30.u32);
	// stw r31,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r31.u32);
	// std r10,244(r11)
	PPC_STORE_U64(ctx.r11.u32 + 244, ctx.r10.u64);
	// ld r10,-112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// stw r3,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r3.u32);
	// stw r4,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// stw r5,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r5.u32);
	// stw r6,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r6.u32);
	// std r10,256(r11)
	PPC_STORE_U64(ctx.r11.u32 + 256, ctx.r10.u64);
	// ld r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// stw r7,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r7.u32);
	// stw r8,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r8.u32);
	// stw r9,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r9.u32);
	// std r10,268(r11)
	PPC_STORE_U64(ctx.r11.u32 + 268, ctx.r10.u64);
	// ld r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r10,280(r11)
	PPC_STORE_U64(ctx.r11.u32 + 280, ctx.r10.u64);
	// ld r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r10,292(r11)
	PPC_STORE_U64(ctx.r11.u32 + 292, ctx.r10.u64);
	// ld r10,-184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r10,304(r11)
	PPC_STORE_U64(ctx.r11.u32 + 304, ctx.r10.u64);
	// ld r10,-200(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r10,316(r11)
	PPC_STORE_U64(ctx.r11.u32 + 316, ctx.r10.u64);
	// ld r10,-216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r10,328(r11)
	PPC_STORE_U64(ctx.r11.u32 + 328, ctx.r10.u64);
	// ld r10,-232(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r10,340(r11)
	PPC_STORE_U64(ctx.r11.u32 + 340, ctx.r10.u64);
	// ld r10,-248(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r10,352(r11)
	PPC_STORE_U64(ctx.r11.u32 + 352, ctx.r10.u64);
	// ld r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r10,364(r11)
	PPC_STORE_U64(ctx.r11.u32 + 364, ctx.r10.u64);
	// ld r10,-120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r10,376(r11)
	PPC_STORE_U64(ctx.r11.u32 + 376, ctx.r10.u64);
	// ld r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r10,388(r11)
	PPC_STORE_U64(ctx.r11.u32 + 388, ctx.r10.u64);
	// ld r10,-152(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r10,400(r11)
	PPC_STORE_U64(ctx.r11.u32 + 400, ctx.r10.u64);
	// ld r10,-208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r10,412(r11)
	PPC_STORE_U64(ctx.r11.u32 + 412, ctx.r10.u64);
	// ld r10,-136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r10,424(r11)
	PPC_STORE_U64(ctx.r11.u32 + 424, ctx.r10.u64);
	// ld r10,-224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r10,436(r11)
	PPC_STORE_U64(ctx.r11.u32 + 436, ctx.r10.u64);
	// ld r10,-176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r10,448(r11)
	PPC_STORE_U64(ctx.r11.u32 + 448, ctx.r10.u64);
	// ld r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r10,460(r11)
	PPC_STORE_U64(ctx.r11.u32 + 460, ctx.r10.u64);
	// b 0x82e28e9c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831147E8"))) PPC_WEAK_FUNC(sub_831147E8);
PPC_FUNC_IMPL(__imp__sub_831147E8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x831147F0;
	__savegprlr_27(ctx, base);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r11,r11,17968
	ctx.r11.s64 = ctx.r11.s64 + 17968;
	// addi r10,r10,21408
	ctx.r10.s64 = ctx.r10.s64 + 21408;
	// lis r27,-32206
	ctx.r27.s64 = -2110652416;
	// lis r28,-32206
	ctx.r28.s64 = -2110652416;
	// addi r27,r27,17632
	ctx.r27.s64 = ctx.r27.s64 + 17632;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// addi r28,r28,17320
	ctx.r28.s64 = ctx.r28.s64 + 17320;
	// lis r29,-32207
	ctx.r29.s64 = -2110717952;
	// lis r30,-32206
	ctx.r30.s64 = -2110652416;
	// stw r27,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r27.u32);
	// addi r29,r29,-21040
	ctx.r29.s64 = ctx.r29.s64 + -21040;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// addi r30,r30,17152
	ctx.r30.s64 = ctx.r30.s64 + 17152;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// lis r31,-32206
	ctx.r31.s64 = -2110652416;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// lis r3,-32206
	ctx.r3.s64 = -2110652416;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// addi r31,r31,16992
	ctx.r31.s64 = ctx.r31.s64 + 16992;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// addi r3,r3,21696
	ctx.r3.s64 = ctx.r3.s64 + 21696;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// lis r4,-32206
	ctx.r4.s64 = -2110652416;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// lis r5,-32208
	ctx.r5.s64 = -2110783488;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// addi r4,r4,21696
	ctx.r4.s64 = ctx.r4.s64 + 21696;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// addi r5,r5,16224
	ctx.r5.s64 = ctx.r5.s64 + 16224;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lis r6,-32206
	ctx.r6.s64 = -2110652416;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r7,-32206
	ctx.r7.s64 = -2110652416;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// addi r6,r6,21536
	ctx.r6.s64 = ctx.r6.s64 + 21536;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r8,-32207
	ctx.r8.s64 = -2110717952;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// addi r7,r7,16704
	ctx.r7.s64 = ctx.r7.s64 + 16704;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// addi r8,r8,-21232
	ctx.r8.s64 = ctx.r8.s64 + -21232;
	// addi r11,r11,-23480
	ctx.r11.s64 = ctx.r11.s64 + -23480;
	// stw r28,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r28.u32);
	// stw r29,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r29.u32);
	// addi r9,r9,104
	ctx.r9.s64 = ctx.r9.s64 + 104;
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

__attribute__((alias("__imp__sub_83114960"))) PPC_WEAK_FUNC(sub_83114960);
PPC_FUNC_IMPL(__imp__sub_83114960) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// addi r10,r10,-21592
	ctx.r10.s64 = ctx.r10.s64 + -21592;
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
	// addi r11,r11,-18760
	ctx.r11.s64 = ctx.r11.s64 + -18760;
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114998"))) PPC_WEAK_FUNC(sub_83114998);
PPC_FUNC_IMPL(__imp__sub_83114998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,13816
	ctx.r11.s64 = ctx.r11.s64 + 13816;
	// addi r10,r10,27312
	ctx.r10.s64 = ctx.r10.s64 + 27312;
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
	// addi r11,r11,-21404
	ctx.r11.s64 = ctx.r11.s64 + -21404;
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

__attribute__((alias("__imp__sub_831149E8"))) PPC_WEAK_FUNC(sub_831149E8);
PPC_FUNC_IMPL(__imp__sub_831149E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,-5216
	ctx.r11.s64 = ctx.r11.s64 + -5216;
	// addi r10,r10,14024
	ctx.r10.s64 = ctx.r10.s64 + 14024;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r9,r9,14296
	ctx.r9.s64 = ctx.r9.s64 + 14296;
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
	// addi r11,r11,-21512
	ctx.r11.s64 = ctx.r11.s64 + -21512;
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

__attribute__((alias("__imp__sub_83114A50"))) PPC_WEAK_FUNC(sub_83114A50);
PPC_FUNC_IMPL(__imp__sub_83114A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,16064
	ctx.r11.s64 = ctx.r11.s64 + 16064;
	// addi r10,r10,15664
	ctx.r10.s64 = ctx.r10.s64 + 15664;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r9,r9,15792
	ctx.r9.s64 = ctx.r9.s64 + 15792;
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
	// addi r11,r11,-18952
	ctx.r11.s64 = ctx.r11.s64 + -18952;
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

__attribute__((alias("__imp__sub_83114AB8"))) PPC_WEAK_FUNC(sub_83114AB8);
PPC_FUNC_IMPL(__imp__sub_83114AB8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e40
	ctx.lr = 0x83114AC0;
	__savegprlr_18(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// addi r10,r10,13408
	ctx.r10.s64 = ctx.r10.s64 + 13408;
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// lis r24,-32210
	ctx.r24.s64 = -2110914560;
	// lis r25,-32209
	ctx.r25.s64 = -2110849024;
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// lis r29,-32209
	ctx.r29.s64 = -2110849024;
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r21,r21,13280
	ctx.r21.s64 = ctx.r21.s64 + 13280;
	// addi r22,r22,13152
	ctx.r22.s64 = ctx.r22.s64 + 13152;
	// addi r23,r23,13024
	ctx.r23.s64 = ctx.r23.s64 + 13024;
	// addi r24,r24,9160
	ctx.r24.s64 = ctx.r24.s64 + 9160;
	// addi r25,r25,12896
	ctx.r25.s64 = ctx.r25.s64 + 12896;
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// addi r26,r26,12784
	ctx.r26.s64 = ctx.r26.s64 + 12784;
	// stw r21,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r21.u32);
	// addi r27,r27,12616
	ctx.r27.s64 = ctx.r27.s64 + 12616;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// addi r28,r28,12488
	ctx.r28.s64 = ctx.r28.s64 + 12488;
	// stw r22,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r22.u32);
	// addi r29,r29,12360
	ctx.r29.s64 = ctx.r29.s64 + 12360;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r30,r30,12192
	ctx.r30.s64 = ctx.r30.s64 + 12192;
	// stw r23,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r23.u32);
	// addi r31,r31,11840
	ctx.r31.s64 = ctx.r31.s64 + 11840;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r3,r3,11688
	ctx.r3.s64 = ctx.r3.s64 + 11688;
	// stw r24,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r24.u32);
	// addi r4,r4,11336
	ctx.r4.s64 = ctx.r4.s64 + 11336;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// addi r5,r5,11000
	ctx.r5.s64 = ctx.r5.s64 + 11000;
	// stw r25,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r25.u32);
	// addi r6,r6,9704
	ctx.r6.s64 = ctx.r6.s64 + 9704;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r7,r7,10744
	ctx.r7.s64 = ctx.r7.s64 + 10744;
	// stw r26,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r26.u32);
	// addi r8,r8,10576
	ctx.r8.s64 = ctx.r8.s64 + 10576;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// addi r9,r9,10400
	ctx.r9.s64 = ctx.r9.s64 + 10400;
	// stw r27,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r27.u32);
	// addi r11,r11,-12840
	ctx.r11.s64 = ctx.r11.s64 + -12840;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r28,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r28.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r29,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r29.u32);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stw r30,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r30.u32);
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// stw r31,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r31.u32);
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// stw r3,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r3.u32);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r4,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r4.u32);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// stw r5,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r5.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r6,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r6.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stw r7,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r7.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stw r8,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r8.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r9,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r9.u32);
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// stw r11,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r11.u32);
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lis r18,-32207
	ctx.r18.s64 = -2110717952;
	// addi r11,r11,-23240
	ctx.r11.s64 = ctx.r11.s64 + -23240;
	// lis r19,-32209
	ctx.r19.s64 = -2110849024;
	// lis r20,-32209
	ctx.r20.s64 = -2110849024;
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// addi r18,r18,-13016
	ctx.r18.s64 = ctx.r18.s64 + -13016;
	// addi r19,r19,10256
	ctx.r19.s64 = ctx.r19.s64 + 10256;
	// addi r20,r20,10064
	ctx.r20.s64 = ctx.r20.s64 + 10064;
	// addi r21,r21,9896
	ctx.r21.s64 = ctx.r21.s64 + 9896;
	// addi r22,r22,9768
	ctx.r22.s64 = ctx.r22.s64 + 9768;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// addi r23,r23,9600
	ctx.r23.s64 = ctx.r23.s64 + 9600;
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// lis r24,-32207
	ctx.r24.s64 = -2110717952;
	// lis r25,-32209
	ctx.r25.s64 = -2110849024;
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// std r9,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r9.u64);
	// lis r29,-32209
	ctx.r29.s64 = -2110849024;
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// lis r7,-32207
	ctx.r7.s64 = -2110717952;
	// lis r8,-32206
	ctx.r8.s64 = -2110652416;
	// std r9,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,124(r11)
	PPC_STORE_U64(ctx.r11.u32 + 124, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,148(r11)
	PPC_STORE_U64(ctx.r11.u32 + 148, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// stw r23,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r23.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// std r9,172(r11)
	PPC_STORE_U64(ctx.r11.u32 + 172, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r22,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r22.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// std r9,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// stw r21,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r21.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// std r9,196(r11)
	PPC_STORE_U64(ctx.r11.u32 + 196, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stw r20,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r20.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// std r9,208(r11)
	PPC_STORE_U64(ctx.r11.u32 + 208, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// stw r19,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r19.u32);
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// std r9,220(r11)
	PPC_STORE_U64(ctx.r11.u32 + 220, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// stw r18,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r18.u32);
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// std r9,232(r11)
	PPC_STORE_U64(ctx.r11.u32 + 232, ctx.r9.u64);
	// lis r9,-32206
	ctx.r9.s64 = -2110652416;
	// addi r9,r9,-15104
	ctx.r9.s64 = ctx.r9.s64 + -15104;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r24,r24,-13176
	ctx.r24.s64 = ctx.r24.s64 + -13176;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// addi r25,r25,9456
	ctx.r25.s64 = ctx.r25.s64 + 9456;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r26,r26,9296
	ctx.r26.s64 = ctx.r26.s64 + 9296;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r27,r27,9024
	ctx.r27.s64 = ctx.r27.s64 + 9024;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stw r9,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
	// addi r28,r28,8856
	ctx.r28.s64 = ctx.r28.s64 + 8856;
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// addi r29,r29,8704
	ctx.r29.s64 = ctx.r29.s64 + 8704;
	// stw r24,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r24.u32);
	// addi r30,r30,8432
	ctx.r30.s64 = ctx.r30.s64 + 8432;
	// stw r25,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r25.u32);
	// addi r31,r31,8208
	ctx.r31.s64 = ctx.r31.s64 + 8208;
	// stw r26,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r26.u32);
	// addi r3,r3,7776
	ctx.r3.s64 = ctx.r3.s64 + 7776;
	// stw r27,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r27.u32);
	// addi r4,r4,7464
	ctx.r4.s64 = ctx.r4.s64 + 7464;
	// std r9,244(r11)
	PPC_STORE_U64(ctx.r11.u32 + 244, ctx.r9.u64);
	// addi r5,r5,9304
	ctx.r5.s64 = ctx.r5.s64 + 9304;
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// addi r6,r6,7152
	ctx.r6.s64 = ctx.r6.s64 + 7152;
	// stw r28,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// addi r7,r7,-13352
	ctx.r7.s64 = ctx.r7.s64 + -13352;
	// stw r29,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r29.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r30,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r30.u32);
	// std r9,256(r11)
	PPC_STORE_U64(ctx.r11.u32 + 256, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r31,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r31.u32);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r3,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r3.u32);
	// std r9,268(r11)
	PPC_STORE_U64(ctx.r11.u32 + 268, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r4,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// stw r5,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r5.u32);
	// std r9,280(r11)
	PPC_STORE_U64(ctx.r11.u32 + 280, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// stw r6,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r7,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r7.u32);
	// std r9,292(r11)
	PPC_STORE_U64(ctx.r11.u32 + 292, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// std r9,304(r11)
	PPC_STORE_U64(ctx.r11.u32 + 304, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,316(r11)
	PPC_STORE_U64(ctx.r11.u32 + 316, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,328(r11)
	PPC_STORE_U64(ctx.r11.u32 + 328, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,340(r11)
	PPC_STORE_U64(ctx.r11.u32 + 340, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,352(r11)
	PPC_STORE_U64(ctx.r11.u32 + 352, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,364(r11)
	PPC_STORE_U64(ctx.r11.u32 + 364, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,376(r11)
	PPC_STORE_U64(ctx.r11.u32 + 376, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,388(r11)
	PPC_STORE_U64(ctx.r11.u32 + 388, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,400(r11)
	PPC_STORE_U64(ctx.r11.u32 + 400, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,412(r11)
	PPC_STORE_U64(ctx.r11.u32 + 412, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,424(r11)
	PPC_STORE_U64(ctx.r11.u32 + 424, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r9,436(r11)
	PPC_STORE_U64(ctx.r11.u32 + 436, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,448(r11)
	PPC_STORE_U64(ctx.r11.u32 + 448, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,460(r11)
	PPC_STORE_U64(ctx.r11.u32 + 460, ctx.r9.u64);
	// ld r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// std r9,472(r11)
	PPC_STORE_U64(ctx.r11.u32 + 472, ctx.r9.u64);
	// addi r9,r8,-15416
	ctx.r9.s64 = ctx.r8.s64 + -15416;
	// lis r19,-32206
	ctx.r19.s64 = -2110652416;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// lis r20,-32206
	ctx.r20.s64 = -2110652416;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// lis r21,-32206
	ctx.r21.s64 = -2110652416;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stw r9,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r9.u32);
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// lis r24,-32209
	ctx.r24.s64 = -2110849024;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// lis r25,-32209
	ctx.r25.s64 = -2110849024;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// lis r28,-32208
	ctx.r28.s64 = -2110783488;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// lis r29,-32201
	ctx.r29.s64 = -2110324736;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// lis r30,-32201
	ctx.r30.s64 = -2110324736;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r19,r19,-15728
	ctx.r19.s64 = ctx.r19.s64 + -15728;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// addi r20,r20,-16040
	ctx.r20.s64 = ctx.r20.s64 + -16040;
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// addi r21,r21,-16352
	ctx.r21.s64 = ctx.r21.s64 + -16352;
	// addi r22,r22,7024
	ctx.r22.s64 = ctx.r22.s64 + 7024;
	// addi r23,r23,6872
	ctx.r23.s64 = ctx.r23.s64 + 6872;
	// addi r24,r24,6744
	ctx.r24.s64 = ctx.r24.s64 + 6744;
	// stw r19,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r19.u32);
	// addi r25,r25,6504
	ctx.r25.s64 = ctx.r25.s64 + 6504;
	// stw r20,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r20.u32);
	// addi r26,r26,6344
	ctx.r26.s64 = ctx.r26.s64 + 6344;
	// stw r21,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r21.u32);
	// addi r27,r27,6040
	ctx.r27.s64 = ctx.r27.s64 + 6040;
	// stw r22,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r22.u32);
	// addi r28,r28,26360
	ctx.r28.s64 = ctx.r28.s64 + 26360;
	// stw r23,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r23.u32);
	// addi r29,r29,-15736
	ctx.r29.s64 = ctx.r29.s64 + -15736;
	// stw r24,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r24.u32);
	// addi r30,r30,-16176
	ctx.r30.s64 = ctx.r30.s64 + -16176;
	// stw r25,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r25.u32);
	// addi r31,r31,5896
	ctx.r31.s64 = ctx.r31.s64 + 5896;
	// stw r26,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r26.u32);
	// addi r3,r3,5752
	ctx.r3.s64 = ctx.r3.s64 + 5752;
	// stw r27,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r27.u32);
	// addi r4,r4,5608
	ctx.r4.s64 = ctx.r4.s64 + 5608;
	// stw r28,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// addi r5,r5,5440
	ctx.r5.s64 = ctx.r5.s64 + 5440;
	// stw r29,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r29.u32);
	// addi r6,r6,5296
	ctx.r6.s64 = ctx.r6.s64 + 5296;
	// stw r30,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r30.u32);
	// addi r7,r7,5152
	ctx.r7.s64 = ctx.r7.s64 + 5152;
	// stw r31,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r31.u32);
	// addi r9,r9,5008
	ctx.r9.s64 = ctx.r9.s64 + 5008;
	// stw r3,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r3.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r4,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// stw r5,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r5.u32);
	// stw r6,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// stw r7,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r7.u32);
	// stw r9,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// lis r19,-32209
	ctx.r19.s64 = -2110849024;
	// lis r20,-32209
	ctx.r20.s64 = -2110849024;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// std r9,484(r11)
	PPC_STORE_U64(ctx.r11.u32 + 484, ctx.r9.u64);
	// lis r24,-32209
	ctx.r24.s64 = -2110849024;
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// addi r19,r19,4704
	ctx.r19.s64 = ctx.r19.s64 + 4704;
	// addi r20,r20,4560
	ctx.r20.s64 = ctx.r20.s64 + 4560;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// addi r21,r21,4400
	ctx.r21.s64 = ctx.r21.s64 + 4400;
	// addi r22,r22,4160
	ctx.r22.s64 = ctx.r22.s64 + 4160;
	// addi r23,r23,3920
	ctx.r23.s64 = ctx.r23.s64 + 3920;
	// std r9,496(r11)
	PPC_STORE_U64(ctx.r11.u32 + 496, ctx.r9.u64);
	// addi r24,r24,3776
	ctx.r24.s64 = ctx.r24.s64 + 3776;
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lis r25,-32209
	ctx.r25.s64 = -2110849024;
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// stw r19,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r19.u32);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// stw r20,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r20.u32);
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r29,-32209
	ctx.r29.s64 = -2110849024;
	// std r9,508(r11)
	PPC_STORE_U64(ctx.r11.u32 + 508, ctx.r9.u64);
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// stw r21,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r21.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// std r9,520(r11)
	PPC_STORE_U64(ctx.r11.u32 + 520, ctx.r9.u64);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r22,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r22.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// std r9,532(r11)
	PPC_STORE_U64(ctx.r11.u32 + 532, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// stw r23,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r23.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// std r9,544(r11)
	PPC_STORE_U64(ctx.r11.u32 + 544, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// stw r24,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r24.u32);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// std r9,556(r11)
	PPC_STORE_U64(ctx.r11.u32 + 556, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,568(r11)
	PPC_STORE_U64(ctx.r11.u32 + 568, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,580(r11)
	PPC_STORE_U64(ctx.r11.u32 + 580, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,592(r11)
	PPC_STORE_U64(ctx.r11.u32 + 592, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,604(r11)
	PPC_STORE_U64(ctx.r11.u32 + 604, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,616(r11)
	PPC_STORE_U64(ctx.r11.u32 + 616, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,628(r11)
	PPC_STORE_U64(ctx.r11.u32 + 628, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,640(r11)
	PPC_STORE_U64(ctx.r11.u32 + 640, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,652(r11)
	PPC_STORE_U64(ctx.r11.u32 + 652, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,664(r11)
	PPC_STORE_U64(ctx.r11.u32 + 664, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r9,676(r11)
	PPC_STORE_U64(ctx.r11.u32 + 676, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,688(r11)
	PPC_STORE_U64(ctx.r11.u32 + 688, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,700(r11)
	PPC_STORE_U64(ctx.r11.u32 + 700, ctx.r9.u64);
	// ld r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// std r9,712(r11)
	PPC_STORE_U64(ctx.r11.u32 + 712, ctx.r9.u64);
	// addi r9,r8,4848
	ctx.r9.s64 = ctx.r8.s64 + 4848;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r9,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r9.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r9,r9,1624
	ctx.r9.s64 = ctx.r9.s64 + 1624;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// addi r25,r25,3632
	ctx.r25.s64 = ctx.r25.s64 + 3632;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r26,r26,3488
	ctx.r26.s64 = ctx.r26.s64 + 3488;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r27,r27,3344
	ctx.r27.s64 = ctx.r27.s64 + 3344;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r28,r28,3096
	ctx.r28.s64 = ctx.r28.s64 + 3096;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// addi r29,r29,2920
	ctx.r29.s64 = ctx.r29.s64 + 2920;
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// addi r30,r30,2776
	ctx.r30.s64 = ctx.r30.s64 + 2776;
	// stw r25,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r25.u32);
	// addi r31,r31,2632
	ctx.r31.s64 = ctx.r31.s64 + 2632;
	// stw r26,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r26.u32);
	// addi r3,r3,2488
	ctx.r3.s64 = ctx.r3.s64 + 2488;
	// stw r27,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r27.u32);
	// addi r4,r4,2344
	ctx.r4.s64 = ctx.r4.s64 + 2344;
	// stw r28,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// addi r5,r5,2200
	ctx.r5.s64 = ctx.r5.s64 + 2200;
	// std r9,724(r11)
	PPC_STORE_U64(ctx.r11.u32 + 724, ctx.r9.u64);
	// addi r6,r6,2056
	ctx.r6.s64 = ctx.r6.s64 + 2056;
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// addi r7,r7,1912
	ctx.r7.s64 = ctx.r7.s64 + 1912;
	// stw r29,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r29.u32);
	// addi r8,r8,1768
	ctx.r8.s64 = ctx.r8.s64 + 1768;
	// stw r30,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r30.u32);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r31,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r31.u32);
	// std r9,736(r11)
	PPC_STORE_U64(ctx.r11.u32 + 736, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r3,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r3.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r4,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// std r9,748(r11)
	PPC_STORE_U64(ctx.r11.u32 + 748, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// stw r5,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r5.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// stw r6,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r6.u32);
	// std r9,760(r11)
	PPC_STORE_U64(ctx.r11.u32 + 760, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r7,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r7.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r8,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r8.u32);
	// std r9,772(r11)
	PPC_STORE_U64(ctx.r11.u32 + 772, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// std r9,784(r11)
	PPC_STORE_U64(ctx.r11.u32 + 784, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,796(r11)
	PPC_STORE_U64(ctx.r11.u32 + 796, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,808(r11)
	PPC_STORE_U64(ctx.r11.u32 + 808, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,820(r11)
	PPC_STORE_U64(ctx.r11.u32 + 820, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,832(r11)
	PPC_STORE_U64(ctx.r11.u32 + 832, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,844(r11)
	PPC_STORE_U64(ctx.r11.u32 + 844, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,856(r11)
	PPC_STORE_U64(ctx.r11.u32 + 856, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,868(r11)
	PPC_STORE_U64(ctx.r11.u32 + 868, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,880(r11)
	PPC_STORE_U64(ctx.r11.u32 + 880, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,892(r11)
	PPC_STORE_U64(ctx.r11.u32 + 892, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,904(r11)
	PPC_STORE_U64(ctx.r11.u32 + 904, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r9,916(r11)
	PPC_STORE_U64(ctx.r11.u32 + 916, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,928(r11)
	PPC_STORE_U64(ctx.r11.u32 + 928, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,940(r11)
	PPC_STORE_U64(ctx.r11.u32 + 940, ctx.r9.u64);
	// ld r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// std r9,952(r11)
	PPC_STORE_U64(ctx.r11.u32 + 952, ctx.r9.u64);
	// lis r19,-32209
	ctx.r19.s64 = -2110849024;
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lis r20,-32209
	ctx.r20.s64 = -2110849024;
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// lis r24,-32209
	ctx.r24.s64 = -2110849024;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r25,-32209
	ctx.r25.s64 = -2110849024;
	// std r9,964(r11)
	PPC_STORE_U64(ctx.r11.u32 + 964, ctx.r9.u64);
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r29,-32209
	ctx.r29.s64 = -2110849024;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r19,r19,1480
	ctx.r19.s64 = ctx.r19.s64 + 1480;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// addi r20,r20,1336
	ctx.r20.s64 = ctx.r20.s64 + 1336;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r21,r21,1192
	ctx.r21.s64 = ctx.r21.s64 + 1192;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r22,r22,1048
	ctx.r22.s64 = ctx.r22.s64 + 1048;
	// addi r23,r23,904
	ctx.r23.s64 = ctx.r23.s64 + 904;
	// addi r24,r24,760
	ctx.r24.s64 = ctx.r24.s64 + 760;
	// stw r19,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r19.u32);
	// addi r25,r25,616
	ctx.r25.s64 = ctx.r25.s64 + 616;
	// stw r20,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r20.u32);
	// addi r26,r26,472
	ctx.r26.s64 = ctx.r26.s64 + 472;
	// stw r21,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r21.u32);
	// addi r27,r27,328
	ctx.r27.s64 = ctx.r27.s64 + 328;
	// stw r22,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r22.u32);
	// addi r28,r28,184
	ctx.r28.s64 = ctx.r28.s64 + 184;
	// stw r23,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r23.u32);
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// stw r24,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r24.u32);
	// addi r30,r30,-88
	ctx.r30.s64 = ctx.r30.s64 + -88;
	// stw r25,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r25.u32);
	// addi r31,r31,-232
	ctx.r31.s64 = ctx.r31.s64 + -232;
	// stw r26,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r26.u32);
	// addi r3,r3,-392
	ctx.r3.s64 = ctx.r3.s64 + -392;
	// stw r27,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r27.u32);
	// addi r4,r4,-536
	ctx.r4.s64 = ctx.r4.s64 + -536;
	// stw r28,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r28.u32);
	// addi r5,r5,-680
	ctx.r5.s64 = ctx.r5.s64 + -680;
	// stw r29,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r29.u32);
	// addi r6,r6,-824
	ctx.r6.s64 = ctx.r6.s64 + -824;
	// stw r30,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r30.u32);
	// addi r7,r7,-968
	ctx.r7.s64 = ctx.r7.s64 + -968;
	// stw r31,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r31.u32);
	// addi r8,r8,-1112
	ctx.r8.s64 = ctx.r8.s64 + -1112;
	// stw r3,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r3.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r4,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r4.u32);
	// stw r5,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// stw r6,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r6.u32);
	// addi r9,r9,-1360
	ctx.r9.s64 = ctx.r9.s64 + -1360;
	// stw r7,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r7.u32);
	// stw r8,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r8.u32);
	// stw r9,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r9.u32);
	// lis r18,-32209
	ctx.r18.s64 = -2110849024;
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lis r19,-32209
	ctx.r19.s64 = -2110849024;
	// lis r20,-32209
	ctx.r20.s64 = -2110849024;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// std r9,976(r11)
	PPC_STORE_U64(ctx.r11.u32 + 976, ctx.r9.u64);
	// addi r18,r18,-1504
	ctx.r18.s64 = ctx.r18.s64 + -1504;
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// addi r19,r19,-1648
	ctx.r19.s64 = ctx.r19.s64 + -1648;
	// addi r20,r20,-1824
	ctx.r20.s64 = ctx.r20.s64 + -1824;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r21,r21,-1984
	ctx.r21.s64 = ctx.r21.s64 + -1984;
	// addi r22,r22,-2128
	ctx.r22.s64 = ctx.r22.s64 + -2128;
	// addi r23,r23,-2304
	ctx.r23.s64 = ctx.r23.s64 + -2304;
	// stw r18,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r18.u32);
	// std r9,988(r11)
	PPC_STORE_U64(ctx.r11.u32 + 988, ctx.r9.u64);
	// lis r24,-32209
	ctx.r24.s64 = -2110849024;
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// lis r25,-32209
	ctx.r25.s64 = -2110849024;
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// stw r19,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r19.u32);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// stw r20,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r20.u32);
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// lis r29,-32209
	ctx.r29.s64 = -2110849024;
	// std r9,1000(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1000, ctx.r9.u64);
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// stw r21,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r21.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// std r9,1012(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1012, ctx.r9.u64);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r22,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r22.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// std r9,1024(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1024, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r23,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r23.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// std r9,1036(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1036, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,1048(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1048, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,1060(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1060, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,1072(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1072, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,1084(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1084, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,1096(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1096, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,1108(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1108, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,1120(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1120, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,1132(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1132, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,1144(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1144, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,1156(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1156, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,1168(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1168, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r9,1180(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1180, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,1192(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1192, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,1204(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1204, ctx.r9.u64);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r9,r9,-4296
	ctx.r9.s64 = ctx.r9.s64 + -4296;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r24,r24,-2480
	ctx.r24.s64 = ctx.r24.s64 + -2480;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r25,r25,-2624
	ctx.r25.s64 = ctx.r25.s64 + -2624;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// addi r26,r26,-2768
	ctx.r26.s64 = ctx.r26.s64 + -2768;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r27,r27,-2912
	ctx.r27.s64 = ctx.r27.s64 + -2912;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// stw r9,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r9.u32);
	// addi r28,r28,-3056
	ctx.r28.s64 = ctx.r28.s64 + -3056;
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// addi r29,r29,-3200
	ctx.r29.s64 = ctx.r29.s64 + -3200;
	// stw r24,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r24.u32);
	// addi r30,r30,-3376
	ctx.r30.s64 = ctx.r30.s64 + -3376;
	// stw r25,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r25.u32);
	// addi r31,r31,-3552
	ctx.r31.s64 = ctx.r31.s64 + -3552;
	// stw r26,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r26.u32);
	// addi r3,r3,-3720
	ctx.r3.s64 = ctx.r3.s64 + -3720;
	// stw r27,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r27.u32);
	// addi r4,r4,-3848
	ctx.r4.s64 = ctx.r4.s64 + -3848;
	// std r9,1216(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1216, ctx.r9.u64);
	// addi r5,r5,-4008
	ctx.r5.s64 = ctx.r5.s64 + -4008;
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// addi r6,r6,10504
	ctx.r6.s64 = ctx.r6.s64 + 10504;
	// stw r28,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r28.u32);
	// addi r7,r7,-4120
	ctx.r7.s64 = ctx.r7.s64 + -4120;
	// stw r29,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r29.u32);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stw r30,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r30.u32);
	// std r9,1228(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1228, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r31,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r31.u32);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r3,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r3.u32);
	// std r9,1240(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1240, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r4,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r5,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r5.u32);
	// std r9,1252(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1252, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// stw r6,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r6.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// stw r7,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r7.u32);
	// std r9,1264(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1264, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// std r9,1276(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1276, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,1288(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1288, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,1300(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1300, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,1312(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1312, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,1324(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1324, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,1336(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1336, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,1348(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1348, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,1360(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1360, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,1372(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1372, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,1384(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1384, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,1396(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1396, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,1408(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1408, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r9,1420(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1420, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,1432(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1432, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,1444(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1444, ctx.r9.u64);
	// addi r9,r8,-4456
	ctx.r9.s64 = ctx.r8.s64 + -4456;
	// lis r19,-32209
	ctx.r19.s64 = -2110849024;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lis r20,-32209
	ctx.r20.s64 = -2110849024;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// lis r24,-32207
	ctx.r24.s64 = -2110717952;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// lis r25,-32207
	ctx.r25.s64 = -2110717952;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// lis r29,-32210
	ctx.r29.s64 = -2110914560;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r3,-32207
	ctx.r3.s64 = -2110717952;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r5,-32207
	ctx.r5.s64 = -2110717952;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r19,r19,-4632
	ctx.r19.s64 = ctx.r19.s64 + -4632;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r20,r20,-4760
	ctx.r20.s64 = ctx.r20.s64 + -4760;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// addi r21,r21,-4888
	ctx.r21.s64 = ctx.r21.s64 + -4888;
	// addi r22,r22,-5016
	ctx.r22.s64 = ctx.r22.s64 + -5016;
	// addi r23,r23,-5352
	ctx.r23.s64 = ctx.r23.s64 + -5352;
	// addi r24,r24,-13600
	ctx.r24.s64 = ctx.r24.s64 + -13600;
	// stw r19,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r19.u32);
	// addi r25,r25,-13848
	ctx.r25.s64 = ctx.r25.s64 + -13848;
	// stw r20,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r20.u32);
	// addi r26,r26,-5496
	ctx.r26.s64 = ctx.r26.s64 + -5496;
	// stw r21,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r21.u32);
	// addi r27,r27,-5624
	ctx.r27.s64 = ctx.r27.s64 + -5624;
	// stw r22,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r22.u32);
	// addi r28,r28,-5752
	ctx.r28.s64 = ctx.r28.s64 + -5752;
	// stw r23,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r23.u32);
	// addi r29,r29,18888
	ctx.r29.s64 = ctx.r29.s64 + 18888;
	// stw r24,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r24.u32);
	// addi r30,r30,-5864
	ctx.r30.s64 = ctx.r30.s64 + -5864;
	// stw r25,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r25.u32);
	// addi r31,r31,-6112
	ctx.r31.s64 = ctx.r31.s64 + -6112;
	// stw r26,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r26.u32);
	// addi r3,r3,-14032
	ctx.r3.s64 = ctx.r3.s64 + -14032;
	// stw r27,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r27.u32);
	// addi r4,r4,-6224
	ctx.r4.s64 = ctx.r4.s64 + -6224;
	// stw r28,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r28.u32);
	// addi r5,r5,-14184
	ctx.r5.s64 = ctx.r5.s64 + -14184;
	// stw r29,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r29.u32);
	// addi r6,r6,-6392
	ctx.r6.s64 = ctx.r6.s64 + -6392;
	// stw r30,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r30.u32);
	// addi r7,r7,-6544
	ctx.r7.s64 = ctx.r7.s64 + -6544;
	// stw r31,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r31.u32);
	// addi r9,r9,-6736
	ctx.r9.s64 = ctx.r9.s64 + -6736;
	// stw r3,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r3.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r4,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r4.u32);
	// stw r5,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r5.u32);
	// stw r6,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r6.u32);
	// stw r7,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r7.u32);
	// stw r9,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r9.u32);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// std r9,1456(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1456, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// std r9,1468(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1468, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// stw r10,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// std r9,1480(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1480, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r9,1492(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1492, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r9,1504(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1504, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r9,1516(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1516, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,1528(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1528, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,1540(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1540, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,1552(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1552, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,1564(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1564, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,1576(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1576, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,1588(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1588, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,1600(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1600, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,1612(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1612, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,1624(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1624, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,1636(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1636, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,1648(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1648, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r9,1660(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1660, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,1672(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1672, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,1684(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1684, ctx.r9.u64);
	// addi r9,r8,-6888
	ctx.r9.s64 = ctx.r8.s64 + -6888;
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// ld r10,-136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// addi r9,r9,-7128
	ctx.r9.s64 = ctx.r9.s64 + -7128;
	// std r10,1696(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1696, ctx.r10.u64);
	// stw r9,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r9.u32);
	// ld r10,-288(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// std r10,1708(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1708, ctx.r10.u64);
	// ld r10,-280(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r10,1720(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1720, ctx.r10.u64);
	// b 0x82e28e90
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83115848"))) PPC_WEAK_FUNC(sub_83115848);
PPC_FUNC_IMPL(__imp__sub_83115848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,26168
	ctx.r11.s64 = ctx.r11.s64 + 26168;
	// addi r10,r10,-9056
	ctx.r10.s64 = ctx.r10.s64 + -9056;
	// lis r3,-32207
	ctx.r3.s64 = -2110717952;
	// lis r4,-32208
	ctx.r4.s64 = -2110783488;
	// addi r3,r3,27544
	ctx.r3.s64 = ctx.r3.s64 + 27544;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r4,r4,26048
	ctx.r4.s64 = ctx.r4.s64 + 26048;
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r3,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r3.u32);
	// addi r5,r5,-8336
	ctx.r5.s64 = ctx.r5.s64 + -8336;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r6,r6,-8480
	ctx.r6.s64 = ctx.r6.s64 + -8480;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r7,r7,-8624
	ctx.r7.s64 = ctx.r7.s64 + -8624;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r8,r8,-8768
	ctx.r8.s64 = ctx.r8.s64 + -8768;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// addi r9,r9,-8912
	ctx.r9.s64 = ctx.r9.s64 + -8912;
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
	// addi r11,r11,-19072
	ctx.r11.s64 = ctx.r11.s64 + -19072;
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

__attribute__((alias("__imp__sub_83115940"))) PPC_WEAK_FUNC(sub_83115940);
PPC_FUNC_IMPL(__imp__sub_83115940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r11,-15392
	ctx.r11.s64 = ctx.r11.s64 + -15392;
	// addi r10,r10,-15608
	ctx.r10.s64 = ctx.r10.s64 + -15608;
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
	// addi r11,r11,-19580
	ctx.r11.s64 = ctx.r11.s64 + -19580;
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

__attribute__((alias("__imp__sub_83115990"))) PPC_WEAK_FUNC(sub_83115990);
PPC_FUNC_IMPL(__imp__sub_83115990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r11,16488
	ctx.r11.s64 = ctx.r11.s64 + 16488;
	// addi r10,r10,-15224
	ctx.r10.s64 = ctx.r10.s64 + -15224;
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
	// addi r11,r11,-23276
	ctx.r11.s64 = ctx.r11.s64 + -23276;
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

__attribute__((alias("__imp__sub_831159E0"))) PPC_WEAK_FUNC(sub_831159E0);
PPC_FUNC_IMPL(__imp__sub_831159E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,-14952
	ctx.r11.s64 = ctx.r11.s64 + -14952;
	// addi r10,r10,8896
	ctx.r10.s64 = ctx.r10.s64 + 8896;
	// lis r8,-32207
	ctx.r8.s64 = -2110717952;
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// addi r8,r8,-1104
	ctx.r8.s64 = ctx.r8.s64 + -1104;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r9,r9,-1360
	ctx.r9.s64 = ctx.r9.s64 + -1360;
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
	// addi r11,r11,-21464
	ctx.r11.s64 = ctx.r11.s64 + -21464;
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

__attribute__((alias("__imp__sub_83115A60"))) PPC_WEAK_FUNC(sub_83115A60);
PPC_FUNC_IMPL(__imp__sub_83115A60) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r10,r10,7616
	ctx.r10.s64 = ctx.r10.s64 + 7616;
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
	// addi r11,r11,-23300
	ctx.r11.s64 = ctx.r11.s64 + -23300;
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115A98"))) PPC_WEAK_FUNC(sub_83115A98);
PPC_FUNC_IMPL(__imp__sub_83115A98) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e4c
	ctx.lr = 0x83115AA0;
	__savegprlr_21(ctx, base);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r21,-32208
	ctx.r21.s64 = -2110783488;
	// addi r10,r10,-7512
	ctx.r10.s64 = ctx.r10.s64 + -7512;
	// lis r22,-32208
	ctx.r22.s64 = -2110783488;
	// lis r23,-32208
	ctx.r23.s64 = -2110783488;
	// lis r24,-32208
	ctx.r24.s64 = -2110783488;
	// lis r25,-32210
	ctx.r25.s64 = -2110914560;
	// lis r26,-32207
	ctx.r26.s64 = -2110717952;
	// stw r10,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r10.u32);
	// lis r27,-32208
	ctx.r27.s64 = -2110783488;
	// lis r28,-32208
	ctx.r28.s64 = -2110783488;
	// lis r29,-32208
	ctx.r29.s64 = -2110783488;
	// lis r30,-32210
	ctx.r30.s64 = -2110914560;
	// lis r31,-32208
	ctx.r31.s64 = -2110783488;
	// lis r3,-32208
	ctx.r3.s64 = -2110783488;
	// lis r4,-32208
	ctx.r4.s64 = -2110783488;
	// lis r5,-32208
	ctx.r5.s64 = -2110783488;
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r21,r21,-7624
	ctx.r21.s64 = ctx.r21.s64 + -7624;
	// addi r22,r22,-7736
	ctx.r22.s64 = ctx.r22.s64 + -7736;
	// addi r23,r23,-7896
	ctx.r23.s64 = ctx.r23.s64 + -7896;
	// addi r24,r24,-8072
	ctx.r24.s64 = ctx.r24.s64 + -8072;
	// addi r25,r25,7904
	ctx.r25.s64 = ctx.r25.s64 + 7904;
	// stw r10,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r10.u32);
	// addi r26,r26,-6448
	ctx.r26.s64 = ctx.r26.s64 + -6448;
	// stw r21,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r21.u32);
	// addi r27,r27,-8376
	ctx.r27.s64 = ctx.r27.s64 + -8376;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// addi r28,r28,-8856
	ctx.r28.s64 = ctx.r28.s64 + -8856;
	// stw r22,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r22.u32);
	// addi r29,r29,-9024
	ctx.r29.s64 = ctx.r29.s64 + -9024;
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// addi r30,r30,12688
	ctx.r30.s64 = ctx.r30.s64 + 12688;
	// stw r23,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r23.u32);
	// addi r31,r31,-9192
	ctx.r31.s64 = ctx.r31.s64 + -9192;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// addi r3,r3,-9352
	ctx.r3.s64 = ctx.r3.s64 + -9352;
	// stw r24,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r24.u32);
	// addi r4,r4,-9528
	ctx.r4.s64 = ctx.r4.s64 + -9528;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r5,r5,-9800
	ctx.r5.s64 = ctx.r5.s64 + -9800;
	// stw r25,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r25.u32);
	// addi r6,r6,-10072
	ctx.r6.s64 = ctx.r6.s64 + -10072;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r7,r7,-10200
	ctx.r7.s64 = ctx.r7.s64 + -10200;
	// stw r26,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r26.u32);
	// addi r8,r8,-10360
	ctx.r8.s64 = ctx.r8.s64 + -10360;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r9,r9,-10488
	ctx.r9.s64 = ctx.r9.s64 + -10488;
	// stw r27,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r27.u32);
	// addi r11,r11,-10664
	ctx.r11.s64 = ctx.r11.s64 + -10664;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// stw r28,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r28.u32);
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// stw r29,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r29.u32);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r30,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r30.u32);
	// stw r10,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// stw r31,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r31.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r3,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r3.u32);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r4,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r4.u32);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// stw r5,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r5.u32);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r6,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r6.u32);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// stw r7,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r7.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r8,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r11,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r11.u32);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r9,-104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lis r31,-32208
	ctx.r31.s64 = -2110783488;
	// addi r11,r11,-19928
	ctx.r11.s64 = ctx.r11.s64 + -19928;
	// addi r31,r31,-10792
	ctx.r31.s64 = ctx.r31.s64 + -10792;
	// lis r3,-32208
	ctx.r3.s64 = -2110783488;
	// lis r4,-32208
	ctx.r4.s64 = -2110783488;
	// addi r3,r3,-10968
	ctx.r3.s64 = ctx.r3.s64 + -10968;
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// lis r5,-32208
	ctx.r5.s64 = -2110783488;
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// lis r7,-32208
	ctx.r7.s64 = -2110783488;
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// addi r4,r4,-11144
	ctx.r4.s64 = ctx.r4.s64 + -11144;
	// addi r5,r5,-11320
	ctx.r5.s64 = ctx.r5.s64 + -11320;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// addi r6,r6,-11448
	ctx.r6.s64 = ctx.r6.s64 + -11448;
	// ld r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// addi r7,r7,-11576
	ctx.r7.s64 = ctx.r7.s64 + -11576;
	// addi r8,r8,-11840
	ctx.r8.s64 = ctx.r8.s64 + -11840;
	// std r9,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r9,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r9,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r9.u64);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r9,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r9.u64);
	// ld r9,-120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r9,100(r11)
	PPC_STORE_U64(ctx.r11.u32 + 100, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r9.u64);
	// ld r9,-112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// std r9,124(r11)
	PPC_STORE_U64(ctx.r11.u32 + 124, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// stw r10,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// std r9,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// std r9,148(r11)
	PPC_STORE_U64(ctx.r11.u32 + 148, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// stw r8,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r8.u32);
	// std r9,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r7,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r7.u32);
	// std r9,172(r11)
	PPC_STORE_U64(ctx.r11.u32 + 172, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// stw r6,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r6.u32);
	// std r9,184(r11)
	PPC_STORE_U64(ctx.r11.u32 + 184, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r5,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r5.u32);
	// std r9,196(r11)
	PPC_STORE_U64(ctx.r11.u32 + 196, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stw r4,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r4.u32);
	// std r9,208(r11)
	PPC_STORE_U64(ctx.r11.u32 + 208, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r3,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r3.u32);
	// std r9,220(r11)
	PPC_STORE_U64(ctx.r11.u32 + 220, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// stw r31,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r31.u32);
	// ld r10,-248(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,232(r11)
	PPC_STORE_U64(ctx.r11.u32 + 232, ctx.r9.u64);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r9,r9,-11968
	ctx.r9.s64 = ctx.r9.s64 + -11968;
	// std r10,244(r11)
	PPC_STORE_U64(ctx.r11.u32 + 244, ctx.r10.u64);
	// ld r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// stw r9,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r9.u32);
	// std r10,256(r11)
	PPC_STORE_U64(ctx.r11.u32 + 256, ctx.r10.u64);
	// ld r10,-208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r10,268(r11)
	PPC_STORE_U64(ctx.r11.u32 + 268, ctx.r10.u64);
	// ld r10,-224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r10,280(r11)
	PPC_STORE_U64(ctx.r11.u32 + 280, ctx.r10.u64);
	// ld r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r10,292(r11)
	PPC_STORE_U64(ctx.r11.u32 + 292, ctx.r10.u64);
	// ld r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r10,304(r11)
	PPC_STORE_U64(ctx.r11.u32 + 304, ctx.r10.u64);
	// ld r10,-200(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r10,316(r11)
	PPC_STORE_U64(ctx.r11.u32 + 316, ctx.r10.u64);
	// ld r10,-232(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r10,328(r11)
	PPC_STORE_U64(ctx.r11.u32 + 328, ctx.r10.u64);
	// ld r10,-216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r10,340(r11)
	PPC_STORE_U64(ctx.r11.u32 + 340, ctx.r10.u64);
	// b 0x82e28e9c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83115D60"))) PPC_WEAK_FUNC(sub_83115D60);
PPC_FUNC_IMPL(__imp__sub_83115D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r11,4440
	ctx.r11.s64 = ctx.r11.s64 + 4440;
	// addi r10,r10,4312
	ctx.r10.s64 = ctx.r10.s64 + 4312;
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
	// addi r11,r11,-23516
	ctx.r11.s64 = ctx.r11.s64 + -23516;
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

__attribute__((alias("__imp__sub_83115DB0"))) PPC_WEAK_FUNC(sub_83115DB0);
PPC_FUNC_IMPL(__imp__sub_83115DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r11,4440
	ctx.r11.s64 = ctx.r11.s64 + 4440;
	// addi r10,r10,4312
	ctx.r10.s64 = ctx.r10.s64 + 4312;
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
	// addi r11,r11,-19964
	ctx.r11.s64 = ctx.r11.s64 + -19964;
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

__attribute__((alias("__imp__sub_83115E00"))) PPC_WEAK_FUNC(sub_83115E00);
PPC_FUNC_IMPL(__imp__sub_83115E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r11,5640
	ctx.r11.s64 = ctx.r11.s64 + 5640;
	// addi r10,r10,5200
	ctx.r10.s64 = ctx.r10.s64 + 5200;
	// lis r7,-32207
	ctx.r7.s64 = -2110717952;
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// addi r7,r7,-3680
	ctx.r7.s64 = ctx.r7.s64 + -3680;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r8,r8,5496
	ctx.r8.s64 = ctx.r8.s64 + 5496;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// addi r9,r9,5328
	ctx.r9.s64 = ctx.r9.s64 + 5328;
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
	// addi r11,r11,-18904
	ctx.r11.s64 = ctx.r11.s64 + -18904;
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

__attribute__((alias("__imp__sub_83115E98"))) PPC_WEAK_FUNC(sub_83115E98);
PPC_FUNC_IMPL(__imp__sub_83115E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r11,5056
	ctx.r11.s64 = ctx.r11.s64 + 5056;
	// addi r10,r10,4616
	ctx.r10.s64 = ctx.r10.s64 + 4616;
	// lis r7,-32207
	ctx.r7.s64 = -2110717952;
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// addi r7,r7,-3864
	ctx.r7.s64 = ctx.r7.s64 + -3864;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r8,r8,4912
	ctx.r8.s64 = ctx.r8.s64 + 4912;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// addi r9,r9,4744
	ctx.r9.s64 = ctx.r9.s64 + 4744;
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
	// addi r11,r11,-18832
	ctx.r11.s64 = ctx.r11.s64 + -18832;
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

__attribute__((alias("__imp__sub_83115F30"))) PPC_WEAK_FUNC(sub_83115F30);
PPC_FUNC_IMPL(__imp__sub_83115F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r11,6880
	ctx.r11.s64 = ctx.r11.s64 + 6880;
	// addi r10,r10,6616
	ctx.r10.s64 = ctx.r10.s64 + 6616;
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
	// addi r11,r11,-20000
	ctx.r11.s64 = ctx.r11.s64 + -20000;
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

__attribute__((alias("__imp__sub_83115F80"))) PPC_WEAK_FUNC(sub_83115F80);
PPC_FUNC_IMPL(__imp__sub_83115F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,6480
	ctx.r11.s64 = ctx.r11.s64 + 6480;
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

__attribute__((alias("__imp__sub_83115FB0"))) PPC_WEAK_FUNC(sub_83115FB0);
PPC_FUNC_IMPL(__imp__sub_83115FB0) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6512
	ctx.r11.s64 = ctx.r11.s64 + 6512;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115FE0"))) PPC_WEAK_FUNC(sub_83115FE0);
PPC_FUNC_IMPL(__imp__sub_83115FE0) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6528
	ctx.r11.s64 = ctx.r11.s64 + 6528;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116028"))) PPC_WEAK_FUNC(sub_83116028);
PPC_FUNC_IMPL(__imp__sub_83116028) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6496
	ctx.r11.s64 = ctx.r11.s64 + 6496;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116070"))) PPC_WEAK_FUNC(sub_83116070);
PPC_FUNC_IMPL(__imp__sub_83116070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20328
	ctx.r3.s64 = ctx.r11.s64 + -20328;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116080"))) PPC_WEAK_FUNC(sub_83116080);
PPC_FUNC_IMPL(__imp__sub_83116080) {
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
	// addi r31,r11,-18428
	ctx.r31.s64 = ctx.r11.s64 + -18428;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0788
	ctx.lr = 0x831160A8;
	sub_822E0788(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-20312
	ctx.r3.s64 = ctx.r10.s64 + -20312;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831160BC;
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

__attribute__((alias("__imp__sub_831160D0"))) PPC_WEAK_FUNC(sub_831160D0);
PPC_FUNC_IMPL(__imp__sub_831160D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20080
	ctx.r3.s64 = ctx.r11.s64 + -20080;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831160E0"))) PPC_WEAK_FUNC(sub_831160E0);
PPC_FUNC_IMPL(__imp__sub_831160E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20376
	ctx.r3.s64 = ctx.r11.s64 + -20376;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831160F0"))) PPC_WEAK_FUNC(sub_831160F0);
PPC_FUNC_IMPL(__imp__sub_831160F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20352
	ctx.r3.s64 = ctx.r11.s64 + -20352;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116100"))) PPC_WEAK_FUNC(sub_83116100);
PPC_FUNC_IMPL(__imp__sub_83116100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20296
	ctx.r3.s64 = ctx.r11.s64 + -20296;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116110"))) PPC_WEAK_FUNC(sub_83116110);
PPC_FUNC_IMPL(__imp__sub_83116110) {
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
	// addi r31,r11,-18380
	ctx.r31.s64 = ctx.r11.s64 + -18380;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x822e0788
	ctx.lr = 0x83116138;
	sub_822E0788(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83116158
	if (ctx.cr6.eq) goto loc_83116158;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,257
	ctx.r5.s64 = 257;
	// addi r4,r11,-29761
	ctx.r4.s64 = ctx.r11.s64 + -29761;
	// bl 0x82406620
	ctx.lr = 0x83116158;
	sub_82406620(ctx, base);
loc_83116158:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-20224
	ctx.r3.s64 = ctx.r10.s64 + -20224;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8311616C;
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

__attribute__((alias("__imp__sub_83116180"))) PPC_WEAK_FUNC(sub_83116180);
PPC_FUNC_IMPL(__imp__sub_83116180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,7072
	ctx.r11.s64 = ctx.r11.s64 + 7072;
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

__attribute__((alias("__imp__sub_831161B0"))) PPC_WEAK_FUNC(sub_831161B0);
PPC_FUNC_IMPL(__imp__sub_831161B0) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7104
	ctx.r11.s64 = ctx.r11.s64 + 7104;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831161E0"))) PPC_WEAK_FUNC(sub_831161E0);
PPC_FUNC_IMPL(__imp__sub_831161E0) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7120
	ctx.r11.s64 = ctx.r11.s64 + 7120;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116228"))) PPC_WEAK_FUNC(sub_83116228);
PPC_FUNC_IMPL(__imp__sub_83116228) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7088
	ctx.r11.s64 = ctx.r11.s64 + 7088;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116270"))) PPC_WEAK_FUNC(sub_83116270);
PPC_FUNC_IMPL(__imp__sub_83116270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,7760
	ctx.r11.s64 = ctx.r11.s64 + 7760;
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

__attribute__((alias("__imp__sub_831162A0"))) PPC_WEAK_FUNC(sub_831162A0);
PPC_FUNC_IMPL(__imp__sub_831162A0) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_831162D0"))) PPC_WEAK_FUNC(sub_831162D0);
PPC_FUNC_IMPL(__imp__sub_831162D0) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7808
	ctx.r11.s64 = ctx.r11.s64 + 7808;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116318"))) PPC_WEAK_FUNC(sub_83116318);
PPC_FUNC_IMPL(__imp__sub_83116318) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7776
	ctx.r11.s64 = ctx.r11.s64 + 7776;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116360"))) PPC_WEAK_FUNC(sub_83116360);
PPC_FUNC_IMPL(__imp__sub_83116360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,4001
	ctx.r3.s64 = 4001;
	// addi r4,r11,-18116
	ctx.r4.s64 = ctx.r11.s64 + -18116;
	// bl 0x82429b48
	ctx.lr = 0x8311637C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83116398"))) PPC_WEAK_FUNC(sub_83116398);
PPC_FUNC_IMPL(__imp__sub_83116398) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r11,7824
	ctx.r3.s64 = ctx.r11.s64 + 7824;
	// bl 0x823099b0
	ctx.lr = 0x831163B8;
	sub_823099B0(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20016
	ctx.r3.s64 = ctx.r11.s64 + -20016;
	// bl 0x82e29708
	ctx.lr = 0x831163C4;
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

__attribute__((alias("__imp__sub_831163D8"))) PPC_WEAK_FUNC(sub_831163D8);
PPC_FUNC_IMPL(__imp__sub_831163D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r11,-17928
	ctx.r3.s64 = ctx.r11.s64 + -17928;
	// bl 0x823e3120
	ctx.lr = 0x831163F0;
	sub_823E3120(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19984
	ctx.r3.s64 = ctx.r11.s64 + -19984;
	// bl 0x82e29708
	ctx.lr = 0x831163FC;
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

__attribute__((alias("__imp__sub_83116410"))) PPC_WEAK_FUNC(sub_83116410);
PPC_FUNC_IMPL(__imp__sub_83116410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r11,r11,-17864
	ctx.r11.s64 = ctx.r11.s64 + -17864;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83157d34
	ctx.lr = 0x8311642C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20064
	ctx.r3.s64 = ctx.r11.s64 + -20064;
	// bl 0x82e29708
	ctx.lr = 0x83116438;
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

__attribute__((alias("__imp__sub_83116448"))) PPC_WEAK_FUNC(sub_83116448);
PPC_FUNC_IMPL(__imp__sub_83116448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r11,7840
	ctx.r3.s64 = ctx.r11.s64 + 7840;
	// bl 0x823d5608
	ctx.lr = 0x83116460;
	sub_823D5608(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20000
	ctx.r3.s64 = ctx.r11.s64 + -20000;
	// bl 0x82e29708
	ctx.lr = 0x8311646C;
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

__attribute__((alias("__imp__sub_83116480"))) PPC_WEAK_FUNC(sub_83116480);
PPC_FUNC_IMPL(__imp__sub_83116480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,30256
	ctx.r11.s64 = ctx.r11.s64 + 30256;
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

__attribute__((alias("__imp__sub_831164B0"))) PPC_WEAK_FUNC(sub_831164B0);
PPC_FUNC_IMPL(__imp__sub_831164B0) {
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
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,30288
	ctx.r11.s64 = ctx.r11.s64 + 30288;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831164E0"))) PPC_WEAK_FUNC(sub_831164E0);
PPC_FUNC_IMPL(__imp__sub_831164E0) {
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
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,30304
	ctx.r11.s64 = ctx.r11.s64 + 30304;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116528"))) PPC_WEAK_FUNC(sub_83116528);
PPC_FUNC_IMPL(__imp__sub_83116528) {
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
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,30272
	ctx.r11.s64 = ctx.r11.s64 + 30272;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116570"))) PPC_WEAK_FUNC(sub_83116570);
PPC_FUNC_IMPL(__imp__sub_83116570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19896
	ctx.r3.s64 = ctx.r11.s64 + -19896;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116580"))) PPC_WEAK_FUNC(sub_83116580);
PPC_FUNC_IMPL(__imp__sub_83116580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19872
	ctx.r3.s64 = ctx.r11.s64 + -19872;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116590"))) PPC_WEAK_FUNC(sub_83116590);
PPC_FUNC_IMPL(__imp__sub_83116590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// addi r3,r9,-19848
	ctx.r3.s64 = ctx.r9.s64 + -19848;
	// lwz r10,-13436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13436);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r11,r11,-17344
	ctx.r11.s64 = ctx.r11.s64 + -17344;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// lwz r10,-13440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13440);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// lwz r10,-13428(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13428);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831165C8"))) PPC_WEAK_FUNC(sub_831165C8);
PPC_FUNC_IMPL(__imp__sub_831165C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r11,30172
	ctx.r3.s64 = ctx.r11.s64 + 30172;
	// bl 0x8246e608
	ctx.lr = 0x831165E0;
	sub_8246E608(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19656
	ctx.r3.s64 = ctx.r11.s64 + -19656;
	// bl 0x82e29708
	ctx.lr = 0x831165EC;
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

__attribute__((alias("__imp__sub_83116600"))) PPC_WEAK_FUNC(sub_83116600);
PPC_FUNC_IMPL(__imp__sub_83116600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r11,30248
	ctx.r3.s64 = ctx.r11.s64 + 30248;
	// b 0x82413a10
	sub_82413A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116610"))) PPC_WEAK_FUNC(sub_83116610);
PPC_FUNC_IMPL(__imp__sub_83116610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19776
	ctx.r3.s64 = ctx.r11.s64 + -19776;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83116620"))) PPC_WEAK_FUNC(sub_83116620);
PPC_FUNC_IMPL(__imp__sub_83116620) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r11,30148
	ctx.r3.s64 = ctx.r11.s64 + 30148;
	// bl 0x823099b0
	ctx.lr = 0x83116640;
	sub_823099B0(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19824
	ctx.r3.s64 = ctx.r11.s64 + -19824;
	// bl 0x82e29708
	ctx.lr = 0x8311664C;
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

__attribute__((alias("__imp__sub_83116660"))) PPC_WEAK_FUNC(sub_83116660);
PPC_FUNC_IMPL(__imp__sub_83116660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823edd70
	ctx.lr = 0x83116670;
	sub_823EDD70(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stw r3,30144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116688"))) PPC_WEAK_FUNC(sub_83116688);
PPC_FUNC_IMPL(__imp__sub_83116688) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r3,r11,30236
	ctx.r3.s64 = ctx.r11.s64 + 30236;
	// bl 0x823099b0
	ctx.lr = 0x831166A8;
	sub_823099B0(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19808
	ctx.r3.s64 = ctx.r11.s64 + -19808;
	// bl 0x82e29708
	ctx.lr = 0x831166B4;
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

__attribute__((alias("__imp__sub_831166C8"))) PPC_WEAK_FUNC(sub_831166C8);
PPC_FUNC_IMPL(__imp__sub_831166C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// addi r3,r11,30320
	ctx.r3.s64 = ctx.r11.s64 + 30320;
	// bl 0x823099b0
	ctx.lr = 0x831166E8;
	sub_823099B0(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19792
	ctx.r3.s64 = ctx.r11.s64 + -19792;
	// bl 0x82e29708
	ctx.lr = 0x831166F4;
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

__attribute__((alias("__imp__sub_83116708"))) PPC_WEAK_FUNC(sub_83116708);
PPC_FUNC_IMPL(__imp__sub_83116708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,5744
	ctx.r11.s64 = ctx.r11.s64 + 5744;
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

__attribute__((alias("__imp__sub_83116738"))) PPC_WEAK_FUNC(sub_83116738);
PPC_FUNC_IMPL(__imp__sub_83116738) {
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
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5840
	ctx.r11.s64 = ctx.r11.s64 + 5840;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116768"))) PPC_WEAK_FUNC(sub_83116768);
PPC_FUNC_IMPL(__imp__sub_83116768) {
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
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5872
	ctx.r11.s64 = ctx.r11.s64 + 5872;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831167B0"))) PPC_WEAK_FUNC(sub_831167B0);
PPC_FUNC_IMPL(__imp__sub_831167B0) {
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
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5776
	ctx.r11.s64 = ctx.r11.s64 + 5776;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831167F8"))) PPC_WEAK_FUNC(sub_831167F8);
PPC_FUNC_IMPL(__imp__sub_831167F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83116828:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116838"))) PPC_WEAK_FUNC(sub_83116838);
PPC_FUNC_IMPL(__imp__sub_83116838) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83116868:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116878"))) PPC_WEAK_FUNC(sub_83116878);
PPC_FUNC_IMPL(__imp__sub_83116878) {
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
	// addi r31,r11,-13744
	ctx.r31.s64 = ctx.r11.s64 + -13744;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0788
	ctx.lr = 0x831168A0;
	sub_822E0788(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-19616
	ctx.r3.s64 = ctx.r10.s64 + -19616;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831168B4;
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

__attribute__((alias("__imp__sub_831168C8"))) PPC_WEAK_FUNC(sub_831168C8);
PPC_FUNC_IMPL(__imp__sub_831168C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116908
	if (!ctx.cr6.eq) goto loc_83116908;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831168FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831168fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831168FC;
loc_83116908:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116928
	if (ctx.cr6.eq) goto loc_83116928;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,65
	ctx.r11.s64 = 65;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116928:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15336);
	// stw r11,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116938"))) PPC_WEAK_FUNC(sub_83116938);
PPC_FUNC_IMPL(__imp__sub_83116938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116978
	if (!ctx.cr6.eq) goto loc_83116978;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311696C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311696c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311696C;
loc_83116978:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116998
	if (ctx.cr6.eq) goto loc_83116998;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116998:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15332);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831169A8"))) PPC_WEAK_FUNC(sub_831169A8);
PPC_FUNC_IMPL(__imp__sub_831169A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// lwz r11,12392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// bne cr6,0x831169e8
	if (!ctx.cr6.eq) goto loc_831169E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12392, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831169DC:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x831169dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831169DC;
loc_831169E8:
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// addi r9,r10,19064
	ctx.r9.s64 = ctx.r10.s64 + 19064;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116a08
	if (ctx.cr6.eq) goto loc_83116A08;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r10.u32);
loc_83116A08:
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// lwz r10,-15328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15328);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116A18"))) PPC_WEAK_FUNC(sub_83116A18);
PPC_FUNC_IMPL(__imp__sub_83116A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116a58
	if (!ctx.cr6.eq) goto loc_83116A58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116A4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116A4C;
loc_83116A58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116a78
	if (ctx.cr6.eq) goto loc_83116A78;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116A78:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15324);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116A88"))) PPC_WEAK_FUNC(sub_83116A88);
PPC_FUNC_IMPL(__imp__sub_83116A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116ac8
	if (!ctx.cr6.eq) goto loc_83116AC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116ABC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116ABC;
loc_83116AC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116ae8
	if (ctx.cr6.eq) goto loc_83116AE8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,72
	ctx.r11.s64 = 72;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116AE8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15320);
	// stw r11,288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116AF8"))) PPC_WEAK_FUNC(sub_83116AF8);
PPC_FUNC_IMPL(__imp__sub_83116AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116b38
	if (!ctx.cr6.eq) goto loc_83116B38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116B2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116b2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116B2C;
loc_83116B38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116b58
	if (ctx.cr6.eq) goto loc_83116B58;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,73
	ctx.r11.s64 = 73;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116B58:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15316);
	// stw r11,292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116B68"))) PPC_WEAK_FUNC(sub_83116B68);
PPC_FUNC_IMPL(__imp__sub_83116B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116ba8
	if (!ctx.cr6.eq) goto loc_83116BA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116B9C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116B9C;
loc_83116BA8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116bc8
	if (ctx.cr6.eq) goto loc_83116BC8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,81
	ctx.r11.s64 = 81;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116BC8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15312);
	// stw r11,324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116BD8"))) PPC_WEAK_FUNC(sub_83116BD8);
PPC_FUNC_IMPL(__imp__sub_83116BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116c18
	if (!ctx.cr6.eq) goto loc_83116C18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116C0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116c0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116C0C;
loc_83116C18:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116c38
	if (ctx.cr6.eq) goto loc_83116C38;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116C38:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15308);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116C48"))) PPC_WEAK_FUNC(sub_83116C48);
PPC_FUNC_IMPL(__imp__sub_83116C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116c88
	if (!ctx.cr6.eq) goto loc_83116C88;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116C7C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116c7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116C7C;
loc_83116C88:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116ca8
	if (ctx.cr6.eq) goto loc_83116CA8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116CA8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15304);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116CB8"))) PPC_WEAK_FUNC(sub_83116CB8);
PPC_FUNC_IMPL(__imp__sub_83116CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116cf8
	if (!ctx.cr6.eq) goto loc_83116CF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116CEC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116CEC;
loc_83116CF8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116d18
	if (ctx.cr6.eq) goto loc_83116D18;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116D18:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15300);
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116D28"))) PPC_WEAK_FUNC(sub_83116D28);
PPC_FUNC_IMPL(__imp__sub_83116D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116d68
	if (!ctx.cr6.eq) goto loc_83116D68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116D5C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116d5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116D5C;
loc_83116D68:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116d88
	if (ctx.cr6.eq) goto loc_83116D88;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,54
	ctx.r11.s64 = 54;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116D88:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116D98"))) PPC_WEAK_FUNC(sub_83116D98);
PPC_FUNC_IMPL(__imp__sub_83116D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116dd8
	if (!ctx.cr6.eq) goto loc_83116DD8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116DCC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116dcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116DCC;
loc_83116DD8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116df8
	if (ctx.cr6.eq) goto loc_83116DF8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,57
	ctx.r11.s64 = 57;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116DF8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15292);
	// stw r11,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116E08"))) PPC_WEAK_FUNC(sub_83116E08);
PPC_FUNC_IMPL(__imp__sub_83116E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116e48
	if (!ctx.cr6.eq) goto loc_83116E48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116E3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116E3C;
loc_83116E48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116e68
	if (ctx.cr6.eq) goto loc_83116E68;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,84
	ctx.r11.s64 = 84;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116E68:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15288);
	// stw r11,336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116E78"))) PPC_WEAK_FUNC(sub_83116E78);
PPC_FUNC_IMPL(__imp__sub_83116E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116eb8
	if (!ctx.cr6.eq) goto loc_83116EB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116EAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116eac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116EAC;
loc_83116EB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116ed8
	if (ctx.cr6.eq) goto loc_83116ED8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,85
	ctx.r11.s64 = 85;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116ED8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15284);
	// stw r11,340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116EE8"))) PPC_WEAK_FUNC(sub_83116EE8);
PPC_FUNC_IMPL(__imp__sub_83116EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116f28
	if (!ctx.cr6.eq) goto loc_83116F28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116F1C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116f1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116F1C;
loc_83116F28:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116f48
	if (ctx.cr6.eq) goto loc_83116F48;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,87
	ctx.r11.s64 = 87;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116F48:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15280);
	// stw r11,348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116F58"))) PPC_WEAK_FUNC(sub_83116F58);
PPC_FUNC_IMPL(__imp__sub_83116F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83116f98
	if (!ctx.cr6.eq) goto loc_83116F98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116F8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116f8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116F8C;
loc_83116F98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83116fb8
	if (ctx.cr6.eq) goto loc_83116FB8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,86
	ctx.r11.s64 = 86;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83116FB8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15276);
	// stw r11,344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116FC8"))) PPC_WEAK_FUNC(sub_83116FC8);
PPC_FUNC_IMPL(__imp__sub_83116FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117008
	if (!ctx.cr6.eq) goto loc_83117008;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83116FFC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83116ffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83116FFC;
loc_83117008:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117028
	if (ctx.cr6.eq) goto loc_83117028;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117028:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15272);
	// stw r11,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117038"))) PPC_WEAK_FUNC(sub_83117038);
PPC_FUNC_IMPL(__imp__sub_83117038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117078
	if (!ctx.cr6.eq) goto loc_83117078;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311706C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311706c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311706C;
loc_83117078:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117098
	if (ctx.cr6.eq) goto loc_83117098;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,70
	ctx.r11.s64 = 70;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117098:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15268);
	// stw r11,280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831170A8"))) PPC_WEAK_FUNC(sub_831170A8);
PPC_FUNC_IMPL(__imp__sub_831170A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831170e8
	if (!ctx.cr6.eq) goto loc_831170E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831170DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831170dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831170DC;
loc_831170E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117108
	if (ctx.cr6.eq) goto loc_83117108;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,71
	ctx.r11.s64 = 71;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117108:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15264);
	// stw r11,284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 284, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117118"))) PPC_WEAK_FUNC(sub_83117118);
PPC_FUNC_IMPL(__imp__sub_83117118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117158
	if (!ctx.cr6.eq) goto loc_83117158;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311714C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311714c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311714C;
loc_83117158:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117178
	if (ctx.cr6.eq) goto loc_83117178;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,45
	ctx.r11.s64 = 45;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117178:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15260);
	// stw r11,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117188"))) PPC_WEAK_FUNC(sub_83117188);
PPC_FUNC_IMPL(__imp__sub_83117188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831171c8
	if (!ctx.cr6.eq) goto loc_831171C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831171BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831171bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831171BC;
loc_831171C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831171e8
	if (ctx.cr6.eq) goto loc_831171E8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,53
	ctx.r11.s64 = 53;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831171E8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15256);
	// stw r11,212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 212, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831171F8"))) PPC_WEAK_FUNC(sub_831171F8);
PPC_FUNC_IMPL(__imp__sub_831171F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117238
	if (!ctx.cr6.eq) goto loc_83117238;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311722C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311722c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311722C;
loc_83117238:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117258
	if (ctx.cr6.eq) goto loc_83117258;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,83
	ctx.r11.s64 = 83;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117258:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15252);
	// stw r11,332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117268"))) PPC_WEAK_FUNC(sub_83117268);
PPC_FUNC_IMPL(__imp__sub_83117268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831172a8
	if (!ctx.cr6.eq) goto loc_831172A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311729C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311729c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311729C;
loc_831172A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831172c8
	if (ctx.cr6.eq) goto loc_831172C8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831172C8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15248);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831172D8"))) PPC_WEAK_FUNC(sub_831172D8);
PPC_FUNC_IMPL(__imp__sub_831172D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117318
	if (!ctx.cr6.eq) goto loc_83117318;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311730C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311730c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311730C;
loc_83117318:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117338
	if (ctx.cr6.eq) goto loc_83117338;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,58
	ctx.r11.s64 = 58;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117338:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15244);
	// stw r11,232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117348"))) PPC_WEAK_FUNC(sub_83117348);
PPC_FUNC_IMPL(__imp__sub_83117348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117388
	if (!ctx.cr6.eq) goto loc_83117388;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311737C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311737c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311737C;
loc_83117388:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831173a8
	if (ctx.cr6.eq) goto loc_831173A8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831173A8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15240);
	// stw r11,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831173B8"))) PPC_WEAK_FUNC(sub_831173B8);
PPC_FUNC_IMPL(__imp__sub_831173B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831173f8
	if (!ctx.cr6.eq) goto loc_831173F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831173EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831173ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831173EC;
loc_831173F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117418
	if (ctx.cr6.eq) goto loc_83117418;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117418:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15236);
	// stw r11,320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117428"))) PPC_WEAK_FUNC(sub_83117428);
PPC_FUNC_IMPL(__imp__sub_83117428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117468
	if (!ctx.cr6.eq) goto loc_83117468;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311745C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311745c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311745C;
loc_83117468:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117488
	if (ctx.cr6.eq) goto loc_83117488;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,41
	ctx.r11.s64 = 41;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117488:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15232);
	// stw r11,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117498"))) PPC_WEAK_FUNC(sub_83117498);
PPC_FUNC_IMPL(__imp__sub_83117498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831174d8
	if (!ctx.cr6.eq) goto loc_831174D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831174CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831174cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831174CC;
loc_831174D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831174f8
	if (ctx.cr6.eq) goto loc_831174F8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831174F8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15228);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117508"))) PPC_WEAK_FUNC(sub_83117508);
PPC_FUNC_IMPL(__imp__sub_83117508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117548
	if (!ctx.cr6.eq) goto loc_83117548;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311753C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311753c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311753C;
loc_83117548:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117568
	if (ctx.cr6.eq) goto loc_83117568;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117568:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15224);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117578"))) PPC_WEAK_FUNC(sub_83117578);
PPC_FUNC_IMPL(__imp__sub_83117578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831175b8
	if (!ctx.cr6.eq) goto loc_831175B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831175AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831175ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831175AC;
loc_831175B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831175d8
	if (ctx.cr6.eq) goto loc_831175D8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831175D8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15220);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831175E8"))) PPC_WEAK_FUNC(sub_831175E8);
PPC_FUNC_IMPL(__imp__sub_831175E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117628
	if (!ctx.cr6.eq) goto loc_83117628;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311761C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311761c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311761C;
loc_83117628:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117648
	if (ctx.cr6.eq) goto loc_83117648;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117648:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15216);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117658"))) PPC_WEAK_FUNC(sub_83117658);
PPC_FUNC_IMPL(__imp__sub_83117658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117698
	if (!ctx.cr6.eq) goto loc_83117698;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311768C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311768c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311768C;
loc_83117698:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831176b8
	if (ctx.cr6.eq) goto loc_831176B8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831176B8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15212);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831176C8"))) PPC_WEAK_FUNC(sub_831176C8);
PPC_FUNC_IMPL(__imp__sub_831176C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117708
	if (!ctx.cr6.eq) goto loc_83117708;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831176FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831176fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831176FC;
loc_83117708:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117728
	if (ctx.cr6.eq) goto loc_83117728;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117728:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15208);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117738"))) PPC_WEAK_FUNC(sub_83117738);
PPC_FUNC_IMPL(__imp__sub_83117738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117778
	if (!ctx.cr6.eq) goto loc_83117778;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311776C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311776c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311776C;
loc_83117778:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117798
	if (ctx.cr6.eq) goto loc_83117798;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,69
	ctx.r11.s64 = 69;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117798:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15204);
	// stw r11,276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831177A8"))) PPC_WEAK_FUNC(sub_831177A8);
PPC_FUNC_IMPL(__imp__sub_831177A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831177e8
	if (!ctx.cr6.eq) goto loc_831177E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831177DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831177dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831177DC;
loc_831177E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117808
	if (ctx.cr6.eq) goto loc_83117808;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117808:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15200);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117818"))) PPC_WEAK_FUNC(sub_83117818);
PPC_FUNC_IMPL(__imp__sub_83117818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117858
	if (!ctx.cr6.eq) goto loc_83117858;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311784C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311784c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311784C;
loc_83117858:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117878
	if (ctx.cr6.eq) goto loc_83117878;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117878:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15196);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117888"))) PPC_WEAK_FUNC(sub_83117888);
PPC_FUNC_IMPL(__imp__sub_83117888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831178c8
	if (!ctx.cr6.eq) goto loc_831178C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831178BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831178bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831178BC;
loc_831178C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831178e8
	if (ctx.cr6.eq) goto loc_831178E8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831178E8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15192);
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831178F8"))) PPC_WEAK_FUNC(sub_831178F8);
PPC_FUNC_IMPL(__imp__sub_831178F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117938
	if (!ctx.cr6.eq) goto loc_83117938;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311792C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311792c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311792C;
loc_83117938:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117958
	if (ctx.cr6.eq) goto loc_83117958;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117958:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15188);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117968"))) PPC_WEAK_FUNC(sub_83117968);
PPC_FUNC_IMPL(__imp__sub_83117968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831179a8
	if (!ctx.cr6.eq) goto loc_831179A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311799C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311799c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311799C;
loc_831179A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831179c8
	if (ctx.cr6.eq) goto loc_831179C8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831179C8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15184);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831179D8"))) PPC_WEAK_FUNC(sub_831179D8);
PPC_FUNC_IMPL(__imp__sub_831179D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117a18
	if (!ctx.cr6.eq) goto loc_83117A18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117A0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117a0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117A0C;
loc_83117A18:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117a38
	if (ctx.cr6.eq) goto loc_83117A38;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117A38:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15180);
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117A48"))) PPC_WEAK_FUNC(sub_83117A48);
PPC_FUNC_IMPL(__imp__sub_83117A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117a88
	if (!ctx.cr6.eq) goto loc_83117A88;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117A7C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117a7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117A7C;
loc_83117A88:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117aa8
	if (ctx.cr6.eq) goto loc_83117AA8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117AA8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15176);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117AB8"))) PPC_WEAK_FUNC(sub_83117AB8);
PPC_FUNC_IMPL(__imp__sub_83117AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117af8
	if (!ctx.cr6.eq) goto loc_83117AF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117AEC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117aec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117AEC;
loc_83117AF8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117b18
	if (ctx.cr6.eq) goto loc_83117B18;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117B18:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15172);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117B28"))) PPC_WEAK_FUNC(sub_83117B28);
PPC_FUNC_IMPL(__imp__sub_83117B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117b68
	if (!ctx.cr6.eq) goto loc_83117B68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117B5C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117b5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117B5C;
loc_83117B68:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117b88
	if (ctx.cr6.eq) goto loc_83117B88;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,55
	ctx.r11.s64 = 55;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117B88:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15168);
	// stw r11,220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117B98"))) PPC_WEAK_FUNC(sub_83117B98);
PPC_FUNC_IMPL(__imp__sub_83117B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117bd8
	if (!ctx.cr6.eq) goto loc_83117BD8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117BCC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117bcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117BCC;
loc_83117BD8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117bf8
	if (ctx.cr6.eq) goto loc_83117BF8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117BF8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15164);
	// stw r11,264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117C08"))) PPC_WEAK_FUNC(sub_83117C08);
PPC_FUNC_IMPL(__imp__sub_83117C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117c48
	if (!ctx.cr6.eq) goto loc_83117C48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117C3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117c3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117C3C;
loc_83117C48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117c68
	if (ctx.cr6.eq) goto loc_83117C68;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,67
	ctx.r11.s64 = 67;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117C68:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15160);
	// stw r11,268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117C78"))) PPC_WEAK_FUNC(sub_83117C78);
PPC_FUNC_IMPL(__imp__sub_83117C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117cb8
	if (!ctx.cr6.eq) goto loc_83117CB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117CAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117cac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117CAC;
loc_83117CB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117cd8
	if (ctx.cr6.eq) goto loc_83117CD8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,68
	ctx.r11.s64 = 68;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117CD8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// stw r11,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117CE8"))) PPC_WEAK_FUNC(sub_83117CE8);
PPC_FUNC_IMPL(__imp__sub_83117CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117d28
	if (!ctx.cr6.eq) goto loc_83117D28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117D1C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117d1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117D1C;
loc_83117D28:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117d48
	if (ctx.cr6.eq) goto loc_83117D48;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117D48:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15152);
	// stw r11,200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117D58"))) PPC_WEAK_FUNC(sub_83117D58);
PPC_FUNC_IMPL(__imp__sub_83117D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117d98
	if (!ctx.cr6.eq) goto loc_83117D98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117D8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117d8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117D8C;
loc_83117D98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,204(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117db8
	if (ctx.cr6.eq) goto loc_83117DB8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,51
	ctx.r11.s64 = 51;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117DB8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	// stw r11,204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 204, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117DC8"))) PPC_WEAK_FUNC(sub_83117DC8);
PPC_FUNC_IMPL(__imp__sub_83117DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117e08
	if (!ctx.cr6.eq) goto loc_83117E08;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117DFC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117DFC;
loc_83117E08:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117e28
	if (ctx.cr6.eq) goto loc_83117E28;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117E28:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15144);
	// stw r11,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117E38"))) PPC_WEAK_FUNC(sub_83117E38);
PPC_FUNC_IMPL(__imp__sub_83117E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117e78
	if (!ctx.cr6.eq) goto loc_83117E78;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117E6C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117e6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117E6C;
loc_83117E78:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117e98
	if (ctx.cr6.eq) goto loc_83117E98;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117E98:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15140);
	// stw r11,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117EA8"))) PPC_WEAK_FUNC(sub_83117EA8);
PPC_FUNC_IMPL(__imp__sub_83117EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117ee8
	if (!ctx.cr6.eq) goto loc_83117EE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117EDC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117EDC;
loc_83117EE8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117f08
	if (ctx.cr6.eq) goto loc_83117F08;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117F08:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15136);
	// stw r11,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117F18"))) PPC_WEAK_FUNC(sub_83117F18);
PPC_FUNC_IMPL(__imp__sub_83117F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117f58
	if (!ctx.cr6.eq) goto loc_83117F58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117F4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117f4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117F4C;
loc_83117F58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117f78
	if (ctx.cr6.eq) goto loc_83117F78;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117F78:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15132);
	// stw r11,208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117F88"))) PPC_WEAK_FUNC(sub_83117F88);
PPC_FUNC_IMPL(__imp__sub_83117F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83117fc8
	if (!ctx.cr6.eq) goto loc_83117FC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83117FBC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83117fbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83117FBC;
loc_83117FC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83117fe8
	if (ctx.cr6.eq) goto loc_83117FE8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83117FE8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15128);
	// stw r11,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117FF8"))) PPC_WEAK_FUNC(sub_83117FF8);
PPC_FUNC_IMPL(__imp__sub_83117FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83118038
	if (!ctx.cr6.eq) goto loc_83118038;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311802C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311802c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311802C;
loc_83118038:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118058
	if (ctx.cr6.eq) goto loc_83118058;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83118058:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15124);
	// stw r11,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118068"))) PPC_WEAK_FUNC(sub_83118068);
PPC_FUNC_IMPL(__imp__sub_83118068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831180a8
	if (!ctx.cr6.eq) goto loc_831180A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311809C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311809c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311809C;
loc_831180A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831180c8
	if (ctx.cr6.eq) goto loc_831180C8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831180C8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	// stw r11,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831180D8"))) PPC_WEAK_FUNC(sub_831180D8);
PPC_FUNC_IMPL(__imp__sub_831180D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83118118
	if (!ctx.cr6.eq) goto loc_83118118;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311810C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311810c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311810C;
loc_83118118:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118138
	if (ctx.cr6.eq) goto loc_83118138;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83118138:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15116);
	// stw r11,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118148"))) PPC_WEAK_FUNC(sub_83118148);
PPC_FUNC_IMPL(__imp__sub_83118148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83118188
	if (!ctx.cr6.eq) goto loc_83118188;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311817C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311817c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311817C;
loc_83118188:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831181a8
	if (ctx.cr6.eq) goto loc_831181A8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831181A8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	// stw r11,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831181B8"))) PPC_WEAK_FUNC(sub_831181B8);
PPC_FUNC_IMPL(__imp__sub_831181B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831181f8
	if (!ctx.cr6.eq) goto loc_831181F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831181EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831181ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831181EC;
loc_831181F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118218
	if (ctx.cr6.eq) goto loc_83118218;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,39
	ctx.r11.s64 = 39;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83118218:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15108);
	// stw r11,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118228"))) PPC_WEAK_FUNC(sub_83118228);
PPC_FUNC_IMPL(__imp__sub_83118228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83118268
	if (!ctx.cr6.eq) goto loc_83118268;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311825C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311825c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311825C;
loc_83118268:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118288
	if (ctx.cr6.eq) goto loc_83118288;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83118288:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15104);
	// stw r11,160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118298"))) PPC_WEAK_FUNC(sub_83118298);
PPC_FUNC_IMPL(__imp__sub_83118298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831182d8
	if (!ctx.cr6.eq) goto loc_831182D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831182CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831182cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831182CC;
loc_831182D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831182f8
	if (ctx.cr6.eq) goto loc_831182F8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831182F8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15100);
	// stw r11,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118308"))) PPC_WEAK_FUNC(sub_83118308);
PPC_FUNC_IMPL(__imp__sub_83118308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83118348
	if (!ctx.cr6.eq) goto loc_83118348;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311833C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311833c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311833C;
loc_83118348:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118368
	if (ctx.cr6.eq) goto loc_83118368;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83118368:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15096);
	// stw r11,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118378"))) PPC_WEAK_FUNC(sub_83118378);
PPC_FUNC_IMPL(__imp__sub_83118378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831183b8
	if (!ctx.cr6.eq) goto loc_831183B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831183AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831183ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831183AC;
loc_831183B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831183d8
	if (ctx.cr6.eq) goto loc_831183D8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831183D8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15092);
	// stw r11,184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831183E8"))) PPC_WEAK_FUNC(sub_831183E8);
PPC_FUNC_IMPL(__imp__sub_831183E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83118428
	if (!ctx.cr6.eq) goto loc_83118428;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311841C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311841c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311841C;
loc_83118428:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118448
	if (ctx.cr6.eq) goto loc_83118448;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83118448:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15088);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118458"))) PPC_WEAK_FUNC(sub_83118458);
PPC_FUNC_IMPL(__imp__sub_83118458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83118498
	if (!ctx.cr6.eq) goto loc_83118498;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311848C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311848c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311848C;
loc_83118498:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831184b8
	if (ctx.cr6.eq) goto loc_831184B8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831184B8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15084);
	// stw r11,224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831184C8"))) PPC_WEAK_FUNC(sub_831184C8);
PPC_FUNC_IMPL(__imp__sub_831184C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83118508
	if (!ctx.cr6.eq) goto loc_83118508;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831184FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831184fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831184FC;
loc_83118508:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118528
	if (ctx.cr6.eq) goto loc_83118528;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,82
	ctx.r11.s64 = 82;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83118528:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15080);
	// stw r11,328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118538"))) PPC_WEAK_FUNC(sub_83118538);
PPC_FUNC_IMPL(__imp__sub_83118538) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118568:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118578"))) PPC_WEAK_FUNC(sub_83118578);
PPC_FUNC_IMPL(__imp__sub_83118578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x831185b8
	if (!ctx.cr6.eq) goto loc_831185B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831185AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831185ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831185AC;
loc_831185B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831185d8
	if (ctx.cr6.eq) goto loc_831185D8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,58
	ctx.r11.s64 = 58;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_831185D8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15076);
	// stw r11,232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831185E8"))) PPC_WEAK_FUNC(sub_831185E8);
PPC_FUNC_IMPL(__imp__sub_831185E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118618:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118618;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118628"))) PPC_WEAK_FUNC(sub_83118628);
PPC_FUNC_IMPL(__imp__sub_83118628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83118668
	if (!ctx.cr6.eq) goto loc_83118668;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311865C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311865c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311865C;
loc_83118668:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118688
	if (ctx.cr6.eq) goto loc_83118688;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,59
	ctx.r11.s64 = 59;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83118688:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15072);
	// stw r11,236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118698"))) PPC_WEAK_FUNC(sub_83118698);
PPC_FUNC_IMPL(__imp__sub_83118698) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_831186C8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831186c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831186C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831186D8"))) PPC_WEAK_FUNC(sub_831186D8);
PPC_FUNC_IMPL(__imp__sub_831186D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83118718
	if (!ctx.cr6.eq) goto loc_83118718;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311870C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311870c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311870C;
loc_83118718:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,240(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118738
	if (ctx.cr6.eq) goto loc_83118738;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,60
	ctx.r11.s64 = 60;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83118738:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15068);
	// stw r11,240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 240, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118748"))) PPC_WEAK_FUNC(sub_83118748);
PPC_FUNC_IMPL(__imp__sub_83118748) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118778:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118778;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118788"))) PPC_WEAK_FUNC(sub_83118788);
PPC_FUNC_IMPL(__imp__sub_83118788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x831187c8
	if (!ctx.cr6.eq) goto loc_831187C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831187BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831187bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831187BC;
loc_831187C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831187e8
	if (ctx.cr6.eq) goto loc_831187E8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,82
	ctx.r11.s64 = 82;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_831187E8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15064);
	// stw r11,328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831187F8"))) PPC_WEAK_FUNC(sub_831187F8);
PPC_FUNC_IMPL(__imp__sub_831187F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118828:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118838"))) PPC_WEAK_FUNC(sub_83118838);
PPC_FUNC_IMPL(__imp__sub_83118838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83118878
	if (!ctx.cr6.eq) goto loc_83118878;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311886C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311886c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311886C;
loc_83118878:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118898
	if (ctx.cr6.eq) goto loc_83118898;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,61
	ctx.r11.s64 = 61;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83118898:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15060);
	// stw r11,244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831188A8"))) PPC_WEAK_FUNC(sub_831188A8);
PPC_FUNC_IMPL(__imp__sub_831188A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_831188D8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831188d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831188D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831188E8"))) PPC_WEAK_FUNC(sub_831188E8);
PPC_FUNC_IMPL(__imp__sub_831188E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83118928
	if (!ctx.cr6.eq) goto loc_83118928;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311891C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311891c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311891C;
loc_83118928:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118948
	if (ctx.cr6.eq) goto loc_83118948;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,62
	ctx.r11.s64 = 62;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83118948:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15056);
	// stw r11,248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118958"))) PPC_WEAK_FUNC(sub_83118958);
PPC_FUNC_IMPL(__imp__sub_83118958) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118988:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118988;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118998"))) PPC_WEAK_FUNC(sub_83118998);
PPC_FUNC_IMPL(__imp__sub_83118998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x831189d8
	if (!ctx.cr6.eq) goto loc_831189D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831189CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831189cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831189CC;
loc_831189D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831189f8
	if (ctx.cr6.eq) goto loc_831189F8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_831189F8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15052);
	// stw r11,252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 252, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118A08"))) PPC_WEAK_FUNC(sub_83118A08);
PPC_FUNC_IMPL(__imp__sub_83118A08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118A38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118A38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118A48"))) PPC_WEAK_FUNC(sub_83118A48);
PPC_FUNC_IMPL(__imp__sub_83118A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83118a88
	if (!ctx.cr6.eq) goto loc_83118A88;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83118A7C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118a7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118A7C;
loc_83118A88:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118aa8
	if (ctx.cr6.eq) goto loc_83118AA8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,83
	ctx.r11.s64 = 83;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83118AA8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15048);
	// stw r11,332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118AB8"))) PPC_WEAK_FUNC(sub_83118AB8);
PPC_FUNC_IMPL(__imp__sub_83118AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118AE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118ae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118AE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118AF8"))) PPC_WEAK_FUNC(sub_83118AF8);
PPC_FUNC_IMPL(__imp__sub_83118AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83118b38
	if (!ctx.cr6.eq) goto loc_83118B38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83118B2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118b2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118B2C;
loc_83118B38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118b58
	if (ctx.cr6.eq) goto loc_83118B58;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83118B58:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15044);
	// stw r11,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118B68"))) PPC_WEAK_FUNC(sub_83118B68);
PPC_FUNC_IMPL(__imp__sub_83118B68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118B98:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118b98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118B98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118BA8"))) PPC_WEAK_FUNC(sub_83118BA8);
PPC_FUNC_IMPL(__imp__sub_83118BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83118be8
	if (!ctx.cr6.eq) goto loc_83118BE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83118BDC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118BDC;
loc_83118BE8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118c08
	if (ctx.cr6.eq) goto loc_83118C08;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,65
	ctx.r11.s64 = 65;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83118C08:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15040);
	// stw r11,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118C18"))) PPC_WEAK_FUNC(sub_83118C18);
PPC_FUNC_IMPL(__imp__sub_83118C18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118C48:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118c48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118C48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118C58"))) PPC_WEAK_FUNC(sub_83118C58);
PPC_FUNC_IMPL(__imp__sub_83118C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83118c98
	if (!ctx.cr6.eq) goto loc_83118C98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83118C8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118c8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118C8C;
loc_83118C98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118cb8
	if (ctx.cr6.eq) goto loc_83118CB8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83118CB8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15036);
	// stw r11,264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118CC8"))) PPC_WEAK_FUNC(sub_83118CC8);
PPC_FUNC_IMPL(__imp__sub_83118CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118CF8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118cf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118CF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118D08"))) PPC_WEAK_FUNC(sub_83118D08);
PPC_FUNC_IMPL(__imp__sub_83118D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83118d48
	if (!ctx.cr6.eq) goto loc_83118D48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83118D3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118d3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118D3C;
loc_83118D48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118d68
	if (ctx.cr6.eq) goto loc_83118D68;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,84
	ctx.r11.s64 = 84;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83118D68:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15032);
	// stw r11,336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118D78"))) PPC_WEAK_FUNC(sub_83118D78);
PPC_FUNC_IMPL(__imp__sub_83118D78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118DA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118DA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118DB8"))) PPC_WEAK_FUNC(sub_83118DB8);
PPC_FUNC_IMPL(__imp__sub_83118DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83118df8
	if (!ctx.cr6.eq) goto loc_83118DF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83118DEC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118dec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118DEC;
loc_83118DF8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118e18
	if (ctx.cr6.eq) goto loc_83118E18;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,67
	ctx.r11.s64 = 67;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83118E18:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15028);
	// stw r11,268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118E28"))) PPC_WEAK_FUNC(sub_83118E28);
PPC_FUNC_IMPL(__imp__sub_83118E28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118E58:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118E58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118E68"))) PPC_WEAK_FUNC(sub_83118E68);
PPC_FUNC_IMPL(__imp__sub_83118E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83118ea8
	if (!ctx.cr6.eq) goto loc_83118EA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83118E9C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118e9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118E9C;
loc_83118EA8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118ec8
	if (ctx.cr6.eq) goto loc_83118EC8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,68
	ctx.r11.s64 = 68;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83118EC8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15024);
	// stw r11,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118ED8"))) PPC_WEAK_FUNC(sub_83118ED8);
PPC_FUNC_IMPL(__imp__sub_83118ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118F08:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118F08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118F18"))) PPC_WEAK_FUNC(sub_83118F18);
PPC_FUNC_IMPL(__imp__sub_83118F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83118f58
	if (!ctx.cr6.eq) goto loc_83118F58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83118F4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118f4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118F4C;
loc_83118F58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83118f78
	if (ctx.cr6.eq) goto loc_83118F78;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,69
	ctx.r11.s64 = 69;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83118F78:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15020);
	// stw r11,276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118F88"))) PPC_WEAK_FUNC(sub_83118F88);
PPC_FUNC_IMPL(__imp__sub_83118F88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83118FB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118FB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118FC8"))) PPC_WEAK_FUNC(sub_83118FC8);
PPC_FUNC_IMPL(__imp__sub_83118FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83119008
	if (!ctx.cr6.eq) goto loc_83119008;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83118FFC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83118ffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83118FFC;
loc_83119008:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119028
	if (ctx.cr6.eq) goto loc_83119028;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,85
	ctx.r11.s64 = 85;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83119028:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15016);
	// stw r11,340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119038"))) PPC_WEAK_FUNC(sub_83119038);
PPC_FUNC_IMPL(__imp__sub_83119038) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83119068:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119068
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119068;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119078"))) PPC_WEAK_FUNC(sub_83119078);
PPC_FUNC_IMPL(__imp__sub_83119078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x831190b8
	if (!ctx.cr6.eq) goto loc_831190B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831190AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831190ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831190AC;
loc_831190B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831190d8
	if (ctx.cr6.eq) goto loc_831190D8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,71
	ctx.r11.s64 = 71;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_831190D8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15012);
	// stw r11,284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 284, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831190E8"))) PPC_WEAK_FUNC(sub_831190E8);
PPC_FUNC_IMPL(__imp__sub_831190E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83119118:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119118;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119128"))) PPC_WEAK_FUNC(sub_83119128);
PPC_FUNC_IMPL(__imp__sub_83119128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83119168
	if (!ctx.cr6.eq) goto loc_83119168;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311915C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311915c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311915C;
loc_83119168:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119188
	if (ctx.cr6.eq) goto loc_83119188;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,70
	ctx.r11.s64 = 70;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83119188:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15008);
	// stw r11,280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119198"))) PPC_WEAK_FUNC(sub_83119198);
PPC_FUNC_IMPL(__imp__sub_83119198) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_831191C8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831191c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831191C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831191D8"))) PPC_WEAK_FUNC(sub_831191D8);
PPC_FUNC_IMPL(__imp__sub_831191D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83119218
	if (!ctx.cr6.eq) goto loc_83119218;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311920C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311920c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311920C;
loc_83119218:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119238
	if (ctx.cr6.eq) goto loc_83119238;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,86
	ctx.r11.s64 = 86;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83119238:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15004);
	// stw r11,344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119248"))) PPC_WEAK_FUNC(sub_83119248);
PPC_FUNC_IMPL(__imp__sub_83119248) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83119278:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119278;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119288"))) PPC_WEAK_FUNC(sub_83119288);
PPC_FUNC_IMPL(__imp__sub_83119288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x831192c8
	if (!ctx.cr6.eq) goto loc_831192C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831192BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831192bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831192BC;
loc_831192C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831192e8
	if (ctx.cr6.eq) goto loc_831192E8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,55
	ctx.r11.s64 = 55;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_831192E8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-15000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15000);
	// stw r11,220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831192F8"))) PPC_WEAK_FUNC(sub_831192F8);
PPC_FUNC_IMPL(__imp__sub_831192F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83119328:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119328;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119338"))) PPC_WEAK_FUNC(sub_83119338);
PPC_FUNC_IMPL(__imp__sub_83119338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83119378
	if (!ctx.cr6.eq) goto loc_83119378;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311936C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311936c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311936C;
loc_83119378:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119398
	if (ctx.cr6.eq) goto loc_83119398;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83119398:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14996);
	// stw r11,224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831193A8"))) PPC_WEAK_FUNC(sub_831193A8);
PPC_FUNC_IMPL(__imp__sub_831193A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_831193D8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831193d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831193D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831193E8"))) PPC_WEAK_FUNC(sub_831193E8);
PPC_FUNC_IMPL(__imp__sub_831193E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83119428
	if (!ctx.cr6.eq) goto loc_83119428;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311941C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311941c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311941C;
loc_83119428:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119448
	if (ctx.cr6.eq) goto loc_83119448;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,54
	ctx.r11.s64 = 54;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83119448:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14992);
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119458"))) PPC_WEAK_FUNC(sub_83119458);
PPC_FUNC_IMPL(__imp__sub_83119458) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83119488:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119498"))) PPC_WEAK_FUNC(sub_83119498);
PPC_FUNC_IMPL(__imp__sub_83119498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x831194d8
	if (!ctx.cr6.eq) goto loc_831194D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831194CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831194cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831194CC;
loc_831194D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831194f8
	if (ctx.cr6.eq) goto loc_831194F8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,72
	ctx.r11.s64 = 72;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_831194F8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14988);
	// stw r11,288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119508"))) PPC_WEAK_FUNC(sub_83119508);
PPC_FUNC_IMPL(__imp__sub_83119508) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83119538:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119538;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119548"))) PPC_WEAK_FUNC(sub_83119548);
PPC_FUNC_IMPL(__imp__sub_83119548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83119588
	if (!ctx.cr6.eq) goto loc_83119588;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311957C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311957c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311957C;
loc_83119588:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831195a8
	if (ctx.cr6.eq) goto loc_831195A8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,87
	ctx.r11.s64 = 87;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_831195A8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14984);
	// stw r11,348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831195B8"))) PPC_WEAK_FUNC(sub_831195B8);
PPC_FUNC_IMPL(__imp__sub_831195B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_831195E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831195e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831195E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831195F8"))) PPC_WEAK_FUNC(sub_831195F8);
PPC_FUNC_IMPL(__imp__sub_831195F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83119638
	if (!ctx.cr6.eq) goto loc_83119638;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311962C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311962c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311962C;
loc_83119638:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 384);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119658
	if (ctx.cr6.eq) goto loc_83119658;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,96
	ctx.r11.s64 = 96;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83119658:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14980);
	// stw r11,384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119668"))) PPC_WEAK_FUNC(sub_83119668);
PPC_FUNC_IMPL(__imp__sub_83119668) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83119698:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119698;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831196A8"))) PPC_WEAK_FUNC(sub_831196A8);
PPC_FUNC_IMPL(__imp__sub_831196A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x831196e8
	if (!ctx.cr6.eq) goto loc_831196E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831196DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831196dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831196DC;
loc_831196E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119708
	if (ctx.cr6.eq) goto loc_83119708;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,73
	ctx.r11.s64 = 73;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83119708:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14976);
	// stw r11,292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119718"))) PPC_WEAK_FUNC(sub_83119718);
PPC_FUNC_IMPL(__imp__sub_83119718) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83119748:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119748
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119758"))) PPC_WEAK_FUNC(sub_83119758);
PPC_FUNC_IMPL(__imp__sub_83119758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83119798
	if (!ctx.cr6.eq) goto loc_83119798;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311978C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311978c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311978C;
loc_83119798:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831197b8
	if (ctx.cr6.eq) goto loc_831197B8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,74
	ctx.r11.s64 = 74;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_831197B8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14972);
	// stw r11,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831197C8"))) PPC_WEAK_FUNC(sub_831197C8);
PPC_FUNC_IMPL(__imp__sub_831197C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_831197F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831197f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831197F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119808"))) PPC_WEAK_FUNC(sub_83119808);
PPC_FUNC_IMPL(__imp__sub_83119808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x83119848
	if (!ctx.cr6.eq) goto loc_83119848;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311983C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311983c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311983C;
loc_83119848:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119868
	if (ctx.cr6.eq) goto loc_83119868;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,75
	ctx.r11.s64 = 75;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83119868:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14968);
	// stw r11,300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119878"))) PPC_WEAK_FUNC(sub_83119878);
PPC_FUNC_IMPL(__imp__sub_83119878) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31971
	ctx.r8.s64 = -2095251456;
	// lwz r11,12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r9,r9,19064
	ctx.r9.s64 = ctx.r9.s64 + 19064;
	// addi r11,r11,-15144
	ctx.r11.s64 = ctx.r11.s64 + -15144;
	// stw r10,12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12392, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_831198A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831198a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831198A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831198B8"))) PPC_WEAK_FUNC(sub_831198B8);
PPC_FUNC_IMPL(__imp__sub_831198B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12396);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-16168
	ctx.r10.s64 = ctx.r10.s64 + -16168;
	// bne cr6,0x831198f8
	if (!ctx.cr6.eq) goto loc_831198F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12396, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831198EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831198ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831198EC;
loc_831198F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119918
	if (ctx.cr6.eq) goto loc_83119918;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,76
	ctx.r11.s64 = 76;
	// stw r11,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r11.u32);
loc_83119918:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14964);
	// stw r11,304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119928"))) PPC_WEAK_FUNC(sub_83119928);
PPC_FUNC_IMPL(__imp__sub_83119928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119968
	if (!ctx.cr6.eq) goto loc_83119968;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311995C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311995c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311995C;
loc_83119968:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 516);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119988
	if (ctx.cr6.eq) goto loc_83119988;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,129
	ctx.r11.s64 = 129;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119988:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14960);
	// stw r11,516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119998"))) PPC_WEAK_FUNC(sub_83119998);
PPC_FUNC_IMPL(__imp__sub_83119998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x831199d8
	if (!ctx.cr6.eq) goto loc_831199D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_831199CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x831199cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_831199CC;
loc_831199D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 968);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x831199f8
	if (ctx.cr6.eq) goto loc_831199F8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,242
	ctx.r11.s64 = 242;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_831199F8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14956);
	// stw r11,968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 968, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119A08"))) PPC_WEAK_FUNC(sub_83119A08);
PPC_FUNC_IMPL(__imp__sub_83119A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119a48
	if (!ctx.cr6.eq) goto loc_83119A48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119A3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119a3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119A3C;
loc_83119A48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,972(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 972);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119a68
	if (ctx.cr6.eq) goto loc_83119A68;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,243
	ctx.r11.s64 = 243;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119A68:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14952);
	// stw r11,972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 972, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119A78"))) PPC_WEAK_FUNC(sub_83119A78);
PPC_FUNC_IMPL(__imp__sub_83119A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119ab8
	if (!ctx.cr6.eq) goto loc_83119AB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119AAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119aac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119AAC;
loc_83119AB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119ad8
	if (ctx.cr6.eq) goto loc_83119AD8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,130
	ctx.r11.s64 = 130;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119AD8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14948);
	// stw r11,520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119AE8"))) PPC_WEAK_FUNC(sub_83119AE8);
PPC_FUNC_IMPL(__imp__sub_83119AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119b28
	if (!ctx.cr6.eq) goto loc_83119B28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119B1C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119b1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119B1C;
loc_83119B28:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 524);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119b48
	if (ctx.cr6.eq) goto loc_83119B48;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,131
	ctx.r11.s64 = 131;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119B48:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14944);
	// stw r11,524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 524, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119B58"))) PPC_WEAK_FUNC(sub_83119B58);
PPC_FUNC_IMPL(__imp__sub_83119B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119b98
	if (!ctx.cr6.eq) goto loc_83119B98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119B8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119b8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119B8C;
loc_83119B98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119bb8
	if (ctx.cr6.eq) goto loc_83119BB8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,132
	ctx.r11.s64 = 132;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119BB8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14940);
	// stw r11,528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 528, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119BC8"))) PPC_WEAK_FUNC(sub_83119BC8);
PPC_FUNC_IMPL(__imp__sub_83119BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119c08
	if (!ctx.cr6.eq) goto loc_83119C08;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119BFC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119BFC;
loc_83119C08:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119c28
	if (ctx.cr6.eq) goto loc_83119C28;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,133
	ctx.r11.s64 = 133;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119C28:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14936);
	// stw r11,532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 532, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119C38"))) PPC_WEAK_FUNC(sub_83119C38);
PPC_FUNC_IMPL(__imp__sub_83119C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119c78
	if (!ctx.cr6.eq) goto loc_83119C78;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119C6C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119c6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119C6C;
loc_83119C78:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 792);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119c98
	if (ctx.cr6.eq) goto loc_83119C98;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,198
	ctx.r11.s64 = 198;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119C98:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14932);
	// stw r11,792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119CA8"))) PPC_WEAK_FUNC(sub_83119CA8);
PPC_FUNC_IMPL(__imp__sub_83119CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119ce8
	if (!ctx.cr6.eq) goto loc_83119CE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119CDC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119CDC;
loc_83119CE8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,536(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 536);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119d08
	if (ctx.cr6.eq) goto loc_83119D08;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,134
	ctx.r11.s64 = 134;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119D08:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14928);
	// stw r11,536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119D18"))) PPC_WEAK_FUNC(sub_83119D18);
PPC_FUNC_IMPL(__imp__sub_83119D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119d58
	if (!ctx.cr6.eq) goto loc_83119D58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119D4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119d4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119D4C;
loc_83119D58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 540);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119d78
	if (ctx.cr6.eq) goto loc_83119D78;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,135
	ctx.r11.s64 = 135;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119D78:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14924);
	// stw r11,540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 540, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119D88"))) PPC_WEAK_FUNC(sub_83119D88);
PPC_FUNC_IMPL(__imp__sub_83119D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119dc8
	if (!ctx.cr6.eq) goto loc_83119DC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119DBC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119dbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119DBC;
loc_83119DC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 544);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119de8
	if (ctx.cr6.eq) goto loc_83119DE8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,136
	ctx.r11.s64 = 136;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119DE8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14920);
	// stw r11,544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119DF8"))) PPC_WEAK_FUNC(sub_83119DF8);
PPC_FUNC_IMPL(__imp__sub_83119DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119e38
	if (!ctx.cr6.eq) goto loc_83119E38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119E2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119e2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119E2C;
loc_83119E38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 548);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119e58
	if (ctx.cr6.eq) goto loc_83119E58;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,137
	ctx.r11.s64 = 137;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119E58:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14916);
	// stw r11,548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 548, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119E68"))) PPC_WEAK_FUNC(sub_83119E68);
PPC_FUNC_IMPL(__imp__sub_83119E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119ea8
	if (!ctx.cr6.eq) goto loc_83119EA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119E9C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119e9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119E9C;
loc_83119EA8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 552);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119ec8
	if (ctx.cr6.eq) goto loc_83119EC8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,138
	ctx.r11.s64 = 138;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119EC8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14912);
	// stw r11,552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 552, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119ED8"))) PPC_WEAK_FUNC(sub_83119ED8);
PPC_FUNC_IMPL(__imp__sub_83119ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119f18
	if (!ctx.cr6.eq) goto loc_83119F18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119F0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119F0C;
loc_83119F18:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119f38
	if (ctx.cr6.eq) goto loc_83119F38;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,139
	ctx.r11.s64 = 139;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119F38:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14908);
	// stw r11,556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119F48"))) PPC_WEAK_FUNC(sub_83119F48);
PPC_FUNC_IMPL(__imp__sub_83119F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119f88
	if (!ctx.cr6.eq) goto loc_83119F88;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119F7C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119f7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119F7C;
loc_83119F88:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83119fa8
	if (ctx.cr6.eq) goto loc_83119FA8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,140
	ctx.r11.s64 = 140;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_83119FA8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// stw r11,560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 560, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83119FB8"))) PPC_WEAK_FUNC(sub_83119FB8);
PPC_FUNC_IMPL(__imp__sub_83119FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x83119ff8
	if (!ctx.cr6.eq) goto loc_83119FF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83119FEC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83119fec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83119FEC;
loc_83119FF8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 564);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a018
	if (ctx.cr6.eq) goto loc_8311A018;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,141
	ctx.r11.s64 = 141;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A018:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14900);
	// stw r11,564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A028"))) PPC_WEAK_FUNC(sub_8311A028);
PPC_FUNC_IMPL(__imp__sub_8311A028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a068
	if (!ctx.cr6.eq) goto loc_8311A068;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A05C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a05c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A05C;
loc_8311A068:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a088
	if (ctx.cr6.eq) goto loc_8311A088;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,196
	ctx.r11.s64 = 196;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A088:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14896);
	// stw r11,784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 784, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A098"))) PPC_WEAK_FUNC(sub_8311A098);
PPC_FUNC_IMPL(__imp__sub_8311A098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a0d8
	if (!ctx.cr6.eq) goto loc_8311A0D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A0CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a0cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A0CC;
loc_8311A0D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a0f8
	if (ctx.cr6.eq) goto loc_8311A0F8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,143
	ctx.r11.s64 = 143;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A0F8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14892);
	// stw r11,572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A108"))) PPC_WEAK_FUNC(sub_8311A108);
PPC_FUNC_IMPL(__imp__sub_8311A108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a148
	if (!ctx.cr6.eq) goto loc_8311A148;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A13C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a13c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A13C;
loc_8311A148:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 576);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a168
	if (ctx.cr6.eq) goto loc_8311A168;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,144
	ctx.r11.s64 = 144;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A168:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14888);
	// stw r11,576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A178"))) PPC_WEAK_FUNC(sub_8311A178);
PPC_FUNC_IMPL(__imp__sub_8311A178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a1b8
	if (!ctx.cr6.eq) goto loc_8311A1B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A1AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a1ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A1AC;
loc_8311A1B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 580);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a1d8
	if (ctx.cr6.eq) goto loc_8311A1D8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,145
	ctx.r11.s64 = 145;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A1D8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14884);
	// stw r11,580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A1E8"))) PPC_WEAK_FUNC(sub_8311A1E8);
PPC_FUNC_IMPL(__imp__sub_8311A1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a228
	if (!ctx.cr6.eq) goto loc_8311A228;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A21C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a21c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A21C;
loc_8311A228:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 584);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a248
	if (ctx.cr6.eq) goto loc_8311A248;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,146
	ctx.r11.s64 = 146;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A248:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14880);
	// stw r11,584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A258"))) PPC_WEAK_FUNC(sub_8311A258);
PPC_FUNC_IMPL(__imp__sub_8311A258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// lwz r10,12392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12392);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r10,r10,-15144
	ctx.r10.s64 = ctx.r10.s64 + -15144;
	// bne cr6,0x8311a298
	if (!ctx.cr6.eq) goto loc_8311A298;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,19064
	ctx.r8.s64 = ctx.r8.s64 + 19064;
	// stw r9,12392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12392, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8311A28C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8311a28c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8311A28C;
loc_8311A298:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,19064
	ctx.r9.s64 = ctx.r11.s64 + 19064;
	// lwz r11,588(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 588);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8311a2b8
	if (ctx.cr6.eq) goto loc_8311A2B8;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// li r11,147
	ctx.r11.s64 = 147;
	// stw r11,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r11.u32);
loc_8311A2B8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,-14876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14876);
	// stw r11,588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 588, ctx.r11.u32);
	// blr 
	return;
}

