#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83038E80"))) PPC_WEAK_FUNC(sub_83038E80);
PPC_FUNC_IMPL(__imp__sub_83038E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29888
	ctx.r4.s64 = ctx.r11.s64 + 29888;
	// bl 0x824215d0
	ctx.lr = 0x83038E9C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83038EB8"))) PPC_WEAK_FUNC(sub_83038EB8);
PPC_FUNC_IMPL(__imp__sub_83038EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29892
	ctx.r4.s64 = ctx.r11.s64 + 29892;
	// bl 0x824215d0
	ctx.lr = 0x83038ED4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-814(r11)
	PPC_STORE_U8(ctx.r11.u32 + -814, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038EF0"))) PPC_WEAK_FUNC(sub_83038EF0);
PPC_FUNC_IMPL(__imp__sub_83038EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29896
	ctx.r4.s64 = ctx.r11.s64 + 29896;
	// bl 0x824215d0
	ctx.lr = 0x83038F0C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-366(r11)
	PPC_STORE_U8(ctx.r11.u32 + -366, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038F28"))) PPC_WEAK_FUNC(sub_83038F28);
PPC_FUNC_IMPL(__imp__sub_83038F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29900
	ctx.r4.s64 = ctx.r11.s64 + 29900;
	// bl 0x824215d0
	ctx.lr = 0x83038F44;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,355(r11)
	PPC_STORE_U8(ctx.r11.u32 + 355, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038F60"))) PPC_WEAK_FUNC(sub_83038F60);
PPC_FUNC_IMPL(__imp__sub_83038F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29904
	ctx.r4.s64 = ctx.r11.s64 + 29904;
	// bl 0x824215d0
	ctx.lr = 0x83038F7C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83038F98"))) PPC_WEAK_FUNC(sub_83038F98);
PPC_FUNC_IMPL(__imp__sub_83038F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29908
	ctx.r4.s64 = ctx.r11.s64 + 29908;
	// bl 0x824215d0
	ctx.lr = 0x83038FB4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,621(r11)
	PPC_STORE_U8(ctx.r11.u32 + 621, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038FD0"))) PPC_WEAK_FUNC(sub_83038FD0);
PPC_FUNC_IMPL(__imp__sub_83038FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29912
	ctx.r4.s64 = ctx.r11.s64 + 29912;
	// bl 0x824215d0
	ctx.lr = 0x83038FEC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1360(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1360, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039008"))) PPC_WEAK_FUNC(sub_83039008);
PPC_FUNC_IMPL(__imp__sub_83039008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29916
	ctx.r4.s64 = ctx.r11.s64 + 29916;
	// bl 0x824215d0
	ctx.lr = 0x83039024;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1622(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1622, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039040"))) PPC_WEAK_FUNC(sub_83039040);
PPC_FUNC_IMPL(__imp__sub_83039040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29920
	ctx.r4.s64 = ctx.r11.s64 + 29920;
	// bl 0x824215d0
	ctx.lr = 0x8303905C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2056(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2056, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039078"))) PPC_WEAK_FUNC(sub_83039078);
PPC_FUNC_IMPL(__imp__sub_83039078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29924
	ctx.r4.s64 = ctx.r11.s64 + 29924;
	// bl 0x824215d0
	ctx.lr = 0x83039094;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830390B0"))) PPC_WEAK_FUNC(sub_830390B0);
PPC_FUNC_IMPL(__imp__sub_830390B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29928
	ctx.r4.s64 = ctx.r11.s64 + 29928;
	// bl 0x824215d0
	ctx.lr = 0x830390CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2798(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2798, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830390E8"))) PPC_WEAK_FUNC(sub_830390E8);
PPC_FUNC_IMPL(__imp__sub_830390E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29932
	ctx.r4.s64 = ctx.r11.s64 + 29932;
	// bl 0x824215d0
	ctx.lr = 0x83039104;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-813(r11)
	PPC_STORE_U8(ctx.r11.u32 + -813, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039120"))) PPC_WEAK_FUNC(sub_83039120);
PPC_FUNC_IMPL(__imp__sub_83039120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29936
	ctx.r4.s64 = ctx.r11.s64 + 29936;
	// bl 0x824215d0
	ctx.lr = 0x8303913C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83039158"))) PPC_WEAK_FUNC(sub_83039158);
PPC_FUNC_IMPL(__imp__sub_83039158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29940
	ctx.r4.s64 = ctx.r11.s64 + 29940;
	// bl 0x824215d0
	ctx.lr = 0x83039174;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2092(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2092, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039190"))) PPC_WEAK_FUNC(sub_83039190);
PPC_FUNC_IMPL(__imp__sub_83039190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29944
	ctx.r4.s64 = ctx.r11.s64 + 29944;
	// bl 0x824215d0
	ctx.lr = 0x830391AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830391C8"))) PPC_WEAK_FUNC(sub_830391C8);
PPC_FUNC_IMPL(__imp__sub_830391C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29948
	ctx.r4.s64 = ctx.r11.s64 + 29948;
	// bl 0x824215d0
	ctx.lr = 0x830391E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3054(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3054, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039200"))) PPC_WEAK_FUNC(sub_83039200);
PPC_FUNC_IMPL(__imp__sub_83039200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29952
	ctx.r4.s64 = ctx.r11.s64 + 29952;
	// bl 0x824215d0
	ctx.lr = 0x8303921C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83039238"))) PPC_WEAK_FUNC(sub_83039238);
PPC_FUNC_IMPL(__imp__sub_83039238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29956
	ctx.r4.s64 = ctx.r11.s64 + 29956;
	// bl 0x824215d0
	ctx.lr = 0x83039254;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1888(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1888, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039270"))) PPC_WEAK_FUNC(sub_83039270);
PPC_FUNC_IMPL(__imp__sub_83039270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29960
	ctx.r4.s64 = ctx.r11.s64 + 29960;
	// bl 0x824215d0
	ctx.lr = 0x8303928C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3121(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3121, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830392A8"))) PPC_WEAK_FUNC(sub_830392A8);
PPC_FUNC_IMPL(__imp__sub_830392A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29964
	ctx.r4.s64 = ctx.r11.s64 + 29964;
	// bl 0x824215d0
	ctx.lr = 0x830392C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2298(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2298, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830392E0"))) PPC_WEAK_FUNC(sub_830392E0);
PPC_FUNC_IMPL(__imp__sub_830392E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29968
	ctx.r4.s64 = ctx.r11.s64 + 29968;
	// bl 0x824215d0
	ctx.lr = 0x830392FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3225(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3225, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039318"))) PPC_WEAK_FUNC(sub_83039318);
PPC_FUNC_IMPL(__imp__sub_83039318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29972
	ctx.r4.s64 = ctx.r11.s64 + 29972;
	// bl 0x824215d0
	ctx.lr = 0x83039334;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2093(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2093, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039350"))) PPC_WEAK_FUNC(sub_83039350);
PPC_FUNC_IMPL(__imp__sub_83039350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29976
	ctx.r4.s64 = ctx.r11.s64 + 29976;
	// bl 0x824215d0
	ctx.lr = 0x8303936C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83039388"))) PPC_WEAK_FUNC(sub_83039388);
PPC_FUNC_IMPL(__imp__sub_83039388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29980
	ctx.r4.s64 = ctx.r11.s64 + 29980;
	// bl 0x824215d0
	ctx.lr = 0x830393A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,979(r11)
	PPC_STORE_U8(ctx.r11.u32 + 979, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830393C0"))) PPC_WEAK_FUNC(sub_830393C0);
PPC_FUNC_IMPL(__imp__sub_830393C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29984
	ctx.r4.s64 = ctx.r11.s64 + 29984;
	// bl 0x824215d0
	ctx.lr = 0x830393DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2284(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2284, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830393F8"))) PPC_WEAK_FUNC(sub_830393F8);
PPC_FUNC_IMPL(__imp__sub_830393F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29988
	ctx.r4.s64 = ctx.r11.s64 + 29988;
	// bl 0x824215d0
	ctx.lr = 0x83039414;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83039430"))) PPC_WEAK_FUNC(sub_83039430);
PPC_FUNC_IMPL(__imp__sub_83039430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29992
	ctx.r4.s64 = ctx.r11.s64 + 29992;
	// bl 0x824215d0
	ctx.lr = 0x8303944C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2037(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2037, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039468"))) PPC_WEAK_FUNC(sub_83039468);
PPC_FUNC_IMPL(__imp__sub_83039468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29996
	ctx.r4.s64 = ctx.r11.s64 + 29996;
	// bl 0x824215d0
	ctx.lr = 0x83039484;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1533(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1533, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830394A0"))) PPC_WEAK_FUNC(sub_830394A0);
PPC_FUNC_IMPL(__imp__sub_830394A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30000
	ctx.r4.s64 = ctx.r11.s64 + 30000;
	// bl 0x824215d0
	ctx.lr = 0x830394BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1538(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1538, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830394D8"))) PPC_WEAK_FUNC(sub_830394D8);
PPC_FUNC_IMPL(__imp__sub_830394D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30004
	ctx.r4.s64 = ctx.r11.s64 + 30004;
	// bl 0x824215d0
	ctx.lr = 0x830394F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,290(r11)
	PPC_STORE_U8(ctx.r11.u32 + 290, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039510"))) PPC_WEAK_FUNC(sub_83039510);
PPC_FUNC_IMPL(__imp__sub_83039510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30008
	ctx.r4.s64 = ctx.r11.s64 + 30008;
	// bl 0x824215d0
	ctx.lr = 0x8303952C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2714(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2714, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039548"))) PPC_WEAK_FUNC(sub_83039548);
PPC_FUNC_IMPL(__imp__sub_83039548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30012
	ctx.r4.s64 = ctx.r11.s64 + 30012;
	// bl 0x824215d0
	ctx.lr = 0x83039564;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3031(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3031, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039580"))) PPC_WEAK_FUNC(sub_83039580);
PPC_FUNC_IMPL(__imp__sub_83039580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30016
	ctx.r4.s64 = ctx.r11.s64 + 30016;
	// bl 0x824215d0
	ctx.lr = 0x8303959C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2500(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2500, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830395B8"))) PPC_WEAK_FUNC(sub_830395B8);
PPC_FUNC_IMPL(__imp__sub_830395B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30020
	ctx.r4.s64 = ctx.r11.s64 + 30020;
	// bl 0x824215d0
	ctx.lr = 0x830395D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-501(r11)
	PPC_STORE_U8(ctx.r11.u32 + -501, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830395F0"))) PPC_WEAK_FUNC(sub_830395F0);
PPC_FUNC_IMPL(__imp__sub_830395F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30024
	ctx.r4.s64 = ctx.r11.s64 + 30024;
	// bl 0x824215d0
	ctx.lr = 0x8303960C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2578(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2578, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039628"))) PPC_WEAK_FUNC(sub_83039628);
PPC_FUNC_IMPL(__imp__sub_83039628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30028
	ctx.r4.s64 = ctx.r11.s64 + 30028;
	// bl 0x824215d0
	ctx.lr = 0x83039644;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1534(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1534, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039660"))) PPC_WEAK_FUNC(sub_83039660);
PPC_FUNC_IMPL(__imp__sub_83039660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30032
	ctx.r4.s64 = ctx.r11.s64 + 30032;
	// bl 0x824215d0
	ctx.lr = 0x8303967C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1300(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1300, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039698"))) PPC_WEAK_FUNC(sub_83039698);
PPC_FUNC_IMPL(__imp__sub_83039698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30036
	ctx.r4.s64 = ctx.r11.s64 + 30036;
	// bl 0x824215d0
	ctx.lr = 0x830396B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2095(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2095, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830396D0"))) PPC_WEAK_FUNC(sub_830396D0);
PPC_FUNC_IMPL(__imp__sub_830396D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30040
	ctx.r4.s64 = ctx.r11.s64 + 30040;
	// bl 0x824215d0
	ctx.lr = 0x830396EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1502(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1502, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039708"))) PPC_WEAK_FUNC(sub_83039708);
PPC_FUNC_IMPL(__imp__sub_83039708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30044
	ctx.r4.s64 = ctx.r11.s64 + 30044;
	// bl 0x824215d0
	ctx.lr = 0x83039724;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1208(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1208, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039740"))) PPC_WEAK_FUNC(sub_83039740);
PPC_FUNC_IMPL(__imp__sub_83039740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30048
	ctx.r4.s64 = ctx.r11.s64 + 30048;
	// bl 0x824215d0
	ctx.lr = 0x8303975C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83039778"))) PPC_WEAK_FUNC(sub_83039778);
PPC_FUNC_IMPL(__imp__sub_83039778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30052
	ctx.r4.s64 = ctx.r11.s64 + 30052;
	// bl 0x824215d0
	ctx.lr = 0x83039794;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-866(r11)
	PPC_STORE_U8(ctx.r11.u32 + -866, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830397B0"))) PPC_WEAK_FUNC(sub_830397B0);
PPC_FUNC_IMPL(__imp__sub_830397B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30056
	ctx.r4.s64 = ctx.r11.s64 + 30056;
	// bl 0x824215d0
	ctx.lr = 0x830397CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3103(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3103, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830397E8"))) PPC_WEAK_FUNC(sub_830397E8);
PPC_FUNC_IMPL(__imp__sub_830397E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30060
	ctx.r4.s64 = ctx.r11.s64 + 30060;
	// bl 0x824215d0
	ctx.lr = 0x83039804;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1296(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1296, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039820"))) PPC_WEAK_FUNC(sub_83039820);
PPC_FUNC_IMPL(__imp__sub_83039820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30064
	ctx.r4.s64 = ctx.r11.s64 + 30064;
	// bl 0x824215d0
	ctx.lr = 0x8303983C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,846(r11)
	PPC_STORE_U8(ctx.r11.u32 + 846, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039858"))) PPC_WEAK_FUNC(sub_83039858);
PPC_FUNC_IMPL(__imp__sub_83039858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30068
	ctx.r4.s64 = ctx.r11.s64 + 30068;
	// bl 0x824215d0
	ctx.lr = 0x83039874;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1943(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1943, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039890"))) PPC_WEAK_FUNC(sub_83039890);
PPC_FUNC_IMPL(__imp__sub_83039890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30072
	ctx.r4.s64 = ctx.r11.s64 + 30072;
	// bl 0x824215d0
	ctx.lr = 0x830398AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830398C8"))) PPC_WEAK_FUNC(sub_830398C8);
PPC_FUNC_IMPL(__imp__sub_830398C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30076
	ctx.r4.s64 = ctx.r11.s64 + 30076;
	// bl 0x824215d0
	ctx.lr = 0x830398E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-103(r11)
	PPC_STORE_U8(ctx.r11.u32 + -103, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039900"))) PPC_WEAK_FUNC(sub_83039900);
PPC_FUNC_IMPL(__imp__sub_83039900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30080
	ctx.r4.s64 = ctx.r11.s64 + 30080;
	// bl 0x824215d0
	ctx.lr = 0x8303991C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,700(r11)
	PPC_STORE_U8(ctx.r11.u32 + 700, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039938"))) PPC_WEAK_FUNC(sub_83039938);
PPC_FUNC_IMPL(__imp__sub_83039938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30084
	ctx.r4.s64 = ctx.r11.s64 + 30084;
	// bl 0x824215d0
	ctx.lr = 0x83039954;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1284(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1284, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039970"))) PPC_WEAK_FUNC(sub_83039970);
PPC_FUNC_IMPL(__imp__sub_83039970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30088
	ctx.r4.s64 = ctx.r11.s64 + 30088;
	// bl 0x824215d0
	ctx.lr = 0x8303998C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,289(r11)
	PPC_STORE_U8(ctx.r11.u32 + 289, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830399A8"))) PPC_WEAK_FUNC(sub_830399A8);
PPC_FUNC_IMPL(__imp__sub_830399A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30092
	ctx.r4.s64 = ctx.r11.s64 + 30092;
	// bl 0x824215d0
	ctx.lr = 0x830399C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1788(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1788, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830399E0"))) PPC_WEAK_FUNC(sub_830399E0);
PPC_FUNC_IMPL(__imp__sub_830399E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30096
	ctx.r4.s64 = ctx.r11.s64 + 30096;
	// bl 0x824215d0
	ctx.lr = 0x830399FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2715(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2715, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039A18"))) PPC_WEAK_FUNC(sub_83039A18);
PPC_FUNC_IMPL(__imp__sub_83039A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30100
	ctx.r4.s64 = ctx.r11.s64 + 30100;
	// bl 0x824215d0
	ctx.lr = 0x83039A34;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1447(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1447, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039A50"))) PPC_WEAK_FUNC(sub_83039A50);
PPC_FUNC_IMPL(__imp__sub_83039A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30104
	ctx.r4.s64 = ctx.r11.s64 + 30104;
	// bl 0x824215d0
	ctx.lr = 0x83039A6C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83039A88"))) PPC_WEAK_FUNC(sub_83039A88);
PPC_FUNC_IMPL(__imp__sub_83039A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30108
	ctx.r4.s64 = ctx.r11.s64 + 30108;
	// bl 0x824215d0
	ctx.lr = 0x83039AA4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1357(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1357, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039AC0"))) PPC_WEAK_FUNC(sub_83039AC0);
PPC_FUNC_IMPL(__imp__sub_83039AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30112
	ctx.r4.s64 = ctx.r11.s64 + 30112;
	// bl 0x824215d0
	ctx.lr = 0x83039ADC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2778(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2778, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039AF8"))) PPC_WEAK_FUNC(sub_83039AF8);
PPC_FUNC_IMPL(__imp__sub_83039AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30116
	ctx.r4.s64 = ctx.r11.s64 + 30116;
	// bl 0x824215d0
	ctx.lr = 0x83039B14;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-377(r11)
	PPC_STORE_U8(ctx.r11.u32 + -377, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039B30"))) PPC_WEAK_FUNC(sub_83039B30);
PPC_FUNC_IMPL(__imp__sub_83039B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30120
	ctx.r4.s64 = ctx.r11.s64 + 30120;
	// bl 0x824215d0
	ctx.lr = 0x83039B4C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1129(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1129, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039B68"))) PPC_WEAK_FUNC(sub_83039B68);
PPC_FUNC_IMPL(__imp__sub_83039B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30124
	ctx.r4.s64 = ctx.r11.s64 + 30124;
	// bl 0x824215d0
	ctx.lr = 0x83039B84;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1338(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1338, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039BA0"))) PPC_WEAK_FUNC(sub_83039BA0);
PPC_FUNC_IMPL(__imp__sub_83039BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30128
	ctx.r4.s64 = ctx.r11.s64 + 30128;
	// bl 0x824215d0
	ctx.lr = 0x83039BBC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,291(r11)
	PPC_STORE_U8(ctx.r11.u32 + 291, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039BD8"))) PPC_WEAK_FUNC(sub_83039BD8);
PPC_FUNC_IMPL(__imp__sub_83039BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30132
	ctx.r4.s64 = ctx.r11.s64 + 30132;
	// bl 0x824215d0
	ctx.lr = 0x83039BF4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1419(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1419, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039C10"))) PPC_WEAK_FUNC(sub_83039C10);
PPC_FUNC_IMPL(__imp__sub_83039C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30136
	ctx.r4.s64 = ctx.r11.s64 + 30136;
	// bl 0x824215d0
	ctx.lr = 0x83039C2C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-269(r11)
	PPC_STORE_U8(ctx.r11.u32 + -269, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039C48"))) PPC_WEAK_FUNC(sub_83039C48);
PPC_FUNC_IMPL(__imp__sub_83039C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30140
	ctx.r4.s64 = ctx.r11.s64 + 30140;
	// bl 0x824215d0
	ctx.lr = 0x83039C64;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83039C80"))) PPC_WEAK_FUNC(sub_83039C80);
PPC_FUNC_IMPL(__imp__sub_83039C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30144
	ctx.r4.s64 = ctx.r11.s64 + 30144;
	// bl 0x824215d0
	ctx.lr = 0x83039C9C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1954(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1954, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039CB8"))) PPC_WEAK_FUNC(sub_83039CB8);
PPC_FUNC_IMPL(__imp__sub_83039CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30148
	ctx.r4.s64 = ctx.r11.s64 + 30148;
	// bl 0x824215d0
	ctx.lr = 0x83039CD4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-596(r11)
	PPC_STORE_U8(ctx.r11.u32 + -596, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039CF0"))) PPC_WEAK_FUNC(sub_83039CF0);
PPC_FUNC_IMPL(__imp__sub_83039CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30152
	ctx.r4.s64 = ctx.r11.s64 + 30152;
	// bl 0x824215d0
	ctx.lr = 0x83039D0C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039D28"))) PPC_WEAK_FUNC(sub_83039D28);
PPC_FUNC_IMPL(__imp__sub_83039D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30156
	ctx.r4.s64 = ctx.r11.s64 + 30156;
	// bl 0x824215d0
	ctx.lr = 0x83039D44;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3104, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039D60"))) PPC_WEAK_FUNC(sub_83039D60);
PPC_FUNC_IMPL(__imp__sub_83039D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30160
	ctx.r4.s64 = ctx.r11.s64 + 30160;
	// bl 0x824215d0
	ctx.lr = 0x83039D7C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83039D98"))) PPC_WEAK_FUNC(sub_83039D98);
PPC_FUNC_IMPL(__imp__sub_83039D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30164
	ctx.r4.s64 = ctx.r11.s64 + 30164;
	// bl 0x824215d0
	ctx.lr = 0x83039DB4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,845(r11)
	PPC_STORE_U8(ctx.r11.u32 + 845, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039DD0"))) PPC_WEAK_FUNC(sub_83039DD0);
PPC_FUNC_IMPL(__imp__sub_83039DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30168
	ctx.r4.s64 = ctx.r11.s64 + 30168;
	// bl 0x824215d0
	ctx.lr = 0x83039DEC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1890(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1890, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039E08"))) PPC_WEAK_FUNC(sub_83039E08);
PPC_FUNC_IMPL(__imp__sub_83039E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30172
	ctx.r4.s64 = ctx.r11.s64 + 30172;
	// bl 0x824215d0
	ctx.lr = 0x83039E24;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1523(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1523, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039E40"))) PPC_WEAK_FUNC(sub_83039E40);
PPC_FUNC_IMPL(__imp__sub_83039E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30176
	ctx.r4.s64 = ctx.r11.s64 + 30176;
	// bl 0x824215d0
	ctx.lr = 0x83039E5C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-394(r11)
	PPC_STORE_U8(ctx.r11.u32 + -394, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039E78"))) PPC_WEAK_FUNC(sub_83039E78);
PPC_FUNC_IMPL(__imp__sub_83039E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30180
	ctx.r4.s64 = ctx.r11.s64 + 30180;
	// bl 0x824215d0
	ctx.lr = 0x83039E94;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2438(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2438, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039EB0"))) PPC_WEAK_FUNC(sub_83039EB0);
PPC_FUNC_IMPL(__imp__sub_83039EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30184
	ctx.r4.s64 = ctx.r11.s64 + 30184;
	// bl 0x824215d0
	ctx.lr = 0x83039ECC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2646(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2646, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039EE8"))) PPC_WEAK_FUNC(sub_83039EE8);
PPC_FUNC_IMPL(__imp__sub_83039EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30188
	ctx.r4.s64 = ctx.r11.s64 + 30188;
	// bl 0x824215d0
	ctx.lr = 0x83039F04;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83039F20"))) PPC_WEAK_FUNC(sub_83039F20);
PPC_FUNC_IMPL(__imp__sub_83039F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30192
	ctx.r4.s64 = ctx.r11.s64 + 30192;
	// bl 0x824215d0
	ctx.lr = 0x83039F3C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83039F58"))) PPC_WEAK_FUNC(sub_83039F58);
PPC_FUNC_IMPL(__imp__sub_83039F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30196
	ctx.r4.s64 = ctx.r11.s64 + 30196;
	// bl 0x824215d0
	ctx.lr = 0x83039F74;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,461(r11)
	PPC_STORE_U8(ctx.r11.u32 + 461, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039F90"))) PPC_WEAK_FUNC(sub_83039F90);
PPC_FUNC_IMPL(__imp__sub_83039F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30200
	ctx.r4.s64 = ctx.r11.s64 + 30200;
	// bl 0x824215d0
	ctx.lr = 0x83039FAC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,217(r11)
	PPC_STORE_U8(ctx.r11.u32 + 217, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039FC8"))) PPC_WEAK_FUNC(sub_83039FC8);
PPC_FUNC_IMPL(__imp__sub_83039FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30204
	ctx.r4.s64 = ctx.r11.s64 + 30204;
	// bl 0x824215d0
	ctx.lr = 0x83039FE4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,494(r11)
	PPC_STORE_U8(ctx.r11.u32 + 494, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A000"))) PPC_WEAK_FUNC(sub_8303A000);
PPC_FUNC_IMPL(__imp__sub_8303A000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30208
	ctx.r4.s64 = ctx.r11.s64 + 30208;
	// bl 0x824215d0
	ctx.lr = 0x8303A01C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1634(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1634, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A038"))) PPC_WEAK_FUNC(sub_8303A038);
PPC_FUNC_IMPL(__imp__sub_8303A038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30212
	ctx.r4.s64 = ctx.r11.s64 + 30212;
	// bl 0x824215d0
	ctx.lr = 0x8303A054;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303A070"))) PPC_WEAK_FUNC(sub_8303A070);
PPC_FUNC_IMPL(__imp__sub_8303A070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30216
	ctx.r4.s64 = ctx.r11.s64 + 30216;
	// bl 0x824215d0
	ctx.lr = 0x8303A08C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2593(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2593, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A0A8"))) PPC_WEAK_FUNC(sub_8303A0A8);
PPC_FUNC_IMPL(__imp__sub_8303A0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30220
	ctx.r4.s64 = ctx.r11.s64 + 30220;
	// bl 0x824215d0
	ctx.lr = 0x8303A0C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-266(r11)
	PPC_STORE_U8(ctx.r11.u32 + -266, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A0E0"))) PPC_WEAK_FUNC(sub_8303A0E0);
PPC_FUNC_IMPL(__imp__sub_8303A0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30224
	ctx.r4.s64 = ctx.r11.s64 + 30224;
	// bl 0x824215d0
	ctx.lr = 0x8303A0FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2175(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2175, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A118"))) PPC_WEAK_FUNC(sub_8303A118);
PPC_FUNC_IMPL(__imp__sub_8303A118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30228
	ctx.r4.s64 = ctx.r11.s64 + 30228;
	// bl 0x824215d0
	ctx.lr = 0x8303A134;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3246, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A150"))) PPC_WEAK_FUNC(sub_8303A150);
PPC_FUNC_IMPL(__imp__sub_8303A150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30232
	ctx.r4.s64 = ctx.r11.s64 + 30232;
	// bl 0x824215d0
	ctx.lr = 0x8303A16C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1249(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1249, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A188"))) PPC_WEAK_FUNC(sub_8303A188);
PPC_FUNC_IMPL(__imp__sub_8303A188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30236
	ctx.r4.s64 = ctx.r11.s64 + 30236;
	// bl 0x824215d0
	ctx.lr = 0x8303A1A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303A1C0"))) PPC_WEAK_FUNC(sub_8303A1C0);
PPC_FUNC_IMPL(__imp__sub_8303A1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30240
	ctx.r4.s64 = ctx.r11.s64 + 30240;
	// bl 0x824215d0
	ctx.lr = 0x8303A1DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1773(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1773, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A1F8"))) PPC_WEAK_FUNC(sub_8303A1F8);
PPC_FUNC_IMPL(__imp__sub_8303A1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30244
	ctx.r4.s64 = ctx.r11.s64 + 30244;
	// bl 0x824215d0
	ctx.lr = 0x8303A214;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-527(r11)
	PPC_STORE_U8(ctx.r11.u32 + -527, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A230"))) PPC_WEAK_FUNC(sub_8303A230);
PPC_FUNC_IMPL(__imp__sub_8303A230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30248
	ctx.r4.s64 = ctx.r11.s64 + 30248;
	// bl 0x824215d0
	ctx.lr = 0x8303A24C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1610(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1610, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A268"))) PPC_WEAK_FUNC(sub_8303A268);
PPC_FUNC_IMPL(__imp__sub_8303A268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30252
	ctx.r4.s64 = ctx.r11.s64 + 30252;
	// bl 0x824215d0
	ctx.lr = 0x8303A284;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1165(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1165, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A2A0"))) PPC_WEAK_FUNC(sub_8303A2A0);
PPC_FUNC_IMPL(__imp__sub_8303A2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30256
	ctx.r4.s64 = ctx.r11.s64 + 30256;
	// bl 0x824215d0
	ctx.lr = 0x8303A2BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2446(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2446, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A2D8"))) PPC_WEAK_FUNC(sub_8303A2D8);
PPC_FUNC_IMPL(__imp__sub_8303A2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30260
	ctx.r4.s64 = ctx.r11.s64 + 30260;
	// bl 0x824215d0
	ctx.lr = 0x8303A2F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-102(r11)
	PPC_STORE_U8(ctx.r11.u32 + -102, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A310"))) PPC_WEAK_FUNC(sub_8303A310);
PPC_FUNC_IMPL(__imp__sub_8303A310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30264
	ctx.r4.s64 = ctx.r11.s64 + 30264;
	// bl 0x824215d0
	ctx.lr = 0x8303A32C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,462(r11)
	PPC_STORE_U8(ctx.r11.u32 + 462, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A348"))) PPC_WEAK_FUNC(sub_8303A348);
PPC_FUNC_IMPL(__imp__sub_8303A348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30268
	ctx.r4.s64 = ctx.r11.s64 + 30268;
	// bl 0x824215d0
	ctx.lr = 0x8303A364;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-233(r11)
	PPC_STORE_U8(ctx.r11.u32 + -233, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A380"))) PPC_WEAK_FUNC(sub_8303A380);
PPC_FUNC_IMPL(__imp__sub_8303A380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30272
	ctx.r4.s64 = ctx.r11.s64 + 30272;
	// bl 0x824215d0
	ctx.lr = 0x8303A39C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303A3B8"))) PPC_WEAK_FUNC(sub_8303A3B8);
PPC_FUNC_IMPL(__imp__sub_8303A3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30276
	ctx.r4.s64 = ctx.r11.s64 + 30276;
	// bl 0x824215d0
	ctx.lr = 0x8303A3D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-195(r11)
	PPC_STORE_U8(ctx.r11.u32 + -195, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A3F0"))) PPC_WEAK_FUNC(sub_8303A3F0);
PPC_FUNC_IMPL(__imp__sub_8303A3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30280
	ctx.r4.s64 = ctx.r11.s64 + 30280;
	// bl 0x824215d0
	ctx.lr = 0x8303A40C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1209(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1209, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A428"))) PPC_WEAK_FUNC(sub_8303A428);
PPC_FUNC_IMPL(__imp__sub_8303A428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30284
	ctx.r4.s64 = ctx.r11.s64 + 30284;
	// bl 0x824215d0
	ctx.lr = 0x8303A444;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303A460"))) PPC_WEAK_FUNC(sub_8303A460);
PPC_FUNC_IMPL(__imp__sub_8303A460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30288
	ctx.r4.s64 = ctx.r11.s64 + 30288;
	// bl 0x824215d0
	ctx.lr = 0x8303A47C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2712(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2712, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A498"))) PPC_WEAK_FUNC(sub_8303A498);
PPC_FUNC_IMPL(__imp__sub_8303A498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30292
	ctx.r4.s64 = ctx.r11.s64 + 30292;
	// bl 0x824215d0
	ctx.lr = 0x8303A4B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303A4D0"))) PPC_WEAK_FUNC(sub_8303A4D0);
PPC_FUNC_IMPL(__imp__sub_8303A4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30296
	ctx.r4.s64 = ctx.r11.s64 + 30296;
	// bl 0x824215d0
	ctx.lr = 0x8303A4EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303A508"))) PPC_WEAK_FUNC(sub_8303A508);
PPC_FUNC_IMPL(__imp__sub_8303A508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30300
	ctx.r4.s64 = ctx.r11.s64 + 30300;
	// bl 0x824215d0
	ctx.lr = 0x8303A524;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-365(r11)
	PPC_STORE_U8(ctx.r11.u32 + -365, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A540"))) PPC_WEAK_FUNC(sub_8303A540);
PPC_FUNC_IMPL(__imp__sub_8303A540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30304
	ctx.r4.s64 = ctx.r11.s64 + 30304;
	// bl 0x824215d0
	ctx.lr = 0x8303A55C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303A578"))) PPC_WEAK_FUNC(sub_8303A578);
PPC_FUNC_IMPL(__imp__sub_8303A578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30308
	ctx.r4.s64 = ctx.r11.s64 + 30308;
	// bl 0x824215d0
	ctx.lr = 0x8303A594;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-340(r11)
	PPC_STORE_U8(ctx.r11.u32 + -340, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A5B0"))) PPC_WEAK_FUNC(sub_8303A5B0);
PPC_FUNC_IMPL(__imp__sub_8303A5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30312
	ctx.r4.s64 = ctx.r11.s64 + 30312;
	// bl 0x824215d0
	ctx.lr = 0x8303A5CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-525(r11)
	PPC_STORE_U8(ctx.r11.u32 + -525, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A5E8"))) PPC_WEAK_FUNC(sub_8303A5E8);
PPC_FUNC_IMPL(__imp__sub_8303A5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30316
	ctx.r4.s64 = ctx.r11.s64 + 30316;
	// bl 0x824215d0
	ctx.lr = 0x8303A604;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303A620"))) PPC_WEAK_FUNC(sub_8303A620);
PPC_FUNC_IMPL(__imp__sub_8303A620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30320
	ctx.r4.s64 = ctx.r11.s64 + 30320;
	// bl 0x824215d0
	ctx.lr = 0x8303A63C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3105(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3105, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A658"))) PPC_WEAK_FUNC(sub_8303A658);
PPC_FUNC_IMPL(__imp__sub_8303A658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30324
	ctx.r4.s64 = ctx.r11.s64 + 30324;
	// bl 0x824215d0
	ctx.lr = 0x8303A674;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3053(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3053, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A690"))) PPC_WEAK_FUNC(sub_8303A690);
PPC_FUNC_IMPL(__imp__sub_8303A690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30328
	ctx.r4.s64 = ctx.r11.s64 + 30328;
	// bl 0x824215d0
	ctx.lr = 0x8303A6AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1827(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1827, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A6C8"))) PPC_WEAK_FUNC(sub_8303A6C8);
PPC_FUNC_IMPL(__imp__sub_8303A6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30332
	ctx.r4.s64 = ctx.r11.s64 + 30332;
	// bl 0x824215d0
	ctx.lr = 0x8303A6E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-236(r11)
	PPC_STORE_U8(ctx.r11.u32 + -236, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A700"))) PPC_WEAK_FUNC(sub_8303A700);
PPC_FUNC_IMPL(__imp__sub_8303A700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30336
	ctx.r4.s64 = ctx.r11.s64 + 30336;
	// bl 0x824215d0
	ctx.lr = 0x8303A71C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2520(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2520, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A738"))) PPC_WEAK_FUNC(sub_8303A738);
PPC_FUNC_IMPL(__imp__sub_8303A738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30340
	ctx.r4.s64 = ctx.r11.s64 + 30340;
	// bl 0x824215d0
	ctx.lr = 0x8303A754;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1845(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1845, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A770"))) PPC_WEAK_FUNC(sub_8303A770);
PPC_FUNC_IMPL(__imp__sub_8303A770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30344
	ctx.r4.s64 = ctx.r11.s64 + 30344;
	// bl 0x824215d0
	ctx.lr = 0x8303A78C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1371(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1371, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A7A8"))) PPC_WEAK_FUNC(sub_8303A7A8);
PPC_FUNC_IMPL(__imp__sub_8303A7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30348
	ctx.r4.s64 = ctx.r11.s64 + 30348;
	// bl 0x824215d0
	ctx.lr = 0x8303A7C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-392(r11)
	PPC_STORE_U8(ctx.r11.u32 + -392, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A7E0"))) PPC_WEAK_FUNC(sub_8303A7E0);
PPC_FUNC_IMPL(__imp__sub_8303A7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30352
	ctx.r4.s64 = ctx.r11.s64 + 30352;
	// bl 0x824215d0
	ctx.lr = 0x8303A7FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1941(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1941, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A818"))) PPC_WEAK_FUNC(sub_8303A818);
PPC_FUNC_IMPL(__imp__sub_8303A818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,3112
	ctx.r3.s64 = 3112;
	// addi r4,r11,30356
	ctx.r4.s64 = ctx.r11.s64 + 30356;
	// bl 0x824215d0
	ctx.lr = 0x8303A834;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1512(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1512, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A850"))) PPC_WEAK_FUNC(sub_8303A850);
PPC_FUNC_IMPL(__imp__sub_8303A850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30360
	ctx.r4.s64 = ctx.r11.s64 + 30360;
	// bl 0x824215d0
	ctx.lr = 0x8303A86C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2287(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2287, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A888"))) PPC_WEAK_FUNC(sub_8303A888);
PPC_FUNC_IMPL(__imp__sub_8303A888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30364
	ctx.r4.s64 = ctx.r11.s64 + 30364;
	// bl 0x824215d0
	ctx.lr = 0x8303A8A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303A8C0"))) PPC_WEAK_FUNC(sub_8303A8C0);
PPC_FUNC_IMPL(__imp__sub_8303A8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30368
	ctx.r4.s64 = ctx.r11.s64 + 30368;
	// bl 0x824215d0
	ctx.lr = 0x8303A8DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303A8F8"))) PPC_WEAK_FUNC(sub_8303A8F8);
PPC_FUNC_IMPL(__imp__sub_8303A8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30372
	ctx.r4.s64 = ctx.r11.s64 + 30372;
	// bl 0x824215d0
	ctx.lr = 0x8303A914;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303A930"))) PPC_WEAK_FUNC(sub_8303A930);
PPC_FUNC_IMPL(__imp__sub_8303A930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30376
	ctx.r4.s64 = ctx.r11.s64 + 30376;
	// bl 0x824215d0
	ctx.lr = 0x8303A94C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,847(r11)
	PPC_STORE_U8(ctx.r11.u32 + 847, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A968"))) PPC_WEAK_FUNC(sub_8303A968);
PPC_FUNC_IMPL(__imp__sub_8303A968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30380
	ctx.r4.s64 = ctx.r11.s64 + 30380;
	// bl 0x824215d0
	ctx.lr = 0x8303A984;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1774(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1774, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A9A0"))) PPC_WEAK_FUNC(sub_8303A9A0);
PPC_FUNC_IMPL(__imp__sub_8303A9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30384
	ctx.r4.s64 = ctx.r11.s64 + 30384;
	// bl 0x824215d0
	ctx.lr = 0x8303A9BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-545(r11)
	PPC_STORE_U8(ctx.r11.u32 + -545, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A9D8"))) PPC_WEAK_FUNC(sub_8303A9D8);
PPC_FUNC_IMPL(__imp__sub_8303A9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30388
	ctx.r4.s64 = ctx.r11.s64 + 30388;
	// bl 0x824215d0
	ctx.lr = 0x8303A9F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1135(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1135, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AA10"))) PPC_WEAK_FUNC(sub_8303AA10);
PPC_FUNC_IMPL(__imp__sub_8303AA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30392
	ctx.r4.s64 = ctx.r11.s64 + 30392;
	// bl 0x824215d0
	ctx.lr = 0x8303AA2C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1960(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1960, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AA48"))) PPC_WEAK_FUNC(sub_8303AA48);
PPC_FUNC_IMPL(__imp__sub_8303AA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30396
	ctx.r4.s64 = ctx.r11.s64 + 30396;
	// bl 0x824215d0
	ctx.lr = 0x8303AA64;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2677(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2677, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AA80"))) PPC_WEAK_FUNC(sub_8303AA80);
PPC_FUNC_IMPL(__imp__sub_8303AA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30400
	ctx.r4.s64 = ctx.r11.s64 + 30400;
	// bl 0x824215d0
	ctx.lr = 0x8303AA9C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3101(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3101, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AAB8"))) PPC_WEAK_FUNC(sub_8303AAB8);
PPC_FUNC_IMPL(__imp__sub_8303AAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30404
	ctx.r4.s64 = ctx.r11.s64 + 30404;
	// bl 0x824215d0
	ctx.lr = 0x8303AAD4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303AAF0"))) PPC_WEAK_FUNC(sub_8303AAF0);
PPC_FUNC_IMPL(__imp__sub_8303AAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30408
	ctx.r4.s64 = ctx.r11.s64 + 30408;
	// bl 0x824215d0
	ctx.lr = 0x8303AB0C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3226(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3226, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AB28"))) PPC_WEAK_FUNC(sub_8303AB28);
PPC_FUNC_IMPL(__imp__sub_8303AB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30412
	ctx.r4.s64 = ctx.r11.s64 + 30412;
	// bl 0x824215d0
	ctx.lr = 0x8303AB44;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1797(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1797, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AB60"))) PPC_WEAK_FUNC(sub_8303AB60);
PPC_FUNC_IMPL(__imp__sub_8303AB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30416
	ctx.r4.s64 = ctx.r11.s64 + 30416;
	// bl 0x824215d0
	ctx.lr = 0x8303AB7C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1891(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1891, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AB98"))) PPC_WEAK_FUNC(sub_8303AB98);
PPC_FUNC_IMPL(__imp__sub_8303AB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30420
	ctx.r4.s64 = ctx.r11.s64 + 30420;
	// bl 0x824215d0
	ctx.lr = 0x8303ABB4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-400(r11)
	PPC_STORE_U8(ctx.r11.u32 + -400, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ABD0"))) PPC_WEAK_FUNC(sub_8303ABD0);
PPC_FUNC_IMPL(__imp__sub_8303ABD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30424
	ctx.r4.s64 = ctx.r11.s64 + 30424;
	// bl 0x824215d0
	ctx.lr = 0x8303ABEC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1590(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1590, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AC08"))) PPC_WEAK_FUNC(sub_8303AC08);
PPC_FUNC_IMPL(__imp__sub_8303AC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30428
	ctx.r4.s64 = ctx.r11.s64 + 30428;
	// bl 0x824215d0
	ctx.lr = 0x8303AC24;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,463(r11)
	PPC_STORE_U8(ctx.r11.u32 + 463, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AC40"))) PPC_WEAK_FUNC(sub_8303AC40);
PPC_FUNC_IMPL(__imp__sub_8303AC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30432
	ctx.r4.s64 = ctx.r11.s64 + 30432;
	// bl 0x824215d0
	ctx.lr = 0x8303AC5C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1535(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1535, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AC78"))) PPC_WEAK_FUNC(sub_8303AC78);
PPC_FUNC_IMPL(__imp__sub_8303AC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30436
	ctx.r4.s64 = ctx.r11.s64 + 30436;
	// bl 0x824215d0
	ctx.lr = 0x8303AC94;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,640(r11)
	PPC_STORE_U8(ctx.r11.u32 + 640, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ACB0"))) PPC_WEAK_FUNC(sub_8303ACB0);
PPC_FUNC_IMPL(__imp__sub_8303ACB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30440
	ctx.r4.s64 = ctx.r11.s64 + 30440;
	// bl 0x824215d0
	ctx.lr = 0x8303ACCC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1299(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1299, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ACE8"))) PPC_WEAK_FUNC(sub_8303ACE8);
PPC_FUNC_IMPL(__imp__sub_8303ACE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30444
	ctx.r4.s64 = ctx.r11.s64 + 30444;
	// bl 0x824215d0
	ctx.lr = 0x8303AD04;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2439(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2439, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AD20"))) PPC_WEAK_FUNC(sub_8303AD20);
PPC_FUNC_IMPL(__imp__sub_8303AD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30448
	ctx.r4.s64 = ctx.r11.s64 + 30448;
	// bl 0x824215d0
	ctx.lr = 0x8303AD3C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1915(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1915, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AD58"))) PPC_WEAK_FUNC(sub_8303AD58);
PPC_FUNC_IMPL(__imp__sub_8303AD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30452
	ctx.r4.s64 = ctx.r11.s64 + 30452;
	// bl 0x824215d0
	ctx.lr = 0x8303AD74;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1153(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1153, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AD90"))) PPC_WEAK_FUNC(sub_8303AD90);
PPC_FUNC_IMPL(__imp__sub_8303AD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30456
	ctx.r4.s64 = ctx.r11.s64 + 30456;
	// bl 0x824215d0
	ctx.lr = 0x8303ADAC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-907(r11)
	PPC_STORE_U8(ctx.r11.u32 + -907, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ADC8"))) PPC_WEAK_FUNC(sub_8303ADC8);
PPC_FUNC_IMPL(__imp__sub_8303ADC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30460
	ctx.r4.s64 = ctx.r11.s64 + 30460;
	// bl 0x824215d0
	ctx.lr = 0x8303ADE4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1134(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1134, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AE00"))) PPC_WEAK_FUNC(sub_8303AE00);
PPC_FUNC_IMPL(__imp__sub_8303AE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30464
	ctx.r4.s64 = ctx.r11.s64 + 30464;
	// bl 0x824215d0
	ctx.lr = 0x8303AE1C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303AE38"))) PPC_WEAK_FUNC(sub_8303AE38);
PPC_FUNC_IMPL(__imp__sub_8303AE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30468
	ctx.r4.s64 = ctx.r11.s64 + 30468;
	// bl 0x824215d0
	ctx.lr = 0x8303AE54;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3055(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3055, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AE70"))) PPC_WEAK_FUNC(sub_8303AE70);
PPC_FUNC_IMPL(__imp__sub_8303AE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30472
	ctx.r4.s64 = ctx.r11.s64 + 30472;
	// bl 0x824215d0
	ctx.lr = 0x8303AE8C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,85(r11)
	PPC_STORE_U8(ctx.r11.u32 + 85, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AEA8"))) PPC_WEAK_FUNC(sub_8303AEA8);
PPC_FUNC_IMPL(__imp__sub_8303AEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30476
	ctx.r4.s64 = ctx.r11.s64 + 30476;
	// bl 0x824215d0
	ctx.lr = 0x8303AEC4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2938(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2938, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AEE0"))) PPC_WEAK_FUNC(sub_8303AEE0);
PPC_FUNC_IMPL(__imp__sub_8303AEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30480
	ctx.r4.s64 = ctx.r11.s64 + 30480;
	// bl 0x824215d0
	ctx.lr = 0x8303AEFC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303AF18"))) PPC_WEAK_FUNC(sub_8303AF18);
PPC_FUNC_IMPL(__imp__sub_8303AF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30484
	ctx.r4.s64 = ctx.r11.s64 + 30484;
	// bl 0x824215d0
	ctx.lr = 0x8303AF34;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2285(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2285, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AF50"))) PPC_WEAK_FUNC(sub_8303AF50);
PPC_FUNC_IMPL(__imp__sub_8303AF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30488
	ctx.r4.s64 = ctx.r11.s64 + 30488;
	// bl 0x824215d0
	ctx.lr = 0x8303AF6C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-419(r11)
	PPC_STORE_U8(ctx.r11.u32 + -419, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AF88"))) PPC_WEAK_FUNC(sub_8303AF88);
PPC_FUNC_IMPL(__imp__sub_8303AF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30492
	ctx.r4.s64 = ctx.r11.s64 + 30492;
	// bl 0x824215d0
	ctx.lr = 0x8303AFA4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-864(r11)
	PPC_STORE_U8(ctx.r11.u32 + -864, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AFC0"))) PPC_WEAK_FUNC(sub_8303AFC0);
PPC_FUNC_IMPL(__imp__sub_8303AFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30496
	ctx.r4.s64 = ctx.r11.s64 + 30496;
	// bl 0x824215d0
	ctx.lr = 0x8303AFDC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2836(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2836, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AFF8"))) PPC_WEAK_FUNC(sub_8303AFF8);
PPC_FUNC_IMPL(__imp__sub_8303AFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30500
	ctx.r4.s64 = ctx.r11.s64 + 30500;
	// bl 0x824215d0
	ctx.lr = 0x8303B014;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-389(r11)
	PPC_STORE_U8(ctx.r11.u32 + -389, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B030"))) PPC_WEAK_FUNC(sub_8303B030);
PPC_FUNC_IMPL(__imp__sub_8303B030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30504
	ctx.r4.s64 = ctx.r11.s64 + 30504;
	// bl 0x824215d0
	ctx.lr = 0x8303B04C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-868(r11)
	PPC_STORE_U8(ctx.r11.u32 + -868, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B068"))) PPC_WEAK_FUNC(sub_8303B068);
PPC_FUNC_IMPL(__imp__sub_8303B068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30508
	ctx.r4.s64 = ctx.r11.s64 + 30508;
	// bl 0x824215d0
	ctx.lr = 0x8303B084;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2089(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2089, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B0A0"))) PPC_WEAK_FUNC(sub_8303B0A0);
PPC_FUNC_IMPL(__imp__sub_8303B0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30512
	ctx.r4.s64 = ctx.r11.s64 + 30512;
	// bl 0x824215d0
	ctx.lr = 0x8303B0BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1645(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1645, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B0D8"))) PPC_WEAK_FUNC(sub_8303B0D8);
PPC_FUNC_IMPL(__imp__sub_8303B0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30516
	ctx.r4.s64 = ctx.r11.s64 + 30516;
	// bl 0x824215d0
	ctx.lr = 0x8303B0F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1421(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1421, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B110"))) PPC_WEAK_FUNC(sub_8303B110);
PPC_FUNC_IMPL(__imp__sub_8303B110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30520
	ctx.r4.s64 = ctx.r11.s64 + 30520;
	// bl 0x824215d0
	ctx.lr = 0x8303B12C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303B148"))) PPC_WEAK_FUNC(sub_8303B148);
PPC_FUNC_IMPL(__imp__sub_8303B148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30524
	ctx.r4.s64 = ctx.r11.s64 + 30524;
	// bl 0x824215d0
	ctx.lr = 0x8303B164;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1444(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1444, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B180"))) PPC_WEAK_FUNC(sub_8303B180);
PPC_FUNC_IMPL(__imp__sub_8303B180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30528
	ctx.r4.s64 = ctx.r11.s64 + 30528;
	// bl 0x824215d0
	ctx.lr = 0x8303B19C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-803(r11)
	PPC_STORE_U8(ctx.r11.u32 + -803, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B1B8"))) PPC_WEAK_FUNC(sub_8303B1B8);
PPC_FUNC_IMPL(__imp__sub_8303B1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30532
	ctx.r4.s64 = ctx.r11.s64 + 30532;
	// bl 0x824215d0
	ctx.lr = 0x8303B1D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3111(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3111, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B1F0"))) PPC_WEAK_FUNC(sub_8303B1F0);
PPC_FUNC_IMPL(__imp__sub_8303B1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30536
	ctx.r4.s64 = ctx.r11.s64 + 30536;
	// bl 0x824215d0
	ctx.lr = 0x8303B20C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,701(r11)
	PPC_STORE_U8(ctx.r11.u32 + 701, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B228"))) PPC_WEAK_FUNC(sub_8303B228);
PPC_FUNC_IMPL(__imp__sub_8303B228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30540
	ctx.r4.s64 = ctx.r11.s64 + 30540;
	// bl 0x824215d0
	ctx.lr = 0x8303B244;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2966(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2966, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B260"))) PPC_WEAK_FUNC(sub_8303B260);
PPC_FUNC_IMPL(__imp__sub_8303B260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30544
	ctx.r4.s64 = ctx.r11.s64 + 30544;
	// bl 0x824215d0
	ctx.lr = 0x8303B27C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1966(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1966, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B298"))) PPC_WEAK_FUNC(sub_8303B298);
PPC_FUNC_IMPL(__imp__sub_8303B298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30548
	ctx.r4.s64 = ctx.r11.s64 + 30548;
	// bl 0x824215d0
	ctx.lr = 0x8303B2B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2922(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2922, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B2D0"))) PPC_WEAK_FUNC(sub_8303B2D0);
PPC_FUNC_IMPL(__imp__sub_8303B2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30552
	ctx.r4.s64 = ctx.r11.s64 + 30552;
	// bl 0x824215d0
	ctx.lr = 0x8303B2EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,219(r11)
	PPC_STORE_U8(ctx.r11.u32 + 219, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B308"))) PPC_WEAK_FUNC(sub_8303B308);
PPC_FUNC_IMPL(__imp__sub_8303B308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30556
	ctx.r4.s64 = ctx.r11.s64 + 30556;
	// bl 0x824215d0
	ctx.lr = 0x8303B324;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-816(r11)
	PPC_STORE_U8(ctx.r11.u32 + -816, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B340"))) PPC_WEAK_FUNC(sub_8303B340);
PPC_FUNC_IMPL(__imp__sub_8303B340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30560
	ctx.r4.s64 = ctx.r11.s64 + 30560;
	// bl 0x824215d0
	ctx.lr = 0x8303B35C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,392(r11)
	PPC_STORE_U8(ctx.r11.u32 + 392, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B378"))) PPC_WEAK_FUNC(sub_8303B378);
PPC_FUNC_IMPL(__imp__sub_8303B378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30564
	ctx.r4.s64 = ctx.r11.s64 + 30564;
	// bl 0x824215d0
	ctx.lr = 0x8303B394;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-310(r11)
	PPC_STORE_U8(ctx.r11.u32 + -310, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B3B0"))) PPC_WEAK_FUNC(sub_8303B3B0);
PPC_FUNC_IMPL(__imp__sub_8303B3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30568
	ctx.r4.s64 = ctx.r11.s64 + 30568;
	// bl 0x824215d0
	ctx.lr = 0x8303B3CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1155(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1155, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B3E8"))) PPC_WEAK_FUNC(sub_8303B3E8);
PPC_FUNC_IMPL(__imp__sub_8303B3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30572
	ctx.r4.s64 = ctx.r11.s64 + 30572;
	// bl 0x824215d0
	ctx.lr = 0x8303B404;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1482(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1482, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B420"))) PPC_WEAK_FUNC(sub_8303B420);
PPC_FUNC_IMPL(__imp__sub_8303B420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30576
	ctx.r4.s64 = ctx.r11.s64 + 30576;
	// bl 0x824215d0
	ctx.lr = 0x8303B43C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2444(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2444, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B458"))) PPC_WEAK_FUNC(sub_8303B458);
PPC_FUNC_IMPL(__imp__sub_8303B458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30580
	ctx.r4.s64 = ctx.r11.s64 + 30580;
	// bl 0x824215d0
	ctx.lr = 0x8303B474;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,493(r11)
	PPC_STORE_U8(ctx.r11.u32 + 493, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B490"))) PPC_WEAK_FUNC(sub_8303B490);
PPC_FUNC_IMPL(__imp__sub_8303B490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30584
	ctx.r4.s64 = ctx.r11.s64 + 30584;
	// bl 0x824215d0
	ctx.lr = 0x8303B4AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1252(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1252, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B4C8"))) PPC_WEAK_FUNC(sub_8303B4C8);
PPC_FUNC_IMPL(__imp__sub_8303B4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30588
	ctx.r4.s64 = ctx.r11.s64 + 30588;
	// bl 0x824215d0
	ctx.lr = 0x8303B4E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2058(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2058, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B500"))) PPC_WEAK_FUNC(sub_8303B500);
PPC_FUNC_IMPL(__imp__sub_8303B500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30592
	ctx.r4.s64 = ctx.r11.s64 + 30592;
	// bl 0x824215d0
	ctx.lr = 0x8303B51C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-207(r11)
	PPC_STORE_U8(ctx.r11.u32 + -207, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B538"))) PPC_WEAK_FUNC(sub_8303B538);
PPC_FUNC_IMPL(__imp__sub_8303B538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30596
	ctx.r4.s64 = ctx.r11.s64 + 30596;
	// bl 0x824215d0
	ctx.lr = 0x8303B554;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303B570"))) PPC_WEAK_FUNC(sub_8303B570);
PPC_FUNC_IMPL(__imp__sub_8303B570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30600
	ctx.r4.s64 = ctx.r11.s64 + 30600;
	// bl 0x824215d0
	ctx.lr = 0x8303B58C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-339(r11)
	PPC_STORE_U8(ctx.r11.u32 + -339, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B5A8"))) PPC_WEAK_FUNC(sub_8303B5A8);
PPC_FUNC_IMPL(__imp__sub_8303B5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30604
	ctx.r4.s64 = ctx.r11.s64 + 30604;
	// bl 0x824215d0
	ctx.lr = 0x8303B5C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2186(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2186, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B5E0"))) PPC_WEAK_FUNC(sub_8303B5E0);
PPC_FUNC_IMPL(__imp__sub_8303B5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30608
	ctx.r4.s64 = ctx.r11.s64 + 30608;
	// bl 0x824215d0
	ctx.lr = 0x8303B5FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1814(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1814, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B618"))) PPC_WEAK_FUNC(sub_8303B618);
PPC_FUNC_IMPL(__imp__sub_8303B618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30612
	ctx.r4.s64 = ctx.r11.s64 + 30612;
	// bl 0x824215d0
	ctx.lr = 0x8303B634;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-268(r11)
	PPC_STORE_U8(ctx.r11.u32 + -268, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B650"))) PPC_WEAK_FUNC(sub_8303B650);
PPC_FUNC_IMPL(__imp__sub_8303B650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30616
	ctx.r4.s64 = ctx.r11.s64 + 30616;
	// bl 0x824215d0
	ctx.lr = 0x8303B66C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303B688"))) PPC_WEAK_FUNC(sub_8303B688);
PPC_FUNC_IMPL(__imp__sub_8303B688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30620
	ctx.r4.s64 = ctx.r11.s64 + 30620;
	// bl 0x824215d0
	ctx.lr = 0x8303B6A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-455(r11)
	PPC_STORE_U8(ctx.r11.u32 + -455, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B6C0"))) PPC_WEAK_FUNC(sub_8303B6C0);
PPC_FUNC_IMPL(__imp__sub_8303B6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30624
	ctx.r4.s64 = ctx.r11.s64 + 30624;
	// bl 0x824215d0
	ctx.lr = 0x8303B6DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,235(r11)
	PPC_STORE_U8(ctx.r11.u32 + 235, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B6F8"))) PPC_WEAK_FUNC(sub_8303B6F8);
PPC_FUNC_IMPL(__imp__sub_8303B6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30628
	ctx.r4.s64 = ctx.r11.s64 + 30628;
	// bl 0x824215d0
	ctx.lr = 0x8303B714;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-453(r11)
	PPC_STORE_U8(ctx.r11.u32 + -453, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B730"))) PPC_WEAK_FUNC(sub_8303B730);
PPC_FUNC_IMPL(__imp__sub_8303B730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30632
	ctx.r4.s64 = ctx.r11.s64 + 30632;
	// bl 0x824215d0
	ctx.lr = 0x8303B74C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2094(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2094, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B768"))) PPC_WEAK_FUNC(sub_8303B768);
PPC_FUNC_IMPL(__imp__sub_8303B768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30636
	ctx.r4.s64 = ctx.r11.s64 + 30636;
	// bl 0x824215d0
	ctx.lr = 0x8303B784;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1319(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1319, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B7A0"))) PPC_WEAK_FUNC(sub_8303B7A0);
PPC_FUNC_IMPL(__imp__sub_8303B7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30640
	ctx.r4.s64 = ctx.r11.s64 + 30640;
	// bl 0x824215d0
	ctx.lr = 0x8303B7BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1298(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1298, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B7D8"))) PPC_WEAK_FUNC(sub_8303B7D8);
PPC_FUNC_IMPL(__imp__sub_8303B7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30644
	ctx.r4.s64 = ctx.r11.s64 + 30644;
	// bl 0x824215d0
	ctx.lr = 0x8303B7F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-802(r11)
	PPC_STORE_U8(ctx.r11.u32 + -802, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B810"))) PPC_WEAK_FUNC(sub_8303B810);
PPC_FUNC_IMPL(__imp__sub_8303B810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30648
	ctx.r4.s64 = ctx.r11.s64 + 30648;
	// bl 0x824215d0
	ctx.lr = 0x8303B82C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-804(r11)
	PPC_STORE_U8(ctx.r11.u32 + -804, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B848"))) PPC_WEAK_FUNC(sub_8303B848);
PPC_FUNC_IMPL(__imp__sub_8303B848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30652
	ctx.r4.s64 = ctx.r11.s64 + 30652;
	// bl 0x824215d0
	ctx.lr = 0x8303B864;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303B880"))) PPC_WEAK_FUNC(sub_8303B880);
PPC_FUNC_IMPL(__imp__sub_8303B880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30656
	ctx.r4.s64 = ctx.r11.s64 + 30656;
	// bl 0x824215d0
	ctx.lr = 0x8303B89C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2838(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2838, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B8B8"))) PPC_WEAK_FUNC(sub_8303B8B8);
PPC_FUNC_IMPL(__imp__sub_8303B8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30660
	ctx.r4.s64 = ctx.r11.s64 + 30660;
	// bl 0x824215d0
	ctx.lr = 0x8303B8D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,521(r11)
	PPC_STORE_U8(ctx.r11.u32 + 521, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B8F0"))) PPC_WEAK_FUNC(sub_8303B8F0);
PPC_FUNC_IMPL(__imp__sub_8303B8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30664
	ctx.r4.s64 = ctx.r11.s64 + 30664;
	// bl 0x824215d0
	ctx.lr = 0x8303B90C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303B928"))) PPC_WEAK_FUNC(sub_8303B928);
PPC_FUNC_IMPL(__imp__sub_8303B928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30668
	ctx.r4.s64 = ctx.r11.s64 + 30668;
	// bl 0x824215d0
	ctx.lr = 0x8303B944;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303B960"))) PPC_WEAK_FUNC(sub_8303B960);
PPC_FUNC_IMPL(__imp__sub_8303B960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30672
	ctx.r4.s64 = ctx.r11.s64 + 30672;
	// bl 0x824215d0
	ctx.lr = 0x8303B97C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2088(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2088, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B998"))) PPC_WEAK_FUNC(sub_8303B998);
PPC_FUNC_IMPL(__imp__sub_8303B998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30676
	ctx.r4.s64 = ctx.r11.s64 + 30676;
	// bl 0x824215d0
	ctx.lr = 0x8303B9B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1166(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1166, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B9D0"))) PPC_WEAK_FUNC(sub_8303B9D0);
PPC_FUNC_IMPL(__imp__sub_8303B9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30680
	ctx.r4.s64 = ctx.r11.s64 + 30680;
	// bl 0x824215d0
	ctx.lr = 0x8303B9EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1944(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1944, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BA08"))) PPC_WEAK_FUNC(sub_8303BA08);
PPC_FUNC_IMPL(__imp__sub_8303BA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30684
	ctx.r4.s64 = ctx.r11.s64 + 30684;
	// bl 0x824215d0
	ctx.lr = 0x8303BA24;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1742(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1742, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BA40"))) PPC_WEAK_FUNC(sub_8303BA40);
PPC_FUNC_IMPL(__imp__sub_8303BA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30688
	ctx.r4.s64 = ctx.r11.s64 + 30688;
	// bl 0x824215d0
	ctx.lr = 0x8303BA5C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303BA78"))) PPC_WEAK_FUNC(sub_8303BA78);
PPC_FUNC_IMPL(__imp__sub_8303BA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30692
	ctx.r4.s64 = ctx.r11.s64 + 30692;
	// bl 0x824215d0
	ctx.lr = 0x8303BA94;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303BAB0"))) PPC_WEAK_FUNC(sub_8303BAB0);
PPC_FUNC_IMPL(__imp__sub_8303BAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30696
	ctx.r4.s64 = ctx.r11.s64 + 30696;
	// bl 0x824215d0
	ctx.lr = 0x8303BACC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1596(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1596, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BAE8"))) PPC_WEAK_FUNC(sub_8303BAE8);
PPC_FUNC_IMPL(__imp__sub_8303BAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30700
	ctx.r4.s64 = ctx.r11.s64 + 30700;
	// bl 0x824215d0
	ctx.lr = 0x8303BB04;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,931(r11)
	PPC_STORE_U8(ctx.r11.u32 + 931, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BB20"))) PPC_WEAK_FUNC(sub_8303BB20);
PPC_FUNC_IMPL(__imp__sub_8303BB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30704
	ctx.r4.s64 = ctx.r11.s64 + 30704;
	// bl 0x824215d0
	ctx.lr = 0x8303BB3C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2557(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2557, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BB58"))) PPC_WEAK_FUNC(sub_8303BB58);
PPC_FUNC_IMPL(__imp__sub_8303BB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30708
	ctx.r4.s64 = ctx.r11.s64 + 30708;
	// bl 0x824215d0
	ctx.lr = 0x8303BB74;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-739(r11)
	PPC_STORE_U8(ctx.r11.u32 + -739, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BB90"))) PPC_WEAK_FUNC(sub_8303BB90);
PPC_FUNC_IMPL(__imp__sub_8303BB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30712
	ctx.r4.s64 = ctx.r11.s64 + 30712;
	// bl 0x824215d0
	ctx.lr = 0x8303BBAC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BBC8"))) PPC_WEAK_FUNC(sub_8303BBC8);
PPC_FUNC_IMPL(__imp__sub_8303BBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30716
	ctx.r4.s64 = ctx.r11.s64 + 30716;
	// bl 0x824215d0
	ctx.lr = 0x8303BBE4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1446(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1446, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BC00"))) PPC_WEAK_FUNC(sub_8303BC00);
PPC_FUNC_IMPL(__imp__sub_8303BC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30720
	ctx.r4.s64 = ctx.r11.s64 + 30720;
	// bl 0x824215d0
	ctx.lr = 0x8303BC1C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303BC38"))) PPC_WEAK_FUNC(sub_8303BC38);
PPC_FUNC_IMPL(__imp__sub_8303BC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30724
	ctx.r4.s64 = ctx.r11.s64 + 30724;
	// bl 0x824215d0
	ctx.lr = 0x8303BC54;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3106(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3106, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BC70"))) PPC_WEAK_FUNC(sub_8303BC70);
PPC_FUNC_IMPL(__imp__sub_8303BC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30728
	ctx.r4.s64 = ctx.r11.s64 + 30728;
	// bl 0x824215d0
	ctx.lr = 0x8303BC8C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1647(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1647, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BCA8"))) PPC_WEAK_FUNC(sub_8303BCA8);
PPC_FUNC_IMPL(__imp__sub_8303BCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30732
	ctx.r4.s64 = ctx.r11.s64 + 30732;
	// bl 0x824215d0
	ctx.lr = 0x8303BCC4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1826(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1826, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BCE0"))) PPC_WEAK_FUNC(sub_8303BCE0);
PPC_FUNC_IMPL(__imp__sub_8303BCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30736
	ctx.r4.s64 = ctx.r11.s64 + 30736;
	// bl 0x824215d0
	ctx.lr = 0x8303BCFC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2013(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2013, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BD18"))) PPC_WEAK_FUNC(sub_8303BD18);
PPC_FUNC_IMPL(__imp__sub_8303BD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30740
	ctx.r4.s64 = ctx.r11.s64 + 30740;
	// bl 0x824215d0
	ctx.lr = 0x8303BD34;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-840(r11)
	PPC_STORE_U8(ctx.r11.u32 + -840, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BD50"))) PPC_WEAK_FUNC(sub_8303BD50);
PPC_FUNC_IMPL(__imp__sub_8303BD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30744
	ctx.r4.s64 = ctx.r11.s64 + 30744;
	// bl 0x824215d0
	ctx.lr = 0x8303BD6C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303BD88"))) PPC_WEAK_FUNC(sub_8303BD88);
PPC_FUNC_IMPL(__imp__sub_8303BD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30748
	ctx.r4.s64 = ctx.r11.s64 + 30748;
	// bl 0x824215d0
	ctx.lr = 0x8303BDA4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1863(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1863, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BDC0"))) PPC_WEAK_FUNC(sub_8303BDC0);
PPC_FUNC_IMPL(__imp__sub_8303BDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30752
	ctx.r4.s64 = ctx.r11.s64 + 30752;
	// bl 0x824215d0
	ctx.lr = 0x8303BDDC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303BDF8"))) PPC_WEAK_FUNC(sub_8303BDF8);
PPC_FUNC_IMPL(__imp__sub_8303BDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30756
	ctx.r4.s64 = ctx.r11.s64 + 30756;
	// bl 0x824215d0
	ctx.lr = 0x8303BE14;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2581(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2581, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BE30"))) PPC_WEAK_FUNC(sub_8303BE30);
PPC_FUNC_IMPL(__imp__sub_8303BE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30760
	ctx.r4.s64 = ctx.r11.s64 + 30760;
	// bl 0x824215d0
	ctx.lr = 0x8303BE4C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,641(r11)
	PPC_STORE_U8(ctx.r11.u32 + 641, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BE68"))) PPC_WEAK_FUNC(sub_8303BE68);
PPC_FUNC_IMPL(__imp__sub_8303BE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30764
	ctx.r4.s64 = ctx.r11.s64 + 30764;
	// bl 0x824215d0
	ctx.lr = 0x8303BE84;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303BEA0"))) PPC_WEAK_FUNC(sub_8303BEA0);
PPC_FUNC_IMPL(__imp__sub_8303BEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30768
	ctx.r4.s64 = ctx.r11.s64 + 30768;
	// bl 0x824215d0
	ctx.lr = 0x8303BEBC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-131(r11)
	PPC_STORE_U8(ctx.r11.u32 + -131, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BED8"))) PPC_WEAK_FUNC(sub_8303BED8);
PPC_FUNC_IMPL(__imp__sub_8303BED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30772
	ctx.r4.s64 = ctx.r11.s64 + 30772;
	// bl 0x824215d0
	ctx.lr = 0x8303BEF4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3202(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3202, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BF10"))) PPC_WEAK_FUNC(sub_8303BF10);
PPC_FUNC_IMPL(__imp__sub_8303BF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30776
	ctx.r4.s64 = ctx.r11.s64 + 30776;
	// bl 0x824215d0
	ctx.lr = 0x8303BF2C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1606(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1606, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BF48"))) PPC_WEAK_FUNC(sub_8303BF48);
PPC_FUNC_IMPL(__imp__sub_8303BF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30780
	ctx.r4.s64 = ctx.r11.s64 + 30780;
	// bl 0x824215d0
	ctx.lr = 0x8303BF64;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-790(r11)
	PPC_STORE_U8(ctx.r11.u32 + -790, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BF80"))) PPC_WEAK_FUNC(sub_8303BF80);
PPC_FUNC_IMPL(__imp__sub_8303BF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30784
	ctx.r4.s64 = ctx.r11.s64 + 30784;
	// bl 0x824215d0
	ctx.lr = 0x8303BF9C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3207(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3207, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BFB8"))) PPC_WEAK_FUNC(sub_8303BFB8);
PPC_FUNC_IMPL(__imp__sub_8303BFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30788
	ctx.r4.s64 = ctx.r11.s64 + 30788;
	// bl 0x824215d0
	ctx.lr = 0x8303BFD4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,928(r11)
	PPC_STORE_U8(ctx.r11.u32 + 928, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303BFF0"))) PPC_WEAK_FUNC(sub_8303BFF0);
PPC_FUNC_IMPL(__imp__sub_8303BFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30792
	ctx.r4.s64 = ctx.r11.s64 + 30792;
	// bl 0x824215d0
	ctx.lr = 0x8303C00C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303C028"))) PPC_WEAK_FUNC(sub_8303C028);
PPC_FUNC_IMPL(__imp__sub_8303C028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30796
	ctx.r4.s64 = ctx.r11.s64 + 30796;
	// bl 0x824215d0
	ctx.lr = 0x8303C044;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-593(r11)
	PPC_STORE_U8(ctx.r11.u32 + -593, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C060"))) PPC_WEAK_FUNC(sub_8303C060);
PPC_FUNC_IMPL(__imp__sub_8303C060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30800
	ctx.r4.s64 = ctx.r11.s64 + 30800;
	// bl 0x824215d0
	ctx.lr = 0x8303C07C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1318(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1318, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C098"))) PPC_WEAK_FUNC(sub_8303C098);
PPC_FUNC_IMPL(__imp__sub_8303C098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30804
	ctx.r4.s64 = ctx.r11.s64 + 30804;
	// bl 0x824215d0
	ctx.lr = 0x8303C0B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303C0D0"))) PPC_WEAK_FUNC(sub_8303C0D0);
PPC_FUNC_IMPL(__imp__sub_8303C0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30808
	ctx.r4.s64 = ctx.r11.s64 + 30808;
	// bl 0x824215d0
	ctx.lr = 0x8303C0EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2752(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2752, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C108"))) PPC_WEAK_FUNC(sub_8303C108);
PPC_FUNC_IMPL(__imp__sub_8303C108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30812
	ctx.r4.s64 = ctx.r11.s64 + 30812;
	// bl 0x824215d0
	ctx.lr = 0x8303C124;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1846(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1846, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C140"))) PPC_WEAK_FUNC(sub_8303C140);
PPC_FUNC_IMPL(__imp__sub_8303C140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30816
	ctx.r4.s64 = ctx.r11.s64 + 30816;
	// bl 0x824215d0
	ctx.lr = 0x8303C15C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-14(r11)
	PPC_STORE_U8(ctx.r11.u32 + -14, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C178"))) PPC_WEAK_FUNC(sub_8303C178);
PPC_FUNC_IMPL(__imp__sub_8303C178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30820
	ctx.r4.s64 = ctx.r11.s64 + 30820;
	// bl 0x824215d0
	ctx.lr = 0x8303C194;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1775(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1775, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C1B0"))) PPC_WEAK_FUNC(sub_8303C1B0);
PPC_FUNC_IMPL(__imp__sub_8303C1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30824
	ctx.r4.s64 = ctx.r11.s64 + 30824;
	// bl 0x824215d0
	ctx.lr = 0x8303C1CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2758(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2758, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C1E8"))) PPC_WEAK_FUNC(sub_8303C1E8);
PPC_FUNC_IMPL(__imp__sub_8303C1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30828
	ctx.r4.s64 = ctx.r11.s64 + 30828;
	// bl 0x824215d0
	ctx.lr = 0x8303C204;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303C220"))) PPC_WEAK_FUNC(sub_8303C220);
PPC_FUNC_IMPL(__imp__sub_8303C220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30832
	ctx.r4.s64 = ctx.r11.s64 + 30832;
	// bl 0x824215d0
	ctx.lr = 0x8303C23C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-398(r11)
	PPC_STORE_U8(ctx.r11.u32 + -398, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C258"))) PPC_WEAK_FUNC(sub_8303C258);
PPC_FUNC_IMPL(__imp__sub_8303C258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30836
	ctx.r4.s64 = ctx.r11.s64 + 30836;
	// bl 0x824215d0
	ctx.lr = 0x8303C274;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,395(r11)
	PPC_STORE_U8(ctx.r11.u32 + 395, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C290"))) PPC_WEAK_FUNC(sub_8303C290);
PPC_FUNC_IMPL(__imp__sub_8303C290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30840
	ctx.r4.s64 = ctx.r11.s64 + 30840;
	// bl 0x824215d0
	ctx.lr = 0x8303C2AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1068(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1068, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C2C8"))) PPC_WEAK_FUNC(sub_8303C2C8);
PPC_FUNC_IMPL(__imp__sub_8303C2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30844
	ctx.r4.s64 = ctx.r11.s64 + 30844;
	// bl 0x824215d0
	ctx.lr = 0x8303C2E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,702(r11)
	PPC_STORE_U8(ctx.r11.u32 + 702, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C300"))) PPC_WEAK_FUNC(sub_8303C300);
PPC_FUNC_IMPL(__imp__sub_8303C300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30848
	ctx.r4.s64 = ctx.r11.s64 + 30848;
	// bl 0x824215d0
	ctx.lr = 0x8303C31C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,492(r11)
	PPC_STORE_U8(ctx.r11.u32 + 492, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C338"))) PPC_WEAK_FUNC(sub_8303C338);
PPC_FUNC_IMPL(__imp__sub_8303C338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30852
	ctx.r4.s64 = ctx.r11.s64 + 30852;
	// bl 0x824215d0
	ctx.lr = 0x8303C354;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303C370"))) PPC_WEAK_FUNC(sub_8303C370);
PPC_FUNC_IMPL(__imp__sub_8303C370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30856
	ctx.r4.s64 = ctx.r11.s64 + 30856;
	// bl 0x824215d0
	ctx.lr = 0x8303C38C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-815(r11)
	PPC_STORE_U8(ctx.r11.u32 + -815, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C3A8"))) PPC_WEAK_FUNC(sub_8303C3A8);
PPC_FUNC_IMPL(__imp__sub_8303C3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30860
	ctx.r4.s64 = ctx.r11.s64 + 30860;
	// bl 0x824215d0
	ctx.lr = 0x8303C3C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-862(r11)
	PPC_STORE_U8(ctx.r11.u32 + -862, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C3E0"))) PPC_WEAK_FUNC(sub_8303C3E0);
PPC_FUNC_IMPL(__imp__sub_8303C3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30864
	ctx.r4.s64 = ctx.r11.s64 + 30864;
	// bl 0x824215d0
	ctx.lr = 0x8303C3FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-297(r11)
	PPC_STORE_U8(ctx.r11.u32 + -297, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C418"))) PPC_WEAK_FUNC(sub_8303C418);
PPC_FUNC_IMPL(__imp__sub_8303C418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30868
	ctx.r4.s64 = ctx.r11.s64 + 30868;
	// bl 0x824215d0
	ctx.lr = 0x8303C434;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1152(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1152, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C450"))) PPC_WEAK_FUNC(sub_8303C450);
PPC_FUNC_IMPL(__imp__sub_8303C450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30872
	ctx.r4.s64 = ctx.r11.s64 + 30872;
	// bl 0x824215d0
	ctx.lr = 0x8303C46C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-130(r11)
	PPC_STORE_U8(ctx.r11.u32 + -130, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C488"))) PPC_WEAK_FUNC(sub_8303C488);
PPC_FUNC_IMPL(__imp__sub_8303C488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30876
	ctx.r4.s64 = ctx.r11.s64 + 30876;
	// bl 0x824215d0
	ctx.lr = 0x8303C4A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1176(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1176, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C4C0"))) PPC_WEAK_FUNC(sub_8303C4C0);
PPC_FUNC_IMPL(__imp__sub_8303C4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30880
	ctx.r4.s64 = ctx.r11.s64 + 30880;
	// bl 0x824215d0
	ctx.lr = 0x8303C4DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1743(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1743, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C4F8"))) PPC_WEAK_FUNC(sub_8303C4F8);
PPC_FUNC_IMPL(__imp__sub_8303C4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30884
	ctx.r4.s64 = ctx.r11.s64 + 30884;
	// bl 0x824215d0
	ctx.lr = 0x8303C514;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-246(r11)
	PPC_STORE_U8(ctx.r11.u32 + -246, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C530"))) PPC_WEAK_FUNC(sub_8303C530);
PPC_FUNC_IMPL(__imp__sub_8303C530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30888
	ctx.r4.s64 = ctx.r11.s64 + 30888;
	// bl 0x824215d0
	ctx.lr = 0x8303C54C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2621(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2621, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C568"))) PPC_WEAK_FUNC(sub_8303C568);
PPC_FUNC_IMPL(__imp__sub_8303C568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30892
	ctx.r4.s64 = ctx.r11.s64 + 30892;
	// bl 0x824215d0
	ctx.lr = 0x8303C584;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303C5A0"))) PPC_WEAK_FUNC(sub_8303C5A0);
PPC_FUNC_IMPL(__imp__sub_8303C5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30896
	ctx.r4.s64 = ctx.r11.s64 + 30896;
	// bl 0x824215d0
	ctx.lr = 0x8303C5BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1132(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1132, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C5D8"))) PPC_WEAK_FUNC(sub_8303C5D8);
PPC_FUNC_IMPL(__imp__sub_8303C5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30900
	ctx.r4.s64 = ctx.r11.s64 + 30900;
	// bl 0x824215d0
	ctx.lr = 0x8303C5F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303C610"))) PPC_WEAK_FUNC(sub_8303C610);
PPC_FUNC_IMPL(__imp__sub_8303C610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30904
	ctx.r4.s64 = ctx.r11.s64 + 30904;
	// bl 0x824215d0
	ctx.lr = 0x8303C62C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,83(r11)
	PPC_STORE_U8(ctx.r11.u32 + 83, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C648"))) PPC_WEAK_FUNC(sub_8303C648);
PPC_FUNC_IMPL(__imp__sub_8303C648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30908
	ctx.r4.s64 = ctx.r11.s64 + 30908;
	// bl 0x824215d0
	ctx.lr = 0x8303C664;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1589(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1589, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

