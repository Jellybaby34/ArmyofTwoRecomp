#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8303C680"))) PPC_WEAK_FUNC(sub_8303C680);
PPC_FUNC_IMPL(__imp__sub_8303C680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30912
	ctx.r4.s64 = ctx.r11.s64 + 30912;
	// bl 0x824215d0
	ctx.lr = 0x8303C69C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2313(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2313, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C6B8"))) PPC_WEAK_FUNC(sub_8303C6B8);
PPC_FUNC_IMPL(__imp__sub_8303C6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30916
	ctx.r4.s64 = ctx.r11.s64 + 30916;
	// bl 0x824215d0
	ctx.lr = 0x8303C6D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303C6F0"))) PPC_WEAK_FUNC(sub_8303C6F0);
PPC_FUNC_IMPL(__imp__sub_8303C6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30920
	ctx.r4.s64 = ctx.r11.s64 + 30920;
	// bl 0x824215d0
	ctx.lr = 0x8303C70C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303C728"))) PPC_WEAK_FUNC(sub_8303C728);
PPC_FUNC_IMPL(__imp__sub_8303C728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30924
	ctx.r4.s64 = ctx.r11.s64 + 30924;
	// bl 0x824215d0
	ctx.lr = 0x8303C744;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2921(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2921, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C760"))) PPC_WEAK_FUNC(sub_8303C760);
PPC_FUNC_IMPL(__imp__sub_8303C760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30928
	ctx.r4.s64 = ctx.r11.s64 + 30928;
	// bl 0x824215d0
	ctx.lr = 0x8303C77C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1851(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1851, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C798"))) PPC_WEAK_FUNC(sub_8303C798);
PPC_FUNC_IMPL(__imp__sub_8303C798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30932
	ctx.r4.s64 = ctx.r11.s64 + 30932;
	// bl 0x824215d0
	ctx.lr = 0x8303C7B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1961(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1961, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C7D0"))) PPC_WEAK_FUNC(sub_8303C7D0);
PPC_FUNC_IMPL(__imp__sub_8303C7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30936
	ctx.r4.s64 = ctx.r11.s64 + 30936;
	// bl 0x824215d0
	ctx.lr = 0x8303C7EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303C808"))) PPC_WEAK_FUNC(sub_8303C808);
PPC_FUNC_IMPL(__imp__sub_8303C808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30940
	ctx.r4.s64 = ctx.r11.s64 + 30940;
	// bl 0x824215d0
	ctx.lr = 0x8303C824;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-548(r11)
	PPC_STORE_U8(ctx.r11.u32 + -548, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C840"))) PPC_WEAK_FUNC(sub_8303C840);
PPC_FUNC_IMPL(__imp__sub_8303C840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30944
	ctx.r4.s64 = ctx.r11.s64 + 30944;
	// bl 0x824215d0
	ctx.lr = 0x8303C85C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2115(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2115, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C878"))) PPC_WEAK_FUNC(sub_8303C878);
PPC_FUNC_IMPL(__imp__sub_8303C878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30948
	ctx.r4.s64 = ctx.r11.s64 + 30948;
	// bl 0x824215d0
	ctx.lr = 0x8303C894;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2969(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2969, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C8B0"))) PPC_WEAK_FUNC(sub_8303C8B0);
PPC_FUNC_IMPL(__imp__sub_8303C8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30952
	ctx.r4.s64 = ctx.r11.s64 + 30952;
	// bl 0x824215d0
	ctx.lr = 0x8303C8CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2579(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2579, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C8E8"))) PPC_WEAK_FUNC(sub_8303C8E8);
PPC_FUNC_IMPL(__imp__sub_8303C8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30956
	ctx.r4.s64 = ctx.r11.s64 + 30956;
	// bl 0x824215d0
	ctx.lr = 0x8303C904;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,353(r11)
	PPC_STORE_U8(ctx.r11.u32 + 353, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C920"))) PPC_WEAK_FUNC(sub_8303C920);
PPC_FUNC_IMPL(__imp__sub_8303C920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30960
	ctx.r4.s64 = ctx.r11.s64 + 30960;
	// bl 0x824215d0
	ctx.lr = 0x8303C93C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2205, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C958"))) PPC_WEAK_FUNC(sub_8303C958);
PPC_FUNC_IMPL(__imp__sub_8303C958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30964
	ctx.r4.s64 = ctx.r11.s64 + 30964;
	// bl 0x824215d0
	ctx.lr = 0x8303C974;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1977(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1977, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C990"))) PPC_WEAK_FUNC(sub_8303C990);
PPC_FUNC_IMPL(__imp__sub_8303C990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30968
	ctx.r4.s64 = ctx.r11.s64 + 30968;
	// bl 0x824215d0
	ctx.lr = 0x8303C9AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1887(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1887, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303C9C8"))) PPC_WEAK_FUNC(sub_8303C9C8);
PPC_FUNC_IMPL(__imp__sub_8303C9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30972
	ctx.r4.s64 = ctx.r11.s64 + 30972;
	// bl 0x824215d0
	ctx.lr = 0x8303C9E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1968(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1968, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CA00"))) PPC_WEAK_FUNC(sub_8303CA00);
PPC_FUNC_IMPL(__imp__sub_8303CA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30976
	ctx.r4.s64 = ctx.r11.s64 + 30976;
	// bl 0x824215d0
	ctx.lr = 0x8303CA1C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3175(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3175, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CA38"))) PPC_WEAK_FUNC(sub_8303CA38);
PPC_FUNC_IMPL(__imp__sub_8303CA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30980
	ctx.r4.s64 = ctx.r11.s64 + 30980;
	// bl 0x824215d0
	ctx.lr = 0x8303CA54;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2582(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2582, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CA70"))) PPC_WEAK_FUNC(sub_8303CA70);
PPC_FUNC_IMPL(__imp__sub_8303CA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30984
	ctx.r4.s64 = ctx.r11.s64 + 30984;
	// bl 0x824215d0
	ctx.lr = 0x8303CA8C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3265(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3265, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CAA8"))) PPC_WEAK_FUNC(sub_8303CAA8);
PPC_FUNC_IMPL(__imp__sub_8303CAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30988
	ctx.r4.s64 = ctx.r11.s64 + 30988;
	// bl 0x824215d0
	ctx.lr = 0x8303CAC4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1418(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1418, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CAE0"))) PPC_WEAK_FUNC(sub_8303CAE0);
PPC_FUNC_IMPL(__imp__sub_8303CAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30992
	ctx.r4.s64 = ctx.r11.s64 + 30992;
	// bl 0x824215d0
	ctx.lr = 0x8303CAFC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3107(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3107, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CB18"))) PPC_WEAK_FUNC(sub_8303CB18);
PPC_FUNC_IMPL(__imp__sub_8303CB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30996
	ctx.r4.s64 = ctx.r11.s64 + 30996;
	// bl 0x824215d0
	ctx.lr = 0x8303CB34;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,798(r11)
	PPC_STORE_U8(ctx.r11.u32 + 798, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CB50"))) PPC_WEAK_FUNC(sub_8303CB50);
PPC_FUNC_IMPL(__imp__sub_8303CB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31000
	ctx.r4.s64 = ctx.r11.s64 + 31000;
	// bl 0x824215d0
	ctx.lr = 0x8303CB6C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1747(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1747, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CB88"))) PPC_WEAK_FUNC(sub_8303CB88);
PPC_FUNC_IMPL(__imp__sub_8303CB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31004
	ctx.r4.s64 = ctx.r11.s64 + 31004;
	// bl 0x824215d0
	ctx.lr = 0x8303CBA4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-750(r11)
	PPC_STORE_U8(ctx.r11.u32 + -750, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CBC0"))) PPC_WEAK_FUNC(sub_8303CBC0);
PPC_FUNC_IMPL(__imp__sub_8303CBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31008
	ctx.r4.s64 = ctx.r11.s64 + 31008;
	// bl 0x824215d0
	ctx.lr = 0x8303CBDC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303CBF8"))) PPC_WEAK_FUNC(sub_8303CBF8);
PPC_FUNC_IMPL(__imp__sub_8303CBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31012
	ctx.r4.s64 = ctx.r11.s64 + 31012;
	// bl 0x824215d0
	ctx.lr = 0x8303CC14;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1175(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1175, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CC30"))) PPC_WEAK_FUNC(sub_8303CC30);
PPC_FUNC_IMPL(__imp__sub_8303CC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31016
	ctx.r4.s64 = ctx.r11.s64 + 31016;
	// bl 0x824215d0
	ctx.lr = 0x8303CC4C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2372(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2372, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CC68"))) PPC_WEAK_FUNC(sub_8303CC68);
PPC_FUNC_IMPL(__imp__sub_8303CC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31020
	ctx.r4.s64 = ctx.r11.s64 + 31020;
	// bl 0x824215d0
	ctx.lr = 0x8303CC84;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2363(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2363, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CCA0"))) PPC_WEAK_FUNC(sub_8303CCA0);
PPC_FUNC_IMPL(__imp__sub_8303CCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31024
	ctx.r4.s64 = ctx.r11.s64 + 31024;
	// bl 0x824215d0
	ctx.lr = 0x8303CCBC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-844(r11)
	PPC_STORE_U8(ctx.r11.u32 + -844, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CCD8"))) PPC_WEAK_FUNC(sub_8303CCD8);
PPC_FUNC_IMPL(__imp__sub_8303CCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31028
	ctx.r4.s64 = ctx.r11.s64 + 31028;
	// bl 0x824215d0
	ctx.lr = 0x8303CCF4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3292(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3292, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CD10"))) PPC_WEAK_FUNC(sub_8303CD10);
PPC_FUNC_IMPL(__imp__sub_8303CD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31032
	ctx.r4.s64 = ctx.r11.s64 + 31032;
	// bl 0x824215d0
	ctx.lr = 0x8303CD2C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2816(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2816, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CD48"))) PPC_WEAK_FUNC(sub_8303CD48);
PPC_FUNC_IMPL(__imp__sub_8303CD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31036
	ctx.r4.s64 = ctx.r11.s64 + 31036;
	// bl 0x824215d0
	ctx.lr = 0x8303CD64;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1741(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1741, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CD80"))) PPC_WEAK_FUNC(sub_8303CD80);
PPC_FUNC_IMPL(__imp__sub_8303CD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31040
	ctx.r4.s64 = ctx.r11.s64 + 31040;
	// bl 0x824215d0
	ctx.lr = 0x8303CD9C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,622(r11)
	PPC_STORE_U8(ctx.r11.u32 + 622, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CDB8"))) PPC_WEAK_FUNC(sub_8303CDB8);
PPC_FUNC_IMPL(__imp__sub_8303CDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31044
	ctx.r4.s64 = ctx.r11.s64 + 31044;
	// bl 0x824215d0
	ctx.lr = 0x8303CDD4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1732(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1732, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CDF0"))) PPC_WEAK_FUNC(sub_8303CDF0);
PPC_FUNC_IMPL(__imp__sub_8303CDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31048
	ctx.r4.s64 = ctx.r11.s64 + 31048;
	// bl 0x824215d0
	ctx.lr = 0x8303CE0C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,520(r11)
	PPC_STORE_U8(ctx.r11.u32 + 520, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CE28"))) PPC_WEAK_FUNC(sub_8303CE28);
PPC_FUNC_IMPL(__imp__sub_8303CE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31052
	ctx.r4.s64 = ctx.r11.s64 + 31052;
	// bl 0x824215d0
	ctx.lr = 0x8303CE44;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2308(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2308, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CE60"))) PPC_WEAK_FUNC(sub_8303CE60);
PPC_FUNC_IMPL(__imp__sub_8303CE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31056
	ctx.r4.s64 = ctx.r11.s64 + 31056;
	// bl 0x824215d0
	ctx.lr = 0x8303CE7C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,393(r11)
	PPC_STORE_U8(ctx.r11.u32 + 393, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CE98"))) PPC_WEAK_FUNC(sub_8303CE98);
PPC_FUNC_IMPL(__imp__sub_8303CE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31060
	ctx.r4.s64 = ctx.r11.s64 + 31060;
	// bl 0x824215d0
	ctx.lr = 0x8303CEB4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2502(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2502, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CED0"))) PPC_WEAK_FUNC(sub_8303CED0);
PPC_FUNC_IMPL(__imp__sub_8303CED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31064
	ctx.r4.s64 = ctx.r11.s64 + 31064;
	// bl 0x824215d0
	ctx.lr = 0x8303CEEC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-820(r11)
	PPC_STORE_U8(ctx.r11.u32 + -820, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CF08"))) PPC_WEAK_FUNC(sub_8303CF08);
PPC_FUNC_IMPL(__imp__sub_8303CF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31068
	ctx.r4.s64 = ctx.r11.s64 + 31068;
	// bl 0x824215d0
	ctx.lr = 0x8303CF24;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1632(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1632, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CF40"))) PPC_WEAK_FUNC(sub_8303CF40);
PPC_FUNC_IMPL(__imp__sub_8303CF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31072
	ctx.r4.s64 = ctx.r11.s64 + 31072;
	// bl 0x824215d0
	ctx.lr = 0x8303CF5C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,899(r11)
	PPC_STORE_U8(ctx.r11.u32 + 899, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CF78"))) PPC_WEAK_FUNC(sub_8303CF78);
PPC_FUNC_IMPL(__imp__sub_8303CF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31076
	ctx.r4.s64 = ctx.r11.s64 + 31076;
	// bl 0x824215d0
	ctx.lr = 0x8303CF94;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2412(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2412, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CFB0"))) PPC_WEAK_FUNC(sub_8303CFB0);
PPC_FUNC_IMPL(__imp__sub_8303CFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31080
	ctx.r4.s64 = ctx.r11.s64 + 31080;
	// bl 0x824215d0
	ctx.lr = 0x8303CFCC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1172(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1172, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303CFE8"))) PPC_WEAK_FUNC(sub_8303CFE8);
PPC_FUNC_IMPL(__imp__sub_8303CFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31084
	ctx.r4.s64 = ctx.r11.s64 + 31084;
	// bl 0x824215d0
	ctx.lr = 0x8303D004;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2583(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2583, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D020"))) PPC_WEAK_FUNC(sub_8303D020);
PPC_FUNC_IMPL(__imp__sub_8303D020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31088
	ctx.r4.s64 = ctx.r11.s64 + 31088;
	// bl 0x824215d0
	ctx.lr = 0x8303D03C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1597(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1597, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D058"))) PPC_WEAK_FUNC(sub_8303D058);
PPC_FUNC_IMPL(__imp__sub_8303D058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31092
	ctx.r4.s64 = ctx.r11.s64 + 31092;
	// bl 0x824215d0
	ctx.lr = 0x8303D074;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-801(r11)
	PPC_STORE_U8(ctx.r11.u32 + -801, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D090"))) PPC_WEAK_FUNC(sub_8303D090);
PPC_FUNC_IMPL(__imp__sub_8303D090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31096
	ctx.r4.s64 = ctx.r11.s64 + 31096;
	// bl 0x824215d0
	ctx.lr = 0x8303D0AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-428(r11)
	PPC_STORE_U8(ctx.r11.u32 + -428, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D0C8"))) PPC_WEAK_FUNC(sub_8303D0C8);
PPC_FUNC_IMPL(__imp__sub_8303D0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31100
	ctx.r4.s64 = ctx.r11.s64 + 31100;
	// bl 0x824215d0
	ctx.lr = 0x8303D0E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1155(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1155, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D100"))) PPC_WEAK_FUNC(sub_8303D100);
PPC_FUNC_IMPL(__imp__sub_8303D100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31104
	ctx.r4.s64 = ctx.r11.s64 + 31104;
	// bl 0x824215d0
	ctx.lr = 0x8303D11C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303D138"))) PPC_WEAK_FUNC(sub_8303D138);
PPC_FUNC_IMPL(__imp__sub_8303D138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31108
	ctx.r4.s64 = ctx.r11.s64 + 31108;
	// bl 0x824215d0
	ctx.lr = 0x8303D154;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,611(r11)
	PPC_STORE_U8(ctx.r11.u32 + 611, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D170"))) PPC_WEAK_FUNC(sub_8303D170);
PPC_FUNC_IMPL(__imp__sub_8303D170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31112
	ctx.r4.s64 = ctx.r11.s64 + 31112;
	// bl 0x824215d0
	ctx.lr = 0x8303D18C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-418(r11)
	PPC_STORE_U8(ctx.r11.u32 + -418, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D1A8"))) PPC_WEAK_FUNC(sub_8303D1A8);
PPC_FUNC_IMPL(__imp__sub_8303D1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31116
	ctx.r4.s64 = ctx.r11.s64 + 31116;
	// bl 0x824215d0
	ctx.lr = 0x8303D1C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,799(r11)
	PPC_STORE_U8(ctx.r11.u32 + 799, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D1E0"))) PPC_WEAK_FUNC(sub_8303D1E0);
PPC_FUNC_IMPL(__imp__sub_8303D1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31120
	ctx.r4.s64 = ctx.r11.s64 + 31120;
	// bl 0x824215d0
	ctx.lr = 0x8303D1FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 140, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D218"))) PPC_WEAK_FUNC(sub_8303D218);
PPC_FUNC_IMPL(__imp__sub_8303D218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31124
	ctx.r4.s64 = ctx.r11.s64 + 31124;
	// bl 0x824215d0
	ctx.lr = 0x8303D234;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,510(r11)
	PPC_STORE_U8(ctx.r11.u32 + 510, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D250"))) PPC_WEAK_FUNC(sub_8303D250);
PPC_FUNC_IMPL(__imp__sub_8303D250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31128
	ctx.r4.s64 = ctx.r11.s64 + 31128;
	// bl 0x824215d0
	ctx.lr = 0x8303D26C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303D288"))) PPC_WEAK_FUNC(sub_8303D288);
PPC_FUNC_IMPL(__imp__sub_8303D288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31132
	ctx.r4.s64 = ctx.r11.s64 + 31132;
	// bl 0x824215d0
	ctx.lr = 0x8303D2A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1174(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1174, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D2C0"))) PPC_WEAK_FUNC(sub_8303D2C0);
PPC_FUNC_IMPL(__imp__sub_8303D2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31136
	ctx.r4.s64 = ctx.r11.s64 + 31136;
	// bl 0x824215d0
	ctx.lr = 0x8303D2DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,315(r11)
	PPC_STORE_U8(ctx.r11.u32 + 315, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D2F8"))) PPC_WEAK_FUNC(sub_8303D2F8);
PPC_FUNC_IMPL(__imp__sub_8303D2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31140
	ctx.r4.s64 = ctx.r11.s64 + 31140;
	// bl 0x824215d0
	ctx.lr = 0x8303D314;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3255(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3255, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D330"))) PPC_WEAK_FUNC(sub_8303D330);
PPC_FUNC_IMPL(__imp__sub_8303D330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31144
	ctx.r4.s64 = ctx.r11.s64 + 31144;
	// bl 0x824215d0
	ctx.lr = 0x8303D34C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-299(r11)
	PPC_STORE_U8(ctx.r11.u32 + -299, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D368"))) PPC_WEAK_FUNC(sub_8303D368);
PPC_FUNC_IMPL(__imp__sub_8303D368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31148
	ctx.r4.s64 = ctx.r11.s64 + 31148;
	// bl 0x824215d0
	ctx.lr = 0x8303D384;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2901(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2901, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D3A0"))) PPC_WEAK_FUNC(sub_8303D3A0);
PPC_FUNC_IMPL(__imp__sub_8303D3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31152
	ctx.r4.s64 = ctx.r11.s64 + 31152;
	// bl 0x824215d0
	ctx.lr = 0x8303D3BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1326(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1326, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D3D8"))) PPC_WEAK_FUNC(sub_8303D3D8);
PPC_FUNC_IMPL(__imp__sub_8303D3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31156
	ctx.r4.s64 = ctx.r11.s64 + 31156;
	// bl 0x824215d0
	ctx.lr = 0x8303D3F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-547(r11)
	PPC_STORE_U8(ctx.r11.u32 + -547, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D410"))) PPC_WEAK_FUNC(sub_8303D410);
PPC_FUNC_IMPL(__imp__sub_8303D410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31160
	ctx.r4.s64 = ctx.r11.s64 + 31160;
	// bl 0x824215d0
	ctx.lr = 0x8303D42C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303D448"))) PPC_WEAK_FUNC(sub_8303D448);
PPC_FUNC_IMPL(__imp__sub_8303D448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31164
	ctx.r4.s64 = ctx.r11.s64 + 31164;
	// bl 0x824215d0
	ctx.lr = 0x8303D464;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3279(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3279, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D480"))) PPC_WEAK_FUNC(sub_8303D480);
PPC_FUNC_IMPL(__imp__sub_8303D480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31168
	ctx.r4.s64 = ctx.r11.s64 + 31168;
	// bl 0x824215d0
	ctx.lr = 0x8303D49C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-789(r11)
	PPC_STORE_U8(ctx.r11.u32 + -789, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D4B8"))) PPC_WEAK_FUNC(sub_8303D4B8);
PPC_FUNC_IMPL(__imp__sub_8303D4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31172
	ctx.r4.s64 = ctx.r11.s64 + 31172;
	// bl 0x824215d0
	ctx.lr = 0x8303D4D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,293(r11)
	PPC_STORE_U8(ctx.r11.u32 + 293, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D4F0"))) PPC_WEAK_FUNC(sub_8303D4F0);
PPC_FUNC_IMPL(__imp__sub_8303D4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31176
	ctx.r4.s64 = ctx.r11.s64 + 31176;
	// bl 0x824215d0
	ctx.lr = 0x8303D50C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1461(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1461, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D528"))) PPC_WEAK_FUNC(sub_8303D528);
PPC_FUNC_IMPL(__imp__sub_8303D528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31180
	ctx.r4.s64 = ctx.r11.s64 + 31180;
	// bl 0x824215d0
	ctx.lr = 0x8303D544;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1908(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1908, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D560"))) PPC_WEAK_FUNC(sub_8303D560);
PPC_FUNC_IMPL(__imp__sub_8303D560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31184
	ctx.r4.s64 = ctx.r11.s64 + 31184;
	// bl 0x824215d0
	ctx.lr = 0x8303D57C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2799(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2799, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D598"))) PPC_WEAK_FUNC(sub_8303D598);
PPC_FUNC_IMPL(__imp__sub_8303D598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31188
	ctx.r4.s64 = ctx.r11.s64 + 31188;
	// bl 0x824215d0
	ctx.lr = 0x8303D5B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-13(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D5D0"))) PPC_WEAK_FUNC(sub_8303D5D0);
PPC_FUNC_IMPL(__imp__sub_8303D5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31192
	ctx.r4.s64 = ctx.r11.s64 + 31192;
	// bl 0x824215d0
	ctx.lr = 0x8303D5EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1425(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1425, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D608"))) PPC_WEAK_FUNC(sub_8303D608);
PPC_FUNC_IMPL(__imp__sub_8303D608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31196
	ctx.r4.s64 = ctx.r11.s64 + 31196;
	// bl 0x824215d0
	ctx.lr = 0x8303D624;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1787(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1787, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D640"))) PPC_WEAK_FUNC(sub_8303D640);
PPC_FUNC_IMPL(__imp__sub_8303D640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31200
	ctx.r4.s64 = ctx.r11.s64 + 31200;
	// bl 0x824215d0
	ctx.lr = 0x8303D65C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-265(r11)
	PPC_STORE_U8(ctx.r11.u32 + -265, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D678"))) PPC_WEAK_FUNC(sub_8303D678);
PPC_FUNC_IMPL(__imp__sub_8303D678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31204
	ctx.r4.s64 = ctx.r11.s64 + 31204;
	// bl 0x824215d0
	ctx.lr = 0x8303D694;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2299(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2299, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D6B0"))) PPC_WEAK_FUNC(sub_8303D6B0);
PPC_FUNC_IMPL(__imp__sub_8303D6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31208
	ctx.r4.s64 = ctx.r11.s64 + 31208;
	// bl 0x824215d0
	ctx.lr = 0x8303D6CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1621(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1621, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D6E8"))) PPC_WEAK_FUNC(sub_8303D6E8);
PPC_FUNC_IMPL(__imp__sub_8303D6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31212
	ctx.r4.s64 = ctx.r11.s64 + 31212;
	// bl 0x824215d0
	ctx.lr = 0x8303D704;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2252(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2252, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D720"))) PPC_WEAK_FUNC(sub_8303D720);
PPC_FUNC_IMPL(__imp__sub_8303D720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31216
	ctx.r4.s64 = ctx.r11.s64 + 31216;
	// bl 0x824215d0
	ctx.lr = 0x8303D73C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-749(r11)
	PPC_STORE_U8(ctx.r11.u32 + -749, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D758"))) PPC_WEAK_FUNC(sub_8303D758);
PPC_FUNC_IMPL(__imp__sub_8303D758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31220
	ctx.r4.s64 = ctx.r11.s64 + 31220;
	// bl 0x824215d0
	ctx.lr = 0x8303D774;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303D790"))) PPC_WEAK_FUNC(sub_8303D790);
PPC_FUNC_IMPL(__imp__sub_8303D790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31224
	ctx.r4.s64 = ctx.r11.s64 + 31224;
	// bl 0x824215d0
	ctx.lr = 0x8303D7AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1251(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1251, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D7C8"))) PPC_WEAK_FUNC(sub_8303D7C8);
PPC_FUNC_IMPL(__imp__sub_8303D7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31228
	ctx.r4.s64 = ctx.r11.s64 + 31228;
	// bl 0x824215d0
	ctx.lr = 0x8303D7E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-247(r11)
	PPC_STORE_U8(ctx.r11.u32 + -247, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D800"))) PPC_WEAK_FUNC(sub_8303D800);
PPC_FUNC_IMPL(__imp__sub_8303D800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31232
	ctx.r4.s64 = ctx.r11.s64 + 31232;
	// bl 0x824215d0
	ctx.lr = 0x8303D81C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1422(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1422, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D838"))) PPC_WEAK_FUNC(sub_8303D838);
PPC_FUNC_IMPL(__imp__sub_8303D838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31236
	ctx.r4.s64 = ctx.r11.s64 + 31236;
	// bl 0x824215d0
	ctx.lr = 0x8303D854;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1748(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1748, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D870"))) PPC_WEAK_FUNC(sub_8303D870);
PPC_FUNC_IMPL(__imp__sub_8303D870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31240
	ctx.r4.s64 = ctx.r11.s64 + 31240;
	// bl 0x824215d0
	ctx.lr = 0x8303D88C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1154(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1154, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D8A8"))) PPC_WEAK_FUNC(sub_8303D8A8);
PPC_FUNC_IMPL(__imp__sub_8303D8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31244
	ctx.r4.s64 = ctx.r11.s64 + 31244;
	// bl 0x824215d0
	ctx.lr = 0x8303D8C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,475(r11)
	PPC_STORE_U8(ctx.r11.u32 + 475, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D8E0"))) PPC_WEAK_FUNC(sub_8303D8E0);
PPC_FUNC_IMPL(__imp__sub_8303D8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31248
	ctx.r4.s64 = ctx.r11.s64 + 31248;
	// bl 0x824215d0
	ctx.lr = 0x8303D8FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1442(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1442, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D918"))) PPC_WEAK_FUNC(sub_8303D918);
PPC_FUNC_IMPL(__imp__sub_8303D918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31252
	ctx.r4.s64 = ctx.r11.s64 + 31252;
	// bl 0x824215d0
	ctx.lr = 0x8303D934;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1721(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1721, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D950"))) PPC_WEAK_FUNC(sub_8303D950);
PPC_FUNC_IMPL(__imp__sub_8303D950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31256
	ctx.r4.s64 = ctx.r11.s64 + 31256;
	// bl 0x824215d0
	ctx.lr = 0x8303D96C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1513(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1513, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D988"))) PPC_WEAK_FUNC(sub_8303D988);
PPC_FUNC_IMPL(__imp__sub_8303D988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31260
	ctx.r4.s64 = ctx.r11.s64 + 31260;
	// bl 0x824215d0
	ctx.lr = 0x8303D9A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,442(r11)
	PPC_STORE_U8(ctx.r11.u32 + 442, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303D9C0"))) PPC_WEAK_FUNC(sub_8303D9C0);
PPC_FUNC_IMPL(__imp__sub_8303D9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31264
	ctx.r4.s64 = ctx.r11.s64 + 31264;
	// bl 0x824215d0
	ctx.lr = 0x8303D9DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303D9F8"))) PPC_WEAK_FUNC(sub_8303D9F8);
PPC_FUNC_IMPL(__imp__sub_8303D9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31268
	ctx.r4.s64 = ctx.r11.s64 + 31268;
	// bl 0x824215d0
	ctx.lr = 0x8303DA14;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-865(r11)
	PPC_STORE_U8(ctx.r11.u32 + -865, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DA30"))) PPC_WEAK_FUNC(sub_8303DA30);
PPC_FUNC_IMPL(__imp__sub_8303DA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31272
	ctx.r4.s64 = ctx.r11.s64 + 31272;
	// bl 0x824215d0
	ctx.lr = 0x8303DA4C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-615(r11)
	PPC_STORE_U8(ctx.r11.u32 + -615, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DA68"))) PPC_WEAK_FUNC(sub_8303DA68);
PPC_FUNC_IMPL(__imp__sub_8303DA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31276
	ctx.r4.s64 = ctx.r11.s64 + 31276;
	// bl 0x824215d0
	ctx.lr = 0x8303DA84;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303DAA0"))) PPC_WEAK_FUNC(sub_8303DAA0);
PPC_FUNC_IMPL(__imp__sub_8303DAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31280
	ctx.r4.s64 = ctx.r11.s64 + 31280;
	// bl 0x824215d0
	ctx.lr = 0x8303DABC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-906(r11)
	PPC_STORE_U8(ctx.r11.u32 + -906, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DAD8"))) PPC_WEAK_FUNC(sub_8303DAD8);
PPC_FUNC_IMPL(__imp__sub_8303DAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31284
	ctx.r4.s64 = ctx.r11.s64 + 31284;
	// bl 0x824215d0
	ctx.lr = 0x8303DAF4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3048(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3048, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DB10"))) PPC_WEAK_FUNC(sub_8303DB10);
PPC_FUNC_IMPL(__imp__sub_8303DB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31288
	ctx.r4.s64 = ctx.r11.s64 + 31288;
	// bl 0x824215d0
	ctx.lr = 0x8303DB2C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2622(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2622, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DB48"))) PPC_WEAK_FUNC(sub_8303DB48);
PPC_FUNC_IMPL(__imp__sub_8303DB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31292
	ctx.r4.s64 = ctx.r11.s64 + 31292;
	// bl 0x824215d0
	ctx.lr = 0x8303DB64;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303DB80"))) PPC_WEAK_FUNC(sub_8303DB80);
PPC_FUNC_IMPL(__imp__sub_8303DB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31296
	ctx.r4.s64 = ctx.r11.s64 + 31296;
	// bl 0x824215d0
	ctx.lr = 0x8303DB9C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2090(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2090, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DBB8"))) PPC_WEAK_FUNC(sub_8303DBB8);
PPC_FUNC_IMPL(__imp__sub_8303DBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31300
	ctx.r4.s64 = ctx.r11.s64 + 31300;
	// bl 0x824215d0
	ctx.lr = 0x8303DBD4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1652(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1652, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DBF0"))) PPC_WEAK_FUNC(sub_8303DBF0);
PPC_FUNC_IMPL(__imp__sub_8303DBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31304
	ctx.r4.s64 = ctx.r11.s64 + 31304;
	// bl 0x824215d0
	ctx.lr = 0x8303DC0C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2062(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2062, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DC28"))) PPC_WEAK_FUNC(sub_8303DC28);
PPC_FUNC_IMPL(__imp__sub_8303DC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31308
	ctx.r4.s64 = ctx.r11.s64 + 31308;
	// bl 0x824215d0
	ctx.lr = 0x8303DC44;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3295(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3295, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DC60"))) PPC_WEAK_FUNC(sub_8303DC60);
PPC_FUNC_IMPL(__imp__sub_8303DC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31312
	ctx.r4.s64 = ctx.r11.s64 + 31312;
	// bl 0x824215d0
	ctx.lr = 0x8303DC7C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2418(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2418, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DC98"))) PPC_WEAK_FUNC(sub_8303DC98);
PPC_FUNC_IMPL(__imp__sub_8303DC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31316
	ctx.r4.s64 = ctx.r11.s64 + 31316;
	// bl 0x824215d0
	ctx.lr = 0x8303DCB4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1253(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1253, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DCD0"))) PPC_WEAK_FUNC(sub_8303DCD0);
PPC_FUNC_IMPL(__imp__sub_8303DCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31320
	ctx.r4.s64 = ctx.r11.s64 + 31320;
	// bl 0x824215d0
	ctx.lr = 0x8303DCEC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1605(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1605, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DD08"))) PPC_WEAK_FUNC(sub_8303DD08);
PPC_FUNC_IMPL(__imp__sub_8303DD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31324
	ctx.r4.s64 = ctx.r11.s64 + 31324;
	// bl 0x824215d0
	ctx.lr = 0x8303DD24;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-460(r11)
	PPC_STORE_U8(ctx.r11.u32 + -460, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DD40"))) PPC_WEAK_FUNC(sub_8303DD40);
PPC_FUNC_IMPL(__imp__sub_8303DD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31328
	ctx.r4.s64 = ctx.r11.s64 + 31328;
	// bl 0x824215d0
	ctx.lr = 0x8303DD5C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303DD78"))) PPC_WEAK_FUNC(sub_8303DD78);
PPC_FUNC_IMPL(__imp__sub_8303DD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31332
	ctx.r4.s64 = ctx.r11.s64 + 31332;
	// bl 0x824215d0
	ctx.lr = 0x8303DD94;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-792(r11)
	PPC_STORE_U8(ctx.r11.u32 + -792, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DDB0"))) PPC_WEAK_FUNC(sub_8303DDB0);
PPC_FUNC_IMPL(__imp__sub_8303DDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31336
	ctx.r4.s64 = ctx.r11.s64 + 31336;
	// bl 0x824215d0
	ctx.lr = 0x8303DDCC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303DDE8"))) PPC_WEAK_FUNC(sub_8303DDE8);
PPC_FUNC_IMPL(__imp__sub_8303DDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31340
	ctx.r4.s64 = ctx.r11.s64 + 31340;
	// bl 0x824215d0
	ctx.lr = 0x8303DE04;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1717(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1717, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DE20"))) PPC_WEAK_FUNC(sub_8303DE20);
PPC_FUNC_IMPL(__imp__sub_8303DE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31344
	ctx.r4.s64 = ctx.r11.s64 + 31344;
	// bl 0x824215d0
	ctx.lr = 0x8303DE3C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,771(r11)
	PPC_STORE_U8(ctx.r11.u32 + 771, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DE58"))) PPC_WEAK_FUNC(sub_8303DE58);
PPC_FUNC_IMPL(__imp__sub_8303DE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31348
	ctx.r4.s64 = ctx.r11.s64 + 31348;
	// bl 0x824215d0
	ctx.lr = 0x8303DE74;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1424(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1424, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DE90"))) PPC_WEAK_FUNC(sub_8303DE90);
PPC_FUNC_IMPL(__imp__sub_8303DE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// bl 0x824215d0
	ctx.lr = 0x8303DEAC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DEC8"))) PPC_WEAK_FUNC(sub_8303DEC8);
PPC_FUNC_IMPL(__imp__sub_8303DEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31356
	ctx.r4.s64 = ctx.r11.s64 + 31356;
	// bl 0x824215d0
	ctx.lr = 0x8303DEE4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1720(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1720, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DF00"))) PPC_WEAK_FUNC(sub_8303DF00);
PPC_FUNC_IMPL(__imp__sub_8303DF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31360
	ctx.r4.s64 = ctx.r11.s64 + 31360;
	// bl 0x824215d0
	ctx.lr = 0x8303DF1C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,757(r11)
	PPC_STORE_U8(ctx.r11.u32 + 757, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DF38"))) PPC_WEAK_FUNC(sub_8303DF38);
PPC_FUNC_IMPL(__imp__sub_8303DF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31364
	ctx.r4.s64 = ctx.r11.s64 + 31364;
	// bl 0x824215d0
	ctx.lr = 0x8303DF54;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,886(r11)
	PPC_STORE_U8(ctx.r11.u32 + 886, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DF70"))) PPC_WEAK_FUNC(sub_8303DF70);
PPC_FUNC_IMPL(__imp__sub_8303DF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31368
	ctx.r4.s64 = ctx.r11.s64 + 31368;
	// bl 0x824215d0
	ctx.lr = 0x8303DF8C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,295(r11)
	PPC_STORE_U8(ctx.r11.u32 + 295, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DFA8"))) PPC_WEAK_FUNC(sub_8303DFA8);
PPC_FUNC_IMPL(__imp__sub_8303DFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31372
	ctx.r4.s64 = ctx.r11.s64 + 31372;
	// bl 0x824215d0
	ctx.lr = 0x8303DFC4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2797(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2797, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303DFE0"))) PPC_WEAK_FUNC(sub_8303DFE0);
PPC_FUNC_IMPL(__imp__sub_8303DFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31376
	ctx.r4.s64 = ctx.r11.s64 + 31376;
	// bl 0x824215d0
	ctx.lr = 0x8303DFFC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1391(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1391, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E018"))) PPC_WEAK_FUNC(sub_8303E018);
PPC_FUNC_IMPL(__imp__sub_8303E018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31380
	ctx.r4.s64 = ctx.r11.s64 + 31380;
	// bl 0x824215d0
	ctx.lr = 0x8303E034;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303E050"))) PPC_WEAK_FUNC(sub_8303E050);
PPC_FUNC_IMPL(__imp__sub_8303E050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31384
	ctx.r4.s64 = ctx.r11.s64 + 31384;
	// bl 0x824215d0
	ctx.lr = 0x8303E06C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-298(r11)
	PPC_STORE_U8(ctx.r11.u32 + -298, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E088"))) PPC_WEAK_FUNC(sub_8303E088);
PPC_FUNC_IMPL(__imp__sub_8303E088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31388
	ctx.r4.s64 = ctx.r11.s64 + 31388;
	// bl 0x824215d0
	ctx.lr = 0x8303E0A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-426(r11)
	PPC_STORE_U8(ctx.r11.u32 + -426, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E0C0"))) PPC_WEAK_FUNC(sub_8303E0C0);
PPC_FUNC_IMPL(__imp__sub_8303E0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31392
	ctx.r4.s64 = ctx.r11.s64 + 31392;
	// bl 0x824215d0
	ctx.lr = 0x8303E0DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3100, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E0F8"))) PPC_WEAK_FUNC(sub_8303E0F8);
PPC_FUNC_IMPL(__imp__sub_8303E0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31396
	ctx.r4.s64 = ctx.r11.s64 + 31396;
	// bl 0x824215d0
	ctx.lr = 0x8303E114;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1521(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1521, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E130"))) PPC_WEAK_FUNC(sub_8303E130);
PPC_FUNC_IMPL(__imp__sub_8303E130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31400
	ctx.r4.s64 = ctx.r11.s64 + 31400;
	// bl 0x824215d0
	ctx.lr = 0x8303E14C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2572(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2572, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E168"))) PPC_WEAK_FUNC(sub_8303E168);
PPC_FUNC_IMPL(__imp__sub_8303E168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31404
	ctx.r4.s64 = ctx.r11.s64 + 31404;
	// bl 0x824215d0
	ctx.lr = 0x8303E184;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2967(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2967, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E1A0"))) PPC_WEAK_FUNC(sub_8303E1A0);
PPC_FUNC_IMPL(__imp__sub_8303E1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31408
	ctx.r4.s64 = ctx.r11.s64 + 31408;
	// bl 0x824215d0
	ctx.lr = 0x8303E1BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2256(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2256, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E1D8"))) PPC_WEAK_FUNC(sub_8303E1D8);
PPC_FUNC_IMPL(__imp__sub_8303E1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31412
	ctx.r4.s64 = ctx.r11.s64 + 31412;
	// bl 0x824215d0
	ctx.lr = 0x8303E1F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1909(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1909, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E210"))) PPC_WEAK_FUNC(sub_8303E210);
PPC_FUNC_IMPL(__imp__sub_8303E210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31416
	ctx.r4.s64 = ctx.r11.s64 + 31416;
	// bl 0x824215d0
	ctx.lr = 0x8303E22C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303E248"))) PPC_WEAK_FUNC(sub_8303E248);
PPC_FUNC_IMPL(__imp__sub_8303E248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31420
	ctx.r4.s64 = ctx.r11.s64 + 31420;
	// bl 0x824215d0
	ctx.lr = 0x8303E264;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-272(r11)
	PPC_STORE_U8(ctx.r11.u32 + -272, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E280"))) PPC_WEAK_FUNC(sub_8303E280);
PPC_FUNC_IMPL(__imp__sub_8303E280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31424
	ctx.r4.s64 = ctx.r11.s64 + 31424;
	// bl 0x824215d0
	ctx.lr = 0x8303E29C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303E2B8"))) PPC_WEAK_FUNC(sub_8303E2B8);
PPC_FUNC_IMPL(__imp__sub_8303E2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31428
	ctx.r4.s64 = ctx.r11.s64 + 31428;
	// bl 0x824215d0
	ctx.lr = 0x8303E2D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,495(r11)
	PPC_STORE_U8(ctx.r11.u32 + 495, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E2F0"))) PPC_WEAK_FUNC(sub_8303E2F0);
PPC_FUNC_IMPL(__imp__sub_8303E2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31432
	ctx.r4.s64 = ctx.r11.s64 + 31432;
	// bl 0x824215d0
	ctx.lr = 0x8303E30C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1324(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1324, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E328"))) PPC_WEAK_FUNC(sub_8303E328);
PPC_FUNC_IMPL(__imp__sub_8303E328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31436
	ctx.r4.s64 = ctx.r11.s64 + 31436;
	// bl 0x824215d0
	ctx.lr = 0x8303E344;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1181(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1181, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E360"))) PPC_WEAK_FUNC(sub_8303E360);
PPC_FUNC_IMPL(__imp__sub_8303E360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31440
	ctx.r4.s64 = ctx.r11.s64 + 31440;
	// bl 0x824215d0
	ctx.lr = 0x8303E37C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1504(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1504, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E398"))) PPC_WEAK_FUNC(sub_8303E398);
PPC_FUNC_IMPL(__imp__sub_8303E398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31444
	ctx.r4.s64 = ctx.r11.s64 + 31444;
	// bl 0x824215d0
	ctx.lr = 0x8303E3B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1599(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1599, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E3D0"))) PPC_WEAK_FUNC(sub_8303E3D0);
PPC_FUNC_IMPL(__imp__sub_8303E3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31448
	ctx.r4.s64 = ctx.r11.s64 + 31448;
	// bl 0x824215d0
	ctx.lr = 0x8303E3EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1427(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1427, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E408"))) PPC_WEAK_FUNC(sub_8303E408);
PPC_FUNC_IMPL(__imp__sub_8303E408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31452
	ctx.r4.s64 = ctx.r11.s64 + 31452;
	// bl 0x824215d0
	ctx.lr = 0x8303E424;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2314(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2314, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E440"))) PPC_WEAK_FUNC(sub_8303E440);
PPC_FUNC_IMPL(__imp__sub_8303E440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31456
	ctx.r4.s64 = ctx.r11.s64 + 31456;
	// bl 0x824215d0
	ctx.lr = 0x8303E45C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1008(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1008, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E478"))) PPC_WEAK_FUNC(sub_8303E478);
PPC_FUNC_IMPL(__imp__sub_8303E478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31460
	ctx.r4.s64 = ctx.r11.s64 + 31460;
	// bl 0x824215d0
	ctx.lr = 0x8303E494;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2753(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2753, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E4B0"))) PPC_WEAK_FUNC(sub_8303E4B0);
PPC_FUNC_IMPL(__imp__sub_8303E4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31464
	ctx.r4.s64 = ctx.r11.s64 + 31464;
	// bl 0x824215d0
	ctx.lr = 0x8303E4CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303E4E8"))) PPC_WEAK_FUNC(sub_8303E4E8);
PPC_FUNC_IMPL(__imp__sub_8303E4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31468
	ctx.r4.s64 = ctx.r11.s64 + 31468;
	// bl 0x824215d0
	ctx.lr = 0x8303E504;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303E520"))) PPC_WEAK_FUNC(sub_8303E520);
PPC_FUNC_IMPL(__imp__sub_8303E520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31472
	ctx.r4.s64 = ctx.r11.s64 + 31472;
	// bl 0x824215d0
	ctx.lr = 0x8303E53C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1443(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1443, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E558"))) PPC_WEAK_FUNC(sub_8303E558);
PPC_FUNC_IMPL(__imp__sub_8303E558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31476
	ctx.r4.s64 = ctx.r11.s64 + 31476;
	// bl 0x824215d0
	ctx.lr = 0x8303E574;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303E590"))) PPC_WEAK_FUNC(sub_8303E590);
PPC_FUNC_IMPL(__imp__sub_8303E590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31480
	ctx.r4.s64 = ctx.r11.s64 + 31480;
	// bl 0x824215d0
	ctx.lr = 0x8303E5AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303E5C8"))) PPC_WEAK_FUNC(sub_8303E5C8);
PPC_FUNC_IMPL(__imp__sub_8303E5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31484
	ctx.r4.s64 = ctx.r11.s64 + 31484;
	// bl 0x824215d0
	ctx.lr = 0x8303E5E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-867(r11)
	PPC_STORE_U8(ctx.r11.u32 + -867, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E600"))) PPC_WEAK_FUNC(sub_8303E600);
PPC_FUNC_IMPL(__imp__sub_8303E600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31488
	ctx.r4.s64 = ctx.r11.s64 + 31488;
	// bl 0x824215d0
	ctx.lr = 0x8303E61C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1635(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1635, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E638"))) PPC_WEAK_FUNC(sub_8303E638);
PPC_FUNC_IMPL(__imp__sub_8303E638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31492
	ctx.r4.s64 = ctx.r11.s64 + 31492;
	// bl 0x824215d0
	ctx.lr = 0x8303E654;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303E670"))) PPC_WEAK_FUNC(sub_8303E670);
PPC_FUNC_IMPL(__imp__sub_8303E670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31496
	ctx.r4.s64 = ctx.r11.s64 + 31496;
	// bl 0x824215d0
	ctx.lr = 0x8303E68C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,849(r11)
	PPC_STORE_U8(ctx.r11.u32 + 849, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E6A8"))) PPC_WEAK_FUNC(sub_8303E6A8);
PPC_FUNC_IMPL(__imp__sub_8303E6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31500
	ctx.r4.s64 = ctx.r11.s64 + 31500;
	// bl 0x824215d0
	ctx.lr = 0x8303E6C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-839(r11)
	PPC_STORE_U8(ctx.r11.u32 + -839, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E6E0"))) PPC_WEAK_FUNC(sub_8303E6E0);
PPC_FUNC_IMPL(__imp__sub_8303E6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31504
	ctx.r4.s64 = ctx.r11.s64 + 31504;
	// bl 0x824215d0
	ctx.lr = 0x8303E6FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2716(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2716, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E718"))) PPC_WEAK_FUNC(sub_8303E718);
PPC_FUNC_IMPL(__imp__sub_8303E718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31508
	ctx.r4.s64 = ctx.r11.s64 + 31508;
	// bl 0x824215d0
	ctx.lr = 0x8303E734;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303E750"))) PPC_WEAK_FUNC(sub_8303E750);
PPC_FUNC_IMPL(__imp__sub_8303E750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31512
	ctx.r4.s64 = ctx.r11.s64 + 31512;
	// bl 0x824215d0
	ctx.lr = 0x8303E76C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303E788"))) PPC_WEAK_FUNC(sub_8303E788);
PPC_FUNC_IMPL(__imp__sub_8303E788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31516
	ctx.r4.s64 = ctx.r11.s64 + 31516;
	// bl 0x824215d0
	ctx.lr = 0x8303E7A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303E7C0"))) PPC_WEAK_FUNC(sub_8303E7C0);
PPC_FUNC_IMPL(__imp__sub_8303E7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31520
	ctx.r4.s64 = ctx.r11.s64 + 31520;
	// bl 0x824215d0
	ctx.lr = 0x8303E7DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2038(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2038, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E7F8"))) PPC_WEAK_FUNC(sub_8303E7F8);
PPC_FUNC_IMPL(__imp__sub_8303E7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31524
	ctx.r4.s64 = ctx.r11.s64 + 31524;
	// bl 0x824215d0
	ctx.lr = 0x8303E814;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1651(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1651, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E830"))) PPC_WEAK_FUNC(sub_8303E830);
PPC_FUNC_IMPL(__imp__sub_8303E830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31528
	ctx.r4.s64 = ctx.r11.s64 + 31528;
	// bl 0x824215d0
	ctx.lr = 0x8303E84C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-271(r11)
	PPC_STORE_U8(ctx.r11.u32 + -271, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E868"))) PPC_WEAK_FUNC(sub_8303E868);
PPC_FUNC_IMPL(__imp__sub_8303E868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31532
	ctx.r4.s64 = ctx.r11.s64 + 31532;
	// bl 0x824215d0
	ctx.lr = 0x8303E884;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1369(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1369, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E8A0"))) PPC_WEAK_FUNC(sub_8303E8A0);
PPC_FUNC_IMPL(__imp__sub_8303E8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31536
	ctx.r4.s64 = ctx.r11.s64 + 31536;
	// bl 0x824215d0
	ctx.lr = 0x8303E8BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1372(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1372, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E8D8"))) PPC_WEAK_FUNC(sub_8303E8D8);
PPC_FUNC_IMPL(__imp__sub_8303E8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31540
	ctx.r4.s64 = ctx.r11.s64 + 31540;
	// bl 0x824215d0
	ctx.lr = 0x8303E8F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,825(r11)
	PPC_STORE_U8(ctx.r11.u32 + 825, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E910"))) PPC_WEAK_FUNC(sub_8303E910);
PPC_FUNC_IMPL(__imp__sub_8303E910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31544
	ctx.r4.s64 = ctx.r11.s64 + 31544;
	// bl 0x824215d0
	ctx.lr = 0x8303E92C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-613(r11)
	PPC_STORE_U8(ctx.r11.u32 + -613, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E948"))) PPC_WEAK_FUNC(sub_8303E948);
PPC_FUNC_IMPL(__imp__sub_8303E948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31548
	ctx.r4.s64 = ctx.r11.s64 + 31548;
	// bl 0x824215d0
	ctx.lr = 0x8303E964;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303E980"))) PPC_WEAK_FUNC(sub_8303E980);
PPC_FUNC_IMPL(__imp__sub_8303E980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31552
	ctx.r4.s64 = ctx.r11.s64 + 31552;
	// bl 0x824215d0
	ctx.lr = 0x8303E99C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3276, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E9B8"))) PPC_WEAK_FUNC(sub_8303E9B8);
PPC_FUNC_IMPL(__imp__sub_8303E9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31556
	ctx.r4.s64 = ctx.r11.s64 + 31556;
	// bl 0x824215d0
	ctx.lr = 0x8303E9D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-504(r11)
	PPC_STORE_U8(ctx.r11.u32 + -504, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303E9F0"))) PPC_WEAK_FUNC(sub_8303E9F0);
PPC_FUNC_IMPL(__imp__sub_8303E9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31560
	ctx.r4.s64 = ctx.r11.s64 + 31560;
	// bl 0x824215d0
	ctx.lr = 0x8303EA0C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,745(r11)
	PPC_STORE_U8(ctx.r11.u32 + 745, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EA28"))) PPC_WEAK_FUNC(sub_8303EA28);
PPC_FUNC_IMPL(__imp__sub_8303EA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31564
	ctx.r4.s64 = ctx.r11.s64 + 31564;
	// bl 0x824215d0
	ctx.lr = 0x8303EA44;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1449(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1449, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EA60"))) PPC_WEAK_FUNC(sub_8303EA60);
PPC_FUNC_IMPL(__imp__sub_8303EA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31568
	ctx.r4.s64 = ctx.r11.s64 + 31568;
	// bl 0x824215d0
	ctx.lr = 0x8303EA7C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-895(r11)
	PPC_STORE_U8(ctx.r11.u32 + -895, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EA98"))) PPC_WEAK_FUNC(sub_8303EA98);
PPC_FUNC_IMPL(__imp__sub_8303EA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31572
	ctx.r4.s64 = ctx.r11.s64 + 31572;
	// bl 0x824215d0
	ctx.lr = 0x8303EAB4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,260(r11)
	PPC_STORE_U8(ctx.r11.u32 + 260, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EAD0"))) PPC_WEAK_FUNC(sub_8303EAD0);
PPC_FUNC_IMPL(__imp__sub_8303EAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31576
	ctx.r4.s64 = ctx.r11.s64 + 31576;
	// bl 0x824215d0
	ctx.lr = 0x8303EAEC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1975(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1975, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EB08"))) PPC_WEAK_FUNC(sub_8303EB08);
PPC_FUNC_IMPL(__imp__sub_8303EB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31580
	ctx.r4.s64 = ctx.r11.s64 + 31580;
	// bl 0x824215d0
	ctx.lr = 0x8303EB24;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1224(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1224, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EB40"))) PPC_WEAK_FUNC(sub_8303EB40);
PPC_FUNC_IMPL(__imp__sub_8303EB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31584
	ctx.r4.s64 = ctx.r11.s64 + 31584;
	// bl 0x824215d0
	ctx.lr = 0x8303EB5C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,758(r11)
	PPC_STORE_U8(ctx.r11.u32 + 758, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EB78"))) PPC_WEAK_FUNC(sub_8303EB78);
PPC_FUNC_IMPL(__imp__sub_8303EB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31588
	ctx.r4.s64 = ctx.r11.s64 + 31588;
	// bl 0x824215d0
	ctx.lr = 0x8303EB94;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-761(r11)
	PPC_STORE_U8(ctx.r11.u32 + -761, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EBB0"))) PPC_WEAK_FUNC(sub_8303EBB0);
PPC_FUNC_IMPL(__imp__sub_8303EBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31592
	ctx.r4.s64 = ctx.r11.s64 + 31592;
	// bl 0x824215d0
	ctx.lr = 0x8303EBCC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,643(r11)
	PPC_STORE_U8(ctx.r11.u32 + 643, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EBE8"))) PPC_WEAK_FUNC(sub_8303EBE8);
PPC_FUNC_IMPL(__imp__sub_8303EBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31596
	ctx.r4.s64 = ctx.r11.s64 + 31596;
	// bl 0x824215d0
	ctx.lr = 0x8303EC04;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303EC20"))) PPC_WEAK_FUNC(sub_8303EC20);
PPC_FUNC_IMPL(__imp__sub_8303EC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31600
	ctx.r4.s64 = ctx.r11.s64 + 31600;
	// bl 0x824215d0
	ctx.lr = 0x8303EC3C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,721(r11)
	PPC_STORE_U8(ctx.r11.u32 + 721, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EC58"))) PPC_WEAK_FUNC(sub_8303EC58);
PPC_FUNC_IMPL(__imp__sub_8303EC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31604
	ctx.r4.s64 = ctx.r11.s64 + 31604;
	// bl 0x824215d0
	ctx.lr = 0x8303EC74;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1483(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1483, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EC90"))) PPC_WEAK_FUNC(sub_8303EC90);
PPC_FUNC_IMPL(__imp__sub_8303EC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31608
	ctx.r4.s64 = ctx.r11.s64 + 31608;
	// bl 0x824215d0
	ctx.lr = 0x8303ECAC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,312(r11)
	PPC_STORE_U8(ctx.r11.u32 + 312, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ECC8"))) PPC_WEAK_FUNC(sub_8303ECC8);
PPC_FUNC_IMPL(__imp__sub_8303ECC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31612
	ctx.r4.s64 = ctx.r11.s64 + 31612;
	// bl 0x824215d0
	ctx.lr = 0x8303ECE4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2496(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2496, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ED00"))) PPC_WEAK_FUNC(sub_8303ED00);
PPC_FUNC_IMPL(__imp__sub_8303ED00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31616
	ctx.r4.s64 = ctx.r11.s64 + 31616;
	// bl 0x824215d0
	ctx.lr = 0x8303ED1C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303ED38"))) PPC_WEAK_FUNC(sub_8303ED38);
PPC_FUNC_IMPL(__imp__sub_8303ED38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31620
	ctx.r4.s64 = ctx.r11.s64 + 31620;
	// bl 0x824215d0
	ctx.lr = 0x8303ED54;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303ED70"))) PPC_WEAK_FUNC(sub_8303ED70);
PPC_FUNC_IMPL(__imp__sub_8303ED70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31624
	ctx.r4.s64 = ctx.r11.s64 + 31624;
	// bl 0x824215d0
	ctx.lr = 0x8303ED8C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303EDA8"))) PPC_WEAK_FUNC(sub_8303EDA8);
PPC_FUNC_IMPL(__imp__sub_8303EDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31628
	ctx.r4.s64 = ctx.r11.s64 + 31628;
	// bl 0x824215d0
	ctx.lr = 0x8303EDC4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303EDE0"))) PPC_WEAK_FUNC(sub_8303EDE0);
PPC_FUNC_IMPL(__imp__sub_8303EDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31632
	ctx.r4.s64 = ctx.r11.s64 + 31632;
	// bl 0x824215d0
	ctx.lr = 0x8303EDFC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-193(r11)
	PPC_STORE_U8(ctx.r11.u32 + -193, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EE18"))) PPC_WEAK_FUNC(sub_8303EE18);
PPC_FUNC_IMPL(__imp__sub_8303EE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31636
	ctx.r4.s64 = ctx.r11.s64 + 31636;
	// bl 0x824215d0
	ctx.lr = 0x8303EE34;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,703(r11)
	PPC_STORE_U8(ctx.r11.u32 + 703, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EE50"))) PPC_WEAK_FUNC(sub_8303EE50);
PPC_FUNC_IMPL(__imp__sub_8303EE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31640
	ctx.r4.s64 = ctx.r11.s64 + 31640;
	// bl 0x824215d0
	ctx.lr = 0x8303EE6C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3280(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3280, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EE88"))) PPC_WEAK_FUNC(sub_8303EE88);
PPC_FUNC_IMPL(__imp__sub_8303EE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31644
	ctx.r4.s64 = ctx.r11.s64 + 31644;
	// bl 0x824215d0
	ctx.lr = 0x8303EEA4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-338(r11)
	PPC_STORE_U8(ctx.r11.u32 + -338, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EEC0"))) PPC_WEAK_FUNC(sub_8303EEC0);
PPC_FUNC_IMPL(__imp__sub_8303EEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31648
	ctx.r4.s64 = ctx.r11.s64 + 31648;
	// bl 0x824215d0
	ctx.lr = 0x8303EEDC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,86(r11)
	PPC_STORE_U8(ctx.r11.u32 + 86, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EEF8"))) PPC_WEAK_FUNC(sub_8303EEF8);
PPC_FUNC_IMPL(__imp__sub_8303EEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31652
	ctx.r4.s64 = ctx.r11.s64 + 31652;
	// bl 0x824215d0
	ctx.lr = 0x8303EF14;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303EF30"))) PPC_WEAK_FUNC(sub_8303EF30);
PPC_FUNC_IMPL(__imp__sub_8303EF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31656
	ctx.r4.s64 = ctx.r11.s64 + 31656;
	// bl 0x824215d0
	ctx.lr = 0x8303EF4C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2536(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2536, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303EF68"))) PPC_WEAK_FUNC(sub_8303EF68);
PPC_FUNC_IMPL(__imp__sub_8303EF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31660
	ctx.r4.s64 = ctx.r11.s64 + 31660;
	// bl 0x824215d0
	ctx.lr = 0x8303EF84;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303EFA0"))) PPC_WEAK_FUNC(sub_8303EFA0);
PPC_FUNC_IMPL(__imp__sub_8303EFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31664
	ctx.r4.s64 = ctx.r11.s64 + 31664;
	// bl 0x824215d0
	ctx.lr = 0x8303EFBC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303EFD8"))) PPC_WEAK_FUNC(sub_8303EFD8);
PPC_FUNC_IMPL(__imp__sub_8303EFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31668
	ctx.r4.s64 = ctx.r11.s64 + 31668;
	// bl 0x824215d0
	ctx.lr = 0x8303EFF4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1285(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1285, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F010"))) PPC_WEAK_FUNC(sub_8303F010);
PPC_FUNC_IMPL(__imp__sub_8303F010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31672
	ctx.r4.s64 = ctx.r11.s64 + 31672;
	// bl 0x824215d0
	ctx.lr = 0x8303F02C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1536(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1536, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F048"))) PPC_WEAK_FUNC(sub_8303F048);
PPC_FUNC_IMPL(__imp__sub_8303F048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31676
	ctx.r4.s64 = ctx.r11.s64 + 31676;
	// bl 0x824215d0
	ctx.lr = 0x8303F064;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2027(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2027, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F080"))) PPC_WEAK_FUNC(sub_8303F080);
PPC_FUNC_IMPL(__imp__sub_8303F080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31680
	ctx.r4.s64 = ctx.r11.s64 + 31680;
	// bl 0x824215d0
	ctx.lr = 0x8303F09C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303F0B8"))) PPC_WEAK_FUNC(sub_8303F0B8);
PPC_FUNC_IMPL(__imp__sub_8303F0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31684
	ctx.r4.s64 = ctx.r11.s64 + 31684;
	// bl 0x824215d0
	ctx.lr = 0x8303F0D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-661(r11)
	PPC_STORE_U8(ctx.r11.u32 + -661, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F0F0"))) PPC_WEAK_FUNC(sub_8303F0F0);
PPC_FUNC_IMPL(__imp__sub_8303F0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31688
	ctx.r4.s64 = ctx.r11.s64 + 31688;
	// bl 0x824215d0
	ctx.lr = 0x8303F10C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1009(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1009, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F128"))) PPC_WEAK_FUNC(sub_8303F128);
PPC_FUNC_IMPL(__imp__sub_8303F128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31692
	ctx.r4.s64 = ctx.r11.s64 + 31692;
	// bl 0x824215d0
	ctx.lr = 0x8303F144;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,313(r11)
	PPC_STORE_U8(ctx.r11.u32 + 313, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F160"))) PPC_WEAK_FUNC(sub_8303F160);
PPC_FUNC_IMPL(__imp__sub_8303F160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31696
	ctx.r4.s64 = ctx.r11.s64 + 31696;
	// bl 0x824215d0
	ctx.lr = 0x8303F17C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2419(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2419, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F198"))) PPC_WEAK_FUNC(sub_8303F198);
PPC_FUNC_IMPL(__imp__sub_8303F198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31700
	ctx.r4.s64 = ctx.r11.s64 + 31700;
	// bl 0x824215d0
	ctx.lr = 0x8303F1B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-506(r11)
	PPC_STORE_U8(ctx.r11.u32 + -506, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F1D0"))) PPC_WEAK_FUNC(sub_8303F1D0);
PPC_FUNC_IMPL(__imp__sub_8303F1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31704
	ctx.r4.s64 = ctx.r11.s64 + 31704;
	// bl 0x824215d0
	ctx.lr = 0x8303F1EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1648(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1648, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F208"))) PPC_WEAK_FUNC(sub_8303F208);
PPC_FUNC_IMPL(__imp__sub_8303F208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31708
	ctx.r4.s64 = ctx.r11.s64 + 31708;
	// bl 0x824215d0
	ctx.lr = 0x8303F224;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1650(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1650, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F240"))) PPC_WEAK_FUNC(sub_8303F240);
PPC_FUNC_IMPL(__imp__sub_8303F240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31712
	ctx.r4.s64 = ctx.r11.s64 + 31712;
	// bl 0x824215d0
	ctx.lr = 0x8303F25C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1450(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1450, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F278"))) PPC_WEAK_FUNC(sub_8303F278);
PPC_FUNC_IMPL(__imp__sub_8303F278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31716
	ctx.r4.s64 = ctx.r11.s64 + 31716;
	// bl 0x824215d0
	ctx.lr = 0x8303F294;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1340(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1340, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F2B0"))) PPC_WEAK_FUNC(sub_8303F2B0);
PPC_FUNC_IMPL(__imp__sub_8303F2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31720
	ctx.r4.s64 = ctx.r11.s64 + 31720;
	// bl 0x824215d0
	ctx.lr = 0x8303F2CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,394(r11)
	PPC_STORE_U8(ctx.r11.u32 + 394, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F2E8"))) PPC_WEAK_FUNC(sub_8303F2E8);
PPC_FUNC_IMPL(__imp__sub_8303F2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31724
	ctx.r4.s64 = ctx.r11.s64 + 31724;
	// bl 0x824215d0
	ctx.lr = 0x8303F304;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1672(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1672, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F320"))) PPC_WEAK_FUNC(sub_8303F320);
PPC_FUNC_IMPL(__imp__sub_8303F320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31728
	ctx.r4.s64 = ctx.r11.s64 + 31728;
	// bl 0x824215d0
	ctx.lr = 0x8303F33C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1431(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1431, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F358"))) PPC_WEAK_FUNC(sub_8303F358);
PPC_FUNC_IMPL(__imp__sub_8303F358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31732
	ctx.r4.s64 = ctx.r11.s64 + 31732;
	// bl 0x824215d0
	ctx.lr = 0x8303F374;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2206(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2206, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F390"))) PPC_WEAK_FUNC(sub_8303F390);
PPC_FUNC_IMPL(__imp__sub_8303F390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31736
	ctx.r4.s64 = ctx.r11.s64 + 31736;
	// bl 0x824215d0
	ctx.lr = 0x8303F3AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2184, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F3C8"))) PPC_WEAK_FUNC(sub_8303F3C8);
PPC_FUNC_IMPL(__imp__sub_8303F3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31740
	ctx.r4.s64 = ctx.r11.s64 + 31740;
	// bl 0x824215d0
	ctx.lr = 0x8303F3E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,129(r11)
	PPC_STORE_U8(ctx.r11.u32 + 129, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F400"))) PPC_WEAK_FUNC(sub_8303F400);
PPC_FUNC_IMPL(__imp__sub_8303F400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31744
	ctx.r4.s64 = ctx.r11.s64 + 31744;
	// bl 0x824215d0
	ctx.lr = 0x8303F41C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3074(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3074, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F438"))) PPC_WEAK_FUNC(sub_8303F438);
PPC_FUNC_IMPL(__imp__sub_8303F438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31748
	ctx.r4.s64 = ctx.r11.s64 + 31748;
	// bl 0x824215d0
	ctx.lr = 0x8303F454;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,675(r11)
	PPC_STORE_U8(ctx.r11.u32 + 675, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F470"))) PPC_WEAK_FUNC(sub_8303F470);
PPC_FUNC_IMPL(__imp__sub_8303F470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31752
	ctx.r4.s64 = ctx.r11.s64 + 31752;
	// bl 0x824215d0
	ctx.lr = 0x8303F48C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1787(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1787, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F4A8"))) PPC_WEAK_FUNC(sub_8303F4A8);
PPC_FUNC_IMPL(__imp__sub_8303F4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31756
	ctx.r4.s64 = ctx.r11.s64 + 31756;
	// bl 0x824215d0
	ctx.lr = 0x8303F4C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2926(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2926, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F4E0"))) PPC_WEAK_FUNC(sub_8303F4E0);
PPC_FUNC_IMPL(__imp__sub_8303F4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31760
	ctx.r4.s64 = ctx.r11.s64 + 31760;
	// bl 0x824215d0
	ctx.lr = 0x8303F4FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303F518"))) PPC_WEAK_FUNC(sub_8303F518);
PPC_FUNC_IMPL(__imp__sub_8303F518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31764
	ctx.r4.s64 = ctx.r11.s64 + 31764;
	// bl 0x824215d0
	ctx.lr = 0x8303F534;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,756(r11)
	PPC_STORE_U8(ctx.r11.u32 + 756, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F550"))) PPC_WEAK_FUNC(sub_8303F550);
PPC_FUNC_IMPL(__imp__sub_8303F550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31768
	ctx.r4.s64 = ctx.r11.s64 + 31768;
	// bl 0x824215d0
	ctx.lr = 0x8303F56C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1785(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1785, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F588"))) PPC_WEAK_FUNC(sub_8303F588);
PPC_FUNC_IMPL(__imp__sub_8303F588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31772
	ctx.r4.s64 = ctx.r11.s64 + 31772;
	// bl 0x824215d0
	ctx.lr = 0x8303F5A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2623(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2623, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F5C0"))) PPC_WEAK_FUNC(sub_8303F5C0);
PPC_FUNC_IMPL(__imp__sub_8303F5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31776
	ctx.r4.s64 = ctx.r11.s64 + 31776;
	// bl 0x824215d0
	ctx.lr = 0x8303F5DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303F5F8"))) PPC_WEAK_FUNC(sub_8303F5F8);
PPC_FUNC_IMPL(__imp__sub_8303F5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31780
	ctx.r4.s64 = ctx.r11.s64 + 31780;
	// bl 0x824215d0
	ctx.lr = 0x8303F614;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1392(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1392, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F630"))) PPC_WEAK_FUNC(sub_8303F630);
PPC_FUNC_IMPL(__imp__sub_8303F630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31784
	ctx.r4.s64 = ctx.r11.s64 + 31784;
	// bl 0x824215d0
	ctx.lr = 0x8303F64C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-546(r11)
	PPC_STORE_U8(ctx.r11.u32 + -546, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F668"))) PPC_WEAK_FUNC(sub_8303F668);
PPC_FUNC_IMPL(__imp__sub_8303F668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31788
	ctx.r4.s64 = ctx.r11.s64 + 31788;
	// bl 0x824215d0
	ctx.lr = 0x8303F684;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,352(r11)
	PPC_STORE_U8(ctx.r11.u32 + 352, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F6A0"))) PPC_WEAK_FUNC(sub_8303F6A0);
PPC_FUNC_IMPL(__imp__sub_8303F6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31792
	ctx.r4.s64 = ctx.r11.s64 + 31792;
	// bl 0x824215d0
	ctx.lr = 0x8303F6BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1156(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1156, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F6D8"))) PPC_WEAK_FUNC(sub_8303F6D8);
PPC_FUNC_IMPL(__imp__sub_8303F6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31796
	ctx.r4.s64 = ctx.r11.s64 + 31796;
	// bl 0x824215d0
	ctx.lr = 0x8303F6F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1776(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1776, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F710"))) PPC_WEAK_FUNC(sub_8303F710);
PPC_FUNC_IMPL(__imp__sub_8303F710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31800
	ctx.r4.s64 = ctx.r11.s64 + 31800;
	// bl 0x824215d0
	ctx.lr = 0x8303F72C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1522(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1522, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F748"))) PPC_WEAK_FUNC(sub_8303F748);
PPC_FUNC_IMPL(__imp__sub_8303F748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31804
	ctx.r4.s64 = ctx.r11.s64 + 31804;
	// bl 0x824215d0
	ctx.lr = 0x8303F764;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,130(r11)
	PPC_STORE_U8(ctx.r11.u32 + 130, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F780"))) PPC_WEAK_FUNC(sub_8303F780);
PPC_FUNC_IMPL(__imp__sub_8303F780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31808
	ctx.r4.s64 = ctx.r11.s64 + 31808;
	// bl 0x824215d0
	ctx.lr = 0x8303F79C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,525(r11)
	PPC_STORE_U8(ctx.r11.u32 + 525, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F7B8"))) PPC_WEAK_FUNC(sub_8303F7B8);
PPC_FUNC_IMPL(__imp__sub_8303F7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31812
	ctx.r4.s64 = ctx.r11.s64 + 31812;
	// bl 0x824215d0
	ctx.lr = 0x8303F7D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1646(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1646, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F7F0"))) PPC_WEAK_FUNC(sub_8303F7F0);
PPC_FUNC_IMPL(__imp__sub_8303F7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31816
	ctx.r4.s64 = ctx.r11.s64 + 31816;
	// bl 0x824215d0
	ctx.lr = 0x8303F80C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-464(r11)
	PPC_STORE_U8(ctx.r11.u32 + -464, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F828"))) PPC_WEAK_FUNC(sub_8303F828);
PPC_FUNC_IMPL(__imp__sub_8303F828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31820
	ctx.r4.s64 = ctx.r11.s64 + 31820;
	// bl 0x824215d0
	ctx.lr = 0x8303F844;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2592(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2592, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F860"))) PPC_WEAK_FUNC(sub_8303F860);
PPC_FUNC_IMPL(__imp__sub_8303F860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31824
	ctx.r4.s64 = ctx.r11.s64 + 31824;
	// bl 0x824215d0
	ctx.lr = 0x8303F87C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-905(r11)
	PPC_STORE_U8(ctx.r11.u32 + -905, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F898"))) PPC_WEAK_FUNC(sub_8303F898);
PPC_FUNC_IMPL(__imp__sub_8303F898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31828
	ctx.r4.s64 = ctx.r11.s64 + 31828;
	// bl 0x824215d0
	ctx.lr = 0x8303F8B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303F8D0"))) PPC_WEAK_FUNC(sub_8303F8D0);
PPC_FUNC_IMPL(__imp__sub_8303F8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31832
	ctx.r4.s64 = ctx.r11.s64 + 31832;
	// bl 0x824215d0
	ctx.lr = 0x8303F8EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2286(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2286, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F908"))) PPC_WEAK_FUNC(sub_8303F908);
PPC_FUNC_IMPL(__imp__sub_8303F908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31836
	ctx.r4.s64 = ctx.r11.s64 + 31836;
	// bl 0x824215d0
	ctx.lr = 0x8303F924;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303F940"))) PPC_WEAK_FUNC(sub_8303F940);
PPC_FUNC_IMPL(__imp__sub_8303F940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31840
	ctx.r4.s64 = ctx.r11.s64 + 31840;
	// bl 0x824215d0
	ctx.lr = 0x8303F95C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,498(r11)
	PPC_STORE_U8(ctx.r11.u32 + 498, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F978"))) PPC_WEAK_FUNC(sub_8303F978);
PPC_FUNC_IMPL(__imp__sub_8303F978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31844
	ctx.r4.s64 = ctx.r11.s64 + 31844;
	// bl 0x824215d0
	ctx.lr = 0x8303F994;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-309(r11)
	PPC_STORE_U8(ctx.r11.u32 + -309, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303F9B0"))) PPC_WEAK_FUNC(sub_8303F9B0);
PPC_FUNC_IMPL(__imp__sub_8303F9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31848
	ctx.r4.s64 = ctx.r11.s64 + 31848;
	// bl 0x824215d0
	ctx.lr = 0x8303F9CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303F9E8"))) PPC_WEAK_FUNC(sub_8303F9E8);
PPC_FUNC_IMPL(__imp__sub_8303F9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31852
	ctx.r4.s64 = ctx.r11.s64 + 31852;
	// bl 0x824215d0
	ctx.lr = 0x8303FA04;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1397(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1397, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FA20"))) PPC_WEAK_FUNC(sub_8303FA20);
PPC_FUNC_IMPL(__imp__sub_8303FA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31856
	ctx.r4.s64 = ctx.r11.s64 + 31856;
	// bl 0x824215d0
	ctx.lr = 0x8303FA3C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1912(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1912, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FA58"))) PPC_WEAK_FUNC(sub_8303FA58);
PPC_FUNC_IMPL(__imp__sub_8303FA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31860
	ctx.r4.s64 = ctx.r11.s64 + 31860;
	// bl 0x824215d0
	ctx.lr = 0x8303FA74;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-270(r11)
	PPC_STORE_U8(ctx.r11.u32 + -270, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FA90"))) PPC_WEAK_FUNC(sub_8303FA90);
PPC_FUNC_IMPL(__imp__sub_8303FA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31864
	ctx.r4.s64 = ctx.r11.s64 + 31864;
	// bl 0x824215d0
	ctx.lr = 0x8303FAAC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303FAC8"))) PPC_WEAK_FUNC(sub_8303FAC8);
PPC_FUNC_IMPL(__imp__sub_8303FAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31868
	ctx.r4.s64 = ctx.r11.s64 + 31868;
	// bl 0x824215d0
	ctx.lr = 0x8303FAE4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1154(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1154, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FB00"))) PPC_WEAK_FUNC(sub_8303FB00);
PPC_FUNC_IMPL(__imp__sub_8303FB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31872
	ctx.r4.s64 = ctx.r11.s64 + 31872;
	// bl 0x824215d0
	ctx.lr = 0x8303FB1C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2927(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2927, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FB38"))) PPC_WEAK_FUNC(sub_8303FB38);
PPC_FUNC_IMPL(__imp__sub_8303FB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31876
	ctx.r4.s64 = ctx.r11.s64 + 31876;
	// bl 0x824215d0
	ctx.lr = 0x8303FB54;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1591(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1591, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FB70"))) PPC_WEAK_FUNC(sub_8303FB70);
PPC_FUNC_IMPL(__imp__sub_8303FB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31880
	ctx.r4.s64 = ctx.r11.s64 + 31880;
	// bl 0x824215d0
	ctx.lr = 0x8303FB8C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,848(r11)
	PPC_STORE_U8(ctx.r11.u32 + 848, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FBA8"))) PPC_WEAK_FUNC(sub_8303FBA8);
PPC_FUNC_IMPL(__imp__sub_8303FBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31884
	ctx.r4.s64 = ctx.r11.s64 + 31884;
	// bl 0x824215d0
	ctx.lr = 0x8303FBC4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1644(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1644, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FBE0"))) PPC_WEAK_FUNC(sub_8303FBE0);
PPC_FUNC_IMPL(__imp__sub_8303FBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31888
	ctx.r4.s64 = ctx.r11.s64 + 31888;
	// bl 0x824215d0
	ctx.lr = 0x8303FBFC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,759(r11)
	PPC_STORE_U8(ctx.r11.u32 + 759, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FC18"))) PPC_WEAK_FUNC(sub_8303FC18);
PPC_FUNC_IMPL(__imp__sub_8303FC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31892
	ctx.r4.s64 = ctx.r11.s64 + 31892;
	// bl 0x824215d0
	ctx.lr = 0x8303FC34;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1011(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1011, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FC50"))) PPC_WEAK_FUNC(sub_8303FC50);
PPC_FUNC_IMPL(__imp__sub_8303FC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31896
	ctx.r4.s64 = ctx.r11.s64 + 31896;
	// bl 0x824215d0
	ctx.lr = 0x8303FC6C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1941(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1941, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FC88"))) PPC_WEAK_FUNC(sub_8303FC88);
PPC_FUNC_IMPL(__imp__sub_8303FC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31900
	ctx.r4.s64 = ctx.r11.s64 + 31900;
	// bl 0x824215d0
	ctx.lr = 0x8303FCA4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1607(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1607, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FCC0"))) PPC_WEAK_FUNC(sub_8303FCC0);
PPC_FUNC_IMPL(__imp__sub_8303FCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31904
	ctx.r4.s64 = ctx.r11.s64 + 31904;
	// bl 0x824215d0
	ctx.lr = 0x8303FCDC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1633(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1633, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FCF8"))) PPC_WEAK_FUNC(sub_8303FCF8);
PPC_FUNC_IMPL(__imp__sub_8303FCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31908
	ctx.r4.s64 = ctx.r11.s64 + 31908;
	// bl 0x824215d0
	ctx.lr = 0x8303FD14;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,523(r11)
	PPC_STORE_U8(ctx.r11.u32 + 523, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FD30"))) PPC_WEAK_FUNC(sub_8303FD30);
PPC_FUNC_IMPL(__imp__sub_8303FD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31912
	ctx.r4.s64 = ctx.r11.s64 + 31912;
	// bl 0x824215d0
	ctx.lr = 0x8303FD4C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303FD68"))) PPC_WEAK_FUNC(sub_8303FD68);
PPC_FUNC_IMPL(__imp__sub_8303FD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31916
	ctx.r4.s64 = ctx.r11.s64 + 31916;
	// bl 0x824215d0
	ctx.lr = 0x8303FD84;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303FDA0"))) PPC_WEAK_FUNC(sub_8303FDA0);
PPC_FUNC_IMPL(__imp__sub_8303FDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31920
	ctx.r4.s64 = ctx.r11.s64 + 31920;
	// bl 0x824215d0
	ctx.lr = 0x8303FDBC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_8303FDD8"))) PPC_WEAK_FUNC(sub_8303FDD8);
PPC_FUNC_IMPL(__imp__sub_8303FDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31924
	ctx.r4.s64 = ctx.r11.s64 + 31924;
	// bl 0x824215d0
	ctx.lr = 0x8303FDF4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,81(r11)
	PPC_STORE_U8(ctx.r11.u32 + 81, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FE10"))) PPC_WEAK_FUNC(sub_8303FE10);
PPC_FUNC_IMPL(__imp__sub_8303FE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31928
	ctx.r4.s64 = ctx.r11.s64 + 31928;
	// bl 0x824215d0
	ctx.lr = 0x8303FE2C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2059(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2059, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303FE48"))) PPC_WEAK_FUNC(sub_8303FE48);
PPC_FUNC_IMPL(__imp__sub_8303FE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31990
	ctx.r11.s64 = -2096496640;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31932
	ctx.r4.s64 = ctx.r11.s64 + 31932;
	// bl 0x824215d0
	ctx.lr = 0x8303FE64;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1799(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1799, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

