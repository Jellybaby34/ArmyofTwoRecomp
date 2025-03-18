#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83071208"))) PPC_WEAK_FUNC(sub_83071208);
PPC_FUNC_IMPL(__imp__sub_83071208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1644
	ctx.r4.s64 = ctx.r11.s64 + 1644;
	// bl 0x824215d0
	ctx.lr = 0x83071224;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1265(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1265, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071240"))) PPC_WEAK_FUNC(sub_83071240);
PPC_FUNC_IMPL(__imp__sub_83071240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1648
	ctx.r4.s64 = ctx.r11.s64 + 1648;
	// bl 0x824215d0
	ctx.lr = 0x8307125C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-530(r11)
	PPC_STORE_U8(ctx.r11.u32 + -530, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071278"))) PPC_WEAK_FUNC(sub_83071278);
PPC_FUNC_IMPL(__imp__sub_83071278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1652
	ctx.r4.s64 = ctx.r11.s64 + 1652;
	// bl 0x824215d0
	ctx.lr = 0x83071294;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2285(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2285, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830712B0"))) PPC_WEAK_FUNC(sub_830712B0);
PPC_FUNC_IMPL(__imp__sub_830712B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1656
	ctx.r4.s64 = ctx.r11.s64 + 1656;
	// bl 0x824215d0
	ctx.lr = 0x830712CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830712E8"))) PPC_WEAK_FUNC(sub_830712E8);
PPC_FUNC_IMPL(__imp__sub_830712E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1660
	ctx.r4.s64 = ctx.r11.s64 + 1660;
	// bl 0x824215d0
	ctx.lr = 0x83071304;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83071320"))) PPC_WEAK_FUNC(sub_83071320);
PPC_FUNC_IMPL(__imp__sub_83071320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1664
	ctx.r4.s64 = ctx.r11.s64 + 1664;
	// bl 0x824215d0
	ctx.lr = 0x8307133C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1563(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1563, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071358"))) PPC_WEAK_FUNC(sub_83071358);
PPC_FUNC_IMPL(__imp__sub_83071358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1668
	ctx.r4.s64 = ctx.r11.s64 + 1668;
	// bl 0x824215d0
	ctx.lr = 0x83071374;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1451(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1451, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071390"))) PPC_WEAK_FUNC(sub_83071390);
PPC_FUNC_IMPL(__imp__sub_83071390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1672
	ctx.r4.s64 = ctx.r11.s64 + 1672;
	// bl 0x824215d0
	ctx.lr = 0x830713AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830713C8"))) PPC_WEAK_FUNC(sub_830713C8);
PPC_FUNC_IMPL(__imp__sub_830713C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1676
	ctx.r4.s64 = ctx.r11.s64 + 1676;
	// bl 0x824215d0
	ctx.lr = 0x830713E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3486(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3486, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071400"))) PPC_WEAK_FUNC(sub_83071400);
PPC_FUNC_IMPL(__imp__sub_83071400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1680
	ctx.r4.s64 = ctx.r11.s64 + 1680;
	// bl 0x824215d0
	ctx.lr = 0x8307141C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-185(r11)
	PPC_STORE_U8(ctx.r11.u32 + -185, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071438"))) PPC_WEAK_FUNC(sub_83071438);
PPC_FUNC_IMPL(__imp__sub_83071438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1684
	ctx.r4.s64 = ctx.r11.s64 + 1684;
	// bl 0x824215d0
	ctx.lr = 0x83071454;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1276, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071470"))) PPC_WEAK_FUNC(sub_83071470);
PPC_FUNC_IMPL(__imp__sub_83071470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1688
	ctx.r4.s64 = ctx.r11.s64 + 1688;
	// bl 0x824215d0
	ctx.lr = 0x8307148C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1750(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1750, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830714A8"))) PPC_WEAK_FUNC(sub_830714A8);
PPC_FUNC_IMPL(__imp__sub_830714A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1692
	ctx.r4.s64 = ctx.r11.s64 + 1692;
	// bl 0x824215d0
	ctx.lr = 0x830714C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3208(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3208, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830714E0"))) PPC_WEAK_FUNC(sub_830714E0);
PPC_FUNC_IMPL(__imp__sub_830714E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1696
	ctx.r4.s64 = ctx.r11.s64 + 1696;
	// bl 0x824215d0
	ctx.lr = 0x830714FC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2031(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2031, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071518"))) PPC_WEAK_FUNC(sub_83071518);
PPC_FUNC_IMPL(__imp__sub_83071518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1700
	ctx.r4.s64 = ctx.r11.s64 + 1700;
	// bl 0x824215d0
	ctx.lr = 0x83071534;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83071550"))) PPC_WEAK_FUNC(sub_83071550);
PPC_FUNC_IMPL(__imp__sub_83071550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1704
	ctx.r4.s64 = ctx.r11.s64 + 1704;
	// bl 0x824215d0
	ctx.lr = 0x8307156C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1505(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1505, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071588"))) PPC_WEAK_FUNC(sub_83071588);
PPC_FUNC_IMPL(__imp__sub_83071588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1708
	ctx.r4.s64 = ctx.r11.s64 + 1708;
	// bl 0x824215d0
	ctx.lr = 0x830715A4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1063(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1063, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830715C0"))) PPC_WEAK_FUNC(sub_830715C0);
PPC_FUNC_IMPL(__imp__sub_830715C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1712
	ctx.r4.s64 = ctx.r11.s64 + 1712;
	// bl 0x824215d0
	ctx.lr = 0x830715DC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2759(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2759, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830715F8"))) PPC_WEAK_FUNC(sub_830715F8);
PPC_FUNC_IMPL(__imp__sub_830715F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1716
	ctx.r4.s64 = ctx.r11.s64 + 1716;
	// bl 0x824215d0
	ctx.lr = 0x83071614;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2408(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2408, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071630"))) PPC_WEAK_FUNC(sub_83071630);
PPC_FUNC_IMPL(__imp__sub_83071630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1720
	ctx.r4.s64 = ctx.r11.s64 + 1720;
	// bl 0x824215d0
	ctx.lr = 0x8307164C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83071668"))) PPC_WEAK_FUNC(sub_83071668);
PPC_FUNC_IMPL(__imp__sub_83071668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1724
	ctx.r4.s64 = ctx.r11.s64 + 1724;
	// bl 0x824215d0
	ctx.lr = 0x83071684;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3286(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3286, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830716A0"))) PPC_WEAK_FUNC(sub_830716A0);
PPC_FUNC_IMPL(__imp__sub_830716A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1728
	ctx.r4.s64 = ctx.r11.s64 + 1728;
	// bl 0x824215d0
	ctx.lr = 0x830716BC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2404(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2404, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830716D8"))) PPC_WEAK_FUNC(sub_830716D8);
PPC_FUNC_IMPL(__imp__sub_830716D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1732
	ctx.r4.s64 = ctx.r11.s64 + 1732;
	// bl 0x824215d0
	ctx.lr = 0x830716F4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,617(r11)
	PPC_STORE_U8(ctx.r11.u32 + 617, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071710"))) PPC_WEAK_FUNC(sub_83071710);
PPC_FUNC_IMPL(__imp__sub_83071710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1736
	ctx.r4.s64 = ctx.r11.s64 + 1736;
	// bl 0x824215d0
	ctx.lr = 0x8307172C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1480(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1480, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071748"))) PPC_WEAK_FUNC(sub_83071748);
PPC_FUNC_IMPL(__imp__sub_83071748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1740
	ctx.r4.s64 = ctx.r11.s64 + 1740;
	// bl 0x824215d0
	ctx.lr = 0x83071764;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071780"))) PPC_WEAK_FUNC(sub_83071780);
PPC_FUNC_IMPL(__imp__sub_83071780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1744
	ctx.r4.s64 = ctx.r11.s64 + 1744;
	// bl 0x824215d0
	ctx.lr = 0x8307179C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1365(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1365, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830717B8"))) PPC_WEAK_FUNC(sub_830717B8);
PPC_FUNC_IMPL(__imp__sub_830717B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1748
	ctx.r4.s64 = ctx.r11.s64 + 1748;
	// bl 0x824215d0
	ctx.lr = 0x830717D4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2843(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2843, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830717F0"))) PPC_WEAK_FUNC(sub_830717F0);
PPC_FUNC_IMPL(__imp__sub_830717F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1752
	ctx.r4.s64 = ctx.r11.s64 + 1752;
	// bl 0x824215d0
	ctx.lr = 0x8307180C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1229(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1229, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071828"))) PPC_WEAK_FUNC(sub_83071828);
PPC_FUNC_IMPL(__imp__sub_83071828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1756
	ctx.r4.s64 = ctx.r11.s64 + 1756;
	// bl 0x824215d0
	ctx.lr = 0x83071844;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,430(r11)
	PPC_STORE_U8(ctx.r11.u32 + 430, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071860"))) PPC_WEAK_FUNC(sub_83071860);
PPC_FUNC_IMPL(__imp__sub_83071860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1760
	ctx.r4.s64 = ctx.r11.s64 + 1760;
	// bl 0x824215d0
	ctx.lr = 0x8307187C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2331(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2331, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071898"))) PPC_WEAK_FUNC(sub_83071898);
PPC_FUNC_IMPL(__imp__sub_83071898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1764
	ctx.r4.s64 = ctx.r11.s64 + 1764;
	// bl 0x824215d0
	ctx.lr = 0x830718B4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2275(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2275, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830718D0"))) PPC_WEAK_FUNC(sub_830718D0);
PPC_FUNC_IMPL(__imp__sub_830718D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1768
	ctx.r4.s64 = ctx.r11.s64 + 1768;
	// bl 0x824215d0
	ctx.lr = 0x830718EC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-993(r11)
	PPC_STORE_U8(ctx.r11.u32 + -993, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071908"))) PPC_WEAK_FUNC(sub_83071908);
PPC_FUNC_IMPL(__imp__sub_83071908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1772
	ctx.r4.s64 = ctx.r11.s64 + 1772;
	// bl 0x824215d0
	ctx.lr = 0x83071924;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83071940"))) PPC_WEAK_FUNC(sub_83071940);
PPC_FUNC_IMPL(__imp__sub_83071940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1776
	ctx.r4.s64 = ctx.r11.s64 + 1776;
	// bl 0x824215d0
	ctx.lr = 0x8307195C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-783(r11)
	PPC_STORE_U8(ctx.r11.u32 + -783, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071978"))) PPC_WEAK_FUNC(sub_83071978);
PPC_FUNC_IMPL(__imp__sub_83071978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1780
	ctx.r4.s64 = ctx.r11.s64 + 1780;
	// bl 0x824215d0
	ctx.lr = 0x83071994;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830719B0"))) PPC_WEAK_FUNC(sub_830719B0);
PPC_FUNC_IMPL(__imp__sub_830719B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1784
	ctx.r4.s64 = ctx.r11.s64 + 1784;
	// bl 0x824215d0
	ctx.lr = 0x830719CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2265(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2265, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830719E8"))) PPC_WEAK_FUNC(sub_830719E8);
PPC_FUNC_IMPL(__imp__sub_830719E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1788
	ctx.r4.s64 = ctx.r11.s64 + 1788;
	// bl 0x824215d0
	ctx.lr = 0x83071A04;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83071A20"))) PPC_WEAK_FUNC(sub_83071A20);
PPC_FUNC_IMPL(__imp__sub_83071A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1792
	ctx.r4.s64 = ctx.r11.s64 + 1792;
	// bl 0x824215d0
	ctx.lr = 0x83071A3C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2167(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2167, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071A58"))) PPC_WEAK_FUNC(sub_83071A58);
PPC_FUNC_IMPL(__imp__sub_83071A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1796
	ctx.r4.s64 = ctx.r11.s64 + 1796;
	// bl 0x824215d0
	ctx.lr = 0x83071A74;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1598(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1598, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071A90"))) PPC_WEAK_FUNC(sub_83071A90);
PPC_FUNC_IMPL(__imp__sub_83071A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1800
	ctx.r4.s64 = ctx.r11.s64 + 1800;
	// bl 0x824215d0
	ctx.lr = 0x83071AAC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071AC8"))) PPC_WEAK_FUNC(sub_83071AC8);
PPC_FUNC_IMPL(__imp__sub_83071AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1804
	ctx.r4.s64 = ctx.r11.s64 + 1804;
	// bl 0x824215d0
	ctx.lr = 0x83071AE4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3033(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3033, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071B00"))) PPC_WEAK_FUNC(sub_83071B00);
PPC_FUNC_IMPL(__imp__sub_83071B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1808
	ctx.r4.s64 = ctx.r11.s64 + 1808;
	// bl 0x824215d0
	ctx.lr = 0x83071B1C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2786(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2786, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071B38"))) PPC_WEAK_FUNC(sub_83071B38);
PPC_FUNC_IMPL(__imp__sub_83071B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1812
	ctx.r4.s64 = ctx.r11.s64 + 1812;
	// bl 0x824215d0
	ctx.lr = 0x83071B54;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2940(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2940, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071B70"))) PPC_WEAK_FUNC(sub_83071B70);
PPC_FUNC_IMPL(__imp__sub_83071B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1816
	ctx.r4.s64 = ctx.r11.s64 + 1816;
	// bl 0x824215d0
	ctx.lr = 0x83071B8C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2287(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2287, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071BA8"))) PPC_WEAK_FUNC(sub_83071BA8);
PPC_FUNC_IMPL(__imp__sub_83071BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1820
	ctx.r4.s64 = ctx.r11.s64 + 1820;
	// bl 0x824215d0
	ctx.lr = 0x83071BC4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3487(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3487, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071BE0"))) PPC_WEAK_FUNC(sub_83071BE0);
PPC_FUNC_IMPL(__imp__sub_83071BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1824
	ctx.r4.s64 = ctx.r11.s64 + 1824;
	// bl 0x824215d0
	ctx.lr = 0x83071BFC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3403(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3403, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071C18"))) PPC_WEAK_FUNC(sub_83071C18);
PPC_FUNC_IMPL(__imp__sub_83071C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1828
	ctx.r4.s64 = ctx.r11.s64 + 1828;
	// bl 0x824215d0
	ctx.lr = 0x83071C34;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1402(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1402, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071C50"))) PPC_WEAK_FUNC(sub_83071C50);
PPC_FUNC_IMPL(__imp__sub_83071C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1832
	ctx.r4.s64 = ctx.r11.s64 + 1832;
	// bl 0x824215d0
	ctx.lr = 0x83071C6C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2808(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2808, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071C88"))) PPC_WEAK_FUNC(sub_83071C88);
PPC_FUNC_IMPL(__imp__sub_83071C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1836
	ctx.r4.s64 = ctx.r11.s64 + 1836;
	// bl 0x824215d0
	ctx.lr = 0x83071CA4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,383(r11)
	PPC_STORE_U8(ctx.r11.u32 + 383, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071CC0"))) PPC_WEAK_FUNC(sub_83071CC0);
PPC_FUNC_IMPL(__imp__sub_83071CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1840
	ctx.r4.s64 = ctx.r11.s64 + 1840;
	// bl 0x824215d0
	ctx.lr = 0x83071CDC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-327(r11)
	PPC_STORE_U8(ctx.r11.u32 + -327, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071CF8"))) PPC_WEAK_FUNC(sub_83071CF8);
PPC_FUNC_IMPL(__imp__sub_83071CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1844
	ctx.r4.s64 = ctx.r11.s64 + 1844;
	// bl 0x824215d0
	ctx.lr = 0x83071D14;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,598(r11)
	PPC_STORE_U8(ctx.r11.u32 + 598, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071D30"))) PPC_WEAK_FUNC(sub_83071D30);
PPC_FUNC_IMPL(__imp__sub_83071D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1848
	ctx.r4.s64 = ctx.r11.s64 + 1848;
	// bl 0x824215d0
	ctx.lr = 0x83071D4C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2001(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2001, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071D68"))) PPC_WEAK_FUNC(sub_83071D68);
PPC_FUNC_IMPL(__imp__sub_83071D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1852
	ctx.r4.s64 = ctx.r11.s64 + 1852;
	// bl 0x824215d0
	ctx.lr = 0x83071D84;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1297(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1297, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071DA0"))) PPC_WEAK_FUNC(sub_83071DA0);
PPC_FUNC_IMPL(__imp__sub_83071DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1856
	ctx.r4.s64 = ctx.r11.s64 + 1856;
	// bl 0x824215d0
	ctx.lr = 0x83071DBC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83071DD8"))) PPC_WEAK_FUNC(sub_83071DD8);
PPC_FUNC_IMPL(__imp__sub_83071DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1860
	ctx.r4.s64 = ctx.r11.s64 + 1860;
	// bl 0x824215d0
	ctx.lr = 0x83071DF4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2181(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2181, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071E10"))) PPC_WEAK_FUNC(sub_83071E10);
PPC_FUNC_IMPL(__imp__sub_83071E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1864
	ctx.r4.s64 = ctx.r11.s64 + 1864;
	// bl 0x824215d0
	ctx.lr = 0x83071E2C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2274(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2274, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071E48"))) PPC_WEAK_FUNC(sub_83071E48);
PPC_FUNC_IMPL(__imp__sub_83071E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1868
	ctx.r4.s64 = ctx.r11.s64 + 1868;
	// bl 0x824215d0
	ctx.lr = 0x83071E64;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83071E80"))) PPC_WEAK_FUNC(sub_83071E80);
PPC_FUNC_IMPL(__imp__sub_83071E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1872
	ctx.r4.s64 = ctx.r11.s64 + 1872;
	// bl 0x824215d0
	ctx.lr = 0x83071E9C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1137(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1137, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071EB8"))) PPC_WEAK_FUNC(sub_83071EB8);
PPC_FUNC_IMPL(__imp__sub_83071EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1876
	ctx.r4.s64 = ctx.r11.s64 + 1876;
	// bl 0x824215d0
	ctx.lr = 0x83071ED4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2643(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2643, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071EF0"))) PPC_WEAK_FUNC(sub_83071EF0);
PPC_FUNC_IMPL(__imp__sub_83071EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1880
	ctx.r4.s64 = ctx.r11.s64 + 1880;
	// bl 0x824215d0
	ctx.lr = 0x83071F0C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-939(r11)
	PPC_STORE_U8(ctx.r11.u32 + -939, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071F28"))) PPC_WEAK_FUNC(sub_83071F28);
PPC_FUNC_IMPL(__imp__sub_83071F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1884
	ctx.r4.s64 = ctx.r11.s64 + 1884;
	// bl 0x824215d0
	ctx.lr = 0x83071F44;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2606(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2606, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071F60"))) PPC_WEAK_FUNC(sub_83071F60);
PPC_FUNC_IMPL(__imp__sub_83071F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1888
	ctx.r4.s64 = ctx.r11.s64 + 1888;
	// bl 0x824215d0
	ctx.lr = 0x83071F7C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1560(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1560, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071F98"))) PPC_WEAK_FUNC(sub_83071F98);
PPC_FUNC_IMPL(__imp__sub_83071F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1892
	ctx.r4.s64 = ctx.r11.s64 + 1892;
	// bl 0x824215d0
	ctx.lr = 0x83071FB4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1723(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1723, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071FD0"))) PPC_WEAK_FUNC(sub_83071FD0);
PPC_FUNC_IMPL(__imp__sub_83071FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1896
	ctx.r4.s64 = ctx.r11.s64 + 1896;
	// bl 0x824215d0
	ctx.lr = 0x83071FEC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83072008"))) PPC_WEAK_FUNC(sub_83072008);
PPC_FUNC_IMPL(__imp__sub_83072008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1900
	ctx.r4.s64 = ctx.r11.s64 + 1900;
	// bl 0x824215d0
	ctx.lr = 0x83072024;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,803(r11)
	PPC_STORE_U8(ctx.r11.u32 + 803, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83072040"))) PPC_WEAK_FUNC(sub_83072040);
PPC_FUNC_IMPL(__imp__sub_83072040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1904
	ctx.r4.s64 = ctx.r11.s64 + 1904;
	// bl 0x824215d0
	ctx.lr = 0x8307205C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-139(r11)
	PPC_STORE_U8(ctx.r11.u32 + -139, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83072078"))) PPC_WEAK_FUNC(sub_83072078);
PPC_FUNC_IMPL(__imp__sub_83072078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1908
	ctx.r4.s64 = ctx.r11.s64 + 1908;
	// bl 0x824215d0
	ctx.lr = 0x83072094;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1578(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1578, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830720B0"))) PPC_WEAK_FUNC(sub_830720B0);
PPC_FUNC_IMPL(__imp__sub_830720B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1912
	ctx.r4.s64 = ctx.r11.s64 + 1912;
	// bl 0x824215d0
	ctx.lr = 0x830720CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1331(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1331, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830720E8"))) PPC_WEAK_FUNC(sub_830720E8);
PPC_FUNC_IMPL(__imp__sub_830720E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1916
	ctx.r4.s64 = ctx.r11.s64 + 1916;
	// bl 0x824215d0
	ctx.lr = 0x83072104;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83072120"))) PPC_WEAK_FUNC(sub_83072120);
PPC_FUNC_IMPL(__imp__sub_83072120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1920
	ctx.r4.s64 = ctx.r11.s64 + 1920;
	// bl 0x824215d0
	ctx.lr = 0x8307213C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1367(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1367, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83072158"))) PPC_WEAK_FUNC(sub_83072158);
PPC_FUNC_IMPL(__imp__sub_83072158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1924
	ctx.r4.s64 = ctx.r11.s64 + 1924;
	// bl 0x824215d0
	ctx.lr = 0x83072174;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1119(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1119, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83072190"))) PPC_WEAK_FUNC(sub_83072190);
PPC_FUNC_IMPL(__imp__sub_83072190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,1928
	ctx.r4.s64 = ctx.r11.s64 + 1928;
	// bl 0x824215d0
	ctx.lr = 0x830721AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3076(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3076, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830721C8"))) PPC_WEAK_FUNC(sub_830721C8);
PPC_FUNC_IMPL(__imp__sub_830721C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r11,r11,10232
	ctx.r11.s64 = ctx.r11.s64 + 10232;
	// addi r10,r10,-12168
	ctx.r10.s64 = ctx.r10.s64 + -12168;
	// lis r5,-32152
	ctx.r5.s64 = -2107113472;
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// addi r5,r5,-12040
	ctx.r5.s64 = ctx.r5.s64 + -12040;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,30176
	ctx.r6.s64 = ctx.r6.s64 + 30176;
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,30056
	ctx.r7.s64 = ctx.r7.s64 + 30056;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,29936
	ctx.r8.s64 = ctx.r8.s64 + 29936;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,29816
	ctx.r9.s64 = ctx.r9.s64 + 29816;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,12544
	ctx.r11.s64 = ctx.r11.s64 + 12544;
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

__attribute__((alias("__imp__sub_83072290"))) PPC_WEAK_FUNC(sub_83072290);
PPC_FUNC_IMPL(__imp__sub_83072290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// addi r11,r11,-4328
	ctx.r11.s64 = ctx.r11.s64 + -4328;
	// addi r10,r10,-4928
	ctx.r10.s64 = ctx.r10.s64 + -4928;
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// addi r9,r9,-4568
	ctx.r9.s64 = ctx.r9.s64 + -4568;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r11,r11,14924
	ctx.r11.s64 = ctx.r11.s64 + 14924;
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

__attribute__((alias("__imp__sub_830722F8"))) PPC_WEAK_FUNC(sub_830722F8);
PPC_FUNC_IMPL(__imp__sub_830722F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r11,r11,-26840
	ctx.r11.s64 = ctx.r11.s64 + -26840;
	// addi r10,r10,-19016
	ctx.r10.s64 = ctx.r10.s64 + -19016;
	// lis r6,-32152
	ctx.r6.s64 = -2107113472;
	// lis r7,-32154
	ctx.r7.s64 = -2107244544;
	// addi r6,r6,-18800
	ctx.r6.s64 = ctx.r6.s64 + -18800;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r7,r7,-5384
	ctx.r7.s64 = ctx.r7.s64 + -5384;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// addi r8,r8,-14920
	ctx.r8.s64 = ctx.r8.s64 + -14920;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r9,r9,-27064
	ctx.r9.s64 = ctx.r9.s64 + -27064;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,12376
	ctx.r11.s64 = ctx.r11.s64 + 12376;
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

__attribute__((alias("__imp__sub_830723A8"))) PPC_WEAK_FUNC(sub_830723A8);
PPC_FUNC_IMPL(__imp__sub_830723A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r11,r11,-2792
	ctx.r11.s64 = ctx.r11.s64 + -2792;
	// addi r10,r10,-12608
	ctx.r10.s64 = ctx.r10.s64 + -12608;
	// lis r4,-32183
	ctx.r4.s64 = -2109145088;
	// lis r5,-32154
	ctx.r5.s64 = -2107244544;
	// addi r4,r4,-17920
	ctx.r4.s64 = ctx.r4.s64 + -17920;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r5,r5,-14744
	ctx.r5.s64 = ctx.r5.s64 + -14744;
	// lis r6,-32154
	ctx.r6.s64 = -2107244544;
	// lis r7,-32154
	ctx.r7.s64 = -2107244544;
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// addi r6,r6,-14920
	ctx.r6.s64 = ctx.r6.s64 + -14920;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r7,r7,-15224
	ctx.r7.s64 = ctx.r7.s64 + -15224;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r8,r8,-15392
	ctx.r8.s64 = ctx.r8.s64 + -15392;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r9,r9,-15504
	ctx.r9.s64 = ctx.r9.s64 + -15504;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,14240
	ctx.r11.s64 = ctx.r11.s64 + 14240;
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

__attribute__((alias("__imp__sub_83072488"))) PPC_WEAK_FUNC(sub_83072488);
PPC_FUNC_IMPL(__imp__sub_83072488) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a0
	ctx.lr = 0x83072490;
	__savegprlr_18(ctx, base);
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// lis r21,-32129
	ctx.r21.s64 = -2105606144;
	// addi r10,r10,17864
	ctx.r10.s64 = ctx.r10.s64 + 17864;
	// lis r22,-32129
	ctx.r22.s64 = -2105606144;
	// lis r23,-32129
	ctx.r23.s64 = -2105606144;
	// lis r24,-32129
	ctx.r24.s64 = -2105606144;
	// lis r25,-32131
	ctx.r25.s64 = -2105737216;
	// lis r26,-32131
	ctx.r26.s64 = -2105737216;
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// lis r27,-32129
	ctx.r27.s64 = -2105606144;
	// lis r28,-32131
	ctx.r28.s64 = -2105737216;
	// lis r29,-32131
	ctx.r29.s64 = -2105737216;
	// lis r30,-32127
	ctx.r30.s64 = -2105475072;
	// lis r31,-32127
	ctx.r31.s64 = -2105475072;
	// lis r3,-32128
	ctx.r3.s64 = -2105540608;
	// lis r4,-32127
	ctx.r4.s64 = -2105475072;
	// lis r5,-32127
	ctx.r5.s64 = -2105475072;
	// lis r6,-32127
	ctx.r6.s64 = -2105475072;
	// lis r7,-32127
	ctx.r7.s64 = -2105475072;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
	// lis r9,-32131
	ctx.r9.s64 = -2105737216;
	// lis r11,-32133
	ctx.r11.s64 = -2105868288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r21,r21,-18640
	ctx.r21.s64 = ctx.r21.s64 + -18640;
	// addi r22,r22,-19000
	ctx.r22.s64 = ctx.r22.s64 + -19000;
	// addi r23,r23,-19184
	ctx.r23.s64 = ctx.r23.s64 + -19184;
	// addi r24,r24,-19416
	ctx.r24.s64 = ctx.r24.s64 + -19416;
	// addi r25,r25,17712
	ctx.r25.s64 = ctx.r25.s64 + 17712;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r26,r26,17552
	ctx.r26.s64 = ctx.r26.s64 + 17552;
	// stw r21,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r21.u32);
	// addi r27,r27,-19792
	ctx.r27.s64 = ctx.r27.s64 + -19792;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r28,r28,17424
	ctx.r28.s64 = ctx.r28.s64 + 17424;
	// stw r22,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r22.u32);
	// addi r29,r29,17288
	ctx.r29.s64 = ctx.r29.s64 + 17288;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r30,r30,-23256
	ctx.r30.s64 = ctx.r30.s64 + -23256;
	// stw r23,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r23.u32);
	// addi r31,r31,2520
	ctx.r31.s64 = ctx.r31.s64 + 2520;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r3,r3,-15552
	ctx.r3.s64 = ctx.r3.s64 + -15552;
	// stw r24,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r24.u32);
	// addi r4,r4,-23512
	ctx.r4.s64 = ctx.r4.s64 + -23512;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r5,r5,-23728
	ctx.r5.s64 = ctx.r5.s64 + -23728;
	// stw r25,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r25.u32);
	// addi r6,r6,-24024
	ctx.r6.s64 = ctx.r6.s64 + -24024;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r7,r7,-24256
	ctx.r7.s64 = ctx.r7.s64 + -24256;
	// stw r26,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r26.u32);
	// addi r8,r8,2520
	ctx.r8.s64 = ctx.r8.s64 + 2520;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// addi r9,r9,17192
	ctx.r9.s64 = ctx.r9.s64 + 17192;
	// stw r27,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r27.u32);
	// addi r11,r11,23208
	ctx.r11.s64 = ctx.r11.s64 + 23208;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// lis r18,-32142
	ctx.r18.s64 = -2106458112;
	// addi r11,r11,12752
	ctx.r11.s64 = ctx.r11.s64 + 12752;
	// lis r19,-32127
	ctx.r19.s64 = -2105475072;
	// lis r20,-32129
	ctx.r20.s64 = -2105606144;
	// lis r21,-32131
	ctx.r21.s64 = -2105737216;
	// lis r22,-32131
	ctx.r22.s64 = -2105737216;
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// lis r23,-32128
	ctx.r23.s64 = -2105540608;
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// addi r18,r18,28520
	ctx.r18.s64 = ctx.r18.s64 + 28520;
	// addi r19,r19,-24840
	ctx.r19.s64 = ctx.r19.s64 + -24840;
	// addi r20,r20,-19992
	ctx.r20.s64 = ctx.r20.s64 + -19992;
	// addi r21,r21,16680
	ctx.r21.s64 = ctx.r21.s64 + 16680;
	// addi r22,r22,16488
	ctx.r22.s64 = ctx.r22.s64 + 16488;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// addi r23,r23,-17736
	ctx.r23.s64 = ctx.r23.s64 + -17736;
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lis r24,-32128
	ctx.r24.s64 = -2105540608;
	// lis r25,-32127
	ctx.r25.s64 = -2105475072;
	// lis r26,-32127
	ctx.r26.s64 = -2105475072;
	// lis r27,-32130
	ctx.r27.s64 = -2105671680;
	// lis r28,-32128
	ctx.r28.s64 = -2105540608;
	// std r9,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r9.u64);
	// lis r29,-32128
	ctx.r29.s64 = -2105540608;
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lis r30,-32127
	ctx.r30.s64 = -2105475072;
	// lis r31,-32129
	ctx.r31.s64 = -2105606144;
	// lis r3,-32128
	ctx.r3.s64 = -2105540608;
	// lis r4,-32128
	ctx.r4.s64 = -2105540608;
	// lis r5,-32130
	ctx.r5.s64 = -2105671680;
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// lis r6,-32128
	ctx.r6.s64 = -2105540608;
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lis r7,-32127
	ctx.r7.s64 = -2105475072;
	// lis r8,-32130
	ctx.r8.s64 = -2105671680;
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
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r9,r9,-25624
	ctx.r9.s64 = ctx.r9.s64 + -25624;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// addi r24,r24,-17848
	ctx.r24.s64 = ctx.r24.s64 + -17848;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// addi r25,r25,-25784
	ctx.r25.s64 = ctx.r25.s64 + -25784;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r26,r26,2256
	ctx.r26.s64 = ctx.r26.s64 + 2256;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// addi r27,r27,1536
	ctx.r27.s64 = ctx.r27.s64 + 1536;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r9,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// addi r28,r28,-18680
	ctx.r28.s64 = ctx.r28.s64 + -18680;
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// addi r29,r29,-19520
	ctx.r29.s64 = ctx.r29.s64 + -19520;
	// stw r24,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r24.u32);
	// addi r30,r30,-25088
	ctx.r30.s64 = ctx.r30.s64 + -25088;
	// stw r25,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r25.u32);
	// addi r31,r31,-21176
	ctx.r31.s64 = ctx.r31.s64 + -21176;
	// stw r26,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r26.u32);
	// addi r3,r3,-21968
	ctx.r3.s64 = ctx.r3.s64 + -21968;
	// stw r27,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r27.u32);
	// addi r4,r4,-22256
	ctx.r4.s64 = ctx.r4.s64 + -22256;
	// std r9,244(r11)
	PPC_STORE_U64(ctx.r11.u32 + 244, ctx.r9.u64);
	// addi r5,r5,-1096
	ctx.r5.s64 = ctx.r5.s64 + -1096;
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// addi r6,r6,-22472
	ctx.r6.s64 = ctx.r6.s64 + -22472;
	// stw r28,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r28.u32);
	// addi r7,r7,-25352
	ctx.r7.s64 = ctx.r7.s64 + -25352;
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
	// addi r9,r8,2096
	ctx.r9.s64 = ctx.r8.s64 + 2096;
	// lis r19,-32130
	ctx.r19.s64 = -2105671680;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// lis r20,-32129
	ctx.r20.s64 = -2105606144;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// lis r21,-32131
	ctx.r21.s64 = -2105737216;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// lis r22,-32130
	ctx.r22.s64 = -2105671680;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// stw r9,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r9.u32);
	// lis r23,-32127
	ctx.r23.s64 = -2105475072;
	// lis r24,-32139
	ctx.r24.s64 = -2106261504;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r26,-32139
	ctx.r26.s64 = -2106261504;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r27,-32137
	ctx.r27.s64 = -2106130432;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lis r28,-32131
	ctx.r28.s64 = -2105737216;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// lis r29,-32131
	ctx.r29.s64 = -2105737216;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// lis r30,-32127
	ctx.r30.s64 = -2105475072;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// lis r31,-32130
	ctx.r31.s64 = -2105671680;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// lis r3,-32131
	ctx.r3.s64 = -2105737216;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r4,-32130
	ctx.r4.s64 = -2105671680;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r5,-32130
	ctx.r5.s64 = -2105671680;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r6,-32131
	ctx.r6.s64 = -2105737216;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lis r7,-32131
	ctx.r7.s64 = -2105737216;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r9,-32131
	ctx.r9.s64 = -2105737216;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r19,r19,1896
	ctx.r19.s64 = ctx.r19.s64 + 1896;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r20,r20,-20648
	ctx.r20.s64 = ctx.r20.s64 + -20648;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r21,r21,16296
	ctx.r21.s64 = ctx.r21.s64 + 16296;
	// addi r22,r22,-576
	ctx.r22.s64 = ctx.r22.s64 + -576;
	// addi r23,r23,-25952
	ctx.r23.s64 = ctx.r23.s64 + -25952;
	// addi r24,r24,-3864
	ctx.r24.s64 = ctx.r24.s64 + -3864;
	// stw r19,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r19.u32);
	// addi r25,r25,28928
	ctx.r25.s64 = ctx.r25.s64 + 28928;
	// stw r20,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r20.u32);
	// addi r26,r26,-5272
	ctx.r26.s64 = ctx.r26.s64 + -5272;
	// stw r21,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r21.u32);
	// addi r27,r27,-7616
	ctx.r27.s64 = ctx.r27.s64 + -7616;
	// stw r22,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r22.u32);
	// addi r28,r28,14584
	ctx.r28.s64 = ctx.r28.s64 + 14584;
	// stw r23,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r23.u32);
	// addi r29,r29,16136
	ctx.r29.s64 = ctx.r29.s64 + 16136;
	// stw r24,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r24.u32);
	// addi r30,r30,2008
	ctx.r30.s64 = ctx.r30.s64 + 2008;
	// stw r25,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r25.u32);
	// addi r31,r31,192
	ctx.r31.s64 = ctx.r31.s64 + 192;
	// stw r26,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r26.u32);
	// addi r3,r3,15896
	ctx.r3.s64 = ctx.r3.s64 + 15896;
	// stw r27,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r27.u32);
	// addi r4,r4,-144
	ctx.r4.s64 = ctx.r4.s64 + -144;
	// stw r28,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r28.u32);
	// addi r5,r5,-408
	ctx.r5.s64 = ctx.r5.s64 + -408;
	// stw r29,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r29.u32);
	// addi r6,r6,16880
	ctx.r6.s64 = ctx.r6.s64 + 16880;
	// stw r30,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r30.u32);
	// addi r7,r7,15712
	ctx.r7.s64 = ctx.r7.s64 + 15712;
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// addi r9,r9,15320
	ctx.r9.s64 = ctx.r9.s64 + 15320;
	// stw r3,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r3.u32);
	// lis r8,-32131
	ctx.r8.s64 = -2105737216;
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
	// addi r9,r8,14856
	ctx.r9.s64 = ctx.r8.s64 + 14856;
	// lis r8,-32125
	ctx.r8.s64 = -2105344000;
	// addi r8,r8,-6624
	ctx.r8.s64 = ctx.r8.s64 + -6624;
	// stw r9,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r9.u32);
	// lis r9,-32125
	ctx.r9.s64 = -2105344000;
	// ld r10,-272(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// addi r9,r9,-7200
	ctx.r9.s64 = ctx.r9.s64 + -7200;
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
	// b 0x82d5c4f0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83072A98"))) PPC_WEAK_FUNC(sub_83072A98);
PPC_FUNC_IMPL(__imp__sub_83072A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32123
	ctx.r11.s64 = -2105212928;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// addi r11,r11,-4280
	ctx.r11.s64 = ctx.r11.s64 + -4280;
	// addi r10,r10,-5928
	ctx.r10.s64 = ctx.r10.s64 + -5928;
	// lis r5,-32123
	ctx.r5.s64 = -2105212928;
	// lis r6,-32123
	ctx.r6.s64 = -2105212928;
	// addi r5,r5,-4792
	ctx.r5.s64 = ctx.r5.s64 + -4792;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,-5184
	ctx.r6.s64 = ctx.r6.s64 + -5184;
	// lis r7,-32123
	ctx.r7.s64 = -2105212928;
	// lis r8,-32123
	ctx.r8.s64 = -2105212928;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,-5648
	ctx.r7.s64 = ctx.r7.s64 + -5648;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,10544
	ctx.r8.s64 = ctx.r8.s64 + 10544;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32122
	ctx.r9.s64 = -2105147392;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,3880
	ctx.r9.s64 = ctx.r9.s64 + 3880;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,11920
	ctx.r11.s64 = ctx.r11.s64 + 11920;
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

__attribute__((alias("__imp__sub_83072B60"))) PPC_WEAK_FUNC(sub_83072B60);
PPC_FUNC_IMPL(__imp__sub_83072B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r11,r11,-13008
	ctx.r11.s64 = ctx.r11.s64 + -13008;
	// addi r10,r10,-12656
	ctx.r10.s64 = ctx.r10.s64 + -12656;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// addi r8,r8,-13136
	ctx.r8.s64 = ctx.r8.s64 + -13136;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r9,r9,-25952
	ctx.r9.s64 = ctx.r9.s64 + -25952;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// addi r11,r11,12484
	ctx.r11.s64 = ctx.r11.s64 + 12484;
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

__attribute__((alias("__imp__sub_83072BE0"))) PPC_WEAK_FUNC(sub_83072BE0);
PPC_FUNC_IMPL(__imp__sub_83072BE0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83072BE8;
	__savegprlr_28(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r11,r11,-7112
	ctx.r11.s64 = ctx.r11.s64 + -7112;
	// addi r10,r10,-10008
	ctx.r10.s64 = ctx.r10.s64 + -10008;
	// lis r28,-32153
	ctx.r28.s64 = -2107179008;
	// lis r29,-32153
	ctx.r29.s64 = -2107179008;
	// addi r28,r28,-7512
	ctx.r28.s64 = ctx.r28.s64 + -7512;
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// addi r29,r29,-7800
	ctx.r29.s64 = ctx.r29.s64 + -7800;
	// lis r30,-32153
	ctx.r30.s64 = -2107179008;
	// lis r31,-32153
	ctx.r31.s64 = -2107179008;
	// stw r28,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r28.u32);
	// addi r30,r30,-7976
	ctx.r30.s64 = ctx.r30.s64 + -7976;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// addi r31,r31,-8144
	ctx.r31.s64 = ctx.r31.s64 + -8144;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// lis r3,-32153
	ctx.r3.s64 = -2107179008;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// addi r3,r3,-8368
	ctx.r3.s64 = ctx.r3.s64 + -8368;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// addi r4,r4,-8648
	ctx.r4.s64 = ctx.r4.s64 + -8648;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// addi r5,r5,-8872
	ctx.r5.s64 = ctx.r5.s64 + -8872;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// addi r6,r6,-9152
	ctx.r6.s64 = ctx.r6.s64 + -9152;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// addi r7,r7,-9432
	ctx.r7.s64 = ctx.r7.s64 + -9432;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,-9712
	ctx.r8.s64 = ctx.r8.s64 + -9712;
	// stw r11,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r11.u32);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// addi r9,r9,-9880
	ctx.r9.s64 = ctx.r9.s64 + -9880;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
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
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83072D40"))) PPC_WEAK_FUNC(sub_83072D40);
PPC_FUNC_IMPL(__imp__sub_83072D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// addi r11,r11,-7240
	ctx.r11.s64 = ctx.r11.s64 + -7240;
	// addi r10,r10,-24600
	ctx.r10.s64 = ctx.r10.s64 + -24600;
	// lis r5,-32154
	ctx.r5.s64 = -2107244544;
	// lis r6,-32154
	ctx.r6.s64 = -2107244544;
	// addi r5,r5,-7528
	ctx.r5.s64 = ctx.r5.s64 + -7528;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,-7768
	ctx.r6.s64 = ctx.r6.s64 + -7768;
	// lis r7,-32151
	ctx.r7.s64 = -2107047936;
	// lis r8,-32151
	ctx.r8.s64 = -2107047936;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,-24424
	ctx.r7.s64 = ctx.r7.s64 + -24424;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,-7440
	ctx.r8.s64 = ctx.r8.s64 + -7440;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,-7664
	ctx.r9.s64 = ctx.r9.s64 + -7664;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,15632
	ctx.r11.s64 = ctx.r11.s64 + 15632;
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

__attribute__((alias("__imp__sub_83072E08"))) PPC_WEAK_FUNC(sub_83072E08);
PPC_FUNC_IMPL(__imp__sub_83072E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// addi r11,r11,-6080
	ctx.r11.s64 = ctx.r11.s64 + -6080;
	// addi r10,r10,-11536
	ctx.r10.s64 = ctx.r10.s64 + -11536;
	// lis r4,-32154
	ctx.r4.s64 = -2107244544;
	// lis r5,-32118
	ctx.r5.s64 = -2104885248;
	// addi r4,r4,-6304
	ctx.r4.s64 = ctx.r4.s64 + -6304;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r5,r5,-11664
	ctx.r5.s64 = ctx.r5.s64 + -11664;
	// lis r6,-32154
	ctx.r6.s64 = -2107244544;
	// lis r7,-32154
	ctx.r7.s64 = -2107244544;
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// addi r6,r6,-6488
	ctx.r6.s64 = ctx.r6.s64 + -6488;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r7,r7,-6712
	ctx.r7.s64 = ctx.r7.s64 + -6712;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r9,-32118
	ctx.r9.s64 = -2104885248;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r8,r8,-6888
	ctx.r8.s64 = ctx.r8.s64 + -6888;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r9,r9,-11160
	ctx.r9.s64 = ctx.r9.s64 + -11160;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,14016
	ctx.r11.s64 = ctx.r11.s64 + 14016;
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

__attribute__((alias("__imp__sub_83072EE8"))) PPC_WEAK_FUNC(sub_83072EE8);
PPC_FUNC_IMPL(__imp__sub_83072EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r11,r11,-11064
	ctx.r11.s64 = ctx.r11.s64 + -11064;
	// addi r10,r10,10048
	ctx.r10.s64 = ctx.r10.s64 + 10048;
	// lis r7,-32154
	ctx.r7.s64 = -2107244544;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// addi r7,r7,10480
	ctx.r7.s64 = ctx.r7.s64 + 10480;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r8,r8,10216
	ctx.r8.s64 = ctx.r8.s64 + 10216;
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// addi r9,r9,12928
	ctx.r9.s64 = ctx.r9.s64 + 12928;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// addi r11,r11,15280
	ctx.r11.s64 = ctx.r11.s64 + 15280;
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

__attribute__((alias("__imp__sub_83072F80"))) PPC_WEAK_FUNC(sub_83072F80);
PPC_FUNC_IMPL(__imp__sub_83072F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r11,r11,-22616
	ctx.r11.s64 = ctx.r11.s64 + -22616;
	// addi r10,r10,-23496
	ctx.r10.s64 = ctx.r10.s64 + -23496;
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// addi r5,r5,-22728
	ctx.r5.s64 = ctx.r5.s64 + -22728;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,-22840
	ctx.r6.s64 = ctx.r6.s64 + -22840;
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,-23080
	ctx.r7.s64 = ctx.r7.s64 + -23080;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,-23368
	ctx.r8.s64 = ctx.r8.s64 + -23368;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,4672
	ctx.r9.s64 = ctx.r9.s64 + 4672;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,15184
	ctx.r11.s64 = ctx.r11.s64 + 15184;
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

__attribute__((alias("__imp__sub_83073048"))) PPC_WEAK_FUNC(sub_83073048);
PPC_FUNC_IMPL(__imp__sub_83073048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r11,r11,-22280
	ctx.r11.s64 = ctx.r11.s64 + -22280;
	// addi r10,r10,-6160
	ctx.r10.s64 = ctx.r10.s64 + -6160;
	// lis r5,-32152
	ctx.r5.s64 = -2107113472;
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// addi r5,r5,14888
	ctx.r5.s64 = ctx.r5.s64 + 14888;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,-22408
	ctx.r6.s64 = ctx.r6.s64 + -22408;
	// lis r7,-32152
	ctx.r7.s64 = -2107113472;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,14632
	ctx.r7.s64 = ctx.r7.s64 + 14632;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,-2016
	ctx.r8.s64 = ctx.r8.s64 + -2016;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,-5720
	ctx.r9.s64 = ctx.r9.s64 + -5720;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,15000
	ctx.r11.s64 = ctx.r11.s64 + 15000;
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

__attribute__((alias("__imp__sub_83073110"))) PPC_WEAK_FUNC(sub_83073110);
PPC_FUNC_IMPL(__imp__sub_83073110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r11,r11,-21304
	ctx.r11.s64 = ctx.r11.s64 + -21304;
	// addi r10,r10,-3824
	ctx.r10.s64 = ctx.r10.s64 + -3824;
	// lis r7,-32152
	ctx.r7.s64 = -2107113472;
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// addi r7,r7,15488
	ctx.r7.s64 = ctx.r7.s64 + 15488;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r8,r8,-16144
	ctx.r8.s64 = ctx.r8.s64 + -16144;
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// addi r9,r9,-5504
	ctx.r9.s64 = ctx.r9.s64 + -5504;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// addi r11,r11,13616
	ctx.r11.s64 = ctx.r11.s64 + 13616;
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

__attribute__((alias("__imp__sub_830731A8"))) PPC_WEAK_FUNC(sub_830731A8);
PPC_FUNC_IMPL(__imp__sub_830731A8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x830731B0;
	__savegprlr_27(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32109
	ctx.r10.s64 = -2104295424;
	// addi r11,r11,-27944
	ctx.r11.s64 = ctx.r11.s64 + -27944;
	// addi r10,r10,-15424
	ctx.r10.s64 = ctx.r10.s64 + -15424;
	// lis r27,-32153
	ctx.r27.s64 = -2107179008;
	// lis r28,-32153
	ctx.r28.s64 = -2107179008;
	// addi r27,r27,-28128
	ctx.r27.s64 = ctx.r27.s64 + -28128;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// addi r28,r28,-30032
	ctx.r28.s64 = ctx.r28.s64 + -30032;
	// lis r29,-32153
	ctx.r29.s64 = -2107179008;
	// lis r30,-32153
	ctx.r30.s64 = -2107179008;
	// stw r27,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r27.u32);
	// addi r29,r29,-30160
	ctx.r29.s64 = ctx.r29.s64 + -30160;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// addi r30,r30,-30272
	ctx.r30.s64 = ctx.r30.s64 + -30272;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// lis r31,-32153
	ctx.r31.s64 = -2107179008;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// lis r3,-32153
	ctx.r3.s64 = -2107179008;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// addi r31,r31,-30384
	ctx.r31.s64 = ctx.r31.s64 + -30384;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// addi r3,r3,-30496
	ctx.r3.s64 = ctx.r3.s64 + -30496;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// lis r5,-32152
	ctx.r5.s64 = -2107113472;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// addi r4,r4,-30608
	ctx.r4.s64 = ctx.r4.s64 + -30608;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// addi r5,r5,-7112
	ctx.r5.s64 = ctx.r5.s64 + -7112;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// addi r6,r6,-30768
	ctx.r6.s64 = ctx.r6.s64 + -30768;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// addi r7,r7,-30920
	ctx.r7.s64 = ctx.r7.s64 + -30920;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// addi r8,r8,-31072
	ctx.r8.s64 = ctx.r8.s64 + -31072;
	// addi r11,r11,15448
	ctx.r11.s64 = ctx.r11.s64 + 15448;
	// stw r28,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r28.u32);
	// stw r29,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r29.u32);
	// addi r9,r9,-31232
	ctx.r9.s64 = ctx.r9.s64 + -31232;
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
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83073320"))) PPC_WEAK_FUNC(sub_83073320);
PPC_FUNC_IMPL(__imp__sub_83073320) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x83073328;
	__savegprlr_23(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r11,r11,-27944
	ctx.r11.s64 = ctx.r11.s64 + -27944;
	// addi r10,r10,-6904
	ctx.r10.s64 = ctx.r10.s64 + -6904;
	// lis r23,-32153
	ctx.r23.s64 = -2107179008;
	// lis r24,-32153
	ctx.r24.s64 = -2107179008;
	// addi r23,r23,-28128
	ctx.r23.s64 = ctx.r23.s64 + -28128;
	// stw r11,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r10.u32);
	// lis r25,-32153
	ctx.r25.s64 = -2107179008;
	// lis r26,-32109
	ctx.r26.s64 = -2104295424;
	// lis r27,-32153
	ctx.r27.s64 = -2107179008;
	// lis r28,-32153
	ctx.r28.s64 = -2107179008;
	// stw r23,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r23.u32);
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// lis r29,-32153
	ctx.r29.s64 = -2107179008;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// lis r30,-32153
	ctx.r30.s64 = -2107179008;
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r11.u32);
	// lis r31,-32153
	ctx.r31.s64 = -2107179008;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r11.u32);
	// lis r3,-32153
	ctx.r3.s64 = -2107179008;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r11.u32);
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r11.u32);
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r11.u32);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r11.u32);
	// addi r24,r24,-30032
	ctx.r24.s64 = ctx.r24.s64 + -30032;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r11.u32);
	// addi r25,r25,-28368
	ctx.r25.s64 = ctx.r25.s64 + -28368;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// addi r26,r26,-11912
	ctx.r26.s64 = ctx.r26.s64 + -11912;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// addi r27,r27,-28480
	ctx.r27.s64 = ctx.r27.s64 + -28480;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// addi r28,r28,-28592
	ctx.r28.s64 = ctx.r28.s64 + -28592;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// addi r29,r29,-28704
	ctx.r29.s64 = ctx.r29.s64 + -28704;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// addi r30,r30,-28816
	ctx.r30.s64 = ctx.r30.s64 + -28816;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// addi r31,r31,-28928
	ctx.r31.s64 = ctx.r31.s64 + -28928;
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// addi r3,r3,-29136
	ctx.r3.s64 = ctx.r3.s64 + -29136;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-232(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// addi r4,r4,-29288
	ctx.r4.s64 = ctx.r4.s64 + -29288;
	// addi r11,r11,14696
	ctx.r11.s64 = ctx.r11.s64 + 14696;
	// stw r24,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r24.u32);
	// addi r5,r5,-29448
	ctx.r5.s64 = ctx.r5.s64 + -29448;
	// stw r25,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r25.u32);
	// addi r6,r6,-29608
	ctx.r6.s64 = ctx.r6.s64 + -29608;
	// stw r26,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r26.u32);
	// addi r7,r7,-29760
	ctx.r7.s64 = ctx.r7.s64 + -29760;
	// stw r27,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r27.u32);
	// addi r8,r8,-29872
	ctx.r8.s64 = ctx.r8.s64 + -29872;
	// stw r28,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r28.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// addi r9,r9,-6720
	ctx.r9.s64 = ctx.r9.s64 + -6720;
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
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830734F8"))) PPC_WEAK_FUNC(sub_830734F8);
PPC_FUNC_IMPL(__imp__sub_830734F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r10,r10,-15776
	ctx.r10.s64 = ctx.r10.s64 + -15776;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// addi r11,r11,12460
	ctx.r11.s64 = ctx.r11.s64 + 12460;
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83073530"))) PPC_WEAK_FUNC(sub_83073530);
PPC_FUNC_IMPL(__imp__sub_83073530) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r10,r10,-15776
	ctx.r10.s64 = ctx.r10.s64 + -15776;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// addi r11,r11,14972
	ctx.r11.s64 = ctx.r11.s64 + 14972;
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83073568"))) PPC_WEAK_FUNC(sub_83073568);
PPC_FUNC_IMPL(__imp__sub_83073568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r11,r11,15744
	ctx.r11.s64 = ctx.r11.s64 + 15744;
	// addi r10,r10,-4816
	ctx.r10.s64 = ctx.r10.s64 + -4816;
	// lis r3,-32153
	ctx.r3.s64 = -2107179008;
	// lis r4,-32152
	ctx.r4.s64 = -2107113472;
	// addi r3,r3,-21304
	ctx.r3.s64 = ctx.r3.s64 + -21304;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r4,r4,15488
	ctx.r4.s64 = ctx.r4.s64 + 15488;
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lis r6,-32152
	ctx.r6.s64 = -2107113472;
	// stw r3,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r3.u32);
	// addi r5,r5,-16144
	ctx.r5.s64 = ctx.r5.s64 + -16144;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r6,r6,-5504
	ctx.r6.s64 = ctx.r6.s64 + -5504;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r7,-32152
	ctx.r7.s64 = -2107113472;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r7,r7,-3824
	ctx.r7.s64 = ctx.r7.s64 + -3824;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r8,r8,-19960
	ctx.r8.s64 = ctx.r8.s64 + -19960;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// addi r9,r9,-4480
	ctx.r9.s64 = ctx.r9.s64 + -4480;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,12256
	ctx.r11.s64 = ctx.r11.s64 + 12256;
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

__attribute__((alias("__imp__sub_83073660"))) PPC_WEAK_FUNC(sub_83073660);
PPC_FUNC_IMPL(__imp__sub_83073660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r11,r11,15744
	ctx.r11.s64 = ctx.r11.s64 + 15744;
	// addi r10,r10,-3824
	ctx.r10.s64 = ctx.r10.s64 + -3824;
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// lis r7,-32152
	ctx.r7.s64 = -2107113472;
	// addi r6,r6,-21304
	ctx.r6.s64 = ctx.r6.s64 + -21304;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r7,r7,15488
	ctx.r7.s64 = ctx.r7.s64 + 15488;
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// addi r8,r8,-16144
	ctx.r8.s64 = ctx.r8.s64 + -16144;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r9,r9,-5504
	ctx.r9.s64 = ctx.r9.s64 + -5504;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,14440
	ctx.r11.s64 = ctx.r11.s64 + 14440;
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

__attribute__((alias("__imp__sub_83073710"))) PPC_WEAK_FUNC(sub_83073710);
PPC_FUNC_IMPL(__imp__sub_83073710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r11,r11,-21304
	ctx.r11.s64 = ctx.r11.s64 + -21304;
	// addi r10,r10,-4256
	ctx.r10.s64 = ctx.r10.s64 + -4256;
	// lis r5,-32152
	ctx.r5.s64 = -2107113472;
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// addi r5,r5,15488
	ctx.r5.s64 = ctx.r5.s64 + 15488;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,-16144
	ctx.r6.s64 = ctx.r6.s64 + -16144;
	// lis r7,-32152
	ctx.r7.s64 = -2107113472;
	// lis r8,-32152
	ctx.r8.s64 = -2107113472;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,-5504
	ctx.r7.s64 = ctx.r7.s64 + -5504;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,-3824
	ctx.r8.s64 = ctx.r8.s64 + -3824;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,-18984
	ctx.r9.s64 = ctx.r9.s64 + -18984;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,13520
	ctx.r11.s64 = ctx.r11.s64 + 13520;
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

__attribute__((alias("__imp__sub_830737D8"))) PPC_WEAK_FUNC(sub_830737D8);
PPC_FUNC_IMPL(__imp__sub_830737D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r11,r11,14888
	ctx.r11.s64 = ctx.r11.s64 + 14888;
	// addi r10,r10,-5904
	ctx.r10.s64 = ctx.r10.s64 + -5904;
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// lis r5,-32152
	ctx.r5.s64 = -2107113472;
	// addi r4,r4,-22408
	ctx.r4.s64 = ctx.r4.s64 + -22408;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r5,r5,14632
	ctx.r5.s64 = ctx.r5.s64 + 14632;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// lis r7,-32152
	ctx.r7.s64 = -2107113472;
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// addi r6,r6,-2016
	ctx.r6.s64 = ctx.r6.s64 + -2016;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r7,r7,-5720
	ctx.r7.s64 = ctx.r7.s64 + -5720;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r8,-32152
	ctx.r8.s64 = -2107113472;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r8,r8,-6160
	ctx.r8.s64 = ctx.r8.s64 + -6160;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r9,r9,-22032
	ctx.r9.s64 = ctx.r9.s64 + -22032;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,14128
	ctx.r11.s64 = ctx.r11.s64 + 14128;
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

__attribute__((alias("__imp__sub_830738B8"))) PPC_WEAK_FUNC(sub_830738B8);
PPC_FUNC_IMPL(__imp__sub_830738B8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4ac
	ctx.lr = 0x830738C0;
	__savegprlr_21(ctx, base);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lis r21,-32152
	ctx.r21.s64 = -2107113472;
	// addi r10,r10,-15952
	ctx.r10.s64 = ctx.r10.s64 + -15952;
	// lis r22,-32153
	ctx.r22.s64 = -2107179008;
	// lis r23,-32152
	ctx.r23.s64 = -2107113472;
	// lis r24,-32153
	ctx.r24.s64 = -2107179008;
	// lis r25,-32152
	ctx.r25.s64 = -2107113472;
	// lis r26,-32152
	ctx.r26.s64 = -2107113472;
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// lis r27,-32153
	ctx.r27.s64 = -2107179008;
	// lis r28,-32153
	ctx.r28.s64 = -2107179008;
	// lis r29,-32153
	ctx.r29.s64 = -2107179008;
	// lis r30,-32153
	ctx.r30.s64 = -2107179008;
	// lis r31,-32152
	ctx.r31.s64 = -2107113472;
	// lis r3,-32153
	ctx.r3.s64 = -2107179008;
	// lis r4,-32152
	ctx.r4.s64 = -2107113472;
	// lis r5,-32118
	ctx.r5.s64 = -2104885248;
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r21,r21,15744
	ctx.r21.s64 = ctx.r21.s64 + 15744;
	// addi r22,r22,-21304
	ctx.r22.s64 = ctx.r22.s64 + -21304;
	// addi r23,r23,15488
	ctx.r23.s64 = ctx.r23.s64 + 15488;
	// addi r24,r24,-16144
	ctx.r24.s64 = ctx.r24.s64 + -16144;
	// addi r25,r25,-5504
	ctx.r25.s64 = ctx.r25.s64 + -5504;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r26,r26,-3824
	ctx.r26.s64 = ctx.r26.s64 + -3824;
	// stw r21,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r21.u32);
	// addi r27,r27,-16312
	ctx.r27.s64 = ctx.r27.s64 + -16312;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r28,r28,-16480
	ctx.r28.s64 = ctx.r28.s64 + -16480;
	// stw r22,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r22.u32);
	// addi r29,r29,-16752
	ctx.r29.s64 = ctx.r29.s64 + -16752;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r30,r30,-17104
	ctx.r30.s64 = ctx.r30.s64 + -17104;
	// stw r23,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r23.u32);
	// addi r31,r31,-4080
	ctx.r31.s64 = ctx.r31.s64 + -4080;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r3,r3,-17232
	ctx.r3.s64 = ctx.r3.s64 + -17232;
	// stw r24,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r24.u32);
	// addi r4,r4,22944
	ctx.r4.s64 = ctx.r4.s64 + 22944;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r5,r5,-28840
	ctx.r5.s64 = ctx.r5.s64 + -28840;
	// stw r25,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r25.u32);
	// addi r6,r6,-17448
	ctx.r6.s64 = ctx.r6.s64 + -17448;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r7,r7,-17608
	ctx.r7.s64 = ctx.r7.s64 + -17608;
	// stw r26,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r26.u32);
	// addi r8,r8,-17800
	ctx.r8.s64 = ctx.r8.s64 + -17800;
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// addi r9,r9,-17984
	ctx.r9.s64 = ctx.r9.s64 + -17984;
	// stw r27,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r27.u32);
	// addi r11,r11,-18112
	ctx.r11.s64 = ctx.r11.s64 + -18112;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// addi r11,r11,13688
	ctx.r11.s64 = ctx.r11.s64 + 13688;
	// addi r4,r4,-18240
	ctx.r4.s64 = ctx.r4.s64 + -18240;
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// addi r5,r5,-18368
	ctx.r5.s64 = ctx.r5.s64 + -18368;
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// addi r6,r6,-18496
	ctx.r6.s64 = ctx.r6.s64 + -18496;
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// lis r7,-32093
	ctx.r7.s64 = -2103246848;
	// lis r8,-32102
	ctx.r8.s64 = -2103836672;
	// addi r7,r7,13048
	ctx.r7.s64 = ctx.r7.s64 + 13048;
	// addi r8,r8,20296
	ctx.r8.s64 = ctx.r8.s64 + 20296;
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
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// addi r9,r9,-18760
	ctx.r9.s64 = ctx.r9.s64 + -18760;
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
	// b 0x82d5c4fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83073B50"))) PPC_WEAK_FUNC(sub_83073B50);
PPC_FUNC_IMPL(__imp__sub_83073B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r11,r11,15744
	ctx.r11.s64 = ctx.r11.s64 + 15744;
	// addi r10,r10,-19696
	ctx.r10.s64 = ctx.r10.s64 + -19696;
	// lis r5,-32152
	ctx.r5.s64 = -2107113472;
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// addi r5,r5,15488
	ctx.r5.s64 = ctx.r5.s64 + 15488;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,-16144
	ctx.r6.s64 = ctx.r6.s64 + -16144;
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// stw r5,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r5.u32);
	// addi r7,r7,-19112
	ctx.r7.s64 = ctx.r7.s64 + -19112;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r8,r8,-19280
	ctx.r8.s64 = ctx.r8.s64 + -19280;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// addi r9,r9,-19488
	ctx.r9.s64 = ctx.r9.s64 + -19488;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,12016
	ctx.r11.s64 = ctx.r11.s64 + 12016;
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

__attribute__((alias("__imp__sub_83073C18"))) PPC_WEAK_FUNC(sub_83073C18);
PPC_FUNC_IMPL(__imp__sub_83073C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r11,r11,-15288
	ctx.r11.s64 = ctx.r11.s64 + -15288;
	// addi r10,r10,-3824
	ctx.r10.s64 = ctx.r10.s64 + -3824;
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// lis r5,-32152
	ctx.r5.s64 = -2107113472;
	// addi r4,r4,-15552
	ctx.r4.s64 = ctx.r4.s64 + -15552;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r5,r5,15744
	ctx.r5.s64 = ctx.r5.s64 + 15744;
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// lis r7,-32152
	ctx.r7.s64 = -2107113472;
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// addi r6,r6,-21304
	ctx.r6.s64 = ctx.r6.s64 + -21304;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r7,r7,15488
	ctx.r7.s64 = ctx.r7.s64 + 15488;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r8,r8,-16144
	ctx.r8.s64 = ctx.r8.s64 + -16144;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r9,r9,-5504
	ctx.r9.s64 = ctx.r9.s64 + -5504;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,12112
	ctx.r11.s64 = ctx.r11.s64 + 12112;
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

__attribute__((alias("__imp__sub_83073CF8"))) PPC_WEAK_FUNC(sub_83073CF8);
PPC_FUNC_IMPL(__imp__sub_83073CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r11,r11,-12704
	ctx.r11.s64 = ctx.r11.s64 + -12704;
	// addi r10,r10,-3824
	ctx.r10.s64 = ctx.r10.s64 + -3824;
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// lis r5,-32152
	ctx.r5.s64 = -2107113472;
	// addi r4,r4,-12968
	ctx.r4.s64 = ctx.r4.s64 + -12968;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r5,r5,15744
	ctx.r5.s64 = ctx.r5.s64 + 15744;
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// lis r7,-32152
	ctx.r7.s64 = -2107113472;
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// addi r6,r6,-21304
	ctx.r6.s64 = ctx.r6.s64 + -21304;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r7,r7,15488
	ctx.r7.s64 = ctx.r7.s64 + 15488;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r8,r8,-16144
	ctx.r8.s64 = ctx.r8.s64 + -16144;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r9,r9,-5504
	ctx.r9.s64 = ctx.r9.s64 + -5504;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// addi r11,r11,12640
	ctx.r11.s64 = ctx.r11.s64 + 12640;
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

__attribute__((alias("__imp__sub_83073DD8"))) PPC_WEAK_FUNC(sub_83073DD8);
PPC_FUNC_IMPL(__imp__sub_83073DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32112
	ctx.r11.s64 = -2104492032;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r11,r11,-25376
	ctx.r11.s64 = ctx.r11.s64 + -25376;
	// addi r10,r10,-21808
	ctx.r10.s64 = ctx.r10.s64 + -21808;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r11,r11,12220
	ctx.r11.s64 = ctx.r11.s64 + 12220;
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

__attribute__((alias("__imp__sub_83073E28"))) PPC_WEAK_FUNC(sub_83073E28);
PPC_FUNC_IMPL(__imp__sub_83073E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r11,r11,-20168
	ctx.r11.s64 = ctx.r11.s64 + -20168;
	// addi r10,r10,-20488
	ctx.r10.s64 = ctx.r10.s64 + -20488;
	// lis r6,-32152
	ctx.r6.s64 = -2107113472;
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// addi r6,r6,15232
	ctx.r6.s64 = ctx.r6.s64 + 15232;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r7,r7,-20360
	ctx.r7.s64 = ctx.r7.s64 + -20360;
	// lis r8,-32152
	ctx.r8.s64 = -2107113472;
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// addi r8,r8,-5032
	ctx.r8.s64 = ctx.r8.s64 + -5032;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r9,r9,-5288
	ctx.r9.s64 = ctx.r9.s64 + -5288;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,14352
	ctx.r11.s64 = ctx.r11.s64 + 14352;
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

__attribute__((alias("__imp__sub_83073ED8"))) PPC_WEAK_FUNC(sub_83073ED8);
PPC_FUNC_IMPL(__imp__sub_83073ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r11,r11,-21632
	ctx.r11.s64 = ctx.r11.s64 + -21632;
	// addi r10,r10,-5904
	ctx.r10.s64 = ctx.r10.s64 + -5904;
	// lis r6,-32152
	ctx.r6.s64 = -2107113472;
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// addi r6,r6,14888
	ctx.r6.s64 = ctx.r6.s64 + 14888;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r7,r7,-22408
	ctx.r7.s64 = ctx.r7.s64 + -22408;
	// lis r8,-32152
	ctx.r8.s64 = -2107113472;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r6,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// addi r8,r8,14632
	ctx.r8.s64 = ctx.r8.s64 + 14632;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// addi r9,r9,-2016
	ctx.r9.s64 = ctx.r9.s64 + -2016;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-64(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r11,15096
	ctx.r11.s64 = ctx.r11.s64 + 15096;
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

__attribute__((alias("__imp__sub_83073F88"))) PPC_WEAK_FUNC(sub_83073F88);
PPC_FUNC_IMPL(__imp__sub_83073F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r11,r11,-104
	ctx.r11.s64 = ctx.r11.s64 + -104;
	// addi r10,r10,5824
	ctx.r10.s64 = ctx.r10.s64 + 5824;
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// lis r8,-32118
	ctx.r8.s64 = -2104885248;
	// addi r7,r7,5952
	ctx.r7.s64 = ctx.r7.s64 + 5952;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r8,r8,-32448
	ctx.r8.s64 = ctx.r8.s64 + -32448;
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// addi r9,r9,17632
	ctx.r9.s64 = ctx.r9.s64 + 17632;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-48(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// addi r11,r11,15376
	ctx.r11.s64 = ctx.r11.s64 + 15376;
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

__attribute__((alias("__imp__sub_83074020"))) PPC_WEAK_FUNC(sub_83074020);
PPC_FUNC_IMPL(__imp__sub_83074020) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r10,r10,6120
	ctx.r10.s64 = ctx.r10.s64 + 6120;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// addi r11,r11,15352
	ctx.r11.s64 = ctx.r11.s64 + 15352;
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074058"))) PPC_WEAK_FUNC(sub_83074058);
PPC_FUNC_IMPL(__imp__sub_83074058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83074060;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31982
	ctx.r31.s64 = -2095972352;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r10,-28988
	ctx.r29.s64 = ctx.r10.s64 + -28988;
	// lwz r11,-19340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83074090
	if (!ctx.cr6.eq) goto loc_83074090;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825852e8
	ctx.lr = 0x83074084;
	sub_825852E8(ctx, base);
	// stw r3,-19340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19340, ctx.r3.u32);
	// bl 0x825853a0
	ctx.lr = 0x8307408C;
	sub_825853A0(ctx, base);
	// lwz r11,-19340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19340);
loc_83074090:
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// lis r30,-31982
	ctx.r30.s64 = -2095972352;
	// addi r31,r10,3560
	ctx.r31.s64 = ctx.r10.s64 + 3560;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,6816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830740c8
	if (!ctx.cr6.eq) goto loc_830740C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82826c90
	ctx.lr = 0x830740BC;
	sub_82826C90(ctx, base);
	// stw r3,6816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6816, ctx.r3.u32);
	// bl 0x827d5b68
	ctx.lr = 0x830740C4;
	sub_827D5B68(ctx, base);
	// lwz r11,6816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6816);
loc_830740C8:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r30,-31982
	ctx.r30.s64 = -2095972352;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,6820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830740f8
	if (!ctx.cr6.eq) goto loc_830740F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8281a530
	ctx.lr = 0x830740EC;
	sub_8281A530(ctx, base);
	// stw r3,6820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6820, ctx.r3.u32);
	// bl 0x827d5d00
	ctx.lr = 0x830740F4;
	sub_827D5D00(ctx, base);
	// lwz r11,6820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6820);
loc_830740F8:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r30,-31982
	ctx.r30.s64 = -2095972352;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,6844(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6844);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83074128
	if (!ctx.cr6.eq) goto loc_83074128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82826e40
	ctx.lr = 0x8307411C;
	sub_82826E40(ctx, base);
	// stw r3,6844(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6844, ctx.r3.u32);
	// bl 0x827d6588
	ctx.lr = 0x83074124;
	sub_827D6588(ctx, base);
	// lwz r11,6844(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6844);
loc_83074128:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r30,-31982
	ctx.r30.s64 = -2095972352;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,7468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83074158
	if (!ctx.cr6.eq) goto loc_83074158;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8287ab70
	ctx.lr = 0x8307414C;
	sub_8287AB70(ctx, base);
	// stw r3,7468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7468, ctx.r3.u32);
	// bl 0x8284e168
	ctx.lr = 0x83074154;
	sub_8284E168(ctx, base);
	// lwz r11,7468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7468);
loc_83074158:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r30,-31982
	ctx.r30.s64 = -2095972352;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,4492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83074188
	if (!ctx.cr6.eq) goto loc_83074188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826fcdd8
	ctx.lr = 0x8307417C;
	sub_826FCDD8(ctx, base);
	// stw r3,4492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4492, ctx.r3.u32);
	// bl 0x826f8ba8
	ctx.lr = 0x83074184;
	sub_826F8BA8(ctx, base);
	// lwz r11,4492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4492);
loc_83074188:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r30,-31982
	ctx.r30.s64 = -2095972352;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,-31756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830741b8
	if (!ctx.cr6.eq) goto loc_830741B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82524d18
	ctx.lr = 0x830741AC;
	sub_82524D18(ctx, base);
	// stw r3,-31756(r30)
	PPC_STORE_U32(ctx.r30.u32 + -31756, ctx.r3.u32);
	// bl 0x8253ce80
	ctx.lr = 0x830741B4;
	sub_8253CE80(ctx, base);
	// lwz r11,-31756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31756);
loc_830741B8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r30,-31982
	ctx.r30.s64 = -2095972352;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,6744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830741e8
	if (!ctx.cr6.eq) goto loc_830741E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82824ca0
	ctx.lr = 0x830741DC;
	sub_82824CA0(ctx, base);
	// stw r3,6744(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6744, ctx.r3.u32);
	// bl 0x827d2b48
	ctx.lr = 0x830741E4;
	sub_827D2B48(ctx, base);
	// lwz r11,6744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6744);
loc_830741E8:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r30,-31982
	ctx.r30.s64 = -2095972352;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,4512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83074218
	if (!ctx.cr6.eq) goto loc_83074218;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826fac38
	ctx.lr = 0x8307420C;
	sub_826FAC38(ctx, base);
	// stw r3,4512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4512, ctx.r3.u32);
	// bl 0x826c6b70
	ctx.lr = 0x83074214;
	sub_826C6B70(ctx, base);
	// lwz r11,4512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4512);
loc_83074218:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r30,-31982
	ctx.r30.s64 = -2095972352;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,4516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83074248
	if (!ctx.cr6.eq) goto loc_83074248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826f64d0
	ctx.lr = 0x8307423C;
	sub_826F64D0(ctx, base);
	// stw r3,4516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4516, ctx.r3.u32);
	// bl 0x826c6f90
	ctx.lr = 0x83074244;
	sub_826C6F90(ctx, base);
	// lwz r11,4516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4516);
loc_83074248:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r30,-31982
	ctx.r30.s64 = -2095972352;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,-16064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16064);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83074278
	if (!ctx.cr6.eq) goto loc_83074278;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825e6f60
	ctx.lr = 0x8307426C;
	sub_825E6F60(ctx, base);
	// stw r3,-16064(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16064, ctx.r3.u32);
	// bl 0x825a1198
	ctx.lr = 0x83074274;
	sub_825A1198(ctx, base);
	// lwz r11,-16064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16064);
loc_83074278:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r30,-31982
	ctx.r30.s64 = -2095972352;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,-16080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830742a8
	if (!ctx.cr6.eq) goto loc_830742A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825d4078
	ctx.lr = 0x8307429C;
	sub_825D4078(ctx, base);
	// stw r3,-16080(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16080, ctx.r3.u32);
	// bl 0x825a0bd8
	ctx.lr = 0x830742A4;
	sub_825A0BD8(ctx, base);
	// lwz r11,-16080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16080);
loc_830742A8:
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r30,-31982
	ctx.r30.s64 = -2095972352;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,-16140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830742d8
	if (!ctx.cr6.eq) goto loc_830742D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825c7da0
	ctx.lr = 0x830742CC;
	sub_825C7DA0(ctx, base);
	// stw r3,-16140(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16140, ctx.r3.u32);
	// bl 0x825a0440
	ctx.lr = 0x830742D4;
	sub_825A0440(ctx, base);
	// lwz r11,-16140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16140);
loc_830742D8:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// lis r30,-31982
	ctx.r30.s64 = -2095972352;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,-16284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83074308
	if (!ctx.cr6.eq) goto loc_83074308;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825cfcc0
	ctx.lr = 0x830742FC;
	sub_825CFCC0(ctx, base);
	// stw r3,-16284(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16284, ctx.r3.u32);
	// bl 0x825b0800
	ctx.lr = 0x83074304;
	sub_825B0800(ctx, base);
	// lwz r11,-16284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16284);
loc_83074308:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074320"))) PPC_WEAK_FUNC(sub_83074320);
PPC_FUNC_IMPL(__imp__sub_83074320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,4224
	ctx.r11.s64 = ctx.r11.s64 + 4224;
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

__attribute__((alias("__imp__sub_83074350"))) PPC_WEAK_FUNC(sub_83074350);
PPC_FUNC_IMPL(__imp__sub_83074350) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,4288
	ctx.r11.s64 = ctx.r11.s64 + 4288;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074380"))) PPC_WEAK_FUNC(sub_83074380);
PPC_FUNC_IMPL(__imp__sub_83074380) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,4320
	ctx.r11.s64 = ctx.r11.s64 + 4320;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830743C8"))) PPC_WEAK_FUNC(sub_830743C8);
PPC_FUNC_IMPL(__imp__sub_830743C8) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,4240
	ctx.r11.s64 = ctx.r11.s64 + 4240;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074410"))) PPC_WEAK_FUNC(sub_83074410);
PPC_FUNC_IMPL(__imp__sub_83074410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27360
	ctx.r3.s64 = ctx.r11.s64 + 27360;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074420"))) PPC_WEAK_FUNC(sub_83074420);
PPC_FUNC_IMPL(__imp__sub_83074420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27432
	ctx.r3.s64 = ctx.r11.s64 + 27432;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074430"))) PPC_WEAK_FUNC(sub_83074430);
PPC_FUNC_IMPL(__imp__sub_83074430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27192
	ctx.r3.s64 = ctx.r11.s64 + 27192;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074440"))) PPC_WEAK_FUNC(sub_83074440);
PPC_FUNC_IMPL(__imp__sub_83074440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,5983
	ctx.r4.s64 = ctx.r11.s64 + 5983;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r3,r11,4348
	ctx.r3.s64 = ctx.r11.s64 + 4348;
	// bl 0x82304fb8
	ctx.lr = 0x83074460;
	sub_82304FB8(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27312
	ctx.r3.s64 = ctx.r11.s64 + 27312;
	// bl 0x82d5cd68
	ctx.lr = 0x8307446C;
	sub_82D5CD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074480"))) PPC_WEAK_FUNC(sub_83074480);
PPC_FUNC_IMPL(__imp__sub_83074480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,13168
	ctx.r4.s64 = ctx.r11.s64 + 13168;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r3,r11,4396
	ctx.r3.s64 = ctx.r11.s64 + 4396;
	// bl 0x82304fb8
	ctx.lr = 0x830744A0;
	sub_82304FB8(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27328
	ctx.r3.s64 = ctx.r11.s64 + 27328;
	// bl 0x82d5cd68
	ctx.lr = 0x830744AC;
	sub_82D5CD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830744C0"))) PPC_WEAK_FUNC(sub_830744C0);
PPC_FUNC_IMPL(__imp__sub_830744C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27344
	ctx.r3.s64 = ctx.r11.s64 + 27344;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830744D0"))) PPC_WEAK_FUNC(sub_830744D0);
PPC_FUNC_IMPL(__imp__sub_830744D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
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

__attribute__((alias("__imp__sub_83074500"))) PPC_WEAK_FUNC(sub_83074500);
PPC_FUNC_IMPL(__imp__sub_83074500) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5040
	ctx.r11.s64 = ctx.r11.s64 + 5040;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074530"))) PPC_WEAK_FUNC(sub_83074530);
PPC_FUNC_IMPL(__imp__sub_83074530) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5056
	ctx.r11.s64 = ctx.r11.s64 + 5056;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074578"))) PPC_WEAK_FUNC(sub_83074578);
PPC_FUNC_IMPL(__imp__sub_83074578) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,4896
	ctx.r11.s64 = ctx.r11.s64 + 4896;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830745C0"))) PPC_WEAK_FUNC(sub_830745C0);
PPC_FUNC_IMPL(__imp__sub_830745C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,20400
	ctx.r3.s64 = ctx.r11.s64 + 20400;
	// bl 0x82457d18
	ctx.lr = 0x830745DC;
	sub_82457D18(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r3,4760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830745F8"))) PPC_WEAK_FUNC(sub_830745F8);
PPC_FUNC_IMPL(__imp__sub_830745F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27536
	ctx.r3.s64 = ctx.r11.s64 + 27536;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074608"))) PPC_WEAK_FUNC(sub_83074608);
PPC_FUNC_IMPL(__imp__sub_83074608) {
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r31,r11,16152
	ctx.r31.s64 = ctx.r11.s64 + 16152;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dc718
	ctx.lr = 0x83074630;
	sub_822DC718(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31992
	ctx.r10.s64 = -2096627712;
	// addi r3,r10,27552
	ctx.r3.s64 = ctx.r10.s64 + 27552;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83074644;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83074658"))) PPC_WEAK_FUNC(sub_83074658);
PPC_FUNC_IMPL(__imp__sub_83074658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27568
	ctx.r3.s64 = ctx.r11.s64 + 27568;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074668"))) PPC_WEAK_FUNC(sub_83074668);
PPC_FUNC_IMPL(__imp__sub_83074668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27904
	ctx.r3.s64 = ctx.r11.s64 + 27904;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074678"))) PPC_WEAK_FUNC(sub_83074678);
PPC_FUNC_IMPL(__imp__sub_83074678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfs f0,21356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21356);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsqrts f11,f0
	ctx.f11.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,-18744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18744);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,-18724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18724);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// lfs f11,16816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16816);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,21360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21360);
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

__attribute__((alias("__imp__sub_83074700"))) PPC_WEAK_FUNC(sub_83074700);
PPC_FUNC_IMPL(__imp__sub_83074700) {
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
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,1668
	ctx.r6.s64 = ctx.r10.s64 + 1668;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,29036
	ctx.r5.s64 = ctx.r10.s64 + 29036;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29012
	ctx.r4.s64 = ctx.r10.s64 + 29012;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,4644
	ctx.r31.s64 = ctx.r10.s64 + 4644;
	// addi r10,r11,-20544
	ctx.r10.s64 = ctx.r11.s64 + -20544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83074758;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,27976
	ctx.r3.s64 = ctx.r8.s64 + 27976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-28680
	ctx.r11.s64 = ctx.r9.s64 + -28680;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83074788;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_830747A0"))) PPC_WEAK_FUNC(sub_830747A0);
PPC_FUNC_IMPL(__imp__sub_830747A0) {
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
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,1712
	ctx.r6.s64 = ctx.r10.s64 + 1712;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,29036
	ctx.r5.s64 = ctx.r10.s64 + 29036;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29056
	ctx.r4.s64 = ctx.r10.s64 + 29056;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,4764
	ctx.r31.s64 = ctx.r10.s64 + 4764;
	// addi r10,r11,-10600
	ctx.r10.s64 = ctx.r11.s64 + -10600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830747F8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32143
	ctx.r9.s64 = -2106523648;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,27648
	ctx.r3.s64 = ctx.r8.s64 + 27648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-28808
	ctx.r11.s64 = ctx.r9.s64 + -28808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83074828;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_83074840"))) PPC_WEAK_FUNC(sub_83074840);
PPC_FUNC_IMPL(__imp__sub_83074840) {
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
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,29124
	ctx.r6.s64 = ctx.r10.s64 + 29124;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,29036
	ctx.r5.s64 = ctx.r10.s64 + 29036;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29080
	ctx.r4.s64 = ctx.r10.s64 + 29080;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,4948
	ctx.r31.s64 = ctx.r10.s64 + 4948;
	// addi r10,r11,-8864
	ctx.r10.s64 = ctx.r11.s64 + -8864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83074898;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32143
	ctx.r9.s64 = -2106523648;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,27728
	ctx.r3.s64 = ctx.r8.s64 + 27728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-28720
	ctx.r11.s64 = ctx.r9.s64 + -28720;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830748C8;
	sub_82D5CD68(ctx, base);
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

__attribute__((alias("__imp__sub_830748E0"))) PPC_WEAK_FUNC(sub_830748E0);
PPC_FUNC_IMPL(__imp__sub_830748E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28056
	ctx.r3.s64 = ctx.r11.s64 + 28056;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830748F0"))) PPC_WEAK_FUNC(sub_830748F0);
PPC_FUNC_IMPL(__imp__sub_830748F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27808
	ctx.r3.s64 = ctx.r11.s64 + 27808;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074900"))) PPC_WEAK_FUNC(sub_83074900);
PPC_FUNC_IMPL(__imp__sub_83074900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27824
	ctx.r3.s64 = ctx.r11.s64 + 27824;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074910"))) PPC_WEAK_FUNC(sub_83074910);
PPC_FUNC_IMPL(__imp__sub_83074910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27840
	ctx.r3.s64 = ctx.r11.s64 + 27840;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074920"))) PPC_WEAK_FUNC(sub_83074920);
PPC_FUNC_IMPL(__imp__sub_83074920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27856
	ctx.r3.s64 = ctx.r11.s64 + 27856;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074930"))) PPC_WEAK_FUNC(sub_83074930);
PPC_FUNC_IMPL(__imp__sub_83074930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27872
	ctx.r3.s64 = ctx.r11.s64 + 27872;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074940"))) PPC_WEAK_FUNC(sub_83074940);
PPC_FUNC_IMPL(__imp__sub_83074940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27888
	ctx.r3.s64 = ctx.r11.s64 + 27888;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074950"))) PPC_WEAK_FUNC(sub_83074950);
PPC_FUNC_IMPL(__imp__sub_83074950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r11,r11,17120
	ctx.r11.s64 = ctx.r11.s64 + 17120;
	// lfs f0,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
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

__attribute__((alias("__imp__sub_83074988"))) PPC_WEAK_FUNC(sub_83074988);
PPC_FUNC_IMPL(__imp__sub_83074988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,5936
	ctx.r11.s64 = ctx.r11.s64 + 5936;
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

__attribute__((alias("__imp__sub_830749B8"))) PPC_WEAK_FUNC(sub_830749B8);
PPC_FUNC_IMPL(__imp__sub_830749B8) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6000
	ctx.r11.s64 = ctx.r11.s64 + 6000;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830749E8"))) PPC_WEAK_FUNC(sub_830749E8);
PPC_FUNC_IMPL(__imp__sub_830749E8) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6016
	ctx.r11.s64 = ctx.r11.s64 + 6016;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074A30"))) PPC_WEAK_FUNC(sub_83074A30);
PPC_FUNC_IMPL(__imp__sub_83074A30) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5952
	ctx.r11.s64 = ctx.r11.s64 + 5952;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074A78"))) PPC_WEAK_FUNC(sub_83074A78);
PPC_FUNC_IMPL(__imp__sub_83074A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28216
	ctx.r3.s64 = ctx.r11.s64 + 28216;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074A88"))) PPC_WEAK_FUNC(sub_83074A88);
PPC_FUNC_IMPL(__imp__sub_83074A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r11,r11,19152
	ctx.r11.s64 = ctx.r11.s64 + 19152;
	// lfs f0,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
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

__attribute__((alias("__imp__sub_83074AC0"))) PPC_WEAK_FUNC(sub_83074AC0);
PPC_FUNC_IMPL(__imp__sub_83074AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r11,19172
	ctx.r3.s64 = ctx.r11.s64 + 19172;
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x822dc718
	ctx.lr = 0x83074AE0;
	sub_822DC718(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28232
	ctx.r3.s64 = ctx.r11.s64 + 28232;
	// bl 0x82d5cd68
	ctx.lr = 0x83074AEC;
	sub_82D5CD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074B00"))) PPC_WEAK_FUNC(sub_83074B00);
PPC_FUNC_IMPL(__imp__sub_83074B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17152
	ctx.r4.s64 = ctx.r11.s64 + 17152;
	// bl 0x824215d0
	ctx.lr = 0x83074B1C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5916(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5916, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074B38"))) PPC_WEAK_FUNC(sub_83074B38);
PPC_FUNC_IMPL(__imp__sub_83074B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17156
	ctx.r4.s64 = ctx.r11.s64 + 17156;
	// bl 0x824215d0
	ctx.lr = 0x83074B54;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5892(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5892, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074B70"))) PPC_WEAK_FUNC(sub_83074B70);
PPC_FUNC_IMPL(__imp__sub_83074B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17160
	ctx.r4.s64 = ctx.r11.s64 + 17160;
	// bl 0x824215d0
	ctx.lr = 0x83074B8C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5911(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5911, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074BA8"))) PPC_WEAK_FUNC(sub_83074BA8);
PPC_FUNC_IMPL(__imp__sub_83074BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17164
	ctx.r4.s64 = ctx.r11.s64 + 17164;
	// bl 0x824215d0
	ctx.lr = 0x83074BC4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5919(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5919, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074BE0"))) PPC_WEAK_FUNC(sub_83074BE0);
PPC_FUNC_IMPL(__imp__sub_83074BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17168
	ctx.r4.s64 = ctx.r11.s64 + 17168;
	// bl 0x824215d0
	ctx.lr = 0x83074BFC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5909(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5909, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074C18"))) PPC_WEAK_FUNC(sub_83074C18);
PPC_FUNC_IMPL(__imp__sub_83074C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17172
	ctx.r4.s64 = ctx.r11.s64 + 17172;
	// bl 0x824215d0
	ctx.lr = 0x83074C34;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5895(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5895, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074C50"))) PPC_WEAK_FUNC(sub_83074C50);
PPC_FUNC_IMPL(__imp__sub_83074C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17176
	ctx.r4.s64 = ctx.r11.s64 + 17176;
	// bl 0x824215d0
	ctx.lr = 0x83074C6C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5996(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5996, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074C88"))) PPC_WEAK_FUNC(sub_83074C88);
PPC_FUNC_IMPL(__imp__sub_83074C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17180
	ctx.r4.s64 = ctx.r11.s64 + 17180;
	// bl 0x824215d0
	ctx.lr = 0x83074CA4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5935(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5935, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074CC0"))) PPC_WEAK_FUNC(sub_83074CC0);
PPC_FUNC_IMPL(__imp__sub_83074CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17184
	ctx.r4.s64 = ctx.r11.s64 + 17184;
	// bl 0x824215d0
	ctx.lr = 0x83074CDC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5934(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5934, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074CF8"))) PPC_WEAK_FUNC(sub_83074CF8);
PPC_FUNC_IMPL(__imp__sub_83074CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17188
	ctx.r4.s64 = ctx.r11.s64 + 17188;
	// bl 0x824215d0
	ctx.lr = 0x83074D14;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5933(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5933, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074D30"))) PPC_WEAK_FUNC(sub_83074D30);
PPC_FUNC_IMPL(__imp__sub_83074D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17192
	ctx.r4.s64 = ctx.r11.s64 + 17192;
	// bl 0x824215d0
	ctx.lr = 0x83074D4C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5932(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5932, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074D68"))) PPC_WEAK_FUNC(sub_83074D68);
PPC_FUNC_IMPL(__imp__sub_83074D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17196
	ctx.r4.s64 = ctx.r11.s64 + 17196;
	// bl 0x824215d0
	ctx.lr = 0x83074D84;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5918(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5918, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074DA0"))) PPC_WEAK_FUNC(sub_83074DA0);
PPC_FUNC_IMPL(__imp__sub_83074DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17200
	ctx.r4.s64 = ctx.r11.s64 + 17200;
	// bl 0x824215d0
	ctx.lr = 0x83074DBC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5894(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5894, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074DD8"))) PPC_WEAK_FUNC(sub_83074DD8);
PPC_FUNC_IMPL(__imp__sub_83074DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17204
	ctx.r4.s64 = ctx.r11.s64 + 17204;
	// bl 0x824215d0
	ctx.lr = 0x83074DF4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5908(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5908, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074E10"))) PPC_WEAK_FUNC(sub_83074E10);
PPC_FUNC_IMPL(__imp__sub_83074E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17208
	ctx.r4.s64 = ctx.r11.s64 + 17208;
	// bl 0x824215d0
	ctx.lr = 0x83074E2C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5917(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5917, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074E48"))) PPC_WEAK_FUNC(sub_83074E48);
PPC_FUNC_IMPL(__imp__sub_83074E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17212
	ctx.r4.s64 = ctx.r11.s64 + 17212;
	// bl 0x824215d0
	ctx.lr = 0x83074E64;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5910(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5910, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074E80"))) PPC_WEAK_FUNC(sub_83074E80);
PPC_FUNC_IMPL(__imp__sub_83074E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,17216
	ctx.r4.s64 = ctx.r11.s64 + 17216;
	// bl 0x824215d0
	ctx.lr = 0x83074E9C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,5893(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5893, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074EB8"))) PPC_WEAK_FUNC(sub_83074EB8);
PPC_FUNC_IMPL(__imp__sub_83074EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28128
	ctx.r3.s64 = ctx.r11.s64 + 28128;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074EC8"))) PPC_WEAK_FUNC(sub_83074EC8);
PPC_FUNC_IMPL(__imp__sub_83074EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28152
	ctx.r3.s64 = ctx.r11.s64 + 28152;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074ED8"))) PPC_WEAK_FUNC(sub_83074ED8);
PPC_FUNC_IMPL(__imp__sub_83074ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28176
	ctx.r3.s64 = ctx.r11.s64 + 28176;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83074EE8"))) PPC_WEAK_FUNC(sub_83074EE8);
PPC_FUNC_IMPL(__imp__sub_83074EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// lbz r9,17228(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17228);
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,17224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17224);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,5888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5888, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83074F08"))) PPC_WEAK_FUNC(sub_83074F08);
PPC_FUNC_IMPL(__imp__sub_83074F08) {
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
	// bl 0x8247d8e0
	ctx.lr = 0x83074F20;
	sub_8247D8E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83074f9c
	if (ctx.cr6.eq) goto loc_83074F9C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// addi r10,r10,-16380
	ctx.r10.s64 = ctx.r10.s64 + -16380;
	// lfd f0,-11920(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11920);
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
	// bl 0x8252cb70
	ctx.lr = 0x83074F80;
	sub_8252CB70(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r31,5912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5912, ctx.r31.u32);
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
loc_83074F9C:
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5912, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83074FC0"))) PPC_WEAK_FUNC(sub_83074FC0);
PPC_FUNC_IMPL(__imp__sub_83074FC0) {
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
	// bl 0x8247d8e0
	ctx.lr = 0x83074FD8;
	sub_8247D8E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83075054
	if (ctx.cr6.eq) goto loc_83075054;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// addi r10,r10,-16340
	ctx.r10.s64 = ctx.r10.s64 + -16340;
	// lfd f0,-11920(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11920);
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
	// bl 0x8252cb70
	ctx.lr = 0x83075038;
	sub_8252CB70(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r31,5884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5884, ctx.r31.u32);
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
loc_83075054:
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5884, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83075078"))) PPC_WEAK_FUNC(sub_83075078);
PPC_FUNC_IMPL(__imp__sub_83075078) {
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
	// bl 0x8247d8e0
	ctx.lr = 0x83075090;
	sub_8247D8E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8307510c
	if (ctx.cr6.eq) goto loc_8307510C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// addi r10,r10,-16300
	ctx.r10.s64 = ctx.r10.s64 + -16300;
	// lfd f0,-11920(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11920);
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
	// bl 0x8252cb70
	ctx.lr = 0x830750F0;
	sub_8252CB70(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r31,6032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6032, ctx.r31.u32);
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
loc_8307510C:
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6032, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83075130"))) PPC_WEAK_FUNC(sub_83075130);
PPC_FUNC_IMPL(__imp__sub_83075130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,7248
	ctx.r11.s64 = ctx.r11.s64 + 7248;
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

__attribute__((alias("__imp__sub_83075160"))) PPC_WEAK_FUNC(sub_83075160);
PPC_FUNC_IMPL(__imp__sub_83075160) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7328
	ctx.r11.s64 = ctx.r11.s64 + 7328;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075190"))) PPC_WEAK_FUNC(sub_83075190);
PPC_FUNC_IMPL(__imp__sub_83075190) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7344
	ctx.r11.s64 = ctx.r11.s64 + 7344;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830751D8"))) PPC_WEAK_FUNC(sub_830751D8);
PPC_FUNC_IMPL(__imp__sub_830751D8) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7264
	ctx.r11.s64 = ctx.r11.s64 + 7264;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075220"))) PPC_WEAK_FUNC(sub_83075220);
PPC_FUNC_IMPL(__imp__sub_83075220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,384
	ctx.r3.s64 = 384;
	// addi r4,r11,19244
	ctx.r4.s64 = ctx.r11.s64 + 19244;
	// bl 0x824215d0
	ctx.lr = 0x8307523C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6870(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6870, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075258"))) PPC_WEAK_FUNC(sub_83075258);
PPC_FUNC_IMPL(__imp__sub_83075258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19248
	ctx.r4.s64 = ctx.r11.s64 + 19248;
	// bl 0x824215d0
	ctx.lr = 0x83075274;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6869(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6869, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075290"))) PPC_WEAK_FUNC(sub_83075290);
PPC_FUNC_IMPL(__imp__sub_83075290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19252
	ctx.r4.s64 = ctx.r11.s64 + 19252;
	// bl 0x824215d0
	ctx.lr = 0x830752AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7183(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7183, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830752C8"))) PPC_WEAK_FUNC(sub_830752C8);
PPC_FUNC_IMPL(__imp__sub_830752C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19256
	ctx.r4.s64 = ctx.r11.s64 + 19256;
	// bl 0x824215d0
	ctx.lr = 0x830752E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6879(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6879, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075300"))) PPC_WEAK_FUNC(sub_83075300);
PPC_FUNC_IMPL(__imp__sub_83075300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19260
	ctx.r4.s64 = ctx.r11.s64 + 19260;
	// bl 0x824215d0
	ctx.lr = 0x8307531C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7360(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7360, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075338"))) PPC_WEAK_FUNC(sub_83075338);
PPC_FUNC_IMPL(__imp__sub_83075338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19264
	ctx.r4.s64 = ctx.r11.s64 + 19264;
	// bl 0x824215d0
	ctx.lr = 0x83075354;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7366(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7366, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075370"))) PPC_WEAK_FUNC(sub_83075370);
PPC_FUNC_IMPL(__imp__sub_83075370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19268
	ctx.r4.s64 = ctx.r11.s64 + 19268;
	// bl 0x824215d0
	ctx.lr = 0x8307538C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6866(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6866, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830753A8"))) PPC_WEAK_FUNC(sub_830753A8);
PPC_FUNC_IMPL(__imp__sub_830753A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19272
	ctx.r4.s64 = ctx.r11.s64 + 19272;
	// bl 0x824215d0
	ctx.lr = 0x830753C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7241, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830753E0"))) PPC_WEAK_FUNC(sub_830753E0);
PPC_FUNC_IMPL(__imp__sub_830753E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19276
	ctx.r4.s64 = ctx.r11.s64 + 19276;
	// bl 0x824215d0
	ctx.lr = 0x830753FC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7181(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7181, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075418"))) PPC_WEAK_FUNC(sub_83075418);
PPC_FUNC_IMPL(__imp__sub_83075418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19280
	ctx.r4.s64 = ctx.r11.s64 + 19280;
	// bl 0x824215d0
	ctx.lr = 0x83075434;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7235(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7235, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075450"))) PPC_WEAK_FUNC(sub_83075450);
PPC_FUNC_IMPL(__imp__sub_83075450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19284
	ctx.r4.s64 = ctx.r11.s64 + 19284;
	// bl 0x824215d0
	ctx.lr = 0x8307546C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6863(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6863, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075488"))) PPC_WEAK_FUNC(sub_83075488);
PPC_FUNC_IMPL(__imp__sub_83075488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19288
	ctx.r4.s64 = ctx.r11.s64 + 19288;
	// bl 0x824215d0
	ctx.lr = 0x830754A4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7363(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7363, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830754C0"))) PPC_WEAK_FUNC(sub_830754C0);
PPC_FUNC_IMPL(__imp__sub_830754C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19292
	ctx.r4.s64 = ctx.r11.s64 + 19292;
	// bl 0x824215d0
	ctx.lr = 0x830754DC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6875(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6875, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830754F8"))) PPC_WEAK_FUNC(sub_830754F8);
PPC_FUNC_IMPL(__imp__sub_830754F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19296
	ctx.r4.s64 = ctx.r11.s64 + 19296;
	// bl 0x824215d0
	ctx.lr = 0x83075514;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7236(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7236, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075530"))) PPC_WEAK_FUNC(sub_83075530);
PPC_FUNC_IMPL(__imp__sub_83075530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19300
	ctx.r4.s64 = ctx.r11.s64 + 19300;
	// bl 0x824215d0
	ctx.lr = 0x8307554C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6874(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6874, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075568"))) PPC_WEAK_FUNC(sub_83075568);
PPC_FUNC_IMPL(__imp__sub_83075568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19304
	ctx.r4.s64 = ctx.r11.s64 + 19304;
	// bl 0x824215d0
	ctx.lr = 0x83075584;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7245(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7245, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830755A0"))) PPC_WEAK_FUNC(sub_830755A0);
PPC_FUNC_IMPL(__imp__sub_830755A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19308
	ctx.r4.s64 = ctx.r11.s64 + 19308;
	// bl 0x824215d0
	ctx.lr = 0x830755BC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6877(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6877, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830755D8"))) PPC_WEAK_FUNC(sub_830755D8);
PPC_FUNC_IMPL(__imp__sub_830755D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19312
	ctx.r4.s64 = ctx.r11.s64 + 19312;
	// bl 0x824215d0
	ctx.lr = 0x830755F4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7233, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075610"))) PPC_WEAK_FUNC(sub_83075610);
PPC_FUNC_IMPL(__imp__sub_83075610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19316
	ctx.r4.s64 = ctx.r11.s64 + 19316;
	// bl 0x824215d0
	ctx.lr = 0x8307562C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6868(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6868, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075648"))) PPC_WEAK_FUNC(sub_83075648);
PPC_FUNC_IMPL(__imp__sub_83075648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19320
	ctx.r4.s64 = ctx.r11.s64 + 19320;
	// bl 0x824215d0
	ctx.lr = 0x83075664;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7243(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7243, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075680"))) PPC_WEAK_FUNC(sub_83075680);
PPC_FUNC_IMPL(__imp__sub_83075680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19324
	ctx.r4.s64 = ctx.r11.s64 + 19324;
	// bl 0x824215d0
	ctx.lr = 0x8307569C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7246, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830756B8"))) PPC_WEAK_FUNC(sub_830756B8);
PPC_FUNC_IMPL(__imp__sub_830756B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19328
	ctx.r4.s64 = ctx.r11.s64 + 19328;
	// bl 0x824215d0
	ctx.lr = 0x830756D4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7244(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7244, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830756F0"))) PPC_WEAK_FUNC(sub_830756F0);
PPC_FUNC_IMPL(__imp__sub_830756F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19332
	ctx.r4.s64 = ctx.r11.s64 + 19332;
	// bl 0x824215d0
	ctx.lr = 0x8307570C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6860(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6860, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075728"))) PPC_WEAK_FUNC(sub_83075728);
PPC_FUNC_IMPL(__imp__sub_83075728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19336
	ctx.r4.s64 = ctx.r11.s64 + 19336;
	// bl 0x824215d0
	ctx.lr = 0x83075744;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7238(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7238, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075760"))) PPC_WEAK_FUNC(sub_83075760);
PPC_FUNC_IMPL(__imp__sub_83075760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19340
	ctx.r4.s64 = ctx.r11.s64 + 19340;
	// bl 0x824215d0
	ctx.lr = 0x8307577C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7234(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7234, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075798"))) PPC_WEAK_FUNC(sub_83075798);
PPC_FUNC_IMPL(__imp__sub_83075798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19344
	ctx.r4.s64 = ctx.r11.s64 + 19344;
	// bl 0x824215d0
	ctx.lr = 0x830757B4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6873(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6873, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830757D0"))) PPC_WEAK_FUNC(sub_830757D0);
PPC_FUNC_IMPL(__imp__sub_830757D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19348
	ctx.r4.s64 = ctx.r11.s64 + 19348;
	// bl 0x824215d0
	ctx.lr = 0x830757EC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6864(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6864, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075808"))) PPC_WEAK_FUNC(sub_83075808);
PPC_FUNC_IMPL(__imp__sub_83075808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19352
	ctx.r4.s64 = ctx.r11.s64 + 19352;
	// bl 0x824215d0
	ctx.lr = 0x83075824;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6872(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6872, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075840"))) PPC_WEAK_FUNC(sub_83075840);
PPC_FUNC_IMPL(__imp__sub_83075840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19356
	ctx.r4.s64 = ctx.r11.s64 + 19356;
	// bl 0x824215d0
	ctx.lr = 0x8307585C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6878(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6878, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075878"))) PPC_WEAK_FUNC(sub_83075878);
PPC_FUNC_IMPL(__imp__sub_83075878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19360
	ctx.r4.s64 = ctx.r11.s64 + 19360;
	// bl 0x824215d0
	ctx.lr = 0x83075894;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7362(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7362, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830758B0"))) PPC_WEAK_FUNC(sub_830758B0);
PPC_FUNC_IMPL(__imp__sub_830758B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19364
	ctx.r4.s64 = ctx.r11.s64 + 19364;
	// bl 0x824215d0
	ctx.lr = 0x830758CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7240(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7240, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830758E8"))) PPC_WEAK_FUNC(sub_830758E8);
PPC_FUNC_IMPL(__imp__sub_830758E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19368
	ctx.r4.s64 = ctx.r11.s64 + 19368;
	// bl 0x824215d0
	ctx.lr = 0x83075904;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7180(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7180, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075920"))) PPC_WEAK_FUNC(sub_83075920);
PPC_FUNC_IMPL(__imp__sub_83075920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19372
	ctx.r4.s64 = ctx.r11.s64 + 19372;
	// bl 0x824215d0
	ctx.lr = 0x8307593C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7239(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7239, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075958"))) PPC_WEAK_FUNC(sub_83075958);
PPC_FUNC_IMPL(__imp__sub_83075958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19376
	ctx.r4.s64 = ctx.r11.s64 + 19376;
	// bl 0x824215d0
	ctx.lr = 0x83075974;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7242(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7242, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075990"))) PPC_WEAK_FUNC(sub_83075990);
PPC_FUNC_IMPL(__imp__sub_83075990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19380
	ctx.r4.s64 = ctx.r11.s64 + 19380;
	// bl 0x824215d0
	ctx.lr = 0x830759AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7247(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7247, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830759C8"))) PPC_WEAK_FUNC(sub_830759C8);
PPC_FUNC_IMPL(__imp__sub_830759C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19384
	ctx.r4.s64 = ctx.r11.s64 + 19384;
	// bl 0x824215d0
	ctx.lr = 0x830759E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7364(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7364, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075A00"))) PPC_WEAK_FUNC(sub_83075A00);
PPC_FUNC_IMPL(__imp__sub_83075A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19388
	ctx.r4.s64 = ctx.r11.s64 + 19388;
	// bl 0x824215d0
	ctx.lr = 0x83075A1C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6876(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6876, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075A38"))) PPC_WEAK_FUNC(sub_83075A38);
PPC_FUNC_IMPL(__imp__sub_83075A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19392
	ctx.r4.s64 = ctx.r11.s64 + 19392;
	// bl 0x824215d0
	ctx.lr = 0x83075A54;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6867(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6867, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075A70"))) PPC_WEAK_FUNC(sub_83075A70);
PPC_FUNC_IMPL(__imp__sub_83075A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19396
	ctx.r4.s64 = ctx.r11.s64 + 19396;
	// bl 0x824215d0
	ctx.lr = 0x83075A8C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6861(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6861, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075AA8"))) PPC_WEAK_FUNC(sub_83075AA8);
PPC_FUNC_IMPL(__imp__sub_83075AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19400
	ctx.r4.s64 = ctx.r11.s64 + 19400;
	// bl 0x824215d0
	ctx.lr = 0x83075AC4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7365(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7365, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075AE0"))) PPC_WEAK_FUNC(sub_83075AE0);
PPC_FUNC_IMPL(__imp__sub_83075AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19404
	ctx.r4.s64 = ctx.r11.s64 + 19404;
	// bl 0x824215d0
	ctx.lr = 0x83075AFC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6865(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6865, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075B18"))) PPC_WEAK_FUNC(sub_83075B18);
PPC_FUNC_IMPL(__imp__sub_83075B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19408
	ctx.r4.s64 = ctx.r11.s64 + 19408;
	// bl 0x824215d0
	ctx.lr = 0x83075B34;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6871(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6871, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075B50"))) PPC_WEAK_FUNC(sub_83075B50);
PPC_FUNC_IMPL(__imp__sub_83075B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19412
	ctx.r4.s64 = ctx.r11.s64 + 19412;
	// bl 0x824215d0
	ctx.lr = 0x83075B6C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7232(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7232, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075B88"))) PPC_WEAK_FUNC(sub_83075B88);
PPC_FUNC_IMPL(__imp__sub_83075B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19416
	ctx.r4.s64 = ctx.r11.s64 + 19416;
	// bl 0x824215d0
	ctx.lr = 0x83075BA4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,6862(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6862, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075BC0"))) PPC_WEAK_FUNC(sub_83075BC0);
PPC_FUNC_IMPL(__imp__sub_83075BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19420
	ctx.r4.s64 = ctx.r11.s64 + 19420;
	// bl 0x824215d0
	ctx.lr = 0x83075BDC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7182(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7182, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075BF8"))) PPC_WEAK_FUNC(sub_83075BF8);
PPC_FUNC_IMPL(__imp__sub_83075BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19424
	ctx.r4.s64 = ctx.r11.s64 + 19424;
	// bl 0x824215d0
	ctx.lr = 0x83075C14;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7361(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7361, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075C30"))) PPC_WEAK_FUNC(sub_83075C30);
PPC_FUNC_IMPL(__imp__sub_83075C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,19428
	ctx.r4.s64 = ctx.r11.s64 + 19428;
	// bl 0x824215d0
	ctx.lr = 0x83075C4C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7237(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7237, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075C68"))) PPC_WEAK_FUNC(sub_83075C68);
PPC_FUNC_IMPL(__imp__sub_83075C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28248
	ctx.r3.s64 = ctx.r11.s64 + 28248;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83075C78"))) PPC_WEAK_FUNC(sub_83075C78);
PPC_FUNC_IMPL(__imp__sub_83075C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7072
	ctx.r11.s64 = ctx.r11.s64 + 7072;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075CA8"))) PPC_WEAK_FUNC(sub_83075CA8);
PPC_FUNC_IMPL(__imp__sub_83075CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7040
	ctx.r11.s64 = ctx.r11.s64 + 7040;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075CD0"))) PPC_WEAK_FUNC(sub_83075CD0);
PPC_FUNC_IMPL(__imp__sub_83075CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7216
	ctx.r11.s64 = ctx.r11.s64 + 7216;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075CF8"))) PPC_WEAK_FUNC(sub_83075CF8);
PPC_FUNC_IMPL(__imp__sub_83075CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24492);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7296
	ctx.r11.s64 = ctx.r11.s64 + 7296;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075D20"))) PPC_WEAK_FUNC(sub_83075D20);
PPC_FUNC_IMPL(__imp__sub_83075D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,6944
	ctx.r11.s64 = ctx.r11.s64 + 6944;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075D48"))) PPC_WEAK_FUNC(sub_83075D48);
PPC_FUNC_IMPL(__imp__sub_83075D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-28944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28944);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7104
	ctx.r11.s64 = ctx.r11.s64 + 7104;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075D70"))) PPC_WEAK_FUNC(sub_83075D70);
PPC_FUNC_IMPL(__imp__sub_83075D70) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7376
	ctx.r11.s64 = ctx.r11.s64 + 7376;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075DA0"))) PPC_WEAK_FUNC(sub_83075DA0);
PPC_FUNC_IMPL(__imp__sub_83075DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f13,21360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21360);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6976
	ctx.r11.s64 = ctx.r11.s64 + 6976;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075DD8"))) PPC_WEAK_FUNC(sub_83075DD8);
PPC_FUNC_IMPL(__imp__sub_83075DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,21360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21360);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7200
	ctx.r11.s64 = ctx.r11.s64 + 7200;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075E10"))) PPC_WEAK_FUNC(sub_83075E10);
PPC_FUNC_IMPL(__imp__sub_83075E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21360);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f13,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6992
	ctx.r11.s64 = ctx.r11.s64 + 6992;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075E48"))) PPC_WEAK_FUNC(sub_83075E48);
PPC_FUNC_IMPL(__imp__sub_83075E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24500);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,6928
	ctx.r11.s64 = ctx.r11.s64 + 6928;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075E70"))) PPC_WEAK_FUNC(sub_83075E70);
PPC_FUNC_IMPL(__imp__sub_83075E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7008
	ctx.r11.s64 = ctx.r11.s64 + 7008;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075E98"))) PPC_WEAK_FUNC(sub_83075E98);
PPC_FUNC_IMPL(__imp__sub_83075E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24508);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7136
	ctx.r11.s64 = ctx.r11.s64 + 7136;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075EC0"))) PPC_WEAK_FUNC(sub_83075EC0);
PPC_FUNC_IMPL(__imp__sub_83075EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24512);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,6912
	ctx.r11.s64 = ctx.r11.s64 + 6912;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075EE8"))) PPC_WEAK_FUNC(sub_83075EE8);
PPC_FUNC_IMPL(__imp__sub_83075EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7120
	ctx.r11.s64 = ctx.r11.s64 + 7120;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075F10"))) PPC_WEAK_FUNC(sub_83075F10);
PPC_FUNC_IMPL(__imp__sub_83075F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24520);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7024
	ctx.r11.s64 = ctx.r11.s64 + 7024;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075F38"))) PPC_WEAK_FUNC(sub_83075F38);
PPC_FUNC_IMPL(__imp__sub_83075F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24524);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7056
	ctx.r11.s64 = ctx.r11.s64 + 7056;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075F60"))) PPC_WEAK_FUNC(sub_83075F60);
PPC_FUNC_IMPL(__imp__sub_83075F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,6960
	ctx.r11.s64 = ctx.r11.s64 + 6960;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075F88"))) PPC_WEAK_FUNC(sub_83075F88);
PPC_FUNC_IMPL(__imp__sub_83075F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7312
	ctx.r11.s64 = ctx.r11.s64 + 7312;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075FB0"))) PPC_WEAK_FUNC(sub_83075FB0);
PPC_FUNC_IMPL(__imp__sub_83075FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24532);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7280
	ctx.r11.s64 = ctx.r11.s64 + 7280;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83075FD8"))) PPC_WEAK_FUNC(sub_83075FD8);
PPC_FUNC_IMPL(__imp__sub_83075FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24536(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24536);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,6880
	ctx.r11.s64 = ctx.r11.s64 + 6880;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076000"))) PPC_WEAK_FUNC(sub_83076000);
PPC_FUNC_IMPL(__imp__sub_83076000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24540);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,6896
	ctx.r11.s64 = ctx.r11.s64 + 6896;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076028"))) PPC_WEAK_FUNC(sub_83076028);
PPC_FUNC_IMPL(__imp__sub_83076028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7152
	ctx.r11.s64 = ctx.r11.s64 + 7152;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076050"))) PPC_WEAK_FUNC(sub_83076050);
PPC_FUNC_IMPL(__imp__sub_83076050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7088
	ctx.r11.s64 = ctx.r11.s64 + 7088;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076078"))) PPC_WEAK_FUNC(sub_83076078);
PPC_FUNC_IMPL(__imp__sub_83076078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,7184
	ctx.r11.s64 = ctx.r11.s64 + 7184;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830760A0"))) PPC_WEAK_FUNC(sub_830760A0);
PPC_FUNC_IMPL(__imp__sub_830760A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,8064
	ctx.r11.s64 = ctx.r11.s64 + 8064;
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

__attribute__((alias("__imp__sub_830760D0"))) PPC_WEAK_FUNC(sub_830760D0);
PPC_FUNC_IMPL(__imp__sub_830760D0) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,8096
	ctx.r11.s64 = ctx.r11.s64 + 8096;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076100"))) PPC_WEAK_FUNC(sub_83076100);
PPC_FUNC_IMPL(__imp__sub_83076100) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,8112
	ctx.r11.s64 = ctx.r11.s64 + 8112;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076148"))) PPC_WEAK_FUNC(sub_83076148);
PPC_FUNC_IMPL(__imp__sub_83076148) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,8080
	ctx.r11.s64 = ctx.r11.s64 + 8080;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076190"))) PPC_WEAK_FUNC(sub_83076190);
PPC_FUNC_IMPL(__imp__sub_83076190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,20484
	ctx.r4.s64 = ctx.r11.s64 + 20484;
	// bl 0x824215d0
	ctx.lr = 0x830761AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7511(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7511, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830761C8"))) PPC_WEAK_FUNC(sub_830761C8);
PPC_FUNC_IMPL(__imp__sub_830761C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,20488
	ctx.r4.s64 = ctx.r11.s64 + 20488;
	// bl 0x824215d0
	ctx.lr = 0x830761E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7509(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7509, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076200"))) PPC_WEAK_FUNC(sub_83076200);
PPC_FUNC_IMPL(__imp__sub_83076200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,20492
	ctx.r4.s64 = ctx.r11.s64 + 20492;
	// bl 0x824215d0
	ctx.lr = 0x8307621C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,8061(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8061, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076238"))) PPC_WEAK_FUNC(sub_83076238);
PPC_FUNC_IMPL(__imp__sub_83076238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,20496
	ctx.r4.s64 = ctx.r11.s64 + 20496;
	// bl 0x824215d0
	ctx.lr = 0x83076254;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7508, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076270"))) PPC_WEAK_FUNC(sub_83076270);
PPC_FUNC_IMPL(__imp__sub_83076270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,20500
	ctx.r4.s64 = ctx.r11.s64 + 20500;
	// bl 0x824215d0
	ctx.lr = 0x8307628C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,8060(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8060, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830762A8"))) PPC_WEAK_FUNC(sub_830762A8);
PPC_FUNC_IMPL(__imp__sub_830762A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,20504
	ctx.r4.s64 = ctx.r11.s64 + 20504;
	// bl 0x824215d0
	ctx.lr = 0x830762C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,7510(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7510, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830762E0"))) PPC_WEAK_FUNC(sub_830762E0);
PPC_FUNC_IMPL(__imp__sub_830762E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,7512
	ctx.r3.s64 = ctx.r11.s64 + 7512;
	// b 0x82850fc0
	sub_82850FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830762F0"))) PPC_WEAK_FUNC(sub_830762F0);
PPC_FUNC_IMPL(__imp__sub_830762F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,9968
	ctx.r11.s64 = ctx.r11.s64 + 9968;
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

__attribute__((alias("__imp__sub_83076320"))) PPC_WEAK_FUNC(sub_83076320);
PPC_FUNC_IMPL(__imp__sub_83076320) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,10048
	ctx.r11.s64 = ctx.r11.s64 + 10048;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

