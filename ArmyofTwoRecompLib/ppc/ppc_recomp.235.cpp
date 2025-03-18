#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83063208"))) PPC_WEAK_FUNC(sub_83063208);
PPC_FUNC_IMPL(__imp__sub_83063208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2452
	ctx.r4.s64 = ctx.r11.s64 + -2452;
	// bl 0x824215d0
	ctx.lr = 0x83063224;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,914(r11)
	PPC_STORE_U8(ctx.r11.u32 + 914, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063240"))) PPC_WEAK_FUNC(sub_83063240);
PPC_FUNC_IMPL(__imp__sub_83063240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2448
	ctx.r4.s64 = ctx.r11.s64 + -2448;
	// bl 0x824215d0
	ctx.lr = 0x8306325C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1632(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1632, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063278"))) PPC_WEAK_FUNC(sub_83063278);
PPC_FUNC_IMPL(__imp__sub_83063278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2444
	ctx.r4.s64 = ctx.r11.s64 + -2444;
	// bl 0x824215d0
	ctx.lr = 0x83063294;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2351(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2351, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830632B0"))) PPC_WEAK_FUNC(sub_830632B0);
PPC_FUNC_IMPL(__imp__sub_830632B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2440
	ctx.r4.s64 = ctx.r11.s64 + -2440;
	// bl 0x824215d0
	ctx.lr = 0x830632CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3035(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3035, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830632E8"))) PPC_WEAK_FUNC(sub_830632E8);
PPC_FUNC_IMPL(__imp__sub_830632E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2436
	ctx.r4.s64 = ctx.r11.s64 + -2436;
	// bl 0x824215d0
	ctx.lr = 0x83063304;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1307(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1307, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063320"))) PPC_WEAK_FUNC(sub_83063320);
PPC_FUNC_IMPL(__imp__sub_83063320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2432
	ctx.r4.s64 = ctx.r11.s64 + -2432;
	// bl 0x824215d0
	ctx.lr = 0x8306333C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1479(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1479, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063358"))) PPC_WEAK_FUNC(sub_83063358);
PPC_FUNC_IMPL(__imp__sub_83063358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2428
	ctx.r4.s64 = ctx.r11.s64 + -2428;
	// bl 0x824215d0
	ctx.lr = 0x83063374;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1375(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1375, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063390"))) PPC_WEAK_FUNC(sub_83063390);
PPC_FUNC_IMPL(__imp__sub_83063390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2424
	ctx.r4.s64 = ctx.r11.s64 + -2424;
	// bl 0x824215d0
	ctx.lr = 0x830633AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1138(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1138, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830633C8"))) PPC_WEAK_FUNC(sub_830633C8);
PPC_FUNC_IMPL(__imp__sub_830633C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2420
	ctx.r4.s64 = ctx.r11.s64 + -2420;
	// bl 0x824215d0
	ctx.lr = 0x830633E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063400"))) PPC_WEAK_FUNC(sub_83063400);
PPC_FUNC_IMPL(__imp__sub_83063400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2416
	ctx.r4.s64 = ctx.r11.s64 + -2416;
	// bl 0x824215d0
	ctx.lr = 0x8306341C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2511(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2511, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063438"))) PPC_WEAK_FUNC(sub_83063438);
PPC_FUNC_IMPL(__imp__sub_83063438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2412
	ctx.r4.s64 = ctx.r11.s64 + -2412;
	// bl 0x824215d0
	ctx.lr = 0x83063454;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063470"))) PPC_WEAK_FUNC(sub_83063470);
PPC_FUNC_IMPL(__imp__sub_83063470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2408
	ctx.r4.s64 = ctx.r11.s64 + -2408;
	// bl 0x824215d0
	ctx.lr = 0x8306348C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1013(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1013, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830634A8"))) PPC_WEAK_FUNC(sub_830634A8);
PPC_FUNC_IMPL(__imp__sub_830634A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2404
	ctx.r4.s64 = ctx.r11.s64 + -2404;
	// bl 0x824215d0
	ctx.lr = 0x830634C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1586(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1586, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830634E0"))) PPC_WEAK_FUNC(sub_830634E0);
PPC_FUNC_IMPL(__imp__sub_830634E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2400
	ctx.r4.s64 = ctx.r11.s64 + -2400;
	// bl 0x824215d0
	ctx.lr = 0x830634FC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1303(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1303, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063518"))) PPC_WEAK_FUNC(sub_83063518);
PPC_FUNC_IMPL(__imp__sub_83063518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2396
	ctx.r4.s64 = ctx.r11.s64 + -2396;
	// bl 0x824215d0
	ctx.lr = 0x83063534;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063550"))) PPC_WEAK_FUNC(sub_83063550);
PPC_FUNC_IMPL(__imp__sub_83063550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2392
	ctx.r4.s64 = ctx.r11.s64 + -2392;
	// bl 0x824215d0
	ctx.lr = 0x8306356C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2664(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2664, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063588"))) PPC_WEAK_FUNC(sub_83063588);
PPC_FUNC_IMPL(__imp__sub_83063588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,321
	ctx.r3.s64 = 321;
	// addi r4,r11,-2388
	ctx.r4.s64 = ctx.r11.s64 + -2388;
	// bl 0x824215d0
	ctx.lr = 0x830635A4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1364(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1364, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830635C0"))) PPC_WEAK_FUNC(sub_830635C0);
PPC_FUNC_IMPL(__imp__sub_830635C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,312
	ctx.r3.s64 = 312;
	// addi r4,r11,-2384
	ctx.r4.s64 = ctx.r11.s64 + -2384;
	// bl 0x824215d0
	ctx.lr = 0x830635DC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830635F8"))) PPC_WEAK_FUNC(sub_830635F8);
PPC_FUNC_IMPL(__imp__sub_830635F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,311
	ctx.r3.s64 = 311;
	// addi r4,r11,-2380
	ctx.r4.s64 = ctx.r11.s64 + -2380;
	// bl 0x824215d0
	ctx.lr = 0x83063614;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-210(r11)
	PPC_STORE_U8(ctx.r11.u32 + -210, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063630"))) PPC_WEAK_FUNC(sub_83063630);
PPC_FUNC_IMPL(__imp__sub_83063630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,309
	ctx.r3.s64 = 309;
	// addi r4,r11,-2376
	ctx.r4.s64 = ctx.r11.s64 + -2376;
	// bl 0x824215d0
	ctx.lr = 0x8306364C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2451(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2451, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063668"))) PPC_WEAK_FUNC(sub_83063668);
PPC_FUNC_IMPL(__imp__sub_83063668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,307
	ctx.r3.s64 = 307;
	// addi r4,r11,-2372
	ctx.r4.s64 = ctx.r11.s64 + -2372;
	// bl 0x824215d0
	ctx.lr = 0x83063684;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830636A0"))) PPC_WEAK_FUNC(sub_830636A0);
PPC_FUNC_IMPL(__imp__sub_830636A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,306
	ctx.r3.s64 = 306;
	// addi r4,r11,-2368
	ctx.r4.s64 = ctx.r11.s64 + -2368;
	// bl 0x824215d0
	ctx.lr = 0x830636BC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1245(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1245, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830636D8"))) PPC_WEAK_FUNC(sub_830636D8);
PPC_FUNC_IMPL(__imp__sub_830636D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,305
	ctx.r3.s64 = 305;
	// addi r4,r11,-2364
	ctx.r4.s64 = ctx.r11.s64 + -2364;
	// bl 0x824215d0
	ctx.lr = 0x830636F4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-187(r11)
	PPC_STORE_U8(ctx.r11.u32 + -187, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063710"))) PPC_WEAK_FUNC(sub_83063710);
PPC_FUNC_IMPL(__imp__sub_83063710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,313
	ctx.r3.s64 = 313;
	// addi r4,r11,-2360
	ctx.r4.s64 = ctx.r11.s64 + -2360;
	// bl 0x824215d0
	ctx.lr = 0x8306372C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063748"))) PPC_WEAK_FUNC(sub_83063748);
PPC_FUNC_IMPL(__imp__sub_83063748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,304
	ctx.r3.s64 = 304;
	// addi r4,r11,-2356
	ctx.r4.s64 = ctx.r11.s64 + -2356;
	// bl 0x824215d0
	ctx.lr = 0x83063764;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063780"))) PPC_WEAK_FUNC(sub_83063780);
PPC_FUNC_IMPL(__imp__sub_83063780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,547
	ctx.r3.s64 = 547;
	// addi r4,r11,-2352
	ctx.r4.s64 = ctx.r11.s64 + -2352;
	// bl 0x824215d0
	ctx.lr = 0x8306379C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830637B8"))) PPC_WEAK_FUNC(sub_830637B8);
PPC_FUNC_IMPL(__imp__sub_830637B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2348
	ctx.r4.s64 = ctx.r11.s64 + -2348;
	// bl 0x824215d0
	ctx.lr = 0x830637D4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-940(r11)
	PPC_STORE_U8(ctx.r11.u32 + -940, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830637F0"))) PPC_WEAK_FUNC(sub_830637F0);
PPC_FUNC_IMPL(__imp__sub_830637F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2344
	ctx.r4.s64 = ctx.r11.s64 + -2344;
	// bl 0x824215d0
	ctx.lr = 0x8306380C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,737(r11)
	PPC_STORE_U8(ctx.r11.u32 + 737, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063828"))) PPC_WEAK_FUNC(sub_83063828);
PPC_FUNC_IMPL(__imp__sub_83063828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,532
	ctx.r3.s64 = 532;
	// addi r4,r11,-2340
	ctx.r4.s64 = ctx.r11.s64 + -2340;
	// bl 0x824215d0
	ctx.lr = 0x83063844;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2428(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2428, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063860"))) PPC_WEAK_FUNC(sub_83063860);
PPC_FUNC_IMPL(__imp__sub_83063860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,512
	ctx.r3.s64 = 512;
	// addi r4,r11,-2336
	ctx.r4.s64 = ctx.r11.s64 + -2336;
	// bl 0x824215d0
	ctx.lr = 0x8306387C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063898"))) PPC_WEAK_FUNC(sub_83063898);
PPC_FUNC_IMPL(__imp__sub_83063898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2332
	ctx.r4.s64 = ctx.r11.s64 + -2332;
	// bl 0x824215d0
	ctx.lr = 0x830638B4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1105(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1105, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830638D0"))) PPC_WEAK_FUNC(sub_830638D0);
PPC_FUNC_IMPL(__imp__sub_830638D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2328
	ctx.r4.s64 = ctx.r11.s64 + -2328;
	// bl 0x824215d0
	ctx.lr = 0x830638EC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063908"))) PPC_WEAK_FUNC(sub_83063908);
PPC_FUNC_IMPL(__imp__sub_83063908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2324
	ctx.r4.s64 = ctx.r11.s64 + -2324;
	// bl 0x824215d0
	ctx.lr = 0x83063924;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1308(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1308, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063940"))) PPC_WEAK_FUNC(sub_83063940);
PPC_FUNC_IMPL(__imp__sub_83063940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2320
	ctx.r4.s64 = ctx.r11.s64 + -2320;
	// bl 0x824215d0
	ctx.lr = 0x8306395C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,974(r11)
	PPC_STORE_U8(ctx.r11.u32 + 974, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063978"))) PPC_WEAK_FUNC(sub_83063978);
PPC_FUNC_IMPL(__imp__sub_83063978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2316
	ctx.r4.s64 = ctx.r11.s64 + -2316;
	// bl 0x824215d0
	ctx.lr = 0x83063994;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-835(r11)
	PPC_STORE_U8(ctx.r11.u32 + -835, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830639B0"))) PPC_WEAK_FUNC(sub_830639B0);
PPC_FUNC_IMPL(__imp__sub_830639B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2312
	ctx.r4.s64 = ctx.r11.s64 + -2312;
	// bl 0x824215d0
	ctx.lr = 0x830639CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830639E8"))) PPC_WEAK_FUNC(sub_830639E8);
PPC_FUNC_IMPL(__imp__sub_830639E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,280
	ctx.r3.s64 = 280;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// bl 0x824215d0
	ctx.lr = 0x83063A04;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1281(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1281, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063A20"))) PPC_WEAK_FUNC(sub_83063A20);
PPC_FUNC_IMPL(__imp__sub_83063A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,279
	ctx.r3.s64 = 279;
	// addi r4,r11,-2304
	ctx.r4.s64 = ctx.r11.s64 + -2304;
	// bl 0x824215d0
	ctx.lr = 0x83063A3C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1272(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1272, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063A58"))) PPC_WEAK_FUNC(sub_83063A58);
PPC_FUNC_IMPL(__imp__sub_83063A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,278
	ctx.r3.s64 = 278;
	// addi r4,r11,-2300
	ctx.r4.s64 = ctx.r11.s64 + -2300;
	// bl 0x824215d0
	ctx.lr = 0x83063A74;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063A90"))) PPC_WEAK_FUNC(sub_83063A90);
PPC_FUNC_IMPL(__imp__sub_83063A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2296
	ctx.r4.s64 = ctx.r11.s64 + -2296;
	// bl 0x824215d0
	ctx.lr = 0x83063AAC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063AC8"))) PPC_WEAK_FUNC(sub_83063AC8);
PPC_FUNC_IMPL(__imp__sub_83063AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2292
	ctx.r4.s64 = ctx.r11.s64 + -2292;
	// bl 0x824215d0
	ctx.lr = 0x83063AE4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3037(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3037, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063B00"))) PPC_WEAK_FUNC(sub_83063B00);
PPC_FUNC_IMPL(__imp__sub_83063B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2288
	ctx.r4.s64 = ctx.r11.s64 + -2288;
	// bl 0x824215d0
	ctx.lr = 0x83063B1C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1971(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1971, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063B38"))) PPC_WEAK_FUNC(sub_83063B38);
PPC_FUNC_IMPL(__imp__sub_83063B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2284
	ctx.r4.s64 = ctx.r11.s64 + -2284;
	// bl 0x824215d0
	ctx.lr = 0x83063B54;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1277(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1277, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063B70"))) PPC_WEAK_FUNC(sub_83063B70);
PPC_FUNC_IMPL(__imp__sub_83063B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2280
	ctx.r4.s64 = ctx.r11.s64 + -2280;
	// bl 0x824215d0
	ctx.lr = 0x83063B8C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063BA8"))) PPC_WEAK_FUNC(sub_83063BA8);
PPC_FUNC_IMPL(__imp__sub_83063BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2276
	ctx.r4.s64 = ctx.r11.s64 + -2276;
	// bl 0x824215d0
	ctx.lr = 0x83063BC4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3450(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3450, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063BE0"))) PPC_WEAK_FUNC(sub_83063BE0);
PPC_FUNC_IMPL(__imp__sub_83063BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,548
	ctx.r3.s64 = 548;
	// addi r4,r11,-2272
	ctx.r4.s64 = ctx.r11.s64 + -2272;
	// bl 0x824215d0
	ctx.lr = 0x83063BFC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063C18"))) PPC_WEAK_FUNC(sub_83063C18);
PPC_FUNC_IMPL(__imp__sub_83063C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2268
	ctx.r4.s64 = ctx.r11.s64 + -2268;
	// bl 0x824215d0
	ctx.lr = 0x83063C34;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2492(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2492, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063C50"))) PPC_WEAK_FUNC(sub_83063C50);
PPC_FUNC_IMPL(__imp__sub_83063C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// bl 0x824215d0
	ctx.lr = 0x83063C6C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-315(r11)
	PPC_STORE_U8(ctx.r11.u32 + -315, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063C88"))) PPC_WEAK_FUNC(sub_83063C88);
PPC_FUNC_IMPL(__imp__sub_83063C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2260
	ctx.r4.s64 = ctx.r11.s64 + -2260;
	// bl 0x824215d0
	ctx.lr = 0x83063CA4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3133(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3133, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063CC0"))) PPC_WEAK_FUNC(sub_83063CC0);
PPC_FUNC_IMPL(__imp__sub_83063CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2256
	ctx.r4.s64 = ctx.r11.s64 + -2256;
	// bl 0x824215d0
	ctx.lr = 0x83063CDC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2405(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2405, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063CF8"))) PPC_WEAK_FUNC(sub_83063CF8);
PPC_FUNC_IMPL(__imp__sub_83063CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2252
	ctx.r4.s64 = ctx.r11.s64 + -2252;
	// bl 0x824215d0
	ctx.lr = 0x83063D14;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063D30"))) PPC_WEAK_FUNC(sub_83063D30);
PPC_FUNC_IMPL(__imp__sub_83063D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2248
	ctx.r4.s64 = ctx.r11.s64 + -2248;
	// bl 0x824215d0
	ctx.lr = 0x83063D4C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1434(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1434, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063D68"))) PPC_WEAK_FUNC(sub_83063D68);
PPC_FUNC_IMPL(__imp__sub_83063D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,277
	ctx.r3.s64 = 277;
	// addi r4,r11,-2244
	ctx.r4.s64 = ctx.r11.s64 + -2244;
	// bl 0x824215d0
	ctx.lr = 0x83063D84;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-716(r11)
	PPC_STORE_U8(ctx.r11.u32 + -716, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063DA0"))) PPC_WEAK_FUNC(sub_83063DA0);
PPC_FUNC_IMPL(__imp__sub_83063DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2240
	ctx.r4.s64 = ctx.r11.s64 + -2240;
	// bl 0x824215d0
	ctx.lr = 0x83063DBC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1139(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1139, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063DD8"))) PPC_WEAK_FUNC(sub_83063DD8);
PPC_FUNC_IMPL(__imp__sub_83063DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2236
	ctx.r4.s64 = ctx.r11.s64 + -2236;
	// bl 0x824215d0
	ctx.lr = 0x83063DF4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063E10"))) PPC_WEAK_FUNC(sub_83063E10);
PPC_FUNC_IMPL(__imp__sub_83063E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2232
	ctx.r4.s64 = ctx.r11.s64 + -2232;
	// bl 0x824215d0
	ctx.lr = 0x83063E2C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2584(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2584, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063E48"))) PPC_WEAK_FUNC(sub_83063E48);
PPC_FUNC_IMPL(__imp__sub_83063E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2228
	ctx.r4.s64 = ctx.r11.s64 + -2228;
	// bl 0x824215d0
	ctx.lr = 0x83063E64;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063E80"))) PPC_WEAK_FUNC(sub_83063E80);
PPC_FUNC_IMPL(__imp__sub_83063E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2224
	ctx.r4.s64 = ctx.r11.s64 + -2224;
	// bl 0x824215d0
	ctx.lr = 0x83063E9C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1209(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1209, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063EB8"))) PPC_WEAK_FUNC(sub_83063EB8);
PPC_FUNC_IMPL(__imp__sub_83063EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2220
	ctx.r4.s64 = ctx.r11.s64 + -2220;
	// bl 0x824215d0
	ctx.lr = 0x83063ED4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1053(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1053, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063EF0"))) PPC_WEAK_FUNC(sub_83063EF0);
PPC_FUNC_IMPL(__imp__sub_83063EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,3970
	ctx.r3.s64 = 3970;
	// addi r4,r11,-2216
	ctx.r4.s64 = ctx.r11.s64 + -2216;
	// bl 0x824215d0
	ctx.lr = 0x83063F0C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1964(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1964, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063F28"))) PPC_WEAK_FUNC(sub_83063F28);
PPC_FUNC_IMPL(__imp__sub_83063F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2212
	ctx.r4.s64 = ctx.r11.s64 + -2212;
	// bl 0x824215d0
	ctx.lr = 0x83063F44;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2405(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2405, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063F60"))) PPC_WEAK_FUNC(sub_83063F60);
PPC_FUNC_IMPL(__imp__sub_83063F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2208
	ctx.r4.s64 = ctx.r11.s64 + -2208;
	// bl 0x824215d0
	ctx.lr = 0x83063F7C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83063F98"))) PPC_WEAK_FUNC(sub_83063F98);
PPC_FUNC_IMPL(__imp__sub_83063F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2204
	ctx.r4.s64 = ctx.r11.s64 + -2204;
	// bl 0x824215d0
	ctx.lr = 0x83063FB4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2899(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2899, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063FD0"))) PPC_WEAK_FUNC(sub_83063FD0);
PPC_FUNC_IMPL(__imp__sub_83063FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2200
	ctx.r4.s64 = ctx.r11.s64 + -2200;
	// bl 0x824215d0
	ctx.lr = 0x83063FEC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,188(r11)
	PPC_STORE_U8(ctx.r11.u32 + 188, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064008"))) PPC_WEAK_FUNC(sub_83064008);
PPC_FUNC_IMPL(__imp__sub_83064008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2196
	ctx.r4.s64 = ctx.r11.s64 + -2196;
	// bl 0x824215d0
	ctx.lr = 0x83064024;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2005(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2005, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064040"))) PPC_WEAK_FUNC(sub_83064040);
PPC_FUNC_IMPL(__imp__sub_83064040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2192
	ctx.r4.s64 = ctx.r11.s64 + -2192;
	// bl 0x824215d0
	ctx.lr = 0x8306405C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064078"))) PPC_WEAK_FUNC(sub_83064078);
PPC_FUNC_IMPL(__imp__sub_83064078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2188
	ctx.r4.s64 = ctx.r11.s64 + -2188;
	// bl 0x824215d0
	ctx.lr = 0x83064094;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830640B0"))) PPC_WEAK_FUNC(sub_830640B0);
PPC_FUNC_IMPL(__imp__sub_830640B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2184
	ctx.r4.s64 = ctx.r11.s64 + -2184;
	// bl 0x824215d0
	ctx.lr = 0x830640CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830640E8"))) PPC_WEAK_FUNC(sub_830640E8);
PPC_FUNC_IMPL(__imp__sub_830640E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2180
	ctx.r4.s64 = ctx.r11.s64 + -2180;
	// bl 0x824215d0
	ctx.lr = 0x83064104;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1449(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1449, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064120"))) PPC_WEAK_FUNC(sub_83064120);
PPC_FUNC_IMPL(__imp__sub_83064120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2176
	ctx.r4.s64 = ctx.r11.s64 + -2176;
	// bl 0x824215d0
	ctx.lr = 0x8306413C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3287(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3287, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064158"))) PPC_WEAK_FUNC(sub_83064158);
PPC_FUNC_IMPL(__imp__sub_83064158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2172
	ctx.r4.s64 = ctx.r11.s64 + -2172;
	// bl 0x824215d0
	ctx.lr = 0x83064174;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3015(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3015, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064190"))) PPC_WEAK_FUNC(sub_83064190);
PPC_FUNC_IMPL(__imp__sub_83064190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2168
	ctx.r4.s64 = ctx.r11.s64 + -2168;
	// bl 0x824215d0
	ctx.lr = 0x830641AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1014(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1014, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830641C8"))) PPC_WEAK_FUNC(sub_830641C8);
PPC_FUNC_IMPL(__imp__sub_830641C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2164
	ctx.r4.s64 = ctx.r11.s64 + -2164;
	// bl 0x824215d0
	ctx.lr = 0x830641E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1478(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1478, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064200"))) PPC_WEAK_FUNC(sub_83064200);
PPC_FUNC_IMPL(__imp__sub_83064200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2160
	ctx.r4.s64 = ctx.r11.s64 + -2160;
	// bl 0x824215d0
	ctx.lr = 0x8306421C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3126(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3126, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064238"))) PPC_WEAK_FUNC(sub_83064238);
PPC_FUNC_IMPL(__imp__sub_83064238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2156
	ctx.r4.s64 = ctx.r11.s64 + -2156;
	// bl 0x824215d0
	ctx.lr = 0x83064254;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1374(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1374, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064270"))) PPC_WEAK_FUNC(sub_83064270);
PPC_FUNC_IMPL(__imp__sub_83064270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2152
	ctx.r4.s64 = ctx.r11.s64 + -2152;
	// bl 0x824215d0
	ctx.lr = 0x8306428C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,490(r11)
	PPC_STORE_U8(ctx.r11.u32 + 490, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830642A8"))) PPC_WEAK_FUNC(sub_830642A8);
PPC_FUNC_IMPL(__imp__sub_830642A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2148
	ctx.r4.s64 = ctx.r11.s64 + -2148;
	// bl 0x824215d0
	ctx.lr = 0x830642C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1602(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1602, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830642E0"))) PPC_WEAK_FUNC(sub_830642E0);
PPC_FUNC_IMPL(__imp__sub_830642E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2144
	ctx.r4.s64 = ctx.r11.s64 + -2144;
	// bl 0x824215d0
	ctx.lr = 0x830642FC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1702(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1702, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064318"))) PPC_WEAK_FUNC(sub_83064318);
PPC_FUNC_IMPL(__imp__sub_83064318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2140
	ctx.r4.s64 = ctx.r11.s64 + -2140;
	// bl 0x824215d0
	ctx.lr = 0x83064334;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3130(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3130, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064350"))) PPC_WEAK_FUNC(sub_83064350);
PPC_FUNC_IMPL(__imp__sub_83064350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2136
	ctx.r4.s64 = ctx.r11.s64 + -2136;
	// bl 0x824215d0
	ctx.lr = 0x8306436C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1558(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1558, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064388"))) PPC_WEAK_FUNC(sub_83064388);
PPC_FUNC_IMPL(__imp__sub_83064388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2132
	ctx.r4.s64 = ctx.r11.s64 + -2132;
	// bl 0x824215d0
	ctx.lr = 0x830643A4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830643C0"))) PPC_WEAK_FUNC(sub_830643C0);
PPC_FUNC_IMPL(__imp__sub_830643C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,272
	ctx.r3.s64 = 272;
	// addi r4,r11,-2128
	ctx.r4.s64 = ctx.r11.s64 + -2128;
	// bl 0x824215d0
	ctx.lr = 0x830643DC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830643F8"))) PPC_WEAK_FUNC(sub_830643F8);
PPC_FUNC_IMPL(__imp__sub_830643F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,298
	ctx.r3.s64 = 298;
	// addi r4,r11,-2124
	ctx.r4.s64 = ctx.r11.s64 + -2124;
	// bl 0x824215d0
	ctx.lr = 0x83064414;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3448(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3448, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064430"))) PPC_WEAK_FUNC(sub_83064430);
PPC_FUNC_IMPL(__imp__sub_83064430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2120
	ctx.r4.s64 = ctx.r11.s64 + -2120;
	// bl 0x824215d0
	ctx.lr = 0x8306444C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1207(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1207, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064468"))) PPC_WEAK_FUNC(sub_83064468);
PPC_FUNC_IMPL(__imp__sub_83064468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,3971
	ctx.r3.s64 = 3971;
	// addi r4,r11,-2116
	ctx.r4.s64 = ctx.r11.s64 + -2116;
	// bl 0x824215d0
	ctx.lr = 0x83064484;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,772(r11)
	PPC_STORE_U8(ctx.r11.u32 + 772, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830644A0"))) PPC_WEAK_FUNC(sub_830644A0);
PPC_FUNC_IMPL(__imp__sub_830644A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,3969
	ctx.r3.s64 = 3969;
	// addi r4,r11,-2112
	ctx.r4.s64 = ctx.r11.s64 + -2112;
	// bl 0x824215d0
	ctx.lr = 0x830644BC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1630(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1630, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830644D8"))) PPC_WEAK_FUNC(sub_830644D8);
PPC_FUNC_IMPL(__imp__sub_830644D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2108
	ctx.r4.s64 = ctx.r11.s64 + -2108;
	// bl 0x824215d0
	ctx.lr = 0x830644F4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1205(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1205, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064510"))) PPC_WEAK_FUNC(sub_83064510);
PPC_FUNC_IMPL(__imp__sub_83064510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2104
	ctx.r4.s64 = ctx.r11.s64 + -2104;
	// bl 0x824215d0
	ctx.lr = 0x8306452C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,912(r11)
	PPC_STORE_U8(ctx.r11.u32 + 912, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064548"))) PPC_WEAK_FUNC(sub_83064548);
PPC_FUNC_IMPL(__imp__sub_83064548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2100
	ctx.r4.s64 = ctx.r11.s64 + -2100;
	// bl 0x824215d0
	ctx.lr = 0x83064564;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1690(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1690, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064580"))) PPC_WEAK_FUNC(sub_83064580);
PPC_FUNC_IMPL(__imp__sub_83064580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2096
	ctx.r4.s64 = ctx.r11.s64 + -2096;
	// bl 0x824215d0
	ctx.lr = 0x8306459C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830645B8"))) PPC_WEAK_FUNC(sub_830645B8);
PPC_FUNC_IMPL(__imp__sub_830645B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2092
	ctx.r4.s64 = ctx.r11.s64 + -2092;
	// bl 0x824215d0
	ctx.lr = 0x830645D4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3169(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3169, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830645F0"))) PPC_WEAK_FUNC(sub_830645F0);
PPC_FUNC_IMPL(__imp__sub_830645F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,299
	ctx.r3.s64 = 299;
	// addi r4,r11,-2088
	ctx.r4.s64 = ctx.r11.s64 + -2088;
	// bl 0x824215d0
	ctx.lr = 0x8306460C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064628"))) PPC_WEAK_FUNC(sub_83064628);
PPC_FUNC_IMPL(__imp__sub_83064628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,267
	ctx.r3.s64 = 267;
	// addi r4,r11,-2084
	ctx.r4.s64 = ctx.r11.s64 + -2084;
	// bl 0x824215d0
	ctx.lr = 0x83064644;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3533(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3533, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064660"))) PPC_WEAK_FUNC(sub_83064660);
PPC_FUNC_IMPL(__imp__sub_83064660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,266
	ctx.r3.s64 = 266;
	// addi r4,r11,-2080
	ctx.r4.s64 = ctx.r11.s64 + -2080;
	// bl 0x824215d0
	ctx.lr = 0x8306467C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2784(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2784, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064698"))) PPC_WEAK_FUNC(sub_83064698);
PPC_FUNC_IMPL(__imp__sub_83064698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2076
	ctx.r4.s64 = ctx.r11.s64 + -2076;
	// bl 0x824215d0
	ctx.lr = 0x830646B4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830646D0"))) PPC_WEAK_FUNC(sub_830646D0);
PPC_FUNC_IMPL(__imp__sub_830646D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2072
	ctx.r4.s64 = ctx.r11.s64 + -2072;
	// bl 0x824215d0
	ctx.lr = 0x830646EC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1435(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1435, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064708"))) PPC_WEAK_FUNC(sub_83064708);
PPC_FUNC_IMPL(__imp__sub_83064708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,283
	ctx.r3.s64 = 283;
	// addi r4,r11,-2068
	ctx.r4.s64 = ctx.r11.s64 + -2068;
	// bl 0x824215d0
	ctx.lr = 0x83064724;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2547(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2547, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064740"))) PPC_WEAK_FUNC(sub_83064740);
PPC_FUNC_IMPL(__imp__sub_83064740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,262
	ctx.r3.s64 = 262;
	// addi r4,r11,-2064
	ctx.r4.s64 = ctx.r11.s64 + -2064;
	// bl 0x824215d0
	ctx.lr = 0x8306475C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064778"))) PPC_WEAK_FUNC(sub_83064778);
PPC_FUNC_IMPL(__imp__sub_83064778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,261
	ctx.r3.s64 = 261;
	// addi r4,r11,-2060
	ctx.r4.s64 = ctx.r11.s64 + -2060;
	// bl 0x824215d0
	ctx.lr = 0x83064794;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2154(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2154, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830647B0"))) PPC_WEAK_FUNC(sub_830647B0);
PPC_FUNC_IMPL(__imp__sub_830647B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,256
	ctx.r3.s64 = 256;
	// addi r4,r11,-2056
	ctx.r4.s64 = ctx.r11.s64 + -2056;
	// bl 0x824215d0
	ctx.lr = 0x830647CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3504(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3504, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830647E8"))) PPC_WEAK_FUNC(sub_830647E8);
PPC_FUNC_IMPL(__imp__sub_830647E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2052
	ctx.r4.s64 = ctx.r11.s64 + -2052;
	// bl 0x824215d0
	ctx.lr = 0x83064804;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064820"))) PPC_WEAK_FUNC(sub_83064820);
PPC_FUNC_IMPL(__imp__sub_83064820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2048
	ctx.r4.s64 = ctx.r11.s64 + -2048;
	// bl 0x824215d0
	ctx.lr = 0x8306483C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064858"))) PPC_WEAK_FUNC(sub_83064858);
PPC_FUNC_IMPL(__imp__sub_83064858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2044
	ctx.r4.s64 = ctx.r11.s64 + -2044;
	// bl 0x824215d0
	ctx.lr = 0x83064874;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-37(r11)
	PPC_STORE_U8(ctx.r11.u32 + -37, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064890"))) PPC_WEAK_FUNC(sub_83064890);
PPC_FUNC_IMPL(__imp__sub_83064890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2040
	ctx.r4.s64 = ctx.r11.s64 + -2040;
	// bl 0x824215d0
	ctx.lr = 0x830648AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-834(r11)
	PPC_STORE_U8(ctx.r11.u32 + -834, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830648C8"))) PPC_WEAK_FUNC(sub_830648C8);
PPC_FUNC_IMPL(__imp__sub_830648C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2036
	ctx.r4.s64 = ctx.r11.s64 + -2036;
	// bl 0x824215d0
	ctx.lr = 0x830648E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3032(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3032, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064900"))) PPC_WEAK_FUNC(sub_83064900);
PPC_FUNC_IMPL(__imp__sub_83064900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2032
	ctx.r4.s64 = ctx.r11.s64 + -2032;
	// bl 0x824215d0
	ctx.lr = 0x8306491C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1001(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1001, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064938"))) PPC_WEAK_FUNC(sub_83064938);
PPC_FUNC_IMPL(__imp__sub_83064938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2028
	ctx.r4.s64 = ctx.r11.s64 + -2028;
	// bl 0x824215d0
	ctx.lr = 0x83064954;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-371(r11)
	PPC_STORE_U8(ctx.r11.u32 + -371, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064970"))) PPC_WEAK_FUNC(sub_83064970);
PPC_FUNC_IMPL(__imp__sub_83064970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2024
	ctx.r4.s64 = ctx.r11.s64 + -2024;
	// bl 0x824215d0
	ctx.lr = 0x8306498C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830649A8"))) PPC_WEAK_FUNC(sub_830649A8);
PPC_FUNC_IMPL(__imp__sub_830649A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2020
	ctx.r4.s64 = ctx.r11.s64 + -2020;
	// bl 0x824215d0
	ctx.lr = 0x830649C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830649E0"))) PPC_WEAK_FUNC(sub_830649E0);
PPC_FUNC_IMPL(__imp__sub_830649E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2016
	ctx.r4.s64 = ctx.r11.s64 + -2016;
	// bl 0x824215d0
	ctx.lr = 0x830649FC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1906(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1906, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064A18"))) PPC_WEAK_FUNC(sub_83064A18);
PPC_FUNC_IMPL(__imp__sub_83064A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2012
	ctx.r4.s64 = ctx.r11.s64 + -2012;
	// bl 0x824215d0
	ctx.lr = 0x83064A34;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,975(r11)
	PPC_STORE_U8(ctx.r11.u32 + 975, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064A50"))) PPC_WEAK_FUNC(sub_83064A50);
PPC_FUNC_IMPL(__imp__sub_83064A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2008
	ctx.r4.s64 = ctx.r11.s64 + -2008;
	// bl 0x824215d0
	ctx.lr = 0x83064A6C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1419(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1419, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064A88"))) PPC_WEAK_FUNC(sub_83064A88);
PPC_FUNC_IMPL(__imp__sub_83064A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2004
	ctx.r4.s64 = ctx.r11.s64 + -2004;
	// bl 0x824215d0
	ctx.lr = 0x83064AA4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-62(r11)
	PPC_STORE_U8(ctx.r11.u32 + -62, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064AC0"))) PPC_WEAK_FUNC(sub_83064AC0);
PPC_FUNC_IMPL(__imp__sub_83064AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2000
	ctx.r4.s64 = ctx.r11.s64 + -2000;
	// bl 0x824215d0
	ctx.lr = 0x83064ADC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1064(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1064, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064AF8"))) PPC_WEAK_FUNC(sub_83064AF8);
PPC_FUNC_IMPL(__imp__sub_83064AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1996
	ctx.r4.s64 = ctx.r11.s64 + -1996;
	// bl 0x824215d0
	ctx.lr = 0x83064B14;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064B30"))) PPC_WEAK_FUNC(sub_83064B30);
PPC_FUNC_IMPL(__imp__sub_83064B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1992
	ctx.r4.s64 = ctx.r11.s64 + -1992;
	// bl 0x824215d0
	ctx.lr = 0x83064B4C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064B68"))) PPC_WEAK_FUNC(sub_83064B68);
PPC_FUNC_IMPL(__imp__sub_83064B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1988
	ctx.r4.s64 = ctx.r11.s64 + -1988;
	// bl 0x824215d0
	ctx.lr = 0x83064B84;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064BA0"))) PPC_WEAK_FUNC(sub_83064BA0);
PPC_FUNC_IMPL(__imp__sub_83064BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1984
	ctx.r4.s64 = ctx.r11.s64 + -1984;
	// bl 0x824215d0
	ctx.lr = 0x83064BBC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1792(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1792, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064BD8"))) PPC_WEAK_FUNC(sub_83064BD8);
PPC_FUNC_IMPL(__imp__sub_83064BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1980
	ctx.r4.s64 = ctx.r11.s64 + -1980;
	// bl 0x824215d0
	ctx.lr = 0x83064BF4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064C10"))) PPC_WEAK_FUNC(sub_83064C10);
PPC_FUNC_IMPL(__imp__sub_83064C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1976
	ctx.r4.s64 = ctx.r11.s64 + -1976;
	// bl 0x824215d0
	ctx.lr = 0x83064C2C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1213(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1213, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064C48"))) PPC_WEAK_FUNC(sub_83064C48);
PPC_FUNC_IMPL(__imp__sub_83064C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1972
	ctx.r4.s64 = ctx.r11.s64 + -1972;
	// bl 0x824215d0
	ctx.lr = 0x83064C64;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,619(r11)
	PPC_STORE_U8(ctx.r11.u32 + 619, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064C80"))) PPC_WEAK_FUNC(sub_83064C80);
PPC_FUNC_IMPL(__imp__sub_83064C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,527
	ctx.r3.s64 = 527;
	// addi r4,r11,-1968
	ctx.r4.s64 = ctx.r11.s64 + -1968;
	// bl 0x824215d0
	ctx.lr = 0x83064C9C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064CB8"))) PPC_WEAK_FUNC(sub_83064CB8);
PPC_FUNC_IMPL(__imp__sub_83064CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,526
	ctx.r3.s64 = 526;
	// addi r4,r11,-1964
	ctx.r4.s64 = ctx.r11.s64 + -1964;
	// bl 0x824215d0
	ctx.lr = 0x83064CD4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064CF0"))) PPC_WEAK_FUNC(sub_83064CF0);
PPC_FUNC_IMPL(__imp__sub_83064CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,520
	ctx.r3.s64 = 520;
	// addi r4,r11,-1960
	ctx.r4.s64 = ctx.r11.s64 + -1960;
	// bl 0x824215d0
	ctx.lr = 0x83064D0C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1972(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1972, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064D28"))) PPC_WEAK_FUNC(sub_83064D28);
PPC_FUNC_IMPL(__imp__sub_83064D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,521
	ctx.r3.s64 = 521;
	// addi r4,r11,-1956
	ctx.r4.s64 = ctx.r11.s64 + -1956;
	// bl 0x824215d0
	ctx.lr = 0x83064D44;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1248(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1248, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064D60"))) PPC_WEAK_FUNC(sub_83064D60);
PPC_FUNC_IMPL(__imp__sub_83064D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1952
	ctx.r4.s64 = ctx.r11.s64 + -1952;
	// bl 0x824215d0
	ctx.lr = 0x83064D7C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2256(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2256, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064D98"))) PPC_WEAK_FUNC(sub_83064D98);
PPC_FUNC_IMPL(__imp__sub_83064D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,525
	ctx.r3.s64 = 525;
	// addi r4,r11,-1948
	ctx.r4.s64 = ctx.r11.s64 + -1948;
	// bl 0x824215d0
	ctx.lr = 0x83064DB4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064DD0"))) PPC_WEAK_FUNC(sub_83064DD0);
PPC_FUNC_IMPL(__imp__sub_83064DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1944
	ctx.r4.s64 = ctx.r11.s64 + -1944;
	// bl 0x824215d0
	ctx.lr = 0x83064DEC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064E08"))) PPC_WEAK_FUNC(sub_83064E08);
PPC_FUNC_IMPL(__imp__sub_83064E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,517
	ctx.r3.s64 = 517;
	// addi r4,r11,-1940
	ctx.r4.s64 = ctx.r11.s64 + -1940;
	// bl 0x824215d0
	ctx.lr = 0x83064E24;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064E40"))) PPC_WEAK_FUNC(sub_83064E40);
PPC_FUNC_IMPL(__imp__sub_83064E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,518
	ctx.r3.s64 = 518;
	// addi r4,r11,-1936
	ctx.r4.s64 = ctx.r11.s64 + -1936;
	// bl 0x824215d0
	ctx.lr = 0x83064E5C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2348(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2348, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064E78"))) PPC_WEAK_FUNC(sub_83064E78);
PPC_FUNC_IMPL(__imp__sub_83064E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,508
	ctx.r3.s64 = 508;
	// addi r4,r11,-1932
	ctx.r4.s64 = ctx.r11.s64 + -1932;
	// bl 0x824215d0
	ctx.lr = 0x83064E94;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,835(r11)
	PPC_STORE_U8(ctx.r11.u32 + 835, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064EB0"))) PPC_WEAK_FUNC(sub_83064EB0);
PPC_FUNC_IMPL(__imp__sub_83064EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,502
	ctx.r3.s64 = 502;
	// addi r4,r11,-1928
	ctx.r4.s64 = ctx.r11.s64 + -1928;
	// bl 0x824215d0
	ctx.lr = 0x83064ECC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064EE8"))) PPC_WEAK_FUNC(sub_83064EE8);
PPC_FUNC_IMPL(__imp__sub_83064EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,500
	ctx.r3.s64 = 500;
	// addi r4,r11,-1924
	ctx.r4.s64 = ctx.r11.s64 + -1924;
	// bl 0x824215d0
	ctx.lr = 0x83064F04;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83064F20"))) PPC_WEAK_FUNC(sub_83064F20);
PPC_FUNC_IMPL(__imp__sub_83064F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,531
	ctx.r3.s64 = 531;
	// addi r4,r11,-1920
	ctx.r4.s64 = ctx.r11.s64 + -1920;
	// bl 0x824215d0
	ctx.lr = 0x83064F3C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2300(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2300, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064F58"))) PPC_WEAK_FUNC(sub_83064F58);
PPC_FUNC_IMPL(__imp__sub_83064F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,537
	ctx.r3.s64 = 537;
	// addi r4,r11,-1916
	ctx.r4.s64 = ctx.r11.s64 + -1916;
	// bl 0x824215d0
	ctx.lr = 0x83064F74;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,773(r11)
	PPC_STORE_U8(ctx.r11.u32 + 773, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064F90"))) PPC_WEAK_FUNC(sub_83064F90);
PPC_FUNC_IMPL(__imp__sub_83064F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,533
	ctx.r3.s64 = 533;
	// addi r4,r11,-1912
	ctx.r4.s64 = ctx.r11.s64 + -1912;
	// bl 0x824215d0
	ctx.lr = 0x83064FAC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2002(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2002, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83064FC8"))) PPC_WEAK_FUNC(sub_83064FC8);
PPC_FUNC_IMPL(__imp__sub_83064FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1908
	ctx.r4.s64 = ctx.r11.s64 + -1908;
	// bl 0x824215d0
	ctx.lr = 0x83064FE4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1054(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1054, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065000"))) PPC_WEAK_FUNC(sub_83065000);
PPC_FUNC_IMPL(__imp__sub_83065000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1904
	ctx.r4.s64 = ctx.r11.s64 + -1904;
	// bl 0x824215d0
	ctx.lr = 0x8306501C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3210(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3210, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065038"))) PPC_WEAK_FUNC(sub_83065038);
PPC_FUNC_IMPL(__imp__sub_83065038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,514
	ctx.r3.s64 = 514;
	// addi r4,r11,-1900
	ctx.r4.s64 = ctx.r11.s64 + -1900;
	// bl 0x824215d0
	ctx.lr = 0x83065054;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83065070"))) PPC_WEAK_FUNC(sub_83065070);
PPC_FUNC_IMPL(__imp__sub_83065070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1896
	ctx.r4.s64 = ctx.r11.s64 + -1896;
	// bl 0x824215d0
	ctx.lr = 0x8306508C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-772(r11)
	PPC_STORE_U8(ctx.r11.u32 + -772, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830650A8"))) PPC_WEAK_FUNC(sub_830650A8);
PPC_FUNC_IMPL(__imp__sub_830650A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1892
	ctx.r4.s64 = ctx.r11.s64 + -1892;
	// bl 0x824215d0
	ctx.lr = 0x830650C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-833(r11)
	PPC_STORE_U8(ctx.r11.u32 + -833, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830650E0"))) PPC_WEAK_FUNC(sub_830650E0);
PPC_FUNC_IMPL(__imp__sub_830650E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1888
	ctx.r4.s64 = ctx.r11.s64 + -1888;
	// bl 0x824215d0
	ctx.lr = 0x830650FC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2379(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2379, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065118"))) PPC_WEAK_FUNC(sub_83065118);
PPC_FUNC_IMPL(__imp__sub_83065118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1884
	ctx.r4.s64 = ctx.r11.s64 + -1884;
	// bl 0x824215d0
	ctx.lr = 0x83065134;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1840(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1840, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065150"))) PPC_WEAK_FUNC(sub_83065150);
PPC_FUNC_IMPL(__imp__sub_83065150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1880
	ctx.r4.s64 = ctx.r11.s64 + -1880;
	// bl 0x824215d0
	ctx.lr = 0x8306516C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83065188"))) PPC_WEAK_FUNC(sub_83065188);
PPC_FUNC_IMPL(__imp__sub_83065188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1876
	ctx.r4.s64 = ctx.r11.s64 + -1876;
	// bl 0x824215d0
	ctx.lr = 0x830651A4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,684(r11)
	PPC_STORE_U8(ctx.r11.u32 + 684, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830651C0"))) PPC_WEAK_FUNC(sub_830651C0);
PPC_FUNC_IMPL(__imp__sub_830651C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1872
	ctx.r4.s64 = ctx.r11.s64 + -1872;
	// bl 0x824215d0
	ctx.lr = 0x830651DC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830651F8"))) PPC_WEAK_FUNC(sub_830651F8);
PPC_FUNC_IMPL(__imp__sub_830651F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1868
	ctx.r4.s64 = ctx.r11.s64 + -1868;
	// bl 0x824215d0
	ctx.lr = 0x83065214;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2235(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2235, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065230"))) PPC_WEAK_FUNC(sub_83065230);
PPC_FUNC_IMPL(__imp__sub_83065230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1864
	ctx.r4.s64 = ctx.r11.s64 + -1864;
	// bl 0x824215d0
	ctx.lr = 0x8306524C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83065268"))) PPC_WEAK_FUNC(sub_83065268);
PPC_FUNC_IMPL(__imp__sub_83065268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1860
	ctx.r4.s64 = ctx.r11.s64 + -1860;
	// bl 0x824215d0
	ctx.lr = 0x83065284;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,944(r11)
	PPC_STORE_U8(ctx.r11.u32 + 944, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830652A0"))) PPC_WEAK_FUNC(sub_830652A0);
PPC_FUNC_IMPL(__imp__sub_830652A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1856
	ctx.r4.s64 = ctx.r11.s64 + -1856;
	// bl 0x824215d0
	ctx.lr = 0x830652BC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830652D8"))) PPC_WEAK_FUNC(sub_830652D8);
PPC_FUNC_IMPL(__imp__sub_830652D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1852
	ctx.r4.s64 = ctx.r11.s64 + -1852;
	// bl 0x824215d0
	ctx.lr = 0x830652F4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-313(r11)
	PPC_STORE_U8(ctx.r11.u32 + -313, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065310"))) PPC_WEAK_FUNC(sub_83065310);
PPC_FUNC_IMPL(__imp__sub_83065310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1848
	ctx.r4.s64 = ctx.r11.s64 + -1848;
	// bl 0x824215d0
	ctx.lr = 0x8306532C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1751(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1751, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065348"))) PPC_WEAK_FUNC(sub_83065348);
PPC_FUNC_IMPL(__imp__sub_83065348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1844
	ctx.r4.s64 = ctx.r11.s64 + -1844;
	// bl 0x824215d0
	ctx.lr = 0x83065364;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2329(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2329, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065380"))) PPC_WEAK_FUNC(sub_83065380);
PPC_FUNC_IMPL(__imp__sub_83065380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1840
	ctx.r4.s64 = ctx.r11.s64 + -1840;
	// bl 0x824215d0
	ctx.lr = 0x8306539C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-49(r11)
	PPC_STORE_U8(ctx.r11.u32 + -49, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830653B8"))) PPC_WEAK_FUNC(sub_830653B8);
PPC_FUNC_IMPL(__imp__sub_830653B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1836
	ctx.r4.s64 = ctx.r11.s64 + -1836;
	// bl 0x824215d0
	ctx.lr = 0x830653D4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3058(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3058, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830653F0"))) PPC_WEAK_FUNC(sub_830653F0);
PPC_FUNC_IMPL(__imp__sub_830653F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1832
	ctx.r4.s64 = ctx.r11.s64 + -1832;
	// bl 0x824215d0
	ctx.lr = 0x8306540C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1844(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1844, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065428"))) PPC_WEAK_FUNC(sub_83065428);
PPC_FUNC_IMPL(__imp__sub_83065428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1828
	ctx.r4.s64 = ctx.r11.s64 + -1828;
	// bl 0x824215d0
	ctx.lr = 0x83065444;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1106(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1106, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065460"))) PPC_WEAK_FUNC(sub_83065460);
PPC_FUNC_IMPL(__imp__sub_83065460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1824
	ctx.r4.s64 = ctx.r11.s64 + -1824;
	// bl 0x824215d0
	ctx.lr = 0x8306547C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2454(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2454, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065498"))) PPC_WEAK_FUNC(sub_83065498);
PPC_FUNC_IMPL(__imp__sub_83065498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1820
	ctx.r4.s64 = ctx.r11.s64 + -1820;
	// bl 0x824215d0
	ctx.lr = 0x830654B4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1033(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1033, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830654D0"))) PPC_WEAK_FUNC(sub_830654D0);
PPC_FUNC_IMPL(__imp__sub_830654D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1816
	ctx.r4.s64 = ctx.r11.s64 + -1816;
	// bl 0x824215d0
	ctx.lr = 0x830654EC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,687(r11)
	PPC_STORE_U8(ctx.r11.u32 + 687, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065508"))) PPC_WEAK_FUNC(sub_83065508);
PPC_FUNC_IMPL(__imp__sub_83065508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1812
	ctx.r4.s64 = ctx.r11.s64 + -1812;
	// bl 0x824215d0
	ctx.lr = 0x83065524;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1016(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1016, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065540"))) PPC_WEAK_FUNC(sub_83065540);
PPC_FUNC_IMPL(__imp__sub_83065540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1808
	ctx.r4.s64 = ctx.r11.s64 + -1808;
	// bl 0x824215d0
	ctx.lr = 0x8306555C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1915(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1915, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065578"))) PPC_WEAK_FUNC(sub_83065578);
PPC_FUNC_IMPL(__imp__sub_83065578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1804
	ctx.r4.s64 = ctx.r11.s64 + -1804;
	// bl 0x824215d0
	ctx.lr = 0x83065594;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-288(r11)
	PPC_STORE_U8(ctx.r11.u32 + -288, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830655B0"))) PPC_WEAK_FUNC(sub_830655B0);
PPC_FUNC_IMPL(__imp__sub_830655B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1800
	ctx.r4.s64 = ctx.r11.s64 + -1800;
	// bl 0x824215d0
	ctx.lr = 0x830655CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-224(r11)
	PPC_STORE_U8(ctx.r11.u32 + -224, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830655E8"))) PPC_WEAK_FUNC(sub_830655E8);
PPC_FUNC_IMPL(__imp__sub_830655E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1796
	ctx.r4.s64 = ctx.r11.s64 + -1796;
	// bl 0x824215d0
	ctx.lr = 0x83065604;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-415(r11)
	PPC_STORE_U8(ctx.r11.u32 + -415, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065620"))) PPC_WEAK_FUNC(sub_83065620);
PPC_FUNC_IMPL(__imp__sub_83065620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1792
	ctx.r4.s64 = ctx.r11.s64 + -1792;
	// bl 0x824215d0
	ctx.lr = 0x8306563C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2019(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2019, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065658"))) PPC_WEAK_FUNC(sub_83065658);
PPC_FUNC_IMPL(__imp__sub_83065658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1788
	ctx.r4.s64 = ctx.r11.s64 + -1788;
	// bl 0x824215d0
	ctx.lr = 0x83065674;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1034(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1034, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065690"))) PPC_WEAK_FUNC(sub_83065690);
PPC_FUNC_IMPL(__imp__sub_83065690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1784
	ctx.r4.s64 = ctx.r11.s64 + -1784;
	// bl 0x824215d0
	ctx.lr = 0x830656AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830656C8"))) PPC_WEAK_FUNC(sub_830656C8);
PPC_FUNC_IMPL(__imp__sub_830656C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1780
	ctx.r4.s64 = ctx.r11.s64 + -1780;
	// bl 0x824215d0
	ctx.lr = 0x830656E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-728(r11)
	PPC_STORE_U8(ctx.r11.u32 + -728, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065700"))) PPC_WEAK_FUNC(sub_83065700);
PPC_FUNC_IMPL(__imp__sub_83065700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1776
	ctx.r4.s64 = ctx.r11.s64 + -1776;
	// bl 0x824215d0
	ctx.lr = 0x8306571C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83065738"))) PPC_WEAK_FUNC(sub_83065738);
PPC_FUNC_IMPL(__imp__sub_83065738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1772
	ctx.r4.s64 = ctx.r11.s64 + -1772;
	// bl 0x824215d0
	ctx.lr = 0x83065754;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1704(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1704, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065770"))) PPC_WEAK_FUNC(sub_83065770);
PPC_FUNC_IMPL(__imp__sub_83065770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1768
	ctx.r4.s64 = ctx.r11.s64 + -1768;
	// bl 0x824215d0
	ctx.lr = 0x8306578C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1268(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1268, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830657A8"))) PPC_WEAK_FUNC(sub_830657A8);
PPC_FUNC_IMPL(__imp__sub_830657A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1764
	ctx.r4.s64 = ctx.r11.s64 + -1764;
	// bl 0x824215d0
	ctx.lr = 0x830657C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830657E0"))) PPC_WEAK_FUNC(sub_830657E0);
PPC_FUNC_IMPL(__imp__sub_830657E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1760
	ctx.r4.s64 = ctx.r11.s64 + -1760;
	// bl 0x824215d0
	ctx.lr = 0x830657FC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1579(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1579, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065818"))) PPC_WEAK_FUNC(sub_83065818);
PPC_FUNC_IMPL(__imp__sub_83065818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1756
	ctx.r4.s64 = ctx.r11.s64 + -1756;
	// bl 0x824215d0
	ctx.lr = 0x83065834;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1772(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1772, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065850"))) PPC_WEAK_FUNC(sub_83065850);
PPC_FUNC_IMPL(__imp__sub_83065850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1752
	ctx.r4.s64 = ctx.r11.s64 + -1752;
	// bl 0x824215d0
	ctx.lr = 0x8306586C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1118(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1118, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065888"))) PPC_WEAK_FUNC(sub_83065888);
PPC_FUNC_IMPL(__imp__sub_83065888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1748
	ctx.r4.s64 = ctx.r11.s64 + -1748;
	// bl 0x824215d0
	ctx.lr = 0x830658A4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2729(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2729, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830658C0"))) PPC_WEAK_FUNC(sub_830658C0);
PPC_FUNC_IMPL(__imp__sub_830658C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1744
	ctx.r4.s64 = ctx.r11.s64 + -1744;
	// bl 0x824215d0
	ctx.lr = 0x830658DC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-209(r11)
	PPC_STORE_U8(ctx.r11.u32 + -209, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830658F8"))) PPC_WEAK_FUNC(sub_830658F8);
PPC_FUNC_IMPL(__imp__sub_830658F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1740
	ctx.r4.s64 = ctx.r11.s64 + -1740;
	// bl 0x824215d0
	ctx.lr = 0x83065914;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1807(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1807, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065930"))) PPC_WEAK_FUNC(sub_83065930);
PPC_FUNC_IMPL(__imp__sub_83065930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1736
	ctx.r4.s64 = ctx.r11.s64 + -1736;
	// bl 0x824215d0
	ctx.lr = 0x8306594C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,228(r11)
	PPC_STORE_U8(ctx.r11.u32 + 228, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065968"))) PPC_WEAK_FUNC(sub_83065968);
PPC_FUNC_IMPL(__imp__sub_83065968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1732
	ctx.r4.s64 = ctx.r11.s64 + -1732;
	// bl 0x824215d0
	ctx.lr = 0x83065984;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1914(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1914, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830659A0"))) PPC_WEAK_FUNC(sub_830659A0);
PPC_FUNC_IMPL(__imp__sub_830659A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1728
	ctx.r4.s64 = ctx.r11.s64 + -1728;
	// bl 0x824215d0
	ctx.lr = 0x830659BC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1502(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1502, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830659D8"))) PPC_WEAK_FUNC(sub_830659D8);
PPC_FUNC_IMPL(__imp__sub_830659D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1724
	ctx.r4.s64 = ctx.r11.s64 + -1724;
	// bl 0x824215d0
	ctx.lr = 0x830659F4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83065A10"))) PPC_WEAK_FUNC(sub_83065A10);
PPC_FUNC_IMPL(__imp__sub_83065A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1720
	ctx.r4.s64 = ctx.r11.s64 + -1720;
	// bl 0x824215d0
	ctx.lr = 0x83065A2C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-12(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065A48"))) PPC_WEAK_FUNC(sub_83065A48);
PPC_FUNC_IMPL(__imp__sub_83065A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1716
	ctx.r4.s64 = ctx.r11.s64 + -1716;
	// bl 0x824215d0
	ctx.lr = 0x83065A64;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,717(r11)
	PPC_STORE_U8(ctx.r11.u32 + 717, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065A80"))) PPC_WEAK_FUNC(sub_83065A80);
PPC_FUNC_IMPL(__imp__sub_83065A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1712
	ctx.r4.s64 = ctx.r11.s64 + -1712;
	// bl 0x824215d0
	ctx.lr = 0x83065A9C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1439(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1439, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065AB8"))) PPC_WEAK_FUNC(sub_83065AB8);
PPC_FUNC_IMPL(__imp__sub_83065AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1708
	ctx.r4.s64 = ctx.r11.s64 + -1708;
	// bl 0x824215d0
	ctx.lr = 0x83065AD4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1336(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1336, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065AF0"))) PPC_WEAK_FUNC(sub_83065AF0);
PPC_FUNC_IMPL(__imp__sub_83065AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1704
	ctx.r4.s64 = ctx.r11.s64 + -1704;
	// bl 0x824215d0
	ctx.lr = 0x83065B0C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1965(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1965, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065B28"))) PPC_WEAK_FUNC(sub_83065B28);
PPC_FUNC_IMPL(__imp__sub_83065B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1700
	ctx.r4.s64 = ctx.r11.s64 + -1700;
	// bl 0x824215d0
	ctx.lr = 0x83065B44;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3396(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3396, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065B60"))) PPC_WEAK_FUNC(sub_83065B60);
PPC_FUNC_IMPL(__imp__sub_83065B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1696
	ctx.r4.s64 = ctx.r11.s64 + -1696;
	// bl 0x824215d0
	ctx.lr = 0x83065B7C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2512(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2512, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065B98"))) PPC_WEAK_FUNC(sub_83065B98);
PPC_FUNC_IMPL(__imp__sub_83065B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1692
	ctx.r4.s64 = ctx.r11.s64 + -1692;
	// bl 0x824215d0
	ctx.lr = 0x83065BB4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1415(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1415, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065BD0"))) PPC_WEAK_FUNC(sub_83065BD0);
PPC_FUNC_IMPL(__imp__sub_83065BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1688
	ctx.r4.s64 = ctx.r11.s64 + -1688;
	// bl 0x824215d0
	ctx.lr = 0x83065BEC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1771(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1771, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065C08"))) PPC_WEAK_FUNC(sub_83065C08);
PPC_FUNC_IMPL(__imp__sub_83065C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1684
	ctx.r4.s64 = ctx.r11.s64 + -1684;
	// bl 0x824215d0
	ctx.lr = 0x83065C24;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2388(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2388, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065C40"))) PPC_WEAK_FUNC(sub_83065C40);
PPC_FUNC_IMPL(__imp__sub_83065C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1680
	ctx.r4.s64 = ctx.r11.s64 + -1680;
	// bl 0x824215d0
	ctx.lr = 0x83065C5C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2000(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2000, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065C78"))) PPC_WEAK_FUNC(sub_83065C78);
PPC_FUNC_IMPL(__imp__sub_83065C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1676
	ctx.r4.s64 = ctx.r11.s64 + -1676;
	// bl 0x824215d0
	ctx.lr = 0x83065C94;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1952(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1952, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065CB0"))) PPC_WEAK_FUNC(sub_83065CB0);
PPC_FUNC_IMPL(__imp__sub_83065CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1672
	ctx.r4.s64 = ctx.r11.s64 + -1672;
	// bl 0x824215d0
	ctx.lr = 0x83065CCC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3077(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3077, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065CE8"))) PPC_WEAK_FUNC(sub_83065CE8);
PPC_FUNC_IMPL(__imp__sub_83065CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1668
	ctx.r4.s64 = ctx.r11.s64 + -1668;
	// bl 0x824215d0
	ctx.lr = 0x83065D04;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83065D20"))) PPC_WEAK_FUNC(sub_83065D20);
PPC_FUNC_IMPL(__imp__sub_83065D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1664
	ctx.r4.s64 = ctx.r11.s64 + -1664;
	// bl 0x824215d0
	ctx.lr = 0x83065D3C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1706(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1706, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065D58"))) PPC_WEAK_FUNC(sub_83065D58);
PPC_FUNC_IMPL(__imp__sub_83065D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1660
	ctx.r4.s64 = ctx.r11.s64 + -1660;
	// bl 0x824215d0
	ctx.lr = 0x83065D74;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-937(r11)
	PPC_STORE_U8(ctx.r11.u32 + -937, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065D90"))) PPC_WEAK_FUNC(sub_83065D90);
PPC_FUNC_IMPL(__imp__sub_83065D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1656
	ctx.r4.s64 = ctx.r11.s64 + -1656;
	// bl 0x824215d0
	ctx.lr = 0x83065DAC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,511(r11)
	PPC_STORE_U8(ctx.r11.u32 + 511, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065DC8"))) PPC_WEAK_FUNC(sub_83065DC8);
PPC_FUNC_IMPL(__imp__sub_83065DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1652
	ctx.r4.s64 = ctx.r11.s64 + -1652;
	// bl 0x824215d0
	ctx.lr = 0x83065DE4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83065E00"))) PPC_WEAK_FUNC(sub_83065E00);
PPC_FUNC_IMPL(__imp__sub_83065E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1648
	ctx.r4.s64 = ctx.r11.s64 + -1648;
	// bl 0x824215d0
	ctx.lr = 0x83065E1C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-832(r11)
	PPC_STORE_U8(ctx.r11.u32 + -832, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065E38"))) PPC_WEAK_FUNC(sub_83065E38);
PPC_FUNC_IMPL(__imp__sub_83065E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1644
	ctx.r4.s64 = ctx.r11.s64 + -1644;
	// bl 0x824215d0
	ctx.lr = 0x83065E54;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2121(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2121, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065E70"))) PPC_WEAK_FUNC(sub_83065E70);
PPC_FUNC_IMPL(__imp__sub_83065E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1640
	ctx.r4.s64 = ctx.r11.s64 + -1640;
	// bl 0x824215d0
	ctx.lr = 0x83065E8C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83065EA8"))) PPC_WEAK_FUNC(sub_83065EA8);
PPC_FUNC_IMPL(__imp__sub_83065EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1636
	ctx.r4.s64 = ctx.r11.s64 + -1636;
	// bl 0x824215d0
	ctx.lr = 0x83065EC4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2267(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2267, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065EE0"))) PPC_WEAK_FUNC(sub_83065EE0);
PPC_FUNC_IMPL(__imp__sub_83065EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1632
	ctx.r4.s64 = ctx.r11.s64 + -1632;
	// bl 0x824215d0
	ctx.lr = 0x83065EFC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1055(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1055, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065F18"))) PPC_WEAK_FUNC(sub_83065F18);
PPC_FUNC_IMPL(__imp__sub_83065F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1628
	ctx.r4.s64 = ctx.r11.s64 + -1628;
	// bl 0x824215d0
	ctx.lr = 0x83065F34;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1438(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1438, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065F50"))) PPC_WEAK_FUNC(sub_83065F50);
PPC_FUNC_IMPL(__imp__sub_83065F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1624
	ctx.r4.s64 = ctx.r11.s64 + -1624;
	// bl 0x824215d0
	ctx.lr = 0x83065F6C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83065F88"))) PPC_WEAK_FUNC(sub_83065F88);
PPC_FUNC_IMPL(__imp__sub_83065F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1620
	ctx.r4.s64 = ctx.r11.s64 + -1620;
	// bl 0x824215d0
	ctx.lr = 0x83065FA4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83065FC0"))) PPC_WEAK_FUNC(sub_83065FC0);
PPC_FUNC_IMPL(__imp__sub_83065FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1616
	ctx.r4.s64 = ctx.r11.s64 + -1616;
	// bl 0x824215d0
	ctx.lr = 0x83065FDC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1414(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1414, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065FF8"))) PPC_WEAK_FUNC(sub_83065FF8);
PPC_FUNC_IMPL(__imp__sub_83065FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1612
	ctx.r4.s64 = ctx.r11.s64 + -1612;
	// bl 0x824215d0
	ctx.lr = 0x83066014;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3135(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3135, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066030"))) PPC_WEAK_FUNC(sub_83066030);
PPC_FUNC_IMPL(__imp__sub_83066030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1608
	ctx.r4.s64 = ctx.r11.s64 + -1608;
	// bl 0x824215d0
	ctx.lr = 0x8306604C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2892(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2892, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066068"))) PPC_WEAK_FUNC(sub_83066068);
PPC_FUNC_IMPL(__imp__sub_83066068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1604
	ctx.r4.s64 = ctx.r11.s64 + -1604;
	// bl 0x824215d0
	ctx.lr = 0x83066084;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830660A0"))) PPC_WEAK_FUNC(sub_830660A0);
PPC_FUNC_IMPL(__imp__sub_830660A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1600
	ctx.r4.s64 = ctx.r11.s64 + -1600;
	// bl 0x824215d0
	ctx.lr = 0x830660BC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1507(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1507, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830660D8"))) PPC_WEAK_FUNC(sub_830660D8);
PPC_FUNC_IMPL(__imp__sub_830660D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1596
	ctx.r4.s64 = ctx.r11.s64 + -1596;
	// bl 0x824215d0
	ctx.lr = 0x830660F4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-771(r11)
	PPC_STORE_U8(ctx.r11.u32 + -771, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066110"))) PPC_WEAK_FUNC(sub_83066110);
PPC_FUNC_IMPL(__imp__sub_83066110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1592
	ctx.r4.s64 = ctx.r11.s64 + -1592;
	// bl 0x824215d0
	ctx.lr = 0x8306612C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2156(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2156, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066148"))) PPC_WEAK_FUNC(sub_83066148);
PPC_FUNC_IMPL(__imp__sub_83066148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1588
	ctx.r4.s64 = ctx.r11.s64 + -1588;
	// bl 0x824215d0
	ctx.lr = 0x83066164;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83066180"))) PPC_WEAK_FUNC(sub_83066180);
PPC_FUNC_IMPL(__imp__sub_83066180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1584
	ctx.r4.s64 = ctx.r11.s64 + -1584;
	// bl 0x824215d0
	ctx.lr = 0x8306619C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830661B8"))) PPC_WEAK_FUNC(sub_830661B8);
PPC_FUNC_IMPL(__imp__sub_830661B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1580
	ctx.r4.s64 = ctx.r11.s64 + -1580;
	// bl 0x824215d0
	ctx.lr = 0x830661D4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830661F0"))) PPC_WEAK_FUNC(sub_830661F0);
PPC_FUNC_IMPL(__imp__sub_830661F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1576
	ctx.r4.s64 = ctx.r11.s64 + -1576;
	// bl 0x824215d0
	ctx.lr = 0x8306620C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1597(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1597, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066228"))) PPC_WEAK_FUNC(sub_83066228);
PPC_FUNC_IMPL(__imp__sub_83066228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1572
	ctx.r4.s64 = ctx.r11.s64 + -1572;
	// bl 0x824215d0
	ctx.lr = 0x83066244;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,599(r11)
	PPC_STORE_U8(ctx.r11.u32 + 599, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066260"))) PPC_WEAK_FUNC(sub_83066260);
PPC_FUNC_IMPL(__imp__sub_83066260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1568
	ctx.r4.s64 = ctx.r11.s64 + -1568;
	// bl 0x824215d0
	ctx.lr = 0x8306627C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3392(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3392, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066298"))) PPC_WEAK_FUNC(sub_83066298);
PPC_FUNC_IMPL(__imp__sub_83066298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1564
	ctx.r4.s64 = ctx.r11.s64 + -1564;
	// bl 0x824215d0
	ctx.lr = 0x830662B4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2007(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2007, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830662D0"))) PPC_WEAK_FUNC(sub_830662D0);
PPC_FUNC_IMPL(__imp__sub_830662D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1560
	ctx.r4.s64 = ctx.r11.s64 + -1560;
	// bl 0x824215d0
	ctx.lr = 0x830662EC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1924(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1924, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066308"))) PPC_WEAK_FUNC(sub_83066308);
PPC_FUNC_IMPL(__imp__sub_83066308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1556
	ctx.r4.s64 = ctx.r11.s64 + -1556;
	// bl 0x824215d0
	ctx.lr = 0x83066324;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1206(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1206, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066340"))) PPC_WEAK_FUNC(sub_83066340);
PPC_FUNC_IMPL(__imp__sub_83066340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1552
	ctx.r4.s64 = ctx.r11.s64 + -1552;
	// bl 0x824215d0
	ctx.lr = 0x8306635C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,418(r11)
	PPC_STORE_U8(ctx.r11.u32 + 418, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066378"))) PPC_WEAK_FUNC(sub_83066378);
PPC_FUNC_IMPL(__imp__sub_83066378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1548
	ctx.r4.s64 = ctx.r11.s64 + -1548;
	// bl 0x824215d0
	ctx.lr = 0x83066394;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2032(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2032, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830663B0"))) PPC_WEAK_FUNC(sub_830663B0);
PPC_FUNC_IMPL(__imp__sub_830663B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1544
	ctx.r4.s64 = ctx.r11.s64 + -1544;
	// bl 0x824215d0
	ctx.lr = 0x830663CC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1797(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1797, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830663E8"))) PPC_WEAK_FUNC(sub_830663E8);
PPC_FUNC_IMPL(__imp__sub_830663E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1540
	ctx.r4.s64 = ctx.r11.s64 + -1540;
	// bl 0x824215d0
	ctx.lr = 0x83066404;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2233(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2233, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066420"))) PPC_WEAK_FUNC(sub_83066420);
PPC_FUNC_IMPL(__imp__sub_83066420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1536
	ctx.r4.s64 = ctx.r11.s64 + -1536;
	// bl 0x824215d0
	ctx.lr = 0x8306643C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3393(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3393, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066458"))) PPC_WEAK_FUNC(sub_83066458);
PPC_FUNC_IMPL(__imp__sub_83066458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1532
	ctx.r4.s64 = ctx.r11.s64 + -1532;
	// bl 0x824215d0
	ctx.lr = 0x83066474;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1102(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1102, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066490"))) PPC_WEAK_FUNC(sub_83066490);
PPC_FUNC_IMPL(__imp__sub_83066490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1528
	ctx.r4.s64 = ctx.r11.s64 + -1528;
	// bl 0x824215d0
	ctx.lr = 0x830664AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,828(r11)
	PPC_STORE_U8(ctx.r11.u32 + 828, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830664C8"))) PPC_WEAK_FUNC(sub_830664C8);
PPC_FUNC_IMPL(__imp__sub_830664C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1524
	ctx.r4.s64 = ctx.r11.s64 + -1524;
	// bl 0x824215d0
	ctx.lr = 0x830664E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83066500"))) PPC_WEAK_FUNC(sub_83066500);
PPC_FUNC_IMPL(__imp__sub_83066500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1520
	ctx.r4.s64 = ctx.r11.s64 + -1520;
	// bl 0x824215d0
	ctx.lr = 0x8306651C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2425(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2425, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066538"))) PPC_WEAK_FUNC(sub_83066538);
PPC_FUNC_IMPL(__imp__sub_83066538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1516
	ctx.r4.s64 = ctx.r11.s64 + -1516;
	// bl 0x824215d0
	ctx.lr = 0x83066554;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1916(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1916, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066570"))) PPC_WEAK_FUNC(sub_83066570);
PPC_FUNC_IMPL(__imp__sub_83066570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1512
	ctx.r4.s64 = ctx.r11.s64 + -1512;
	// bl 0x824215d0
	ctx.lr = 0x8306658C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1953(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1953, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830665A8"))) PPC_WEAK_FUNC(sub_830665A8);
PPC_FUNC_IMPL(__imp__sub_830665A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1508
	ctx.r4.s64 = ctx.r11.s64 + -1508;
	// bl 0x824215d0
	ctx.lr = 0x830665C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-529(r11)
	PPC_STORE_U8(ctx.r11.u32 + -529, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830665E0"))) PPC_WEAK_FUNC(sub_830665E0);
PPC_FUNC_IMPL(__imp__sub_830665E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1504
	ctx.r4.s64 = ctx.r11.s64 + -1504;
	// bl 0x824215d0
	ctx.lr = 0x830665FC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3534(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3534, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066618"))) PPC_WEAK_FUNC(sub_83066618);
PPC_FUNC_IMPL(__imp__sub_83066618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1500
	ctx.r4.s64 = ctx.r11.s64 + -1500;
	// bl 0x824215d0
	ctx.lr = 0x83066634;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83066650"))) PPC_WEAK_FUNC(sub_83066650);
PPC_FUNC_IMPL(__imp__sub_83066650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1496
	ctx.r4.s64 = ctx.r11.s64 + -1496;
	// bl 0x824215d0
	ctx.lr = 0x8306666C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1191(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1191, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066688"))) PPC_WEAK_FUNC(sub_83066688);
PPC_FUNC_IMPL(__imp__sub_83066688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1492
	ctx.r4.s64 = ctx.r11.s64 + -1492;
	// bl 0x824215d0
	ctx.lr = 0x830666A4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,416(r11)
	PPC_STORE_U8(ctx.r11.u32 + 416, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830666C0"))) PPC_WEAK_FUNC(sub_830666C0);
PPC_FUNC_IMPL(__imp__sub_830666C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1488
	ctx.r4.s64 = ctx.r11.s64 + -1488;
	// bl 0x824215d0
	ctx.lr = 0x830666DC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-287(r11)
	PPC_STORE_U8(ctx.r11.u32 + -287, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830666F8"))) PPC_WEAK_FUNC(sub_830666F8);
PPC_FUNC_IMPL(__imp__sub_830666F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1484
	ctx.r4.s64 = ctx.r11.s64 + -1484;
	// bl 0x824215d0
	ctx.lr = 0x83066714;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3367(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3367, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066730"))) PPC_WEAK_FUNC(sub_83066730);
PPC_FUNC_IMPL(__imp__sub_83066730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1480
	ctx.r4.s64 = ctx.r11.s64 + -1480;
	// bl 0x824215d0
	ctx.lr = 0x8306674C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1868(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1868, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066768"))) PPC_WEAK_FUNC(sub_83066768);
PPC_FUNC_IMPL(__imp__sub_83066768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1476
	ctx.r4.s64 = ctx.r11.s64 + -1476;
	// bl 0x824215d0
	ctx.lr = 0x83066784;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_830667A0"))) PPC_WEAK_FUNC(sub_830667A0);
PPC_FUNC_IMPL(__imp__sub_830667A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1472
	ctx.r4.s64 = ctx.r11.s64 + -1472;
	// bl 0x824215d0
	ctx.lr = 0x830667BC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2730(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2730, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830667D8"))) PPC_WEAK_FUNC(sub_830667D8);
PPC_FUNC_IMPL(__imp__sub_830667D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1468
	ctx.r4.s64 = ctx.r11.s64 + -1468;
	// bl 0x824215d0
	ctx.lr = 0x830667F4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83066810"))) PPC_WEAK_FUNC(sub_83066810);
PPC_FUNC_IMPL(__imp__sub_83066810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1464
	ctx.r4.s64 = ctx.r11.s64 + -1464;
	// bl 0x824215d0
	ctx.lr = 0x8306682C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1266(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1266, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066848"))) PPC_WEAK_FUNC(sub_83066848);
PPC_FUNC_IMPL(__imp__sub_83066848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1460
	ctx.r4.s64 = ctx.r11.s64 + -1460;
	// bl 0x824215d0
	ctx.lr = 0x83066864;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,800(r11)
	PPC_STORE_U8(ctx.r11.u32 + 800, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066880"))) PPC_WEAK_FUNC(sub_83066880);
PPC_FUNC_IMPL(__imp__sub_83066880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1456
	ctx.r4.s64 = ctx.r11.s64 + -1456;
	// bl 0x824215d0
	ctx.lr = 0x8306689C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1401(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1401, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830668B8"))) PPC_WEAK_FUNC(sub_830668B8);
PPC_FUNC_IMPL(__imp__sub_830668B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1452
	ctx.r4.s64 = ctx.r11.s64 + -1452;
	// bl 0x824215d0
	ctx.lr = 0x830668D4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1210(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1210, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830668F0"))) PPC_WEAK_FUNC(sub_830668F0);
PPC_FUNC_IMPL(__imp__sub_830668F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1448
	ctx.r4.s64 = ctx.r11.s64 + -1448;
	// bl 0x824215d0
	ctx.lr = 0x8306690C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-645(r11)
	PPC_STORE_U8(ctx.r11.u32 + -645, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066928"))) PPC_WEAK_FUNC(sub_83066928);
PPC_FUNC_IMPL(__imp__sub_83066928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1444
	ctx.r4.s64 = ctx.r11.s64 + -1444;
	// bl 0x824215d0
	ctx.lr = 0x83066944;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1607(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1607, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066960"))) PPC_WEAK_FUNC(sub_83066960);
PPC_FUNC_IMPL(__imp__sub_83066960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1440
	ctx.r4.s64 = ctx.r11.s64 + -1440;
	// bl 0x824215d0
	ctx.lr = 0x8306697C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2508, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066998"))) PPC_WEAK_FUNC(sub_83066998);
PPC_FUNC_IMPL(__imp__sub_83066998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1436
	ctx.r4.s64 = ctx.r11.s64 + -1436;
	// bl 0x824215d0
	ctx.lr = 0x830669B4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1506(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1506, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830669D0"))) PPC_WEAK_FUNC(sub_830669D0);
PPC_FUNC_IMPL(__imp__sub_830669D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-1432
	ctx.r4.s64 = ctx.r11.s64 + -1432;
	// bl 0x824215d0
	ctx.lr = 0x830669EC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,584(r11)
	PPC_STORE_U8(ctx.r11.u32 + 584, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

