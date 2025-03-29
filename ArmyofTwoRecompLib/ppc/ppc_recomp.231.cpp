#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8310BF28"))) PPC_WEAK_FUNC(sub_8310BF28);
PPC_FUNC_IMPL(__imp__sub_8310BF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31772
	ctx.r4.s64 = ctx.r11.s64 + 31772;
	// bl 0x82429b48
	ctx.lr = 0x8310BF44;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4231, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310BF60"))) PPC_WEAK_FUNC(sub_8310BF60);
PPC_FUNC_IMPL(__imp__sub_8310BF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31776
	ctx.r4.s64 = ctx.r11.s64 + 31776;
	// bl 0x82429b48
	ctx.lr = 0x8310BF7C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310BF98"))) PPC_WEAK_FUNC(sub_8310BF98);
PPC_FUNC_IMPL(__imp__sub_8310BF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31780
	ctx.r4.s64 = ctx.r11.s64 + 31780;
	// bl 0x82429b48
	ctx.lr = 0x8310BFB4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310BFD0"))) PPC_WEAK_FUNC(sub_8310BFD0);
PPC_FUNC_IMPL(__imp__sub_8310BFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31784
	ctx.r4.s64 = ctx.r11.s64 + 31784;
	// bl 0x82429b48
	ctx.lr = 0x8310BFEC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 148, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C008"))) PPC_WEAK_FUNC(sub_8310C008);
PPC_FUNC_IMPL(__imp__sub_8310C008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31788
	ctx.r4.s64 = ctx.r11.s64 + 31788;
	// bl 0x82429b48
	ctx.lr = 0x8310C024;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3260(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3260, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C040"))) PPC_WEAK_FUNC(sub_8310C040);
PPC_FUNC_IMPL(__imp__sub_8310C040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31792
	ctx.r4.s64 = ctx.r11.s64 + 31792;
	// bl 0x82429b48
	ctx.lr = 0x8310C05C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,466(r11)
	PPC_STORE_U8(ctx.r11.u32 + 466, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C078"))) PPC_WEAK_FUNC(sub_8310C078);
PPC_FUNC_IMPL(__imp__sub_8310C078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31796
	ctx.r4.s64 = ctx.r11.s64 + 31796;
	// bl 0x82429b48
	ctx.lr = 0x8310C094;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2195(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2195, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C0B0"))) PPC_WEAK_FUNC(sub_8310C0B0);
PPC_FUNC_IMPL(__imp__sub_8310C0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31800
	ctx.r4.s64 = ctx.r11.s64 + 31800;
	// bl 0x82429b48
	ctx.lr = 0x8310C0CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,126(r11)
	PPC_STORE_U8(ctx.r11.u32 + 126, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C0E8"))) PPC_WEAK_FUNC(sub_8310C0E8);
PPC_FUNC_IMPL(__imp__sub_8310C0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31804
	ctx.r4.s64 = ctx.r11.s64 + 31804;
	// bl 0x82429b48
	ctx.lr = 0x8310C104;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3241(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3241, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C120"))) PPC_WEAK_FUNC(sub_8310C120);
PPC_FUNC_IMPL(__imp__sub_8310C120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31808
	ctx.r4.s64 = ctx.r11.s64 + 31808;
	// bl 0x82429b48
	ctx.lr = 0x8310C13C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4018(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4018, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C158"))) PPC_WEAK_FUNC(sub_8310C158);
PPC_FUNC_IMPL(__imp__sub_8310C158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31812
	ctx.r4.s64 = ctx.r11.s64 + 31812;
	// bl 0x82429b48
	ctx.lr = 0x8310C174;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3996(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3996, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C190"))) PPC_WEAK_FUNC(sub_8310C190);
PPC_FUNC_IMPL(__imp__sub_8310C190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31816
	ctx.r4.s64 = ctx.r11.s64 + 31816;
	// bl 0x82429b48
	ctx.lr = 0x8310C1AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1938(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1938, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C1C8"))) PPC_WEAK_FUNC(sub_8310C1C8);
PPC_FUNC_IMPL(__imp__sub_8310C1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31820
	ctx.r4.s64 = ctx.r11.s64 + 31820;
	// bl 0x82429b48
	ctx.lr = 0x8310C1E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4896(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4896, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C200"))) PPC_WEAK_FUNC(sub_8310C200);
PPC_FUNC_IMPL(__imp__sub_8310C200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31824
	ctx.r4.s64 = ctx.r11.s64 + 31824;
	// bl 0x82429b48
	ctx.lr = 0x8310C21C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310C238"))) PPC_WEAK_FUNC(sub_8310C238);
PPC_FUNC_IMPL(__imp__sub_8310C238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31828
	ctx.r4.s64 = ctx.r11.s64 + 31828;
	// bl 0x82429b48
	ctx.lr = 0x8310C254;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3621(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3621, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C270"))) PPC_WEAK_FUNC(sub_8310C270);
PPC_FUNC_IMPL(__imp__sub_8310C270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31832
	ctx.r4.s64 = ctx.r11.s64 + 31832;
	// bl 0x82429b48
	ctx.lr = 0x8310C28C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4756(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4756, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C2A8"))) PPC_WEAK_FUNC(sub_8310C2A8);
PPC_FUNC_IMPL(__imp__sub_8310C2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31836
	ctx.r4.s64 = ctx.r11.s64 + 31836;
	// bl 0x82429b48
	ctx.lr = 0x8310C2C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3622(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3622, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C2E0"))) PPC_WEAK_FUNC(sub_8310C2E0);
PPC_FUNC_IMPL(__imp__sub_8310C2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31840
	ctx.r4.s64 = ctx.r11.s64 + 31840;
	// bl 0x82429b48
	ctx.lr = 0x8310C2FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310C318"))) PPC_WEAK_FUNC(sub_8310C318);
PPC_FUNC_IMPL(__imp__sub_8310C318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31844
	ctx.r4.s64 = ctx.r11.s64 + 31844;
	// bl 0x82429b48
	ctx.lr = 0x8310C334;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3587(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3587, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C350"))) PPC_WEAK_FUNC(sub_8310C350);
PPC_FUNC_IMPL(__imp__sub_8310C350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31848
	ctx.r4.s64 = ctx.r11.s64 + 31848;
	// bl 0x82429b48
	ctx.lr = 0x8310C36C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4435(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4435, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C388"))) PPC_WEAK_FUNC(sub_8310C388);
PPC_FUNC_IMPL(__imp__sub_8310C388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31852
	ctx.r4.s64 = ctx.r11.s64 + 31852;
	// bl 0x82429b48
	ctx.lr = 0x8310C3A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2531(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2531, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C3C0"))) PPC_WEAK_FUNC(sub_8310C3C0);
PPC_FUNC_IMPL(__imp__sub_8310C3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31856
	ctx.r4.s64 = ctx.r11.s64 + 31856;
	// bl 0x82429b48
	ctx.lr = 0x8310C3DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310C3F8"))) PPC_WEAK_FUNC(sub_8310C3F8);
PPC_FUNC_IMPL(__imp__sub_8310C3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31860
	ctx.r4.s64 = ctx.r11.s64 + 31860;
	// bl 0x82429b48
	ctx.lr = 0x8310C414;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1262(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1262, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C430"))) PPC_WEAK_FUNC(sub_8310C430);
PPC_FUNC_IMPL(__imp__sub_8310C430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31864
	ctx.r4.s64 = ctx.r11.s64 + 31864;
	// bl 0x82429b48
	ctx.lr = 0x8310C44C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2153(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2153, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C468"))) PPC_WEAK_FUNC(sub_8310C468);
PPC_FUNC_IMPL(__imp__sub_8310C468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31868
	ctx.r4.s64 = ctx.r11.s64 + 31868;
	// bl 0x82429b48
	ctx.lr = 0x8310C484;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,650(r11)
	PPC_STORE_U8(ctx.r11.u32 + 650, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C4A0"))) PPC_WEAK_FUNC(sub_8310C4A0);
PPC_FUNC_IMPL(__imp__sub_8310C4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31872
	ctx.r4.s64 = ctx.r11.s64 + 31872;
	// bl 0x82429b48
	ctx.lr = 0x8310C4BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C4D8"))) PPC_WEAK_FUNC(sub_8310C4D8);
PPC_FUNC_IMPL(__imp__sub_8310C4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31876
	ctx.r4.s64 = ctx.r11.s64 + 31876;
	// bl 0x82429b48
	ctx.lr = 0x8310C4F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,284(r11)
	PPC_STORE_U8(ctx.r11.u32 + 284, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C510"))) PPC_WEAK_FUNC(sub_8310C510);
PPC_FUNC_IMPL(__imp__sub_8310C510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31880
	ctx.r4.s64 = ctx.r11.s64 + 31880;
	// bl 0x82429b48
	ctx.lr = 0x8310C52C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1939(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1939, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C548"))) PPC_WEAK_FUNC(sub_8310C548);
PPC_FUNC_IMPL(__imp__sub_8310C548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31884
	ctx.r4.s64 = ctx.r11.s64 + 31884;
	// bl 0x82429b48
	ctx.lr = 0x8310C564;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2334(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2334, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C580"))) PPC_WEAK_FUNC(sub_8310C580);
PPC_FUNC_IMPL(__imp__sub_8310C580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31888
	ctx.r4.s64 = ctx.r11.s64 + 31888;
	// bl 0x82429b48
	ctx.lr = 0x8310C59C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,160(r11)
	PPC_STORE_U8(ctx.r11.u32 + 160, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C5B8"))) PPC_WEAK_FUNC(sub_8310C5B8);
PPC_FUNC_IMPL(__imp__sub_8310C5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31892
	ctx.r4.s64 = ctx.r11.s64 + 31892;
	// bl 0x82429b48
	ctx.lr = 0x8310C5D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1344(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1344, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C5F0"))) PPC_WEAK_FUNC(sub_8310C5F0);
PPC_FUNC_IMPL(__imp__sub_8310C5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31896
	ctx.r4.s64 = ctx.r11.s64 + 31896;
	// bl 0x82429b48
	ctx.lr = 0x8310C60C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4404(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4404, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C628"))) PPC_WEAK_FUNC(sub_8310C628);
PPC_FUNC_IMPL(__imp__sub_8310C628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31900
	ctx.r4.s64 = ctx.r11.s64 + 31900;
	// bl 0x82429b48
	ctx.lr = 0x8310C644;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310C660"))) PPC_WEAK_FUNC(sub_8310C660);
PPC_FUNC_IMPL(__imp__sub_8310C660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31904
	ctx.r4.s64 = ctx.r11.s64 + 31904;
	// bl 0x82429b48
	ctx.lr = 0x8310C67C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3665(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3665, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C698"))) PPC_WEAK_FUNC(sub_8310C698);
PPC_FUNC_IMPL(__imp__sub_8310C698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31908
	ctx.r4.s64 = ctx.r11.s64 + 31908;
	// bl 0x82429b48
	ctx.lr = 0x8310C6B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4098(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4098, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C6D0"))) PPC_WEAK_FUNC(sub_8310C6D0);
PPC_FUNC_IMPL(__imp__sub_8310C6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31912
	ctx.r4.s64 = ctx.r11.s64 + 31912;
	// bl 0x82429b48
	ctx.lr = 0x8310C6EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4337(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4337, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C708"))) PPC_WEAK_FUNC(sub_8310C708);
PPC_FUNC_IMPL(__imp__sub_8310C708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31916
	ctx.r4.s64 = ctx.r11.s64 + 31916;
	// bl 0x82429b48
	ctx.lr = 0x8310C724;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2307(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2307, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C740"))) PPC_WEAK_FUNC(sub_8310C740);
PPC_FUNC_IMPL(__imp__sub_8310C740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31920
	ctx.r4.s64 = ctx.r11.s64 + 31920;
	// bl 0x82429b48
	ctx.lr = 0x8310C75C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1499(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1499, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C778"))) PPC_WEAK_FUNC(sub_8310C778);
PPC_FUNC_IMPL(__imp__sub_8310C778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31924
	ctx.r4.s64 = ctx.r11.s64 + 31924;
	// bl 0x82429b48
	ctx.lr = 0x8310C794;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310C7B0"))) PPC_WEAK_FUNC(sub_8310C7B0);
PPC_FUNC_IMPL(__imp__sub_8310C7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31928
	ctx.r4.s64 = ctx.r11.s64 + 31928;
	// bl 0x82429b48
	ctx.lr = 0x8310C7CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310C7E8"))) PPC_WEAK_FUNC(sub_8310C7E8);
PPC_FUNC_IMPL(__imp__sub_8310C7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31932
	ctx.r4.s64 = ctx.r11.s64 + 31932;
	// bl 0x82429b48
	ctx.lr = 0x8310C804;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3723(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3723, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C820"))) PPC_WEAK_FUNC(sub_8310C820);
PPC_FUNC_IMPL(__imp__sub_8310C820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31936
	ctx.r4.s64 = ctx.r11.s64 + 31936;
	// bl 0x82429b48
	ctx.lr = 0x8310C83C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1539(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1539, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C858"))) PPC_WEAK_FUNC(sub_8310C858);
PPC_FUNC_IMPL(__imp__sub_8310C858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31940
	ctx.r4.s64 = ctx.r11.s64 + 31940;
	// bl 0x82429b48
	ctx.lr = 0x8310C874;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310C890"))) PPC_WEAK_FUNC(sub_8310C890);
PPC_FUNC_IMPL(__imp__sub_8310C890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31944
	ctx.r4.s64 = ctx.r11.s64 + 31944;
	// bl 0x82429b48
	ctx.lr = 0x8310C8AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,652(r11)
	PPC_STORE_U8(ctx.r11.u32 + 652, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C8C8"))) PPC_WEAK_FUNC(sub_8310C8C8);
PPC_FUNC_IMPL(__imp__sub_8310C8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31948
	ctx.r4.s64 = ctx.r11.s64 + 31948;
	// bl 0x82429b48
	ctx.lr = 0x8310C8E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4757(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4757, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C900"))) PPC_WEAK_FUNC(sub_8310C900);
PPC_FUNC_IMPL(__imp__sub_8310C900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31952
	ctx.r4.s64 = ctx.r11.s64 + 31952;
	// bl 0x82429b48
	ctx.lr = 0x8310C91C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,215(r11)
	PPC_STORE_U8(ctx.r11.u32 + 215, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C938"))) PPC_WEAK_FUNC(sub_8310C938);
PPC_FUNC_IMPL(__imp__sub_8310C938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// bl 0x82429b48
	ctx.lr = 0x8310C954;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2658(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2658, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C970"))) PPC_WEAK_FUNC(sub_8310C970);
PPC_FUNC_IMPL(__imp__sub_8310C970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31960
	ctx.r4.s64 = ctx.r11.s64 + 31960;
	// bl 0x82429b48
	ctx.lr = 0x8310C98C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3454(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3454, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310C9A8"))) PPC_WEAK_FUNC(sub_8310C9A8);
PPC_FUNC_IMPL(__imp__sub_8310C9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31964
	ctx.r4.s64 = ctx.r11.s64 + 31964;
	// bl 0x82429b48
	ctx.lr = 0x8310C9C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310C9E0"))) PPC_WEAK_FUNC(sub_8310C9E0);
PPC_FUNC_IMPL(__imp__sub_8310C9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31968
	ctx.r4.s64 = ctx.r11.s64 + 31968;
	// bl 0x82429b48
	ctx.lr = 0x8310C9FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2845(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2845, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CA18"))) PPC_WEAK_FUNC(sub_8310CA18);
PPC_FUNC_IMPL(__imp__sub_8310CA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31972
	ctx.r4.s64 = ctx.r11.s64 + 31972;
	// bl 0x82429b48
	ctx.lr = 0x8310CA34;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-145(r11)
	PPC_STORE_U8(ctx.r11.u32 + -145, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CA50"))) PPC_WEAK_FUNC(sub_8310CA50);
PPC_FUNC_IMPL(__imp__sub_8310CA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31976
	ctx.r4.s64 = ctx.r11.s64 + 31976;
	// bl 0x82429b48
	ctx.lr = 0x8310CA6C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310CA88"))) PPC_WEAK_FUNC(sub_8310CA88);
PPC_FUNC_IMPL(__imp__sub_8310CA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31980
	ctx.r4.s64 = ctx.r11.s64 + 31980;
	// bl 0x82429b48
	ctx.lr = 0x8310CAA4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3427(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3427, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CAC0"))) PPC_WEAK_FUNC(sub_8310CAC0);
PPC_FUNC_IMPL(__imp__sub_8310CAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31984
	ctx.r4.s64 = ctx.r11.s64 + 31984;
	// bl 0x82429b48
	ctx.lr = 0x8310CADC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2332(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2332, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CAF8"))) PPC_WEAK_FUNC(sub_8310CAF8);
PPC_FUNC_IMPL(__imp__sub_8310CAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31988
	ctx.r4.s64 = ctx.r11.s64 + 31988;
	// bl 0x82429b48
	ctx.lr = 0x8310CB14;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2232(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2232, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CB30"))) PPC_WEAK_FUNC(sub_8310CB30);
PPC_FUNC_IMPL(__imp__sub_8310CB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31992
	ctx.r4.s64 = ctx.r11.s64 + 31992;
	// bl 0x82429b48
	ctx.lr = 0x8310CB4C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310CB68"))) PPC_WEAK_FUNC(sub_8310CB68);
PPC_FUNC_IMPL(__imp__sub_8310CB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,31996
	ctx.r4.s64 = ctx.r11.s64 + 31996;
	// bl 0x82429b48
	ctx.lr = 0x8310CB84;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1157(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1157, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CBA0"))) PPC_WEAK_FUNC(sub_8310CBA0);
PPC_FUNC_IMPL(__imp__sub_8310CBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32000
	ctx.r4.s64 = ctx.r11.s64 + 32000;
	// bl 0x82429b48
	ctx.lr = 0x8310CBBC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1866(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1866, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CBD8"))) PPC_WEAK_FUNC(sub_8310CBD8);
PPC_FUNC_IMPL(__imp__sub_8310CBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32004
	ctx.r4.s64 = ctx.r11.s64 + 32004;
	// bl 0x82429b48
	ctx.lr = 0x8310CBF4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3870(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3870, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CC10"))) PPC_WEAK_FUNC(sub_8310CC10);
PPC_FUNC_IMPL(__imp__sub_8310CC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32008
	ctx.r4.s64 = ctx.r11.s64 + 32008;
	// bl 0x82429b48
	ctx.lr = 0x8310CC2C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-17(r11)
	PPC_STORE_U8(ctx.r11.u32 + -17, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CC48"))) PPC_WEAK_FUNC(sub_8310CC48);
PPC_FUNC_IMPL(__imp__sub_8310CC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32012
	ctx.r4.s64 = ctx.r11.s64 + 32012;
	// bl 0x82429b48
	ctx.lr = 0x8310CC64;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2085(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2085, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CC80"))) PPC_WEAK_FUNC(sub_8310CC80);
PPC_FUNC_IMPL(__imp__sub_8310CC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32016
	ctx.r4.s64 = ctx.r11.s64 + 32016;
	// bl 0x82429b48
	ctx.lr = 0x8310CC9C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-159(r11)
	PPC_STORE_U8(ctx.r11.u32 + -159, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CCB8"))) PPC_WEAK_FUNC(sub_8310CCB8);
PPC_FUNC_IMPL(__imp__sub_8310CCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32020
	ctx.r4.s64 = ctx.r11.s64 + 32020;
	// bl 0x82429b48
	ctx.lr = 0x8310CCD4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,964(r11)
	PPC_STORE_U8(ctx.r11.u32 + 964, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CCF0"))) PPC_WEAK_FUNC(sub_8310CCF0);
PPC_FUNC_IMPL(__imp__sub_8310CCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32024
	ctx.r4.s64 = ctx.r11.s64 + 32024;
	// bl 0x82429b48
	ctx.lr = 0x8310CD0C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-169(r11)
	PPC_STORE_U8(ctx.r11.u32 + -169, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CD28"))) PPC_WEAK_FUNC(sub_8310CD28);
PPC_FUNC_IMPL(__imp__sub_8310CD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32028
	ctx.r4.s64 = ctx.r11.s64 + 32028;
	// bl 0x82429b48
	ctx.lr = 0x8310CD44;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2708(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2708, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CD60"))) PPC_WEAK_FUNC(sub_8310CD60);
PPC_FUNC_IMPL(__imp__sub_8310CD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32032
	ctx.r4.s64 = ctx.r11.s64 + 32032;
	// bl 0x82429b48
	ctx.lr = 0x8310CD7C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2871(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2871, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CD98"))) PPC_WEAK_FUNC(sub_8310CD98);
PPC_FUNC_IMPL(__imp__sub_8310CD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32036
	ctx.r4.s64 = ctx.r11.s64 + 32036;
	// bl 0x82429b48
	ctx.lr = 0x8310CDB4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4930(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4930, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CDD0"))) PPC_WEAK_FUNC(sub_8310CDD0);
PPC_FUNC_IMPL(__imp__sub_8310CDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32040
	ctx.r4.s64 = ctx.r11.s64 + 32040;
	// bl 0x82429b48
	ctx.lr = 0x8310CDEC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1381(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1381, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CE08"))) PPC_WEAK_FUNC(sub_8310CE08);
PPC_FUNC_IMPL(__imp__sub_8310CE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32044
	ctx.r4.s64 = ctx.r11.s64 + 32044;
	// bl 0x82429b48
	ctx.lr = 0x8310CE24;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2305(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2305, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CE40"))) PPC_WEAK_FUNC(sub_8310CE40);
PPC_FUNC_IMPL(__imp__sub_8310CE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32048
	ctx.r4.s64 = ctx.r11.s64 + 32048;
	// bl 0x82429b48
	ctx.lr = 0x8310CE5C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3837(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3837, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CE78"))) PPC_WEAK_FUNC(sub_8310CE78);
PPC_FUNC_IMPL(__imp__sub_8310CE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32052
	ctx.r4.s64 = ctx.r11.s64 + 32052;
	// bl 0x82429b48
	ctx.lr = 0x8310CE94;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4745(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4745, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CEB0"))) PPC_WEAK_FUNC(sub_8310CEB0);
PPC_FUNC_IMPL(__imp__sub_8310CEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32056
	ctx.r4.s64 = ctx.r11.s64 + 32056;
	// bl 0x82429b48
	ctx.lr = 0x8310CECC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310CEE8"))) PPC_WEAK_FUNC(sub_8310CEE8);
PPC_FUNC_IMPL(__imp__sub_8310CEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32060
	ctx.r4.s64 = ctx.r11.s64 + 32060;
	// bl 0x82429b48
	ctx.lr = 0x8310CF04;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4744(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4744, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CF20"))) PPC_WEAK_FUNC(sub_8310CF20);
PPC_FUNC_IMPL(__imp__sub_8310CF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32064
	ctx.r4.s64 = ctx.r11.s64 + 32064;
	// bl 0x82429b48
	ctx.lr = 0x8310CF3C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1824(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1824, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CF58"))) PPC_WEAK_FUNC(sub_8310CF58);
PPC_FUNC_IMPL(__imp__sub_8310CF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32068
	ctx.r4.s64 = ctx.r11.s64 + 32068;
	// bl 0x82429b48
	ctx.lr = 0x8310CF74;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1893(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1893, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CF90"))) PPC_WEAK_FUNC(sub_8310CF90);
PPC_FUNC_IMPL(__imp__sub_8310CF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32072
	ctx.r4.s64 = ctx.r11.s64 + 32072;
	// bl 0x82429b48
	ctx.lr = 0x8310CFAC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4255(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4255, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310CFC8"))) PPC_WEAK_FUNC(sub_8310CFC8);
PPC_FUNC_IMPL(__imp__sub_8310CFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32076
	ctx.r4.s64 = ctx.r11.s64 + 32076;
	// bl 0x82429b48
	ctx.lr = 0x8310CFE4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1345(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1345, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D000"))) PPC_WEAK_FUNC(sub_8310D000);
PPC_FUNC_IMPL(__imp__sub_8310D000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32080
	ctx.r4.s64 = ctx.r11.s64 + 32080;
	// bl 0x82429b48
	ctx.lr = 0x8310D01C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,149(r11)
	PPC_STORE_U8(ctx.r11.u32 + 149, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D038"))) PPC_WEAK_FUNC(sub_8310D038);
PPC_FUNC_IMPL(__imp__sub_8310D038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32084
	ctx.r4.s64 = ctx.r11.s64 + 32084;
	// bl 0x82429b48
	ctx.lr = 0x8310D054;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-18(r11)
	PPC_STORE_U8(ctx.r11.u32 + -18, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D070"))) PPC_WEAK_FUNC(sub_8310D070);
PPC_FUNC_IMPL(__imp__sub_8310D070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32088
	ctx.r4.s64 = ctx.r11.s64 + 32088;
	// bl 0x82429b48
	ctx.lr = 0x8310D08C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,635(r11)
	PPC_STORE_U8(ctx.r11.u32 + 635, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D0A8"))) PPC_WEAK_FUNC(sub_8310D0A8);
PPC_FUNC_IMPL(__imp__sub_8310D0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32092
	ctx.r4.s64 = ctx.r11.s64 + 32092;
	// bl 0x82429b48
	ctx.lr = 0x8310D0C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310D0E0"))) PPC_WEAK_FUNC(sub_8310D0E0);
PPC_FUNC_IMPL(__imp__sub_8310D0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32096
	ctx.r4.s64 = ctx.r11.s64 + 32096;
	// bl 0x82429b48
	ctx.lr = 0x8310D0FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4758(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4758, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D118"))) PPC_WEAK_FUNC(sub_8310D118);
PPC_FUNC_IMPL(__imp__sub_8310D118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32100
	ctx.r4.s64 = ctx.r11.s64 + 32100;
	// bl 0x82429b48
	ctx.lr = 0x8310D134;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310D150"))) PPC_WEAK_FUNC(sub_8310D150);
PPC_FUNC_IMPL(__imp__sub_8310D150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32104
	ctx.r4.s64 = ctx.r11.s64 + 32104;
	// bl 0x82429b48
	ctx.lr = 0x8310D16C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310D188"))) PPC_WEAK_FUNC(sub_8310D188);
PPC_FUNC_IMPL(__imp__sub_8310D188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32108
	ctx.r4.s64 = ctx.r11.s64 + 32108;
	// bl 0x82429b48
	ctx.lr = 0x8310D1A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1574(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1574, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D1C0"))) PPC_WEAK_FUNC(sub_8310D1C0);
PPC_FUNC_IMPL(__imp__sub_8310D1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32112
	ctx.r4.s64 = ctx.r11.s64 + 32112;
	// bl 0x82429b48
	ctx.lr = 0x8310D1DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3586(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3586, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D1F8"))) PPC_WEAK_FUNC(sub_8310D1F8);
PPC_FUNC_IMPL(__imp__sub_8310D1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32116
	ctx.r4.s64 = ctx.r11.s64 + 32116;
	// bl 0x82429b48
	ctx.lr = 0x8310D214;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3909(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3909, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D230"))) PPC_WEAK_FUNC(sub_8310D230);
PPC_FUNC_IMPL(__imp__sub_8310D230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32120
	ctx.r4.s64 = ctx.r11.s64 + 32120;
	// bl 0x82429b48
	ctx.lr = 0x8310D24C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4225(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4225, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D268"))) PPC_WEAK_FUNC(sub_8310D268);
PPC_FUNC_IMPL(__imp__sub_8310D268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32124
	ctx.r4.s64 = ctx.r11.s64 + 32124;
	// bl 0x82429b48
	ctx.lr = 0x8310D284;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2750(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2750, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D2A0"))) PPC_WEAK_FUNC(sub_8310D2A0);
PPC_FUNC_IMPL(__imp__sub_8310D2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32128
	ctx.r4.s64 = ctx.r11.s64 + 32128;
	// bl 0x82429b48
	ctx.lr = 0x8310D2BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3721(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3721, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D2D8"))) PPC_WEAK_FUNC(sub_8310D2D8);
PPC_FUNC_IMPL(__imp__sub_8310D2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32132
	ctx.r4.s64 = ctx.r11.s64 + 32132;
	// bl 0x82429b48
	ctx.lr = 0x8310D2F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1418(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1418, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D310"))) PPC_WEAK_FUNC(sub_8310D310);
PPC_FUNC_IMPL(__imp__sub_8310D310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32136
	ctx.r4.s64 = ctx.r11.s64 + 32136;
	// bl 0x82429b48
	ctx.lr = 0x8310D32C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4052(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4052, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D348"))) PPC_WEAK_FUNC(sub_8310D348);
PPC_FUNC_IMPL(__imp__sub_8310D348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32140
	ctx.r4.s64 = ctx.r11.s64 + 32140;
	// bl 0x82429b48
	ctx.lr = 0x8310D364;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4349(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4349, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D380"))) PPC_WEAK_FUNC(sub_8310D380);
PPC_FUNC_IMPL(__imp__sub_8310D380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32144
	ctx.r4.s64 = ctx.r11.s64 + 32144;
	// bl 0x82429b48
	ctx.lr = 0x8310D39C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5078(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5078, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D3B8"))) PPC_WEAK_FUNC(sub_8310D3B8);
PPC_FUNC_IMPL(__imp__sub_8310D3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32148
	ctx.r4.s64 = ctx.r11.s64 + 32148;
	// bl 0x82429b48
	ctx.lr = 0x8310D3D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4797(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4797, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D3F0"))) PPC_WEAK_FUNC(sub_8310D3F0);
PPC_FUNC_IMPL(__imp__sub_8310D3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32152
	ctx.r4.s64 = ctx.r11.s64 + 32152;
	// bl 0x82429b48
	ctx.lr = 0x8310D40C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310D428"))) PPC_WEAK_FUNC(sub_8310D428);
PPC_FUNC_IMPL(__imp__sub_8310D428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32156
	ctx.r4.s64 = ctx.r11.s64 + 32156;
	// bl 0x82429b48
	ctx.lr = 0x8310D444;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4715(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4715, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D460"))) PPC_WEAK_FUNC(sub_8310D460);
PPC_FUNC_IMPL(__imp__sub_8310D460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32160
	ctx.r4.s64 = ctx.r11.s64 + 32160;
	// bl 0x82429b48
	ctx.lr = 0x8310D47C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4309(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4309, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D498"))) PPC_WEAK_FUNC(sub_8310D498);
PPC_FUNC_IMPL(__imp__sub_8310D498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32164
	ctx.r4.s64 = ctx.r11.s64 + 32164;
	// bl 0x82429b48
	ctx.lr = 0x8310D4B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2482(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2482, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D4D0"))) PPC_WEAK_FUNC(sub_8310D4D0);
PPC_FUNC_IMPL(__imp__sub_8310D4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32168
	ctx.r4.s64 = ctx.r11.s64 + 32168;
	// bl 0x82429b48
	ctx.lr = 0x8310D4EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310D508"))) PPC_WEAK_FUNC(sub_8310D508);
PPC_FUNC_IMPL(__imp__sub_8310D508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32172
	ctx.r4.s64 = ctx.r11.s64 + 32172;
	// bl 0x82429b48
	ctx.lr = 0x8310D524;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1383(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1383, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D540"))) PPC_WEAK_FUNC(sub_8310D540);
PPC_FUNC_IMPL(__imp__sub_8310D540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32176
	ctx.r4.s64 = ctx.r11.s64 + 32176;
	// bl 0x82429b48
	ctx.lr = 0x8310D55C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,127(r11)
	PPC_STORE_U8(ctx.r11.u32 + 127, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D578"))) PPC_WEAK_FUNC(sub_8310D578);
PPC_FUNC_IMPL(__imp__sub_8310D578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32180
	ctx.r4.s64 = ctx.r11.s64 + 32180;
	// bl 0x82429b48
	ctx.lr = 0x8310D594;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310D5B0"))) PPC_WEAK_FUNC(sub_8310D5B0);
PPC_FUNC_IMPL(__imp__sub_8310D5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32184
	ctx.r4.s64 = ctx.r11.s64 + 32184;
	// bl 0x82429b48
	ctx.lr = 0x8310D5CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310D5E8"))) PPC_WEAK_FUNC(sub_8310D5E8);
PPC_FUNC_IMPL(__imp__sub_8310D5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32188
	ctx.r4.s64 = ctx.r11.s64 + 32188;
	// bl 0x82429b48
	ctx.lr = 0x8310D604;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-157(r11)
	PPC_STORE_U8(ctx.r11.u32 + -157, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D620"))) PPC_WEAK_FUNC(sub_8310D620);
PPC_FUNC_IMPL(__imp__sub_8310D620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32192
	ctx.r4.s64 = ctx.r11.s64 + 32192;
	// bl 0x82429b48
	ctx.lr = 0x8310D63C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,966(r11)
	PPC_STORE_U8(ctx.r11.u32 + 966, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D658"))) PPC_WEAK_FUNC(sub_8310D658);
PPC_FUNC_IMPL(__imp__sub_8310D658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32196
	ctx.r4.s64 = ctx.r11.s64 + 32196;
	// bl 0x82429b48
	ctx.lr = 0x8310D674;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310D690"))) PPC_WEAK_FUNC(sub_8310D690);
PPC_FUNC_IMPL(__imp__sub_8310D690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32200
	ctx.r4.s64 = ctx.r11.s64 + 32200;
	// bl 0x82429b48
	ctx.lr = 0x8310D6AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,282(r11)
	PPC_STORE_U8(ctx.r11.u32 + 282, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D6C8"))) PPC_WEAK_FUNC(sub_8310D6C8);
PPC_FUNC_IMPL(__imp__sub_8310D6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32204
	ctx.r4.s64 = ctx.r11.s64 + 32204;
	// bl 0x82429b48
	ctx.lr = 0x8310D6E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-89(r11)
	PPC_STORE_U8(ctx.r11.u32 + -89, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D700"))) PPC_WEAK_FUNC(sub_8310D700);
PPC_FUNC_IMPL(__imp__sub_8310D700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32208
	ctx.r4.s64 = ctx.r11.s64 + 32208;
	// bl 0x82429b48
	ctx.lr = 0x8310D71C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310D738"))) PPC_WEAK_FUNC(sub_8310D738);
PPC_FUNC_IMPL(__imp__sub_8310D738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32212
	ctx.r4.s64 = ctx.r11.s64 + 32212;
	// bl 0x82429b48
	ctx.lr = 0x8310D754;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2248(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2248, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D770"))) PPC_WEAK_FUNC(sub_8310D770);
PPC_FUNC_IMPL(__imp__sub_8310D770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32216
	ctx.r4.s64 = ctx.r11.s64 + 32216;
	// bl 0x82429b48
	ctx.lr = 0x8310D78C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,946(r11)
	PPC_STORE_U8(ctx.r11.u32 + 946, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D7A8"))) PPC_WEAK_FUNC(sub_8310D7A8);
PPC_FUNC_IMPL(__imp__sub_8310D7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32220
	ctx.r4.s64 = ctx.r11.s64 + 32220;
	// bl 0x82429b48
	ctx.lr = 0x8310D7C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4185(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4185, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D7E0"))) PPC_WEAK_FUNC(sub_8310D7E0);
PPC_FUNC_IMPL(__imp__sub_8310D7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32224
	ctx.r4.s64 = ctx.r11.s64 + 32224;
	// bl 0x82429b48
	ctx.lr = 0x8310D7FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3585(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3585, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D818"))) PPC_WEAK_FUNC(sub_8310D818);
PPC_FUNC_IMPL(__imp__sub_8310D818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32228
	ctx.r4.s64 = ctx.r11.s64 + 32228;
	// bl 0x82429b48
	ctx.lr = 0x8310D834;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1667(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1667, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D850"))) PPC_WEAK_FUNC(sub_8310D850);
PPC_FUNC_IMPL(__imp__sub_8310D850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32232
	ctx.r4.s64 = ctx.r11.s64 + 32232;
	// bl 0x82429b48
	ctx.lr = 0x8310D86C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4850(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4850, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D888"))) PPC_WEAK_FUNC(sub_8310D888);
PPC_FUNC_IMPL(__imp__sub_8310D888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32236
	ctx.r4.s64 = ctx.r11.s64 + 32236;
	// bl 0x82429b48
	ctx.lr = 0x8310D8A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4575(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4575, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D8C0"))) PPC_WEAK_FUNC(sub_8310D8C0);
PPC_FUNC_IMPL(__imp__sub_8310D8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32240
	ctx.r4.s64 = ctx.r11.s64 + 32240;
	// bl 0x82429b48
	ctx.lr = 0x8310D8DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5057(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5057, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D8F8"))) PPC_WEAK_FUNC(sub_8310D8F8);
PPC_FUNC_IMPL(__imp__sub_8310D8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32244
	ctx.r4.s64 = ctx.r11.s64 + 32244;
	// bl 0x82429b48
	ctx.lr = 0x8310D914;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3984(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3984, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D930"))) PPC_WEAK_FUNC(sub_8310D930);
PPC_FUNC_IMPL(__imp__sub_8310D930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32248
	ctx.r4.s64 = ctx.r11.s64 + 32248;
	// bl 0x82429b48
	ctx.lr = 0x8310D94C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2770(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2770, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D968"))) PPC_WEAK_FUNC(sub_8310D968);
PPC_FUNC_IMPL(__imp__sub_8310D968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32252
	ctx.r4.s64 = ctx.r11.s64 + 32252;
	// bl 0x82429b48
	ctx.lr = 0x8310D984;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2035(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2035, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D9A0"))) PPC_WEAK_FUNC(sub_8310D9A0);
PPC_FUNC_IMPL(__imp__sub_8310D9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32256
	ctx.r4.s64 = ctx.r11.s64 + 32256;
	// bl 0x82429b48
	ctx.lr = 0x8310D9BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5025(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5025, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310D9D8"))) PPC_WEAK_FUNC(sub_8310D9D8);
PPC_FUNC_IMPL(__imp__sub_8310D9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32260
	ctx.r4.s64 = ctx.r11.s64 + 32260;
	// bl 0x82429b48
	ctx.lr = 0x8310D9F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,361(r11)
	PPC_STORE_U8(ctx.r11.u32 + 361, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DA10"))) PPC_WEAK_FUNC(sub_8310DA10);
PPC_FUNC_IMPL(__imp__sub_8310DA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32264
	ctx.r4.s64 = ctx.r11.s64 + 32264;
	// bl 0x82429b48
	ctx.lr = 0x8310DA2C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1351(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1351, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DA48"))) PPC_WEAK_FUNC(sub_8310DA48);
PPC_FUNC_IMPL(__imp__sub_8310DA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32268
	ctx.r4.s64 = ctx.r11.s64 + 32268;
	// bl 0x82429b48
	ctx.lr = 0x8310DA64;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1441(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1441, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DA80"))) PPC_WEAK_FUNC(sub_8310DA80);
PPC_FUNC_IMPL(__imp__sub_8310DA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32272
	ctx.r4.s64 = ctx.r11.s64 + 32272;
	// bl 0x82429b48
	ctx.lr = 0x8310DA9C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3732(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3732, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DAB8"))) PPC_WEAK_FUNC(sub_8310DAB8);
PPC_FUNC_IMPL(__imp__sub_8310DAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32276
	ctx.r4.s64 = ctx.r11.s64 + 32276;
	// bl 0x82429b48
	ctx.lr = 0x8310DAD4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5014(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5014, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DAF0"))) PPC_WEAK_FUNC(sub_8310DAF0);
PPC_FUNC_IMPL(__imp__sub_8310DAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32280
	ctx.r4.s64 = ctx.r11.s64 + 32280;
	// bl 0x82429b48
	ctx.lr = 0x8310DB0C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1948(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1948, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DB28"))) PPC_WEAK_FUNC(sub_8310DB28);
PPC_FUNC_IMPL(__imp__sub_8310DB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32284
	ctx.r4.s64 = ctx.r11.s64 + 32284;
	// bl 0x82429b48
	ctx.lr = 0x8310DB44;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DB60"))) PPC_WEAK_FUNC(sub_8310DB60);
PPC_FUNC_IMPL(__imp__sub_8310DB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32288
	ctx.r4.s64 = ctx.r11.s64 + 32288;
	// bl 0x82429b48
	ctx.lr = 0x8310DB7C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5026(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5026, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DB98"))) PPC_WEAK_FUNC(sub_8310DB98);
PPC_FUNC_IMPL(__imp__sub_8310DB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32292
	ctx.r4.s64 = ctx.r11.s64 + 32292;
	// bl 0x82429b48
	ctx.lr = 0x8310DBB4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4496(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4496, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DBD0"))) PPC_WEAK_FUNC(sub_8310DBD0);
PPC_FUNC_IMPL(__imp__sub_8310DBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32296
	ctx.r4.s64 = ctx.r11.s64 + 32296;
	// bl 0x82429b48
	ctx.lr = 0x8310DBEC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4616(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4616, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DC08"))) PPC_WEAK_FUNC(sub_8310DC08);
PPC_FUNC_IMPL(__imp__sub_8310DC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32300
	ctx.r4.s64 = ctx.r11.s64 + 32300;
	// bl 0x82429b48
	ctx.lr = 0x8310DC24;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1668(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1668, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DC40"))) PPC_WEAK_FUNC(sub_8310DC40);
PPC_FUNC_IMPL(__imp__sub_8310DC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32304
	ctx.r4.s64 = ctx.r11.s64 + 32304;
	// bl 0x82429b48
	ctx.lr = 0x8310DC5C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310DC78"))) PPC_WEAK_FUNC(sub_8310DC78);
PPC_FUNC_IMPL(__imp__sub_8310DC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32308
	ctx.r4.s64 = ctx.r11.s64 + 32308;
	// bl 0x82429b48
	ctx.lr = 0x8310DC94;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4452(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4452, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DCB0"))) PPC_WEAK_FUNC(sub_8310DCB0);
PPC_FUNC_IMPL(__imp__sub_8310DCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32312
	ctx.r4.s64 = ctx.r11.s64 + 32312;
	// bl 0x82429b48
	ctx.lr = 0x8310DCCC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2429(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2429, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DCE8"))) PPC_WEAK_FUNC(sub_8310DCE8);
PPC_FUNC_IMPL(__imp__sub_8310DCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32316
	ctx.r4.s64 = ctx.r11.s64 + 32316;
	// bl 0x82429b48
	ctx.lr = 0x8310DD04;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310DD20"))) PPC_WEAK_FUNC(sub_8310DD20);
PPC_FUNC_IMPL(__imp__sub_8310DD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32320
	ctx.r4.s64 = ctx.r11.s64 + 32320;
	// bl 0x82429b48
	ctx.lr = 0x8310DD3C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4197(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4197, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DD58"))) PPC_WEAK_FUNC(sub_8310DD58);
PPC_FUNC_IMPL(__imp__sub_8310DD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32324
	ctx.r4.s64 = ctx.r11.s64 + 32324;
	// bl 0x82429b48
	ctx.lr = 0x8310DD74;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2033(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2033, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DD90"))) PPC_WEAK_FUNC(sub_8310DD90);
PPC_FUNC_IMPL(__imp__sub_8310DD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32328
	ctx.r4.s64 = ctx.r11.s64 + 32328;
	// bl 0x82429b48
	ctx.lr = 0x8310DDAC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4851(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4851, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DDC8"))) PPC_WEAK_FUNC(sub_8310DDC8);
PPC_FUNC_IMPL(__imp__sub_8310DDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32332
	ctx.r4.s64 = ctx.r11.s64 + 32332;
	// bl 0x82429b48
	ctx.lr = 0x8310DDE4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3670(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3670, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DE00"))) PPC_WEAK_FUNC(sub_8310DE00);
PPC_FUNC_IMPL(__imp__sub_8310DE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32336
	ctx.r4.s64 = ctx.r11.s64 + 32336;
	// bl 0x82429b48
	ctx.lr = 0x8310DE1C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2471(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2471, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DE38"))) PPC_WEAK_FUNC(sub_8310DE38);
PPC_FUNC_IMPL(__imp__sub_8310DE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32340
	ctx.r4.s64 = ctx.r11.s64 + 32340;
	// bl 0x82429b48
	ctx.lr = 0x8310DE54;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4380(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4380, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DE70"))) PPC_WEAK_FUNC(sub_8310DE70);
PPC_FUNC_IMPL(__imp__sub_8310DE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32344
	ctx.r4.s64 = ctx.r11.s64 + 32344;
	// bl 0x82429b48
	ctx.lr = 0x8310DE8C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2783(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2783, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DEA8"))) PPC_WEAK_FUNC(sub_8310DEA8);
PPC_FUNC_IMPL(__imp__sub_8310DEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32348
	ctx.r4.s64 = ctx.r11.s64 + 32348;
	// bl 0x82429b48
	ctx.lr = 0x8310DEC4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3999(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3999, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DEE0"))) PPC_WEAK_FUNC(sub_8310DEE0);
PPC_FUNC_IMPL(__imp__sub_8310DEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32352
	ctx.r4.s64 = ctx.r11.s64 + 32352;
	// bl 0x82429b48
	ctx.lr = 0x8310DEFC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5069(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5069, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DF18"))) PPC_WEAK_FUNC(sub_8310DF18);
PPC_FUNC_IMPL(__imp__sub_8310DF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x82429b48
	ctx.lr = 0x8310DF34;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310DF50"))) PPC_WEAK_FUNC(sub_8310DF50);
PPC_FUNC_IMPL(__imp__sub_8310DF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32360
	ctx.r4.s64 = ctx.r11.s64 + 32360;
	// bl 0x82429b48
	ctx.lr = 0x8310DF6C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1709(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1709, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DF88"))) PPC_WEAK_FUNC(sub_8310DF88);
PPC_FUNC_IMPL(__imp__sub_8310DF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32364
	ctx.r4.s64 = ctx.r11.s64 + 32364;
	// bl 0x82429b48
	ctx.lr = 0x8310DFA4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,54(r11)
	PPC_STORE_U8(ctx.r11.u32 + 54, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DFC0"))) PPC_WEAK_FUNC(sub_8310DFC0);
PPC_FUNC_IMPL(__imp__sub_8310DFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32368
	ctx.r4.s64 = ctx.r11.s64 + 32368;
	// bl 0x82429b48
	ctx.lr = 0x8310DFDC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3868(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3868, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310DFF8"))) PPC_WEAK_FUNC(sub_8310DFF8);
PPC_FUNC_IMPL(__imp__sub_8310DFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32372
	ctx.r4.s64 = ctx.r11.s64 + 32372;
	// bl 0x82429b48
	ctx.lr = 0x8310E014;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3799(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3799, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E030"))) PPC_WEAK_FUNC(sub_8310E030);
PPC_FUNC_IMPL(__imp__sub_8310E030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32376
	ctx.r4.s64 = ctx.r11.s64 + 32376;
	// bl 0x82429b48
	ctx.lr = 0x8310E04C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3787(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3787, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E068"))) PPC_WEAK_FUNC(sub_8310E068);
PPC_FUNC_IMPL(__imp__sub_8310E068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32380
	ctx.r4.s64 = ctx.r11.s64 + 32380;
	// bl 0x82429b48
	ctx.lr = 0x8310E084;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2408(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2408, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E0A0"))) PPC_WEAK_FUNC(sub_8310E0A0);
PPC_FUNC_IMPL(__imp__sub_8310E0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32384
	ctx.r4.s64 = ctx.r11.s64 + 32384;
	// bl 0x82429b48
	ctx.lr = 0x8310E0BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4385(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4385, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E0D8"))) PPC_WEAK_FUNC(sub_8310E0D8);
PPC_FUNC_IMPL(__imp__sub_8310E0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32388
	ctx.r4.s64 = ctx.r11.s64 + 32388;
	// bl 0x82429b48
	ctx.lr = 0x8310E0F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1214(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1214, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E110"))) PPC_WEAK_FUNC(sub_8310E110);
PPC_FUNC_IMPL(__imp__sub_8310E110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32392
	ctx.r4.s64 = ctx.r11.s64 + 32392;
	// bl 0x82429b48
	ctx.lr = 0x8310E12C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4108, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E148"))) PPC_WEAK_FUNC(sub_8310E148);
PPC_FUNC_IMPL(__imp__sub_8310E148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32396
	ctx.r4.s64 = ctx.r11.s64 + 32396;
	// bl 0x82429b48
	ctx.lr = 0x8310E164;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310E180"))) PPC_WEAK_FUNC(sub_8310E180);
PPC_FUNC_IMPL(__imp__sub_8310E180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32400
	ctx.r4.s64 = ctx.r11.s64 + 32400;
	// bl 0x82429b48
	ctx.lr = 0x8310E19C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4248(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4248, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E1B8"))) PPC_WEAK_FUNC(sub_8310E1B8);
PPC_FUNC_IMPL(__imp__sub_8310E1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32404
	ctx.r4.s64 = ctx.r11.s64 + 32404;
	// bl 0x82429b48
	ctx.lr = 0x8310E1D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310E1F0"))) PPC_WEAK_FUNC(sub_8310E1F0);
PPC_FUNC_IMPL(__imp__sub_8310E1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32408
	ctx.r4.s64 = ctx.r11.s64 + 32408;
	// bl 0x82429b48
	ctx.lr = 0x8310E20C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4406(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4406, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E228"))) PPC_WEAK_FUNC(sub_8310E228);
PPC_FUNC_IMPL(__imp__sub_8310E228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32412
	ctx.r4.s64 = ctx.r11.s64 + 32412;
	// bl 0x82429b48
	ctx.lr = 0x8310E244;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310E260"))) PPC_WEAK_FUNC(sub_8310E260);
PPC_FUNC_IMPL(__imp__sub_8310E260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32416
	ctx.r4.s64 = ctx.r11.s64 + 32416;
	// bl 0x82429b48
	ctx.lr = 0x8310E27C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,165(r11)
	PPC_STORE_U8(ctx.r11.u32 + 165, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E298"))) PPC_WEAK_FUNC(sub_8310E298);
PPC_FUNC_IMPL(__imp__sub_8310E298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32420
	ctx.r4.s64 = ctx.r11.s64 + 32420;
	// bl 0x82429b48
	ctx.lr = 0x8310E2B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,921(r11)
	PPC_STORE_U8(ctx.r11.u32 + 921, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E2D0"))) PPC_WEAK_FUNC(sub_8310E2D0);
PPC_FUNC_IMPL(__imp__sub_8310E2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32424
	ctx.r4.s64 = ctx.r11.s64 + 32424;
	// bl 0x82429b48
	ctx.lr = 0x8310E2EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,162(r11)
	PPC_STORE_U8(ctx.r11.u32 + 162, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E308"))) PPC_WEAK_FUNC(sub_8310E308);
PPC_FUNC_IMPL(__imp__sub_8310E308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32428
	ctx.r4.s64 = ctx.r11.s64 + 32428;
	// bl 0x82429b48
	ctx.lr = 0x8310E324;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,965(r11)
	PPC_STORE_U8(ctx.r11.u32 + 965, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E340"))) PPC_WEAK_FUNC(sub_8310E340);
PPC_FUNC_IMPL(__imp__sub_8310E340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32432
	ctx.r4.s64 = ctx.r11.s64 + 32432;
	// bl 0x82429b48
	ctx.lr = 0x8310E35C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2246, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E378"))) PPC_WEAK_FUNC(sub_8310E378);
PPC_FUNC_IMPL(__imp__sub_8310E378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32436
	ctx.r4.s64 = ctx.r11.s64 + 32436;
	// bl 0x82429b48
	ctx.lr = 0x8310E394;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310E3B0"))) PPC_WEAK_FUNC(sub_8310E3B0);
PPC_FUNC_IMPL(__imp__sub_8310E3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32440
	ctx.r4.s64 = ctx.r11.s64 + 32440;
	// bl 0x82429b48
	ctx.lr = 0x8310E3CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4386(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4386, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E3E8"))) PPC_WEAK_FUNC(sub_8310E3E8);
PPC_FUNC_IMPL(__imp__sub_8310E3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32444
	ctx.r4.s64 = ctx.r11.s64 + 32444;
	// bl 0x82429b48
	ctx.lr = 0x8310E404;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2141(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2141, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E420"))) PPC_WEAK_FUNC(sub_8310E420);
PPC_FUNC_IMPL(__imp__sub_8310E420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32448
	ctx.r4.s64 = ctx.r11.s64 + 32448;
	// bl 0x82429b48
	ctx.lr = 0x8310E43C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310E458"))) PPC_WEAK_FUNC(sub_8310E458);
PPC_FUNC_IMPL(__imp__sub_8310E458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32452
	ctx.r4.s64 = ctx.r11.s64 + 32452;
	// bl 0x82429b48
	ctx.lr = 0x8310E474;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3097(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3097, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E490"))) PPC_WEAK_FUNC(sub_8310E490);
PPC_FUNC_IMPL(__imp__sub_8310E490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32456
	ctx.r4.s64 = ctx.r11.s64 + 32456;
	// bl 0x82429b48
	ctx.lr = 0x8310E4AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3455(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3455, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E4C8"))) PPC_WEAK_FUNC(sub_8310E4C8);
PPC_FUNC_IMPL(__imp__sub_8310E4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32460
	ctx.r4.s64 = ctx.r11.s64 + 32460;
	// bl 0x82429b48
	ctx.lr = 0x8310E4E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-38(r11)
	PPC_STORE_U8(ctx.r11.u32 + -38, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E500"))) PPC_WEAK_FUNC(sub_8310E500);
PPC_FUNC_IMPL(__imp__sub_8310E500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32464
	ctx.r4.s64 = ctx.r11.s64 + 32464;
	// bl 0x82429b48
	ctx.lr = 0x8310E51C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-61(r11)
	PPC_STORE_U8(ctx.r11.u32 + -61, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E538"))) PPC_WEAK_FUNC(sub_8310E538);
PPC_FUNC_IMPL(__imp__sub_8310E538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32468
	ctx.r4.s64 = ctx.r11.s64 + 32468;
	// bl 0x82429b48
	ctx.lr = 0x8310E554;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4871(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4871, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E570"))) PPC_WEAK_FUNC(sub_8310E570);
PPC_FUNC_IMPL(__imp__sub_8310E570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32472
	ctx.r4.s64 = ctx.r11.s64 + 32472;
	// bl 0x82429b48
	ctx.lr = 0x8310E58C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2480(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2480, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E5A8"))) PPC_WEAK_FUNC(sub_8310E5A8);
PPC_FUNC_IMPL(__imp__sub_8310E5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32476
	ctx.r4.s64 = ctx.r11.s64 + 32476;
	// bl 0x82429b48
	ctx.lr = 0x8310E5C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5074(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5074, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E5E0"))) PPC_WEAK_FUNC(sub_8310E5E0);
PPC_FUNC_IMPL(__imp__sub_8310E5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32480
	ctx.r4.s64 = ctx.r11.s64 + 32480;
	// bl 0x82429b48
	ctx.lr = 0x8310E5FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310E618"))) PPC_WEAK_FUNC(sub_8310E618);
PPC_FUNC_IMPL(__imp__sub_8310E618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32484
	ctx.r4.s64 = ctx.r11.s64 + 32484;
	// bl 0x82429b48
	ctx.lr = 0x8310E634;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1542(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1542, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E650"))) PPC_WEAK_FUNC(sub_8310E650);
PPC_FUNC_IMPL(__imp__sub_8310E650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32488
	ctx.r4.s64 = ctx.r11.s64 + 32488;
	// bl 0x82429b48
	ctx.lr = 0x8310E66C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-109(r11)
	PPC_STORE_U8(ctx.r11.u32 + -109, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E688"))) PPC_WEAK_FUNC(sub_8310E688);
PPC_FUNC_IMPL(__imp__sub_8310E688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32492
	ctx.r4.s64 = ctx.r11.s64 + 32492;
	// bl 0x82429b48
	ctx.lr = 0x8310E6A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3137(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3137, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E6C0"))) PPC_WEAK_FUNC(sub_8310E6C0);
PPC_FUNC_IMPL(__imp__sub_8310E6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32496
	ctx.r4.s64 = ctx.r11.s64 + 32496;
	// bl 0x82429b48
	ctx.lr = 0x8310E6DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-113(r11)
	PPC_STORE_U8(ctx.r11.u32 + -113, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E6F8"))) PPC_WEAK_FUNC(sub_8310E6F8);
PPC_FUNC_IMPL(__imp__sub_8310E6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32500
	ctx.r4.s64 = ctx.r11.s64 + 32500;
	// bl 0x82429b48
	ctx.lr = 0x8310E714;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310E730"))) PPC_WEAK_FUNC(sub_8310E730);
PPC_FUNC_IMPL(__imp__sub_8310E730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32504
	ctx.r4.s64 = ctx.r11.s64 + 32504;
	// bl 0x82429b48
	ctx.lr = 0x8310E74C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2768(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2768, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E768"))) PPC_WEAK_FUNC(sub_8310E768);
PPC_FUNC_IMPL(__imp__sub_8310E768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32508
	ctx.r4.s64 = ctx.r11.s64 + 32508;
	// bl 0x82429b48
	ctx.lr = 0x8310E784;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,306(r11)
	PPC_STORE_U8(ctx.r11.u32 + 306, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E7A0"))) PPC_WEAK_FUNC(sub_8310E7A0);
PPC_FUNC_IMPL(__imp__sub_8310E7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32512
	ctx.r4.s64 = ctx.r11.s64 + 32512;
	// bl 0x82429b48
	ctx.lr = 0x8310E7BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1471(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1471, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E7D8"))) PPC_WEAK_FUNC(sub_8310E7D8);
PPC_FUNC_IMPL(__imp__sub_8310E7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32516
	ctx.r4.s64 = ctx.r11.s64 + 32516;
	// bl 0x82429b48
	ctx.lr = 0x8310E7F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4796(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4796, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E810"))) PPC_WEAK_FUNC(sub_8310E810);
PPC_FUNC_IMPL(__imp__sub_8310E810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32520
	ctx.r4.s64 = ctx.r11.s64 + 32520;
	// bl 0x82429b48
	ctx.lr = 0x8310E82C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1845(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1845, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E848"))) PPC_WEAK_FUNC(sub_8310E848);
PPC_FUNC_IMPL(__imp__sub_8310E848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32524
	ctx.r4.s64 = ctx.r11.s64 + 32524;
	// bl 0x82429b48
	ctx.lr = 0x8310E864;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3733(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3733, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E880"))) PPC_WEAK_FUNC(sub_8310E880);
PPC_FUNC_IMPL(__imp__sub_8310E880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32528
	ctx.r4.s64 = ctx.r11.s64 + 32528;
	// bl 0x82429b48
	ctx.lr = 0x8310E89C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5058(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5058, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E8B8"))) PPC_WEAK_FUNC(sub_8310E8B8);
PPC_FUNC_IMPL(__imp__sub_8310E8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32532
	ctx.r4.s64 = ctx.r11.s64 + 32532;
	// bl 0x82429b48
	ctx.lr = 0x8310E8D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,-147(r11)
	PPC_STORE_U8(ctx.r11.u32 + -147, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E8F0"))) PPC_WEAK_FUNC(sub_8310E8F0);
PPC_FUNC_IMPL(__imp__sub_8310E8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32536
	ctx.r4.s64 = ctx.r11.s64 + 32536;
	// bl 0x82429b48
	ctx.lr = 0x8310E90C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2945(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2945, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E928"))) PPC_WEAK_FUNC(sub_8310E928);
PPC_FUNC_IMPL(__imp__sub_8310E928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32540
	ctx.r4.s64 = ctx.r11.s64 + 32540;
	// bl 0x82429b48
	ctx.lr = 0x8310E944;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4770(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4770, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E960"))) PPC_WEAK_FUNC(sub_8310E960);
PPC_FUNC_IMPL(__imp__sub_8310E960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32544
	ctx.r4.s64 = ctx.r11.s64 + 32544;
	// bl 0x82429b48
	ctx.lr = 0x8310E97C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5070(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5070, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310E998"))) PPC_WEAK_FUNC(sub_8310E998);
PPC_FUNC_IMPL(__imp__sub_8310E998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32548
	ctx.r4.s64 = ctx.r11.s64 + 32548;
	// bl 0x82429b48
	ctx.lr = 0x8310E9B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310E9D0"))) PPC_WEAK_FUNC(sub_8310E9D0);
PPC_FUNC_IMPL(__imp__sub_8310E9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32552
	ctx.r4.s64 = ctx.r11.s64 + 32552;
	// bl 0x82429b48
	ctx.lr = 0x8310E9EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1754(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1754, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EA08"))) PPC_WEAK_FUNC(sub_8310EA08);
PPC_FUNC_IMPL(__imp__sub_8310EA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32556
	ctx.r4.s64 = ctx.r11.s64 + 32556;
	// bl 0x82429b48
	ctx.lr = 0x8310EA24;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310EA40"))) PPC_WEAK_FUNC(sub_8310EA40);
PPC_FUNC_IMPL(__imp__sub_8310EA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32560
	ctx.r4.s64 = ctx.r11.s64 + 32560;
	// bl 0x82429b48
	ctx.lr = 0x8310EA5C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310EA78"))) PPC_WEAK_FUNC(sub_8310EA78);
PPC_FUNC_IMPL(__imp__sub_8310EA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32564
	ctx.r4.s64 = ctx.r11.s64 + 32564;
	// bl 0x82429b48
	ctx.lr = 0x8310EA94;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3543(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3543, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EAB0"))) PPC_WEAK_FUNC(sub_8310EAB0);
PPC_FUNC_IMPL(__imp__sub_8310EAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32568
	ctx.r4.s64 = ctx.r11.s64 + 32568;
	// bl 0x82429b48
	ctx.lr = 0x8310EACC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4388(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4388, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EAE8"))) PPC_WEAK_FUNC(sub_8310EAE8);
PPC_FUNC_IMPL(__imp__sub_8310EAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32572
	ctx.r4.s64 = ctx.r11.s64 + 32572;
	// bl 0x82429b48
	ctx.lr = 0x8310EB04;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2469(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2469, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EB20"))) PPC_WEAK_FUNC(sub_8310EB20);
PPC_FUNC_IMPL(__imp__sub_8310EB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32576
	ctx.r4.s64 = ctx.r11.s64 + 32576;
	// bl 0x82429b48
	ctx.lr = 0x8310EB3C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4658(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4658, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EB58"))) PPC_WEAK_FUNC(sub_8310EB58);
PPC_FUNC_IMPL(__imp__sub_8310EB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32580
	ctx.r4.s64 = ctx.r11.s64 + 32580;
	// bl 0x82429b48
	ctx.lr = 0x8310EB74;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310EB90"))) PPC_WEAK_FUNC(sub_8310EB90);
PPC_FUNC_IMPL(__imp__sub_8310EB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32584
	ctx.r4.s64 = ctx.r11.s64 + 32584;
	// bl 0x82429b48
	ctx.lr = 0x8310EBAC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3784(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3784, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EBC8"))) PPC_WEAK_FUNC(sub_8310EBC8);
PPC_FUNC_IMPL(__imp__sub_8310EBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32588
	ctx.r4.s64 = ctx.r11.s64 + 32588;
	// bl 0x82429b48
	ctx.lr = 0x8310EBE4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4453(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4453, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EC00"))) PPC_WEAK_FUNC(sub_8310EC00);
PPC_FUNC_IMPL(__imp__sub_8310EC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32592
	ctx.r4.s64 = ctx.r11.s64 + 32592;
	// bl 0x82429b48
	ctx.lr = 0x8310EC1C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1303(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1303, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EC38"))) PPC_WEAK_FUNC(sub_8310EC38);
PPC_FUNC_IMPL(__imp__sub_8310EC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32596
	ctx.r4.s64 = ctx.r11.s64 + 32596;
	// bl 0x82429b48
	ctx.lr = 0x8310EC54;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310EC70"))) PPC_WEAK_FUNC(sub_8310EC70);
PPC_FUNC_IMPL(__imp__sub_8310EC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32600
	ctx.r4.s64 = ctx.r11.s64 + 32600;
	// bl 0x82429b48
	ctx.lr = 0x8310EC8C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4924(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4924, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310ECA8"))) PPC_WEAK_FUNC(sub_8310ECA8);
PPC_FUNC_IMPL(__imp__sub_8310ECA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32604
	ctx.r4.s64 = ctx.r11.s64 + 32604;
	// bl 0x82429b48
	ctx.lr = 0x8310ECC4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4597(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4597, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310ECE0"))) PPC_WEAK_FUNC(sub_8310ECE0);
PPC_FUNC_IMPL(__imp__sub_8310ECE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32608
	ctx.r4.s64 = ctx.r11.s64 + 32608;
	// bl 0x82429b48
	ctx.lr = 0x8310ECFC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4897(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4897, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310ED18"))) PPC_WEAK_FUNC(sub_8310ED18);
PPC_FUNC_IMPL(__imp__sub_8310ED18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32612
	ctx.r4.s64 = ctx.r11.s64 + 32612;
	// bl 0x82429b48
	ctx.lr = 0x8310ED34;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1825(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1825, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310ED50"))) PPC_WEAK_FUNC(sub_8310ED50);
PPC_FUNC_IMPL(__imp__sub_8310ED50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32616
	ctx.r4.s64 = ctx.r11.s64 + 32616;
	// bl 0x82429b48
	ctx.lr = 0x8310ED6C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310ED88"))) PPC_WEAK_FUNC(sub_8310ED88);
PPC_FUNC_IMPL(__imp__sub_8310ED88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32620
	ctx.r4.s64 = ctx.r11.s64 + 32620;
	// bl 0x82429b48
	ctx.lr = 0x8310EDA4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1017(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1017, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EDC0"))) PPC_WEAK_FUNC(sub_8310EDC0);
PPC_FUNC_IMPL(__imp__sub_8310EDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32624
	ctx.r4.s64 = ctx.r11.s64 + 32624;
	// bl 0x82429b48
	ctx.lr = 0x8310EDDC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1508, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EDF8"))) PPC_WEAK_FUNC(sub_8310EDF8);
PPC_FUNC_IMPL(__imp__sub_8310EDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32628
	ctx.r4.s64 = ctx.r11.s64 + 32628;
	// bl 0x82429b48
	ctx.lr = 0x8310EE14;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1615(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1615, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EE30"))) PPC_WEAK_FUNC(sub_8310EE30);
PPC_FUNC_IMPL(__imp__sub_8310EE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32632
	ctx.r4.s64 = ctx.r11.s64 + 32632;
	// bl 0x82429b48
	ctx.lr = 0x8310EE4C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5059(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5059, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EE68"))) PPC_WEAK_FUNC(sub_8310EE68);
PPC_FUNC_IMPL(__imp__sub_8310EE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32636
	ctx.r4.s64 = ctx.r11.s64 + 32636;
	// bl 0x82429b48
	ctx.lr = 0x8310EE84;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2846(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2846, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EEA0"))) PPC_WEAK_FUNC(sub_8310EEA0);
PPC_FUNC_IMPL(__imp__sub_8310EEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32640
	ctx.r4.s64 = ctx.r11.s64 + 32640;
	// bl 0x82429b48
	ctx.lr = 0x8310EEBC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310EED8"))) PPC_WEAK_FUNC(sub_8310EED8);
PPC_FUNC_IMPL(__imp__sub_8310EED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32644
	ctx.r4.s64 = ctx.r11.s64 + 32644;
	// bl 0x82429b48
	ctx.lr = 0x8310EEF4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2705(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2705, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EF10"))) PPC_WEAK_FUNC(sub_8310EF10);
PPC_FUNC_IMPL(__imp__sub_8310EF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32648
	ctx.r4.s64 = ctx.r11.s64 + 32648;
	// bl 0x82429b48
	ctx.lr = 0x8310EF2C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1091(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1091, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EF48"))) PPC_WEAK_FUNC(sub_8310EF48);
PPC_FUNC_IMPL(__imp__sub_8310EF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32652
	ctx.r4.s64 = ctx.r11.s64 + 32652;
	// bl 0x82429b48
	ctx.lr = 0x8310EF64;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3261(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3261, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EF80"))) PPC_WEAK_FUNC(sub_8310EF80);
PPC_FUNC_IMPL(__imp__sub_8310EF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32656
	ctx.r4.s64 = ctx.r11.s64 + 32656;
	// bl 0x82429b48
	ctx.lr = 0x8310EF9C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4071(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4071, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EFB8"))) PPC_WEAK_FUNC(sub_8310EFB8);
PPC_FUNC_IMPL(__imp__sub_8310EFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32660
	ctx.r4.s64 = ctx.r11.s64 + 32660;
	// bl 0x82429b48
	ctx.lr = 0x8310EFD4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4229(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4229, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310EFF0"))) PPC_WEAK_FUNC(sub_8310EFF0);
PPC_FUNC_IMPL(__imp__sub_8310EFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32664
	ctx.r4.s64 = ctx.r11.s64 + 32664;
	// bl 0x82429b48
	ctx.lr = 0x8310F00C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4228(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4228, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F028"))) PPC_WEAK_FUNC(sub_8310F028);
PPC_FUNC_IMPL(__imp__sub_8310F028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32668
	ctx.r4.s64 = ctx.r11.s64 + 32668;
	// bl 0x82429b48
	ctx.lr = 0x8310F044;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1213(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1213, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F060"))) PPC_WEAK_FUNC(sub_8310F060);
PPC_FUNC_IMPL(__imp__sub_8310F060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32672
	ctx.r4.s64 = ctx.r11.s64 + 32672;
	// bl 0x82429b48
	ctx.lr = 0x8310F07C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,533(r11)
	PPC_STORE_U8(ctx.r11.u32 + 533, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F098"))) PPC_WEAK_FUNC(sub_8310F098);
PPC_FUNC_IMPL(__imp__sub_8310F098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32676
	ctx.r4.s64 = ctx.r11.s64 + 32676;
	// bl 0x82429b48
	ctx.lr = 0x8310F0B4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1773(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1773, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F0D0"))) PPC_WEAK_FUNC(sub_8310F0D0);
PPC_FUNC_IMPL(__imp__sub_8310F0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32680
	ctx.r4.s64 = ctx.r11.s64 + 32680;
	// bl 0x82429b48
	ctx.lr = 0x8310F0EC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4127(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4127, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F108"))) PPC_WEAK_FUNC(sub_8310F108);
PPC_FUNC_IMPL(__imp__sub_8310F108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// bl 0x82429b48
	ctx.lr = 0x8310F124;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310F140"))) PPC_WEAK_FUNC(sub_8310F140);
PPC_FUNC_IMPL(__imp__sub_8310F140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32688
	ctx.r4.s64 = ctx.r11.s64 + 32688;
	// bl 0x82429b48
	ctx.lr = 0x8310F15C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3452(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3452, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F178"))) PPC_WEAK_FUNC(sub_8310F178);
PPC_FUNC_IMPL(__imp__sub_8310F178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32692
	ctx.r4.s64 = ctx.r11.s64 + 32692;
	// bl 0x82429b48
	ctx.lr = 0x8310F194;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,969(r11)
	PPC_STORE_U8(ctx.r11.u32 + 969, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F1B0"))) PPC_WEAK_FUNC(sub_8310F1B0);
PPC_FUNC_IMPL(__imp__sub_8310F1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32696
	ctx.r4.s64 = ctx.r11.s64 + 32696;
	// bl 0x82429b48
	ctx.lr = 0x8310F1CC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4310(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4310, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F1E8"))) PPC_WEAK_FUNC(sub_8310F1E8);
PPC_FUNC_IMPL(__imp__sub_8310F1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32700
	ctx.r4.s64 = ctx.r11.s64 + 32700;
	// bl 0x82429b48
	ctx.lr = 0x8310F204;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5107(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5107, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F220"))) PPC_WEAK_FUNC(sub_8310F220);
PPC_FUNC_IMPL(__imp__sub_8310F220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32704
	ctx.r4.s64 = ctx.r11.s64 + 32704;
	// bl 0x82429b48
	ctx.lr = 0x8310F23C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310F258"))) PPC_WEAK_FUNC(sub_8310F258);
PPC_FUNC_IMPL(__imp__sub_8310F258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32708
	ctx.r4.s64 = ctx.r11.s64 + 32708;
	// bl 0x82429b48
	ctx.lr = 0x8310F274;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310F290"))) PPC_WEAK_FUNC(sub_8310F290);
PPC_FUNC_IMPL(__imp__sub_8310F290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32712
	ctx.r4.s64 = ctx.r11.s64 + 32712;
	// bl 0x82429b48
	ctx.lr = 0x8310F2AC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4065(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4065, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F2C8"))) PPC_WEAK_FUNC(sub_8310F2C8);
PPC_FUNC_IMPL(__imp__sub_8310F2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32716
	ctx.r4.s64 = ctx.r11.s64 + 32716;
	// bl 0x82429b48
	ctx.lr = 0x8310F2E4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4226(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4226, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F300"))) PPC_WEAK_FUNC(sub_8310F300);
PPC_FUNC_IMPL(__imp__sub_8310F300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32720
	ctx.r4.s64 = ctx.r11.s64 + 32720;
	// bl 0x82429b48
	ctx.lr = 0x8310F31C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4799(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4799, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F338"))) PPC_WEAK_FUNC(sub_8310F338);
PPC_FUNC_IMPL(__imp__sub_8310F338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32724
	ctx.r4.s64 = ctx.r11.s64 + 32724;
	// bl 0x82429b48
	ctx.lr = 0x8310F354;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2249(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2249, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F370"))) PPC_WEAK_FUNC(sub_8310F370);
PPC_FUNC_IMPL(__imp__sub_8310F370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32728
	ctx.r4.s64 = ctx.r11.s64 + 32728;
	// bl 0x82429b48
	ctx.lr = 0x8310F38C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F3A8"))) PPC_WEAK_FUNC(sub_8310F3A8);
PPC_FUNC_IMPL(__imp__sub_8310F3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32732
	ctx.r4.s64 = ctx.r11.s64 + 32732;
	// bl 0x82429b48
	ctx.lr = 0x8310F3C4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2598(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2598, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F3E0"))) PPC_WEAK_FUNC(sub_8310F3E0);
PPC_FUNC_IMPL(__imp__sub_8310F3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32736
	ctx.r4.s64 = ctx.r11.s64 + 32736;
	// bl 0x82429b48
	ctx.lr = 0x8310F3FC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4186(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4186, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F418"))) PPC_WEAK_FUNC(sub_8310F418);
PPC_FUNC_IMPL(__imp__sub_8310F418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32740
	ctx.r4.s64 = ctx.r11.s64 + 32740;
	// bl 0x82429b48
	ctx.lr = 0x8310F434;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2155(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2155, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F450"))) PPC_WEAK_FUNC(sub_8310F450);
PPC_FUNC_IMPL(__imp__sub_8310F450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32744
	ctx.r4.s64 = ctx.r11.s64 + 32744;
	// bl 0x82429b48
	ctx.lr = 0x8310F46C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1158(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1158, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F488"))) PPC_WEAK_FUNC(sub_8310F488);
PPC_FUNC_IMPL(__imp__sub_8310F488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32748
	ctx.r4.s64 = ctx.r11.s64 + 32748;
	// bl 0x82429b48
	ctx.lr = 0x8310F4A4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310F4C0"))) PPC_WEAK_FUNC(sub_8310F4C0);
PPC_FUNC_IMPL(__imp__sub_8310F4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32752
	ctx.r4.s64 = ctx.r11.s64 + 32752;
	// bl 0x82429b48
	ctx.lr = 0x8310F4DC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,151(r11)
	PPC_STORE_U8(ctx.r11.u32 + 151, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F4F8"))) PPC_WEAK_FUNC(sub_8310F4F8);
PPC_FUNC_IMPL(__imp__sub_8310F4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32756
	ctx.r4.s64 = ctx.r11.s64 + 32756;
	// bl 0x82429b48
	ctx.lr = 0x8310F514;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1665(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1665, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F530"))) PPC_WEAK_FUNC(sub_8310F530);
PPC_FUNC_IMPL(__imp__sub_8310F530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32760
	ctx.r4.s64 = ctx.r11.s64 + 32760;
	// bl 0x82429b48
	ctx.lr = 0x8310F54C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,467(r11)
	PPC_STORE_U8(ctx.r11.u32 + 467, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F568"))) PPC_WEAK_FUNC(sub_8310F568);
PPC_FUNC_IMPL(__imp__sub_8310F568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,32764
	ctx.r4.s64 = ctx.r11.s64 + 32764;
	// bl 0x82429b48
	ctx.lr = 0x8310F584;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310F5A0"))) PPC_WEAK_FUNC(sub_8310F5A0);
PPC_FUNC_IMPL(__imp__sub_8310F5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32768
	ctx.r4.s64 = ctx.r11.s64 + -32768;
	// bl 0x82429b48
	ctx.lr = 0x8310F5BC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_8310F5D8"))) PPC_WEAK_FUNC(sub_8310F5D8);
PPC_FUNC_IMPL(__imp__sub_8310F5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32764
	ctx.r4.s64 = ctx.r11.s64 + -32764;
	// bl 0x82429b48
	ctx.lr = 0x8310F5F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3021(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3021, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F610"))) PPC_WEAK_FUNC(sub_8310F610);
PPC_FUNC_IMPL(__imp__sub_8310F610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32760
	ctx.r4.s64 = ctx.r11.s64 + -32760;
	// bl 0x82429b48
	ctx.lr = 0x8310F62C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,5075(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5075, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F648"))) PPC_WEAK_FUNC(sub_8310F648);
PPC_FUNC_IMPL(__imp__sub_8310F648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32756
	ctx.r4.s64 = ctx.r11.s64 + -32756;
	// bl 0x82429b48
	ctx.lr = 0x8310F664;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2706(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2706, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F680"))) PPC_WEAK_FUNC(sub_8310F680);
PPC_FUNC_IMPL(__imp__sub_8310F680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32752
	ctx.r4.s64 = ctx.r11.s64 + -32752;
	// bl 0x82429b48
	ctx.lr = 0x8310F69C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,3773(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3773, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F6B8"))) PPC_WEAK_FUNC(sub_8310F6B8);
PPC_FUNC_IMPL(__imp__sub_8310F6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32748
	ctx.r4.s64 = ctx.r11.s64 + -32748;
	// bl 0x82429b48
	ctx.lr = 0x8310F6D4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1242(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1242, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8310F6F0"))) PPC_WEAK_FUNC(sub_8310F6F0);
PPC_FUNC_IMPL(__imp__sub_8310F6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-32744
	ctx.r4.s64 = ctx.r11.s64 + -32744;
	// bl 0x82429b48
	ctx.lr = 0x8310F70C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2283(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2283, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

