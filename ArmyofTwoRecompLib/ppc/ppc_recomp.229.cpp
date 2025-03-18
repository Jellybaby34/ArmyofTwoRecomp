#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8303FE80"))) PPC_WEAK_FUNC(sub_8303FE80);
PPC_FUNC_IMPL(__imp__sub_8303FE80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31936
	ctx.r4.s64 = ctx.r11.s64 + 31936;
	// bl 0x824215d0
	ctx.lr = 0x8303FE9C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,292(r11)
	PPC_STORE_U8(ctx.r11.u32 + 292, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FEB8"))) PPC_WEAK_FUNC(sub_8303FEB8);
PPC_FUNC_IMPL(__imp__sub_8303FEB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31940
	ctx.r4.s64 = ctx.r11.s64 + 31940;
	// bl 0x824215d0
	ctx.lr = 0x8303FED4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1955(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1955, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FEF0"))) PPC_WEAK_FUNC(sub_8303FEF0);
PPC_FUNC_IMPL(__imp__sub_8303FEF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31944
	ctx.r4.s64 = ctx.r11.s64 + 31944;
	// bl 0x824215d0
	ctx.lr = 0x8303FF0C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-843(r11)
	PPC_STORE_U8(ctx.r11.u32 + -843, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FF28"))) PPC_WEAK_FUNC(sub_8303FF28);
PPC_FUNC_IMPL(__imp__sub_8303FF28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31948
	ctx.r4.s64 = ctx.r11.s64 + 31948;
	// bl 0x824215d0
	ctx.lr = 0x8303FF44;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1965(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1965, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FF60"))) PPC_WEAK_FUNC(sub_8303FF60);
PPC_FUNC_IMPL(__imp__sub_8303FF60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31952
	ctx.r4.s64 = ctx.r11.s64 + 31952;
	// bl 0x824215d0
	ctx.lr = 0x8303FF7C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303FF98"))) PPC_WEAK_FUNC(sub_8303FF98);
PPC_FUNC_IMPL(__imp__sub_8303FF98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// bl 0x824215d0
	ctx.lr = 0x8303FFB4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303FFD0"))) PPC_WEAK_FUNC(sub_8303FFD0);
PPC_FUNC_IMPL(__imp__sub_8303FFD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31960
	ctx.r4.s64 = ctx.r11.s64 + 31960;
	// bl 0x824215d0
	ctx.lr = 0x8303FFEC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83040008"))) PPC_WEAK_FUNC(sub_83040008);
PPC_FUNC_IMPL(__imp__sub_83040008) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31964
	ctx.r4.s64 = ctx.r11.s64 + 31964;
	// bl 0x824215d0
	ctx.lr = 0x83040024;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-427(r11)
	PPC_STORE_U8(ctx.r11.u32 + -427, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040040"))) PPC_WEAK_FUNC(sub_83040040);
PPC_FUNC_IMPL(__imp__sub_83040040) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31968
	ctx.r4.s64 = ctx.r11.s64 + 31968;
	// bl 0x824215d0
	ctx.lr = 0x8304005C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83040078"))) PPC_WEAK_FUNC(sub_83040078);
PPC_FUNC_IMPL(__imp__sub_83040078) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31972
	ctx.r4.s64 = ctx.r11.s64 + 31972;
	// bl 0x824215d0
	ctx.lr = 0x83040094;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830400B0"))) PPC_WEAK_FUNC(sub_830400B0);
PPC_FUNC_IMPL(__imp__sub_830400B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31976
	ctx.r4.s64 = ctx.r11.s64 + 31976;
	// bl 0x824215d0
	ctx.lr = 0x830400CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2360(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2360, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830400E8"))) PPC_WEAK_FUNC(sub_830400E8);
PPC_FUNC_IMPL(__imp__sub_830400E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31980
	ctx.r4.s64 = ctx.r11.s64 + 31980;
	// bl 0x824215d0
	ctx.lr = 0x83040104;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83040120"))) PPC_WEAK_FUNC(sub_83040120);
PPC_FUNC_IMPL(__imp__sub_83040120) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31984
	ctx.r4.s64 = ctx.r11.s64 + 31984;
	// bl 0x824215d0
	ctx.lr = 0x8304013C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83040158"))) PPC_WEAK_FUNC(sub_83040158);
PPC_FUNC_IMPL(__imp__sub_83040158) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31988
	ctx.r4.s64 = ctx.r11.s64 + 31988;
	// bl 0x824215d0
	ctx.lr = 0x83040174;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040190"))) PPC_WEAK_FUNC(sub_83040190);
PPC_FUNC_IMPL(__imp__sub_83040190) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31992
	ctx.r4.s64 = ctx.r11.s64 + 31992;
	// bl 0x824215d0
	ctx.lr = 0x830401AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830401C8"))) PPC_WEAK_FUNC(sub_830401C8);
PPC_FUNC_IMPL(__imp__sub_830401C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,31996
	ctx.r4.s64 = ctx.r11.s64 + 31996;
	// bl 0x824215d0
	ctx.lr = 0x830401E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-463(r11)
	PPC_STORE_U8(ctx.r11.u32 + -463, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040200"))) PPC_WEAK_FUNC(sub_83040200);
PPC_FUNC_IMPL(__imp__sub_83040200) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32000
	ctx.r4.s64 = ctx.r11.s64 + 32000;
	// bl 0x824215d0
	ctx.lr = 0x8304021C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1649(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1649, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040238"))) PPC_WEAK_FUNC(sub_83040238);
PPC_FUNC_IMPL(__imp__sub_83040238) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32004
	ctx.r4.s64 = ctx.r11.s64 + 32004;
	// bl 0x824215d0
	ctx.lr = 0x83040254;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1800(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1800, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040270"))) PPC_WEAK_FUNC(sub_83040270);
PPC_FUNC_IMPL(__imp__sub_83040270) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32008
	ctx.r4.s64 = ctx.r11.s64 + 32008;
	// bl 0x824215d0
	ctx.lr = 0x8304028C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1171(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1171, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830402A8"))) PPC_WEAK_FUNC(sub_830402A8);
PPC_FUNC_IMPL(__imp__sub_830402A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32012
	ctx.r4.s64 = ctx.r11.s64 + 32012;
	// bl 0x824215d0
	ctx.lr = 0x830402C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,768(r11)
	PPC_STORE_U8(ctx.r11.u32 + 768, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830402E0"))) PPC_WEAK_FUNC(sub_830402E0);
PPC_FUNC_IMPL(__imp__sub_830402E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32016
	ctx.r4.s64 = ctx.r11.s64 + 32016;
	// bl 0x824215d0
	ctx.lr = 0x830402FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2936(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2936, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040318"))) PPC_WEAK_FUNC(sub_83040318);
PPC_FUNC_IMPL(__imp__sub_83040318) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32020
	ctx.r4.s64 = ctx.r11.s64 + 32020;
	// bl 0x824215d0
	ctx.lr = 0x83040334;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1183(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1183, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040350"))) PPC_WEAK_FUNC(sub_83040350);
PPC_FUNC_IMPL(__imp__sub_83040350) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32024
	ctx.r4.s64 = ctx.r11.s64 + 32024;
	// bl 0x824215d0
	ctx.lr = 0x8304036C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,642(r11)
	PPC_STORE_U8(ctx.r11.u32 + 642, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040388"))) PPC_WEAK_FUNC(sub_83040388);
PPC_FUNC_IMPL(__imp__sub_83040388) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32028
	ctx.r4.s64 = ctx.r11.s64 + 32028;
	// bl 0x824215d0
	ctx.lr = 0x830403A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-235(r11)
	PPC_STORE_U8(ctx.r11.u32 + -235, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830403C0"))) PPC_WEAK_FUNC(sub_830403C0);
PPC_FUNC_IMPL(__imp__sub_830403C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32032
	ctx.r4.s64 = ctx.r11.s64 + 32032;
	// bl 0x824215d0
	ctx.lr = 0x830403DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1784(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1784, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830403F8"))) PPC_WEAK_FUNC(sub_830403F8);
PPC_FUNC_IMPL(__imp__sub_830403F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32036
	ctx.r4.s64 = ctx.r11.s64 + 32036;
	// bl 0x824215d0
	ctx.lr = 0x83040414;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2113(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2113, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040430"))) PPC_WEAK_FUNC(sub_83040430);
PPC_FUNC_IMPL(__imp__sub_83040430) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32040
	ctx.r4.s64 = ctx.r11.s64 + 32040;
	// bl 0x824215d0
	ctx.lr = 0x8304044C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2413(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2413, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040468"))) PPC_WEAK_FUNC(sub_83040468);
PPC_FUNC_IMPL(__imp__sub_83040468) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32044
	ctx.r4.s64 = ctx.r11.s64 + 32044;
	// bl 0x824215d0
	ctx.lr = 0x83040484;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830404A0"))) PPC_WEAK_FUNC(sub_830404A0);
PPC_FUNC_IMPL(__imp__sub_830404A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32048
	ctx.r4.s64 = ctx.r11.s64 + 32048;
	// bl 0x824215d0
	ctx.lr = 0x830404BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1910(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1910, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830404D8"))) PPC_WEAK_FUNC(sub_830404D8);
PPC_FUNC_IMPL(__imp__sub_830404D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32052
	ctx.r4.s64 = ctx.r11.s64 + 32052;
	// bl 0x824215d0
	ctx.lr = 0x830404F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-390(r11)
	PPC_STORE_U8(ctx.r11.u32 + -390, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040510"))) PPC_WEAK_FUNC(sub_83040510);
PPC_FUNC_IMPL(__imp__sub_83040510) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32056
	ctx.r4.s64 = ctx.r11.s64 + 32056;
	// bl 0x824215d0
	ctx.lr = 0x8304052C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83040548"))) PPC_WEAK_FUNC(sub_83040548);
PPC_FUNC_IMPL(__imp__sub_83040548) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32060
	ctx.r4.s64 = ctx.r11.s64 + 32060;
	// bl 0x824215d0
	ctx.lr = 0x83040564;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2537(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2537, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040580"))) PPC_WEAK_FUNC(sub_83040580);
PPC_FUNC_IMPL(__imp__sub_83040580) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32064
	ctx.r4.s64 = ctx.r11.s64 + 32064;
	// bl 0x824215d0
	ctx.lr = 0x8304059C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3264(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3264, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830405B8"))) PPC_WEAK_FUNC(sub_830405B8);
PPC_FUNC_IMPL(__imp__sub_830405B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32068
	ctx.r4.s64 = ctx.r11.s64 + 32068;
	// bl 0x824215d0
	ctx.lr = 0x830405D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830405F0"))) PPC_WEAK_FUNC(sub_830405F0);
PPC_FUNC_IMPL(__imp__sub_830405F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32072
	ctx.r4.s64 = ctx.r11.s64 + 32072;
	// bl 0x824215d0
	ctx.lr = 0x8304060C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,707(r11)
	PPC_STORE_U8(ctx.r11.u32 + 707, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040628"))) PPC_WEAK_FUNC(sub_83040628);
PPC_FUNC_IMPL(__imp__sub_83040628) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32076
	ctx.r4.s64 = ctx.r11.s64 + 32076;
	// bl 0x824215d0
	ctx.lr = 0x83040644;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2902(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2902, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040660"))) PPC_WEAK_FUNC(sub_83040660);
PPC_FUNC_IMPL(__imp__sub_83040660) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32080
	ctx.r4.s64 = ctx.r11.s64 + 32080;
	// bl 0x824215d0
	ctx.lr = 0x8304067C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2497(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2497, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040698"))) PPC_WEAK_FUNC(sub_83040698);
PPC_FUNC_IMPL(__imp__sub_83040698) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32084
	ctx.r4.s64 = ctx.r11.s64 + 32084;
	// bl 0x824215d0
	ctx.lr = 0x830406B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,673(r11)
	PPC_STORE_U8(ctx.r11.u32 + 673, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830406D0"))) PPC_WEAK_FUNC(sub_830406D0);
PPC_FUNC_IMPL(__imp__sub_830406D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32088
	ctx.r4.s64 = ctx.r11.s64 + 32088;
	// bl 0x824215d0
	ctx.lr = 0x830406EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-380(r11)
	PPC_STORE_U8(ctx.r11.u32 + -380, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040708"))) PPC_WEAK_FUNC(sub_83040708);
PPC_FUNC_IMPL(__imp__sub_83040708) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32092
	ctx.r4.s64 = ctx.r11.s64 + 32092;
	// bl 0x824215d0
	ctx.lr = 0x83040724;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-425(r11)
	PPC_STORE_U8(ctx.r11.u32 + -425, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040740"))) PPC_WEAK_FUNC(sub_83040740);
PPC_FUNC_IMPL(__imp__sub_83040740) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32096
	ctx.r4.s64 = ctx.r11.s64 + 32096;
	// bl 0x824215d0
	ctx.lr = 0x8304075C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1671(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1671, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040778"))) PPC_WEAK_FUNC(sub_83040778);
PPC_FUNC_IMPL(__imp__sub_83040778) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32100
	ctx.r4.s64 = ctx.r11.s64 + 32100;
	// bl 0x824215d0
	ctx.lr = 0x83040794;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1325(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1325, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830407B0"))) PPC_WEAK_FUNC(sub_830407B0);
PPC_FUNC_IMPL(__imp__sub_830407B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32104
	ctx.r4.s64 = ctx.r11.s64 + 32104;
	// bl 0x824215d0
	ctx.lr = 0x830407CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-16(r11)
	PPC_STORE_U8(ctx.r11.u32 + -16, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830407E8"))) PPC_WEAK_FUNC(sub_830407E8);
PPC_FUNC_IMPL(__imp__sub_830407E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32108
	ctx.r4.s64 = ctx.r11.s64 + 32108;
	// bl 0x824215d0
	ctx.lr = 0x83040804;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1953(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1953, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040820"))) PPC_WEAK_FUNC(sub_83040820);
PPC_FUNC_IMPL(__imp__sub_83040820) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32112
	ctx.r4.s64 = ctx.r11.s64 + 32112;
	// bl 0x824215d0
	ctx.lr = 0x8304083C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-841(r11)
	PPC_STORE_U8(ctx.r11.u32 + -841, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040858"))) PPC_WEAK_FUNC(sub_83040858);
PPC_FUNC_IMPL(__imp__sub_83040858) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32116
	ctx.r4.s64 = ctx.r11.s64 + 32116;
	// bl 0x824215d0
	ctx.lr = 0x83040874;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-420(r11)
	PPC_STORE_U8(ctx.r11.u32 + -420, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040890"))) PPC_WEAK_FUNC(sub_83040890);
PPC_FUNC_IMPL(__imp__sub_83040890) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32120
	ctx.r4.s64 = ctx.r11.s64 + 32120;
	// bl 0x824215d0
	ctx.lr = 0x830408AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1524(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1524, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830408C8"))) PPC_WEAK_FUNC(sub_830408C8);
PPC_FUNC_IMPL(__imp__sub_830408C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32124
	ctx.r4.s64 = ctx.r11.s64 + 32124;
	// bl 0x824215d0
	ctx.lr = 0x830408E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1886(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1886, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040900"))) PPC_WEAK_FUNC(sub_83040900);
PPC_FUNC_IMPL(__imp__sub_83040900) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32128
	ctx.r4.s64 = ctx.r11.s64 + 32128;
	// bl 0x824215d0
	ctx.lr = 0x8304091C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,769(r11)
	PPC_STORE_U8(ctx.r11.u32 + 769, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040938"))) PPC_WEAK_FUNC(sub_83040938);
PPC_FUNC_IMPL(__imp__sub_83040938) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32132
	ctx.r4.s64 = ctx.r11.s64 + 32132;
	// bl 0x824215d0
	ctx.lr = 0x83040954;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,439(r11)
	PPC_STORE_U8(ctx.r11.u32 + 439, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040970"))) PPC_WEAK_FUNC(sub_83040970);
PPC_FUNC_IMPL(__imp__sub_83040970) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32136
	ctx.r4.s64 = ctx.r11.s64 + 32136;
	// bl 0x824215d0
	ctx.lr = 0x8304098C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-861(r11)
	PPC_STORE_U8(ctx.r11.u32 + -861, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830409A8"))) PPC_WEAK_FUNC(sub_830409A8);
PPC_FUNC_IMPL(__imp__sub_830409A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32140
	ctx.r4.s64 = ctx.r11.s64 + 32140;
	// bl 0x824215d0
	ctx.lr = 0x830409C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830409E0"))) PPC_WEAK_FUNC(sub_830409E0);
PPC_FUNC_IMPL(__imp__sub_830409E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32144
	ctx.r4.s64 = ctx.r11.s64 + 32144;
	// bl 0x824215d0
	ctx.lr = 0x830409FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1743(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1743, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040A18"))) PPC_WEAK_FUNC(sub_83040A18);
PPC_FUNC_IMPL(__imp__sub_83040A18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32148
	ctx.r4.s64 = ctx.r11.s64 + 32148;
	// bl 0x824215d0
	ctx.lr = 0x83040A34;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-142(r11)
	PPC_STORE_U8(ctx.r11.u32 + -142, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040A50"))) PPC_WEAK_FUNC(sub_83040A50);
PPC_FUNC_IMPL(__imp__sub_83040A50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32152
	ctx.r4.s64 = ctx.r11.s64 + 32152;
	// bl 0x824215d0
	ctx.lr = 0x83040A6C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3028(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3028, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040A88"))) PPC_WEAK_FUNC(sub_83040A88);
PPC_FUNC_IMPL(__imp__sub_83040A88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32156
	ctx.r4.s64 = ctx.r11.s64 + 32156;
	// bl 0x824215d0
	ctx.lr = 0x83040AA4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2755(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2755, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040AC0"))) PPC_WEAK_FUNC(sub_83040AC0);
PPC_FUNC_IMPL(__imp__sub_83040AC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32160
	ctx.r4.s64 = ctx.r11.s64 + 32160;
	// bl 0x824215d0
	ctx.lr = 0x83040ADC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3227, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040AF8"))) PPC_WEAK_FUNC(sub_83040AF8);
PPC_FUNC_IMPL(__imp__sub_83040AF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32164
	ctx.r4.s64 = ctx.r11.s64 + 32164;
	// bl 0x824215d0
	ctx.lr = 0x83040B14;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2172(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2172, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040B30"))) PPC_WEAK_FUNC(sub_83040B30);
PPC_FUNC_IMPL(__imp__sub_83040B30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32168
	ctx.r4.s64 = ctx.r11.s64 + 32168;
	// bl 0x824215d0
	ctx.lr = 0x83040B4C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,976(r11)
	PPC_STORE_U8(ctx.r11.u32 + 976, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040B68"))) PPC_WEAK_FUNC(sub_83040B68);
PPC_FUNC_IMPL(__imp__sub_83040B68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32172
	ctx.r4.s64 = ctx.r11.s64 + 32172;
	// bl 0x824215d0
	ctx.lr = 0x83040B84;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,234(r11)
	PPC_STORE_U8(ctx.r11.u32 + 234, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040BA0"))) PPC_WEAK_FUNC(sub_83040BA0);
PPC_FUNC_IMPL(__imp__sub_83040BA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32176
	ctx.r4.s64 = ctx.r11.s64 + 32176;
	// bl 0x824215d0
	ctx.lr = 0x83040BBC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3203(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3203, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040BD8"))) PPC_WEAK_FUNC(sub_83040BD8);
PPC_FUNC_IMPL(__imp__sub_83040BD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32180
	ctx.r4.s64 = ctx.r11.s64 + 32180;
	// bl 0x824215d0
	ctx.lr = 0x83040BF4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1445(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1445, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040C10"))) PPC_WEAK_FUNC(sub_83040C10);
PPC_FUNC_IMPL(__imp__sub_83040C10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32184
	ctx.r4.s64 = ctx.r11.s64 + 32184;
	// bl 0x824215d0
	ctx.lr = 0x83040C2C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-457(r11)
	PPC_STORE_U8(ctx.r11.u32 + -457, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040C48"))) PPC_WEAK_FUNC(sub_83040C48);
PPC_FUNC_IMPL(__imp__sub_83040C48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32188
	ctx.r4.s64 = ctx.r11.s64 + 32188;
	// bl 0x824215d0
	ctx.lr = 0x83040C64;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-367(r11)
	PPC_STORE_U8(ctx.r11.u32 + -367, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040C80"))) PPC_WEAK_FUNC(sub_83040C80);
PPC_FUNC_IMPL(__imp__sub_83040C80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32192
	ctx.r4.s64 = ctx.r11.s64 + 32192;
	// bl 0x824215d0
	ctx.lr = 0x83040C9C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1913(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1913, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040CB8"))) PPC_WEAK_FUNC(sub_83040CB8);
PPC_FUNC_IMPL(__imp__sub_83040CB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32196
	ctx.r4.s64 = ctx.r11.s64 + 32196;
	// bl 0x824215d0
	ctx.lr = 0x83040CD4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3200(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3200, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040CF0"))) PPC_WEAK_FUNC(sub_83040CF0);
PPC_FUNC_IMPL(__imp__sub_83040CF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32200
	ctx.r4.s64 = ctx.r11.s64 + 32200;
	// bl 0x824215d0
	ctx.lr = 0x83040D0C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,131(r11)
	PPC_STORE_U8(ctx.r11.u32 + 131, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040D28"))) PPC_WEAK_FUNC(sub_83040D28);
PPC_FUNC_IMPL(__imp__sub_83040D28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32204
	ctx.r4.s64 = ctx.r11.s64 + 32204;
	// bl 0x824215d0
	ctx.lr = 0x83040D44;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1786(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1786, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040D60"))) PPC_WEAK_FUNC(sub_83040D60);
PPC_FUNC_IMPL(__imp__sub_83040D60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32208
	ctx.r4.s64 = ctx.r11.s64 + 32208;
	// bl 0x824215d0
	ctx.lr = 0x83040D7C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83040D98"))) PPC_WEAK_FUNC(sub_83040D98);
PPC_FUNC_IMPL(__imp__sub_83040D98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32212
	ctx.r4.s64 = ctx.r11.s64 + 32212;
	// bl 0x824215d0
	ctx.lr = 0x83040DB4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83040DD0"))) PPC_WEAK_FUNC(sub_83040DD0);
PPC_FUNC_IMPL(__imp__sub_83040DD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32216
	ctx.r4.s64 = ctx.r11.s64 + 32216;
	// bl 0x824215d0
	ctx.lr = 0x83040DEC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2779(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2779, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040E08"))) PPC_WEAK_FUNC(sub_83040E08);
PPC_FUNC_IMPL(__imp__sub_83040E08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32220
	ctx.r4.s64 = ctx.r11.s64 + 32220;
	// bl 0x824215d0
	ctx.lr = 0x83040E24;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-141(r11)
	PPC_STORE_U8(ctx.r11.u32 + -141, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040E40"))) PPC_WEAK_FUNC(sub_83040E40);
PPC_FUNC_IMPL(__imp__sub_83040E40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32224
	ctx.r4.s64 = ctx.r11.s64 + 32224;
	// bl 0x824215d0
	ctx.lr = 0x83040E5C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,443(r11)
	PPC_STORE_U8(ctx.r11.u32 + 443, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040E78"))) PPC_WEAK_FUNC(sub_83040E78);
PPC_FUNC_IMPL(__imp__sub_83040E78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32228
	ctx.r4.s64 = ctx.r11.s64 + 32228;
	// bl 0x824215d0
	ctx.lr = 0x83040E94;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2640(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2640, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040EB0"))) PPC_WEAK_FUNC(sub_83040EB0);
PPC_FUNC_IMPL(__imp__sub_83040EB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32232
	ctx.r4.s64 = ctx.r11.s64 + 32232;
	// bl 0x824215d0
	ctx.lr = 0x83040ECC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,620(r11)
	PPC_STORE_U8(ctx.r11.u32 + 620, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040EE8"))) PPC_WEAK_FUNC(sub_83040EE8);
PPC_FUNC_IMPL(__imp__sub_83040EE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32236
	ctx.r4.s64 = ctx.r11.s64 + 32236;
	// bl 0x824215d0
	ctx.lr = 0x83040F04;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,460(r11)
	PPC_STORE_U8(ctx.r11.u32 + 460, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040F20"))) PPC_WEAK_FUNC(sub_83040F20);
PPC_FUNC_IMPL(__imp__sub_83040F20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32240
	ctx.r4.s64 = ctx.r11.s64 + 32240;
	// bl 0x824215d0
	ctx.lr = 0x83040F3C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2385(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2385, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040F58"))) PPC_WEAK_FUNC(sub_83040F58);
PPC_FUNC_IMPL(__imp__sub_83040F58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32244
	ctx.r4.s64 = ctx.r11.s64 + 32244;
	// bl 0x824215d0
	ctx.lr = 0x83040F74;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,232(r11)
	PPC_STORE_U8(ctx.r11.u32 + 232, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040F90"))) PPC_WEAK_FUNC(sub_83040F90);
PPC_FUNC_IMPL(__imp__sub_83040F90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32248
	ctx.r4.s64 = ctx.r11.s64 + 32248;
	// bl 0x824215d0
	ctx.lr = 0x83040FAC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3029(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3029, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83040FC8"))) PPC_WEAK_FUNC(sub_83040FC8);
PPC_FUNC_IMPL(__imp__sub_83040FC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32252
	ctx.r4.s64 = ctx.r11.s64 + 32252;
	// bl 0x824215d0
	ctx.lr = 0x83040FE4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1860(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1860, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041000"))) PPC_WEAK_FUNC(sub_83041000);
PPC_FUNC_IMPL(__imp__sub_83041000) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32256
	ctx.r4.s64 = ctx.r11.s64 + 32256;
	// bl 0x824215d0
	ctx.lr = 0x8304101C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,662(r11)
	PPC_STORE_U8(ctx.r11.u32 + 662, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041038"))) PPC_WEAK_FUNC(sub_83041038);
PPC_FUNC_IMPL(__imp__sub_83041038) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32260
	ctx.r4.s64 = ctx.r11.s64 + 32260;
	// bl 0x824215d0
	ctx.lr = 0x83041054;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83041070"))) PPC_WEAK_FUNC(sub_83041070);
PPC_FUNC_IMPL(__imp__sub_83041070) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32264
	ctx.r4.s64 = ctx.r11.s64 + 32264;
	// bl 0x824215d0
	ctx.lr = 0x8304108C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830410A8"))) PPC_WEAK_FUNC(sub_830410A8);
PPC_FUNC_IMPL(__imp__sub_830410A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32268
	ctx.r4.s64 = ctx.r11.s64 + 32268;
	// bl 0x824215d0
	ctx.lr = 0x830410C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2187(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2187, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830410E0"))) PPC_WEAK_FUNC(sub_830410E0);
PPC_FUNC_IMPL(__imp__sub_830410E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32272
	ctx.r4.s64 = ctx.r11.s64 + 32272;
	// bl 0x824215d0
	ctx.lr = 0x830410FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3247(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3247, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041118"))) PPC_WEAK_FUNC(sub_83041118);
PPC_FUNC_IMPL(__imp__sub_83041118) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32276
	ctx.r4.s64 = ctx.r11.s64 + 32276;
	// bl 0x824215d0
	ctx.lr = 0x83041134;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-46(r11)
	PPC_STORE_U8(ctx.r11.u32 + -46, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041150"))) PPC_WEAK_FUNC(sub_83041150);
PPC_FUNC_IMPL(__imp__sub_83041150) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32280
	ctx.r4.s64 = ctx.r11.s64 + 32280;
	// bl 0x824215d0
	ctx.lr = 0x8304116C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83041188"))) PPC_WEAK_FUNC(sub_83041188);
PPC_FUNC_IMPL(__imp__sub_83041188) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32284
	ctx.r4.s64 = ctx.r11.s64 + 32284;
	// bl 0x824215d0
	ctx.lr = 0x830411A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1744(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1744, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830411C0"))) PPC_WEAK_FUNC(sub_830411C0);
PPC_FUNC_IMPL(__imp__sub_830411C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32288
	ctx.r4.s64 = ctx.r11.s64 + 32288;
	// bl 0x824215d0
	ctx.lr = 0x830411DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2057(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2057, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830411F8"))) PPC_WEAK_FUNC(sub_830411F8);
PPC_FUNC_IMPL(__imp__sub_830411F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32292
	ctx.r4.s64 = ctx.r11.s64 + 32292;
	// bl 0x824215d0
	ctx.lr = 0x83041214;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2012(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2012, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041230"))) PPC_WEAK_FUNC(sub_83041230);
PPC_FUNC_IMPL(__imp__sub_83041230) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32296
	ctx.r4.s64 = ctx.r11.s64 + 32296;
	// bl 0x824215d0
	ctx.lr = 0x8304124C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1976(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1976, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041268"))) PPC_WEAK_FUNC(sub_83041268);
PPC_FUNC_IMPL(__imp__sub_83041268) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32300
	ctx.r4.s64 = ctx.r11.s64 + 32300;
	// bl 0x824215d0
	ctx.lr = 0x83041284;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,527(r11)
	PPC_STORE_U8(ctx.r11.u32 + 527, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830412A0"))) PPC_WEAK_FUNC(sub_830412A0);
PPC_FUNC_IMPL(__imp__sub_830412A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32304
	ctx.r4.s64 = ctx.r11.s64 + 32304;
	// bl 0x824215d0
	ctx.lr = 0x830412BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2573(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2573, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830412D8"))) PPC_WEAK_FUNC(sub_830412D8);
PPC_FUNC_IMPL(__imp__sub_830412D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32308
	ctx.r4.s64 = ctx.r11.s64 + 32308;
	// bl 0x824215d0
	ctx.lr = 0x830412F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-594(r11)
	PPC_STORE_U8(ctx.r11.u32 + -594, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041310"))) PPC_WEAK_FUNC(sub_83041310);
PPC_FUNC_IMPL(__imp__sub_83041310) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32312
	ctx.r4.s64 = ctx.r11.s64 + 32312;
	// bl 0x824215d0
	ctx.lr = 0x8304132C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2296(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2296, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041348"))) PPC_WEAK_FUNC(sub_83041348);
PPC_FUNC_IMPL(__imp__sub_83041348) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32316
	ctx.r4.s64 = ctx.r11.s64 + 32316;
	// bl 0x824215d0
	ctx.lr = 0x83041364;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,704(r11)
	PPC_STORE_U8(ctx.r11.u32 + 704, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041380"))) PPC_WEAK_FUNC(sub_83041380);
PPC_FUNC_IMPL(__imp__sub_83041380) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32320
	ctx.r4.s64 = ctx.r11.s64 + 32320;
	// bl 0x824215d0
	ctx.lr = 0x8304139C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2436(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2436, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830413B8"))) PPC_WEAK_FUNC(sub_830413B8);
PPC_FUNC_IMPL(__imp__sub_830413B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32324
	ctx.r4.s64 = ctx.r11.s64 + 32324;
	// bl 0x824215d0
	ctx.lr = 0x830413D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830413F0"))) PPC_WEAK_FUNC(sub_830413F0);
PPC_FUNC_IMPL(__imp__sub_830413F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32328
	ctx.r4.s64 = ctx.r11.s64 + 32328;
	// bl 0x824215d0
	ctx.lr = 0x8304140C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2594(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2594, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041428"))) PPC_WEAK_FUNC(sub_83041428);
PPC_FUNC_IMPL(__imp__sub_83041428) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32332
	ctx.r4.s64 = ctx.r11.s64 + 32332;
	// bl 0x824215d0
	ctx.lr = 0x83041444;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83041460"))) PPC_WEAK_FUNC(sub_83041460);
PPC_FUNC_IMPL(__imp__sub_83041460) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32336
	ctx.r4.s64 = ctx.r11.s64 + 32336;
	// bl 0x824215d0
	ctx.lr = 0x8304147C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1633(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1633, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041498"))) PPC_WEAK_FUNC(sub_83041498);
PPC_FUNC_IMPL(__imp__sub_83041498) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32340
	ctx.r4.s64 = ctx.r11.s64 + 32340;
	// bl 0x824215d0
	ctx.lr = 0x830414B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-893(r11)
	PPC_STORE_U8(ctx.r11.u32 + -893, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830414D0"))) PPC_WEAK_FUNC(sub_830414D0);
PPC_FUNC_IMPL(__imp__sub_830414D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32344
	ctx.r4.s64 = ctx.r11.s64 + 32344;
	// bl 0x824215d0
	ctx.lr = 0x830414EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1636(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1636, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041508"))) PPC_WEAK_FUNC(sub_83041508);
PPC_FUNC_IMPL(__imp__sub_83041508) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32348
	ctx.r4.s64 = ctx.r11.s64 + 32348;
	// bl 0x824215d0
	ctx.lr = 0x83041524;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-842(r11)
	PPC_STORE_U8(ctx.r11.u32 + -842, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041540"))) PPC_WEAK_FUNC(sub_83041540);
PPC_FUNC_IMPL(__imp__sub_83041540) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32352
	ctx.r4.s64 = ctx.r11.s64 + 32352;
	// bl 0x824215d0
	ctx.lr = 0x8304155C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83041578"))) PPC_WEAK_FUNC(sub_83041578);
PPC_FUNC_IMPL(__imp__sub_83041578) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x824215d0
	ctx.lr = 0x83041594;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2754(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2754, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830415B0"))) PPC_WEAK_FUNC(sub_830415B0);
PPC_FUNC_IMPL(__imp__sub_830415B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32360
	ctx.r4.s64 = ctx.r11.s64 + 32360;
	// bl 0x824215d0
	ctx.lr = 0x830415CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2574(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2574, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830415E8"))) PPC_WEAK_FUNC(sub_830415E8);
PPC_FUNC_IMPL(__imp__sub_830415E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32364
	ctx.r4.s64 = ctx.r11.s64 + 32364;
	// bl 0x824215d0
	ctx.lr = 0x83041604;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83041620"))) PPC_WEAK_FUNC(sub_83041620);
PPC_FUNC_IMPL(__imp__sub_83041620) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32368
	ctx.r4.s64 = ctx.r11.s64 + 32368;
	// bl 0x824215d0
	ctx.lr = 0x8304163C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2839(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2839, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041658"))) PPC_WEAK_FUNC(sub_83041658);
PPC_FUNC_IMPL(__imp__sub_83041658) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32372
	ctx.r4.s64 = ctx.r11.s64 + 32372;
	// bl 0x824215d0
	ctx.lr = 0x83041674;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1287(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1287, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041690"))) PPC_WEAK_FUNC(sub_83041690);
PPC_FUNC_IMPL(__imp__sub_83041690) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32376
	ctx.r4.s64 = ctx.r11.s64 + 32376;
	// bl 0x824215d0
	ctx.lr = 0x830416AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1645(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1645, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830416C8"))) PPC_WEAK_FUNC(sub_830416C8);
PPC_FUNC_IMPL(__imp__sub_830416C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32380
	ctx.r4.s64 = ctx.r11.s64 + 32380;
	// bl 0x824215d0
	ctx.lr = 0x830416E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1850(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1850, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041700"))) PPC_WEAK_FUNC(sub_83041700);
PPC_FUNC_IMPL(__imp__sub_83041700) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32384
	ctx.r4.s64 = ctx.r11.s64 + 32384;
	// bl 0x824215d0
	ctx.lr = 0x8304171C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3049(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3049, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041738"))) PPC_WEAK_FUNC(sub_83041738);
PPC_FUNC_IMPL(__imp__sub_83041738) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32388
	ctx.r4.s64 = ctx.r11.s64 + 32388;
	// bl 0x824215d0
	ctx.lr = 0x83041754;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,663(r11)
	PPC_STORE_U8(ctx.r11.u32 + 663, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041770"))) PPC_WEAK_FUNC(sub_83041770);
PPC_FUNC_IMPL(__imp__sub_83041770) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32392
	ctx.r4.s64 = ctx.r11.s64 + 32392;
	// bl 0x824215d0
	ctx.lr = 0x8304178C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3252(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3252, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830417A8"))) PPC_WEAK_FUNC(sub_830417A8);
PPC_FUNC_IMPL(__imp__sub_830417A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32396
	ctx.r4.s64 = ctx.r11.s64 + 32396;
	// bl 0x824215d0
	ctx.lr = 0x830417C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1423(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1423, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830417E0"))) PPC_WEAK_FUNC(sub_830417E0);
PPC_FUNC_IMPL(__imp__sub_830417E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32400
	ctx.r4.s64 = ctx.r11.s64 + 32400;
	// bl 0x824215d0
	ctx.lr = 0x830417FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-267(r11)
	PPC_STORE_U8(ctx.r11.u32 + -267, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041818"))) PPC_WEAK_FUNC(sub_83041818);
PPC_FUNC_IMPL(__imp__sub_83041818) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32404
	ctx.r4.s64 = ctx.r11.s64 + 32404;
	// bl 0x824215d0
	ctx.lr = 0x83041834;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1906(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1906, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041850"))) PPC_WEAK_FUNC(sub_83041850);
PPC_FUNC_IMPL(__imp__sub_83041850) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32408
	ctx.r4.s64 = ctx.r11.s64 + 32408;
	// bl 0x824215d0
	ctx.lr = 0x8304186C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1327(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1327, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041888"))) PPC_WEAK_FUNC(sub_83041888);
PPC_FUNC_IMPL(__imp__sub_83041888) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32412
	ctx.r4.s64 = ctx.r11.s64 + 32412;
	// bl 0x824215d0
	ctx.lr = 0x830418A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1909(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1909, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830418C0"))) PPC_WEAK_FUNC(sub_830418C0);
PPC_FUNC_IMPL(__imp__sub_830418C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32416
	ctx.r4.s64 = ctx.r11.s64 + 32416;
	// bl 0x824215d0
	ctx.lr = 0x830418DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830418F8"))) PPC_WEAK_FUNC(sub_830418F8);
PPC_FUNC_IMPL(__imp__sub_830418F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32420
	ctx.r4.s64 = ctx.r11.s64 + 32420;
	// bl 0x824215d0
	ctx.lr = 0x83041914;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83041930"))) PPC_WEAK_FUNC(sub_83041930);
PPC_FUNC_IMPL(__imp__sub_83041930) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32424
	ctx.r4.s64 = ctx.r11.s64 + 32424;
	// bl 0x824215d0
	ctx.lr = 0x8304194C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1484(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1484, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041968"))) PPC_WEAK_FUNC(sub_83041968);
PPC_FUNC_IMPL(__imp__sub_83041968) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32428
	ctx.r4.s64 = ctx.r11.s64 + 32428;
	// bl 0x824215d0
	ctx.lr = 0x83041984;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-337(r11)
	PPC_STORE_U8(ctx.r11.u32 + -337, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830419A0"))) PPC_WEAK_FUNC(sub_830419A0);
PPC_FUNC_IMPL(__imp__sub_830419A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32432
	ctx.r4.s64 = ctx.r11.s64 + 32432;
	// bl 0x824215d0
	ctx.lr = 0x830419BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830419D8"))) PPC_WEAK_FUNC(sub_830419D8);
PPC_FUNC_IMPL(__imp__sub_830419D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32436
	ctx.r4.s64 = ctx.r11.s64 + 32436;
	// bl 0x824215d0
	ctx.lr = 0x830419F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041A10"))) PPC_WEAK_FUNC(sub_83041A10);
PPC_FUNC_IMPL(__imp__sub_83041A10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32440
	ctx.r4.s64 = ctx.r11.s64 + 32440;
	// bl 0x824215d0
	ctx.lr = 0x83041A2C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1914(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1914, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041A48"))) PPC_WEAK_FUNC(sub_83041A48);
PPC_FUNC_IMPL(__imp__sub_83041A48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32444
	ctx.r4.s64 = ctx.r11.s64 + 32444;
	// bl 0x824215d0
	ctx.lr = 0x83041A64;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3244(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3244, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041A80"))) PPC_WEAK_FUNC(sub_83041A80);
PPC_FUNC_IMPL(__imp__sub_83041A80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32448
	ctx.r4.s64 = ctx.r11.s64 + 32448;
	// bl 0x824215d0
	ctx.lr = 0x83041A9C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1943(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1943, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041AB8"))) PPC_WEAK_FUNC(sub_83041AB8);
PPC_FUNC_IMPL(__imp__sub_83041AB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32452
	ctx.r4.s64 = ctx.r11.s64 + 32452;
	// bl 0x824215d0
	ctx.lr = 0x83041AD4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83041AF0"))) PPC_WEAK_FUNC(sub_83041AF0);
PPC_FUNC_IMPL(__imp__sub_83041AF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32456
	ctx.r4.s64 = ctx.r11.s64 + 32456;
	// bl 0x824215d0
	ctx.lr = 0x83041B0C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2964(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2964, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041B28"))) PPC_WEAK_FUNC(sub_83041B28);
PPC_FUNC_IMPL(__imp__sub_83041B28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32460
	ctx.r4.s64 = ctx.r11.s64 + 32460;
	// bl 0x824215d0
	ctx.lr = 0x83041B44;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83041B60"))) PPC_WEAK_FUNC(sub_83041B60);
PPC_FUNC_IMPL(__imp__sub_83041B60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32464
	ctx.r4.s64 = ctx.r11.s64 + 32464;
	// bl 0x824215d0
	ctx.lr = 0x83041B7C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1250(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1250, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041B98"))) PPC_WEAK_FUNC(sub_83041B98);
PPC_FUNC_IMPL(__imp__sub_83041B98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32468
	ctx.r4.s64 = ctx.r11.s64 + 32468;
	// bl 0x824215d0
	ctx.lr = 0x83041BB4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83041BD0"))) PPC_WEAK_FUNC(sub_83041BD0);
PPC_FUNC_IMPL(__imp__sub_83041BD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32472
	ctx.r4.s64 = ctx.r11.s64 + 32472;
	// bl 0x824215d0
	ctx.lr = 0x83041BEC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1317(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1317, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041C08"))) PPC_WEAK_FUNC(sub_83041C08);
PPC_FUNC_IMPL(__imp__sub_83041C08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32476
	ctx.r4.s64 = ctx.r11.s64 + 32476;
	// bl 0x824215d0
	ctx.lr = 0x83041C24;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,826(r11)
	PPC_STORE_U8(ctx.r11.u32 + 826, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041C40"))) PPC_WEAK_FUNC(sub_83041C40);
PPC_FUNC_IMPL(__imp__sub_83041C40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32480
	ctx.r4.s64 = ctx.r11.s64 + 32480;
	// bl 0x824215d0
	ctx.lr = 0x83041C5C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83041C78"))) PPC_WEAK_FUNC(sub_83041C78);
PPC_FUNC_IMPL(__imp__sub_83041C78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32484
	ctx.r4.s64 = ctx.r11.s64 + 32484;
	// bl 0x824215d0
	ctx.lr = 0x83041C94;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2576, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041CB0"))) PPC_WEAK_FUNC(sub_83041CB0);
PPC_FUNC_IMPL(__imp__sub_83041CB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32488
	ctx.r4.s64 = ctx.r11.s64 + 32488;
	// bl 0x824215d0
	ctx.lr = 0x83041CCC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,660(r11)
	PPC_STORE_U8(ctx.r11.u32 + 660, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041CE8"))) PPC_WEAK_FUNC(sub_83041CE8);
PPC_FUNC_IMPL(__imp__sub_83041CE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32492
	ctx.r4.s64 = ctx.r11.s64 + 32492;
	// bl 0x824215d0
	ctx.lr = 0x83041D04;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2837(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2837, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D20"))) PPC_WEAK_FUNC(sub_83041D20);
PPC_FUNC_IMPL(__imp__sub_83041D20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32496
	ctx.r4.s64 = ctx.r11.s64 + 32496;
	// bl 0x824215d0
	ctx.lr = 0x83041D3C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,522(r11)
	PPC_STORE_U8(ctx.r11.u32 + 522, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D58"))) PPC_WEAK_FUNC(sub_83041D58);
PPC_FUNC_IMPL(__imp__sub_83041D58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32500
	ctx.r4.s64 = ctx.r11.s64 + 32500;
	// bl 0x824215d0
	ctx.lr = 0x83041D74;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1973(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1973, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041D90"))) PPC_WEAK_FUNC(sub_83041D90);
PPC_FUNC_IMPL(__imp__sub_83041D90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32504
	ctx.r4.s64 = ctx.r11.s64 + 32504;
	// bl 0x824215d0
	ctx.lr = 0x83041DAC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83041DC8"))) PPC_WEAK_FUNC(sub_83041DC8);
PPC_FUNC_IMPL(__imp__sub_83041DC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32508
	ctx.r4.s64 = ctx.r11.s64 + 32508;
	// bl 0x824215d0
	ctx.lr = 0x83041DE4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-505(r11)
	PPC_STORE_U8(ctx.r11.u32 + -505, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041E00"))) PPC_WEAK_FUNC(sub_83041E00);
PPC_FUNC_IMPL(__imp__sub_83041E00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32512
	ctx.r4.s64 = ctx.r11.s64 + 32512;
	// bl 0x824215d0
	ctx.lr = 0x83041E1C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-763(r11)
	PPC_STORE_U8(ctx.r11.u32 + -763, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041E38"))) PPC_WEAK_FUNC(sub_83041E38);
PPC_FUNC_IMPL(__imp__sub_83041E38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32516
	ctx.r4.s64 = ctx.r11.s64 + 32516;
	// bl 0x824215d0
	ctx.lr = 0x83041E54;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3102(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3102, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041E70"))) PPC_WEAK_FUNC(sub_83041E70);
PPC_FUNC_IMPL(__imp__sub_83041E70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32520
	ctx.r4.s64 = ctx.r11.s64 + 32520;
	// bl 0x824215d0
	ctx.lr = 0x83041E8C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2776(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2776, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041EA8"))) PPC_WEAK_FUNC(sub_83041EA8);
PPC_FUNC_IMPL(__imp__sub_83041EA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32524
	ctx.r4.s64 = ctx.r11.s64 + 32524;
	// bl 0x824215d0
	ctx.lr = 0x83041EC4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3075(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3075, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041EE0"))) PPC_WEAK_FUNC(sub_83041EE0);
PPC_FUNC_IMPL(__imp__sub_83041EE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32528
	ctx.r4.s64 = ctx.r11.s64 + 32528;
	// bl 0x824215d0
	ctx.lr = 0x83041EFC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83041F18"))) PPC_WEAK_FUNC(sub_83041F18);
PPC_FUNC_IMPL(__imp__sub_83041F18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32532
	ctx.r4.s64 = ctx.r11.s64 + 32532;
	// bl 0x824215d0
	ctx.lr = 0x83041F34;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,844(r11)
	PPC_STORE_U8(ctx.r11.u32 + 844, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041F50"))) PPC_WEAK_FUNC(sub_83041F50);
PPC_FUNC_IMPL(__imp__sub_83041F50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32536
	ctx.r4.s64 = ctx.r11.s64 + 32536;
	// bl 0x824215d0
	ctx.lr = 0x83041F6C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-791(r11)
	PPC_STORE_U8(ctx.r11.u32 + -791, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041F88"))) PPC_WEAK_FUNC(sub_83041F88);
PPC_FUNC_IMPL(__imp__sub_83041F88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32540
	ctx.r4.s64 = ctx.r11.s64 + 32540;
	// bl 0x824215d0
	ctx.lr = 0x83041FA4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-300(r11)
	PPC_STORE_U8(ctx.r11.u32 + -300, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041FC0"))) PPC_WEAK_FUNC(sub_83041FC0);
PPC_FUNC_IMPL(__imp__sub_83041FC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32544
	ctx.r4.s64 = ctx.r11.s64 + 32544;
	// bl 0x824215d0
	ctx.lr = 0x83041FDC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-194(r11)
	PPC_STORE_U8(ctx.r11.u32 + -194, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83041FF8"))) PPC_WEAK_FUNC(sub_83041FF8);
PPC_FUNC_IMPL(__imp__sub_83041FF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32548
	ctx.r4.s64 = ctx.r11.s64 + 32548;
	// bl 0x824215d0
	ctx.lr = 0x83042014;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3245(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3245, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042030"))) PPC_WEAK_FUNC(sub_83042030);
PPC_FUNC_IMPL(__imp__sub_83042030) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32552
	ctx.r4.s64 = ctx.r11.s64 + 32552;
	// bl 0x824215d0
	ctx.lr = 0x8304204C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1044(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1044, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042068"))) PPC_WEAK_FUNC(sub_83042068);
PPC_FUNC_IMPL(__imp__sub_83042068) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32556
	ctx.r4.s64 = ctx.r11.s64 + 32556;
	// bl 0x824215d0
	ctx.lr = 0x83042084;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1116, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830420A0"))) PPC_WEAK_FUNC(sub_830420A0);
PPC_FUNC_IMPL(__imp__sub_830420A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32560
	ctx.r4.s64 = ctx.r11.s64 + 32560;
	// bl 0x824215d0
	ctx.lr = 0x830420BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830420D8"))) PPC_WEAK_FUNC(sub_830420D8);
PPC_FUNC_IMPL(__imp__sub_830420D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32564
	ctx.r4.s64 = ctx.r11.s64 + 32564;
	// bl 0x824215d0
	ctx.lr = 0x830420F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042110"))) PPC_WEAK_FUNC(sub_83042110);
PPC_FUNC_IMPL(__imp__sub_83042110) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32568
	ctx.r4.s64 = ctx.r11.s64 + 32568;
	// bl 0x824215d0
	ctx.lr = 0x8304212C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1451(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1451, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042148"))) PPC_WEAK_FUNC(sub_83042148);
PPC_FUNC_IMPL(__imp__sub_83042148) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32572
	ctx.r4.s64 = ctx.r11.s64 + 32572;
	// bl 0x824215d0
	ctx.lr = 0x83042164;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042180"))) PPC_WEAK_FUNC(sub_83042180);
PPC_FUNC_IMPL(__imp__sub_83042180) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32576
	ctx.r4.s64 = ctx.r11.s64 + 32576;
	// bl 0x824215d0
	ctx.lr = 0x8304219C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2417(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2417, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830421B8"))) PPC_WEAK_FUNC(sub_830421B8);
PPC_FUNC_IMPL(__imp__sub_830421B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32580
	ctx.r4.s64 = ctx.r11.s64 + 32580;
	// bl 0x824215d0
	ctx.lr = 0x830421D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2416(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2416, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830421F0"))) PPC_WEAK_FUNC(sub_830421F0);
PPC_FUNC_IMPL(__imp__sub_830421F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32584
	ctx.r4.s64 = ctx.r11.s64 + 32584;
	// bl 0x824215d0
	ctx.lr = 0x8304220C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-595(r11)
	PPC_STORE_U8(ctx.r11.u32 + -595, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042228"))) PPC_WEAK_FUNC(sub_83042228);
PPC_FUNC_IMPL(__imp__sub_83042228) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32588
	ctx.r4.s64 = ctx.r11.s64 + 32588;
	// bl 0x824215d0
	ctx.lr = 0x83042244;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1297(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1297, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042260"))) PPC_WEAK_FUNC(sub_83042260);
PPC_FUNC_IMPL(__imp__sub_83042260) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32592
	ctx.r4.s64 = ctx.r11.s64 + 32592;
	// bl 0x824215d0
	ctx.lr = 0x8304227C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042298"))) PPC_WEAK_FUNC(sub_83042298);
PPC_FUNC_IMPL(__imp__sub_83042298) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32596
	ctx.r4.s64 = ctx.r11.s64 + 32596;
	// bl 0x824215d0
	ctx.lr = 0x830422B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2315(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2315, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830422D0"))) PPC_WEAK_FUNC(sub_830422D0);
PPC_FUNC_IMPL(__imp__sub_830422D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32600
	ctx.r4.s64 = ctx.r11.s64 + 32600;
	// bl 0x824215d0
	ctx.lr = 0x830422EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-206(r11)
	PPC_STORE_U8(ctx.r11.u32 + -206, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042308"))) PPC_WEAK_FUNC(sub_83042308);
PPC_FUNC_IMPL(__imp__sub_83042308) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32604
	ctx.r4.s64 = ctx.r11.s64 + 32604;
	// bl 0x824215d0
	ctx.lr = 0x83042324;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1634(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1634, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042340"))) PPC_WEAK_FUNC(sub_83042340);
PPC_FUNC_IMPL(__imp__sub_83042340) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32608
	ctx.r4.s64 = ctx.r11.s64 + 32608;
	// bl 0x824215d0
	ctx.lr = 0x8304235C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-838(r11)
	PPC_STORE_U8(ctx.r11.u32 + -838, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042378"))) PPC_WEAK_FUNC(sub_83042378);
PPC_FUNC_IMPL(__imp__sub_83042378) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32612
	ctx.r4.s64 = ctx.r11.s64 + 32612;
	// bl 0x824215d0
	ctx.lr = 0x83042394;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2498(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2498, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830423B0"))) PPC_WEAK_FUNC(sub_830423B0);
PPC_FUNC_IMPL(__imp__sub_830423B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32616
	ctx.r4.s64 = ctx.r11.s64 + 32616;
	// bl 0x824215d0
	ctx.lr = 0x830423CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3293(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3293, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830423E8"))) PPC_WEAK_FUNC(sub_830423E8);
PPC_FUNC_IMPL(__imp__sub_830423E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32620
	ctx.r4.s64 = ctx.r11.s64 + 32620;
	// bl 0x824215d0
	ctx.lr = 0x83042404;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042420"))) PPC_WEAK_FUNC(sub_83042420);
PPC_FUNC_IMPL(__imp__sub_83042420) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32624
	ctx.r4.s64 = ctx.r11.s64 + 32624;
	// bl 0x824215d0
	ctx.lr = 0x8304243C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-764(r11)
	PPC_STORE_U8(ctx.r11.u32 + -764, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042458"))) PPC_WEAK_FUNC(sub_83042458);
PPC_FUNC_IMPL(__imp__sub_83042458) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32628
	ctx.r4.s64 = ctx.r11.s64 + 32628;
	// bl 0x824215d0
	ctx.lr = 0x83042474;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042490"))) PPC_WEAK_FUNC(sub_83042490);
PPC_FUNC_IMPL(__imp__sub_83042490) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32632
	ctx.r4.s64 = ctx.r11.s64 + 32632;
	// bl 0x824215d0
	ctx.lr = 0x830424AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2414(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2414, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830424C8"))) PPC_WEAK_FUNC(sub_830424C8);
PPC_FUNC_IMPL(__imp__sub_830424C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32636
	ctx.r4.s64 = ctx.r11.s64 + 32636;
	// bl 0x824215d0
	ctx.lr = 0x830424E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042500"))) PPC_WEAK_FUNC(sub_83042500);
PPC_FUNC_IMPL(__imp__sub_83042500) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32640
	ctx.r4.s64 = ctx.r11.s64 + 32640;
	// bl 0x824215d0
	ctx.lr = 0x8304251C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,440(r11)
	PPC_STORE_U8(ctx.r11.u32 + 440, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042538"))) PPC_WEAK_FUNC(sub_83042538);
PPC_FUNC_IMPL(__imp__sub_83042538) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32644
	ctx.r4.s64 = ctx.r11.s64 + 32644;
	// bl 0x824215d0
	ctx.lr = 0x83042554;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1746(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1746, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042570"))) PPC_WEAK_FUNC(sub_83042570);
PPC_FUNC_IMPL(__imp__sub_83042570) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32648
	ctx.r4.s64 = ctx.r11.s64 + 32648;
	// bl 0x824215d0
	ctx.lr = 0x8304258C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,796(r11)
	PPC_STORE_U8(ctx.r11.u32 + 796, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830425A8"))) PPC_WEAK_FUNC(sub_830425A8);
PPC_FUNC_IMPL(__imp__sub_830425A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32652
	ctx.r4.s64 = ctx.r11.s64 + 32652;
	// bl 0x824215d0
	ctx.lr = 0x830425C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830425E0"))) PPC_WEAK_FUNC(sub_830425E0);
PPC_FUNC_IMPL(__imp__sub_830425E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32656
	ctx.r4.s64 = ctx.r11.s64 + 32656;
	// bl 0x824215d0
	ctx.lr = 0x830425FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,354(r11)
	PPC_STORE_U8(ctx.r11.u32 + 354, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042618"))) PPC_WEAK_FUNC(sub_83042618);
PPC_FUNC_IMPL(__imp__sub_83042618) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32660
	ctx.r4.s64 = ctx.r11.s64 + 32660;
	// bl 0x824215d0
	ctx.lr = 0x83042634;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-650(r11)
	PPC_STORE_U8(ctx.r11.u32 + -650, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042650"))) PPC_WEAK_FUNC(sub_83042650);
PPC_FUNC_IMPL(__imp__sub_83042650) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32664
	ctx.r4.s64 = ctx.r11.s64 + 32664;
	// bl 0x824215d0
	ctx.lr = 0x8304266C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-740(r11)
	PPC_STORE_U8(ctx.r11.u32 + -740, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042688"))) PPC_WEAK_FUNC(sub_83042688);
PPC_FUNC_IMPL(__imp__sub_83042688) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32668
	ctx.r4.s64 = ctx.r11.s64 + 32668;
	// bl 0x824215d0
	ctx.lr = 0x830426A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1647(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1647, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830426C0"))) PPC_WEAK_FUNC(sub_830426C0);
PPC_FUNC_IMPL(__imp__sub_830426C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32672
	ctx.r4.s64 = ctx.r11.s64 + 32672;
	// bl 0x824215d0
	ctx.lr = 0x830426DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-144(r11)
	PPC_STORE_U8(ctx.r11.u32 + -144, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830426F8"))) PPC_WEAK_FUNC(sub_830426F8);
PPC_FUNC_IMPL(__imp__sub_830426F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32676
	ctx.r4.s64 = ctx.r11.s64 + 32676;
	// bl 0x824215d0
	ctx.lr = 0x83042714;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1339(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1339, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042730"))) PPC_WEAK_FUNC(sub_83042730);
PPC_FUNC_IMPL(__imp__sub_83042730) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32680
	ctx.r4.s64 = ctx.r11.s64 + 32680;
	// bl 0x824215d0
	ctx.lr = 0x8304274C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1359(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1359, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042768"))) PPC_WEAK_FUNC(sub_83042768);
PPC_FUNC_IMPL(__imp__sub_83042768) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// bl 0x824215d0
	ctx.lr = 0x83042784;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-652(r11)
	PPC_STORE_U8(ctx.r11.u32 + -652, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830427A0"))) PPC_WEAK_FUNC(sub_830427A0);
PPC_FUNC_IMPL(__imp__sub_830427A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32688
	ctx.r4.s64 = ctx.r11.s64 + 32688;
	// bl 0x824215d0
	ctx.lr = 0x830427BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1211(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1211, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830427D8"))) PPC_WEAK_FUNC(sub_830427D8);
PPC_FUNC_IMPL(__imp__sub_830427D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32692
	ctx.r4.s64 = ctx.r11.s64 + 32692;
	// bl 0x824215d0
	ctx.lr = 0x830427F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3253(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3253, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042810"))) PPC_WEAK_FUNC(sub_83042810);
PPC_FUNC_IMPL(__imp__sub_83042810) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32696
	ctx.r4.s64 = ctx.r11.s64 + 32696;
	// bl 0x824215d0
	ctx.lr = 0x8304282C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042848"))) PPC_WEAK_FUNC(sub_83042848);
PPC_FUNC_IMPL(__imp__sub_83042848) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32700
	ctx.r4.s64 = ctx.r11.s64 + 32700;
	// bl 0x824215d0
	ctx.lr = 0x83042864;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1962(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1962, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042880"))) PPC_WEAK_FUNC(sub_83042880);
PPC_FUNC_IMPL(__imp__sub_83042880) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32704
	ctx.r4.s64 = ctx.r11.s64 + 32704;
	// bl 0x824215d0
	ctx.lr = 0x8304289C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-566(r11)
	PPC_STORE_U8(ctx.r11.u32 + -566, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830428B8"))) PPC_WEAK_FUNC(sub_830428B8);
PPC_FUNC_IMPL(__imp__sub_830428B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32708
	ctx.r4.s64 = ctx.r11.s64 + 32708;
	// bl 0x824215d0
	ctx.lr = 0x830428D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,474(r11)
	PPC_STORE_U8(ctx.r11.u32 + 474, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830428F0"))) PPC_WEAK_FUNC(sub_830428F0);
PPC_FUNC_IMPL(__imp__sub_830428F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32712
	ctx.r4.s64 = ctx.r11.s64 + 32712;
	// bl 0x824215d0
	ctx.lr = 0x8304290C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042928"))) PPC_WEAK_FUNC(sub_83042928);
PPC_FUNC_IMPL(__imp__sub_83042928) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32716
	ctx.r4.s64 = ctx.r11.s64 + 32716;
	// bl 0x824215d0
	ctx.lr = 0x83042944;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1210(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1210, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042960"))) PPC_WEAK_FUNC(sub_83042960);
PPC_FUNC_IMPL(__imp__sub_83042960) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32720
	ctx.r4.s64 = ctx.r11.s64 + 32720;
	// bl 0x824215d0
	ctx.lr = 0x8304297C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042998"))) PPC_WEAK_FUNC(sub_83042998);
PPC_FUNC_IMPL(__imp__sub_83042998) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32724
	ctx.r4.s64 = ctx.r11.s64 + 32724;
	// bl 0x824215d0
	ctx.lr = 0x830429B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1537(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1537, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830429D0"))) PPC_WEAK_FUNC(sub_830429D0);
PPC_FUNC_IMPL(__imp__sub_830429D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32728
	ctx.r4.s64 = ctx.r11.s64 + 32728;
	// bl 0x824215d0
	ctx.lr = 0x830429EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1417(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1417, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042A08"))) PPC_WEAK_FUNC(sub_83042A08);
PPC_FUNC_IMPL(__imp__sub_83042A08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32732
	ctx.r4.s64 = ctx.r11.s64 + 32732;
	// bl 0x824215d0
	ctx.lr = 0x83042A24;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042A40"))) PPC_WEAK_FUNC(sub_83042A40);
PPC_FUNC_IMPL(__imp__sub_83042A40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32736
	ctx.r4.s64 = ctx.r11.s64 + 32736;
	// bl 0x824215d0
	ctx.lr = 0x83042A5C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-762(r11)
	PPC_STORE_U8(ctx.r11.u32 + -762, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042A78"))) PPC_WEAK_FUNC(sub_83042A78);
PPC_FUNC_IMPL(__imp__sub_83042A78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32740
	ctx.r4.s64 = ctx.r11.s64 + 32740;
	// bl 0x824215d0
	ctx.lr = 0x83042A94;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2375(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2375, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042AB0"))) PPC_WEAK_FUNC(sub_83042AB0);
PPC_FUNC_IMPL(__imp__sub_83042AB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32744
	ctx.r4.s64 = ctx.r11.s64 + 32744;
	// bl 0x824215d0
	ctx.lr = 0x83042ACC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1481(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1481, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042AE8"))) PPC_WEAK_FUNC(sub_83042AE8);
PPC_FUNC_IMPL(__imp__sub_83042AE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32748
	ctx.r4.s64 = ctx.r11.s64 + 32748;
	// bl 0x824215d0
	ctx.lr = 0x83042B04;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1598(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1598, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042B20"))) PPC_WEAK_FUNC(sub_83042B20);
PPC_FUNC_IMPL(__imp__sub_83042B20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32752
	ctx.r4.s64 = ctx.r11.s64 + 32752;
	// bl 0x824215d0
	ctx.lr = 0x83042B3C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1731(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1731, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042B58"))) PPC_WEAK_FUNC(sub_83042B58);
PPC_FUNC_IMPL(__imp__sub_83042B58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32756
	ctx.r4.s64 = ctx.r11.s64 + 32756;
	// bl 0x824215d0
	ctx.lr = 0x83042B74;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-565(r11)
	PPC_STORE_U8(ctx.r11.u32 + -565, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042B90"))) PPC_WEAK_FUNC(sub_83042B90);
PPC_FUNC_IMPL(__imp__sub_83042B90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32760
	ctx.r4.s64 = ctx.r11.s64 + 32760;
	// bl 0x824215d0
	ctx.lr = 0x83042BAC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1256(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1256, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042BC8"))) PPC_WEAK_FUNC(sub_83042BC8);
PPC_FUNC_IMPL(__imp__sub_83042BC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,32764
	ctx.r4.s64 = ctx.r11.s64 + 32764;
	// bl 0x824215d0
	ctx.lr = 0x83042BE4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1905(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1905, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C00"))) PPC_WEAK_FUNC(sub_83042C00);
PPC_FUNC_IMPL(__imp__sub_83042C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32768
	ctx.r4.s64 = ctx.r11.s64 + -32768;
	// bl 0x824215d0
	ctx.lr = 0x83042C1C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-528(r11)
	PPC_STORE_U8(ctx.r11.u32 + -528, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C38"))) PPC_WEAK_FUNC(sub_83042C38);
PPC_FUNC_IMPL(__imp__sub_83042C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32764
	ctx.r4.s64 = ctx.r11.s64 + -32764;
	// bl 0x824215d0
	ctx.lr = 0x83042C54;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1167(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1167, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042C70"))) PPC_WEAK_FUNC(sub_83042C70);
PPC_FUNC_IMPL(__imp__sub_83042C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32760
	ctx.r4.s64 = ctx.r11.s64 + -32760;
	// bl 0x824215d0
	ctx.lr = 0x83042C8C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-663(r11)
	PPC_STORE_U8(ctx.r11.u32 + -663, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042CA8"))) PPC_WEAK_FUNC(sub_83042CA8);
PPC_FUNC_IMPL(__imp__sub_83042CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32756
	ctx.r4.s64 = ctx.r11.s64 + -32756;
	// bl 0x824215d0
	ctx.lr = 0x83042CC4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1911(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1911, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042CE0"))) PPC_WEAK_FUNC(sub_83042CE0);
PPC_FUNC_IMPL(__imp__sub_83042CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32752
	ctx.r4.s64 = ctx.r11.s64 + -32752;
	// bl 0x824215d0
	ctx.lr = 0x83042CFC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,824(r11)
	PPC_STORE_U8(ctx.r11.u32 + 824, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042D18"))) PPC_WEAK_FUNC(sub_83042D18);
PPC_FUNC_IMPL(__imp__sub_83042D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32748
	ctx.r4.s64 = ctx.r11.s64 + -32748;
	// bl 0x824215d0
	ctx.lr = 0x83042D34;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042D50"))) PPC_WEAK_FUNC(sub_83042D50);
PPC_FUNC_IMPL(__imp__sub_83042D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32744
	ctx.r4.s64 = ctx.r11.s64 + -32744;
	// bl 0x824215d0
	ctx.lr = 0x83042D6C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2939(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2939, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042D88"))) PPC_WEAK_FUNC(sub_83042D88);
PPC_FUNC_IMPL(__imp__sub_83042D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32740
	ctx.r4.s64 = ctx.r11.s64 + -32740;
	// bl 0x824215d0
	ctx.lr = 0x83042DA4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042DC0"))) PPC_WEAK_FUNC(sub_83042DC0);
PPC_FUNC_IMPL(__imp__sub_83042DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32736
	ctx.r4.s64 = ctx.r11.s64 + -32736;
	// bl 0x824215d0
	ctx.lr = 0x83042DDC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042DF8"))) PPC_WEAK_FUNC(sub_83042DF8);
PPC_FUNC_IMPL(__imp__sub_83042DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32732
	ctx.r4.s64 = ctx.r11.s64 + -32732;
	// bl 0x824215d0
	ctx.lr = 0x83042E14;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,314(r11)
	PPC_STORE_U8(ctx.r11.u32 + 314, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042E30"))) PPC_WEAK_FUNC(sub_83042E30);
PPC_FUNC_IMPL(__imp__sub_83042E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32728
	ctx.r4.s64 = ctx.r11.s64 + -32728;
	// bl 0x824215d0
	ctx.lr = 0x83042E4C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83042E68"))) PPC_WEAK_FUNC(sub_83042E68);
PPC_FUNC_IMPL(__imp__sub_83042E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32724
	ctx.r4.s64 = ctx.r11.s64 + -32724;
	// bl 0x824215d0
	ctx.lr = 0x83042E84;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1956(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1956, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042EA0"))) PPC_WEAK_FUNC(sub_83042EA0);
PPC_FUNC_IMPL(__imp__sub_83042EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32720
	ctx.r4.s64 = ctx.r11.s64 + -32720;
	// bl 0x824215d0
	ctx.lr = 0x83042EBC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2091(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2091, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042ED8"))) PPC_WEAK_FUNC(sub_83042ED8);
PPC_FUNC_IMPL(__imp__sub_83042ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32716
	ctx.r4.s64 = ctx.r11.s64 + -32716;
	// bl 0x824215d0
	ctx.lr = 0x83042EF4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-99(r11)
	PPC_STORE_U8(ctx.r11.u32 + -99, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042F10"))) PPC_WEAK_FUNC(sub_83042F10);
PPC_FUNC_IMPL(__imp__sub_83042F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32712
	ctx.r4.s64 = ctx.r11.s64 + -32712;
	// bl 0x824215d0
	ctx.lr = 0x83042F2C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1358(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1358, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042F48"))) PPC_WEAK_FUNC(sub_83042F48);
PPC_FUNC_IMPL(__imp__sub_83042F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32708
	ctx.r4.s64 = ctx.r11.s64 + -32708;
	// bl 0x824215d0
	ctx.lr = 0x83042F64;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1170(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1170, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042F80"))) PPC_WEAK_FUNC(sub_83042F80);
PPC_FUNC_IMPL(__imp__sub_83042F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32704
	ctx.r4.s64 = ctx.r11.s64 + -32704;
	// bl 0x824215d0
	ctx.lr = 0x83042F9C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-526(r11)
	PPC_STORE_U8(ctx.r11.u32 + -526, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042FB8"))) PPC_WEAK_FUNC(sub_83042FB8);
PPC_FUNC_IMPL(__imp__sub_83042FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32700
	ctx.r4.s64 = ctx.r11.s64 + -32700;
	// bl 0x824215d0
	ctx.lr = 0x83042FD4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-97(r11)
	PPC_STORE_U8(ctx.r11.u32 + -97, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83042FF0"))) PPC_WEAK_FUNC(sub_83042FF0);
PPC_FUNC_IMPL(__imp__sub_83042FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32696
	ctx.r4.s64 = ctx.r11.s64 + -32696;
	// bl 0x824215d0
	ctx.lr = 0x8304300C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1978(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1978, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043028"))) PPC_WEAK_FUNC(sub_83043028);
PPC_FUNC_IMPL(__imp__sub_83043028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32692
	ctx.r4.s64 = ctx.r11.s64 + -32692;
	// bl 0x824215d0
	ctx.lr = 0x83043044;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2254(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2254, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043060"))) PPC_WEAK_FUNC(sub_83043060);
PPC_FUNC_IMPL(__imp__sub_83043060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32688
	ctx.r4.s64 = ctx.r11.s64 + -32688;
	// bl 0x824215d0
	ctx.lr = 0x8304307C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1595(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1595, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043098"))) PPC_WEAK_FUNC(sub_83043098);
PPC_FUNC_IMPL(__imp__sub_83043098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32684
	ctx.r4.s64 = ctx.r11.s64 + -32684;
	// bl 0x824215d0
	ctx.lr = 0x830430B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3172(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3172, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830430D0"))) PPC_WEAK_FUNC(sub_830430D0);
PPC_FUNC_IMPL(__imp__sub_830430D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32680
	ctx.r4.s64 = ctx.r11.s64 + -32680;
	// bl 0x824215d0
	ctx.lr = 0x830430EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,261(r11)
	PPC_STORE_U8(ctx.r11.u32 + 261, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043108"))) PPC_WEAK_FUNC(sub_83043108);
PPC_FUNC_IMPL(__imp__sub_83043108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32676
	ctx.r4.s64 = ctx.r11.s64 + -32676;
	// bl 0x824215d0
	ctx.lr = 0x83043124;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2014(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2014, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043140"))) PPC_WEAK_FUNC(sub_83043140);
PPC_FUNC_IMPL(__imp__sub_83043140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32672
	ctx.r4.s64 = ctx.r11.s64 + -32672;
	// bl 0x824215d0
	ctx.lr = 0x8304315C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2386(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2386, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043178"))) PPC_WEAK_FUNC(sub_83043178);
PPC_FUNC_IMPL(__imp__sub_83043178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32668
	ctx.r4.s64 = ctx.r11.s64 + -32668;
	// bl 0x824215d0
	ctx.lr = 0x83043194;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-819(r11)
	PPC_STORE_U8(ctx.r11.u32 + -819, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830431B0"))) PPC_WEAK_FUNC(sub_830431B0);
PPC_FUNC_IMPL(__imp__sub_830431B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32664
	ctx.r4.s64 = ctx.r11.s64 + -32664;
	// bl 0x824215d0
	ctx.lr = 0x830431CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1608(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1608, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830431E8"))) PPC_WEAK_FUNC(sub_830431E8);
PPC_FUNC_IMPL(__imp__sub_830431E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32660
	ctx.r4.s64 = ctx.r11.s64 + -32660;
	// bl 0x824215d0
	ctx.lr = 0x83043204;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-234(r11)
	PPC_STORE_U8(ctx.r11.u32 + -234, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043220"))) PPC_WEAK_FUNC(sub_83043220);
PPC_FUNC_IMPL(__imp__sub_83043220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32656
	ctx.r4.s64 = ctx.r11.s64 + -32656;
	// bl 0x824215d0
	ctx.lr = 0x8304323C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1624(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1624, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043258"))) PPC_WEAK_FUNC(sub_83043258);
PPC_FUNC_IMPL(__imp__sub_83043258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32652
	ctx.r4.s64 = ctx.r11.s64 + -32652;
	// bl 0x824215d0
	ctx.lr = 0x83043274;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1169(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1169, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043290"))) PPC_WEAK_FUNC(sub_83043290);
PPC_FUNC_IMPL(__imp__sub_83043290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32648
	ctx.r4.s64 = ctx.r11.s64 + -32648;
	// bl 0x824215d0
	ctx.lr = 0x830432AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830432C8"))) PPC_WEAK_FUNC(sub_830432C8);
PPC_FUNC_IMPL(__imp__sub_830432C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32644
	ctx.r4.s64 = ctx.r11.s64 + -32644;
	// bl 0x824215d0
	ctx.lr = 0x830432E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1222(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1222, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043300"))) PPC_WEAK_FUNC(sub_83043300);
PPC_FUNC_IMPL(__imp__sub_83043300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32640
	ctx.r4.s64 = ctx.r11.s64 + -32640;
	// bl 0x824215d0
	ctx.lr = 0x8304331C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1828(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1828, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043338"))) PPC_WEAK_FUNC(sub_83043338);
PPC_FUNC_IMPL(__imp__sub_83043338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32636
	ctx.r4.s64 = ctx.r11.s64 + -32636;
	// bl 0x824215d0
	ctx.lr = 0x83043354;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3173(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3173, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043370"))) PPC_WEAK_FUNC(sub_83043370);
PPC_FUNC_IMPL(__imp__sub_83043370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32632
	ctx.r4.s64 = ctx.r11.s64 + -32632;
	// bl 0x824215d0
	ctx.lr = 0x8304338C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1963(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1963, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830433A8"))) PPC_WEAK_FUNC(sub_830433A8);
PPC_FUNC_IMPL(__imp__sub_830433A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32628
	ctx.r4.s64 = ctx.r11.s64 + -32628;
	// bl 0x824215d0
	ctx.lr = 0x830433C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2297(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2297, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830433E0"))) PPC_WEAK_FUNC(sub_830433E0);
PPC_FUNC_IMPL(__imp__sub_830433E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32624
	ctx.r4.s64 = ctx.r11.s64 + -32624;
	// bl 0x824215d0
	ctx.lr = 0x830433FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2577(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2577, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043418"))) PPC_WEAK_FUNC(sub_83043418);
PPC_FUNC_IMPL(__imp__sub_83043418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32620
	ctx.r4.s64 = ctx.r11.s64 + -32620;
	// bl 0x824215d0
	ctx.lr = 0x83043434;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2387(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2387, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043450"))) PPC_WEAK_FUNC(sub_83043450);
PPC_FUNC_IMPL(__imp__sub_83043450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32616
	ctx.r4.s64 = ctx.r11.s64 + -32616;
	// bl 0x824215d0
	ctx.lr = 0x8304346C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-752(r11)
	PPC_STORE_U8(ctx.r11.u32 + -752, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043488"))) PPC_WEAK_FUNC(sub_83043488);
PPC_FUNC_IMPL(__imp__sub_83043488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32612
	ctx.r4.s64 = ctx.r11.s64 + -32612;
	// bl 0x824215d0
	ctx.lr = 0x830434A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3174(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3174, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830434C0"))) PPC_WEAK_FUNC(sub_830434C0);
PPC_FUNC_IMPL(__imp__sub_830434C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32608
	ctx.r4.s64 = ctx.r11.s64 + -32608;
	// bl 0x824215d0
	ctx.lr = 0x830434DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2384(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2384, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830434F8"))) PPC_WEAK_FUNC(sub_830434F8);
PPC_FUNC_IMPL(__imp__sub_830434F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32604
	ctx.r4.s64 = ctx.r11.s64 + -32604;
	// bl 0x824215d0
	ctx.lr = 0x83043514;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1426(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1426, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043530"))) PPC_WEAK_FUNC(sub_83043530);
PPC_FUNC_IMPL(__imp__sub_83043530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32600
	ctx.r4.s64 = ctx.r11.s64 + -32600;
	// bl 0x824215d0
	ctx.lr = 0x8304354C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-312(r11)
	PPC_STORE_U8(ctx.r11.u32 + -312, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043568"))) PPC_WEAK_FUNC(sub_83043568);
PPC_FUNC_IMPL(__imp__sub_83043568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32596
	ctx.r4.s64 = ctx.r11.s64 + -32596;
	// bl 0x824215d0
	ctx.lr = 0x83043584;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1825(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1825, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830435A0"))) PPC_WEAK_FUNC(sub_830435A0);
PPC_FUNC_IMPL(__imp__sub_830435A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32592
	ctx.r4.s64 = ctx.r11.s64 + -32592;
	// bl 0x824215d0
	ctx.lr = 0x830435BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1593(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1593, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830435D8"))) PPC_WEAK_FUNC(sub_830435D8);
PPC_FUNC_IMPL(__imp__sub_830435D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32588
	ctx.r4.s64 = ctx.r11.s64 + -32588;
	// bl 0x824215d0
	ctx.lr = 0x830435F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-738(r11)
	PPC_STORE_U8(ctx.r11.u32 + -738, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043610"))) PPC_WEAK_FUNC(sub_83043610);
PPC_FUNC_IMPL(__imp__sub_83043610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32584
	ctx.r4.s64 = ctx.r11.s64 + -32584;
	// bl 0x824215d0
	ctx.lr = 0x8304362C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2309(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2309, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043648"))) PPC_WEAK_FUNC(sub_83043648);
PPC_FUNC_IMPL(__imp__sub_83043648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32580
	ctx.r4.s64 = ctx.r11.s64 + -32580;
	// bl 0x824215d0
	ctx.lr = 0x83043664;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-205(r11)
	PPC_STORE_U8(ctx.r11.u32 + -205, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

