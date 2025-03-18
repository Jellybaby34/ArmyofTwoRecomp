#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8306DA08"))) PPC_WEAK_FUNC(sub_8306DA08);
PPC_FUNC_IMPL(__imp__sub_8306DA08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// bl 0x824215d0
	ctx.lr = 0x8306DA24;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306DA40"))) PPC_WEAK_FUNC(sub_8306DA40);
PPC_FUNC_IMPL(__imp__sub_8306DA40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,624
	ctx.r4.s64 = ctx.r11.s64 + 624;
	// bl 0x824215d0
	ctx.lr = 0x8306DA5C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2165(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2165, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DA78"))) PPC_WEAK_FUNC(sub_8306DA78);
PPC_FUNC_IMPL(__imp__sub_8306DA78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,628
	ctx.r4.s64 = ctx.r11.s64 + 628;
	// bl 0x824215d0
	ctx.lr = 0x8306DA94;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2079(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2079, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DAB0"))) PPC_WEAK_FUNC(sub_8306DAB0);
PPC_FUNC_IMPL(__imp__sub_8306DAB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,632
	ctx.r4.s64 = ctx.r11.s64 + 632;
	// bl 0x824215d0
	ctx.lr = 0x8306DACC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,195(r11)
	PPC_STORE_U8(ctx.r11.u32 + 195, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DAE8"))) PPC_WEAK_FUNC(sub_8306DAE8);
PPC_FUNC_IMPL(__imp__sub_8306DAE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,636
	ctx.r4.s64 = ctx.r11.s64 + 636;
	// bl 0x824215d0
	ctx.lr = 0x8306DB04;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1204(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1204, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DB20"))) PPC_WEAK_FUNC(sub_8306DB20);
PPC_FUNC_IMPL(__imp__sub_8306DB20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,640
	ctx.r4.s64 = ctx.r11.s64 + 640;
	// bl 0x824215d0
	ctx.lr = 0x8306DB3C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1564(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1564, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DB58"))) PPC_WEAK_FUNC(sub_8306DB58);
PPC_FUNC_IMPL(__imp__sub_8306DB58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,644
	ctx.r4.s64 = ctx.r11.s64 + 644;
	// bl 0x824215d0
	ctx.lr = 0x8306DB74;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1333(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1333, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DB90"))) PPC_WEAK_FUNC(sub_8306DB90);
PPC_FUNC_IMPL(__imp__sub_8306DB90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,648
	ctx.r4.s64 = ctx.r11.s64 + 648;
	// bl 0x824215d0
	ctx.lr = 0x8306DBAC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306DBC8"))) PPC_WEAK_FUNC(sub_8306DBC8);
PPC_FUNC_IMPL(__imp__sub_8306DBC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,652
	ctx.r4.s64 = ctx.r11.s64 + 652;
	// bl 0x824215d0
	ctx.lr = 0x8306DBE4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1972(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1972, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DC00"))) PPC_WEAK_FUNC(sub_8306DC00);
PPC_FUNC_IMPL(__imp__sub_8306DC00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,656
	ctx.r4.s64 = ctx.r11.s64 + 656;
	// bl 0x824215d0
	ctx.lr = 0x8306DC1C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DC38"))) PPC_WEAK_FUNC(sub_8306DC38);
PPC_FUNC_IMPL(__imp__sub_8306DC38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,660
	ctx.r4.s64 = ctx.r11.s64 + 660;
	// bl 0x824215d0
	ctx.lr = 0x8306DC54;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306DC70"))) PPC_WEAK_FUNC(sub_8306DC70);
PPC_FUNC_IMPL(__imp__sub_8306DC70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,664
	ctx.r4.s64 = ctx.r11.s64 + 664;
	// bl 0x824215d0
	ctx.lr = 0x8306DC8C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-836(r11)
	PPC_STORE_U8(ctx.r11.u32 + -836, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DCA8"))) PPC_WEAK_FUNC(sub_8306DCA8);
PPC_FUNC_IMPL(__imp__sub_8306DCA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,668
	ctx.r4.s64 = ctx.r11.s64 + 668;
	// bl 0x824215d0
	ctx.lr = 0x8306DCC4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2665(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2665, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DCE0"))) PPC_WEAK_FUNC(sub_8306DCE0);
PPC_FUNC_IMPL(__imp__sub_8306DCE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,672
	ctx.r4.s64 = ctx.r11.s64 + 672;
	// bl 0x824215d0
	ctx.lr = 0x8306DCFC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306DD18"))) PPC_WEAK_FUNC(sub_8306DD18);
PPC_FUNC_IMPL(__imp__sub_8306DD18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,676
	ctx.r4.s64 = ctx.r11.s64 + 676;
	// bl 0x824215d0
	ctx.lr = 0x8306DD34;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1640(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1640, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DD50"))) PPC_WEAK_FUNC(sub_8306DD50);
PPC_FUNC_IMPL(__imp__sub_8306DD50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,680
	ctx.r4.s64 = ctx.r11.s64 + 680;
	// bl 0x824215d0
	ctx.lr = 0x8306DD6C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306DD88"))) PPC_WEAK_FUNC(sub_8306DD88);
PPC_FUNC_IMPL(__imp__sub_8306DD88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,684
	ctx.r4.s64 = ctx.r11.s64 + 684;
	// bl 0x824215d0
	ctx.lr = 0x8306DDA4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306DDC0"))) PPC_WEAK_FUNC(sub_8306DDC0);
PPC_FUNC_IMPL(__imp__sub_8306DDC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,688
	ctx.r4.s64 = ctx.r11.s64 + 688;
	// bl 0x824215d0
	ctx.lr = 0x8306DDDC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2254(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2254, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DDF8"))) PPC_WEAK_FUNC(sub_8306DDF8);
PPC_FUNC_IMPL(__imp__sub_8306DDF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,692
	ctx.r4.s64 = ctx.r11.s64 + 692;
	// bl 0x824215d0
	ctx.lr = 0x8306DE14;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3485(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3485, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DE30"))) PPC_WEAK_FUNC(sub_8306DE30);
PPC_FUNC_IMPL(__imp__sub_8306DE30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,696
	ctx.r4.s64 = ctx.r11.s64 + 696;
	// bl 0x824215d0
	ctx.lr = 0x8306DE4C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306DE68"))) PPC_WEAK_FUNC(sub_8306DE68);
PPC_FUNC_IMPL(__imp__sub_8306DE68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,700
	ctx.r4.s64 = ctx.r11.s64 + 700;
	// bl 0x824215d0
	ctx.lr = 0x8306DE84;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1439(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1439, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DEA0"))) PPC_WEAK_FUNC(sub_8306DEA0);
PPC_FUNC_IMPL(__imp__sub_8306DEA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,704
	ctx.r4.s64 = ctx.r11.s64 + 704;
	// bl 0x824215d0
	ctx.lr = 0x8306DEBC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,303(r11)
	PPC_STORE_U8(ctx.r11.u32 + 303, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DED8"))) PPC_WEAK_FUNC(sub_8306DED8);
PPC_FUNC_IMPL(__imp__sub_8306DED8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,708
	ctx.r4.s64 = ctx.r11.s64 + 708;
	// bl 0x824215d0
	ctx.lr = 0x8306DEF4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1707(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1707, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DF10"))) PPC_WEAK_FUNC(sub_8306DF10);
PPC_FUNC_IMPL(__imp__sub_8306DF10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,712
	ctx.r4.s64 = ctx.r11.s64 + 712;
	// bl 0x824215d0
	ctx.lr = 0x8306DF2C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306DF48"))) PPC_WEAK_FUNC(sub_8306DF48);
PPC_FUNC_IMPL(__imp__sub_8306DF48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,716
	ctx.r4.s64 = ctx.r11.s64 + 716;
	// bl 0x824215d0
	ctx.lr = 0x8306DF64;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1433(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1433, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DF80"))) PPC_WEAK_FUNC(sub_8306DF80);
PPC_FUNC_IMPL(__imp__sub_8306DF80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,720
	ctx.r4.s64 = ctx.r11.s64 + 720;
	// bl 0x824215d0
	ctx.lr = 0x8306DF9C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1015(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1015, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DFB8"))) PPC_WEAK_FUNC(sub_8306DFB8);
PPC_FUNC_IMPL(__imp__sub_8306DFB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,724
	ctx.r4.s64 = ctx.r11.s64 + 724;
	// bl 0x824215d0
	ctx.lr = 0x8306DFD4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3231, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DFF0"))) PPC_WEAK_FUNC(sub_8306DFF0);
PPC_FUNC_IMPL(__imp__sub_8306DFF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,728
	ctx.r4.s64 = ctx.r11.s64 + 728;
	// bl 0x824215d0
	ctx.lr = 0x8306E00C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,618(r11)
	PPC_STORE_U8(ctx.r11.u32 + 618, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E028"))) PPC_WEAK_FUNC(sub_8306E028);
PPC_FUNC_IMPL(__imp__sub_8306E028) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,732
	ctx.r4.s64 = ctx.r11.s64 + 732;
	// bl 0x824215d0
	ctx.lr = 0x8306E044;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1793(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1793, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E060"))) PPC_WEAK_FUNC(sub_8306E060);
PPC_FUNC_IMPL(__imp__sub_8306E060) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,736
	ctx.r4.s64 = ctx.r11.s64 + 736;
	// bl 0x824215d0
	ctx.lr = 0x8306E07C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306E098"))) PPC_WEAK_FUNC(sub_8306E098);
PPC_FUNC_IMPL(__imp__sub_8306E098) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,740
	ctx.r4.s64 = ctx.r11.s64 + 740;
	// bl 0x824215d0
	ctx.lr = 0x8306E0B4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1913(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1913, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E0D0"))) PPC_WEAK_FUNC(sub_8306E0D0);
PPC_FUNC_IMPL(__imp__sub_8306E0D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,744
	ctx.r4.s64 = ctx.r11.s64 + 744;
	// bl 0x824215d0
	ctx.lr = 0x8306E0EC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1214(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1214, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E108"))) PPC_WEAK_FUNC(sub_8306E108);
PPC_FUNC_IMPL(__imp__sub_8306E108) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,748
	ctx.r4.s64 = ctx.r11.s64 + 748;
	// bl 0x824215d0
	ctx.lr = 0x8306E124;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1926(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1926, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E140"))) PPC_WEAK_FUNC(sub_8306E140);
PPC_FUNC_IMPL(__imp__sub_8306E140) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,752
	ctx.r4.s64 = ctx.r11.s64 + 752;
	// bl 0x824215d0
	ctx.lr = 0x8306E15C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2236(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2236, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E178"))) PPC_WEAK_FUNC(sub_8306E178);
PPC_FUNC_IMPL(__imp__sub_8306E178) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,756
	ctx.r4.s64 = ctx.r11.s64 + 756;
	// bl 0x824215d0
	ctx.lr = 0x8306E194;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2080(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2080, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E1B0"))) PPC_WEAK_FUNC(sub_8306E1B0);
PPC_FUNC_IMPL(__imp__sub_8306E1B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,760
	ctx.r4.s64 = ctx.r11.s64 + 760;
	// bl 0x824215d0
	ctx.lr = 0x8306E1CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1605(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1605, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E1E8"))) PPC_WEAK_FUNC(sub_8306E1E8);
PPC_FUNC_IMPL(__imp__sub_8306E1E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,764
	ctx.r4.s64 = ctx.r11.s64 + 764;
	// bl 0x824215d0
	ctx.lr = 0x8306E204;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2985(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2985, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E220"))) PPC_WEAK_FUNC(sub_8306E220);
PPC_FUNC_IMPL(__imp__sub_8306E220) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,768
	ctx.r4.s64 = ctx.r11.s64 + 768;
	// bl 0x824215d0
	ctx.lr = 0x8306E23C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306E258"))) PPC_WEAK_FUNC(sub_8306E258);
PPC_FUNC_IMPL(__imp__sub_8306E258) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,772
	ctx.r4.s64 = ctx.r11.s64 + 772;
	// bl 0x824215d0
	ctx.lr = 0x8306E274;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1752(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1752, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E290"))) PPC_WEAK_FUNC(sub_8306E290);
PPC_FUNC_IMPL(__imp__sub_8306E290) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,776
	ctx.r4.s64 = ctx.r11.s64 + 776;
	// bl 0x824215d0
	ctx.lr = 0x8306E2AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306E2C8"))) PPC_WEAK_FUNC(sub_8306E2C8);
PPC_FUNC_IMPL(__imp__sub_8306E2C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,780
	ctx.r4.s64 = ctx.r11.s64 + 780;
	// bl 0x824215d0
	ctx.lr = 0x8306E2E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306E300"))) PPC_WEAK_FUNC(sub_8306E300);
PPC_FUNC_IMPL(__imp__sub_8306E300) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,784
	ctx.r4.s64 = ctx.r11.s64 + 784;
	// bl 0x824215d0
	ctx.lr = 0x8306E31C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1164(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1164, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E338"))) PPC_WEAK_FUNC(sub_8306E338);
PPC_FUNC_IMPL(__imp__sub_8306E338) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,788
	ctx.r4.s64 = ctx.r11.s64 + 788;
	// bl 0x824215d0
	ctx.lr = 0x8306E354;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1250(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1250, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E370"))) PPC_WEAK_FUNC(sub_8306E370);
PPC_FUNC_IMPL(__imp__sub_8306E370) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,792
	ctx.r4.s64 = ctx.r11.s64 + 792;
	// bl 0x824215d0
	ctx.lr = 0x8306E38C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306E3A8"))) PPC_WEAK_FUNC(sub_8306E3A8);
PPC_FUNC_IMPL(__imp__sub_8306E3A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,796
	ctx.r4.s64 = ctx.r11.s64 + 796;
	// bl 0x824215d0
	ctx.lr = 0x8306E3C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306E3E0"))) PPC_WEAK_FUNC(sub_8306E3E0);
PPC_FUNC_IMPL(__imp__sub_8306E3E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,800
	ctx.r4.s64 = ctx.r11.s64 + 800;
	// bl 0x824215d0
	ctx.lr = 0x8306E3FC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3535(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3535, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E418"))) PPC_WEAK_FUNC(sub_8306E418);
PPC_FUNC_IMPL(__imp__sub_8306E418) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,804
	ctx.r4.s64 = ctx.r11.s64 + 804;
	// bl 0x824215d0
	ctx.lr = 0x8306E434;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2585(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2585, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E450"))) PPC_WEAK_FUNC(sub_8306E450);
PPC_FUNC_IMPL(__imp__sub_8306E450) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x824215d0
	ctx.lr = 0x8306E46C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2605(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2605, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E488"))) PPC_WEAK_FUNC(sub_8306E488);
PPC_FUNC_IMPL(__imp__sub_8306E488) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,812
	ctx.r4.s64 = ctx.r11.s64 + 812;
	// bl 0x824215d0
	ctx.lr = 0x8306E4A4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2641(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2641, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E4C0"))) PPC_WEAK_FUNC(sub_8306E4C0);
PPC_FUNC_IMPL(__imp__sub_8306E4C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,816
	ctx.r4.s64 = ctx.r11.s64 + 816;
	// bl 0x824215d0
	ctx.lr = 0x8306E4DC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1576, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E4F8"))) PPC_WEAK_FUNC(sub_8306E4F8);
PPC_FUNC_IMPL(__imp__sub_8306E4F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,820
	ctx.r4.s64 = ctx.r11.s64 + 820;
	// bl 0x824215d0
	ctx.lr = 0x8306E514;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3438(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3438, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E530"))) PPC_WEAK_FUNC(sub_8306E530);
PPC_FUNC_IMPL(__imp__sub_8306E530) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,824
	ctx.r4.s64 = ctx.r11.s64 + 824;
	// bl 0x824215d0
	ctx.lr = 0x8306E54C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1885(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1885, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E568"))) PPC_WEAK_FUNC(sub_8306E568);
PPC_FUNC_IMPL(__imp__sub_8306E568) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,828
	ctx.r4.s64 = ctx.r11.s64 + 828;
	// bl 0x824215d0
	ctx.lr = 0x8306E584;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306E5A0"))) PPC_WEAK_FUNC(sub_8306E5A0);
PPC_FUNC_IMPL(__imp__sub_8306E5A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,832
	ctx.r4.s64 = ctx.r11.s64 + 832;
	// bl 0x824215d0
	ctx.lr = 0x8306E5BC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306E5D8"))) PPC_WEAK_FUNC(sub_8306E5D8);
PPC_FUNC_IMPL(__imp__sub_8306E5D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,836
	ctx.r4.s64 = ctx.r11.s64 + 836;
	// bl 0x824215d0
	ctx.lr = 0x8306E5F4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,191(r11)
	PPC_STORE_U8(ctx.r11.u32 + 191, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E610"))) PPC_WEAK_FUNC(sub_8306E610);
PPC_FUNC_IMPL(__imp__sub_8306E610) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,840
	ctx.r4.s64 = ctx.r11.s64 + 840;
	// bl 0x824215d0
	ctx.lr = 0x8306E62C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1366(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1366, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E648"))) PPC_WEAK_FUNC(sub_8306E648);
PPC_FUNC_IMPL(__imp__sub_8306E648) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,844
	ctx.r4.s64 = ctx.r11.s64 + 844;
	// bl 0x824215d0
	ctx.lr = 0x8306E664;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2511(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2511, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E680"))) PPC_WEAK_FUNC(sub_8306E680);
PPC_FUNC_IMPL(__imp__sub_8306E680) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,848
	ctx.r4.s64 = ctx.r11.s64 + 848;
	// bl 0x824215d0
	ctx.lr = 0x8306E69C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1606(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1606, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E6B8"))) PPC_WEAK_FUNC(sub_8306E6B8);
PPC_FUNC_IMPL(__imp__sub_8306E6B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,852
	ctx.r4.s64 = ctx.r11.s64 + 852;
	// bl 0x824215d0
	ctx.lr = 0x8306E6D4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3439(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3439, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E6F0"))) PPC_WEAK_FUNC(sub_8306E6F0);
PPC_FUNC_IMPL(__imp__sub_8306E6F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,856
	ctx.r4.s64 = ctx.r11.s64 + 856;
	// bl 0x824215d0
	ctx.lr = 0x8306E70C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-9(r11)
	PPC_STORE_U8(ctx.r11.u32 + -9, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E728"))) PPC_WEAK_FUNC(sub_8306E728);
PPC_FUNC_IMPL(__imp__sub_8306E728) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,860
	ctx.r4.s64 = ctx.r11.s64 + 860;
	// bl 0x824215d0
	ctx.lr = 0x8306E744;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2514(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2514, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E760"))) PPC_WEAK_FUNC(sub_8306E760);
PPC_FUNC_IMPL(__imp__sub_8306E760) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,864
	ctx.r4.s64 = ctx.r11.s64 + 864;
	// bl 0x824215d0
	ctx.lr = 0x8306E77C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306E798"))) PPC_WEAK_FUNC(sub_8306E798);
PPC_FUNC_IMPL(__imp__sub_8306E798) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,868
	ctx.r4.s64 = ctx.r11.s64 + 868;
	// bl 0x824215d0
	ctx.lr = 0x8306E7B4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,706(r11)
	PPC_STORE_U8(ctx.r11.u32 + 706, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E7D0"))) PPC_WEAK_FUNC(sub_8306E7D0);
PPC_FUNC_IMPL(__imp__sub_8306E7D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,872
	ctx.r4.s64 = ctx.r11.s64 + 872;
	// bl 0x824215d0
	ctx.lr = 0x8306E7EC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1460(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1460, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E808"))) PPC_WEAK_FUNC(sub_8306E808);
PPC_FUNC_IMPL(__imp__sub_8306E808) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,876
	ctx.r4.s64 = ctx.r11.s64 + 876;
	// bl 0x824215d0
	ctx.lr = 0x8306E824;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2299(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2299, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E840"))) PPC_WEAK_FUNC(sub_8306E840);
PPC_FUNC_IMPL(__imp__sub_8306E840) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,880
	ctx.r4.s64 = ctx.r11.s64 + 880;
	// bl 0x824215d0
	ctx.lr = 0x8306E85C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2053(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2053, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E878"))) PPC_WEAK_FUNC(sub_8306E878);
PPC_FUNC_IMPL(__imp__sub_8306E878) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,884
	ctx.r4.s64 = ctx.r11.s64 + 884;
	// bl 0x824215d0
	ctx.lr = 0x8306E894;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306E8B0"))) PPC_WEAK_FUNC(sub_8306E8B0);
PPC_FUNC_IMPL(__imp__sub_8306E8B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,888
	ctx.r4.s64 = ctx.r11.s64 + 888;
	// bl 0x824215d0
	ctx.lr = 0x8306E8CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1816(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1816, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E8E8"))) PPC_WEAK_FUNC(sub_8306E8E8);
PPC_FUNC_IMPL(__imp__sub_8306E8E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,892
	ctx.r4.s64 = ctx.r11.s64 + 892;
	// bl 0x824215d0
	ctx.lr = 0x8306E904;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,831(r11)
	PPC_STORE_U8(ctx.r11.u32 + 831, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E920"))) PPC_WEAK_FUNC(sub_8306E920);
PPC_FUNC_IMPL(__imp__sub_8306E920) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,896
	ctx.r4.s64 = ctx.r11.s64 + 896;
	// bl 0x824215d0
	ctx.lr = 0x8306E93C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306E958"))) PPC_WEAK_FUNC(sub_8306E958);
PPC_FUNC_IMPL(__imp__sub_8306E958) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,900
	ctx.r4.s64 = ctx.r11.s64 + 900;
	// bl 0x824215d0
	ctx.lr = 0x8306E974;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2022(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2022, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E990"))) PPC_WEAK_FUNC(sub_8306E990);
PPC_FUNC_IMPL(__imp__sub_8306E990) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,904
	ctx.r4.s64 = ctx.r11.s64 + 904;
	// bl 0x824215d0
	ctx.lr = 0x8306E9AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1228(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1228, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E9C8"))) PPC_WEAK_FUNC(sub_8306E9C8);
PPC_FUNC_IMPL(__imp__sub_8306E9C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,908
	ctx.r4.s64 = ctx.r11.s64 + 908;
	// bl 0x824215d0
	ctx.lr = 0x8306E9E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1003(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1003, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EA00"))) PPC_WEAK_FUNC(sub_8306EA00);
PPC_FUNC_IMPL(__imp__sub_8306EA00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,912
	ctx.r4.s64 = ctx.r11.s64 + 912;
	// bl 0x824215d0
	ctx.lr = 0x8306EA1C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2894(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2894, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EA38"))) PPC_WEAK_FUNC(sub_8306EA38);
PPC_FUNC_IMPL(__imp__sub_8306EA38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,916
	ctx.r4.s64 = ctx.r11.s64 + 916;
	// bl 0x824215d0
	ctx.lr = 0x8306EA54;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1848(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1848, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EA70"))) PPC_WEAK_FUNC(sub_8306EA70);
PPC_FUNC_IMPL(__imp__sub_8306EA70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,920
	ctx.r4.s64 = ctx.r11.s64 + 920;
	// bl 0x824215d0
	ctx.lr = 0x8306EA8C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,736(r11)
	PPC_STORE_U8(ctx.r11.u32 + 736, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EAA8"))) PPC_WEAK_FUNC(sub_8306EAA8);
PPC_FUNC_IMPL(__imp__sub_8306EAA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,924
	ctx.r4.s64 = ctx.r11.s64 + 924;
	// bl 0x824215d0
	ctx.lr = 0x8306EAC4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3013(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3013, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EAE0"))) PPC_WEAK_FUNC(sub_8306EAE0);
PPC_FUNC_IMPL(__imp__sub_8306EAE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,928
	ctx.r4.s64 = ctx.r11.s64 + 928;
	// bl 0x824215d0
	ctx.lr = 0x8306EAFC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306EB18"))) PPC_WEAK_FUNC(sub_8306EB18);
PPC_FUNC_IMPL(__imp__sub_8306EB18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,932
	ctx.r4.s64 = ctx.r11.s64 + 932;
	// bl 0x824215d0
	ctx.lr = 0x8306EB34;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2297(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2297, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EB50"))) PPC_WEAK_FUNC(sub_8306EB50);
PPC_FUNC_IMPL(__imp__sub_8306EB50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,936
	ctx.r4.s64 = ctx.r11.s64 + 936;
	// bl 0x824215d0
	ctx.lr = 0x8306EB6C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,716(r11)
	PPC_STORE_U8(ctx.r11.u32 + 716, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EB88"))) PPC_WEAK_FUNC(sub_8306EB88);
PPC_FUNC_IMPL(__imp__sub_8306EB88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,940
	ctx.r4.s64 = ctx.r11.s64 + 940;
	// bl 0x824215d0
	ctx.lr = 0x8306EBA4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1282(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1282, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EBC0"))) PPC_WEAK_FUNC(sub_8306EBC0);
PPC_FUNC_IMPL(__imp__sub_8306EBC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,944
	ctx.r4.s64 = ctx.r11.s64 + 944;
	// bl 0x824215d0
	ctx.lr = 0x8306EBDC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306EBF8"))) PPC_WEAK_FUNC(sub_8306EBF8);
PPC_FUNC_IMPL(__imp__sub_8306EBF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,948
	ctx.r4.s64 = ctx.r11.s64 + 948;
	// bl 0x824215d0
	ctx.lr = 0x8306EC14;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3398(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3398, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EC30"))) PPC_WEAK_FUNC(sub_8306EC30);
PPC_FUNC_IMPL(__imp__sub_8306EC30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,952
	ctx.r4.s64 = ctx.r11.s64 + 952;
	// bl 0x824215d0
	ctx.lr = 0x8306EC4C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EC68"))) PPC_WEAK_FUNC(sub_8306EC68);
PPC_FUNC_IMPL(__imp__sub_8306EC68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,956
	ctx.r4.s64 = ctx.r11.s64 + 956;
	// bl 0x824215d0
	ctx.lr = 0x8306EC84;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1433(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1433, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306ECA0"))) PPC_WEAK_FUNC(sub_8306ECA0);
PPC_FUNC_IMPL(__imp__sub_8306ECA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,960
	ctx.r4.s64 = ctx.r11.s64 + 960;
	// bl 0x824215d0
	ctx.lr = 0x8306ECBC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2020(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2020, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306ECD8"))) PPC_WEAK_FUNC(sub_8306ECD8);
PPC_FUNC_IMPL(__imp__sub_8306ECD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,964
	ctx.r4.s64 = ctx.r11.s64 + 964;
	// bl 0x824215d0
	ctx.lr = 0x8306ECF4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1284(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1284, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306ED10"))) PPC_WEAK_FUNC(sub_8306ED10);
PPC_FUNC_IMPL(__imp__sub_8306ED10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,968
	ctx.r4.s64 = ctx.r11.s64 + 968;
	// bl 0x824215d0
	ctx.lr = 0x8306ED2C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3057(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3057, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306ED48"))) PPC_WEAK_FUNC(sub_8306ED48);
PPC_FUNC_IMPL(__imp__sub_8306ED48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,972
	ctx.r4.s64 = ctx.r11.s64 + 972;
	// bl 0x824215d0
	ctx.lr = 0x8306ED64;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306ED80"))) PPC_WEAK_FUNC(sub_8306ED80);
PPC_FUNC_IMPL(__imp__sub_8306ED80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,976
	ctx.r4.s64 = ctx.r11.s64 + 976;
	// bl 0x824215d0
	ctx.lr = 0x8306ED9C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-583(r11)
	PPC_STORE_U8(ctx.r11.u32 + -583, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EDB8"))) PPC_WEAK_FUNC(sub_8306EDB8);
PPC_FUNC_IMPL(__imp__sub_8306EDB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,980
	ctx.r4.s64 = ctx.r11.s64 + 980;
	// bl 0x824215d0
	ctx.lr = 0x8306EDD4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1036(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1036, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EDF0"))) PPC_WEAK_FUNC(sub_8306EDF0);
PPC_FUNC_IMPL(__imp__sub_8306EDF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,984
	ctx.r4.s64 = ctx.r11.s64 + 984;
	// bl 0x824215d0
	ctx.lr = 0x8306EE0C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3204(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3204, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EE28"))) PPC_WEAK_FUNC(sub_8306EE28);
PPC_FUNC_IMPL(__imp__sub_8306EE28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,988
	ctx.r4.s64 = ctx.r11.s64 + 988;
	// bl 0x824215d0
	ctx.lr = 0x8306EE44;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1165(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1165, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EE60"))) PPC_WEAK_FUNC(sub_8306EE60);
PPC_FUNC_IMPL(__imp__sub_8306EE60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,992
	ctx.r4.s64 = ctx.r11.s64 + 992;
	// bl 0x824215d0
	ctx.lr = 0x8306EE7C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,587(r11)
	PPC_STORE_U8(ctx.r11.u32 + 587, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EE98"))) PPC_WEAK_FUNC(sub_8306EE98);
PPC_FUNC_IMPL(__imp__sub_8306EE98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,996
	ctx.r4.s64 = ctx.r11.s64 + 996;
	// bl 0x824215d0
	ctx.lr = 0x8306EEB4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306EED0"))) PPC_WEAK_FUNC(sub_8306EED0);
PPC_FUNC_IMPL(__imp__sub_8306EED0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1000
	ctx.r4.s64 = ctx.r11.s64 + 1000;
	// bl 0x824215d0
	ctx.lr = 0x8306EEEC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306EF08"))) PPC_WEAK_FUNC(sub_8306EF08);
PPC_FUNC_IMPL(__imp__sub_8306EF08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1004
	ctx.r4.s64 = ctx.r11.s64 + 1004;
	// bl 0x824215d0
	ctx.lr = 0x8306EF24;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3321(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3321, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EF40"))) PPC_WEAK_FUNC(sub_8306EF40);
PPC_FUNC_IMPL(__imp__sub_8306EF40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1008
	ctx.r4.s64 = ctx.r11.s64 + 1008;
	// bl 0x824215d0
	ctx.lr = 0x8306EF5C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-100(r11)
	PPC_STORE_U8(ctx.r11.u32 + -100, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EF78"))) PPC_WEAK_FUNC(sub_8306EF78);
PPC_FUNC_IMPL(__imp__sub_8306EF78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1012
	ctx.r4.s64 = ctx.r11.s64 + 1012;
	// bl 0x824215d0
	ctx.lr = 0x8306EF94;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-531(r11)
	PPC_STORE_U8(ctx.r11.u32 + -531, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EFB0"))) PPC_WEAK_FUNC(sub_8306EFB0);
PPC_FUNC_IMPL(__imp__sub_8306EFB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1016
	ctx.r4.s64 = ctx.r11.s64 + 1016;
	// bl 0x824215d0
	ctx.lr = 0x8306EFCC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306EFE8"))) PPC_WEAK_FUNC(sub_8306EFE8);
PPC_FUNC_IMPL(__imp__sub_8306EFE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1020
	ctx.r4.s64 = ctx.r11.s64 + 1020;
	// bl 0x824215d0
	ctx.lr = 0x8306F004;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-625(r11)
	PPC_STORE_U8(ctx.r11.u32 + -625, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F020"))) PPC_WEAK_FUNC(sub_8306F020);
PPC_FUNC_IMPL(__imp__sub_8306F020) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1024
	ctx.r4.s64 = ctx.r11.s64 + 1024;
	// bl 0x824215d0
	ctx.lr = 0x8306F03C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306F058"))) PPC_WEAK_FUNC(sub_8306F058);
PPC_FUNC_IMPL(__imp__sub_8306F058) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1028
	ctx.r4.s64 = ctx.r11.s64 + 1028;
	// bl 0x824215d0
	ctx.lr = 0x8306F074;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2908(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2908, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F090"))) PPC_WEAK_FUNC(sub_8306F090);
PPC_FUNC_IMPL(__imp__sub_8306F090) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1032
	ctx.r4.s64 = ctx.r11.s64 + 1032;
	// bl 0x824215d0
	ctx.lr = 0x8306F0AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-222(r11)
	PPC_STORE_U8(ctx.r11.u32 + -222, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F0C8"))) PPC_WEAK_FUNC(sub_8306F0C8);
PPC_FUNC_IMPL(__imp__sub_8306F0C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1036
	ctx.r4.s64 = ctx.r11.s64 + 1036;
	// bl 0x824215d0
	ctx.lr = 0x8306F0E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2560(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2560, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F100"))) PPC_WEAK_FUNC(sub_8306F100);
PPC_FUNC_IMPL(__imp__sub_8306F100) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1040
	ctx.r4.s64 = ctx.r11.s64 + 1040;
	// bl 0x824215d0
	ctx.lr = 0x8306F11C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-286(r11)
	PPC_STORE_U8(ctx.r11.u32 + -286, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F138"))) PPC_WEAK_FUNC(sub_8306F138);
PPC_FUNC_IMPL(__imp__sub_8306F138) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1044
	ctx.r4.s64 = ctx.r11.s64 + 1044;
	// bl 0x824215d0
	ctx.lr = 0x8306F154;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1969(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1969, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F170"))) PPC_WEAK_FUNC(sub_8306F170);
PPC_FUNC_IMPL(__imp__sub_8306F170) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1048
	ctx.r4.s64 = ctx.r11.s64 + 1048;
	// bl 0x824215d0
	ctx.lr = 0x8306F18C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1134(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1134, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F1A8"))) PPC_WEAK_FUNC(sub_8306F1A8);
PPC_FUNC_IMPL(__imp__sub_8306F1A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1052
	ctx.r4.s64 = ctx.r11.s64 + 1052;
	// bl 0x824215d0
	ctx.lr = 0x8306F1C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1722(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1722, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F1E0"))) PPC_WEAK_FUNC(sub_8306F1E0);
PPC_FUNC_IMPL(__imp__sub_8306F1E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1056
	ctx.r4.s64 = ctx.r11.s64 + 1056;
	// bl 0x824215d0
	ctx.lr = 0x8306F1FC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306F218"))) PPC_WEAK_FUNC(sub_8306F218);
PPC_FUNC_IMPL(__imp__sub_8306F218) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1060
	ctx.r4.s64 = ctx.r11.s64 + 1060;
	// bl 0x824215d0
	ctx.lr = 0x8306F234;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1866(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1866, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F250"))) PPC_WEAK_FUNC(sub_8306F250);
PPC_FUNC_IMPL(__imp__sub_8306F250) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1064
	ctx.r4.s64 = ctx.r11.s64 + 1064;
	// bl 0x824215d0
	ctx.lr = 0x8306F26C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2121(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2121, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F288"))) PPC_WEAK_FUNC(sub_8306F288);
PPC_FUNC_IMPL(__imp__sub_8306F288) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1068
	ctx.r4.s64 = ctx.r11.s64 + 1068;
	// bl 0x824215d0
	ctx.lr = 0x8306F2A4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1970(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1970, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F2C0"))) PPC_WEAK_FUNC(sub_8306F2C0);
PPC_FUNC_IMPL(__imp__sub_8306F2C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// bl 0x824215d0
	ctx.lr = 0x8306F2DC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1705(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1705, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F2F8"))) PPC_WEAK_FUNC(sub_8306F2F8);
PPC_FUNC_IMPL(__imp__sub_8306F2F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1076
	ctx.r4.s64 = ctx.r11.s64 + 1076;
	// bl 0x824215d0
	ctx.lr = 0x8306F314;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1233(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1233, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F330"))) PPC_WEAK_FUNC(sub_8306F330);
PPC_FUNC_IMPL(__imp__sub_8306F330) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1080
	ctx.r4.s64 = ctx.r11.s64 + 1080;
	// bl 0x824215d0
	ctx.lr = 0x8306F34C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1135(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1135, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F368"))) PPC_WEAK_FUNC(sub_8306F368);
PPC_FUNC_IMPL(__imp__sub_8306F368) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1084
	ctx.r4.s64 = ctx.r11.s64 + 1084;
	// bl 0x824215d0
	ctx.lr = 0x8306F384;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2286(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2286, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F3A0"))) PPC_WEAK_FUNC(sub_8306F3A0);
PPC_FUNC_IMPL(__imp__sub_8306F3A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1088
	ctx.r4.s64 = ctx.r11.s64 + 1088;
	// bl 0x824215d0
	ctx.lr = 0x8306F3BC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1847(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1847, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F3D8"))) PPC_WEAK_FUNC(sub_8306F3D8);
PPC_FUNC_IMPL(__imp__sub_8306F3D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1092
	ctx.r4.s64 = ctx.r11.s64 + 1092;
	// bl 0x824215d0
	ctx.lr = 0x8306F3F4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1888(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1888, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F410"))) PPC_WEAK_FUNC(sub_8306F410);
PPC_FUNC_IMPL(__imp__sub_8306F410) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1096
	ctx.r4.s64 = ctx.r11.s64 + 1096;
	// bl 0x824215d0
	ctx.lr = 0x8306F42C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-319(r11)
	PPC_STORE_U8(ctx.r11.u32 + -319, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F448"))) PPC_WEAK_FUNC(sub_8306F448);
PPC_FUNC_IMPL(__imp__sub_8306F448) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1100
	ctx.r4.s64 = ctx.r11.s64 + 1100;
	// bl 0x824215d0
	ctx.lr = 0x8306F464;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2449(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2449, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F480"))) PPC_WEAK_FUNC(sub_8306F480);
PPC_FUNC_IMPL(__imp__sub_8306F480) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1104
	ctx.r4.s64 = ctx.r11.s64 + 1104;
	// bl 0x824215d0
	ctx.lr = 0x8306F49C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306F4B8"))) PPC_WEAK_FUNC(sub_8306F4B8);
PPC_FUNC_IMPL(__imp__sub_8306F4B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1108
	ctx.r4.s64 = ctx.r11.s64 + 1108;
	// bl 0x824215d0
	ctx.lr = 0x8306F4D4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-830(r11)
	PPC_STORE_U8(ctx.r11.u32 + -830, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F4F0"))) PPC_WEAK_FUNC(sub_8306F4F0);
PPC_FUNC_IMPL(__imp__sub_8306F4F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1112
	ctx.r4.s64 = ctx.r11.s64 + 1112;
	// bl 0x824215d0
	ctx.lr = 0x8306F50C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306F528"))) PPC_WEAK_FUNC(sub_8306F528);
PPC_FUNC_IMPL(__imp__sub_8306F528) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1116
	ctx.r4.s64 = ctx.r11.s64 + 1116;
	// bl 0x824215d0
	ctx.lr = 0x8306F544;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1477(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1477, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F560"))) PPC_WEAK_FUNC(sub_8306F560);
PPC_FUNC_IMPL(__imp__sub_8306F560) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1120
	ctx.r4.s64 = ctx.r11.s64 + 1120;
	// bl 0x824215d0
	ctx.lr = 0x8306F57C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1310(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1310, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F598"))) PPC_WEAK_FUNC(sub_8306F598);
PPC_FUNC_IMPL(__imp__sub_8306F598) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1124
	ctx.r4.s64 = ctx.r11.s64 + 1124;
	// bl 0x824215d0
	ctx.lr = 0x8306F5B4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306F5D0"))) PPC_WEAK_FUNC(sub_8306F5D0);
PPC_FUNC_IMPL(__imp__sub_8306F5D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1128
	ctx.r4.s64 = ctx.r11.s64 + 1128;
	// bl 0x824215d0
	ctx.lr = 0x8306F5EC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-714(r11)
	PPC_STORE_U8(ctx.r11.u32 + -714, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F608"))) PPC_WEAK_FUNC(sub_8306F608);
PPC_FUNC_IMPL(__imp__sub_8306F608) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1132
	ctx.r4.s64 = ctx.r11.s64 + 1132;
	// bl 0x824215d0
	ctx.lr = 0x8306F624;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1642(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1642, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F640"))) PPC_WEAK_FUNC(sub_8306F640);
PPC_FUNC_IMPL(__imp__sub_8306F640) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1136
	ctx.r4.s64 = ctx.r11.s64 + 1136;
	// bl 0x824215d0
	ctx.lr = 0x8306F65C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306F678"))) PPC_WEAK_FUNC(sub_8306F678);
PPC_FUNC_IMPL(__imp__sub_8306F678) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1140
	ctx.r4.s64 = ctx.r11.s64 + 1140;
	// bl 0x824215d0
	ctx.lr = 0x8306F694;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1604(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1604, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F6B0"))) PPC_WEAK_FUNC(sub_8306F6B0);
PPC_FUNC_IMPL(__imp__sub_8306F6B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1144
	ctx.r4.s64 = ctx.r11.s64 + 1144;
	// bl 0x824215d0
	ctx.lr = 0x8306F6CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306F6E8"))) PPC_WEAK_FUNC(sub_8306F6E8);
PPC_FUNC_IMPL(__imp__sub_8306F6E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1148
	ctx.r4.s64 = ctx.r11.s64 + 1148;
	// bl 0x824215d0
	ctx.lr = 0x8306F704;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-765(r11)
	PPC_STORE_U8(ctx.r11.u32 + -765, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F720"))) PPC_WEAK_FUNC(sub_8306F720);
PPC_FUNC_IMPL(__imp__sub_8306F720) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1152
	ctx.r4.s64 = ctx.r11.s64 + 1152;
	// bl 0x824215d0
	ctx.lr = 0x8306F73C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1967(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1967, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F758"))) PPC_WEAK_FUNC(sub_8306F758);
PPC_FUNC_IMPL(__imp__sub_8306F758) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1156
	ctx.r4.s64 = ctx.r11.s64 + 1156;
	// bl 0x824215d0
	ctx.lr = 0x8306F774;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,972(r11)
	PPC_STORE_U8(ctx.r11.u32 + 972, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F790"))) PPC_WEAK_FUNC(sub_8306F790);
PPC_FUNC_IMPL(__imp__sub_8306F790) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1160
	ctx.r4.s64 = ctx.r11.s64 + 1160;
	// bl 0x824215d0
	ctx.lr = 0x8306F7AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306F7C8"))) PPC_WEAK_FUNC(sub_8306F7C8);
PPC_FUNC_IMPL(__imp__sub_8306F7C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1164
	ctx.r4.s64 = ctx.r11.s64 + 1164;
	// bl 0x824215d0
	ctx.lr = 0x8306F7E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2376(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2376, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F800"))) PPC_WEAK_FUNC(sub_8306F800);
PPC_FUNC_IMPL(__imp__sub_8306F800) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1168
	ctx.r4.s64 = ctx.r11.s64 + 1168;
	// bl 0x824215d0
	ctx.lr = 0x8306F81C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1849(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1849, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F838"))) PPC_WEAK_FUNC(sub_8306F838);
PPC_FUNC_IMPL(__imp__sub_8306F838) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1172
	ctx.r4.s64 = ctx.r11.s64 + 1172;
	// bl 0x824215d0
	ctx.lr = 0x8306F854;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2994(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2994, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F870"))) PPC_WEAK_FUNC(sub_8306F870);
PPC_FUNC_IMPL(__imp__sub_8306F870) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1176
	ctx.r4.s64 = ctx.r11.s64 + 1176;
	// bl 0x824215d0
	ctx.lr = 0x8306F88C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2450(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2450, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F8A8"))) PPC_WEAK_FUNC(sub_8306F8A8);
PPC_FUNC_IMPL(__imp__sub_8306F8A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1180
	ctx.r4.s64 = ctx.r11.s64 + 1180;
	// bl 0x824215d0
	ctx.lr = 0x8306F8C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2666(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2666, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F8E0"))) PPC_WEAK_FUNC(sub_8306F8E0);
PPC_FUNC_IMPL(__imp__sub_8306F8E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1184
	ctx.r4.s64 = ctx.r11.s64 + 1184;
	// bl 0x824215d0
	ctx.lr = 0x8306F8FC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3205, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F918"))) PPC_WEAK_FUNC(sub_8306F918);
PPC_FUNC_IMPL(__imp__sub_8306F918) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1188
	ctx.r4.s64 = ctx.r11.s64 + 1188;
	// bl 0x824215d0
	ctx.lr = 0x8306F934;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1246(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1246, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F950"))) PPC_WEAK_FUNC(sub_8306F950);
PPC_FUNC_IMPL(__imp__sub_8306F950) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1192
	ctx.r4.s64 = ctx.r11.s64 + 1192;
	// bl 0x824215d0
	ctx.lr = 0x8306F96C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-456(r11)
	PPC_STORE_U8(ctx.r11.u32 + -456, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F988"))) PPC_WEAK_FUNC(sub_8306F988);
PPC_FUNC_IMPL(__imp__sub_8306F988) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1196
	ctx.r4.s64 = ctx.r11.s64 + 1196;
	// bl 0x824215d0
	ctx.lr = 0x8306F9A4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306F9C0"))) PPC_WEAK_FUNC(sub_8306F9C0);
PPC_FUNC_IMPL(__imp__sub_8306F9C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1200
	ctx.r4.s64 = ctx.r11.s64 + 1200;
	// bl 0x824215d0
	ctx.lr = 0x8306F9DC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1225(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1225, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F9F8"))) PPC_WEAK_FUNC(sub_8306F9F8);
PPC_FUNC_IMPL(__imp__sub_8306F9F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1204
	ctx.r4.s64 = ctx.r11.s64 + 1204;
	// bl 0x824215d0
	ctx.lr = 0x8306FA14;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3229(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3229, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FA30"))) PPC_WEAK_FUNC(sub_8306FA30);
PPC_FUNC_IMPL(__imp__sub_8306FA30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1208
	ctx.r4.s64 = ctx.r11.s64 + 1208;
	// bl 0x824215d0
	ctx.lr = 0x8306FA4C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306FA68"))) PPC_WEAK_FUNC(sub_8306FA68);
PPC_FUNC_IMPL(__imp__sub_8306FA68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1212
	ctx.r4.s64 = ctx.r11.s64 + 1212;
	// bl 0x824215d0
	ctx.lr = 0x8306FA84;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1905(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1905, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FAA0"))) PPC_WEAK_FUNC(sub_8306FAA0);
PPC_FUNC_IMPL(__imp__sub_8306FAA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1216
	ctx.r4.s64 = ctx.r11.s64 + 1216;
	// bl 0x824215d0
	ctx.lr = 0x8306FABC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FAD8"))) PPC_WEAK_FUNC(sub_8306FAD8);
PPC_FUNC_IMPL(__imp__sub_8306FAD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1220
	ctx.r4.s64 = ctx.r11.s64 + 1220;
	// bl 0x824215d0
	ctx.lr = 0x8306FAF4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306FB10"))) PPC_WEAK_FUNC(sub_8306FB10);
PPC_FUNC_IMPL(__imp__sub_8306FB10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1224
	ctx.r4.s64 = ctx.r11.s64 + 1224;
	// bl 0x824215d0
	ctx.lr = 0x8306FB2C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FB48"))) PPC_WEAK_FUNC(sub_8306FB48);
PPC_FUNC_IMPL(__imp__sub_8306FB48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1228
	ctx.r4.s64 = ctx.r11.s64 + 1228;
	// bl 0x824215d0
	ctx.lr = 0x8306FB64;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1136, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FB80"))) PPC_WEAK_FUNC(sub_8306FB80);
PPC_FUNC_IMPL(__imp__sub_8306FB80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1232
	ctx.r4.s64 = ctx.r11.s64 + 1232;
	// bl 0x824215d0
	ctx.lr = 0x8306FB9C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1561(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1561, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FBB8"))) PPC_WEAK_FUNC(sub_8306FBB8);
PPC_FUNC_IMPL(__imp__sub_8306FBB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1236
	ctx.r4.s64 = ctx.r11.s64 + 1236;
	// bl 0x824215d0
	ctx.lr = 0x8306FBD4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1828(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1828, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FBF0"))) PPC_WEAK_FUNC(sub_8306FBF0);
PPC_FUNC_IMPL(__imp__sub_8306FBF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1240
	ctx.r4.s64 = ctx.r11.s64 + 1240;
	// bl 0x824215d0
	ctx.lr = 0x8306FC0C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1000(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1000, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FC28"))) PPC_WEAK_FUNC(sub_8306FC28);
PPC_FUNC_IMPL(__imp__sub_8306FC28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1244
	ctx.r4.s64 = ctx.r11.s64 + 1244;
	// bl 0x824215d0
	ctx.lr = 0x8306FC44;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,489(r11)
	PPC_STORE_U8(ctx.r11.u32 + 489, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FC60"))) PPC_WEAK_FUNC(sub_8306FC60);
PPC_FUNC_IMPL(__imp__sub_8306FC60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1248
	ctx.r4.s64 = ctx.r11.s64 + 1248;
	// bl 0x824215d0
	ctx.lr = 0x8306FC7C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1865(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1865, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FC98"))) PPC_WEAK_FUNC(sub_8306FC98);
PPC_FUNC_IMPL(__imp__sub_8306FC98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1252
	ctx.r4.s64 = ctx.r11.s64 + 1252;
	// bl 0x824215d0
	ctx.lr = 0x8306FCB4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306FCD0"))) PPC_WEAK_FUNC(sub_8306FCD0);
PPC_FUNC_IMPL(__imp__sub_8306FCD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1256
	ctx.r4.s64 = ctx.r11.s64 + 1256;
	// bl 0x824215d0
	ctx.lr = 0x8306FCEC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2008(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2008, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FD08"))) PPC_WEAK_FUNC(sub_8306FD08);
PPC_FUNC_IMPL(__imp__sub_8306FD08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1260
	ctx.r4.s64 = ctx.r11.s64 + 1260;
	// bl 0x824215d0
	ctx.lr = 0x8306FD24;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-994(r11)
	PPC_STORE_U8(ctx.r11.u32 + -994, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FD40"))) PPC_WEAK_FUNC(sub_8306FD40);
PPC_FUNC_IMPL(__imp__sub_8306FD40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1264
	ctx.r4.s64 = ctx.r11.s64 + 1264;
	// bl 0x824215d0
	ctx.lr = 0x8306FD5C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1302(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1302, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FD78"))) PPC_WEAK_FUNC(sub_8306FD78);
PPC_FUNC_IMPL(__imp__sub_8306FD78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1268
	ctx.r4.s64 = ctx.r11.s64 + 1268;
	// bl 0x824215d0
	ctx.lr = 0x8306FD94;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2532(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2532, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FDB0"))) PPC_WEAK_FUNC(sub_8306FDB0);
PPC_FUNC_IMPL(__imp__sub_8306FDB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1272
	ctx.r4.s64 = ctx.r11.s64 + 1272;
	// bl 0x824215d0
	ctx.lr = 0x8306FDCC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1299(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1299, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FDE8"))) PPC_WEAK_FUNC(sub_8306FDE8);
PPC_FUNC_IMPL(__imp__sub_8306FDE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1276
	ctx.r4.s64 = ctx.r11.s64 + 1276;
	// bl 0x824215d0
	ctx.lr = 0x8306FE04;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2182(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2182, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FE20"))) PPC_WEAK_FUNC(sub_8306FE20);
PPC_FUNC_IMPL(__imp__sub_8306FE20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1280
	ctx.r4.s64 = ctx.r11.s64 + 1280;
	// bl 0x824215d0
	ctx.lr = 0x8306FE3C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1348(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1348, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FE58"))) PPC_WEAK_FUNC(sub_8306FE58);
PPC_FUNC_IMPL(__imp__sub_8306FE58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1284
	ctx.r4.s64 = ctx.r11.s64 + 1284;
	// bl 0x824215d0
	ctx.lr = 0x8306FE74;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,263(r11)
	PPC_STORE_U8(ctx.r11.u32 + 263, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FE90"))) PPC_WEAK_FUNC(sub_8306FE90);
PPC_FUNC_IMPL(__imp__sub_8306FE90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1288
	ctx.r4.s64 = ctx.r11.s64 + 1288;
	// bl 0x824215d0
	ctx.lr = 0x8306FEAC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1817(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1817, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FEC8"))) PPC_WEAK_FUNC(sub_8306FEC8);
PPC_FUNC_IMPL(__imp__sub_8306FEC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1292
	ctx.r4.s64 = ctx.r11.s64 + 1292;
	// bl 0x824215d0
	ctx.lr = 0x8306FEE4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_8306FF00"))) PPC_WEAK_FUNC(sub_8306FF00);
PPC_FUNC_IMPL(__imp__sub_8306FF00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1296
	ctx.r4.s64 = ctx.r11.s64 + 1296;
	// bl 0x824215d0
	ctx.lr = 0x8306FF1C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2455(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2455, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FF38"))) PPC_WEAK_FUNC(sub_8306FF38);
PPC_FUNC_IMPL(__imp__sub_8306FF38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1300
	ctx.r4.s64 = ctx.r11.s64 + 1300;
	// bl 0x824215d0
	ctx.lr = 0x8306FF54;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2378(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2378, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FF70"))) PPC_WEAK_FUNC(sub_8306FF70);
PPC_FUNC_IMPL(__imp__sub_8306FF70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1304
	ctx.r4.s64 = ctx.r11.s64 + 1304;
	// bl 0x824215d0
	ctx.lr = 0x8306FF8C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2910(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2910, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FFA8"))) PPC_WEAK_FUNC(sub_8306FFA8);
PPC_FUNC_IMPL(__imp__sub_8306FFA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1308
	ctx.r4.s64 = ctx.r11.s64 + 1308;
	// bl 0x824215d0
	ctx.lr = 0x8306FFC4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1176, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FFE0"))) PPC_WEAK_FUNC(sub_8306FFE0);
PPC_FUNC_IMPL(__imp__sub_8306FFE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1312
	ctx.r4.s64 = ctx.r11.s64 + 1312;
	// bl 0x824215d0
	ctx.lr = 0x8306FFFC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1437(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1437, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070018"))) PPC_WEAK_FUNC(sub_83070018);
PPC_FUNC_IMPL(__imp__sub_83070018) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1316
	ctx.r4.s64 = ctx.r11.s64 + 1316;
	// bl 0x824215d0
	ctx.lr = 0x83070034;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070050"))) PPC_WEAK_FUNC(sub_83070050);
PPC_FUNC_IMPL(__imp__sub_83070050) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1320
	ctx.r4.s64 = ctx.r11.s64 + 1320;
	// bl 0x824215d0
	ctx.lr = 0x8307006C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1226(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1226, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070088"))) PPC_WEAK_FUNC(sub_83070088);
PPC_FUNC_IMPL(__imp__sub_83070088) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1324
	ctx.r4.s64 = ctx.r11.s64 + 1324;
	// bl 0x824215d0
	ctx.lr = 0x830700A4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2667(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2667, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830700C0"))) PPC_WEAK_FUNC(sub_830700C0);
PPC_FUNC_IMPL(__imp__sub_830700C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1328
	ctx.r4.s64 = ctx.r11.s64 + 1328;
	// bl 0x824215d0
	ctx.lr = 0x830700DC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830700F8"))) PPC_WEAK_FUNC(sub_830700F8);
PPC_FUNC_IMPL(__imp__sub_830700F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1332
	ctx.r4.s64 = ctx.r11.s64 + 1332;
	// bl 0x824215d0
	ctx.lr = 0x83070114;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3399(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3399, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070130"))) PPC_WEAK_FUNC(sub_83070130);
PPC_FUNC_IMPL(__imp__sub_83070130) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1336
	ctx.r4.s64 = ctx.r11.s64 + 1336;
	// bl 0x824215d0
	ctx.lr = 0x8307014C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2588(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2588, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070168"))) PPC_WEAK_FUNC(sub_83070168);
PPC_FUNC_IMPL(__imp__sub_83070168) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1340
	ctx.r4.s64 = ctx.r11.s64 + 1340;
	// bl 0x824215d0
	ctx.lr = 0x83070184;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830701A0"))) PPC_WEAK_FUNC(sub_830701A0);
PPC_FUNC_IMPL(__imp__sub_830701A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1344
	ctx.r4.s64 = ctx.r11.s64 + 1344;
	// bl 0x824215d0
	ctx.lr = 0x830701BC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1404(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1404, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830701D8"))) PPC_WEAK_FUNC(sub_830701D8);
PPC_FUNC_IMPL(__imp__sub_830701D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1348
	ctx.r4.s64 = ctx.r11.s64 + 1348;
	// bl 0x824215d0
	ctx.lr = 0x830701F4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1806(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1806, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070210"))) PPC_WEAK_FUNC(sub_83070210);
PPC_FUNC_IMPL(__imp__sub_83070210) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1352
	ctx.r4.s64 = ctx.r11.s64 + 1352;
	// bl 0x824215d0
	ctx.lr = 0x8307022C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2923(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2923, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070248"))) PPC_WEAK_FUNC(sub_83070248);
PPC_FUNC_IMPL(__imp__sub_83070248) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1356
	ctx.r4.s64 = ctx.r11.s64 + 1356;
	// bl 0x824215d0
	ctx.lr = 0x83070264;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070280"))) PPC_WEAK_FUNC(sub_83070280);
PPC_FUNC_IMPL(__imp__sub_83070280) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1360
	ctx.r4.s64 = ctx.r11.s64 + 1360;
	// bl 0x824215d0
	ctx.lr = 0x8307029C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830702B8"))) PPC_WEAK_FUNC(sub_830702B8);
PPC_FUNC_IMPL(__imp__sub_830702B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1364
	ctx.r4.s64 = ctx.r11.s64 + 1364;
	// bl 0x824215d0
	ctx.lr = 0x830702D4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830702F0"))) PPC_WEAK_FUNC(sub_830702F0);
PPC_FUNC_IMPL(__imp__sub_830702F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1368
	ctx.r4.s64 = ctx.r11.s64 + 1368;
	// bl 0x824215d0
	ctx.lr = 0x8307030C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070328"))) PPC_WEAK_FUNC(sub_83070328);
PPC_FUNC_IMPL(__imp__sub_83070328) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1372
	ctx.r4.s64 = ctx.r11.s64 + 1372;
	// bl 0x824215d0
	ctx.lr = 0x83070344;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070360"))) PPC_WEAK_FUNC(sub_83070360);
PPC_FUNC_IMPL(__imp__sub_83070360) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1376
	ctx.r4.s64 = ctx.r11.s64 + 1376;
	// bl 0x824215d0
	ctx.lr = 0x8307037C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-648(r11)
	PPC_STORE_U8(ctx.r11.u32 + -648, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070398"))) PPC_WEAK_FUNC(sub_83070398);
PPC_FUNC_IMPL(__imp__sub_83070398) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1380
	ctx.r4.s64 = ctx.r11.s64 + 1380;
	// bl 0x824215d0
	ctx.lr = 0x830703B4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2402(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2402, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830703D0"))) PPC_WEAK_FUNC(sub_830703D0);
PPC_FUNC_IMPL(__imp__sub_830703D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1384
	ctx.r4.s64 = ctx.r11.s64 + 1384;
	// bl 0x824215d0
	ctx.lr = 0x830703EC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070408"))) PPC_WEAK_FUNC(sub_83070408);
PPC_FUNC_IMPL(__imp__sub_83070408) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1388
	ctx.r4.s64 = ctx.r11.s64 + 1388;
	// bl 0x824215d0
	ctx.lr = 0x83070424;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1506(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1506, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070440"))) PPC_WEAK_FUNC(sub_83070440);
PPC_FUNC_IMPL(__imp__sub_83070440) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1392
	ctx.r4.s64 = ctx.r11.s64 + 1392;
	// bl 0x824215d0
	ctx.lr = 0x8307045C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,550(r11)
	PPC_STORE_U8(ctx.r11.u32 + 550, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070478"))) PPC_WEAK_FUNC(sub_83070478);
PPC_FUNC_IMPL(__imp__sub_83070478) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1396
	ctx.r4.s64 = ctx.r11.s64 + 1396;
	// bl 0x824215d0
	ctx.lr = 0x83070494;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1347(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1347, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830704B0"))) PPC_WEAK_FUNC(sub_830704B0);
PPC_FUNC_IMPL(__imp__sub_830704B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1400
	ctx.r4.s64 = ctx.r11.s64 + 1400;
	// bl 0x824215d0
	ctx.lr = 0x830704CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1035(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1035, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830704E8"))) PPC_WEAK_FUNC(sub_830704E8);
PPC_FUNC_IMPL(__imp__sub_830704E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1404
	ctx.r4.s64 = ctx.r11.s64 + 1404;
	// bl 0x824215d0
	ctx.lr = 0x83070504;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1505(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1505, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070520"))) PPC_WEAK_FUNC(sub_83070520);
PPC_FUNC_IMPL(__imp__sub_83070520) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1408
	ctx.r4.s64 = ctx.r11.s64 + 1408;
	// bl 0x824215d0
	ctx.lr = 0x8307053C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070558"))) PPC_WEAK_FUNC(sub_83070558);
PPC_FUNC_IMPL(__imp__sub_83070558) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1412
	ctx.r4.s64 = ctx.r11.s64 + 1412;
	// bl 0x824215d0
	ctx.lr = 0x83070574;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2895(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2895, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070590"))) PPC_WEAK_FUNC(sub_83070590);
PPC_FUNC_IMPL(__imp__sub_83070590) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1416
	ctx.r4.s64 = ctx.r11.s64 + 1416;
	// bl 0x824215d0
	ctx.lr = 0x830705AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-221(r11)
	PPC_STORE_U8(ctx.r11.u32 + -221, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830705C8"))) PPC_WEAK_FUNC(sub_830705C8);
PPC_FUNC_IMPL(__imp__sub_830705C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1420
	ctx.r4.s64 = ctx.r11.s64 + 1420;
	// bl 0x824215d0
	ctx.lr = 0x830705E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070600"))) PPC_WEAK_FUNC(sub_83070600);
PPC_FUNC_IMPL(__imp__sub_83070600) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1424
	ctx.r4.s64 = ctx.r11.s64 + 1424;
	// bl 0x824215d0
	ctx.lr = 0x8307061C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070638"))) PPC_WEAK_FUNC(sub_83070638);
PPC_FUNC_IMPL(__imp__sub_83070638) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1428
	ctx.r4.s64 = ctx.r11.s64 + 1428;
	// bl 0x824215d0
	ctx.lr = 0x83070654;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1641(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1641, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070670"))) PPC_WEAK_FUNC(sub_83070670);
PPC_FUNC_IMPL(__imp__sub_83070670) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1432
	ctx.r4.s64 = ctx.r11.s64 + 1432;
	// bl 0x824215d0
	ctx.lr = 0x8307068C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1230(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1230, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830706A8"))) PPC_WEAK_FUNC(sub_830706A8);
PPC_FUNC_IMPL(__imp__sub_830706A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1436
	ctx.r4.s64 = ctx.r11.s64 + 1436;
	// bl 0x824215d0
	ctx.lr = 0x830706C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2642(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2642, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830706E0"))) PPC_WEAK_FUNC(sub_830706E0);
PPC_FUNC_IMPL(__imp__sub_830706E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1440
	ctx.r4.s64 = ctx.r11.s64 + 1440;
	// bl 0x824215d0
	ctx.lr = 0x830706FC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2513(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2513, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070718"))) PPC_WEAK_FUNC(sub_83070718);
PPC_FUNC_IMPL(__imp__sub_83070718) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1444
	ctx.r4.s64 = ctx.r11.s64 + 1444;
	// bl 0x824215d0
	ctx.lr = 0x83070734;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3365(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3365, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070750"))) PPC_WEAK_FUNC(sub_83070750);
PPC_FUNC_IMPL(__imp__sub_83070750) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1448
	ctx.r4.s64 = ctx.r11.s64 + 1448;
	// bl 0x824215d0
	ctx.lr = 0x8307076C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-584(r11)
	PPC_STORE_U8(ctx.r11.u32 + -584, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070788"))) PPC_WEAK_FUNC(sub_83070788);
PPC_FUNC_IMPL(__imp__sub_83070788) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1452
	ctx.r4.s64 = ctx.r11.s64 + 1452;
	// bl 0x824215d0
	ctx.lr = 0x830707A4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2253(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2253, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830707C0"))) PPC_WEAK_FUNC(sub_830707C0);
PPC_FUNC_IMPL(__imp__sub_830707C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1456
	ctx.r4.s64 = ctx.r11.s64 + 1456;
	// bl 0x824215d0
	ctx.lr = 0x830707DC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830707F8"))) PPC_WEAK_FUNC(sub_830707F8);
PPC_FUNC_IMPL(__imp__sub_830707F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1460
	ctx.r4.s64 = ctx.r11.s64 + 1460;
	// bl 0x824215d0
	ctx.lr = 0x83070814;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1927(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1927, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070830"))) PPC_WEAK_FUNC(sub_83070830);
PPC_FUNC_IMPL(__imp__sub_83070830) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1464
	ctx.r4.s64 = ctx.r11.s64 + 1464;
	// bl 0x824215d0
	ctx.lr = 0x8307084C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2123(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2123, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070868"))) PPC_WEAK_FUNC(sub_83070868);
PPC_FUNC_IMPL(__imp__sub_83070868) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1468
	ctx.r4.s64 = ctx.r11.s64 + 1468;
	// bl 0x824215d0
	ctx.lr = 0x83070884;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2166(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2166, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830708A0"))) PPC_WEAK_FUNC(sub_830708A0);
PPC_FUNC_IMPL(__imp__sub_830708A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1472
	ctx.r4.s64 = ctx.r11.s64 + 1472;
	// bl 0x824215d0
	ctx.lr = 0x830708BC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1052(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1052, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830708D8"))) PPC_WEAK_FUNC(sub_830708D8);
PPC_FUNC_IMPL(__imp__sub_830708D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1476
	ctx.r4.s64 = ctx.r11.s64 + 1476;
	// bl 0x824215d0
	ctx.lr = 0x830708F4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070910"))) PPC_WEAK_FUNC(sub_83070910);
PPC_FUNC_IMPL(__imp__sub_83070910) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1480
	ctx.r4.s64 = ctx.r11.s64 + 1480;
	// bl 0x824215d0
	ctx.lr = 0x8307092C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2264(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2264, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070948"))) PPC_WEAK_FUNC(sub_83070948);
PPC_FUNC_IMPL(__imp__sub_83070948) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1484
	ctx.r4.s64 = ctx.r11.s64 + 1484;
	// bl 0x824215d0
	ctx.lr = 0x83070964;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3322(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3322, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070980"))) PPC_WEAK_FUNC(sub_83070980);
PPC_FUNC_IMPL(__imp__sub_83070980) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1488
	ctx.r4.s64 = ctx.r11.s64 + 1488;
	// bl 0x824215d0
	ctx.lr = 0x8307099C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2390(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2390, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830709B8"))) PPC_WEAK_FUNC(sub_830709B8);
PPC_FUNC_IMPL(__imp__sub_830709B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1492
	ctx.r4.s64 = ctx.r11.s64 + 1492;
	// bl 0x824215d0
	ctx.lr = 0x830709D4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830709F0"))) PPC_WEAK_FUNC(sub_830709F0);
PPC_FUNC_IMPL(__imp__sub_830709F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1496
	ctx.r4.s64 = ctx.r11.s64 + 1496;
	// bl 0x824215d0
	ctx.lr = 0x83070A0C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1271(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1271, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070A28"))) PPC_WEAK_FUNC(sub_83070A28);
PPC_FUNC_IMPL(__imp__sub_83070A28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1500
	ctx.r4.s64 = ctx.r11.s64 + 1500;
	// bl 0x824215d0
	ctx.lr = 0x83070A44;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2992(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2992, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070A60"))) PPC_WEAK_FUNC(sub_83070A60);
PPC_FUNC_IMPL(__imp__sub_83070A60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1504
	ctx.r4.s64 = ctx.r11.s64 + 1504;
	// bl 0x824215d0
	ctx.lr = 0x83070A7C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3125(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3125, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070A98"))) PPC_WEAK_FUNC(sub_83070A98);
PPC_FUNC_IMPL(__imp__sub_83070A98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1508
	ctx.r4.s64 = ctx.r11.s64 + 1508;
	// bl 0x824215d0
	ctx.lr = 0x83070AB4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3449(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3449, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070AD0"))) PPC_WEAK_FUNC(sub_83070AD0);
PPC_FUNC_IMPL(__imp__sub_83070AD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1512
	ctx.r4.s64 = ctx.r11.s64 + 1512;
	// bl 0x824215d0
	ctx.lr = 0x83070AEC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2995(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2995, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070B08"))) PPC_WEAK_FUNC(sub_83070B08);
PPC_FUNC_IMPL(__imp__sub_83070B08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1516
	ctx.r4.s64 = ctx.r11.s64 + 1516;
	// bl 0x824215d0
	ctx.lr = 0x83070B24;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2841(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2841, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070B40"))) PPC_WEAK_FUNC(sub_83070B40);
PPC_FUNC_IMPL(__imp__sub_83070B40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1520
	ctx.r4.s64 = ctx.r11.s64 + 1520;
	// bl 0x824215d0
	ctx.lr = 0x83070B5C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070B78"))) PPC_WEAK_FUNC(sub_83070B78);
PPC_FUNC_IMPL(__imp__sub_83070B78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1524
	ctx.r4.s64 = ctx.r11.s64 + 1524;
	// bl 0x824215d0
	ctx.lr = 0x83070B94;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-581(r11)
	PPC_STORE_U8(ctx.r11.u32 + -581, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070BB0"))) PPC_WEAK_FUNC(sub_83070BB0);
PPC_FUNC_IMPL(__imp__sub_83070BB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1528
	ctx.r4.s64 = ctx.r11.s64 + 1528;
	// bl 0x824215d0
	ctx.lr = 0x83070BCC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-369(r11)
	PPC_STORE_U8(ctx.r11.u32 + -369, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070BE8"))) PPC_WEAK_FUNC(sub_83070BE8);
PPC_FUNC_IMPL(__imp__sub_83070BE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1532
	ctx.r4.s64 = ctx.r11.s64 + 1532;
	// bl 0x824215d0
	ctx.lr = 0x83070C04;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2521(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2521, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070C20"))) PPC_WEAK_FUNC(sub_83070C20);
PPC_FUNC_IMPL(__imp__sub_83070C20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1536
	ctx.r4.s64 = ctx.r11.s64 + 1536;
	// bl 0x824215d0
	ctx.lr = 0x83070C3C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,548(r11)
	PPC_STORE_U8(ctx.r11.u32 + 548, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070C58"))) PPC_WEAK_FUNC(sub_83070C58);
PPC_FUNC_IMPL(__imp__sub_83070C58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1540
	ctx.r4.s64 = ctx.r11.s64 + 1540;
	// bl 0x824215d0
	ctx.lr = 0x83070C74;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1577(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1577, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070C90"))) PPC_WEAK_FUNC(sub_83070C90);
PPC_FUNC_IMPL(__imp__sub_83070C90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1544
	ctx.r4.s64 = ctx.r11.s64 + 1544;
	// bl 0x824215d0
	ctx.lr = 0x83070CAC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070CC8"))) PPC_WEAK_FUNC(sub_83070CC8);
PPC_FUNC_IMPL(__imp__sub_83070CC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1548
	ctx.r4.s64 = ctx.r11.s64 + 1548;
	// bl 0x824215d0
	ctx.lr = 0x83070CE4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,302(r11)
	PPC_STORE_U8(ctx.r11.u32 + 302, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070D00"))) PPC_WEAK_FUNC(sub_83070D00);
PPC_FUNC_IMPL(__imp__sub_83070D00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1552
	ctx.r4.s64 = ctx.r11.s64 + 1552;
	// bl 0x824215d0
	ctx.lr = 0x83070D1C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070D38"))) PPC_WEAK_FUNC(sub_83070D38);
PPC_FUNC_IMPL(__imp__sub_83070D38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1556
	ctx.r4.s64 = ctx.r11.s64 + 1556;
	// bl 0x824215d0
	ctx.lr = 0x83070D54;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1251(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1251, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070D70"))) PPC_WEAK_FUNC(sub_83070D70);
PPC_FUNC_IMPL(__imp__sub_83070D70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1560
	ctx.r4.s64 = ctx.r11.s64 + 1560;
	// bl 0x824215d0
	ctx.lr = 0x83070D8C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1749(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1749, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070DA8"))) PPC_WEAK_FUNC(sub_83070DA8);
PPC_FUNC_IMPL(__imp__sub_83070DA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1564
	ctx.r4.s64 = ctx.r11.s64 + 1564;
	// bl 0x824215d0
	ctx.lr = 0x83070DC4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1120(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1120, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070DE0"))) PPC_WEAK_FUNC(sub_83070DE0);
PPC_FUNC_IMPL(__imp__sub_83070DE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1568
	ctx.r4.s64 = ctx.r11.s64 + 1568;
	// bl 0x824215d0
	ctx.lr = 0x83070DFC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 233, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070E18"))) PPC_WEAK_FUNC(sub_83070E18);
PPC_FUNC_IMPL(__imp__sub_83070E18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1572
	ctx.r4.s64 = ctx.r11.s64 + 1572;
	// bl 0x824215d0
	ctx.lr = 0x83070E34;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2523(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2523, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070E50"))) PPC_WEAK_FUNC(sub_83070E50);
PPC_FUNC_IMPL(__imp__sub_83070E50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1576
	ctx.r4.s64 = ctx.r11.s64 + 1576;
	// bl 0x824215d0
	ctx.lr = 0x83070E6C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,417(r11)
	PPC_STORE_U8(ctx.r11.u32 + 417, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070E88"))) PPC_WEAK_FUNC(sub_83070E88);
PPC_FUNC_IMPL(__imp__sub_83070E88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1580
	ctx.r4.s64 = ctx.r11.s64 + 1580;
	// bl 0x824215d0
	ctx.lr = 0x83070EA4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,802(r11)
	PPC_STORE_U8(ctx.r11.u32 + 802, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070EC0"))) PPC_WEAK_FUNC(sub_83070EC0);
PPC_FUNC_IMPL(__imp__sub_83070EC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1584
	ctx.r4.s64 = ctx.r11.s64 + 1584;
	// bl 0x824215d0
	ctx.lr = 0x83070EDC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070EF8"))) PPC_WEAK_FUNC(sub_83070EF8);
PPC_FUNC_IMPL(__imp__sub_83070EF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1588
	ctx.r4.s64 = ctx.r11.s64 + 1588;
	// bl 0x824215d0
	ctx.lr = 0x83070F14;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,661(r11)
	PPC_STORE_U8(ctx.r11.u32 + 661, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070F30"))) PPC_WEAK_FUNC(sub_83070F30);
PPC_FUNC_IMPL(__imp__sub_83070F30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1592
	ctx.r4.s64 = ctx.r11.s64 + 1592;
	// bl 0x824215d0
	ctx.lr = 0x83070F4C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83070F68"))) PPC_WEAK_FUNC(sub_83070F68);
PPC_FUNC_IMPL(__imp__sub_83070F68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1596
	ctx.r4.s64 = ctx.r11.s64 + 1596;
	// bl 0x824215d0
	ctx.lr = 0x83070F84;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1504(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1504, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070FA0"))) PPC_WEAK_FUNC(sub_83070FA0);
PPC_FUNC_IMPL(__imp__sub_83070FA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1600
	ctx.r4.s64 = ctx.r11.s64 + 1600;
	// bl 0x824215d0
	ctx.lr = 0x83070FBC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2510(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2510, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070FD8"))) PPC_WEAK_FUNC(sub_83070FD8);
PPC_FUNC_IMPL(__imp__sub_83070FD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1604
	ctx.r4.s64 = ctx.r11.s64 + 1604;
	// bl 0x824215d0
	ctx.lr = 0x83070FF4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1818(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1818, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071010"))) PPC_WEAK_FUNC(sub_83071010);
PPC_FUNC_IMPL(__imp__sub_83071010) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1608
	ctx.r4.s64 = ctx.r11.s64 + 1608;
	// bl 0x824215d0
	ctx.lr = 0x8307102C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3168(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3168, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071048"))) PPC_WEAK_FUNC(sub_83071048);
PPC_FUNC_IMPL(__imp__sub_83071048) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1612
	ctx.r4.s64 = ctx.r11.s64 + 1612;
	// bl 0x824215d0
	ctx.lr = 0x83071064;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3206(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3206, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071080"))) PPC_WEAK_FUNC(sub_83071080);
PPC_FUNC_IMPL(__imp__sub_83071080) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1616
	ctx.r4.s64 = ctx.r11.s64 + 1616;
	// bl 0x824215d0
	ctx.lr = 0x8307109C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-285(r11)
	PPC_STORE_U8(ctx.r11.u32 + -285, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830710B8"))) PPC_WEAK_FUNC(sub_830710B8);
PPC_FUNC_IMPL(__imp__sub_830710B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1620
	ctx.r4.s64 = ctx.r11.s64 + 1620;
	// bl 0x824215d0
	ctx.lr = 0x830710D4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1177(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1177, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830710F0"))) PPC_WEAK_FUNC(sub_830710F0);
PPC_FUNC_IMPL(__imp__sub_830710F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1624
	ctx.r4.s64 = ctx.r11.s64 + 1624;
	// bl 0x824215d0
	ctx.lr = 0x8307110C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83071128"))) PPC_WEAK_FUNC(sub_83071128);
PPC_FUNC_IMPL(__imp__sub_83071128) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1628
	ctx.r4.s64 = ctx.r11.s64 + 1628;
	// bl 0x824215d0
	ctx.lr = 0x83071144;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1805(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1805, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071160"))) PPC_WEAK_FUNC(sub_83071160);
PPC_FUNC_IMPL(__imp__sub_83071160) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1632
	ctx.r4.s64 = ctx.r11.s64 + 1632;
	// bl 0x824215d0
	ctx.lr = 0x8307117C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3400, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83071198"))) PPC_WEAK_FUNC(sub_83071198);
PPC_FUNC_IMPL(__imp__sub_83071198) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1636
	ctx.r4.s64 = ctx.r11.s64 + 1636;
	// bl 0x824215d0
	ctx.lr = 0x830711B4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1062(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1062, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830711D0"))) PPC_WEAK_FUNC(sub_830711D0);
PPC_FUNC_IMPL(__imp__sub_830711D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,1640
	ctx.r4.s64 = ctx.r11.s64 + 1640;
	// bl 0x824215d0
	ctx.lr = 0x830711EC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,672(r11)
	PPC_STORE_U8(ctx.r11.u32 + 672, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

