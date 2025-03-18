#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83043680"))) PPC_WEAK_FUNC(sub_83043680);
PPC_FUNC_IMPL(__imp__sub_83043680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32576
	ctx.r4.s64 = ctx.r11.s64 + -32576;
	// bl 0x824215d0
	ctx.lr = 0x8304369C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1682(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1682, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830436B8"))) PPC_WEAK_FUNC(sub_830436B8);
PPC_FUNC_IMPL(__imp__sub_830436B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32572
	ctx.r4.s64 = ctx.r11.s64 + -32572;
	// bl 0x824215d0
	ctx.lr = 0x830436D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1798(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1798, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830436F0"))) PPC_WEAK_FUNC(sub_830436F0);
PPC_FUNC_IMPL(__imp__sub_830436F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32568
	ctx.r4.s64 = ctx.r11.s64 + -32568;
	// bl 0x824215d0
	ctx.lr = 0x8304370C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-896(r11)
	PPC_STORE_U8(ctx.r11.u32 + -896, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043728"))) PPC_WEAK_FUNC(sub_83043728);
PPC_FUNC_IMPL(__imp__sub_83043728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32564
	ctx.r4.s64 = ctx.r11.s64 + -32564;
	// bl 0x824215d0
	ctx.lr = 0x83043744;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83043760"))) PPC_WEAK_FUNC(sub_83043760);
PPC_FUNC_IMPL(__imp__sub_83043760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32560
	ctx.r4.s64 = ctx.r11.s64 + -32560;
	// bl 0x824215d0
	ctx.lr = 0x8304377C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-719(r11)
	PPC_STORE_U8(ctx.r11.u32 + -719, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043798"))) PPC_WEAK_FUNC(sub_83043798);
PPC_FUNC_IMPL(__imp__sub_83043798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32556
	ctx.r4.s64 = ctx.r11.s64 + -32556;
	// bl 0x824215d0
	ctx.lr = 0x830437B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1462(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1462, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830437D0"))) PPC_WEAK_FUNC(sub_830437D0);
PPC_FUNC_IMPL(__imp__sub_830437D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32552
	ctx.r4.s64 = ctx.r11.s64 + -32552;
	// bl 0x824215d0
	ctx.lr = 0x830437EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2620(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2620, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043808"))) PPC_WEAK_FUNC(sub_83043808);
PPC_FUNC_IMPL(__imp__sub_83043808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32548
	ctx.r4.s64 = ctx.r11.s64 + -32548;
	// bl 0x824215d0
	ctx.lr = 0x83043824;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-196(r11)
	PPC_STORE_U8(ctx.r11.u32 + -196, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043840"))) PPC_WEAK_FUNC(sub_83043840);
PPC_FUNC_IMPL(__imp__sub_83043840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32544
	ctx.r4.s64 = ctx.r11.s64 + -32544;
	// bl 0x824215d0
	ctx.lr = 0x8304385C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1131(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1131, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043878"))) PPC_WEAK_FUNC(sub_83043878);
PPC_FUNC_IMPL(__imp__sub_83043878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32540
	ctx.r4.s64 = ctx.r11.s64 + -32540;
	// bl 0x824215d0
	ctx.lr = 0x83043894;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1623(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1623, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830438B0"))) PPC_WEAK_FUNC(sub_830438B0);
PPC_FUNC_IMPL(__imp__sub_830438B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32536
	ctx.r4.s64 = ctx.r11.s64 + -32536;
	// bl 0x824215d0
	ctx.lr = 0x830438CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,850(r11)
	PPC_STORE_U8(ctx.r11.u32 + 850, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830438E8"))) PPC_WEAK_FUNC(sub_830438E8);
PPC_FUNC_IMPL(__imp__sub_830438E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32532
	ctx.r4.s64 = ctx.r11.s64 + -32532;
	// bl 0x824215d0
	ctx.lr = 0x83043904;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2796(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2796, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043920"))) PPC_WEAK_FUNC(sub_83043920);
PPC_FUNC_IMPL(__imp__sub_83043920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32528
	ctx.r4.s64 = ctx.r11.s64 + -32528;
	// bl 0x824215d0
	ctx.lr = 0x8304393C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2718(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2718, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043958"))) PPC_WEAK_FUNC(sub_83043958);
PPC_FUNC_IMPL(__imp__sub_83043958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32524
	ctx.r4.s64 = ctx.r11.s64 + -32524;
	// bl 0x824215d0
	ctx.lr = 0x83043974;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83043990"))) PPC_WEAK_FUNC(sub_83043990);
PPC_FUNC_IMPL(__imp__sub_83043990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32520
	ctx.r4.s64 = ctx.r11.s64 + -32520;
	// bl 0x824215d0
	ctx.lr = 0x830439AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-927(r11)
	PPC_STORE_U8(ctx.r11.u32 + -927, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830439C8"))) PPC_WEAK_FUNC(sub_830439C8);
PPC_FUNC_IMPL(__imp__sub_830439C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32516
	ctx.r4.s64 = ctx.r11.s64 + -32516;
	// bl 0x824215d0
	ctx.lr = 0x830439E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2925(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2925, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043A00"))) PPC_WEAK_FUNC(sub_83043A00);
PPC_FUNC_IMPL(__imp__sub_83043A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32512
	ctx.r4.s64 = ctx.r11.s64 + -32512;
	// bl 0x824215d0
	ctx.lr = 0x83043A1C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83043A38"))) PPC_WEAK_FUNC(sub_83043A38);
PPC_FUNC_IMPL(__imp__sub_83043A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32508
	ctx.r4.s64 = ctx.r11.s64 + -32508;
	// bl 0x824215d0
	ctx.lr = 0x83043A54;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,524(r11)
	PPC_STORE_U8(ctx.r11.u32 + 524, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043A70"))) PPC_WEAK_FUNC(sub_83043A70);
PPC_FUNC_IMPL(__imp__sub_83043A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32504
	ctx.r4.s64 = ctx.r11.s64 + -32504;
	// bl 0x824215d0
	ctx.lr = 0x83043A8C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2310(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2310, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043AA8"))) PPC_WEAK_FUNC(sub_83043AA8);
PPC_FUNC_IMPL(__imp__sub_83043AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32500
	ctx.r4.s64 = ctx.r11.s64 + -32500;
	// bl 0x824215d0
	ctx.lr = 0x83043AC4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83043AE0"))) PPC_WEAK_FUNC(sub_83043AE0);
PPC_FUNC_IMPL(__imp__sub_83043AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32496
	ctx.r4.s64 = ctx.r11.s64 + -32496;
	// bl 0x824215d0
	ctx.lr = 0x83043AFC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2595(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2595, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043B18"))) PPC_WEAK_FUNC(sub_83043B18);
PPC_FUNC_IMPL(__imp__sub_83043B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32492
	ctx.r4.s64 = ctx.r11.s64 + -32492;
	// bl 0x824215d0
	ctx.lr = 0x83043B34;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-98(r11)
	PPC_STORE_U8(ctx.r11.u32 + -98, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043B50"))) PPC_WEAK_FUNC(sub_83043B50);
PPC_FUNC_IMPL(__imp__sub_83043B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32488
	ctx.r4.s64 = ctx.r11.s64 + -32488;
	// bl 0x824215d0
	ctx.lr = 0x83043B6C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,335(r11)
	PPC_STORE_U8(ctx.r11.u32 + 335, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043B88"))) PPC_WEAK_FUNC(sub_83043B88);
PPC_FUNC_IMPL(__imp__sub_83043B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32484
	ctx.r4.s64 = ctx.r11.s64 + -32484;
	// bl 0x824215d0
	ctx.lr = 0x83043BA4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-503(r11)
	PPC_STORE_U8(ctx.r11.u32 + -503, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043BC0"))) PPC_WEAK_FUNC(sub_83043BC0);
PPC_FUNC_IMPL(__imp__sub_83043BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32480
	ctx.r4.s64 = ctx.r11.s64 + -32480;
	// bl 0x824215d0
	ctx.lr = 0x83043BDC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2972(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2972, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043BF8"))) PPC_WEAK_FUNC(sub_83043BF8);
PPC_FUNC_IMPL(__imp__sub_83043BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32476
	ctx.r4.s64 = ctx.r11.s64 + -32476;
	// bl 0x824215d0
	ctx.lr = 0x83043C14;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83043C30"))) PPC_WEAK_FUNC(sub_83043C30);
PPC_FUNC_IMPL(__imp__sub_83043C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32472
	ctx.r4.s64 = ctx.r11.s64 + -32472;
	// bl 0x824215d0
	ctx.lr = 0x83043C4C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83043C68"))) PPC_WEAK_FUNC(sub_83043C68);
PPC_FUNC_IMPL(__imp__sub_83043C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32468
	ctx.r4.s64 = ctx.r11.s64 + -32468;
	// bl 0x824215d0
	ctx.lr = 0x83043C84;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3294(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3294, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043CA0"))) PPC_WEAK_FUNC(sub_83043CA0);
PPC_FUNC_IMPL(__imp__sub_83043CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32464
	ctx.r4.s64 = ctx.r11.s64 + -32464;
	// bl 0x824215d0
	ctx.lr = 0x83043CBC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1908(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1908, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043CD8"))) PPC_WEAK_FUNC(sub_83043CD8);
PPC_FUNC_IMPL(__imp__sub_83043CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32460
	ctx.r4.s64 = ctx.r11.s64 + -32460;
	// bl 0x824215d0
	ctx.lr = 0x83043CF4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1979(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1979, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043D10"))) PPC_WEAK_FUNC(sub_83043D10);
PPC_FUNC_IMPL(__imp__sub_83043D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32456
	ctx.r4.s64 = ctx.r11.s64 + -32456;
	// bl 0x824215d0
	ctx.lr = 0x83043D2C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-737(r11)
	PPC_STORE_U8(ctx.r11.u32 + -737, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043D48"))) PPC_WEAK_FUNC(sub_83043D48);
PPC_FUNC_IMPL(__imp__sub_83043D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32452
	ctx.r4.s64 = ctx.r11.s64 + -32452;
	// bl 0x824215d0
	ctx.lr = 0x83043D64;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83043D80"))) PPC_WEAK_FUNC(sub_83043D80);
PPC_FUNC_IMPL(__imp__sub_83043D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32448
	ctx.r4.s64 = ctx.r11.s64 + -32448;
	// bl 0x824215d0
	ctx.lr = 0x83043D9C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83043DB8"))) PPC_WEAK_FUNC(sub_83043DB8);
PPC_FUNC_IMPL(__imp__sub_83043DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32444
	ctx.r4.s64 = ctx.r11.s64 + -32444;
	// bl 0x824215d0
	ctx.lr = 0x83043DD4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83043DF0"))) PPC_WEAK_FUNC(sub_83043DF0);
PPC_FUNC_IMPL(__imp__sub_83043DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32440
	ctx.r4.s64 = ctx.r11.s64 + -32440;
	// bl 0x824215d0
	ctx.lr = 0x83043E0C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3224(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3224, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043E28"))) PPC_WEAK_FUNC(sub_83043E28);
PPC_FUNC_IMPL(__imp__sub_83043E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32436
	ctx.r4.s64 = ctx.r11.s64 + -32436;
	// bl 0x824215d0
	ctx.lr = 0x83043E44;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,220(r11)
	PPC_STORE_U8(ctx.r11.u32 + 220, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043E60"))) PPC_WEAK_FUNC(sub_83043E60);
PPC_FUNC_IMPL(__imp__sub_83043E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32432
	ctx.r4.s64 = ctx.r11.s64 + -32432;
	// bl 0x824215d0
	ctx.lr = 0x83043E7C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83043E98"))) PPC_WEAK_FUNC(sub_83043E98);
PPC_FUNC_IMPL(__imp__sub_83043E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32428
	ctx.r4.s64 = ctx.r11.s64 + -32428;
	// bl 0x824215d0
	ctx.lr = 0x83043EB4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1684(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1684, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043ED0"))) PPC_WEAK_FUNC(sub_83043ED0);
PPC_FUNC_IMPL(__imp__sub_83043ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32424
	ctx.r4.s64 = ctx.r11.s64 + -32424;
	// bl 0x824215d0
	ctx.lr = 0x83043EEC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2445(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2445, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043F08"))) PPC_WEAK_FUNC(sub_83043F08);
PPC_FUNC_IMPL(__imp__sub_83043F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32420
	ctx.r4.s64 = ctx.r11.s64 + -32420;
	// bl 0x824215d0
	ctx.lr = 0x83043F24;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3201(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3201, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043F40"))) PPC_WEAK_FUNC(sub_83043F40);
PPC_FUNC_IMPL(__imp__sub_83043F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32416
	ctx.r4.s64 = ctx.r11.s64 + -32416;
	// bl 0x824215d0
	ctx.lr = 0x83043F5C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-928(r11)
	PPC_STORE_U8(ctx.r11.u32 + -928, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043F78"))) PPC_WEAK_FUNC(sub_83043F78);
PPC_FUNC_IMPL(__imp__sub_83043F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32412
	ctx.r4.s64 = ctx.r11.s64 + -32412;
	// bl 0x824215d0
	ctx.lr = 0x83043F94;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83043FB0"))) PPC_WEAK_FUNC(sub_83043FB0);
PPC_FUNC_IMPL(__imp__sub_83043FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32408
	ctx.r4.s64 = ctx.r11.s64 + -32408;
	// bl 0x824215d0
	ctx.lr = 0x83043FCC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3072(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3072, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83043FE8"))) PPC_WEAK_FUNC(sub_83043FE8);
PPC_FUNC_IMPL(__imp__sub_83043FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32404
	ctx.r4.s64 = ctx.r11.s64 + -32404;
	// bl 0x824215d0
	ctx.lr = 0x83044004;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,288(r11)
	PPC_STORE_U8(ctx.r11.u32 + 288, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044020"))) PPC_WEAK_FUNC(sub_83044020);
PPC_FUNC_IMPL(__imp__sub_83044020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32400
	ctx.r4.s64 = ctx.r11.s64 + -32400;
	// bl 0x824215d0
	ctx.lr = 0x8304403C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1720(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1720, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044058"))) PPC_WEAK_FUNC(sub_83044058);
PPC_FUNC_IMPL(__imp__sub_83044058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32396
	ctx.r4.s64 = ctx.r11.s64 + -32396;
	// bl 0x824215d0
	ctx.lr = 0x83044074;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,499(r11)
	PPC_STORE_U8(ctx.r11.u32 + 499, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044090"))) PPC_WEAK_FUNC(sub_83044090);
PPC_FUNC_IMPL(__imp__sub_83044090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32392
	ctx.r4.s64 = ctx.r11.s64 + -32392;
	// bl 0x824215d0
	ctx.lr = 0x830440AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2204(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2204, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830440C8"))) PPC_WEAK_FUNC(sub_830440C8);
PPC_FUNC_IMPL(__imp__sub_830440C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32388
	ctx.r4.s64 = ctx.r11.s64 + -32388;
	// bl 0x824215d0
	ctx.lr = 0x830440E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1609(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1609, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044100"))) PPC_WEAK_FUNC(sub_83044100);
PPC_FUNC_IMPL(__imp__sub_83044100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32384
	ctx.r4.s64 = ctx.r11.s64 + -32384;
	// bl 0x824215d0
	ctx.lr = 0x8304411C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83044138"))) PPC_WEAK_FUNC(sub_83044138);
PPC_FUNC_IMPL(__imp__sub_83044138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32380
	ctx.r4.s64 = ctx.r11.s64 + -32380;
	// bl 0x824215d0
	ctx.lr = 0x83044154;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,674(r11)
	PPC_STORE_U8(ctx.r11.u32 + 674, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044170"))) PPC_WEAK_FUNC(sub_83044170);
PPC_FUNC_IMPL(__imp__sub_83044170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32376
	ctx.r4.s64 = ctx.r11.s64 + -32376;
	// bl 0x824215d0
	ctx.lr = 0x8304418C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830441A8"))) PPC_WEAK_FUNC(sub_830441A8);
PPC_FUNC_IMPL(__imp__sub_830441A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32372
	ctx.r4.s64 = ctx.r11.s64 + -32372;
	// bl 0x824215d0
	ctx.lr = 0x830441C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3122(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3122, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830441E0"))) PPC_WEAK_FUNC(sub_830441E0);
PPC_FUNC_IMPL(__imp__sub_830441E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32368
	ctx.r4.s64 = ctx.r11.s64 + -32368;
	// bl 0x824215d0
	ctx.lr = 0x830441FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83044218"))) PPC_WEAK_FUNC(sub_83044218);
PPC_FUNC_IMPL(__imp__sub_83044218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32364
	ctx.r4.s64 = ctx.r11.s64 + -32364;
	// bl 0x824215d0
	ctx.lr = 0x83044234;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1922(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1922, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044250"))) PPC_WEAK_FUNC(sub_83044250);
PPC_FUNC_IMPL(__imp__sub_83044250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32360
	ctx.r4.s64 = ctx.r11.s64 + -32360;
	// bl 0x824215d0
	ctx.lr = 0x8304426C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2241, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044288"))) PPC_WEAK_FUNC(sub_83044288);
PPC_FUNC_IMPL(__imp__sub_83044288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32356
	ctx.r4.s64 = ctx.r11.s64 + -32356;
	// bl 0x824215d0
	ctx.lr = 0x830442A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,221(r11)
	PPC_STORE_U8(ctx.r11.u32 + 221, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830442C0"))) PPC_WEAK_FUNC(sub_830442C0);
PPC_FUNC_IMPL(__imp__sub_830442C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32352
	ctx.r4.s64 = ctx.r11.s64 + -32352;
	// bl 0x824215d0
	ctx.lr = 0x830442DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830442F8"))) PPC_WEAK_FUNC(sub_830442F8);
PPC_FUNC_IMPL(__imp__sub_830442F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32348
	ctx.r4.s64 = ctx.r11.s64 + -32348;
	// bl 0x824215d0
	ctx.lr = 0x83044314;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83044330"))) PPC_WEAK_FUNC(sub_83044330);
PPC_FUNC_IMPL(__imp__sub_83044330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32344
	ctx.r4.s64 = ctx.r11.s64 + -32344;
	// bl 0x824215d0
	ctx.lr = 0x8304434C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044368"))) PPC_WEAK_FUNC(sub_83044368);
PPC_FUNC_IMPL(__imp__sub_83044368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32340
	ctx.r4.s64 = ctx.r11.s64 + -32340;
	// bl 0x824215d0
	ctx.lr = 0x83044384;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2672(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2672, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830443A0"))) PPC_WEAK_FUNC(sub_830443A0);
PPC_FUNC_IMPL(__imp__sub_830443A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32336
	ctx.r4.s64 = ctx.r11.s64 + -32336;
	// bl 0x824215d0
	ctx.lr = 0x830443BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830443D8"))) PPC_WEAK_FUNC(sub_830443D8);
PPC_FUNC_IMPL(__imp__sub_830443D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32332
	ctx.r4.s64 = ctx.r11.s64 + -32332;
	// bl 0x824215d0
	ctx.lr = 0x830443F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2207(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2207, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044410"))) PPC_WEAK_FUNC(sub_83044410);
PPC_FUNC_IMPL(__imp__sub_83044410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32328
	ctx.r4.s64 = ctx.r11.s64 + -32328;
	// bl 0x824215d0
	ctx.lr = 0x8304442C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2114(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2114, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044448"))) PPC_WEAK_FUNC(sub_83044448);
PPC_FUNC_IMPL(__imp__sub_83044448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32324
	ctx.r4.s64 = ctx.r11.s64 + -32324;
	// bl 0x824215d0
	ctx.lr = 0x83044464;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2501(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2501, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044480"))) PPC_WEAK_FUNC(sub_83044480);
PPC_FUNC_IMPL(__imp__sub_83044480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32320
	ctx.r4.s64 = ctx.r11.s64 + -32320;
	// bl 0x824215d0
	ctx.lr = 0x8304449C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830444B8"))) PPC_WEAK_FUNC(sub_830444B8);
PPC_FUNC_IMPL(__imp__sub_830444B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32316
	ctx.r4.s64 = ctx.r11.s64 + -32316;
	// bl 0x824215d0
	ctx.lr = 0x830444D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1130(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1130, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830444F0"))) PPC_WEAK_FUNC(sub_830444F0);
PPC_FUNC_IMPL(__imp__sub_830444F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32312
	ctx.r4.s64 = ctx.r11.s64 + -32312;
	// bl 0x824215d0
	ctx.lr = 0x8304450C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2447(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2447, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044528"))) PPC_WEAK_FUNC(sub_83044528);
PPC_FUNC_IMPL(__imp__sub_83044528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32308
	ctx.r4.s64 = ctx.r11.s64 + -32308;
	// bl 0x824215d0
	ctx.lr = 0x83044544;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1848(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1848, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044560"))) PPC_WEAK_FUNC(sub_83044560);
PPC_FUNC_IMPL(__imp__sub_83044560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32304
	ctx.r4.s64 = ctx.r11.s64 + -32304;
	// bl 0x824215d0
	ctx.lr = 0x8304457C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-245(r11)
	PPC_STORE_U8(ctx.r11.u32 + -245, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044598"))) PPC_WEAK_FUNC(sub_83044598);
PPC_FUNC_IMPL(__imp__sub_83044598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32300
	ctx.r4.s64 = ctx.r11.s64 + -32300;
	// bl 0x824215d0
	ctx.lr = 0x830445B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1974(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1974, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830445D0"))) PPC_WEAK_FUNC(sub_830445D0);
PPC_FUNC_IMPL(__imp__sub_830445D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32296
	ctx.r4.s64 = ctx.r11.s64 + -32296;
	// bl 0x824215d0
	ctx.lr = 0x830445EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-423(r11)
	PPC_STORE_U8(ctx.r11.u32 + -423, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044608"))) PPC_WEAK_FUNC(sub_83044608);
PPC_FUNC_IMPL(__imp__sub_83044608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32292
	ctx.r4.s64 = ctx.r11.s64 + -32292;
	// bl 0x824215d0
	ctx.lr = 0x83044624;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83044640"))) PPC_WEAK_FUNC(sub_83044640);
PPC_FUNC_IMPL(__imp__sub_83044640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32288
	ctx.r4.s64 = ctx.r11.s64 + -32288;
	// bl 0x824215d0
	ctx.lr = 0x8304465C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-818(r11)
	PPC_STORE_U8(ctx.r11.u32 + -818, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044678"))) PPC_WEAK_FUNC(sub_83044678);
PPC_FUNC_IMPL(__imp__sub_83044678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32284
	ctx.r4.s64 = ctx.r11.s64 + -32284;
	// bl 0x824215d0
	ctx.lr = 0x83044694;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2415(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2415, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830446B0"))) PPC_WEAK_FUNC(sub_830446B0);
PPC_FUNC_IMPL(__imp__sub_830446B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32280
	ctx.r4.s64 = ctx.r11.s64 + -32280;
	// bl 0x824215d0
	ctx.lr = 0x830446CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1785(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1785, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830446E8"))) PPC_WEAK_FUNC(sub_830446E8);
PPC_FUNC_IMPL(__imp__sub_830446E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32276
	ctx.r4.s64 = ctx.r11.s64 + -32276;
	// bl 0x824215d0
	ctx.lr = 0x83044704;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-662(r11)
	PPC_STORE_U8(ctx.r11.u32 + -662, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044720"))) PPC_WEAK_FUNC(sub_83044720);
PPC_FUNC_IMPL(__imp__sub_83044720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32272
	ctx.r4.s64 = ctx.r11.s64 + -32272;
	// bl 0x824215d0
	ctx.lr = 0x8304473C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83044758"))) PPC_WEAK_FUNC(sub_83044758);
PPC_FUNC_IMPL(__imp__sub_83044758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32268
	ctx.r4.s64 = ctx.r11.s64 + -32268;
	// bl 0x824215d0
	ctx.lr = 0x83044774;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83044790"))) PPC_WEAK_FUNC(sub_83044790);
PPC_FUNC_IMPL(__imp__sub_83044790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32264
	ctx.r4.s64 = ctx.r11.s64 + -32264;
	// bl 0x824215d0
	ctx.lr = 0x830447AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1911(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1911, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830447C8"))) PPC_WEAK_FUNC(sub_830447C8);
PPC_FUNC_IMPL(__imp__sub_830447C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32260
	ctx.r4.s64 = ctx.r11.s64 + -32260;
	// bl 0x824215d0
	ctx.lr = 0x830447E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1255(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1255, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044800"))) PPC_WEAK_FUNC(sub_83044800);
PPC_FUNC_IMPL(__imp__sub_83044800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32256
	ctx.r4.s64 = ctx.r11.s64 + -32256;
	// bl 0x824215d0
	ctx.lr = 0x8304481C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-817(r11)
	PPC_STORE_U8(ctx.r11.u32 + -817, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044838"))) PPC_WEAK_FUNC(sub_83044838);
PPC_FUNC_IMPL(__imp__sub_83044838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32252
	ctx.r4.s64 = ctx.r11.s64 + -32252;
	// bl 0x824215d0
	ctx.lr = 0x83044854;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1730(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1730, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044870"))) PPC_WEAK_FUNC(sub_83044870);
PPC_FUNC_IMPL(__imp__sub_83044870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32248
	ctx.r4.s64 = ctx.r11.s64 + -32248;
	// bl 0x824215d0
	ctx.lr = 0x8304488C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2318(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2318, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830448A8"))) PPC_WEAK_FUNC(sub_830448A8);
PPC_FUNC_IMPL(__imp__sub_830448A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32244
	ctx.r4.s64 = ctx.r11.s64 + -32244;
	// bl 0x824215d0
	ctx.lr = 0x830448C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1681(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1681, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830448E0"))) PPC_WEAK_FUNC(sub_830448E0);
PPC_FUNC_IMPL(__imp__sub_830448E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32240
	ctx.r4.s64 = ctx.r11.s64 + -32240;
	// bl 0x824215d0
	ctx.lr = 0x830448FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,977(r11)
	PPC_STORE_U8(ctx.r11.u32 + 977, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044918"))) PPC_WEAK_FUNC(sub_83044918);
PPC_FUNC_IMPL(__imp__sub_83044918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32236
	ctx.r4.s64 = ctx.r11.s64 + -32236;
	// bl 0x824215d0
	ctx.lr = 0x83044934;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-908(r11)
	PPC_STORE_U8(ctx.r11.u32 + -908, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044950"))) PPC_WEAK_FUNC(sub_83044950);
PPC_FUNC_IMPL(__imp__sub_83044950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32232
	ctx.r4.s64 = ctx.r11.s64 + -32232;
	// bl 0x824215d0
	ctx.lr = 0x8304496C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1729(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1729, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044988"))) PPC_WEAK_FUNC(sub_83044988);
PPC_FUNC_IMPL(__imp__sub_83044988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32228
	ctx.r4.s64 = ctx.r11.s64 + -32228;
	// bl 0x824215d0
	ctx.lr = 0x830449A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-926(r11)
	PPC_STORE_U8(ctx.r11.u32 + -926, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830449C0"))) PPC_WEAK_FUNC(sub_830449C0);
PPC_FUNC_IMPL(__imp__sub_830449C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32224
	ctx.r4.s64 = ctx.r11.s64 + -32224;
	// bl 0x824215d0
	ctx.lr = 0x830449DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830449F8"))) PPC_WEAK_FUNC(sub_830449F8);
PPC_FUNC_IMPL(__imp__sub_830449F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32220
	ctx.r4.s64 = ctx.r11.s64 + -32220;
	// bl 0x824215d0
	ctx.lr = 0x83044A14;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2644(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2644, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044A30"))) PPC_WEAK_FUNC(sub_83044A30);
PPC_FUNC_IMPL(__imp__sub_83044A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32216
	ctx.r4.s64 = ctx.r11.s64 + -32216;
	// bl 0x824215d0
	ctx.lr = 0x83044A4C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2937(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2937, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044A68"))) PPC_WEAK_FUNC(sub_83044A68);
PPC_FUNC_IMPL(__imp__sub_83044A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32212
	ctx.r4.s64 = ctx.r11.s64 + -32212;
	// bl 0x824215d0
	ctx.lr = 0x83044A84;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3254(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3254, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044AA0"))) PPC_WEAK_FUNC(sub_83044AA0);
PPC_FUNC_IMPL(__imp__sub_83044AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32208
	ctx.r4.s64 = ctx.r11.s64 + -32208;
	// bl 0x824215d0
	ctx.lr = 0x83044ABC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1180(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1180, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044AD8"))) PPC_WEAK_FUNC(sub_83044AD8);
PPC_FUNC_IMPL(__imp__sub_83044AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32204
	ctx.r4.s64 = ctx.r11.s64 + -32204;
	// bl 0x824215d0
	ctx.lr = 0x83044AF4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2883(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2883, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044B10"))) PPC_WEAK_FUNC(sub_83044B10);
PPC_FUNC_IMPL(__imp__sub_83044B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32200
	ctx.r4.s64 = ctx.r11.s64 + -32200;
	// bl 0x824215d0
	ctx.lr = 0x83044B2C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1967(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1967, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044B48"))) PPC_WEAK_FUNC(sub_83044B48);
PPC_FUNC_IMPL(__imp__sub_83044B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32196
	ctx.r4.s64 = ctx.r11.s64 + -32196;
	// bl 0x824215d0
	ctx.lr = 0x83044B64;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2036(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2036, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044B80"))) PPC_WEAK_FUNC(sub_83044B80);
PPC_FUNC_IMPL(__imp__sub_83044B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32192
	ctx.r4.s64 = ctx.r11.s64 + -32192;
	// bl 0x824215d0
	ctx.lr = 0x83044B9C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2756(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2756, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044BB8"))) PPC_WEAK_FUNC(sub_83044BB8);
PPC_FUNC_IMPL(__imp__sub_83044BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32188
	ctx.r4.s64 = ctx.r11.s64 + -32188;
	// bl 0x824215d0
	ctx.lr = 0x83044BD4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1861(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1861, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044BF0"))) PPC_WEAK_FUNC(sub_83044BF0);
PPC_FUNC_IMPL(__imp__sub_83044BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32184
	ctx.r4.s64 = ctx.r11.s64 + -32184;
	// bl 0x824215d0
	ctx.lr = 0x83044C0C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-459(r11)
	PPC_STORE_U8(ctx.r11.u32 + -459, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044C28"))) PPC_WEAK_FUNC(sub_83044C28);
PPC_FUNC_IMPL(__imp__sub_83044C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32180
	ctx.r4.s64 = ctx.r11.s64 + -32180;
	// bl 0x824215d0
	ctx.lr = 0x83044C44;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1441(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1441, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044C60"))) PPC_WEAK_FUNC(sub_83044C60);
PPC_FUNC_IMPL(__imp__sub_83044C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32176
	ctx.r4.s64 = ctx.r11.s64 + -32176;
	// bl 0x824215d0
	ctx.lr = 0x83044C7C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,38(r11)
	PPC_STORE_U8(ctx.r11.u32 + 38, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044C98"))) PPC_WEAK_FUNC(sub_83044C98);
PPC_FUNC_IMPL(__imp__sub_83044C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32172
	ctx.r4.s64 = ctx.r11.s64 + -32172;
	// bl 0x824215d0
	ctx.lr = 0x83044CB4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83044CD0"))) PPC_WEAK_FUNC(sub_83044CD0);
PPC_FUNC_IMPL(__imp__sub_83044CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32168
	ctx.r4.s64 = ctx.r11.s64 + -32168;
	// bl 0x824215d0
	ctx.lr = 0x83044CEC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83044D08"))) PPC_WEAK_FUNC(sub_83044D08);
PPC_FUNC_IMPL(__imp__sub_83044D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32164
	ctx.r4.s64 = ctx.r11.s64 + -32164;
	// bl 0x824215d0
	ctx.lr = 0x83044D24;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3283(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3283, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044D40"))) PPC_WEAK_FUNC(sub_83044D40);
PPC_FUNC_IMPL(__imp__sub_83044D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32160
	ctx.r4.s64 = ctx.r11.s64 + -32160;
	// bl 0x824215d0
	ctx.lr = 0x83044D5C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1594(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1594, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044D78"))) PPC_WEAK_FUNC(sub_83044D78);
PPC_FUNC_IMPL(__imp__sub_83044D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32156
	ctx.r4.s64 = ctx.r11.s64 + -32156;
	// bl 0x824215d0
	ctx.lr = 0x83044D94;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83044DB0"))) PPC_WEAK_FUNC(sub_83044DB0);
PPC_FUNC_IMPL(__imp__sub_83044DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32152
	ctx.r4.s64 = ctx.r11.s64 + -32152;
	// bl 0x824215d0
	ctx.lr = 0x83044DCC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-399(r11)
	PPC_STORE_U8(ctx.r11.u32 + -399, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044DE8"))) PPC_WEAK_FUNC(sub_83044DE8);
PPC_FUNC_IMPL(__imp__sub_83044DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32148
	ctx.r4.s64 = ctx.r11.s64 + -32148;
	// bl 0x824215d0
	ctx.lr = 0x83044E04;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83044E20"))) PPC_WEAK_FUNC(sub_83044E20);
PPC_FUNC_IMPL(__imp__sub_83044E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32144
	ctx.r4.s64 = ctx.r11.s64 + -32144;
	// bl 0x824215d0
	ctx.lr = 0x83044E3C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2903(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2903, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044E58"))) PPC_WEAK_FUNC(sub_83044E58);
PPC_FUNC_IMPL(__imp__sub_83044E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32140
	ctx.r4.s64 = ctx.r11.s64 + -32140;
	// bl 0x824215d0
	ctx.lr = 0x83044E74;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1320(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1320, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044E90"))) PPC_WEAK_FUNC(sub_83044E90);
PPC_FUNC_IMPL(__imp__sub_83044E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32136
	ctx.r4.s64 = ctx.r11.s64 + -32136;
	// bl 0x824215d0
	ctx.lr = 0x83044EAC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-454(r11)
	PPC_STORE_U8(ctx.r11.u32 + -454, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044EC8"))) PPC_WEAK_FUNC(sub_83044EC8);
PPC_FUNC_IMPL(__imp__sub_83044EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32132
	ctx.r4.s64 = ctx.r11.s64 + -32132;
	// bl 0x824215d0
	ctx.lr = 0x83044EE4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2678(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2678, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044F00"))) PPC_WEAK_FUNC(sub_83044F00);
PPC_FUNC_IMPL(__imp__sub_83044F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32128
	ctx.r4.s64 = ctx.r11.s64 + -32128;
	// bl 0x824215d0
	ctx.lr = 0x83044F1C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,851(r11)
	PPC_STORE_U8(ctx.r11.u32 + 851, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044F38"))) PPC_WEAK_FUNC(sub_83044F38);
PPC_FUNC_IMPL(__imp__sub_83044F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32124
	ctx.r4.s64 = ctx.r11.s64 + -32124;
	// bl 0x824215d0
	ctx.lr = 0x83044F54;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1942, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044F70"))) PPC_WEAK_FUNC(sub_83044F70);
PPC_FUNC_IMPL(__imp__sub_83044F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32120
	ctx.r4.s64 = ctx.r11.s64 + -32120;
	// bl 0x824215d0
	ctx.lr = 0x83044F8C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83044FA8"))) PPC_WEAK_FUNC(sub_83044FA8);
PPC_FUNC_IMPL(__imp__sub_83044FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32116
	ctx.r4.s64 = ctx.r11.s64 + -32116;
	// bl 0x824215d0
	ctx.lr = 0x83044FC4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1910(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1910, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83044FE0"))) PPC_WEAK_FUNC(sub_83044FE0);
PPC_FUNC_IMPL(__imp__sub_83044FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32112
	ctx.r4.s64 = ctx.r11.s64 + -32112;
	// bl 0x824215d0
	ctx.lr = 0x83044FFC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83045018"))) PPC_WEAK_FUNC(sub_83045018);
PPC_FUNC_IMPL(__imp__sub_83045018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32108
	ctx.r4.s64 = ctx.r11.s64 + -32108;
	// bl 0x824215d0
	ctx.lr = 0x83045034;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,294(r11)
	PPC_STORE_U8(ctx.r11.u32 + 294, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045050"))) PPC_WEAK_FUNC(sub_83045050);
PPC_FUNC_IMPL(__imp__sub_83045050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32104
	ctx.r4.s64 = ctx.r11.s64 + -32104;
	// bl 0x824215d0
	ctx.lr = 0x8304506C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2311(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2311, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045088"))) PPC_WEAK_FUNC(sub_83045088);
PPC_FUNC_IMPL(__imp__sub_83045088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32100
	ctx.r4.s64 = ctx.r11.s64 + -32100;
	// bl 0x824215d0
	ctx.lr = 0x830450A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1849(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1849, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830450C0"))) PPC_WEAK_FUNC(sub_830450C0);
PPC_FUNC_IMPL(__imp__sub_830450C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32096
	ctx.r4.s64 = ctx.r11.s64 + -32096;
	// bl 0x824215d0
	ctx.lr = 0x830450DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1173(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1173, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830450F8"))) PPC_WEAK_FUNC(sub_830450F8);
PPC_FUNC_IMPL(__imp__sub_830450F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32092
	ctx.r4.s64 = ctx.r11.s64 + -32092;
	// bl 0x824215d0
	ctx.lr = 0x83045114;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,262(r11)
	PPC_STORE_U8(ctx.r11.u32 + 262, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045130"))) PPC_WEAK_FUNC(sub_83045130);
PPC_FUNC_IMPL(__imp__sub_83045130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32088
	ctx.r4.s64 = ctx.r11.s64 + -32088;
	// bl 0x824215d0
	ctx.lr = 0x8304514C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1153(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1153, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045168"))) PPC_WEAK_FUNC(sub_83045168);
PPC_FUNC_IMPL(__imp__sub_83045168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32084
	ctx.r4.s64 = ctx.r11.s64 + -32084;
	// bl 0x824215d0
	ctx.lr = 0x83045184;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830451A0"))) PPC_WEAK_FUNC(sub_830451A0);
PPC_FUNC_IMPL(__imp__sub_830451A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32080
	ctx.r4.s64 = ctx.r11.s64 + -32080;
	// bl 0x824215d0
	ctx.lr = 0x830451BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1912(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1912, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830451D8"))) PPC_WEAK_FUNC(sub_830451D8);
PPC_FUNC_IMPL(__imp__sub_830451D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32076
	ctx.r4.s64 = ctx.r11.s64 + -32076;
	// bl 0x824215d0
	ctx.lr = 0x830451F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-379(r11)
	PPC_STORE_U8(ctx.r11.u32 + -379, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045210"))) PPC_WEAK_FUNC(sub_83045210);
PPC_FUNC_IMPL(__imp__sub_83045210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32072
	ctx.r4.s64 = ctx.r11.s64 + -32072;
	// bl 0x824215d0
	ctx.lr = 0x8304522C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,723(r11)
	PPC_STORE_U8(ctx.r11.u32 + 723, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045248"))) PPC_WEAK_FUNC(sub_83045248);
PPC_FUNC_IMPL(__imp__sub_83045248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32068
	ctx.r4.s64 = ctx.r11.s64 + -32068;
	// bl 0x824215d0
	ctx.lr = 0x83045264;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83045280"))) PPC_WEAK_FUNC(sub_83045280);
PPC_FUNC_IMPL(__imp__sub_83045280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32064
	ctx.r4.s64 = ctx.r11.s64 + -32064;
	// bl 0x824215d0
	ctx.lr = 0x8304529C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-311(r11)
	PPC_STORE_U8(ctx.r11.u32 + -311, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830452B8"))) PPC_WEAK_FUNC(sub_830452B8);
PPC_FUNC_IMPL(__imp__sub_830452B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32060
	ctx.r4.s64 = ctx.r11.s64 + -32060;
	// bl 0x824215d0
	ctx.lr = 0x830452D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3266(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3266, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830452F0"))) PPC_WEAK_FUNC(sub_830452F0);
PPC_FUNC_IMPL(__imp__sub_830452F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32056
	ctx.r4.s64 = ctx.r11.s64 + -32056;
	// bl 0x824215d0
	ctx.lr = 0x8304530C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-462(r11)
	PPC_STORE_U8(ctx.r11.u32 + -462, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045328"))) PPC_WEAK_FUNC(sub_83045328);
PPC_FUNC_IMPL(__imp__sub_83045328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32052
	ctx.r4.s64 = ctx.r11.s64 + -32052;
	// bl 0x824215d0
	ctx.lr = 0x83045344;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83045360"))) PPC_WEAK_FUNC(sub_83045360);
PPC_FUNC_IMPL(__imp__sub_83045360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32048
	ctx.r4.s64 = ctx.r11.s64 + -32048;
	// bl 0x824215d0
	ctx.lr = 0x8304537C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2580(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2580, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045398"))) PPC_WEAK_FUNC(sub_83045398);
PPC_FUNC_IMPL(__imp__sub_83045398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32044
	ctx.r4.s64 = ctx.r11.s64 + -32044;
	// bl 0x824215d0
	ctx.lr = 0x830453B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,526(r11)
	PPC_STORE_U8(ctx.r11.u32 + 526, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830453D0"))) PPC_WEAK_FUNC(sub_830453D0);
PPC_FUNC_IMPL(__imp__sub_830453D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32040
	ctx.r4.s64 = ctx.r11.s64 + -32040;
	// bl 0x824215d0
	ctx.lr = 0x830453EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1540(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1540, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045408"))) PPC_WEAK_FUNC(sub_83045408);
PPC_FUNC_IMPL(__imp__sub_83045408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32036
	ctx.r4.s64 = ctx.r11.s64 + -32036;
	// bl 0x824215d0
	ctx.lr = 0x83045424;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1924(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1924, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045440"))) PPC_WEAK_FUNC(sub_83045440);
PPC_FUNC_IMPL(__imp__sub_83045440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32032
	ctx.r4.s64 = ctx.r11.s64 + -32032;
	// bl 0x824215d0
	ctx.lr = 0x8304545C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1921(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1921, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045478"))) PPC_WEAK_FUNC(sub_83045478);
PPC_FUNC_IMPL(__imp__sub_83045478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32028
	ctx.r4.s64 = ctx.r11.s64 + -32028;
	// bl 0x824215d0
	ctx.lr = 0x83045494;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830454B0"))) PPC_WEAK_FUNC(sub_830454B0);
PPC_FUNC_IMPL(__imp__sub_830454B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32024
	ctx.r4.s64 = ctx.r11.s64 + -32024;
	// bl 0x824215d0
	ctx.lr = 0x830454CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2717(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2717, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830454E8"))) PPC_WEAK_FUNC(sub_830454E8);
PPC_FUNC_IMPL(__imp__sub_830454E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32020
	ctx.r4.s64 = ctx.r11.s64 + -32020;
	// bl 0x824215d0
	ctx.lr = 0x83045504;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1045(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1045, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045520"))) PPC_WEAK_FUNC(sub_83045520);
PPC_FUNC_IMPL(__imp__sub_83045520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32016
	ctx.r4.s64 = ctx.r11.s64 + -32016;
	// bl 0x824215d0
	ctx.lr = 0x8304553C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1889(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1889, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045558"))) PPC_WEAK_FUNC(sub_83045558);
PPC_FUNC_IMPL(__imp__sub_83045558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32012
	ctx.r4.s64 = ctx.r11.s64 + -32012;
	// bl 0x824215d0
	ctx.lr = 0x83045574;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1646(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1646, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045590"))) PPC_WEAK_FUNC(sub_83045590);
PPC_FUNC_IMPL(__imp__sub_83045590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32008
	ctx.r4.s64 = ctx.r11.s64 + -32008;
	// bl 0x824215d0
	ctx.lr = 0x830455AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-925(r11)
	PPC_STORE_U8(ctx.r11.u32 + -925, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830455C8"))) PPC_WEAK_FUNC(sub_830455C8);
PPC_FUNC_IMPL(__imp__sub_830455C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32004
	ctx.r4.s64 = ctx.r11.s64 + -32004;
	// bl 0x824215d0
	ctx.lr = 0x830455E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,827(r11)
	PPC_STORE_U8(ctx.r11.u32 + 827, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045600"))) PPC_WEAK_FUNC(sub_83045600);
PPC_FUNC_IMPL(__imp__sub_83045600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32000
	ctx.r4.s64 = ctx.r11.s64 + -32000;
	// bl 0x824215d0
	ctx.lr = 0x8304561C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83045638"))) PPC_WEAK_FUNC(sub_83045638);
PPC_FUNC_IMPL(__imp__sub_83045638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31996
	ctx.r4.s64 = ctx.r11.s64 + -31996;
	// bl 0x824215d0
	ctx.lr = 0x83045654;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,724(r11)
	PPC_STORE_U8(ctx.r11.u32 + 724, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045670"))) PPC_WEAK_FUNC(sub_83045670);
PPC_FUNC_IMPL(__imp__sub_83045670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31992
	ctx.r4.s64 = ctx.r11.s64 + -31992;
	// bl 0x824215d0
	ctx.lr = 0x8304568C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,414(r11)
	PPC_STORE_U8(ctx.r11.u32 + 414, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830456A8"))) PPC_WEAK_FUNC(sub_830456A8);
PPC_FUNC_IMPL(__imp__sub_830456A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31988
	ctx.r4.s64 = ctx.r11.s64 + -31988;
	// bl 0x824215d0
	ctx.lr = 0x830456C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1370(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1370, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830456E0"))) PPC_WEAK_FUNC(sub_830456E0);
PPC_FUNC_IMPL(__imp__sub_830456E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31984
	ctx.r4.s64 = ctx.r11.s64 + -31984;
	// bl 0x824215d0
	ctx.lr = 0x830456FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-461(r11)
	PPC_STORE_U8(ctx.r11.u32 + -461, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045718"))) PPC_WEAK_FUNC(sub_83045718);
PPC_FUNC_IMPL(__imp__sub_83045718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31980
	ctx.r4.s64 = ctx.r11.s64 + -31980;
	// bl 0x824215d0
	ctx.lr = 0x83045734;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2312(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2312, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045750"))) PPC_WEAK_FUNC(sub_83045750);
PPC_FUNC_IMPL(__imp__sub_83045750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31976
	ctx.r4.s64 = ctx.r11.s64 + -31976;
	// bl 0x824215d0
	ctx.lr = 0x8304576C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,472(r11)
	PPC_STORE_U8(ctx.r11.u32 + 472, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045788"))) PPC_WEAK_FUNC(sub_83045788);
PPC_FUNC_IMPL(__imp__sub_83045788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31972
	ctx.r4.s64 = ctx.r11.s64 + -31972;
	// bl 0x824215d0
	ctx.lr = 0x830457A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,930(r11)
	PPC_STORE_U8(ctx.r11.u32 + 930, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830457C0"))) PPC_WEAK_FUNC(sub_830457C0);
PPC_FUNC_IMPL(__imp__sub_830457C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31968
	ctx.r4.s64 = ctx.r11.s64 + -31968;
	// bl 0x824215d0
	ctx.lr = 0x830457DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,623(r11)
	PPC_STORE_U8(ctx.r11.u32 + 623, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830457F8"))) PPC_WEAK_FUNC(sub_830457F8);
PPC_FUNC_IMPL(__imp__sub_830457F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31964
	ctx.r4.s64 = ctx.r11.s64 + -31964;
	// bl 0x824215d0
	ctx.lr = 0x83045814;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1907(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1907, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045830"))) PPC_WEAK_FUNC(sub_83045830);
PPC_FUNC_IMPL(__imp__sub_83045830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31960
	ctx.r4.s64 = ctx.r11.s64 + -31960;
	// bl 0x824215d0
	ctx.lr = 0x8304584C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,216(r11)
	PPC_STORE_U8(ctx.r11.u32 + 216, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045868"))) PPC_WEAK_FUNC(sub_83045868);
PPC_FUNC_IMPL(__imp__sub_83045868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31956
	ctx.r4.s64 = ctx.r11.s64 + -31956;
	// bl 0x824215d0
	ctx.lr = 0x83045884;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,727(r11)
	PPC_STORE_U8(ctx.r11.u32 + 727, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830458A0"))) PPC_WEAK_FUNC(sub_830458A0);
PPC_FUNC_IMPL(__imp__sub_830458A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31952
	ctx.r4.s64 = ctx.r11.s64 + -31952;
	// bl 0x824215d0
	ctx.lr = 0x830458BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-101(r11)
	PPC_STORE_U8(ctx.r11.u32 + -101, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830458D8"))) PPC_WEAK_FUNC(sub_830458D8);
PPC_FUNC_IMPL(__imp__sub_830458D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31948
	ctx.r4.s64 = ctx.r11.s64 + -31948;
	// bl 0x824215d0
	ctx.lr = 0x830458F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,725(r11)
	PPC_STORE_U8(ctx.r11.u32 + 725, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045910"))) PPC_WEAK_FUNC(sub_83045910);
PPC_FUNC_IMPL(__imp__sub_83045910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31944
	ctx.r4.s64 = ctx.r11.s64 + -31944;
	// bl 0x824215d0
	ctx.lr = 0x8304592C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2015(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2015, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045948"))) PPC_WEAK_FUNC(sub_83045948);
PPC_FUNC_IMPL(__imp__sub_83045948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31940
	ctx.r4.s64 = ctx.r11.s64 + -31940;
	// bl 0x824215d0
	ctx.lr = 0x83045964;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,746(r11)
	PPC_STORE_U8(ctx.r11.u32 + 746, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045980"))) PPC_WEAK_FUNC(sub_83045980);
PPC_FUNC_IMPL(__imp__sub_83045980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31936
	ctx.r4.s64 = ctx.r11.s64 + -31936;
	// bl 0x824215d0
	ctx.lr = 0x8304599C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-649(r11)
	PPC_STORE_U8(ctx.r11.u32 + -649, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830459B8"))) PPC_WEAK_FUNC(sub_830459B8);
PPC_FUNC_IMPL(__imp__sub_830459B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31932
	ctx.r4.s64 = ctx.r11.s64 + -31932;
	// bl 0x824215d0
	ctx.lr = 0x830459D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3050(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3050, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830459F0"))) PPC_WEAK_FUNC(sub_830459F0);
PPC_FUNC_IMPL(__imp__sub_830459F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31928
	ctx.r4.s64 = ctx.r11.s64 + -31928;
	// bl 0x824215d0
	ctx.lr = 0x83045A0C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2173(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2173, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045A28"))) PPC_WEAK_FUNC(sub_83045A28);
PPC_FUNC_IMPL(__imp__sub_83045A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31924
	ctx.r4.s64 = ctx.r11.s64 + -31924;
	// bl 0x824215d0
	ctx.lr = 0x83045A44;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-422(r11)
	PPC_STORE_U8(ctx.r11.u32 + -422, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045A60"))) PPC_WEAK_FUNC(sub_83045A60);
PPC_FUNC_IMPL(__imp__sub_83045A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31920
	ctx.r4.s64 = ctx.r11.s64 + -31920;
	// bl 0x824215d0
	ctx.lr = 0x83045A7C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-208(r11)
	PPC_STORE_U8(ctx.r11.u32 + -208, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045A98"))) PPC_WEAK_FUNC(sub_83045A98);
PPC_FUNC_IMPL(__imp__sub_83045A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31916
	ctx.r4.s64 = ctx.r11.s64 + -31916;
	// bl 0x824215d0
	ctx.lr = 0x83045AB4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2039(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2039, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045AD0"))) PPC_WEAK_FUNC(sub_83045AD0);
PPC_FUNC_IMPL(__imp__sub_83045AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31912
	ctx.r4.s64 = ctx.r11.s64 + -31912;
	// bl 0x824215d0
	ctx.lr = 0x83045AEC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2719(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2719, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045B08"))) PPC_WEAK_FUNC(sub_83045B08);
PPC_FUNC_IMPL(__imp__sub_83045B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31908
	ctx.r4.s64 = ctx.r11.s64 + -31908;
	// bl 0x824215d0
	ctx.lr = 0x83045B24;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83045B40"))) PPC_WEAK_FUNC(sub_83045B40);
PPC_FUNC_IMPL(__imp__sub_83045B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31904
	ctx.r4.s64 = ctx.r11.s64 + -31904;
	// bl 0x824215d0
	ctx.lr = 0x83045B5C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-837(r11)
	PPC_STORE_U8(ctx.r11.u32 + -837, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045B78"))) PPC_WEAK_FUNC(sub_83045B78);
PPC_FUNC_IMPL(__imp__sub_83045B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31900
	ctx.r4.s64 = ctx.r11.s64 + -31900;
	// bl 0x824215d0
	ctx.lr = 0x83045B94;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,608(r11)
	PPC_STORE_U8(ctx.r11.u32 + 608, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045BB0"))) PPC_WEAK_FUNC(sub_83045BB0);
PPC_FUNC_IMPL(__imp__sub_83045BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31896
	ctx.r4.s64 = ctx.r11.s64 + -31896;
	// bl 0x824215d0
	ctx.lr = 0x83045BCC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,909(r11)
	PPC_STORE_U8(ctx.r11.u32 + 909, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045BE8"))) PPC_WEAK_FUNC(sub_83045BE8);
PPC_FUNC_IMPL(__imp__sub_83045BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31892
	ctx.r4.s64 = ctx.r11.s64 + -31892;
	// bl 0x824215d0
	ctx.lr = 0x83045C04;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1856(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1856, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045C20"))) PPC_WEAK_FUNC(sub_83045C20);
PPC_FUNC_IMPL(__imp__sub_83045C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31888
	ctx.r4.s64 = ctx.r11.s64 + -31888;
	// bl 0x824215d0
	ctx.lr = 0x83045C3C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1515(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1515, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045C58"))) PPC_WEAK_FUNC(sub_83045C58);
PPC_FUNC_IMPL(__imp__sub_83045C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31884
	ctx.r4.s64 = ctx.r11.s64 + -31884;
	// bl 0x824215d0
	ctx.lr = 0x83045C74;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1223(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1223, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045C90"))) PPC_WEAK_FUNC(sub_83045C90);
PPC_FUNC_IMPL(__imp__sub_83045C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31880
	ctx.r4.s64 = ctx.r11.s64 + -31880;
	// bl 0x824215d0
	ctx.lr = 0x83045CAC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83045CC8"))) PPC_WEAK_FUNC(sub_83045CC8);
PPC_FUNC_IMPL(__imp__sub_83045CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31876
	ctx.r4.s64 = ctx.r11.s64 + -31876;
	// bl 0x824215d0
	ctx.lr = 0x83045CE4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2575(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2575, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045D00"))) PPC_WEAK_FUNC(sub_83045D00);
PPC_FUNC_IMPL(__imp__sub_83045D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31872
	ctx.r4.s64 = ctx.r11.s64 + -31872;
	// bl 0x824215d0
	ctx.lr = 0x83045D1C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3120(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3120, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045D38"))) PPC_WEAK_FUNC(sub_83045D38);
PPC_FUNC_IMPL(__imp__sub_83045D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31868
	ctx.r4.s64 = ctx.r11.s64 + -31868;
	// bl 0x824215d0
	ctx.lr = 0x83045D54;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045D70"))) PPC_WEAK_FUNC(sub_83045D70);
PPC_FUNC_IMPL(__imp__sub_83045D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31864
	ctx.r4.s64 = ctx.r11.s64 + -31864;
	// bl 0x824215d0
	ctx.lr = 0x83045D8C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-368(r11)
	PPC_STORE_U8(ctx.r11.u32 + -368, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045DA8"))) PPC_WEAK_FUNC(sub_83045DA8);
PPC_FUNC_IMPL(__imp__sub_83045DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31860
	ctx.r4.s64 = ctx.r11.s64 + -31860;
	// bl 0x824215d0
	ctx.lr = 0x83045DC4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1940(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1940, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045DE0"))) PPC_WEAK_FUNC(sub_83045DE0);
PPC_FUNC_IMPL(__imp__sub_83045DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31856
	ctx.r4.s64 = ctx.r11.s64 + -31856;
	// bl 0x824215d0
	ctx.lr = 0x83045DFC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83045E18"))) PPC_WEAK_FUNC(sub_83045E18);
PPC_FUNC_IMPL(__imp__sub_83045E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31852
	ctx.r4.s64 = ctx.r11.s64 + -31852;
	// bl 0x824215d0
	ctx.lr = 0x83045E34;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1611(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1611, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045E50"))) PPC_WEAK_FUNC(sub_83045E50);
PPC_FUNC_IMPL(__imp__sub_83045E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31848
	ctx.r4.s64 = ctx.r11.s64 + -31848;
	// bl 0x824215d0
	ctx.lr = 0x83045E6C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,473(r11)
	PPC_STORE_U8(ctx.r11.u32 + 473, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045E88"))) PPC_WEAK_FUNC(sub_83045E88);
PPC_FUNC_IMPL(__imp__sub_83045E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31844
	ctx.r4.s64 = ctx.r11.s64 + -31844;
	// bl 0x824215d0
	ctx.lr = 0x83045EA4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-502(r11)
	PPC_STORE_U8(ctx.r11.u32 + -502, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045EC0"))) PPC_WEAK_FUNC(sub_83045EC0);
PPC_FUNC_IMPL(__imp__sub_83045EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31840
	ctx.r4.s64 = ctx.r11.s64 + -31840;
	// bl 0x824215d0
	ctx.lr = 0x83045EDC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1168(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1168, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045EF8"))) PPC_WEAK_FUNC(sub_83045EF8);
PPC_FUNC_IMPL(__imp__sub_83045EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31836
	ctx.r4.s64 = ctx.r11.s64 + -31836;
	// bl 0x824215d0
	ctx.lr = 0x83045F14;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2185(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2185, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045F30"))) PPC_WEAK_FUNC(sub_83045F30);
PPC_FUNC_IMPL(__imp__sub_83045F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31832
	ctx.r4.s64 = ctx.r11.s64 + -31832;
	// bl 0x824215d0
	ctx.lr = 0x83045F4C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1420(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1420, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045F68"))) PPC_WEAK_FUNC(sub_83045F68);
PPC_FUNC_IMPL(__imp__sub_83045F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31828
	ctx.r4.s64 = ctx.r11.s64 + -31828;
	// bl 0x824215d0
	ctx.lr = 0x83045F84;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83045FA0"))) PPC_WEAK_FUNC(sub_83045FA0);
PPC_FUNC_IMPL(__imp__sub_83045FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31824
	ctx.r4.s64 = ctx.r11.s64 + -31824;
	// bl 0x824215d0
	ctx.lr = 0x83045FBC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1669(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1669, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83045FD8"))) PPC_WEAK_FUNC(sub_83045FD8);
PPC_FUNC_IMPL(__imp__sub_83045FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31820
	ctx.r4.s64 = ctx.r11.s64 + -31820;
	// bl 0x824215d0
	ctx.lr = 0x83045FF4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2024(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2024, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046010"))) PPC_WEAK_FUNC(sub_83046010);
PPC_FUNC_IMPL(__imp__sub_83046010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31816
	ctx.r4.s64 = ctx.r11.s64 + -31816;
	// bl 0x824215d0
	ctx.lr = 0x8304602C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1428(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1428, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046048"))) PPC_WEAK_FUNC(sub_83046048);
PPC_FUNC_IMPL(__imp__sub_83046048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31812
	ctx.r4.s64 = ctx.r11.s64 + -31812;
	// bl 0x824215d0
	ctx.lr = 0x83046064;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,441(r11)
	PPC_STORE_U8(ctx.r11.u32 + 441, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046080"))) PPC_WEAK_FUNC(sub_83046080);
PPC_FUNC_IMPL(__imp__sub_83046080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31808
	ctx.r4.s64 = ctx.r11.s64 + -31808;
	// bl 0x824215d0
	ctx.lr = 0x8304609C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830460B8"))) PPC_WEAK_FUNC(sub_830460B8);
PPC_FUNC_IMPL(__imp__sub_830460B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31804
	ctx.r4.s64 = ctx.r11.s64 + -31804;
	// bl 0x824215d0
	ctx.lr = 0x830460D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-508(r11)
	PPC_STORE_U8(ctx.r11.u32 + -508, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830460F0"))) PPC_WEAK_FUNC(sub_830460F0);
PPC_FUNC_IMPL(__imp__sub_830460F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31800
	ctx.r4.s64 = ctx.r11.s64 + -31800;
	// bl 0x824215d0
	ctx.lr = 0x8304610C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2817(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2817, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046128"))) PPC_WEAK_FUNC(sub_83046128);
PPC_FUNC_IMPL(__imp__sub_83046128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31796
	ctx.r4.s64 = ctx.r11.s64 + -31796;
	// bl 0x824215d0
	ctx.lr = 0x83046144;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1852(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1852, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046160"))) PPC_WEAK_FUNC(sub_83046160);
PPC_FUNC_IMPL(__imp__sub_83046160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31792
	ctx.r4.s64 = ctx.r11.s64 + -31792;
	// bl 0x824215d0
	ctx.lr = 0x8304617C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-751(r11)
	PPC_STORE_U8(ctx.r11.u32 + -751, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046198"))) PPC_WEAK_FUNC(sub_83046198);
PPC_FUNC_IMPL(__imp__sub_83046198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31788
	ctx.r4.s64 = ctx.r11.s64 + -31788;
	// bl 0x824215d0
	ctx.lr = 0x830461B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,82(r11)
	PPC_STORE_U8(ctx.r11.u32 + 82, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830461D0"))) PPC_WEAK_FUNC(sub_830461D0);
PPC_FUNC_IMPL(__imp__sub_830461D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31784
	ctx.r4.s64 = ctx.r11.s64 + -31784;
	// bl 0x824215d0
	ctx.lr = 0x830461EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,770(r11)
	PPC_STORE_U8(ctx.r11.u32 + 770, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046208"))) PPC_WEAK_FUNC(sub_83046208);
PPC_FUNC_IMPL(__imp__sub_83046208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31780
	ctx.r4.s64 = ctx.r11.s64 + -31780;
	// bl 0x824215d0
	ctx.lr = 0x83046224;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3267(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3267, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046240"))) PPC_WEAK_FUNC(sub_83046240);
PPC_FUNC_IMPL(__imp__sub_83046240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31776
	ctx.r4.s64 = ctx.r11.s64 + -31776;
	// bl 0x824215d0
	ctx.lr = 0x8304625C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,3051(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3051, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046278"))) PPC_WEAK_FUNC(sub_83046278);
PPC_FUNC_IMPL(__imp__sub_83046278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31772
	ctx.r4.s64 = ctx.r11.s64 + -31772;
	// bl 0x824215d0
	ctx.lr = 0x83046294;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1221(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1221, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830462B0"))) PPC_WEAK_FUNC(sub_830462B0);
PPC_FUNC_IMPL(__imp__sub_830462B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31768
	ctx.r4.s64 = ctx.r11.s64 + -31768;
	// bl 0x824215d0
	ctx.lr = 0x830462CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1923(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1923, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830462E8"))) PPC_WEAK_FUNC(sub_830462E8);
PPC_FUNC_IMPL(__imp__sub_830462E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31764
	ctx.r4.s64 = ctx.r11.s64 + -31764;
	// bl 0x824215d0
	ctx.lr = 0x83046304;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,425(r11)
	PPC_STORE_U8(ctx.r11.u32 + 425, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046320"))) PPC_WEAK_FUNC(sub_83046320);
PPC_FUNC_IMPL(__imp__sub_83046320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31760
	ctx.r4.s64 = ctx.r11.s64 + -31760;
	// bl 0x824215d0
	ctx.lr = 0x8304633C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83046358"))) PPC_WEAK_FUNC(sub_83046358);
PPC_FUNC_IMPL(__imp__sub_83046358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31756
	ctx.r4.s64 = ctx.r11.s64 + -31756;
	// bl 0x824215d0
	ctx.lr = 0x83046374;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-378(r11)
	PPC_STORE_U8(ctx.r11.u32 + -378, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046390"))) PPC_WEAK_FUNC(sub_83046390);
PPC_FUNC_IMPL(__imp__sub_83046390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31752
	ctx.r4.s64 = ctx.r11.s64 + -31752;
	// bl 0x824215d0
	ctx.lr = 0x830463AC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1463(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1463, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830463C8"))) PPC_WEAK_FUNC(sub_830463C8);
PPC_FUNC_IMPL(__imp__sub_830463C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31748
	ctx.r4.s64 = ctx.r11.s64 + -31748;
	// bl 0x824215d0
	ctx.lr = 0x830463E4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83046400"))) PPC_WEAK_FUNC(sub_83046400);
PPC_FUNC_IMPL(__imp__sub_83046400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31744
	ctx.r4.s64 = ctx.r11.s64 + -31744;
	// bl 0x824215d0
	ctx.lr = 0x8304641C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,929(r11)
	PPC_STORE_U8(ctx.r11.u32 + 929, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046438"))) PPC_WEAK_FUNC(sub_83046438);
PPC_FUNC_IMPL(__imp__sub_83046438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31740
	ctx.r4.s64 = ctx.r11.s64 + -31740;
	// bl 0x824215d0
	ctx.lr = 0x83046454;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1396(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1396, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046470"))) PPC_WEAK_FUNC(sub_83046470);
PPC_FUNC_IMPL(__imp__sub_83046470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31736
	ctx.r4.s64 = ctx.r11.s64 + -31736;
	// bl 0x824215d0
	ctx.lr = 0x8304648C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2522(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2522, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830464A8"))) PPC_WEAK_FUNC(sub_830464A8);
PPC_FUNC_IMPL(__imp__sub_830464A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31732
	ctx.r4.s64 = ctx.r11.s64 + -31732;
	// bl 0x824215d0
	ctx.lr = 0x830464C4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1390(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1390, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830464E0"))) PPC_WEAK_FUNC(sub_830464E0);
PPC_FUNC_IMPL(__imp__sub_830464E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31728
	ctx.r4.s64 = ctx.r11.s64 + -31728;
	// bl 0x824215d0
	ctx.lr = 0x830464FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83046518"))) PPC_WEAK_FUNC(sub_83046518);
PPC_FUNC_IMPL(__imp__sub_83046518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31724
	ctx.r4.s64 = ctx.r11.s64 + -31724;
	// bl 0x824215d0
	ctx.lr = 0x83046534;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83046550"))) PPC_WEAK_FUNC(sub_83046550);
PPC_FUNC_IMPL(__imp__sub_83046550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31720
	ctx.r4.s64 = ctx.r11.s64 + -31720;
	// bl 0x824215d0
	ctx.lr = 0x8304656C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83046588"))) PPC_WEAK_FUNC(sub_83046588);
PPC_FUNC_IMPL(__imp__sub_83046588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31716
	ctx.r4.s64 = ctx.r11.s64 + -31716;
	// bl 0x824215d0
	ctx.lr = 0x830465A4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-104(r11)
	PPC_STORE_U8(ctx.r11.u32 + -104, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830465C0"))) PPC_WEAK_FUNC(sub_830465C0);
PPC_FUNC_IMPL(__imp__sub_830465C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31712
	ctx.r4.s64 = ctx.r11.s64 + -31712;
	// bl 0x824215d0
	ctx.lr = 0x830465DC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-894(r11)
	PPC_STORE_U8(ctx.r11.u32 + -894, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830465F8"))) PPC_WEAK_FUNC(sub_830465F8);
PPC_FUNC_IMPL(__imp__sub_830465F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31708
	ctx.r4.s64 = ctx.r11.s64 + -31708;
	// bl 0x824215d0
	ctx.lr = 0x83046614;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83046630"))) PPC_WEAK_FUNC(sub_83046630);
PPC_FUNC_IMPL(__imp__sub_83046630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31704
	ctx.r4.s64 = ctx.r11.s64 + -31704;
	// bl 0x824215d0
	ctx.lr = 0x8304664C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2174(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2174, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046668"))) PPC_WEAK_FUNC(sub_83046668);
PPC_FUNC_IMPL(__imp__sub_83046668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31700
	ctx.r4.s64 = ctx.r11.s64 + -31700;
	// bl 0x824215d0
	ctx.lr = 0x83046684;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-15(r11)
	PPC_STORE_U8(ctx.r11.u32 + -15, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830466A0"))) PPC_WEAK_FUNC(sub_830466A0);
PPC_FUNC_IMPL(__imp__sub_830466A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31696
	ctx.r4.s64 = ctx.r11.s64 + -31696;
	// bl 0x824215d0
	ctx.lr = 0x830466BC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_830466D8"))) PPC_WEAK_FUNC(sub_830466D8);
PPC_FUNC_IMPL(__imp__sub_830466D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31692
	ctx.r4.s64 = ctx.r11.s64 + -31692;
	// bl 0x824215d0
	ctx.lr = 0x830466F4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,222(r11)
	PPC_STORE_U8(ctx.r11.u32 + 222, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046710"))) PPC_WEAK_FUNC(sub_83046710);
PPC_FUNC_IMPL(__imp__sub_83046710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31688
	ctx.r4.s64 = ctx.r11.s64 + -31688;
	// bl 0x824215d0
	ctx.lr = 0x8304672C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,747(r11)
	PPC_STORE_U8(ctx.r11.u32 + 747, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046748"))) PPC_WEAK_FUNC(sub_83046748);
PPC_FUNC_IMPL(__imp__sub_83046748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31684
	ctx.r4.s64 = ctx.r11.s64 + -31684;
	// bl 0x824215d0
	ctx.lr = 0x83046764;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83046780"))) PPC_WEAK_FUNC(sub_83046780);
PPC_FUNC_IMPL(__imp__sub_83046780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31680
	ctx.r4.s64 = ctx.r11.s64 + -31680;
	// bl 0x824215d0
	ctx.lr = 0x8304679C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1539(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1539, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830467B8"))) PPC_WEAK_FUNC(sub_830467B8);
PPC_FUNC_IMPL(__imp__sub_830467B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31676
	ctx.r4.s64 = ctx.r11.s64 + -31676;
	// bl 0x824215d0
	ctx.lr = 0x830467D4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-567(r11)
	PPC_STORE_U8(ctx.r11.u32 + -567, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830467F0"))) PPC_WEAK_FUNC(sub_830467F0);
PPC_FUNC_IMPL(__imp__sub_830467F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31672
	ctx.r4.s64 = ctx.r11.s64 + -31672;
	// bl 0x824215d0
	ctx.lr = 0x8304680C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1501(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1501, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046828"))) PPC_WEAK_FUNC(sub_83046828);
PPC_FUNC_IMPL(__imp__sub_83046828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31668
	ctx.r4.s64 = ctx.r11.s64 + -31668;
	// bl 0x824215d0
	ctx.lr = 0x83046844;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83046860"))) PPC_WEAK_FUNC(sub_83046860);
PPC_FUNC_IMPL(__imp__sub_83046860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31664
	ctx.r4.s64 = ctx.r11.s64 + -31664;
	// bl 0x824215d0
	ctx.lr = 0x8304687C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2112(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2112, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046898"))) PPC_WEAK_FUNC(sub_83046898);
PPC_FUNC_IMPL(__imp__sub_83046898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31660
	ctx.r4.s64 = ctx.r11.s64 + -31660;
	// bl 0x824215d0
	ctx.lr = 0x830468B4;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,1862(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1862, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830468D0"))) PPC_WEAK_FUNC(sub_830468D0);
PPC_FUNC_IMPL(__imp__sub_830468D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31656
	ctx.r4.s64 = ctx.r11.s64 + -31656;
	// bl 0x824215d0
	ctx.lr = 0x830468EC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,718(r11)
	PPC_STORE_U8(ctx.r11.u32 + 718, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046908"))) PPC_WEAK_FUNC(sub_83046908);
PPC_FUNC_IMPL(__imp__sub_83046908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31652
	ctx.r4.s64 = ctx.r11.s64 + -31652;
	// bl 0x824215d0
	ctx.lr = 0x83046924;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2965(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2965, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046940"))) PPC_WEAK_FUNC(sub_83046940);
PPC_FUNC_IMPL(__imp__sub_83046940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31648
	ctx.r4.s64 = ctx.r11.s64 + -31648;
	// bl 0x824215d0
	ctx.lr = 0x8304695C;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,2499(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2499, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046978"))) PPC_WEAK_FUNC(sub_83046978);
PPC_FUNC_IMPL(__imp__sub_83046978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31644
	ctx.r4.s64 = ctx.r11.s64 + -31644;
	// bl 0x824215d0
	ctx.lr = 0x83046994;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-417(r11)
	PPC_STORE_U8(ctx.r11.u32 + -417, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830469B0"))) PPC_WEAK_FUNC(sub_830469B0);
PPC_FUNC_IMPL(__imp__sub_830469B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31640
	ctx.r4.s64 = ctx.r11.s64 + -31640;
	// bl 0x824215d0
	ctx.lr = 0x830469CC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,-1133(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1133, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830469E8"))) PPC_WEAK_FUNC(sub_830469E8);
PPC_FUNC_IMPL(__imp__sub_830469E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-31636
	ctx.r4.s64 = ctx.r11.s64 + -31636;
	// bl 0x824215d0
	ctx.lr = 0x83046A04;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,719(r11)
	PPC_STORE_U8(ctx.r11.u32 + 719, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83046A20"))) PPC_WEAK_FUNC(sub_83046A20);
PPC_FUNC_IMPL(__imp__sub_83046A20) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a0
	ctx.lr = 0x83046A28;
	__savegprlr_18(ctx, base);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r21,-32207
	ctx.r21.s64 = -2110717952;
	// addi r10,r10,-9096
	ctx.r10.s64 = ctx.r10.s64 + -9096;
	// lis r22,-32207
	ctx.r22.s64 = -2110717952;
	// lis r23,-32207
	ctx.r23.s64 = -2110717952;
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
	// lis r29,-32210
	ctx.r29.s64 = -2110914560;
	// lis r30,-32210
	ctx.r30.s64 = -2110914560;
	// lis r31,-32208
	ctx.r31.s64 = -2110783488;
	// lis r3,-32210
	ctx.r3.s64 = -2110914560;
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r21,r21,-19728
	ctx.r21.s64 = ctx.r21.s64 + -19728;
	// addi r22,r22,27192
	ctx.r22.s64 = ctx.r22.s64 + 27192;
	// addi r23,r23,26856
	ctx.r23.s64 = ctx.r23.s64 + 26856;
	// addi r24,r24,5872
	ctx.r24.s64 = ctx.r24.s64 + 5872;
	// addi r25,r25,-3056
	ctx.r25.s64 = ctx.r25.s64 + -3056;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r26,r26,-19840
	ctx.r26.s64 = ctx.r26.s64 + -19840;
	// stw r21,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r21.u32);
	// addi r27,r27,-3184
	ctx.r27.s64 = ctx.r27.s64 + -3184;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r28,r28,-7696
	ctx.r28.s64 = ctx.r28.s64 + -7696;
	// stw r22,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r22.u32);
	// addi r29,r29,27144
	ctx.r29.s64 = ctx.r29.s64 + 27144;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r30,r30,26888
	ctx.r30.s64 = ctx.r30.s64 + 26888;
	// stw r23,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r23.u32);
	// addi r31,r31,24856
	ctx.r31.s64 = ctx.r31.s64 + 24856;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r3,r3,26744
	ctx.r3.s64 = ctx.r3.s64 + 26744;
	// stw r24,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r24.u32);
	// addi r4,r4,26600
	ctx.r4.s64 = ctx.r4.s64 + 26600;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r5,r5,26456
	ctx.r5.s64 = ctx.r5.s64 + 26456;
	// stw r25,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r25.u32);
	// addi r6,r6,26288
	ctx.r6.s64 = ctx.r6.s64 + 26288;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// addi r7,r7,26144
	ctx.r7.s64 = ctx.r7.s64 + 26144;
	// stw r26,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r26.u32);
	// addi r8,r8,26000
	ctx.r8.s64 = ctx.r8.s64 + 26000;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// addi r9,r9,25856
	ctx.r9.s64 = ctx.r9.s64 + 25856;
	// stw r27,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r27.u32);
	// addi r11,r11,25696
	ctx.r11.s64 = ctx.r11.s64 + 25696;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lis r18,-32210
	ctx.r18.s64 = -2110914560;
	// addi r11,r11,-22672
	ctx.r11.s64 = ctx.r11.s64 + -22672;
	// lis r19,-32210
	ctx.r19.s64 = -2110914560;
	// lis r20,-32210
	ctx.r20.s64 = -2110914560;
	// lis r21,-32210
	ctx.r21.s64 = -2110914560;
	// lis r22,-32210
	ctx.r22.s64 = -2110914560;
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// lis r23,-32210
	ctx.r23.s64 = -2110914560;
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// addi r18,r18,25552
	ctx.r18.s64 = ctx.r18.s64 + 25552;
	// addi r19,r19,25408
	ctx.r19.s64 = ctx.r19.s64 + 25408;
	// addi r20,r20,25248
	ctx.r20.s64 = ctx.r20.s64 + 25248;
	// addi r21,r21,25008
	ctx.r21.s64 = ctx.r21.s64 + 25008;
	// addi r22,r22,24768
	ctx.r22.s64 = ctx.r22.s64 + 24768;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// addi r23,r23,24624
	ctx.r23.s64 = ctx.r23.s64 + 24624;
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lis r24,-32210
	ctx.r24.s64 = -2110914560;
	// lis r25,-32210
	ctx.r25.s64 = -2110914560;
	// lis r26,-32210
	ctx.r26.s64 = -2110914560;
	// lis r27,-32210
	ctx.r27.s64 = -2110914560;
	// lis r28,-32210
	ctx.r28.s64 = -2110914560;
	// std r9,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r9.u64);
	// lis r29,-32210
	ctx.r29.s64 = -2110914560;
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lis r30,-32210
	ctx.r30.s64 = -2110914560;
	// lis r31,-32210
	ctx.r31.s64 = -2110914560;
	// lis r3,-32210
	ctx.r3.s64 = -2110914560;
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
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
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r9,r9,22472
	ctx.r9.s64 = ctx.r9.s64 + 22472;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r24,r24,24480
	ctx.r24.s64 = ctx.r24.s64 + 24480;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r25,r25,24336
	ctx.r25.s64 = ctx.r25.s64 + 24336;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r26,r26,24192
	ctx.r26.s64 = ctx.r26.s64 + 24192;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r27,r27,23944
	ctx.r27.s64 = ctx.r27.s64 + 23944;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// addi r28,r28,23768
	ctx.r28.s64 = ctx.r28.s64 + 23768;
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// addi r29,r29,23624
	ctx.r29.s64 = ctx.r29.s64 + 23624;
	// stw r24,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r24.u32);
	// addi r30,r30,23480
	ctx.r30.s64 = ctx.r30.s64 + 23480;
	// stw r25,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r25.u32);
	// addi r31,r31,23336
	ctx.r31.s64 = ctx.r31.s64 + 23336;
	// stw r26,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r26.u32);
	// addi r3,r3,23192
	ctx.r3.s64 = ctx.r3.s64 + 23192;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// addi r4,r4,23048
	ctx.r4.s64 = ctx.r4.s64 + 23048;
	// std r9,244(r11)
	PPC_STORE_U64(ctx.r11.u32 + 244, ctx.r9.u64);
	// addi r5,r5,22904
	ctx.r5.s64 = ctx.r5.s64 + 22904;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// addi r6,r6,22760
	ctx.r6.s64 = ctx.r6.s64 + 22760;
	// stw r28,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r28.u32);
	// addi r7,r7,22616
	ctx.r7.s64 = ctx.r7.s64 + 22616;
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
	// addi r9,r8,22328
	ctx.r9.s64 = ctx.r8.s64 + 22328;
	// lis r19,-32210
	ctx.r19.s64 = -2110914560;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r20,-32210
	ctx.r20.s64 = -2110914560;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// lis r21,-32210
	ctx.r21.s64 = -2110914560;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lis r22,-32210
	ctx.r22.s64 = -2110914560;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r9,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// lis r23,-32210
	ctx.r23.s64 = -2110914560;
	// lis r24,-32210
	ctx.r24.s64 = -2110914560;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r25,-32210
	ctx.r25.s64 = -2110914560;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lis r26,-32210
	ctx.r26.s64 = -2110914560;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// lis r27,-32210
	ctx.r27.s64 = -2110914560;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// lis r28,-32210
	ctx.r28.s64 = -2110914560;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r29,-32210
	ctx.r29.s64 = -2110914560;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// lis r30,-32210
	ctx.r30.s64 = -2110914560;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// lis r31,-32210
	ctx.r31.s64 = -2110914560;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// lis r3,-32210
	ctx.r3.s64 = -2110914560;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r19,r19,22184
	ctx.r19.s64 = ctx.r19.s64 + 22184;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r20,r20,22040
	ctx.r20.s64 = ctx.r20.s64 + 22040;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r21,r21,21896
	ctx.r21.s64 = ctx.r21.s64 + 21896;
	// addi r22,r22,21752
	ctx.r22.s64 = ctx.r22.s64 + 21752;
	// addi r23,r23,21608
	ctx.r23.s64 = ctx.r23.s64 + 21608;
	// addi r24,r24,21464
	ctx.r24.s64 = ctx.r24.s64 + 21464;
	// stw r19,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r19.u32);
	// addi r25,r25,21320
	ctx.r25.s64 = ctx.r25.s64 + 21320;
	// stw r20,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r20.u32);
	// addi r26,r26,21176
	ctx.r26.s64 = ctx.r26.s64 + 21176;
	// stw r21,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r21.u32);
	// addi r27,r27,21032
	ctx.r27.s64 = ctx.r27.s64 + 21032;
	// stw r22,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r22.u32);
	// addi r28,r28,20904
	ctx.r28.s64 = ctx.r28.s64 + 20904;
	// stw r23,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r23.u32);
	// addi r29,r29,20760
	ctx.r29.s64 = ctx.r29.s64 + 20760;
	// stw r24,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r24.u32);
	// addi r30,r30,20616
	ctx.r30.s64 = ctx.r30.s64 + 20616;
	// stw r25,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r25.u32);
	// addi r31,r31,20456
	ctx.r31.s64 = ctx.r31.s64 + 20456;
	// stw r26,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r26.u32);
	// addi r3,r3,20312
	ctx.r3.s64 = ctx.r3.s64 + 20312;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// addi r4,r4,20168
	ctx.r4.s64 = ctx.r4.s64 + 20168;
	// stw r28,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r28.u32);
	// addi r5,r5,20024
	ctx.r5.s64 = ctx.r5.s64 + 20024;
	// stw r29,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r29.u32);
	// addi r6,r6,19880
	ctx.r6.s64 = ctx.r6.s64 + 19880;
	// stw r30,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r30.u32);
	// addi r7,r7,19736
	ctx.r7.s64 = ctx.r7.s64 + 19736;
	// stw r31,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r31.u32);
	// addi r9,r9,19488
	ctx.r9.s64 = ctx.r9.s64 + 19488;
	// stw r3,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
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
	// lis r19,-32210
	ctx.r19.s64 = -2110914560;
	// lis r20,-32210
	ctx.r20.s64 = -2110914560;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r21,-32210
	ctx.r21.s64 = -2110914560;
	// lis r22,-32210
	ctx.r22.s64 = -2110914560;
	// lis r23,-32210
	ctx.r23.s64 = -2110914560;
	// std r9,484(r11)
	PPC_STORE_U64(ctx.r11.u32 + 484, ctx.r9.u64);
	// lis r24,-32210
	ctx.r24.s64 = -2110914560;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// addi r19,r19,19200
	ctx.r19.s64 = ctx.r19.s64 + 19200;
	// addi r20,r20,19024
	ctx.r20.s64 = ctx.r20.s64 + 19024;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r21,r21,18864
	ctx.r21.s64 = ctx.r21.s64 + 18864;
	// addi r22,r22,18720
	ctx.r22.s64 = ctx.r22.s64 + 18720;
	// addi r23,r23,18544
	ctx.r23.s64 = ctx.r23.s64 + 18544;
	// std r9,496(r11)
	PPC_STORE_U64(ctx.r11.u32 + 496, ctx.r9.u64);
	// addi r24,r24,18368
	ctx.r24.s64 = ctx.r24.s64 + 18368;
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// lis r25,-32210
	ctx.r25.s64 = -2110914560;
	// lis r26,-32210
	ctx.r26.s64 = -2110914560;
	// stw r19,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r19.u32);
	// lis r27,-32210
	ctx.r27.s64 = -2110914560;
	// stw r20,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r20.u32);
	// lis r28,-32210
	ctx.r28.s64 = -2110914560;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lis r29,-32210
	ctx.r29.s64 = -2110914560;
	// std r9,508(r11)
	PPC_STORE_U64(ctx.r11.u32 + 508, ctx.r9.u64);
	// lis r30,-32210
	ctx.r30.s64 = -2110914560;
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// lis r31,-32210
	ctx.r31.s64 = -2110914560;
	// lis r3,-32210
	ctx.r3.s64 = -2110914560;
	// stw r21,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r21.u32);
	// lis r4,-32208
	ctx.r4.s64 = -2110783488;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
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
	// addi r9,r8,19344
	ctx.r9.s64 = ctx.r8.s64 + 19344;
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// stw r9,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// addi r9,r9,-3720
	ctx.r9.s64 = ctx.r9.s64 + -3720;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r25,r25,18224
	ctx.r25.s64 = ctx.r25.s64 + 18224;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r26,r26,18080
	ctx.r26.s64 = ctx.r26.s64 + 18080;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r27,r27,17936
	ctx.r27.s64 = ctx.r27.s64 + 17936;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// addi r28,r28,17792
	ctx.r28.s64 = ctx.r28.s64 + 17792;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r9,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
	// addi r29,r29,17648
	ctx.r29.s64 = ctx.r29.s64 + 17648;
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// addi r30,r30,17472
	ctx.r30.s64 = ctx.r30.s64 + 17472;
	// stw r25,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r25.u32);
	// addi r31,r31,17296
	ctx.r31.s64 = ctx.r31.s64 + 17296;
	// stw r26,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r26.u32);
	// addi r3,r3,17128
	ctx.r3.s64 = ctx.r3.s64 + 17128;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// addi r4,r4,-3344
	ctx.r4.s64 = ctx.r4.s64 + -3344;
	// stw r28,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r28.u32);
	// addi r5,r5,16952
	ctx.r5.s64 = ctx.r5.s64 + 16952;
	// std r9,724(r11)
	PPC_STORE_U64(ctx.r11.u32 + 724, ctx.r9.u64);
	// addi r6,r6,16784
	ctx.r6.s64 = ctx.r6.s64 + 16784;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// addi r7,r7,-3456
	ctx.r7.s64 = ctx.r7.s64 + -3456;
	// stw r29,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r29.u32);
	// addi r8,r8,-3592
	ctx.r8.s64 = ctx.r8.s64 + -3592;
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
	// lis r19,-32210
	ctx.r19.s64 = -2110914560;
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
	// lis r24,-32208
	ctx.r24.s64 = -2110783488;
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
	// lis r28,-32208
	ctx.r28.s64 = -2110783488;
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
	// lis r5,-32207
	ctx.r5.s64 = -2110717952;
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
	// addi r19,r19,16640
	ctx.r19.s64 = ctx.r19.s64 + 16640;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r20,r20,-3888
	ctx.r20.s64 = ctx.r20.s64 + -3888;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r21,r21,16496
	ctx.r21.s64 = ctx.r21.s64 + 16496;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r22,r22,16352
	ctx.r22.s64 = ctx.r22.s64 + 16352;
	// addi r23,r23,-4032
	ctx.r23.s64 = ctx.r23.s64 + -4032;
	// addi r24,r24,24512
	ctx.r24.s64 = ctx.r24.s64 + 24512;
	// stw r19,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r19.u32);
	// addi r25,r25,-4208
	ctx.r25.s64 = ctx.r25.s64 + -4208;
	// stw r20,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r20.u32);
	// addi r26,r26,-20096
	ctx.r26.s64 = ctx.r26.s64 + -20096;
	// stw r21,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r21.u32);
	// addi r27,r27,-28936
	ctx.r27.s64 = ctx.r27.s64 + -28936;
	// stw r22,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r22.u32);
	// addi r28,r28,24352
	ctx.r28.s64 = ctx.r28.s64 + 24352;
	// stw r23,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r23.u32);
	// addi r29,r29,-1304
	ctx.r29.s64 = ctx.r29.s64 + -1304;
	// stw r24,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r24.u32);
	// addi r30,r30,1232
	ctx.r30.s64 = ctx.r30.s64 + 1232;
	// stw r25,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r25.u32);
	// addi r31,r31,-1600
	ctx.r31.s64 = ctx.r31.s64 + -1600;
	// stw r26,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r26.u32);
	// addi r3,r3,-20224
	ctx.r3.s64 = ctx.r3.s64 + -20224;
	// stw r27,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r27.u32);
	// addi r4,r4,16176
	ctx.r4.s64 = ctx.r4.s64 + 16176;
	// stw r28,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r28.u32);
	// addi r5,r5,26560
	ctx.r5.s64 = ctx.r5.s64 + 26560;
	// stw r29,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r29.u32);
	// addi r6,r6,15992
	ctx.r6.s64 = ctx.r6.s64 + 15992;
	// stw r30,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r30.u32);
	// addi r7,r7,15808
	ctx.r7.s64 = ctx.r7.s64 + 15808;
	// stw r31,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r31.u32);
	// addi r8,r8,-4384
	ctx.r8.s64 = ctx.r8.s64 + -4384;
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
	// addi r9,r9,-4592
	ctx.r9.s64 = ctx.r9.s64 + -4592;
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
	// lis r5,-32208
	ctx.r5.s64 = -2110783488;
	// lis r6,-32206
	ctx.r6.s64 = -2110652416;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r27,r27,-4816
	ctx.r27.s64 = ctx.r27.s64 + -4816;
	// addi r28,r28,-4968
	ctx.r28.s64 = ctx.r28.s64 + -4968;
	// addi r29,r29,-14744
	ctx.r29.s64 = ctx.r29.s64 + -14744;
	// std r9,988(r11)
	PPC_STORE_U64(ctx.r11.u32 + 988, ctx.r9.u64);
	// addi r30,r30,-5176
	ctx.r30.s64 = ctx.r30.s64 + -5176;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// addi r31,r31,-5384
	ctx.r31.s64 = ctx.r31.s64 + -5384;
	// addi r3,r3,-20336
	ctx.r3.s64 = ctx.r3.s64 + -20336;
	// stw r27,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r27.u32);
	// addi r4,r4,4920
	ctx.r4.s64 = ctx.r4.s64 + 4920;
	// stw r28,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r28.u32);
	// addi r5,r5,24112
	ctx.r5.s64 = ctx.r5.s64 + 24112;
	// stw r29,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r29.u32);
	// addi r6,r6,5344
	ctx.r6.s64 = ctx.r6.s64 + 5344;
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
	// addi r7,r7,-5608
	ctx.r7.s64 = ctx.r7.s64 + -5608;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r8,r8,-29784
	ctx.r8.s64 = ctx.r8.s64 + -29784;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// addi r9,r9,-30104
	ctx.r9.s64 = ctx.r9.s64 + -30104;
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
	// b 0x82d5c4f0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830474E0"))) PPC_WEAK_FUNC(sub_830474E0);
PPC_FUNC_IMPL(__imp__sub_830474E0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4ac
	ctx.lr = 0x830474E8;
	__savegprlr_21(ctx, base);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r21,-32208
	ctx.r21.s64 = -2110783488;
	// addi r10,r10,-1144
	ctx.r10.s64 = ctx.r10.s64 + -1144;
	// lis r22,-32210
	ctx.r22.s64 = -2110914560;
	// lis r23,-32208
	ctx.r23.s64 = -2110783488;
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
	// lis r29,-32208
	ctx.r29.s64 = -2110783488;
	// lis r30,-32207
	ctx.r30.s64 = -2110717952;
	// lis r31,-32208
	ctx.r31.s64 = -2110783488;
	// lis r3,-32208
	ctx.r3.s64 = -2110783488;
	// lis r4,-32206
	ctx.r4.s64 = -2110652416;
	// lis r5,-32206
	ctx.r5.s64 = -2110652416;
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
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
	// addi r21,r21,-1272
	ctx.r21.s64 = ctx.r21.s64 + -1272;
	// addi r22,r22,2752
	ctx.r22.s64 = ctx.r22.s64 + 2752;
	// addi r23,r23,26544
	ctx.r23.s64 = ctx.r23.s64 + 26544;
	// addi r24,r24,-1416
	ctx.r24.s64 = ctx.r24.s64 + -1416;
	// addi r25,r25,-28488
	ctx.r25.s64 = ctx.r25.s64 + -28488;
	// stw r10,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r10.u32);
	// addi r26,r26,-1656
	ctx.r26.s64 = ctx.r26.s64 + -1656;
	// stw r21,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r21.u32);
	// addi r27,r27,1568
	ctx.r27.s64 = ctx.r27.s64 + 1568;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r28,r28,-2064
	ctx.r28.s64 = ctx.r28.s64 + -2064;
	// stw r22,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r22.u32);
	// addi r29,r29,26304
	ctx.r29.s64 = ctx.r29.s64 + 26304;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r30,r30,4600
	ctx.r30.s64 = ctx.r30.s64 + 4600;
	// stw r23,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r23.u32);
	// addi r31,r31,-2296
	ctx.r31.s64 = ctx.r31.s64 + -2296;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r3,r3,26144
	ctx.r3.s64 = ctx.r3.s64 + 26144;
	// stw r24,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r24.u32);
	// addi r4,r4,-9800
	ctx.r4.s64 = ctx.r4.s64 + -9800;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r5,r5,-9992
	ctx.r5.s64 = ctx.r5.s64 + -9992;
	// stw r25,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r25.u32);
	// addi r6,r6,25928
	ctx.r6.s64 = ctx.r6.s64 + 25928;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r7,r7,-2464
	ctx.r7.s64 = ctx.r7.s64 + -2464;
	// stw r26,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r26.u32);
	// addi r8,r8,-18808
	ctx.r8.s64 = ctx.r8.s64 + -18808;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r9,r9,-19080
	ctx.r9.s64 = ctx.r9.s64 + -19080;
	// stw r27,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r27.u32);
	// addi r11,r11,-19256
	ctx.r11.s64 = ctx.r11.s64 + -19256;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r9,-104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lis r21,-32210
	ctx.r21.s64 = -2110914560;
	// addi r11,r11,-20848
	ctx.r11.s64 = ctx.r11.s64 + -20848;
	// lis r22,-32210
	ctx.r22.s64 = -2110914560;
	// lis r23,-32210
	ctx.r23.s64 = -2110914560;
	// lis r24,-32210
	ctx.r24.s64 = -2110914560;
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
	// addi r21,r21,16952
	ctx.r21.s64 = ctx.r21.s64 + 16952;
	// addi r22,r22,16784
	ctx.r22.s64 = ctx.r22.s64 + 16784;
	// addi r23,r23,29112
	ctx.r23.s64 = ctx.r23.s64 + 29112;
	// addi r24,r24,28928
	ctx.r24.s64 = ctx.r24.s64 + 28928;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// addi r25,r25,4384
	ctx.r25.s64 = ctx.r25.s64 + 4384;
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// addi r26,r26,1400
	ctx.r26.s64 = ctx.r26.s64 + 1400;
	// addi r27,r27,1232
	ctx.r27.s64 = ctx.r27.s64 + 1232;
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
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
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
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// addi r28,r28,1008
	ctx.r28.s64 = ctx.r28.s64 + 1008;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// addi r29,r29,840
	ctx.r29.s64 = ctx.r29.s64 + 840;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// addi r30,r30,4120
	ctx.r30.s64 = ctx.r30.s64 + 4120;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// addi r31,r31,-2584
	ctx.r31.s64 = ctx.r31.s64 + -2584;
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// addi r3,r3,712
	ctx.r3.s64 = ctx.r3.s64 + 712;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r4,r4,584
	ctx.r4.s64 = ctx.r4.s64 + 584;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r5,r5,3976
	ctx.r5.s64 = ctx.r5.s64 + 3976;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r6,r6,20168
	ctx.r6.s64 = ctx.r6.s64 + 20168;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r7,r7,22472
	ctx.r7.s64 = ctx.r7.s64 + 22472;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r8,r8,23624
	ctx.r8.s64 = ctx.r8.s64 + 23624;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r9,r9,22040
	ctx.r9.s64 = ctx.r9.s64 + 22040;
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
	// b 0x82d5c4fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83047898"))) PPC_WEAK_FUNC(sub_83047898);
PPC_FUNC_IMPL(__imp__sub_83047898) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x830478A0;
	__savegprlr_27(ctx, base);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// addi r10,r10,3688
	ctx.r10.s64 = ctx.r10.s64 + 3688;
	// lis r27,-32206
	ctx.r27.s64 = -2110652416;
	// lis r28,-32206
	ctx.r28.s64 = -2110652416;
	// addi r27,r27,-128
	ctx.r27.s64 = ctx.r27.s64 + -128;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// addi r28,r28,-440
	ctx.r28.s64 = ctx.r28.s64 + -440;
	// lis r29,-32208
	ctx.r29.s64 = -2110783488;
	// lis r30,-32206
	ctx.r30.s64 = -2110652416;
	// stw r27,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r27.u32);
	// addi r29,r29,25600
	ctx.r29.s64 = ctx.r29.s64 + 25600;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// addi r30,r30,-608
	ctx.r30.s64 = ctx.r30.s64 + -608;
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
	// addi r31,r31,-768
	ctx.r31.s64 = ctx.r31.s64 + -768;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r11.u32);
	// addi r3,r3,-904
	ctx.r3.s64 = ctx.r3.s64 + -904;
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
	// addi r4,r4,-904
	ctx.r4.s64 = ctx.r4.s64 + -904;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// addi r5,r5,-2712
	ctx.r5.s64 = ctx.r5.s64 + -2712;
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
	// addi r6,r6,3816
	ctx.r6.s64 = ctx.r6.s64 + 3816;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// addi r7,r7,-1192
	ctx.r7.s64 = ctx.r7.s64 + -1192;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r10,-176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// addi r8,r8,25408
	ctx.r8.s64 = ctx.r8.s64 + 25408;
	// addi r11,r11,-24760
	ctx.r11.s64 = ctx.r11.s64 + -24760;
	// stw r28,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r28.u32);
	// stw r29,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r29.u32);
	// addi r9,r9,-19472
	ctx.r9.s64 = ctx.r9.s64 + -19472;
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

__attribute__((alias("__imp__sub_83047A10"))) PPC_WEAK_FUNC(sub_83047A10);
PPC_FUNC_IMPL(__imp__sub_83047A10) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r10,r10,25048
	ctx.r10.s64 = ctx.r10.s64 + 25048;
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
	// addi r11,r11,-20064
	ctx.r11.s64 = ctx.r11.s64 + -20064;
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83047A48"))) PPC_WEAK_FUNC(sub_83047A48);
PPC_FUNC_IMPL(__imp__sub_83047A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r11,r11,-3016
	ctx.r11.s64 = ctx.r11.s64 + -3016;
	// addi r10,r10,-5384
	ctx.r10.s64 = ctx.r10.s64 + -5384;
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
	// addi r11,r11,-22708
	ctx.r11.s64 = ctx.r11.s64 + -22708;
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

__attribute__((alias("__imp__sub_83047A98"))) PPC_WEAK_FUNC(sub_83047A98);
PPC_FUNC_IMPL(__imp__sub_83047A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,12992
	ctx.r11.s64 = ctx.r11.s64 + 12992;
	// addi r10,r10,-2808
	ctx.r10.s64 = ctx.r10.s64 + -2808;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r9,r9,-2536
	ctx.r9.s64 = ctx.r9.s64 + -2536;
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
	// addi r11,r11,-22816
	ctx.r11.s64 = ctx.r11.s64 + -22816;
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

__attribute__((alias("__imp__sub_83047B00"))) PPC_WEAK_FUNC(sub_83047B00);
PPC_FUNC_IMPL(__imp__sub_83047B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,-768
	ctx.r11.s64 = ctx.r11.s64 + -768;
	// addi r10,r10,-1168
	ctx.r10.s64 = ctx.r10.s64 + -1168;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r9,r9,-1040
	ctx.r9.s64 = ctx.r9.s64 + -1040;
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
	// addi r11,r11,-20256
	ctx.r11.s64 = ctx.r11.s64 + -20256;
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

__attribute__((alias("__imp__sub_83047B68"))) PPC_WEAK_FUNC(sub_83047B68);
PPC_FUNC_IMPL(__imp__sub_83047B68) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a0
	ctx.lr = 0x83047B70;
	__savegprlr_18(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// addi r10,r10,-3424
	ctx.r10.s64 = ctx.r10.s64 + -3424;
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
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
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
	// addi r21,r21,-3552
	ctx.r21.s64 = ctx.r21.s64 + -3552;
	// addi r22,r22,-3680
	ctx.r22.s64 = ctx.r22.s64 + -3680;
	// addi r23,r23,-3808
	ctx.r23.s64 = ctx.r23.s64 + -3808;
	// addi r24,r24,-6104
	ctx.r24.s64 = ctx.r24.s64 + -6104;
	// addi r25,r25,-3936
	ctx.r25.s64 = ctx.r25.s64 + -3936;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r26,r26,-4048
	ctx.r26.s64 = ctx.r26.s64 + -4048;
	// stw r21,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r21.u32);
	// addi r27,r27,-4216
	ctx.r27.s64 = ctx.r27.s64 + -4216;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r28,r28,-4344
	ctx.r28.s64 = ctx.r28.s64 + -4344;
	// stw r22,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r22.u32);
	// addi r29,r29,-4472
	ctx.r29.s64 = ctx.r29.s64 + -4472;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r30,r30,-4640
	ctx.r30.s64 = ctx.r30.s64 + -4640;
	// stw r23,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r23.u32);
	// addi r31,r31,-4992
	ctx.r31.s64 = ctx.r31.s64 + -4992;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r3,r3,-5144
	ctx.r3.s64 = ctx.r3.s64 + -5144;
	// stw r24,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r24.u32);
	// addi r4,r4,-5496
	ctx.r4.s64 = ctx.r4.s64 + -5496;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// addi r5,r5,-5832
	ctx.r5.s64 = ctx.r5.s64 + -5832;
	// stw r25,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r25.u32);
	// addi r6,r6,-7296
	ctx.r6.s64 = ctx.r6.s64 + -7296;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r7,r7,-6088
	ctx.r7.s64 = ctx.r7.s64 + -6088;
	// stw r26,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r26.u32);
	// addi r8,r8,-6256
	ctx.r8.s64 = ctx.r8.s64 + -6256;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// addi r9,r9,-6432
	ctx.r9.s64 = ctx.r9.s64 + -6432;
	// stw r27,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r27.u32);
	// addi r11,r11,-31736
	ctx.r11.s64 = ctx.r11.s64 + -31736;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r28,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r28.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r29,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r29.u32);
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// stw r30,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r30.u32);
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// stw r31,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r31.u32);
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// stw r3,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r3.u32);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// stw r4,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r4.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r5,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r5.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stw r6,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r7,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r7.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stw r8,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r8.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r9,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r9.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r11.u32);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lis r18,-32207
	ctx.r18.s64 = -2110717952;
	// addi r11,r11,-24520
	ctx.r11.s64 = ctx.r11.s64 + -24520;
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
	// lis r23,-32207
	ctx.r23.s64 = -2110717952;
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// addi r18,r18,-31912
	ctx.r18.s64 = ctx.r18.s64 + -31912;
	// addi r19,r19,-6576
	ctx.r19.s64 = ctx.r19.s64 + -6576;
	// addi r20,r20,-6768
	ctx.r20.s64 = ctx.r20.s64 + -6768;
	// addi r21,r21,-6936
	ctx.r21.s64 = ctx.r21.s64 + -6936;
	// addi r22,r22,-7104
	ctx.r22.s64 = ctx.r22.s64 + -7104;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// addi r23,r23,-32072
	ctx.r23.s64 = ctx.r23.s64 + -32072;
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
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
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// lis r6,-32207
	ctx.r6.s64 = -2110717952;
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// lis r7,-32207
	ctx.r7.s64 = -2110717952;
	// lis r8,-32207
	ctx.r8.s64 = -2110717952;
	// std r9,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r9,64(r11)
	PPC_STORE_U64(ctx.r11.u32 + 64, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,76(r11)
	PPC_STORE_U64(ctx.r11.u32 + 76, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
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
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,148(r11)
	PPC_STORE_U64(ctx.r11.u32 + 148, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r23,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r23.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// std r9,172(r11)
	PPC_STORE_U64(ctx.r11.u32 + 172, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// stw r22,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r22.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
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
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// stw r19,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r19.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// std r9,220(r11)
	PPC_STORE_U64(ctx.r11.u32 + 220, ctx.r9.u64);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// stw r18,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r18.u32);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// std r9,232(r11)
	PPC_STORE_U64(ctx.r11.u32 + 232, ctx.r9.u64);
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// addi r9,r9,31392
	ctx.r9.s64 = ctx.r9.s64 + 31392;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r24,r24,-7248
	ctx.r24.s64 = ctx.r24.s64 + -7248;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r25,r25,-7408
	ctx.r25.s64 = ctx.r25.s64 + -7408;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// addi r26,r26,-7680
	ctx.r26.s64 = ctx.r26.s64 + -7680;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r27,r27,-7848
	ctx.r27.s64 = ctx.r27.s64 + -7848;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// addi r28,r28,-8000
	ctx.r28.s64 = ctx.r28.s64 + -8000;
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// addi r29,r29,-8272
	ctx.r29.s64 = ctx.r29.s64 + -8272;
	// stw r24,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r24.u32);
	// addi r30,r30,-8496
	ctx.r30.s64 = ctx.r30.s64 + -8496;
	// stw r25,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r25.u32);
	// addi r31,r31,-8928
	ctx.r31.s64 = ctx.r31.s64 + -8928;
	// stw r26,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r26.u32);
	// addi r3,r3,-9240
	ctx.r3.s64 = ctx.r3.s64 + -9240;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// addi r4,r4,-7696
	ctx.r4.s64 = ctx.r4.s64 + -7696;
	// std r9,244(r11)
	PPC_STORE_U64(ctx.r11.u32 + 244, ctx.r9.u64);
	// addi r5,r5,-9552
	ctx.r5.s64 = ctx.r5.s64 + -9552;
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// addi r6,r6,-32248
	ctx.r6.s64 = ctx.r6.s64 + -32248;
	// stw r28,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r28.u32);
	// addi r7,r7,31704
	ctx.r7.s64 = ctx.r7.s64 + 31704;
	// stw r29,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r29.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r30,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r30.u32);
	// std r9,256(r11)
	PPC_STORE_U64(ctx.r11.u32 + 256, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r31,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r31.u32);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r3,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// std r9,268(r11)
	PPC_STORE_U64(ctx.r11.u32 + 268, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stw r4,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// stw r5,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r5.u32);
	// std r9,280(r11)
	PPC_STORE_U64(ctx.r11.u32 + 280, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// stw r6,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r6.u32);
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// stw r7,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r7.u32);
	// std r9,292(r11)
	PPC_STORE_U64(ctx.r11.u32 + 292, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// std r9,304(r11)
	PPC_STORE_U64(ctx.r11.u32 + 304, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,316(r11)
	PPC_STORE_U64(ctx.r11.u32 + 316, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,328(r11)
	PPC_STORE_U64(ctx.r11.u32 + 328, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
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
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,376(r11)
	PPC_STORE_U64(ctx.r11.u32 + 376, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,388(r11)
	PPC_STORE_U64(ctx.r11.u32 + 388, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,400(r11)
	PPC_STORE_U64(ctx.r11.u32 + 400, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
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
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,448(r11)
	PPC_STORE_U64(ctx.r11.u32 + 448, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,460(r11)
	PPC_STORE_U64(ctx.r11.u32 + 460, ctx.r9.u64);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r9,472(r11)
	PPC_STORE_U64(ctx.r11.u32 + 472, ctx.r9.u64);
	// addi r9,r8,31080
	ctx.r9.s64 = ctx.r8.s64 + 31080;
	// lis r19,-32207
	ctx.r19.s64 = -2110717952;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r20,-32207
	ctx.r20.s64 = -2110717952;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stw r9,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r9.u32);
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// lis r24,-32209
	ctx.r24.s64 = -2110849024;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// lis r25,-32209
	ctx.r25.s64 = -2110849024;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r27,-32208
	ctx.r27.s64 = -2110783488;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r28,-32202
	ctx.r28.s64 = -2110390272;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// lis r29,-32202
	ctx.r29.s64 = -2110390272;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
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
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r19,r19,30768
	ctx.r19.s64 = ctx.r19.s64 + 30768;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r20,r20,30456
	ctx.r20.s64 = ctx.r20.s64 + 30456;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r21,r21,-9680
	ctx.r21.s64 = ctx.r21.s64 + -9680;
	// addi r22,r22,-9832
	ctx.r22.s64 = ctx.r22.s64 + -9832;
	// addi r23,r23,-9960
	ctx.r23.s64 = ctx.r23.s64 + -9960;
	// addi r24,r24,-10200
	ctx.r24.s64 = ctx.r24.s64 + -10200;
	// stw r19,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r19.u32);
	// addi r25,r25,-10360
	ctx.r25.s64 = ctx.r25.s64 + -10360;
	// stw r20,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r20.u32);
	// addi r26,r26,-10664
	ctx.r26.s64 = ctx.r26.s64 + -10664;
	// stw r21,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r21.u32);
	// addi r27,r27,7424
	ctx.r27.s64 = ctx.r27.s64 + 7424;
	// stw r22,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r22.u32);
	// addi r28,r28,23976
	ctx.r28.s64 = ctx.r28.s64 + 23976;
	// stw r23,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r23.u32);
	// addi r29,r29,23536
	ctx.r29.s64 = ctx.r29.s64 + 23536;
	// stw r24,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r24.u32);
	// addi r30,r30,-10808
	ctx.r30.s64 = ctx.r30.s64 + -10808;
	// stw r25,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r25.u32);
	// addi r31,r31,-10952
	ctx.r31.s64 = ctx.r31.s64 + -10952;
	// stw r26,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r26.u32);
	// addi r3,r3,-11096
	ctx.r3.s64 = ctx.r3.s64 + -11096;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// addi r4,r4,-11264
	ctx.r4.s64 = ctx.r4.s64 + -11264;
	// stw r28,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r28.u32);
	// addi r5,r5,-11408
	ctx.r5.s64 = ctx.r5.s64 + -11408;
	// stw r29,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r29.u32);
	// addi r6,r6,-11552
	ctx.r6.s64 = ctx.r6.s64 + -11552;
	// stw r30,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r30.u32);
	// addi r7,r7,-11696
	ctx.r7.s64 = ctx.r7.s64 + -11696;
	// stw r31,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r31.u32);
	// addi r9,r9,-11856
	ctx.r9.s64 = ctx.r9.s64 + -11856;
	// stw r3,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r4,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// stw r5,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r5.u32);
	// stw r6,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r6.u32);
	// stw r7,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r7.u32);
	// stw r9,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r9.u32);
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lis r19,-32209
	ctx.r19.s64 = -2110849024;
	// lis r20,-32209
	ctx.r20.s64 = -2110849024;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
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
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// addi r19,r19,-12144
	ctx.r19.s64 = ctx.r19.s64 + -12144;
	// addi r20,r20,-12304
	ctx.r20.s64 = ctx.r20.s64 + -12304;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// addi r21,r21,-12544
	ctx.r21.s64 = ctx.r21.s64 + -12544;
	// addi r22,r22,-12784
	ctx.r22.s64 = ctx.r22.s64 + -12784;
	// addi r23,r23,-12928
	ctx.r23.s64 = ctx.r23.s64 + -12928;
	// std r9,496(r11)
	PPC_STORE_U64(ctx.r11.u32 + 496, ctx.r9.u64);
	// addi r24,r24,-13072
	ctx.r24.s64 = ctx.r24.s64 + -13072;
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lis r25,-32209
	ctx.r25.s64 = -2110849024;
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// stw r19,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r19.u32);
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
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// stw r22,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r22.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// std r9,532(r11)
	PPC_STORE_U64(ctx.r11.u32 + 532, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r23,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r23.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// std r9,544(r11)
	PPC_STORE_U64(ctx.r11.u32 + 544, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// stw r24,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r24.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// std r9,556(r11)
	PPC_STORE_U64(ctx.r11.u32 + 556, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,568(r11)
	PPC_STORE_U64(ctx.r11.u32 + 568, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
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
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,616(r11)
	PPC_STORE_U64(ctx.r11.u32 + 616, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,628(r11)
	PPC_STORE_U64(ctx.r11.u32 + 628, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,640(r11)
	PPC_STORE_U64(ctx.r11.u32 + 640, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
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
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,688(r11)
	PPC_STORE_U64(ctx.r11.u32 + 688, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,700(r11)
	PPC_STORE_U64(ctx.r11.u32 + 700, ctx.r9.u64);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r9,712(r11)
	PPC_STORE_U64(ctx.r11.u32 + 712, ctx.r9.u64);
	// addi r9,r8,-12000
	ctx.r9.s64 = ctx.r8.s64 + -12000;
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r9,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r9.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r9,r9,-15224
	ctx.r9.s64 = ctx.r9.s64 + -15224;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r25,r25,-13216
	ctx.r25.s64 = ctx.r25.s64 + -13216;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// addi r26,r26,-13360
	ctx.r26.s64 = ctx.r26.s64 + -13360;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r27,r27,-13608
	ctx.r27.s64 = ctx.r27.s64 + -13608;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// addi r28,r28,-13784
	ctx.r28.s64 = ctx.r28.s64 + -13784;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r9,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
	// addi r29,r29,-13928
	ctx.r29.s64 = ctx.r29.s64 + -13928;
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// addi r30,r30,-14072
	ctx.r30.s64 = ctx.r30.s64 + -14072;
	// stw r25,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r25.u32);
	// addi r31,r31,-14216
	ctx.r31.s64 = ctx.r31.s64 + -14216;
	// stw r26,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r26.u32);
	// addi r3,r3,-14360
	ctx.r3.s64 = ctx.r3.s64 + -14360;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// addi r4,r4,-14504
	ctx.r4.s64 = ctx.r4.s64 + -14504;
	// stw r28,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r28.u32);
	// addi r5,r5,-14648
	ctx.r5.s64 = ctx.r5.s64 + -14648;
	// std r9,724(r11)
	PPC_STORE_U64(ctx.r11.u32 + 724, ctx.r9.u64);
	// addi r6,r6,-14792
	ctx.r6.s64 = ctx.r6.s64 + -14792;
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// addi r7,r7,-14936
	ctx.r7.s64 = ctx.r7.s64 + -14936;
	// stw r29,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r29.u32);
	// addi r8,r8,-15080
	ctx.r8.s64 = ctx.r8.s64 + -15080;
	// stw r30,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r30.u32);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r31,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r31.u32);
	// std r9,736(r11)
	PPC_STORE_U64(ctx.r11.u32 + 736, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r3,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
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
	// stw r6,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r6.u32);
	// std r9,760(r11)
	PPC_STORE_U64(ctx.r11.u32 + 760, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// stw r7,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r7.u32);
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// stw r8,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r8.u32);
	// std r9,772(r11)
	PPC_STORE_U64(ctx.r11.u32 + 772, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// std r9,784(r11)
	PPC_STORE_U64(ctx.r11.u32 + 784, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,796(r11)
	PPC_STORE_U64(ctx.r11.u32 + 796, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,808(r11)
	PPC_STORE_U64(ctx.r11.u32 + 808, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
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
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,856(r11)
	PPC_STORE_U64(ctx.r11.u32 + 856, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,868(r11)
	PPC_STORE_U64(ctx.r11.u32 + 868, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,880(r11)
	PPC_STORE_U64(ctx.r11.u32 + 880, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
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
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,928(r11)
	PPC_STORE_U64(ctx.r11.u32 + 928, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
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
	// lis r20,-32209
	ctx.r20.s64 = -2110849024;
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
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
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// lis r29,-32209
	ctx.r29.s64 = -2110849024;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// lis r3,-32209
	ctx.r3.s64 = -2110849024;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r19,r19,-15368
	ctx.r19.s64 = ctx.r19.s64 + -15368;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// addi r20,r20,-15512
	ctx.r20.s64 = ctx.r20.s64 + -15512;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r21,r21,-15656
	ctx.r21.s64 = ctx.r21.s64 + -15656;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r22,r22,-15800
	ctx.r22.s64 = ctx.r22.s64 + -15800;
	// addi r23,r23,-15944
	ctx.r23.s64 = ctx.r23.s64 + -15944;
	// addi r24,r24,-16088
	ctx.r24.s64 = ctx.r24.s64 + -16088;
	// stw r19,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r19.u32);
	// addi r25,r25,-16232
	ctx.r25.s64 = ctx.r25.s64 + -16232;
	// stw r20,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r20.u32);
	// addi r26,r26,-16376
	ctx.r26.s64 = ctx.r26.s64 + -16376;
	// stw r21,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r21.u32);
	// addi r27,r27,-16520
	ctx.r27.s64 = ctx.r27.s64 + -16520;
	// stw r22,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r22.u32);
	// addi r28,r28,-16648
	ctx.r28.s64 = ctx.r28.s64 + -16648;
	// stw r23,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r23.u32);
	// addi r29,r29,-16792
	ctx.r29.s64 = ctx.r29.s64 + -16792;
	// stw r24,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r24.u32);
	// addi r30,r30,-16936
	ctx.r30.s64 = ctx.r30.s64 + -16936;
	// stw r25,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r25.u32);
	// addi r31,r31,-17096
	ctx.r31.s64 = ctx.r31.s64 + -17096;
	// stw r26,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r26.u32);
	// addi r3,r3,-17240
	ctx.r3.s64 = ctx.r3.s64 + -17240;
	// stw r27,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r27.u32);
	// addi r4,r4,-17384
	ctx.r4.s64 = ctx.r4.s64 + -17384;
	// stw r28,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r28.u32);
	// addi r5,r5,-17528
	ctx.r5.s64 = ctx.r5.s64 + -17528;
	// stw r29,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r29.u32);
	// addi r6,r6,-17672
	ctx.r6.s64 = ctx.r6.s64 + -17672;
	// stw r30,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r30.u32);
	// addi r7,r7,-17816
	ctx.r7.s64 = ctx.r7.s64 + -17816;
	// stw r31,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r31.u32);
	// addi r8,r8,-18064
	ctx.r8.s64 = ctx.r8.s64 + -18064;
	// stw r3,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r3.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r4,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r4.u32);
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// stw r6,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r6.u32);
	// addi r9,r9,-18208
	ctx.r9.s64 = ctx.r9.s64 + -18208;
	// stw r7,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r7.u32);
	// stw r8,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r8.u32);
	// stw r9,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r9.u32);
	// lis r18,-32209
	ctx.r18.s64 = -2110849024;
	// ld r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lis r19,-32209
	ctx.r19.s64 = -2110849024;
	// lis r20,-32209
	ctx.r20.s64 = -2110849024;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// std r9,976(r11)
	PPC_STORE_U64(ctx.r11.u32 + 976, ctx.r9.u64);
	// addi r18,r18,-18352
	ctx.r18.s64 = ctx.r18.s64 + -18352;
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// addi r19,r19,-18528
	ctx.r19.s64 = ctx.r19.s64 + -18528;
	// addi r20,r20,-18688
	ctx.r20.s64 = ctx.r20.s64 + -18688;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r21,r21,-18832
	ctx.r21.s64 = ctx.r21.s64 + -18832;
	// addi r22,r22,-19008
	ctx.r22.s64 = ctx.r22.s64 + -19008;
	// addi r23,r23,-19184
	ctx.r23.s64 = ctx.r23.s64 + -19184;
	// stw r18,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r18.u32);
	// std r9,988(r11)
	PPC_STORE_U64(ctx.r11.u32 + 988, ctx.r9.u64);
	// lis r24,-32209
	ctx.r24.s64 = -2110849024;
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lis r25,-32209
	ctx.r25.s64 = -2110849024;
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// stw r19,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r19.u32);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// stw r20,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r20.u32);
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
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
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
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
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// stw r23,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r23.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// std r9,1036(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1036, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r9,1048(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1048, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,1060(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1060, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,1072(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1072, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
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
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,1120(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1120, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,1132(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1132, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,1144(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1144, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
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
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,1192(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1192, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,1204(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1204, ctx.r9.u64);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r9,r9,-21160
	ctx.r9.s64 = ctx.r9.s64 + -21160;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r24,r24,-19328
	ctx.r24.s64 = ctx.r24.s64 + -19328;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r25,r25,-19472
	ctx.r25.s64 = ctx.r25.s64 + -19472;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r26,r26,-19616
	ctx.r26.s64 = ctx.r26.s64 + -19616;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// addi r27,r27,-19760
	ctx.r27.s64 = ctx.r27.s64 + -19760;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// stw r9,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r9.u32);
	// addi r28,r28,-19904
	ctx.r28.s64 = ctx.r28.s64 + -19904;
	// ld r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// addi r29,r29,-20080
	ctx.r29.s64 = ctx.r29.s64 + -20080;
	// stw r24,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r24.u32);
	// addi r30,r30,-20256
	ctx.r30.s64 = ctx.r30.s64 + -20256;
	// stw r25,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r25.u32);
	// addi r31,r31,-20424
	ctx.r31.s64 = ctx.r31.s64 + -20424;
	// stw r26,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r26.u32);
	// addi r3,r3,-20552
	ctx.r3.s64 = ctx.r3.s64 + -20552;
	// stw r27,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r27.u32);
	// addi r4,r4,-20712
	ctx.r4.s64 = ctx.r4.s64 + -20712;
	// std r9,1216(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1216, ctx.r9.u64);
	// addi r5,r5,-6496
	ctx.r5.s64 = ctx.r5.s64 + -6496;
	// ld r9,-152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// addi r6,r6,-20824
	ctx.r6.s64 = ctx.r6.s64 + -20824;
	// stw r28,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r28.u32);
	// addi r7,r7,-21000
	ctx.r7.s64 = ctx.r7.s64 + -21000;
	// stw r29,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r29.u32);
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// stw r30,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r30.u32);
	// std r9,1228(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1228, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r31,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r31.u32);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r3,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r3.u32);
	// std r9,1240(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1240, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r4,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
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
	// stw r7,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r7.u32);
	// std r9,1264(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1264, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// std r9,1276(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1276, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r9,1288(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1288, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,1300(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1300, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r9,1312(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1312, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,1324(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1324, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// std r9,1336(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1336, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r9,1348(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1348, ctx.r9.u64);
	// ld r9,-216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r9,1360(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1360, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,1372(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1372, ctx.r9.u64);
	// ld r9,-232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,1384(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1384, ctx.r9.u64);
	// ld r9,-168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
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
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,1432(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1432, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,1444(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1444, ctx.r9.u64);
	// addi r9,r8,-21336
	ctx.r9.s64 = ctx.r8.s64 + -21336;
	// lis r20,-32209
	ctx.r20.s64 = -2110849024;
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// lis r21,-32209
	ctx.r21.s64 = -2110849024;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r22,-32209
	ctx.r22.s64 = -2110849024;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r9,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
	// lis r24,-32207
	ctx.r24.s64 = -2110717952;
	// lis r25,-32207
	ctx.r25.s64 = -2110717952;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// lis r26,-32209
	ctx.r26.s64 = -2110849024;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// lis r28,-32209
	ctx.r28.s64 = -2110849024;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r29,-32210
	ctx.r29.s64 = -2110914560;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r30,-32209
	ctx.r30.s64 = -2110849024;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// lis r31,-32209
	ctx.r31.s64 = -2110849024;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// lis r3,-32208
	ctx.r3.s64 = -2110783488;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// lis r4,-32209
	ctx.r4.s64 = -2110849024;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r5,-32208
	ctx.r5.s64 = -2110783488;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r7,-32209
	ctx.r7.s64 = -2110849024;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r8,-32209
	ctx.r8.s64 = -2110849024;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r20,r20,-21464
	ctx.r20.s64 = ctx.r20.s64 + -21464;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r21,r21,-21592
	ctx.r21.s64 = ctx.r21.s64 + -21592;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r22,r22,-21720
	ctx.r22.s64 = ctx.r22.s64 + -21720;
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// addi r23,r23,-22056
	ctx.r23.s64 = ctx.r23.s64 + -22056;
	// addi r24,r24,-32496
	ctx.r24.s64 = ctx.r24.s64 + -32496;
	// addi r25,r25,-32744
	ctx.r25.s64 = ctx.r25.s64 + -32744;
	// stw r20,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r20.u32);
	// addi r26,r26,-22200
	ctx.r26.s64 = ctx.r26.s64 + -22200;
	// stw r21,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r21.u32);
	// addi r27,r27,-22328
	ctx.r27.s64 = ctx.r27.s64 + -22328;
	// stw r22,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r22.u32);
	// addi r28,r28,-22456
	ctx.r28.s64 = ctx.r28.s64 + -22456;
	// stw r23,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r23.u32);
	// addi r29,r29,2752
	ctx.r29.s64 = ctx.r29.s64 + 2752;
	// stw r24,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r24.u32);
	// addi r30,r30,-22568
	ctx.r30.s64 = ctx.r30.s64 + -22568;
	// stw r25,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r25.u32);
	// addi r31,r31,-22816
	ctx.r31.s64 = ctx.r31.s64 + -22816;
	// stw r26,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r26.u32);
	// addi r3,r3,32608
	ctx.r3.s64 = ctx.r3.s64 + 32608;
	// stw r27,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r27.u32);
	// addi r4,r4,-22928
	ctx.r4.s64 = ctx.r4.s64 + -22928;
	// stw r28,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r28.u32);
	// addi r5,r5,32456
	ctx.r5.s64 = ctx.r5.s64 + 32456;
	// stw r29,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r29.u32);
	// addi r6,r6,-23080
	ctx.r6.s64 = ctx.r6.s64 + -23080;
	// stw r30,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r30.u32);
	// addi r7,r7,-23272
	ctx.r7.s64 = ctx.r7.s64 + -23272;
	// stw r31,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r31.u32);
	// addi r8,r8,-23424
	ctx.r8.s64 = ctx.r8.s64 + -23424;
	// stw r3,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r3.u32);
	// addi r9,r9,-23664
	ctx.r9.s64 = ctx.r9.s64 + -23664;
	// stw r4,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r4.u32);
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// stw r6,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r6.u32);
	// stw r7,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r7.u32);
	// stw r8,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r8.u32);
	// stw r9,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r9.u32);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// ld r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// std r10,1456(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1456, ctx.r10.u64);
	// ld r10,-152(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r10,1468(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1468, ctx.r10.u64);
	// ld r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// std r10,1480(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1480, ctx.r10.u64);
	// ld r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// std r10,1492(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1492, ctx.r10.u64);
	// ld r10,-176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// std r10,1504(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1504, ctx.r10.u64);
	// ld r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// std r10,1516(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1516, ctx.r10.u64);
	// ld r10,-208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r10,1528(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1528, ctx.r10.u64);
	// ld r10,-224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r10,1540(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1540, ctx.r10.u64);
	// ld r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r10,1552(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1552, ctx.r10.u64);
	// ld r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r10,1564(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1564, ctx.r10.u64);
	// ld r10,-288(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// std r10,1576(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1576, ctx.r10.u64);
	// ld r10,-280(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r10,1588(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1588, ctx.r10.u64);
	// ld r10,-216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r10,1600(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1600, ctx.r10.u64);
	// ld r10,-184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r10,1612(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1612, ctx.r10.u64);
	// ld r10,-232(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r10,1624(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1624, ctx.r10.u64);
	// ld r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r10,1636(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1636, ctx.r10.u64);
	// ld r10,-248(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r10,1648(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1648, ctx.r10.u64);
	// ld r10,-200(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r10,1660(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1660, ctx.r10.u64);
	// ld r10,-264(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r10,1672(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1672, ctx.r10.u64);
	// ld r10,-272(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r10,1684(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1684, ctx.r10.u64);
	// ld r10,-136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r10,1696(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1696, ctx.r10.u64);
	// b 0x82d5c4f0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830488C8"))) PPC_WEAK_FUNC(sub_830488C8);
PPC_FUNC_IMPL(__imp__sub_830488C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,7232
	ctx.r11.s64 = ctx.r11.s64 + 7232;
	// addi r10,r10,-25448
	ctx.r10.s64 = ctx.r10.s64 + -25448;
	// lis r3,-32207
	ctx.r3.s64 = -2110717952;
	// lis r4,-32208
	ctx.r4.s64 = -2110783488;
	// addi r3,r3,8328
	ctx.r3.s64 = ctx.r3.s64 + 8328;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r4,r4,7112
	ctx.r4.s64 = ctx.r4.s64 + 7112;
	// lis r5,-32209
	ctx.r5.s64 = -2110849024;
	// lis r6,-32209
	ctx.r6.s64 = -2110849024;
	// stw r3,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r3.u32);
	// addi r5,r5,-24728
	ctx.r5.s64 = ctx.r5.s64 + -24728;
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// addi r6,r6,-24872
	ctx.r6.s64 = ctx.r6.s64 + -24872;
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
	// addi r7,r7,-25016
	ctx.r7.s64 = ctx.r7.s64 + -25016;
	// stw r11,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r11.u32);
	// addi r8,r8,-25160
	ctx.r8.s64 = ctx.r8.s64 + -25160;
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// addi r9,r9,-25304
	ctx.r9.s64 = ctx.r9.s64 + -25304;
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
	// addi r11,r11,-20376
	ctx.r11.s64 = ctx.r11.s64 + -20376;
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

__attribute__((alias("__imp__sub_830489C0"))) PPC_WEAK_FUNC(sub_830489C0);
PPC_FUNC_IMPL(__imp__sub_830489C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,30904
	ctx.r11.s64 = ctx.r11.s64 + 30904;
	// addi r10,r10,30688
	ctx.r10.s64 = ctx.r10.s64 + 30688;
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
	// addi r11,r11,-20884
	ctx.r11.s64 = ctx.r11.s64 + -20884;
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

__attribute__((alias("__imp__sub_83048A10"))) PPC_WEAK_FUNC(sub_83048A10);
PPC_FUNC_IMPL(__imp__sub_83048A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,29296
	ctx.r11.s64 = ctx.r11.s64 + 29296;
	// addi r10,r10,31072
	ctx.r10.s64 = ctx.r10.s64 + 31072;
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
	// addi r11,r11,-24556
	ctx.r11.s64 = ctx.r11.s64 + -24556;
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

__attribute__((alias("__imp__sub_83048A60"))) PPC_WEAK_FUNC(sub_83048A60);
PPC_FUNC_IMPL(__imp__sub_83048A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r11,r11,31264
	ctx.r11.s64 = ctx.r11.s64 + 31264;
	// addi r10,r10,-2016
	ctx.r10.s64 = ctx.r10.s64 + -2016;
	// lis r8,-32152
	ctx.r8.s64 = -2107113472;
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// addi r8,r8,14888
	ctx.r8.s64 = ctx.r8.s64 + 14888;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r9,r9,14632
	ctx.r9.s64 = ctx.r9.s64 + 14632;
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
	// addi r11,r11,-22768
	ctx.r11.s64 = ctx.r11.s64 + -22768;
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

__attribute__((alias("__imp__sub_83048AE0"))) PPC_WEAK_FUNC(sub_83048AE0);
PPC_FUNC_IMPL(__imp__sub_83048AE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r10,r10,-9240
	ctx.r10.s64 = ctx.r10.s64 + -9240;
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
	// addi r11,r11,-24580
	ctx.r11.s64 = ctx.r11.s64 + -24580;
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
	// ld r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83048B18"))) PPC_WEAK_FUNC(sub_83048B18);
PPC_FUNC_IMPL(__imp__sub_83048B18) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4ac
	ctx.lr = 0x83048B20;
	__savegprlr_21(ctx, base);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// lis r21,-32208
	ctx.r21.s64 = -2110783488;
	// addi r10,r10,-26832
	ctx.r10.s64 = ctx.r10.s64 + -26832;
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
	// addi r21,r21,-26944
	ctx.r21.s64 = ctx.r21.s64 + -26944;
	// addi r22,r22,-27056
	ctx.r22.s64 = ctx.r22.s64 + -27056;
	// addi r23,r23,-27216
	ctx.r23.s64 = ctx.r23.s64 + -27216;
	// addi r24,r24,-27392
	ctx.r24.s64 = ctx.r24.s64 + -27392;
	// addi r25,r25,-8952
	ctx.r25.s64 = ctx.r25.s64 + -8952;
	// stw r10,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r10.u32);
	// addi r26,r26,-25360
	ctx.r26.s64 = ctx.r26.s64 + -25360;
	// stw r21,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r21.u32);
	// addi r27,r27,-27696
	ctx.r27.s64 = ctx.r27.s64 + -27696;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// addi r28,r28,-28176
	ctx.r28.s64 = ctx.r28.s64 + -28176;
	// stw r22,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r22.u32);
	// addi r29,r29,-28344
	ctx.r29.s64 = ctx.r29.s64 + -28344;
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// addi r30,r30,-4168
	ctx.r30.s64 = ctx.r30.s64 + -4168;
	// stw r23,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r23.u32);
	// addi r31,r31,-28512
	ctx.r31.s64 = ctx.r31.s64 + -28512;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// addi r3,r3,-28672
	ctx.r3.s64 = ctx.r3.s64 + -28672;
	// stw r24,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r24.u32);
	// addi r4,r4,-28848
	ctx.r4.s64 = ctx.r4.s64 + -28848;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r5,r5,-29120
	ctx.r5.s64 = ctx.r5.s64 + -29120;
	// stw r25,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r25.u32);
	// addi r6,r6,-29392
	ctx.r6.s64 = ctx.r6.s64 + -29392;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r7,r7,-29520
	ctx.r7.s64 = ctx.r7.s64 + -29520;
	// stw r26,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r26.u32);
	// addi r8,r8,-29680
	ctx.r8.s64 = ctx.r8.s64 + -29680;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r9,r9,-29808
	ctx.r9.s64 = ctx.r9.s64 + -29808;
	// stw r27,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r27.u32);
	// addi r11,r11,-29984
	ctx.r11.s64 = ctx.r11.s64 + -29984;
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
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r9,-104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lis r31,-32208
	ctx.r31.s64 = -2110783488;
	// addi r11,r11,-21232
	ctx.r11.s64 = ctx.r11.s64 + -21232;
	// addi r31,r31,-30112
	ctx.r31.s64 = ctx.r31.s64 + -30112;
	// lis r3,-32208
	ctx.r3.s64 = -2110783488;
	// lis r4,-32208
	ctx.r4.s64 = -2110783488;
	// addi r3,r3,-30288
	ctx.r3.s64 = ctx.r3.s64 + -30288;
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
	// addi r4,r4,-30464
	ctx.r4.s64 = ctx.r4.s64 + -30464;
	// addi r5,r5,-30640
	ctx.r5.s64 = ctx.r5.s64 + -30640;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// addi r6,r6,-30768
	ctx.r6.s64 = ctx.r6.s64 + -30768;
	// ld r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// addi r7,r7,-30896
	ctx.r7.s64 = ctx.r7.s64 + -30896;
	// addi r8,r8,-31160
	ctx.r8.s64 = ctx.r8.s64 + -31160;
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
	// addi r9,r9,-31288
	ctx.r9.s64 = ctx.r9.s64 + -31288;
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
	// b 0x82d5c4fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83048DE0"))) PPC_WEAK_FUNC(sub_83048DE0);
PPC_FUNC_IMPL(__imp__sub_83048DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r11,-15048
	ctx.r11.s64 = ctx.r11.s64 + -15048;
	// addi r10,r10,-15176
	ctx.r10.s64 = ctx.r10.s64 + -15176;
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
	// addi r11,r11,-24796
	ctx.r11.s64 = ctx.r11.s64 + -24796;
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

__attribute__((alias("__imp__sub_83048E30"))) PPC_WEAK_FUNC(sub_83048E30);
PPC_FUNC_IMPL(__imp__sub_83048E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r11,-15048
	ctx.r11.s64 = ctx.r11.s64 + -15048;
	// addi r10,r10,-15176
	ctx.r10.s64 = ctx.r10.s64 + -15176;
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
	// addi r11,r11,-21268
	ctx.r11.s64 = ctx.r11.s64 + -21268;
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

__attribute__((alias("__imp__sub_83048E80"))) PPC_WEAK_FUNC(sub_83048E80);
PPC_FUNC_IMPL(__imp__sub_83048E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r11,-13848
	ctx.r11.s64 = ctx.r11.s64 + -13848;
	// addi r10,r10,-14288
	ctx.r10.s64 = ctx.r10.s64 + -14288;
	// lis r7,-32207
	ctx.r7.s64 = -2110717952;
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// addi r7,r7,-22776
	ctx.r7.s64 = ctx.r7.s64 + -22776;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r8,r8,-13992
	ctx.r8.s64 = ctx.r8.s64 + -13992;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// addi r9,r9,-14160
	ctx.r9.s64 = ctx.r9.s64 + -14160;
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
	// addi r11,r11,-20208
	ctx.r11.s64 = ctx.r11.s64 + -20208;
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

__attribute__((alias("__imp__sub_83048F18"))) PPC_WEAK_FUNC(sub_83048F18);
PPC_FUNC_IMPL(__imp__sub_83048F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r11,-14432
	ctx.r11.s64 = ctx.r11.s64 + -14432;
	// addi r10,r10,-14872
	ctx.r10.s64 = ctx.r10.s64 + -14872;
	// lis r7,-32152
	ctx.r7.s64 = -2107113472;
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// addi r7,r7,3864
	ctx.r7.s64 = ctx.r7.s64 + 3864;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r8,r8,-14576
	ctx.r8.s64 = ctx.r8.s64 + -14576;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// stw r7,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r7.u32);
	// addi r9,r9,-14744
	ctx.r9.s64 = ctx.r9.s64 + -14744;
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
	// addi r11,r11,-20136
	ctx.r11.s64 = ctx.r11.s64 + -20136;
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

__attribute__((alias("__imp__sub_83048FB0"))) PPC_WEAK_FUNC(sub_83048FB0);
PPC_FUNC_IMPL(__imp__sub_83048FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// addi r11,r11,-12608
	ctx.r11.s64 = ctx.r11.s64 + -12608;
	// addi r10,r10,-12872
	ctx.r10.s64 = ctx.r10.s64 + -12872;
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
	// addi r11,r11,-21304
	ctx.r11.s64 = ctx.r11.s64 + -21304;
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

__attribute__((alias("__imp__sub_83049000"))) PPC_WEAK_FUNC(sub_83049000);
PPC_FUNC_IMPL(__imp__sub_83049000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,4640
	ctx.r11.s64 = ctx.r11.s64 + 4640;
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

