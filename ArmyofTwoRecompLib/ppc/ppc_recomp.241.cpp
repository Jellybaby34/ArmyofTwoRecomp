#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8307A1A8"))) PPC_WEAK_FUNC(sub_8307A1A8);
PPC_FUNC_IMPL(__imp__sub_8307A1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29212
	ctx.r4.s64 = ctx.r11.s64 + 29212;
	// bl 0x824215d0
	ctx.lr = 0x8307A1C4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307A1E0"))) PPC_WEAK_FUNC(sub_8307A1E0);
PPC_FUNC_IMPL(__imp__sub_8307A1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29216
	ctx.r4.s64 = ctx.r11.s64 + 29216;
	// bl 0x824215d0
	ctx.lr = 0x8307A1FC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4889(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4889, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A218"))) PPC_WEAK_FUNC(sub_8307A218);
PPC_FUNC_IMPL(__imp__sub_8307A218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29220
	ctx.r4.s64 = ctx.r11.s64 + 29220;
	// bl 0x824215d0
	ctx.lr = 0x8307A234;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4693(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4693, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A250"))) PPC_WEAK_FUNC(sub_8307A250);
PPC_FUNC_IMPL(__imp__sub_8307A250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29224
	ctx.r4.s64 = ctx.r11.s64 + 29224;
	// bl 0x824215d0
	ctx.lr = 0x8307A26C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4710(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4710, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A288"))) PPC_WEAK_FUNC(sub_8307A288);
PPC_FUNC_IMPL(__imp__sub_8307A288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29228
	ctx.r4.s64 = ctx.r11.s64 + 29228;
	// bl 0x824215d0
	ctx.lr = 0x8307A2A4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4849(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4849, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A2C0"))) PPC_WEAK_FUNC(sub_8307A2C0);
PPC_FUNC_IMPL(__imp__sub_8307A2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29232
	ctx.r4.s64 = ctx.r11.s64 + 29232;
	// bl 0x824215d0
	ctx.lr = 0x8307A2DC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307A2F8"))) PPC_WEAK_FUNC(sub_8307A2F8);
PPC_FUNC_IMPL(__imp__sub_8307A2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29236
	ctx.r4.s64 = ctx.r11.s64 + 29236;
	// bl 0x824215d0
	ctx.lr = 0x8307A314;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4718(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4718, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A330"))) PPC_WEAK_FUNC(sub_8307A330);
PPC_FUNC_IMPL(__imp__sub_8307A330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29240
	ctx.r4.s64 = ctx.r11.s64 + 29240;
	// bl 0x824215d0
	ctx.lr = 0x8307A34C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4711(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4711, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A368"))) PPC_WEAK_FUNC(sub_8307A368);
PPC_FUNC_IMPL(__imp__sub_8307A368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29244
	ctx.r4.s64 = ctx.r11.s64 + 29244;
	// bl 0x824215d0
	ctx.lr = 0x8307A384;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4713(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4713, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A3A0"))) PPC_WEAK_FUNC(sub_8307A3A0);
PPC_FUNC_IMPL(__imp__sub_8307A3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29248
	ctx.r4.s64 = ctx.r11.s64 + 29248;
	// bl 0x824215d0
	ctx.lr = 0x8307A3BC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4888(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4888, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A3D8"))) PPC_WEAK_FUNC(sub_8307A3D8);
PPC_FUNC_IMPL(__imp__sub_8307A3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29252
	ctx.r4.s64 = ctx.r11.s64 + 29252;
	// bl 0x824215d0
	ctx.lr = 0x8307A3F4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4725(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4725, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A410"))) PPC_WEAK_FUNC(sub_8307A410);
PPC_FUNC_IMPL(__imp__sub_8307A410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29256
	ctx.r4.s64 = ctx.r11.s64 + 29256;
	// bl 0x824215d0
	ctx.lr = 0x8307A42C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4696(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4696, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A448"))) PPC_WEAK_FUNC(sub_8307A448);
PPC_FUNC_IMPL(__imp__sub_8307A448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29260
	ctx.r4.s64 = ctx.r11.s64 + 29260;
	// bl 0x824215d0
	ctx.lr = 0x8307A464;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307A480"))) PPC_WEAK_FUNC(sub_8307A480);
PPC_FUNC_IMPL(__imp__sub_8307A480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29264
	ctx.r4.s64 = ctx.r11.s64 + 29264;
	// bl 0x824215d0
	ctx.lr = 0x8307A49C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4890(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4890, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A4B8"))) PPC_WEAK_FUNC(sub_8307A4B8);
PPC_FUNC_IMPL(__imp__sub_8307A4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29268
	ctx.r4.s64 = ctx.r11.s64 + 29268;
	// bl 0x824215d0
	ctx.lr = 0x8307A4D4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4695(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4695, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A4F0"))) PPC_WEAK_FUNC(sub_8307A4F0);
PPC_FUNC_IMPL(__imp__sub_8307A4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29272
	ctx.r4.s64 = ctx.r11.s64 + 29272;
	// bl 0x824215d0
	ctx.lr = 0x8307A50C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4702(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4702, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A528"))) PPC_WEAK_FUNC(sub_8307A528);
PPC_FUNC_IMPL(__imp__sub_8307A528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29276
	ctx.r4.s64 = ctx.r11.s64 + 29276;
	// bl 0x824215d0
	ctx.lr = 0x8307A544;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4848(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4848, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A560"))) PPC_WEAK_FUNC(sub_8307A560);
PPC_FUNC_IMPL(__imp__sub_8307A560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32272
	ctx.r3.s64 = ctx.r11.s64 + 32272;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A570"))) PPC_WEAK_FUNC(sub_8307A570);
PPC_FUNC_IMPL(__imp__sub_8307A570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32288
	ctx.r3.s64 = ctx.r11.s64 + 32288;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A580"))) PPC_WEAK_FUNC(sub_8307A580);
PPC_FUNC_IMPL(__imp__sub_8307A580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32304
	ctx.r3.s64 = ctx.r11.s64 + 32304;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A590"))) PPC_WEAK_FUNC(sub_8307A590);
PPC_FUNC_IMPL(__imp__sub_8307A590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32320
	ctx.r3.s64 = ctx.r11.s64 + 32320;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A5A0"))) PPC_WEAK_FUNC(sub_8307A5A0);
PPC_FUNC_IMPL(__imp__sub_8307A5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32392
	ctx.r3.s64 = ctx.r11.s64 + 32392;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A5B0"))) PPC_WEAK_FUNC(sub_8307A5B0);
PPC_FUNC_IMPL(__imp__sub_8307A5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32080
	ctx.r3.s64 = ctx.r11.s64 + 32080;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A5C0"))) PPC_WEAK_FUNC(sub_8307A5C0);
PPC_FUNC_IMPL(__imp__sub_8307A5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32128
	ctx.r3.s64 = ctx.r11.s64 + 32128;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A5D0"))) PPC_WEAK_FUNC(sub_8307A5D0);
PPC_FUNC_IMPL(__imp__sub_8307A5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32176
	ctx.r3.s64 = ctx.r11.s64 + 32176;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A5E0"))) PPC_WEAK_FUNC(sub_8307A5E0);
PPC_FUNC_IMPL(__imp__sub_8307A5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32192
	ctx.r3.s64 = ctx.r11.s64 + 32192;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A5F0"))) PPC_WEAK_FUNC(sub_8307A5F0);
PPC_FUNC_IMPL(__imp__sub_8307A5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32208
	ctx.r3.s64 = ctx.r11.s64 + 32208;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A600"))) PPC_WEAK_FUNC(sub_8307A600);
PPC_FUNC_IMPL(__imp__sub_8307A600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32224
	ctx.r3.s64 = ctx.r11.s64 + 32224;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A610"))) PPC_WEAK_FUNC(sub_8307A610);
PPC_FUNC_IMPL(__imp__sub_8307A610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32240
	ctx.r3.s64 = ctx.r11.s64 + 32240;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A620"))) PPC_WEAK_FUNC(sub_8307A620);
PPC_FUNC_IMPL(__imp__sub_8307A620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32256
	ctx.r3.s64 = ctx.r11.s64 + 32256;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307A630"))) PPC_WEAK_FUNC(sub_8307A630);
PPC_FUNC_IMPL(__imp__sub_8307A630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,5184
	ctx.r11.s64 = ctx.r11.s64 + 5184;
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

__attribute__((alias("__imp__sub_8307A660"))) PPC_WEAK_FUNC(sub_8307A660);
PPC_FUNC_IMPL(__imp__sub_8307A660) {
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
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5280
	ctx.r11.s64 = ctx.r11.s64 + 5280;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A690"))) PPC_WEAK_FUNC(sub_8307A690);
PPC_FUNC_IMPL(__imp__sub_8307A690) {
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
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5312
	ctx.r11.s64 = ctx.r11.s64 + 5312;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A6D8"))) PPC_WEAK_FUNC(sub_8307A6D8);
PPC_FUNC_IMPL(__imp__sub_8307A6D8) {
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
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5232
	ctx.r11.s64 = ctx.r11.s64 + 5232;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A720"))) PPC_WEAK_FUNC(sub_8307A720);
PPC_FUNC_IMPL(__imp__sub_8307A720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30096
	ctx.r4.s64 = ctx.r11.s64 + 30096;
	// bl 0x824215d0
	ctx.lr = 0x8307A73C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5183(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5183, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A758"))) PPC_WEAK_FUNC(sub_8307A758);
PPC_FUNC_IMPL(__imp__sub_8307A758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30100
	ctx.r4.s64 = ctx.r11.s64 + 30100;
	// bl 0x824215d0
	ctx.lr = 0x8307A774;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5304, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A790"))) PPC_WEAK_FUNC(sub_8307A790);
PPC_FUNC_IMPL(__imp__sub_8307A790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30104
	ctx.r4.s64 = ctx.r11.s64 + 30104;
	// bl 0x824215d0
	ctx.lr = 0x8307A7AC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5259(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5259, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A7C8"))) PPC_WEAK_FUNC(sub_8307A7C8);
PPC_FUNC_IMPL(__imp__sub_8307A7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30108
	ctx.r4.s64 = ctx.r11.s64 + 30108;
	// bl 0x824215d0
	ctx.lr = 0x8307A7E4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5154(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5154, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A800"))) PPC_WEAK_FUNC(sub_8307A800);
PPC_FUNC_IMPL(__imp__sub_8307A800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30112
	ctx.r4.s64 = ctx.r11.s64 + 30112;
	// bl 0x824215d0
	ctx.lr = 0x8307A81C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5178(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5178, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A838"))) PPC_WEAK_FUNC(sub_8307A838);
PPC_FUNC_IMPL(__imp__sub_8307A838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30116
	ctx.r4.s64 = ctx.r11.s64 + 30116;
	// bl 0x824215d0
	ctx.lr = 0x8307A854;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5217(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5217, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A870"))) PPC_WEAK_FUNC(sub_8307A870);
PPC_FUNC_IMPL(__imp__sub_8307A870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30120
	ctx.r4.s64 = ctx.r11.s64 + 30120;
	// bl 0x824215d0
	ctx.lr = 0x8307A88C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5221(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5221, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A8A8"))) PPC_WEAK_FUNC(sub_8307A8A8);
PPC_FUNC_IMPL(__imp__sub_8307A8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30124
	ctx.r4.s64 = ctx.r11.s64 + 30124;
	// bl 0x824215d0
	ctx.lr = 0x8307A8C4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5148, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A8E0"))) PPC_WEAK_FUNC(sub_8307A8E0);
PPC_FUNC_IMPL(__imp__sub_8307A8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30128
	ctx.r4.s64 = ctx.r11.s64 + 30128;
	// bl 0x824215d0
	ctx.lr = 0x8307A8FC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5253(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5253, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A918"))) PPC_WEAK_FUNC(sub_8307A918);
PPC_FUNC_IMPL(__imp__sub_8307A918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30132
	ctx.r4.s64 = ctx.r11.s64 + 30132;
	// bl 0x824215d0
	ctx.lr = 0x8307A934;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5249(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5249, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A950"))) PPC_WEAK_FUNC(sub_8307A950);
PPC_FUNC_IMPL(__imp__sub_8307A950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30136
	ctx.r4.s64 = ctx.r11.s64 + 30136;
	// bl 0x824215d0
	ctx.lr = 0x8307A96C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5027(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5027, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A988"))) PPC_WEAK_FUNC(sub_8307A988);
PPC_FUNC_IMPL(__imp__sub_8307A988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30140
	ctx.r4.s64 = ctx.r11.s64 + 30140;
	// bl 0x824215d0
	ctx.lr = 0x8307A9A4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307A9C0"))) PPC_WEAK_FUNC(sub_8307A9C0);
PPC_FUNC_IMPL(__imp__sub_8307A9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30144
	ctx.r4.s64 = ctx.r11.s64 + 30144;
	// bl 0x824215d0
	ctx.lr = 0x8307A9DC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5149(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5149, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A9F8"))) PPC_WEAK_FUNC(sub_8307A9F8);
PPC_FUNC_IMPL(__imp__sub_8307A9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30148
	ctx.r4.s64 = ctx.r11.s64 + 30148;
	// bl 0x824215d0
	ctx.lr = 0x8307AA14;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5045(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5045, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AA30"))) PPC_WEAK_FUNC(sub_8307AA30);
PPC_FUNC_IMPL(__imp__sub_8307AA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30152
	ctx.r4.s64 = ctx.r11.s64 + 30152;
	// bl 0x824215d0
	ctx.lr = 0x8307AA4C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5309(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5309, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AA68"))) PPC_WEAK_FUNC(sub_8307AA68);
PPC_FUNC_IMPL(__imp__sub_8307AA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30156
	ctx.r4.s64 = ctx.r11.s64 + 30156;
	// bl 0x824215d0
	ctx.lr = 0x8307AA84;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307AAA0"))) PPC_WEAK_FUNC(sub_8307AAA0);
PPC_FUNC_IMPL(__imp__sub_8307AAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30160
	ctx.r4.s64 = ctx.r11.s64 + 30160;
	// bl 0x824215d0
	ctx.lr = 0x8307AABC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5077(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5077, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AAD8"))) PPC_WEAK_FUNC(sub_8307AAD8);
PPC_FUNC_IMPL(__imp__sub_8307AAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30164
	ctx.r4.s64 = ctx.r11.s64 + 30164;
	// bl 0x824215d0
	ctx.lr = 0x8307AAF4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5173(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5173, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AB10"))) PPC_WEAK_FUNC(sub_8307AB10);
PPC_FUNC_IMPL(__imp__sub_8307AB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30168
	ctx.r4.s64 = ctx.r11.s64 + 30168;
	// bl 0x824215d0
	ctx.lr = 0x8307AB2C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5269(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5269, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AB48"))) PPC_WEAK_FUNC(sub_8307AB48);
PPC_FUNC_IMPL(__imp__sub_8307AB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30172
	ctx.r4.s64 = ctx.r11.s64 + 30172;
	// bl 0x824215d0
	ctx.lr = 0x8307AB64;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5176, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AB80"))) PPC_WEAK_FUNC(sub_8307AB80);
PPC_FUNC_IMPL(__imp__sub_8307AB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30176
	ctx.r4.s64 = ctx.r11.s64 + 30176;
	// bl 0x824215d0
	ctx.lr = 0x8307AB9C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5155(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5155, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ABB8"))) PPC_WEAK_FUNC(sub_8307ABB8);
PPC_FUNC_IMPL(__imp__sub_8307ABB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30180
	ctx.r4.s64 = ctx.r11.s64 + 30180;
	// bl 0x824215d0
	ctx.lr = 0x8307ABD4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5007(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5007, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ABF0"))) PPC_WEAK_FUNC(sub_8307ABF0);
PPC_FUNC_IMPL(__imp__sub_8307ABF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30184
	ctx.r4.s64 = ctx.r11.s64 + 30184;
	// bl 0x824215d0
	ctx.lr = 0x8307AC0C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5179(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5179, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AC28"))) PPC_WEAK_FUNC(sub_8307AC28);
PPC_FUNC_IMPL(__imp__sub_8307AC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30188
	ctx.r4.s64 = ctx.r11.s64 + 30188;
	// bl 0x824215d0
	ctx.lr = 0x8307AC44;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5270(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5270, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AC60"))) PPC_WEAK_FUNC(sub_8307AC60);
PPC_FUNC_IMPL(__imp__sub_8307AC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30192
	ctx.r4.s64 = ctx.r11.s64 + 30192;
	// bl 0x824215d0
	ctx.lr = 0x8307AC7C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307AC98"))) PPC_WEAK_FUNC(sub_8307AC98);
PPC_FUNC_IMPL(__imp__sub_8307AC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30196
	ctx.r4.s64 = ctx.r11.s64 + 30196;
	// bl 0x824215d0
	ctx.lr = 0x8307ACB4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5047(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5047, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ACD0"))) PPC_WEAK_FUNC(sub_8307ACD0);
PPC_FUNC_IMPL(__imp__sub_8307ACD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30200
	ctx.r4.s64 = ctx.r11.s64 + 30200;
	// bl 0x824215d0
	ctx.lr = 0x8307ACEC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5106(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5106, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AD08"))) PPC_WEAK_FUNC(sub_8307AD08);
PPC_FUNC_IMPL(__imp__sub_8307AD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30204
	ctx.r4.s64 = ctx.r11.s64 + 30204;
	// bl 0x824215d0
	ctx.lr = 0x8307AD24;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307AD40"))) PPC_WEAK_FUNC(sub_8307AD40);
PPC_FUNC_IMPL(__imp__sub_8307AD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30208
	ctx.r4.s64 = ctx.r11.s64 + 30208;
	// bl 0x824215d0
	ctx.lr = 0x8307AD5C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4986(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4986, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AD78"))) PPC_WEAK_FUNC(sub_8307AD78);
PPC_FUNC_IMPL(__imp__sub_8307AD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30212
	ctx.r4.s64 = ctx.r11.s64 + 30212;
	// bl 0x824215d0
	ctx.lr = 0x8307AD94;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5079(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5079, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ADB0"))) PPC_WEAK_FUNC(sub_8307ADB0);
PPC_FUNC_IMPL(__imp__sub_8307ADB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30216
	ctx.r4.s64 = ctx.r11.s64 + 30216;
	// bl 0x824215d0
	ctx.lr = 0x8307ADCC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5180(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5180, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307ADE8"))) PPC_WEAK_FUNC(sub_8307ADE8);
PPC_FUNC_IMPL(__imp__sub_8307ADE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30220
	ctx.r4.s64 = ctx.r11.s64 + 30220;
	// bl 0x824215d0
	ctx.lr = 0x8307AE04;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5311(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5311, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AE20"))) PPC_WEAK_FUNC(sub_8307AE20);
PPC_FUNC_IMPL(__imp__sub_8307AE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30224
	ctx.r4.s64 = ctx.r11.s64 + 30224;
	// bl 0x824215d0
	ctx.lr = 0x8307AE3C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307AE58"))) PPC_WEAK_FUNC(sub_8307AE58);
PPC_FUNC_IMPL(__imp__sub_8307AE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30228
	ctx.r4.s64 = ctx.r11.s64 + 30228;
	// bl 0x824215d0
	ctx.lr = 0x8307AE74;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5056(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5056, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AE90"))) PPC_WEAK_FUNC(sub_8307AE90);
PPC_FUNC_IMPL(__imp__sub_8307AE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30232
	ctx.r4.s64 = ctx.r11.s64 + 30232;
	// bl 0x824215d0
	ctx.lr = 0x8307AEAC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4984(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4984, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AEC8"))) PPC_WEAK_FUNC(sub_8307AEC8);
PPC_FUNC_IMPL(__imp__sub_8307AEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30236
	ctx.r4.s64 = ctx.r11.s64 + 30236;
	// bl 0x824215d0
	ctx.lr = 0x8307AEE4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307AF00"))) PPC_WEAK_FUNC(sub_8307AF00);
PPC_FUNC_IMPL(__imp__sub_8307AF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30240
	ctx.r4.s64 = ctx.r11.s64 + 30240;
	// bl 0x824215d0
	ctx.lr = 0x8307AF1C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5257(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5257, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AF38"))) PPC_WEAK_FUNC(sub_8307AF38);
PPC_FUNC_IMPL(__imp__sub_8307AF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30244
	ctx.r4.s64 = ctx.r11.s64 + 30244;
	// bl 0x824215d0
	ctx.lr = 0x8307AF54;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5004(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5004, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AF70"))) PPC_WEAK_FUNC(sub_8307AF70);
PPC_FUNC_IMPL(__imp__sub_8307AF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30248
	ctx.r4.s64 = ctx.r11.s64 + 30248;
	// bl 0x824215d0
	ctx.lr = 0x8307AF8C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5175(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5175, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AFA8"))) PPC_WEAK_FUNC(sub_8307AFA8);
PPC_FUNC_IMPL(__imp__sub_8307AFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30252
	ctx.r4.s64 = ctx.r11.s64 + 30252;
	// bl 0x824215d0
	ctx.lr = 0x8307AFC4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5024(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5024, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307AFE0"))) PPC_WEAK_FUNC(sub_8307AFE0);
PPC_FUNC_IMPL(__imp__sub_8307AFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30256
	ctx.r4.s64 = ctx.r11.s64 + 30256;
	// bl 0x824215d0
	ctx.lr = 0x8307AFFC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307B018"))) PPC_WEAK_FUNC(sub_8307B018);
PPC_FUNC_IMPL(__imp__sub_8307B018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30260
	ctx.r4.s64 = ctx.r11.s64 + 30260;
	// bl 0x824215d0
	ctx.lr = 0x8307B034;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5310(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5310, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B050"))) PPC_WEAK_FUNC(sub_8307B050);
PPC_FUNC_IMPL(__imp__sub_8307B050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30264
	ctx.r4.s64 = ctx.r11.s64 + 30264;
	// bl 0x824215d0
	ctx.lr = 0x8307B06C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5220(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5220, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B088"))) PPC_WEAK_FUNC(sub_8307B088);
PPC_FUNC_IMPL(__imp__sub_8307B088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30268
	ctx.r4.s64 = ctx.r11.s64 + 30268;
	// bl 0x824215d0
	ctx.lr = 0x8307B0A4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5258(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5258, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B0C0"))) PPC_WEAK_FUNC(sub_8307B0C0);
PPC_FUNC_IMPL(__imp__sub_8307B0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30272
	ctx.r4.s64 = ctx.r11.s64 + 30272;
	// bl 0x824215d0
	ctx.lr = 0x8307B0DC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5153(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5153, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B0F8"))) PPC_WEAK_FUNC(sub_8307B0F8);
PPC_FUNC_IMPL(__imp__sub_8307B0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30276
	ctx.r4.s64 = ctx.r11.s64 + 30276;
	// bl 0x824215d0
	ctx.lr = 0x8307B114;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5006(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5006, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B130"))) PPC_WEAK_FUNC(sub_8307B130);
PPC_FUNC_IMPL(__imp__sub_8307B130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30280
	ctx.r4.s64 = ctx.r11.s64 + 30280;
	// bl 0x824215d0
	ctx.lr = 0x8307B14C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307B168"))) PPC_WEAK_FUNC(sub_8307B168);
PPC_FUNC_IMPL(__imp__sub_8307B168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30284
	ctx.r4.s64 = ctx.r11.s64 + 30284;
	// bl 0x824215d0
	ctx.lr = 0x8307B184;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5268(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5268, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B1A0"))) PPC_WEAK_FUNC(sub_8307B1A0);
PPC_FUNC_IMPL(__imp__sub_8307B1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30288
	ctx.r4.s64 = ctx.r11.s64 + 30288;
	// bl 0x824215d0
	ctx.lr = 0x8307B1BC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5218(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5218, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B1D8"))) PPC_WEAK_FUNC(sub_8307B1D8);
PPC_FUNC_IMPL(__imp__sub_8307B1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30292
	ctx.r4.s64 = ctx.r11.s64 + 30292;
	// bl 0x824215d0
	ctx.lr = 0x8307B1F4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5306(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5306, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B210"))) PPC_WEAK_FUNC(sub_8307B210);
PPC_FUNC_IMPL(__imp__sub_8307B210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30296
	ctx.r4.s64 = ctx.r11.s64 + 30296;
	// bl 0x824215d0
	ctx.lr = 0x8307B22C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5177(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5177, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B248"))) PPC_WEAK_FUNC(sub_8307B248);
PPC_FUNC_IMPL(__imp__sub_8307B248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30300
	ctx.r4.s64 = ctx.r11.s64 + 30300;
	// bl 0x824215d0
	ctx.lr = 0x8307B264;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5255(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5255, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B280"))) PPC_WEAK_FUNC(sub_8307B280);
PPC_FUNC_IMPL(__imp__sub_8307B280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30304
	ctx.r4.s64 = ctx.r11.s64 + 30304;
	// bl 0x824215d0
	ctx.lr = 0x8307B29C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307B2B8"))) PPC_WEAK_FUNC(sub_8307B2B8);
PPC_FUNC_IMPL(__imp__sub_8307B2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30308
	ctx.r4.s64 = ctx.r11.s64 + 30308;
	// bl 0x824215d0
	ctx.lr = 0x8307B2D4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4985(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4985, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B2F0"))) PPC_WEAK_FUNC(sub_8307B2F0);
PPC_FUNC_IMPL(__imp__sub_8307B2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30312
	ctx.r4.s64 = ctx.r11.s64 + 30312;
	// bl 0x824215d0
	ctx.lr = 0x8307B30C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4987(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4987, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B328"))) PPC_WEAK_FUNC(sub_8307B328);
PPC_FUNC_IMPL(__imp__sub_8307B328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30316
	ctx.r4.s64 = ctx.r11.s64 + 30316;
	// bl 0x824215d0
	ctx.lr = 0x8307B344;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307B360"))) PPC_WEAK_FUNC(sub_8307B360);
PPC_FUNC_IMPL(__imp__sub_8307B360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30320
	ctx.r4.s64 = ctx.r11.s64 + 30320;
	// bl 0x824215d0
	ctx.lr = 0x8307B37C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5172(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5172, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B398"))) PPC_WEAK_FUNC(sub_8307B398);
PPC_FUNC_IMPL(__imp__sub_8307B398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30324
	ctx.r4.s64 = ctx.r11.s64 + 30324;
	// bl 0x824215d0
	ctx.lr = 0x8307B3B4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307B3D0"))) PPC_WEAK_FUNC(sub_8307B3D0);
PPC_FUNC_IMPL(__imp__sub_8307B3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30328
	ctx.r4.s64 = ctx.r11.s64 + 30328;
	// bl 0x824215d0
	ctx.lr = 0x8307B3EC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5271(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5271, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B408"))) PPC_WEAK_FUNC(sub_8307B408);
PPC_FUNC_IMPL(__imp__sub_8307B408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30332
	ctx.r4.s64 = ctx.r11.s64 + 30332;
	// bl 0x824215d0
	ctx.lr = 0x8307B424;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5307(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5307, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B440"))) PPC_WEAK_FUNC(sub_8307B440);
PPC_FUNC_IMPL(__imp__sub_8307B440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30336
	ctx.r4.s64 = ctx.r11.s64 + 30336;
	// bl 0x824215d0
	ctx.lr = 0x8307B45C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5223(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5223, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B478"))) PPC_WEAK_FUNC(sub_8307B478);
PPC_FUNC_IMPL(__imp__sub_8307B478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30340
	ctx.r4.s64 = ctx.r11.s64 + 30340;
	// bl 0x824215d0
	ctx.lr = 0x8307B494;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5254(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5254, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B4B0"))) PPC_WEAK_FUNC(sub_8307B4B0);
PPC_FUNC_IMPL(__imp__sub_8307B4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30344
	ctx.r4.s64 = ctx.r11.s64 + 30344;
	// bl 0x824215d0
	ctx.lr = 0x8307B4CC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5222(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5222, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B4E8"))) PPC_WEAK_FUNC(sub_8307B4E8);
PPC_FUNC_IMPL(__imp__sub_8307B4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30348
	ctx.r4.s64 = ctx.r11.s64 + 30348;
	// bl 0x824215d0
	ctx.lr = 0x8307B504;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5181(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5181, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B520"))) PPC_WEAK_FUNC(sub_8307B520);
PPC_FUNC_IMPL(__imp__sub_8307B520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30352
	ctx.r4.s64 = ctx.r11.s64 + 30352;
	// bl 0x824215d0
	ctx.lr = 0x8307B53C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5250(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5250, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B558"))) PPC_WEAK_FUNC(sub_8307B558);
PPC_FUNC_IMPL(__imp__sub_8307B558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30356
	ctx.r4.s64 = ctx.r11.s64 + 30356;
	// bl 0x824215d0
	ctx.lr = 0x8307B574;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5150(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5150, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B590"))) PPC_WEAK_FUNC(sub_8307B590);
PPC_FUNC_IMPL(__imp__sub_8307B590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30360
	ctx.r4.s64 = ctx.r11.s64 + 30360;
	// bl 0x824215d0
	ctx.lr = 0x8307B5AC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5152(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5152, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B5C8"))) PPC_WEAK_FUNC(sub_8307B5C8);
PPC_FUNC_IMPL(__imp__sub_8307B5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30364
	ctx.r4.s64 = ctx.r11.s64 + 30364;
	// bl 0x824215d0
	ctx.lr = 0x8307B5E4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5151(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5151, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B600"))) PPC_WEAK_FUNC(sub_8307B600);
PPC_FUNC_IMPL(__imp__sub_8307B600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30368
	ctx.r4.s64 = ctx.r11.s64 + 30368;
	// bl 0x824215d0
	ctx.lr = 0x8307B61C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5216(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5216, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B638"))) PPC_WEAK_FUNC(sub_8307B638);
PPC_FUNC_IMPL(__imp__sub_8307B638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30372
	ctx.r4.s64 = ctx.r11.s64 + 30372;
	// bl 0x824215d0
	ctx.lr = 0x8307B654;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5174(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5174, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B670"))) PPC_WEAK_FUNC(sub_8307B670);
PPC_FUNC_IMPL(__imp__sub_8307B670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30376
	ctx.r4.s64 = ctx.r11.s64 + 30376;
	// bl 0x824215d0
	ctx.lr = 0x8307B68C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5005(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5005, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B6A8"))) PPC_WEAK_FUNC(sub_8307B6A8);
PPC_FUNC_IMPL(__imp__sub_8307B6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30380
	ctx.r4.s64 = ctx.r11.s64 + 30380;
	// bl 0x824215d0
	ctx.lr = 0x8307B6C4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5219(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5219, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B6E0"))) PPC_WEAK_FUNC(sub_8307B6E0);
PPC_FUNC_IMPL(__imp__sub_8307B6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30384
	ctx.r4.s64 = ctx.r11.s64 + 30384;
	// bl 0x824215d0
	ctx.lr = 0x8307B6FC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5308(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5308, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B718"))) PPC_WEAK_FUNC(sub_8307B718);
PPC_FUNC_IMPL(__imp__sub_8307B718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30388
	ctx.r4.s64 = ctx.r11.s64 + 30388;
	// bl 0x824215d0
	ctx.lr = 0x8307B734;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5182(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5182, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B750"))) PPC_WEAK_FUNC(sub_8307B750);
PPC_FUNC_IMPL(__imp__sub_8307B750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30392
	ctx.r4.s64 = ctx.r11.s64 + 30392;
	// bl 0x824215d0
	ctx.lr = 0x8307B76C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5251(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5251, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B788"))) PPC_WEAK_FUNC(sub_8307B788);
PPC_FUNC_IMPL(__imp__sub_8307B788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30396
	ctx.r4.s64 = ctx.r11.s64 + 30396;
	// bl 0x824215d0
	ctx.lr = 0x8307B7A4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5305(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5305, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B7C0"))) PPC_WEAK_FUNC(sub_8307B7C0);
PPC_FUNC_IMPL(__imp__sub_8307B7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30400
	ctx.r4.s64 = ctx.r11.s64 + 30400;
	// bl 0x824215d0
	ctx.lr = 0x8307B7DC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5252(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5252, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B7F8"))) PPC_WEAK_FUNC(sub_8307B7F8);
PPC_FUNC_IMPL(__imp__sub_8307B7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30404
	ctx.r4.s64 = ctx.r11.s64 + 30404;
	// bl 0x824215d0
	ctx.lr = 0x8307B814;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5256(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5256, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B830"))) PPC_WEAK_FUNC(sub_8307B830);
PPC_FUNC_IMPL(__imp__sub_8307B830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30408
	ctx.r4.s64 = ctx.r11.s64 + 30408;
	// bl 0x824215d0
	ctx.lr = 0x8307B84C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,5248(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5248, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307B868"))) PPC_WEAK_FUNC(sub_8307B868);
PPC_FUNC_IMPL(__imp__sub_8307B868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,30412
	ctx.r4.s64 = ctx.r11.s64 + 30412;
	// bl 0x824215d0
	ctx.lr = 0x8307B884;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_8307B8A0"))) PPC_WEAK_FUNC(sub_8307B8A0);
PPC_FUNC_IMPL(__imp__sub_8307B8A0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a0
	ctx.lr = 0x8307B8A8;
	__savegprlr_18(ctx, base);
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r21,-32093
	ctx.r21.s64 = -2103246848;
	// addi r10,r10,20496
	ctx.r10.s64 = ctx.r10.s64 + 20496;
	// lis r22,-32093
	ctx.r22.s64 = -2103246848;
	// lis r23,-32093
	ctx.r23.s64 = -2103246848;
	// lis r24,-32093
	ctx.r24.s64 = -2103246848;
	// lis r25,-32093
	ctx.r25.s64 = -2103246848;
	// lis r26,-32093
	ctx.r26.s64 = -2103246848;
	// stw r10,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// lis r27,-32093
	ctx.r27.s64 = -2103246848;
	// lis r28,-32093
	ctx.r28.s64 = -2103246848;
	// lis r29,-32093
	ctx.r29.s64 = -2103246848;
	// lis r30,-32093
	ctx.r30.s64 = -2103246848;
	// lis r31,-32093
	ctx.r31.s64 = -2103246848;
	// lis r3,-32093
	ctx.r3.s64 = -2103246848;
	// lis r4,-32093
	ctx.r4.s64 = -2103246848;
	// lis r5,-32093
	ctx.r5.s64 = -2103246848;
	// lis r6,-32093
	ctx.r6.s64 = -2103246848;
	// lis r7,-32093
	ctx.r7.s64 = -2103246848;
	// lis r8,-32093
	ctx.r8.s64 = -2103246848;
	// lis r9,-32093
	ctx.r9.s64 = -2103246848;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r21,r21,13048
	ctx.r21.s64 = ctx.r21.s64 + 13048;
	// addi r22,r22,12824
	ctx.r22.s64 = ctx.r22.s64 + 12824;
	// addi r23,r23,12656
	ctx.r23.s64 = ctx.r23.s64 + 12656;
	// addi r24,r24,12352
	ctx.r24.s64 = ctx.r24.s64 + 12352;
	// addi r25,r25,12032
	ctx.r25.s64 = ctx.r25.s64 + 12032;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// addi r26,r26,11800
	ctx.r26.s64 = ctx.r26.s64 + 11800;
	// stw r21,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r21.u32);
	// addi r27,r27,18368
	ctx.r27.s64 = ctx.r27.s64 + 18368;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r28,r28,24344
	ctx.r28.s64 = ctx.r28.s64 + 24344;
	// stw r22,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r22.u32);
	// addi r29,r29,11624
	ctx.r29.s64 = ctx.r29.s64 + 11624;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r30,r30,11448
	ctx.r30.s64 = ctx.r30.s64 + 11448;
	// stw r23,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r23.u32);
	// addi r31,r31,11216
	ctx.r31.s64 = ctx.r31.s64 + 11216;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r3,r3,11048
	ctx.r3.s64 = ctx.r3.s64 + 11048;
	// stw r24,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r24.u32);
	// addi r4,r4,10880
	ctx.r4.s64 = ctx.r4.s64 + 10880;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// addi r5,r5,10656
	ctx.r5.s64 = ctx.r5.s64 + 10656;
	// stw r25,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r25.u32);
	// addi r6,r6,10432
	ctx.r6.s64 = ctx.r6.s64 + 10432;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r7,r7,10152
	ctx.r7.s64 = ctx.r7.s64 + 10152;
	// stw r26,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r26.u32);
	// addi r8,r8,9976
	ctx.r8.s64 = ctx.r8.s64 + 9976;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// addi r9,r9,9808
	ctx.r9.s64 = ctx.r9.s64 + 9808;
	// stw r27,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r27.u32);
	// addi r11,r11,9632
	ctx.r11.s64 = ctx.r11.s64 + 9632;
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
	// stw r30,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r30.u32);
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// stw r31,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r31.u32);
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
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
	// stw r7,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r7.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r8,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stw r9,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r9.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// lis r18,-32093
	ctx.r18.s64 = -2103246848;
	// addi r11,r11,30544
	ctx.r11.s64 = ctx.r11.s64 + 30544;
	// lis r19,-32093
	ctx.r19.s64 = -2103246848;
	// lis r20,-32093
	ctx.r20.s64 = -2103246848;
	// lis r21,-32093
	ctx.r21.s64 = -2103246848;
	// lis r22,-32093
	ctx.r22.s64 = -2103246848;
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// lis r23,-32093
	ctx.r23.s64 = -2103246848;
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// addi r18,r18,9464
	ctx.r18.s64 = ctx.r18.s64 + 9464;
	// addi r19,r19,9296
	ctx.r19.s64 = ctx.r19.s64 + 9296;
	// addi r20,r20,9120
	ctx.r20.s64 = ctx.r20.s64 + 9120;
	// addi r21,r21,8944
	ctx.r21.s64 = ctx.r21.s64 + 8944;
	// addi r22,r22,8768
	ctx.r22.s64 = ctx.r22.s64 + 8768;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// addi r23,r23,25040
	ctx.r23.s64 = ctx.r23.s64 + 25040;
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// lis r24,-32093
	ctx.r24.s64 = -2103246848;
	// lis r25,-32093
	ctx.r25.s64 = -2103246848;
	// lis r26,-32093
	ctx.r26.s64 = -2103246848;
	// lis r27,-32093
	ctx.r27.s64 = -2103246848;
	// lis r28,-32093
	ctx.r28.s64 = -2103246848;
	// std r9,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r9.u64);
	// lis r29,-32093
	ctx.r29.s64 = -2103246848;
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lis r30,-32093
	ctx.r30.s64 = -2103246848;
	// lis r31,-32093
	ctx.r31.s64 = -2103246848;
	// lis r3,-32093
	ctx.r3.s64 = -2103246848;
	// lis r4,-32093
	ctx.r4.s64 = -2103246848;
	// lis r5,-32093
	ctx.r5.s64 = -2103246848;
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// lis r6,-32093
	ctx.r6.s64 = -2103246848;
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// lis r7,-32093
	ctx.r7.s64 = -2103246848;
	// lis r8,-32093
	ctx.r8.s64 = -2103246848;
	// std r9,52(r11)
	PPC_STORE_U64(ctx.r11.u32 + 52, ctx.r9.u64);
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
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
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// std r9,124(r11)
	PPC_STORE_U64(ctx.r11.u32 + 124, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
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
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// stw r21,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r21.u32);
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// std r9,196(r11)
	PPC_STORE_U64(ctx.r11.u32 + 196, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// stw r20,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r20.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// std r9,208(r11)
	PPC_STORE_U64(ctx.r11.u32 + 208, ctx.r9.u64);
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stw r19,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r19.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// std r9,220(r11)
	PPC_STORE_U64(ctx.r11.u32 + 220, ctx.r9.u64);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// stw r18,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r18.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// std r9,232(r11)
	PPC_STORE_U64(ctx.r11.u32 + 232, ctx.r9.u64);
	// lis r9,-32093
	ctx.r9.s64 = -2103246848;
	// addi r9,r9,6360
	ctx.r9.s64 = ctx.r9.s64 + 6360;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r24,r24,8592
	ctx.r24.s64 = ctx.r24.s64 + 8592;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// addi r25,r25,22952
	ctx.r25.s64 = ctx.r25.s64 + 22952;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r26,r26,8280
	ctx.r26.s64 = ctx.r26.s64 + 8280;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r27,r27,8104
	ctx.r27.s64 = ctx.r27.s64 + 8104;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stw r9,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r9.u32);
	// addi r28,r28,7960
	ctx.r28.s64 = ctx.r28.s64 + 7960;
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// addi r29,r29,7816
	ctx.r29.s64 = ctx.r29.s64 + 7816;
	// stw r24,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r24.u32);
	// addi r30,r30,7672
	ctx.r30.s64 = ctx.r30.s64 + 7672;
	// stw r25,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r25.u32);
	// addi r31,r31,7440
	ctx.r31.s64 = ctx.r31.s64 + 7440;
	// stw r26,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r26.u32);
	// addi r3,r3,7208
	ctx.r3.s64 = ctx.r3.s64 + 7208;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// addi r4,r4,7032
	ctx.r4.s64 = ctx.r4.s64 + 7032;
	// std r9,244(r11)
	PPC_STORE_U64(ctx.r11.u32 + 244, ctx.r9.u64);
	// addi r5,r5,18048
	ctx.r5.s64 = ctx.r5.s64 + 18048;
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// addi r6,r6,6712
	ctx.r6.s64 = ctx.r6.s64 + 6712;
	// stw r28,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// addi r7,r7,6536
	ctx.r7.s64 = ctx.r7.s64 + 6536;
	// stw r29,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r29.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stw r30,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r30.u32);
	// std r9,256(r11)
	PPC_STORE_U64(ctx.r11.u32 + 256, ctx.r9.u64);
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r31,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r31.u32);
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// stw r3,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r3.u32);
	// std r9,268(r11)
	PPC_STORE_U64(ctx.r11.u32 + 268, ctx.r9.u64);
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// stw r4,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// stw r5,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r5.u32);
	// std r9,280(r11)
	PPC_STORE_U64(ctx.r11.u32 + 280, ctx.r9.u64);
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// stw r6,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r6.u32);
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// stw r7,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r7.u32);
	// std r9,292(r11)
	PPC_STORE_U64(ctx.r11.u32 + 292, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
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
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,340(r11)
	PPC_STORE_U64(ctx.r11.u32 + 340, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
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
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,412(r11)
	PPC_STORE_U64(ctx.r11.u32 + 412, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,424(r11)
	PPC_STORE_U64(ctx.r11.u32 + 424, ctx.r9.u64);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r9,436(r11)
	PPC_STORE_U64(ctx.r11.u32 + 436, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,448(r11)
	PPC_STORE_U64(ctx.r11.u32 + 448, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r9,460(r11)
	PPC_STORE_U64(ctx.r11.u32 + 460, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r9,472(r11)
	PPC_STORE_U64(ctx.r11.u32 + 472, ctx.r9.u64);
	// addi r9,r8,17776
	ctx.r9.s64 = ctx.r8.s64 + 17776;
	// lis r19,-32093
	ctx.r19.s64 = -2103246848;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// lis r20,-32093
	ctx.r20.s64 = -2103246848;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r21,-32093
	ctx.r21.s64 = -2103246848;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// lis r22,-32093
	ctx.r22.s64 = -2103246848;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r9,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r9.u32);
	// lis r23,-32093
	ctx.r23.s64 = -2103246848;
	// lis r24,-32093
	ctx.r24.s64 = -2103246848;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// lis r25,-32093
	ctx.r25.s64 = -2103246848;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r26,-32093
	ctx.r26.s64 = -2103246848;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r27,-32209
	ctx.r27.s64 = -2110849024;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// lis r28,-32093
	ctx.r28.s64 = -2103246848;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// lis r29,-32093
	ctx.r29.s64 = -2103246848;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// lis r30,-32093
	ctx.r30.s64 = -2103246848;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r31,-32093
	ctx.r31.s64 = -2103246848;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r3,-32093
	ctx.r3.s64 = -2103246848;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r4,-32093
	ctx.r4.s64 = -2103246848;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r5,-32093
	ctx.r5.s64 = -2103246848;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lis r7,-32093
	ctx.r7.s64 = -2103246848;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lis r9,-32093
	ctx.r9.s64 = -2103246848;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r19,r19,17208
	ctx.r19.s64 = ctx.r19.s64 + 17208;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r20,r20,6128
	ctx.r20.s64 = ctx.r20.s64 + 6128;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// addi r21,r21,5896
	ctx.r21.s64 = ctx.r21.s64 + 5896;
	// addi r22,r22,16936
	ctx.r22.s64 = ctx.r22.s64 + 16936;
	// addi r23,r23,5728
	ctx.r23.s64 = ctx.r23.s64 + 5728;
	// addi r24,r24,5480
	ctx.r24.s64 = ctx.r24.s64 + 5480;
	// stw r19,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r19.u32);
	// addi r25,r25,16664
	ctx.r25.s64 = ctx.r25.s64 + 16664;
	// stw r20,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r20.u32);
	// addi r26,r26,5184
	ctx.r26.s64 = ctx.r26.s64 + 5184;
	// stw r21,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r21.u32);
	// addi r27,r27,7296
	ctx.r27.s64 = ctx.r27.s64 + 7296;
	// stw r22,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r22.u32);
	// addi r28,r28,4952
	ctx.r28.s64 = ctx.r28.s64 + 4952;
	// stw r23,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r23.u32);
	// addi r29,r29,4808
	ctx.r29.s64 = ctx.r29.s64 + 4808;
	// stw r24,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r24.u32);
	// addi r30,r30,4632
	ctx.r30.s64 = ctx.r30.s64 + 4632;
	// stw r25,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r25.u32);
	// addi r31,r31,4400
	ctx.r31.s64 = ctx.r31.s64 + 4400;
	// stw r26,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r26.u32);
	// addi r3,r3,4256
	ctx.r3.s64 = ctx.r3.s64 + 4256;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// addi r4,r4,4080
	ctx.r4.s64 = ctx.r4.s64 + 4080;
	// stw r28,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// addi r5,r5,3912
	ctx.r5.s64 = ctx.r5.s64 + 3912;
	// stw r29,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r29.u32);
	// addi r6,r6,14192
	ctx.r6.s64 = ctx.r6.s64 + 14192;
	// stw r30,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r30.u32);
	// addi r7,r7,16104
	ctx.r7.s64 = ctx.r7.s64 + 16104;
	// stw r31,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r31.u32);
	// addi r9,r9,3736
	ctx.r9.s64 = ctx.r9.s64 + 3736;
	// stw r3,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r3.u32);
	// lis r8,-32093
	ctx.r8.s64 = -2103246848;
	// stw r4,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r4.u32);
	// stw r5,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r5.u32);
	// stw r6,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r6.u32);
	// stw r7,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r7.u32);
	// stw r9,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r9.u32);
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lis r20,-32093
	ctx.r20.s64 = -2103246848;
	// lis r21,-32093
	ctx.r21.s64 = -2103246848;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// lis r22,-32093
	ctx.r22.s64 = -2103246848;
	// lis r23,-32093
	ctx.r23.s64 = -2103246848;
	// lis r24,-32093
	ctx.r24.s64 = -2103246848;
	// std r9,484(r11)
	PPC_STORE_U64(ctx.r11.u32 + 484, ctx.r9.u64);
	// lis r25,-32093
	ctx.r25.s64 = -2103246848;
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// addi r20,r20,3384
	ctx.r20.s64 = ctx.r20.s64 + 3384;
	// addi r21,r21,3160
	ctx.r21.s64 = ctx.r21.s64 + 3160;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// addi r22,r22,2936
	ctx.r22.s64 = ctx.r22.s64 + 2936;
	// addi r23,r23,2712
	ctx.r23.s64 = ctx.r23.s64 + 2712;
	// addi r24,r24,2536
	ctx.r24.s64 = ctx.r24.s64 + 2536;
	// std r9,496(r11)
	PPC_STORE_U64(ctx.r11.u32 + 496, ctx.r9.u64);
	// addi r25,r25,2312
	ctx.r25.s64 = ctx.r25.s64 + 2312;
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lis r26,-32093
	ctx.r26.s64 = -2103246848;
	// lis r27,-32093
	ctx.r27.s64 = -2103246848;
	// stw r20,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r20.u32);
	// lis r28,-32093
	ctx.r28.s64 = -2103246848;
	// stw r21,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r21.u32);
	// lis r29,-32093
	ctx.r29.s64 = -2103246848;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// lis r30,-32093
	ctx.r30.s64 = -2103246848;
	// std r9,508(r11)
	PPC_STORE_U64(ctx.r11.u32 + 508, ctx.r9.u64);
	// lis r31,-32093
	ctx.r31.s64 = -2103246848;
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// lis r3,-32093
	ctx.r3.s64 = -2103246848;
	// lis r4,-32093
	ctx.r4.s64 = -2103246848;
	// stw r22,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r22.u32);
	// lis r5,-32093
	ctx.r5.s64 = -2103246848;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// lis r6,-32093
	ctx.r6.s64 = -2103246848;
	// lis r7,-32093
	ctx.r7.s64 = -2103246848;
	// std r9,520(r11)
	PPC_STORE_U64(ctx.r11.u32 + 520, ctx.r9.u64);
	// addi r26,r26,15784
	ctx.r26.s64 = ctx.r26.s64 + 15784;
	// ld r9,-208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// stw r23,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r23.u32);
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// std r9,532(r11)
	PPC_STORE_U64(ctx.r11.u32 + 532, ctx.r9.u64);
	// ld r9,-224(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// stw r24,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r24.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// std r9,544(r11)
	PPC_STORE_U64(ctx.r11.u32 + 544, ctx.r9.u64);
	// ld r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// stw r25,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r25.u32);
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// std r9,556(r11)
	PPC_STORE_U64(ctx.r11.u32 + 556, ctx.r9.u64);
	// ld r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r9,568(r11)
	PPC_STORE_U64(ctx.r11.u32 + 568, ctx.r9.u64);
	// ld r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r9,580(r11)
	PPC_STORE_U64(ctx.r11.u32 + 580, ctx.r9.u64);
	// ld r9,-288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
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
	// ld r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r9,652(r11)
	PPC_STORE_U64(ctx.r11.u32 + 652, ctx.r9.u64);
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r9,664(r11)
	PPC_STORE_U64(ctx.r11.u32 + 664, ctx.r9.u64);
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r9,676(r11)
	PPC_STORE_U64(ctx.r11.u32 + 676, ctx.r9.u64);
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r9,688(r11)
	PPC_STORE_U64(ctx.r11.u32 + 688, ctx.r9.u64);
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r9,700(r11)
	PPC_STORE_U64(ctx.r11.u32 + 700, ctx.r9.u64);
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r9,712(r11)
	PPC_STORE_U64(ctx.r11.u32 + 712, ctx.r9.u64);
	// addi r9,r8,3560
	ctx.r9.s64 = ctx.r8.s64 + 3560;
	// lis r8,-32093
	ctx.r8.s64 = -2103246848;
	// stw r9,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r9.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// addi r27,r27,2088
	ctx.r27.s64 = ctx.r27.s64 + 2088;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r28,r28,1912
	ctx.r28.s64 = ctx.r28.s64 + 1912;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r29,r29,1736
	ctx.r29.s64 = ctx.r29.s64 + 1736;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r30,r30,1560
	ctx.r30.s64 = ctx.r30.s64 + 1560;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// addi r31,r31,1384
	ctx.r31.s64 = ctx.r31.s64 + 1384;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r3,r3,1208
	ctx.r3.s64 = ctx.r3.s64 + 1208;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// addi r4,r4,1032
	ctx.r4.s64 = ctx.r4.s64 + 1032;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r5,r5,15584
	ctx.r5.s64 = ctx.r5.s64 + 15584;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// addi r6,r6,736
	ctx.r6.s64 = ctx.r6.s64 + 736;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r7,r7,560
	ctx.r7.s64 = ctx.r7.s64 + 560;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r8,r8,344
	ctx.r8.s64 = ctx.r8.s64 + 344;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r9,r9,11288
	ctx.r9.s64 = ctx.r9.s64 + 11288;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// ld r10,-144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// stw r26,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r26.u32);
	// stw r27,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r27.u32);
	// stw r28,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r28.u32);
	// stw r29,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r29.u32);
	// std r10,724(r11)
	PPC_STORE_U64(ctx.r11.u32 + 724, ctx.r10.u64);
	// ld r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stw r30,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r30.u32);
	// stw r31,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r31.u32);
	// stw r3,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r3.u32);
	// stw r4,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r4.u32);
	// std r10,736(r11)
	PPC_STORE_U64(ctx.r11.u32 + 736, ctx.r10.u64);
	// ld r10,-176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// stw r5,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r5.u32);
	// stw r6,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r6.u32);
	// stw r7,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r7.u32);
	// stw r8,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r8.u32);
	// std r10,748(r11)
	PPC_STORE_U64(ctx.r11.u32 + 748, ctx.r10.u64);
	// ld r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// stw r9,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r9.u32);
	// std r10,760(r11)
	PPC_STORE_U64(ctx.r11.u32 + 760, ctx.r10.u64);
	// ld r10,-208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -208);
	// std r10,772(r11)
	PPC_STORE_U64(ctx.r11.u32 + 772, ctx.r10.u64);
	// ld r10,-224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -224);
	// std r10,784(r11)
	PPC_STORE_U64(ctx.r11.u32 + 784, ctx.r10.u64);
	// ld r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// std r10,796(r11)
	PPC_STORE_U64(ctx.r11.u32 + 796, ctx.r10.u64);
	// ld r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -256);
	// std r10,808(r11)
	PPC_STORE_U64(ctx.r11.u32 + 808, ctx.r10.u64);
	// ld r10,-272(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -272);
	// std r10,820(r11)
	PPC_STORE_U64(ctx.r11.u32 + 820, ctx.r10.u64);
	// ld r10,-288(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// std r10,832(r11)
	PPC_STORE_U64(ctx.r11.u32 + 832, ctx.r10.u64);
	// ld r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// std r10,844(r11)
	PPC_STORE_U64(ctx.r11.u32 + 844, ctx.r10.u64);
	// ld r10,-216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -216);
	// std r10,856(r11)
	PPC_STORE_U64(ctx.r11.u32 + 856, ctx.r10.u64);
	// ld r10,-152(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// std r10,868(r11)
	PPC_STORE_U64(ctx.r11.u32 + 868, ctx.r10.u64);
	// ld r10,-232(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -232);
	// std r10,880(r11)
	PPC_STORE_U64(ctx.r11.u32 + 880, ctx.r10.u64);
	// ld r10,-184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -184);
	// std r10,892(r11)
	PPC_STORE_U64(ctx.r11.u32 + 892, ctx.r10.u64);
	// ld r10,-248(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// std r10,904(r11)
	PPC_STORE_U64(ctx.r11.u32 + 904, ctx.r10.u64);
	// ld r10,-136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// std r10,916(r11)
	PPC_STORE_U64(ctx.r11.u32 + 916, ctx.r10.u64);
	// ld r10,-264(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// std r10,928(r11)
	PPC_STORE_U64(ctx.r11.u32 + 928, ctx.r10.u64);
	// ld r10,-200(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// std r10,940(r11)
	PPC_STORE_U64(ctx.r11.u32 + 940, ctx.r10.u64);
	// ld r10,-280(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// std r10,952(r11)
	PPC_STORE_U64(ctx.r11.u32 + 952, ctx.r10.u64);
	// ld r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// std r10,964(r11)
	PPC_STORE_U64(ctx.r11.u32 + 964, ctx.r10.u64);
	// b 0x82d5c4f0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C048"))) PPC_WEAK_FUNC(sub_8307C048);
PPC_FUNC_IMPL(__imp__sub_8307C048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// addi r11,r11,-17920
	ctx.r11.s64 = ctx.r11.s64 + -17920;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8308acd4
	ctx.lr = 0x8307C064;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32464
	ctx.r3.s64 = ctx.r11.s64 + 32464;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C070;
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

__attribute__((alias("__imp__sub_8307C080"))) PPC_WEAK_FUNC(sub_8307C080);
PPC_FUNC_IMPL(__imp__sub_8307C080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// addi r11,r11,-17888
	ctx.r11.s64 = ctx.r11.s64 + -17888;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8308acd4
	ctx.lr = 0x8307C09C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32488
	ctx.r3.s64 = ctx.r11.s64 + 32488;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C0A8;
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

__attribute__((alias("__imp__sub_8307C0B8"))) PPC_WEAK_FUNC(sub_8307C0B8);
PPC_FUNC_IMPL(__imp__sub_8307C0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,29648
	ctx.r3.s64 = ctx.r11.s64 + 29648;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82d5cb60
	sub_82D5CB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C0D0"))) PPC_WEAK_FUNC(sub_8307C0D0);
PPC_FUNC_IMPL(__imp__sub_8307C0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// addi r11,r11,5408
	ctx.r11.s64 = ctx.r11.s64 + 5408;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8308acd4
	ctx.lr = 0x8307C0EC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32512
	ctx.r3.s64 = ctx.r11.s64 + 32512;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C0F8;
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

__attribute__((alias("__imp__sub_8307C108"))) PPC_WEAK_FUNC(sub_8307C108);
PPC_FUNC_IMPL(__imp__sub_8307C108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32536
	ctx.r3.s64 = ctx.r11.s64 + 32536;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C118"))) PPC_WEAK_FUNC(sub_8307C118);
PPC_FUNC_IMPL(__imp__sub_8307C118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32544
	ctx.r3.s64 = ctx.r11.s64 + 32544;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C128"))) PPC_WEAK_FUNC(sub_8307C128);
PPC_FUNC_IMPL(__imp__sub_8307C128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32568
	ctx.r3.s64 = ctx.r11.s64 + 32568;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C138"))) PPC_WEAK_FUNC(sub_8307C138);
PPC_FUNC_IMPL(__imp__sub_8307C138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-32752
	ctx.r3.s64 = ctx.r11.s64 + -32752;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C148"))) PPC_WEAK_FUNC(sub_8307C148);
PPC_FUNC_IMPL(__imp__sub_8307C148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-32648
	ctx.r3.s64 = ctx.r11.s64 + -32648;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C158"))) PPC_WEAK_FUNC(sub_8307C158);
PPC_FUNC_IMPL(__imp__sub_8307C158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-32640
	ctx.r3.s64 = ctx.r11.s64 + -32640;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C168"))) PPC_WEAK_FUNC(sub_8307C168);
PPC_FUNC_IMPL(__imp__sub_8307C168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-32632
	ctx.r3.s64 = ctx.r11.s64 + -32632;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C178"))) PPC_WEAK_FUNC(sub_8307C178);
PPC_FUNC_IMPL(__imp__sub_8307C178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-32456
	ctx.r3.s64 = ctx.r11.s64 + -32456;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307C188"))) PPC_WEAK_FUNC(sub_8307C188);
PPC_FUNC_IMPL(__imp__sub_8307C188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,20856
	ctx.r3.s64 = ctx.r11.s64 + 20856;
	// bl 0x82d375b0
	ctx.lr = 0x8307C1A4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-32376
	ctx.r3.s64 = ctx.r11.s64 + -32376;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C1B0;
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

__attribute__((alias("__imp__sub_8307C1C0"))) PPC_WEAK_FUNC(sub_8307C1C0);
PPC_FUNC_IMPL(__imp__sub_8307C1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,20896
	ctx.r3.s64 = ctx.r11.s64 + 20896;
	// bl 0x82d375b0
	ctx.lr = 0x8307C1DC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-32296
	ctx.r3.s64 = ctx.r11.s64 + -32296;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C1E8;
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

__attribute__((alias("__imp__sub_8307C1F8"))) PPC_WEAK_FUNC(sub_8307C1F8);
PPC_FUNC_IMPL(__imp__sub_8307C1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,21188
	ctx.r3.s64 = ctx.r11.s64 + 21188;
	// bl 0x82d375b0
	ctx.lr = 0x8307C214;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-32216
	ctx.r3.s64 = ctx.r11.s64 + -32216;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C220;
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

__attribute__((alias("__imp__sub_8307C230"))) PPC_WEAK_FUNC(sub_8307C230);
PPC_FUNC_IMPL(__imp__sub_8307C230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,21412
	ctx.r3.s64 = ctx.r11.s64 + 21412;
	// bl 0x82d375b0
	ctx.lr = 0x8307C24C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-32136
	ctx.r3.s64 = ctx.r11.s64 + -32136;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C258;
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

__attribute__((alias("__imp__sub_8307C268"))) PPC_WEAK_FUNC(sub_8307C268);
PPC_FUNC_IMPL(__imp__sub_8307C268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,21420
	ctx.r3.s64 = ctx.r11.s64 + 21420;
	// bl 0x82d375b0
	ctx.lr = 0x8307C284;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-32056
	ctx.r3.s64 = ctx.r11.s64 + -32056;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C290;
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

__attribute__((alias("__imp__sub_8307C2A0"))) PPC_WEAK_FUNC(sub_8307C2A0);
PPC_FUNC_IMPL(__imp__sub_8307C2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,21428
	ctx.r3.s64 = ctx.r11.s64 + 21428;
	// bl 0x82d375b0
	ctx.lr = 0x8307C2BC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-31976
	ctx.r3.s64 = ctx.r11.s64 + -31976;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C2C8;
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

__attribute__((alias("__imp__sub_8307C2D8"))) PPC_WEAK_FUNC(sub_8307C2D8);
PPC_FUNC_IMPL(__imp__sub_8307C2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,21548
	ctx.r3.s64 = ctx.r11.s64 + 21548;
	// bl 0x82d375b0
	ctx.lr = 0x8307C2F4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-31896
	ctx.r3.s64 = ctx.r11.s64 + -31896;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C300;
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

__attribute__((alias("__imp__sub_8307C310"))) PPC_WEAK_FUNC(sub_8307C310);
PPC_FUNC_IMPL(__imp__sub_8307C310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,21552
	ctx.r3.s64 = ctx.r11.s64 + 21552;
	// bl 0x82d375b0
	ctx.lr = 0x8307C32C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-31816
	ctx.r3.s64 = ctx.r11.s64 + -31816;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C338;
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

__attribute__((alias("__imp__sub_8307C348"))) PPC_WEAK_FUNC(sub_8307C348);
PPC_FUNC_IMPL(__imp__sub_8307C348) {
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
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r31,r11,-27196
	ctx.r31.s64 = ctx.r11.s64 + -27196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d37e00
	ctx.lr = 0x8307C368;
	sub_82D37E00(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31991
	ctx.r10.s64 = -2096562176;
	// addi r11,r11,-19544
	ctx.r11.s64 = ctx.r11.s64 + -19544;
	// addi r3,r10,-31736
	ctx.r3.s64 = ctx.r10.s64 + -31736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// bl 0x82d5cd68
	ctx.lr = 0x8307C3A0;
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

__attribute__((alias("__imp__sub_8307C3B8"))) PPC_WEAK_FUNC(sub_8307C3B8);
PPC_FUNC_IMPL(__imp__sub_8307C3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,22656
	ctx.r3.s64 = ctx.r11.s64 + 22656;
	// bl 0x82d375b0
	ctx.lr = 0x8307C3D4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-31696
	ctx.r3.s64 = ctx.r11.s64 + -31696;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C3E0;
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

__attribute__((alias("__imp__sub_8307C3F0"))) PPC_WEAK_FUNC(sub_8307C3F0);
PPC_FUNC_IMPL(__imp__sub_8307C3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x82d375b0
	ctx.lr = 0x8307C40C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-31600
	ctx.r3.s64 = ctx.r11.s64 + -31600;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C418;
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

__attribute__((alias("__imp__sub_8307C428"))) PPC_WEAK_FUNC(sub_8307C428);
PPC_FUNC_IMPL(__imp__sub_8307C428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23316
	ctx.r3.s64 = ctx.r11.s64 + 23316;
	// bl 0x82d375b0
	ctx.lr = 0x8307C444;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-31520
	ctx.r3.s64 = ctx.r11.s64 + -31520;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C450;
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

__attribute__((alias("__imp__sub_8307C460"))) PPC_WEAK_FUNC(sub_8307C460);
PPC_FUNC_IMPL(__imp__sub_8307C460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23320
	ctx.r3.s64 = ctx.r11.s64 + 23320;
	// bl 0x82d375b0
	ctx.lr = 0x8307C47C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-31440
	ctx.r3.s64 = ctx.r11.s64 + -31440;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C488;
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

__attribute__((alias("__imp__sub_8307C498"))) PPC_WEAK_FUNC(sub_8307C498);
PPC_FUNC_IMPL(__imp__sub_8307C498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23352
	ctx.r3.s64 = ctx.r11.s64 + 23352;
	// bl 0x82d375b0
	ctx.lr = 0x8307C4B4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-31360
	ctx.r3.s64 = ctx.r11.s64 + -31360;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C4C0;
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

__attribute__((alias("__imp__sub_8307C4D0"))) PPC_WEAK_FUNC(sub_8307C4D0);
PPC_FUNC_IMPL(__imp__sub_8307C4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23356
	ctx.r3.s64 = ctx.r11.s64 + 23356;
	// bl 0x82d375b0
	ctx.lr = 0x8307C4EC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-31280
	ctx.r3.s64 = ctx.r11.s64 + -31280;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C4F8;
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

__attribute__((alias("__imp__sub_8307C508"))) PPC_WEAK_FUNC(sub_8307C508);
PPC_FUNC_IMPL(__imp__sub_8307C508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23588
	ctx.r3.s64 = ctx.r11.s64 + 23588;
	// bl 0x82d375b0
	ctx.lr = 0x8307C524;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-31200
	ctx.r3.s64 = ctx.r11.s64 + -31200;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C530;
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

__attribute__((alias("__imp__sub_8307C540"))) PPC_WEAK_FUNC(sub_8307C540);
PPC_FUNC_IMPL(__imp__sub_8307C540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23660
	ctx.r3.s64 = ctx.r11.s64 + 23660;
	// bl 0x82d375b0
	ctx.lr = 0x8307C55C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-31120
	ctx.r3.s64 = ctx.r11.s64 + -31120;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C568;
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

__attribute__((alias("__imp__sub_8307C578"))) PPC_WEAK_FUNC(sub_8307C578);
PPC_FUNC_IMPL(__imp__sub_8307C578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23700
	ctx.r3.s64 = ctx.r11.s64 + 23700;
	// bl 0x82d375b0
	ctx.lr = 0x8307C594;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-31040
	ctx.r3.s64 = ctx.r11.s64 + -31040;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C5A0;
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

__attribute__((alias("__imp__sub_8307C5B0"))) PPC_WEAK_FUNC(sub_8307C5B0);
PPC_FUNC_IMPL(__imp__sub_8307C5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23704
	ctx.r3.s64 = ctx.r11.s64 + 23704;
	// bl 0x82d375b0
	ctx.lr = 0x8307C5CC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-30960
	ctx.r3.s64 = ctx.r11.s64 + -30960;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C5D8;
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

__attribute__((alias("__imp__sub_8307C5E8"))) PPC_WEAK_FUNC(sub_8307C5E8);
PPC_FUNC_IMPL(__imp__sub_8307C5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23744
	ctx.r3.s64 = ctx.r11.s64 + 23744;
	// bl 0x82d375b0
	ctx.lr = 0x8307C604;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-30880
	ctx.r3.s64 = ctx.r11.s64 + -30880;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C610;
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

__attribute__((alias("__imp__sub_8307C620"))) PPC_WEAK_FUNC(sub_8307C620);
PPC_FUNC_IMPL(__imp__sub_8307C620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,24028
	ctx.r3.s64 = ctx.r11.s64 + 24028;
	// bl 0x82d375b0
	ctx.lr = 0x8307C63C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-30800
	ctx.r3.s64 = ctx.r11.s64 + -30800;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C648;
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

__attribute__((alias("__imp__sub_8307C658"))) PPC_WEAK_FUNC(sub_8307C658);
PPC_FUNC_IMPL(__imp__sub_8307C658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,24068
	ctx.r3.s64 = ctx.r11.s64 + 24068;
	// bl 0x82d375b0
	ctx.lr = 0x8307C674;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-30720
	ctx.r3.s64 = ctx.r11.s64 + -30720;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C680;
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

__attribute__((alias("__imp__sub_8307C690"))) PPC_WEAK_FUNC(sub_8307C690);
PPC_FUNC_IMPL(__imp__sub_8307C690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,24072
	ctx.r3.s64 = ctx.r11.s64 + 24072;
	// bl 0x82d375b0
	ctx.lr = 0x8307C6AC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-30640
	ctx.r3.s64 = ctx.r11.s64 + -30640;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C6B8;
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

__attribute__((alias("__imp__sub_8307C6C8"))) PPC_WEAK_FUNC(sub_8307C6C8);
PPC_FUNC_IMPL(__imp__sub_8307C6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,24280
	ctx.r3.s64 = ctx.r11.s64 + 24280;
	// bl 0x82d375b0
	ctx.lr = 0x8307C6E4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-30560
	ctx.r3.s64 = ctx.r11.s64 + -30560;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C6F0;
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

__attribute__((alias("__imp__sub_8307C700"))) PPC_WEAK_FUNC(sub_8307C700);
PPC_FUNC_IMPL(__imp__sub_8307C700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,24320
	ctx.r3.s64 = ctx.r11.s64 + 24320;
	// bl 0x82d375b0
	ctx.lr = 0x8307C71C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-30480
	ctx.r3.s64 = ctx.r11.s64 + -30480;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C728;
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

__attribute__((alias("__imp__sub_8307C738"))) PPC_WEAK_FUNC(sub_8307C738);
PPC_FUNC_IMPL(__imp__sub_8307C738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,24396
	ctx.r3.s64 = ctx.r11.s64 + 24396;
	// bl 0x82d375b0
	ctx.lr = 0x8307C754;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-30400
	ctx.r3.s64 = ctx.r11.s64 + -30400;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C760;
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

__attribute__((alias("__imp__sub_8307C770"))) PPC_WEAK_FUNC(sub_8307C770);
PPC_FUNC_IMPL(__imp__sub_8307C770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,24400
	ctx.r3.s64 = ctx.r11.s64 + 24400;
	// bl 0x82d375b0
	ctx.lr = 0x8307C78C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-30320
	ctx.r3.s64 = ctx.r11.s64 + -30320;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C798;
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

__attribute__((alias("__imp__sub_8307C7A8"))) PPC_WEAK_FUNC(sub_8307C7A8);
PPC_FUNC_IMPL(__imp__sub_8307C7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,24476
	ctx.r3.s64 = ctx.r11.s64 + 24476;
	// bl 0x82d375b0
	ctx.lr = 0x8307C7C4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-30240
	ctx.r3.s64 = ctx.r11.s64 + -30240;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C7D0;
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

__attribute__((alias("__imp__sub_8307C7E0"))) PPC_WEAK_FUNC(sub_8307C7E0);
PPC_FUNC_IMPL(__imp__sub_8307C7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,24644
	ctx.r3.s64 = ctx.r11.s64 + 24644;
	// bl 0x82d375b0
	ctx.lr = 0x8307C7FC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-30160
	ctx.r3.s64 = ctx.r11.s64 + -30160;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C808;
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

__attribute__((alias("__imp__sub_8307C818"))) PPC_WEAK_FUNC(sub_8307C818);
PPC_FUNC_IMPL(__imp__sub_8307C818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,24836
	ctx.r3.s64 = ctx.r11.s64 + 24836;
	// bl 0x82d375b0
	ctx.lr = 0x8307C834;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-30080
	ctx.r3.s64 = ctx.r11.s64 + -30080;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C840;
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

__attribute__((alias("__imp__sub_8307C850"))) PPC_WEAK_FUNC(sub_8307C850);
PPC_FUNC_IMPL(__imp__sub_8307C850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25036
	ctx.r3.s64 = ctx.r11.s64 + 25036;
	// bl 0x82d375b0
	ctx.lr = 0x8307C86C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-30000
	ctx.r3.s64 = ctx.r11.s64 + -30000;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C878;
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

__attribute__((alias("__imp__sub_8307C888"))) PPC_WEAK_FUNC(sub_8307C888);
PPC_FUNC_IMPL(__imp__sub_8307C888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25040
	ctx.r3.s64 = ctx.r11.s64 + 25040;
	// bl 0x82d375b0
	ctx.lr = 0x8307C8A4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-29920
	ctx.r3.s64 = ctx.r11.s64 + -29920;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C8B0;
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

__attribute__((alias("__imp__sub_8307C8C0"))) PPC_WEAK_FUNC(sub_8307C8C0);
PPC_FUNC_IMPL(__imp__sub_8307C8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25564
	ctx.r3.s64 = ctx.r11.s64 + 25564;
	// bl 0x82d375b0
	ctx.lr = 0x8307C8DC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-29840
	ctx.r3.s64 = ctx.r11.s64 + -29840;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C8E8;
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

__attribute__((alias("__imp__sub_8307C8F8"))) PPC_WEAK_FUNC(sub_8307C8F8);
PPC_FUNC_IMPL(__imp__sub_8307C8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25636
	ctx.r3.s64 = ctx.r11.s64 + 25636;
	// bl 0x82d375b0
	ctx.lr = 0x8307C914;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-29760
	ctx.r3.s64 = ctx.r11.s64 + -29760;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C920;
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

__attribute__((alias("__imp__sub_8307C930"))) PPC_WEAK_FUNC(sub_8307C930);
PPC_FUNC_IMPL(__imp__sub_8307C930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25676
	ctx.r3.s64 = ctx.r11.s64 + 25676;
	// bl 0x82d375b0
	ctx.lr = 0x8307C94C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-29680
	ctx.r3.s64 = ctx.r11.s64 + -29680;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C958;
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

__attribute__((alias("__imp__sub_8307C968"))) PPC_WEAK_FUNC(sub_8307C968);
PPC_FUNC_IMPL(__imp__sub_8307C968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25684
	ctx.r3.s64 = ctx.r11.s64 + 25684;
	// bl 0x82d375b0
	ctx.lr = 0x8307C984;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-29600
	ctx.r3.s64 = ctx.r11.s64 + -29600;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C990;
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

__attribute__((alias("__imp__sub_8307C9A0"))) PPC_WEAK_FUNC(sub_8307C9A0);
PPC_FUNC_IMPL(__imp__sub_8307C9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25724
	ctx.r3.s64 = ctx.r11.s64 + 25724;
	// bl 0x82d375b0
	ctx.lr = 0x8307C9BC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-29520
	ctx.r3.s64 = ctx.r11.s64 + -29520;
	// bl 0x82d5cd68
	ctx.lr = 0x8307C9C8;
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

__attribute__((alias("__imp__sub_8307C9D8"))) PPC_WEAK_FUNC(sub_8307C9D8);
PPC_FUNC_IMPL(__imp__sub_8307C9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25764
	ctx.r3.s64 = ctx.r11.s64 + 25764;
	// bl 0x82d375b0
	ctx.lr = 0x8307C9F4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-29440
	ctx.r3.s64 = ctx.r11.s64 + -29440;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CA00;
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

__attribute__((alias("__imp__sub_8307CA10"))) PPC_WEAK_FUNC(sub_8307CA10);
PPC_FUNC_IMPL(__imp__sub_8307CA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25804
	ctx.r3.s64 = ctx.r11.s64 + 25804;
	// bl 0x82d375b0
	ctx.lr = 0x8307CA2C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-29360
	ctx.r3.s64 = ctx.r11.s64 + -29360;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CA38;
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

__attribute__((alias("__imp__sub_8307CA48"))) PPC_WEAK_FUNC(sub_8307CA48);
PPC_FUNC_IMPL(__imp__sub_8307CA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25844
	ctx.r3.s64 = ctx.r11.s64 + 25844;
	// bl 0x82d375b0
	ctx.lr = 0x8307CA64;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-29280
	ctx.r3.s64 = ctx.r11.s64 + -29280;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CA70;
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

__attribute__((alias("__imp__sub_8307CA80"))) PPC_WEAK_FUNC(sub_8307CA80);
PPC_FUNC_IMPL(__imp__sub_8307CA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25852
	ctx.r3.s64 = ctx.r11.s64 + 25852;
	// bl 0x82d375b0
	ctx.lr = 0x8307CA9C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-29200
	ctx.r3.s64 = ctx.r11.s64 + -29200;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CAA8;
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

__attribute__((alias("__imp__sub_8307CAB8"))) PPC_WEAK_FUNC(sub_8307CAB8);
PPC_FUNC_IMPL(__imp__sub_8307CAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25860
	ctx.r3.s64 = ctx.r11.s64 + 25860;
	// bl 0x82d375b0
	ctx.lr = 0x8307CAD4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-29120
	ctx.r3.s64 = ctx.r11.s64 + -29120;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CAE0;
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

__attribute__((alias("__imp__sub_8307CAF0"))) PPC_WEAK_FUNC(sub_8307CAF0);
PPC_FUNC_IMPL(__imp__sub_8307CAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25868
	ctx.r3.s64 = ctx.r11.s64 + 25868;
	// bl 0x82d375b0
	ctx.lr = 0x8307CB0C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-29040
	ctx.r3.s64 = ctx.r11.s64 + -29040;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CB18;
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

__attribute__((alias("__imp__sub_8307CB28"))) PPC_WEAK_FUNC(sub_8307CB28);
PPC_FUNC_IMPL(__imp__sub_8307CB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25876
	ctx.r3.s64 = ctx.r11.s64 + 25876;
	// bl 0x82d375b0
	ctx.lr = 0x8307CB44;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-28960
	ctx.r3.s64 = ctx.r11.s64 + -28960;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CB50;
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

__attribute__((alias("__imp__sub_8307CB60"))) PPC_WEAK_FUNC(sub_8307CB60);
PPC_FUNC_IMPL(__imp__sub_8307CB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25884
	ctx.r3.s64 = ctx.r11.s64 + 25884;
	// bl 0x82d375b0
	ctx.lr = 0x8307CB7C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-28880
	ctx.r3.s64 = ctx.r11.s64 + -28880;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CB88;
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

__attribute__((alias("__imp__sub_8307CB98"))) PPC_WEAK_FUNC(sub_8307CB98);
PPC_FUNC_IMPL(__imp__sub_8307CB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25964
	ctx.r3.s64 = ctx.r11.s64 + 25964;
	// bl 0x82d375b0
	ctx.lr = 0x8307CBB4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-28784
	ctx.r3.s64 = ctx.r11.s64 + -28784;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CBC0;
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

__attribute__((alias("__imp__sub_8307CBD0"))) PPC_WEAK_FUNC(sub_8307CBD0);
PPC_FUNC_IMPL(__imp__sub_8307CBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26008
	ctx.r3.s64 = ctx.r11.s64 + 26008;
	// bl 0x82d375b0
	ctx.lr = 0x8307CBEC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-28704
	ctx.r3.s64 = ctx.r11.s64 + -28704;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CBF8;
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

__attribute__((alias("__imp__sub_8307CC08"))) PPC_WEAK_FUNC(sub_8307CC08);
PPC_FUNC_IMPL(__imp__sub_8307CC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-26968
	ctx.r3.s64 = ctx.r11.s64 + -26968;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82cfa0b8
	ctx.lr = 0x8307CC28;
	sub_82CFA0B8(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-28584
	ctx.r3.s64 = ctx.r11.s64 + -28584;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CC34;
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

__attribute__((alias("__imp__sub_8307CC48"))) PPC_WEAK_FUNC(sub_8307CC48);
PPC_FUNC_IMPL(__imp__sub_8307CC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26152
	ctx.r3.s64 = ctx.r11.s64 + 26152;
	// bl 0x82d375b0
	ctx.lr = 0x8307CC64;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-28480
	ctx.r3.s64 = ctx.r11.s64 + -28480;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CC70;
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

__attribute__((alias("__imp__sub_8307CC80"))) PPC_WEAK_FUNC(sub_8307CC80);
PPC_FUNC_IMPL(__imp__sub_8307CC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26172
	ctx.r3.s64 = ctx.r11.s64 + 26172;
	// bl 0x82d375b0
	ctx.lr = 0x8307CC9C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-28400
	ctx.r3.s64 = ctx.r11.s64 + -28400;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CCA8;
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

__attribute__((alias("__imp__sub_8307CCB8"))) PPC_WEAK_FUNC(sub_8307CCB8);
PPC_FUNC_IMPL(__imp__sub_8307CCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26368
	ctx.r3.s64 = ctx.r11.s64 + 26368;
	// bl 0x82d375b0
	ctx.lr = 0x8307CCD4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-28320
	ctx.r3.s64 = ctx.r11.s64 + -28320;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CCE0;
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

__attribute__((alias("__imp__sub_8307CCF0"))) PPC_WEAK_FUNC(sub_8307CCF0);
PPC_FUNC_IMPL(__imp__sub_8307CCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26408
	ctx.r3.s64 = ctx.r11.s64 + 26408;
	// bl 0x82d375b0
	ctx.lr = 0x8307CD0C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-28240
	ctx.r3.s64 = ctx.r11.s64 + -28240;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CD18;
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

__attribute__((alias("__imp__sub_8307CD28"))) PPC_WEAK_FUNC(sub_8307CD28);
PPC_FUNC_IMPL(__imp__sub_8307CD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26416
	ctx.r3.s64 = ctx.r11.s64 + 26416;
	// bl 0x82d375b0
	ctx.lr = 0x8307CD44;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-28160
	ctx.r3.s64 = ctx.r11.s64 + -28160;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CD50;
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

__attribute__((alias("__imp__sub_8307CD60"))) PPC_WEAK_FUNC(sub_8307CD60);
PPC_FUNC_IMPL(__imp__sub_8307CD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26496
	ctx.r3.s64 = ctx.r11.s64 + 26496;
	// bl 0x82d375b0
	ctx.lr = 0x8307CD7C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-28080
	ctx.r3.s64 = ctx.r11.s64 + -28080;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CD88;
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

__attribute__((alias("__imp__sub_8307CD98"))) PPC_WEAK_FUNC(sub_8307CD98);
PPC_FUNC_IMPL(__imp__sub_8307CD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26676
	ctx.r3.s64 = ctx.r11.s64 + 26676;
	// bl 0x82d375b0
	ctx.lr = 0x8307CDB4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-28000
	ctx.r3.s64 = ctx.r11.s64 + -28000;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CDC0;
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

__attribute__((alias("__imp__sub_8307CDD0"))) PPC_WEAK_FUNC(sub_8307CDD0);
PPC_FUNC_IMPL(__imp__sub_8307CDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26684
	ctx.r3.s64 = ctx.r11.s64 + 26684;
	// bl 0x82d375b0
	ctx.lr = 0x8307CDEC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-27920
	ctx.r3.s64 = ctx.r11.s64 + -27920;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CDF8;
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

__attribute__((alias("__imp__sub_8307CE08"))) PPC_WEAK_FUNC(sub_8307CE08);
PPC_FUNC_IMPL(__imp__sub_8307CE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26688
	ctx.r3.s64 = ctx.r11.s64 + 26688;
	// bl 0x82d375b0
	ctx.lr = 0x8307CE24;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-27840
	ctx.r3.s64 = ctx.r11.s64 + -27840;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CE30;
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

__attribute__((alias("__imp__sub_8307CE40"))) PPC_WEAK_FUNC(sub_8307CE40);
PPC_FUNC_IMPL(__imp__sub_8307CE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26728
	ctx.r3.s64 = ctx.r11.s64 + 26728;
	// bl 0x82d375b0
	ctx.lr = 0x8307CE5C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-27760
	ctx.r3.s64 = ctx.r11.s64 + -27760;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CE68;
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

__attribute__((alias("__imp__sub_8307CE78"))) PPC_WEAK_FUNC(sub_8307CE78);
PPC_FUNC_IMPL(__imp__sub_8307CE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26732
	ctx.r3.s64 = ctx.r11.s64 + 26732;
	// bl 0x82d375b0
	ctx.lr = 0x8307CE94;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-27680
	ctx.r3.s64 = ctx.r11.s64 + -27680;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CEA0;
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

__attribute__((alias("__imp__sub_8307CEB0"))) PPC_WEAK_FUNC(sub_8307CEB0);
PPC_FUNC_IMPL(__imp__sub_8307CEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26772
	ctx.r3.s64 = ctx.r11.s64 + 26772;
	// bl 0x82d375b0
	ctx.lr = 0x8307CECC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-27600
	ctx.r3.s64 = ctx.r11.s64 + -27600;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CED8;
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

__attribute__((alias("__imp__sub_8307CEE8"))) PPC_WEAK_FUNC(sub_8307CEE8);
PPC_FUNC_IMPL(__imp__sub_8307CEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26776
	ctx.r3.s64 = ctx.r11.s64 + 26776;
	// bl 0x82d375b0
	ctx.lr = 0x8307CF04;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-27520
	ctx.r3.s64 = ctx.r11.s64 + -27520;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CF10;
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

__attribute__((alias("__imp__sub_8307CF20"))) PPC_WEAK_FUNC(sub_8307CF20);
PPC_FUNC_IMPL(__imp__sub_8307CF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26880
	ctx.r3.s64 = ctx.r11.s64 + 26880;
	// bl 0x82d375b0
	ctx.lr = 0x8307CF3C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-27440
	ctx.r3.s64 = ctx.r11.s64 + -27440;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CF48;
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

__attribute__((alias("__imp__sub_8307CF58"))) PPC_WEAK_FUNC(sub_8307CF58);
PPC_FUNC_IMPL(__imp__sub_8307CF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28056
	ctx.r3.s64 = ctx.r11.s64 + 28056;
	// bl 0x82d375b0
	ctx.lr = 0x8307CF74;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-27208
	ctx.r3.s64 = ctx.r11.s64 + -27208;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CF80;
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

__attribute__((alias("__imp__sub_8307CF90"))) PPC_WEAK_FUNC(sub_8307CF90);
PPC_FUNC_IMPL(__imp__sub_8307CF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28160
	ctx.r3.s64 = ctx.r11.s64 + 28160;
	// bl 0x82d375b0
	ctx.lr = 0x8307CFAC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-27128
	ctx.r3.s64 = ctx.r11.s64 + -27128;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CFB8;
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

__attribute__((alias("__imp__sub_8307CFC8"))) PPC_WEAK_FUNC(sub_8307CFC8);
PPC_FUNC_IMPL(__imp__sub_8307CFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28240
	ctx.r3.s64 = ctx.r11.s64 + 28240;
	// bl 0x82d375b0
	ctx.lr = 0x8307CFE4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-27032
	ctx.r3.s64 = ctx.r11.s64 + -27032;
	// bl 0x82d5cd68
	ctx.lr = 0x8307CFF0;
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

__attribute__((alias("__imp__sub_8307D000"))) PPC_WEAK_FUNC(sub_8307D000);
PPC_FUNC_IMPL(__imp__sub_8307D000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28292
	ctx.r3.s64 = ctx.r11.s64 + 28292;
	// bl 0x82d375b0
	ctx.lr = 0x8307D01C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-26952
	ctx.r3.s64 = ctx.r11.s64 + -26952;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D028;
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

__attribute__((alias("__imp__sub_8307D038"))) PPC_WEAK_FUNC(sub_8307D038);
PPC_FUNC_IMPL(__imp__sub_8307D038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28548
	ctx.r3.s64 = ctx.r11.s64 + 28548;
	// bl 0x82d375b0
	ctx.lr = 0x8307D054;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-26872
	ctx.r3.s64 = ctx.r11.s64 + -26872;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D060;
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

__attribute__((alias("__imp__sub_8307D070"))) PPC_WEAK_FUNC(sub_8307D070);
PPC_FUNC_IMPL(__imp__sub_8307D070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28556
	ctx.r3.s64 = ctx.r11.s64 + 28556;
	// bl 0x82d375b0
	ctx.lr = 0x8307D08C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-26792
	ctx.r3.s64 = ctx.r11.s64 + -26792;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D098;
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

__attribute__((alias("__imp__sub_8307D0A8"))) PPC_WEAK_FUNC(sub_8307D0A8);
PPC_FUNC_IMPL(__imp__sub_8307D0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28628
	ctx.r3.s64 = ctx.r11.s64 + 28628;
	// bl 0x82d375b0
	ctx.lr = 0x8307D0C4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-26656
	ctx.r3.s64 = ctx.r11.s64 + -26656;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D0D0;
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

__attribute__((alias("__imp__sub_8307D0E0"))) PPC_WEAK_FUNC(sub_8307D0E0);
PPC_FUNC_IMPL(__imp__sub_8307D0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28636
	ctx.r3.s64 = ctx.r11.s64 + 28636;
	// bl 0x82d375b0
	ctx.lr = 0x8307D0FC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-26576
	ctx.r3.s64 = ctx.r11.s64 + -26576;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D108;
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

__attribute__((alias("__imp__sub_8307D118"))) PPC_WEAK_FUNC(sub_8307D118);
PPC_FUNC_IMPL(__imp__sub_8307D118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28964
	ctx.r3.s64 = ctx.r11.s64 + 28964;
	// bl 0x82d375b0
	ctx.lr = 0x8307D134;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-26496
	ctx.r3.s64 = ctx.r11.s64 + -26496;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D140;
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

__attribute__((alias("__imp__sub_8307D150"))) PPC_WEAK_FUNC(sub_8307D150);
PPC_FUNC_IMPL(__imp__sub_8307D150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,29164
	ctx.r3.s64 = ctx.r11.s64 + 29164;
	// bl 0x82d375b0
	ctx.lr = 0x8307D16C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-26416
	ctx.r3.s64 = ctx.r11.s64 + -26416;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D178;
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

__attribute__((alias("__imp__sub_8307D188"))) PPC_WEAK_FUNC(sub_8307D188);
PPC_FUNC_IMPL(__imp__sub_8307D188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,29204
	ctx.r3.s64 = ctx.r11.s64 + 29204;
	// bl 0x82d375b0
	ctx.lr = 0x8307D1A4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-26336
	ctx.r3.s64 = ctx.r11.s64 + -26336;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D1B0;
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

__attribute__((alias("__imp__sub_8307D1C0"))) PPC_WEAK_FUNC(sub_8307D1C0);
PPC_FUNC_IMPL(__imp__sub_8307D1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,29244
	ctx.r3.s64 = ctx.r11.s64 + 29244;
	// bl 0x82d375b0
	ctx.lr = 0x8307D1DC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-26256
	ctx.r3.s64 = ctx.r11.s64 + -26256;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D1E8;
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

__attribute__((alias("__imp__sub_8307D1F8"))) PPC_WEAK_FUNC(sub_8307D1F8);
PPC_FUNC_IMPL(__imp__sub_8307D1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,29252
	ctx.r3.s64 = ctx.r11.s64 + 29252;
	// bl 0x82d375b0
	ctx.lr = 0x8307D214;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-26176
	ctx.r3.s64 = ctx.r11.s64 + -26176;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D220;
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

__attribute__((alias("__imp__sub_8307D230"))) PPC_WEAK_FUNC(sub_8307D230);
PPC_FUNC_IMPL(__imp__sub_8307D230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,29372
	ctx.r3.s64 = ctx.r11.s64 + 29372;
	// bl 0x82d375b0
	ctx.lr = 0x8307D24C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-26096
	ctx.r3.s64 = ctx.r11.s64 + -26096;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D258;
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

__attribute__((alias("__imp__sub_8307D268"))) PPC_WEAK_FUNC(sub_8307D268);
PPC_FUNC_IMPL(__imp__sub_8307D268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,29412
	ctx.r3.s64 = ctx.r11.s64 + 29412;
	// bl 0x82d375b0
	ctx.lr = 0x8307D284;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-26016
	ctx.r3.s64 = ctx.r11.s64 + -26016;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D290;
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

__attribute__((alias("__imp__sub_8307D2A0"))) PPC_WEAK_FUNC(sub_8307D2A0);
PPC_FUNC_IMPL(__imp__sub_8307D2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,29420
	ctx.r3.s64 = ctx.r11.s64 + 29420;
	// bl 0x82d375b0
	ctx.lr = 0x8307D2BC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-25936
	ctx.r3.s64 = ctx.r11.s64 + -25936;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D2C8;
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

__attribute__((alias("__imp__sub_8307D2D8"))) PPC_WEAK_FUNC(sub_8307D2D8);
PPC_FUNC_IMPL(__imp__sub_8307D2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30276
	ctx.r3.s64 = ctx.r11.s64 + 30276;
	// bl 0x82d375b0
	ctx.lr = 0x8307D2F4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-25856
	ctx.r3.s64 = ctx.r11.s64 + -25856;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D300;
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

__attribute__((alias("__imp__sub_8307D310"))) PPC_WEAK_FUNC(sub_8307D310);
PPC_FUNC_IMPL(__imp__sub_8307D310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30284
	ctx.r3.s64 = ctx.r11.s64 + 30284;
	// bl 0x82d375b0
	ctx.lr = 0x8307D32C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-25776
	ctx.r3.s64 = ctx.r11.s64 + -25776;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D338;
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

__attribute__((alias("__imp__sub_8307D348"))) PPC_WEAK_FUNC(sub_8307D348);
PPC_FUNC_IMPL(__imp__sub_8307D348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30396
	ctx.r3.s64 = ctx.r11.s64 + 30396;
	// bl 0x82d375b0
	ctx.lr = 0x8307D364;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-25696
	ctx.r3.s64 = ctx.r11.s64 + -25696;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D370;
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

__attribute__((alias("__imp__sub_8307D380"))) PPC_WEAK_FUNC(sub_8307D380);
PPC_FUNC_IMPL(__imp__sub_8307D380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30436
	ctx.r3.s64 = ctx.r11.s64 + 30436;
	// bl 0x82d375b0
	ctx.lr = 0x8307D39C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-25616
	ctx.r3.s64 = ctx.r11.s64 + -25616;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D3A8;
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

__attribute__((alias("__imp__sub_8307D3B8"))) PPC_WEAK_FUNC(sub_8307D3B8);
PPC_FUNC_IMPL(__imp__sub_8307D3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30508
	ctx.r3.s64 = ctx.r11.s64 + 30508;
	// bl 0x82d375b0
	ctx.lr = 0x8307D3D4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-25536
	ctx.r3.s64 = ctx.r11.s64 + -25536;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D3E0;
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

__attribute__((alias("__imp__sub_8307D3F0"))) PPC_WEAK_FUNC(sub_8307D3F0);
PPC_FUNC_IMPL(__imp__sub_8307D3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30548
	ctx.r3.s64 = ctx.r11.s64 + 30548;
	// bl 0x82d375b0
	ctx.lr = 0x8307D40C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-25456
	ctx.r3.s64 = ctx.r11.s64 + -25456;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D418;
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

__attribute__((alias("__imp__sub_8307D428"))) PPC_WEAK_FUNC(sub_8307D428);
PPC_FUNC_IMPL(__imp__sub_8307D428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30588
	ctx.r3.s64 = ctx.r11.s64 + 30588;
	// bl 0x82d375b0
	ctx.lr = 0x8307D444;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-25376
	ctx.r3.s64 = ctx.r11.s64 + -25376;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D450;
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

__attribute__((alias("__imp__sub_8307D460"))) PPC_WEAK_FUNC(sub_8307D460);
PPC_FUNC_IMPL(__imp__sub_8307D460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30660
	ctx.r3.s64 = ctx.r11.s64 + 30660;
	// bl 0x82d375b0
	ctx.lr = 0x8307D47C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-25296
	ctx.r3.s64 = ctx.r11.s64 + -25296;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D488;
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

__attribute__((alias("__imp__sub_8307D498"))) PPC_WEAK_FUNC(sub_8307D498);
PPC_FUNC_IMPL(__imp__sub_8307D498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30732
	ctx.r3.s64 = ctx.r11.s64 + 30732;
	// bl 0x82d375b0
	ctx.lr = 0x8307D4B4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-25216
	ctx.r3.s64 = ctx.r11.s64 + -25216;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D4C0;
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

__attribute__((alias("__imp__sub_8307D4D0"))) PPC_WEAK_FUNC(sub_8307D4D0);
PPC_FUNC_IMPL(__imp__sub_8307D4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30740
	ctx.r3.s64 = ctx.r11.s64 + 30740;
	// bl 0x82d375b0
	ctx.lr = 0x8307D4EC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-25096
	ctx.r3.s64 = ctx.r11.s64 + -25096;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D4F8;
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

__attribute__((alias("__imp__sub_8307D508"))) PPC_WEAK_FUNC(sub_8307D508);
PPC_FUNC_IMPL(__imp__sub_8307D508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30748
	ctx.r3.s64 = ctx.r11.s64 + 30748;
	// bl 0x82d375b0
	ctx.lr = 0x8307D524;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-25016
	ctx.r3.s64 = ctx.r11.s64 + -25016;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D530;
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

__attribute__((alias("__imp__sub_8307D540"))) PPC_WEAK_FUNC(sub_8307D540);
PPC_FUNC_IMPL(__imp__sub_8307D540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30796
	ctx.r3.s64 = ctx.r11.s64 + 30796;
	// bl 0x82d375b0
	ctx.lr = 0x8307D55C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D568;
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

__attribute__((alias("__imp__sub_8307D578"))) PPC_WEAK_FUNC(sub_8307D578);
PPC_FUNC_IMPL(__imp__sub_8307D578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30804
	ctx.r3.s64 = ctx.r11.s64 + 30804;
	// bl 0x82d375b0
	ctx.lr = 0x8307D594;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24856
	ctx.r3.s64 = ctx.r11.s64 + -24856;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D5A0;
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

__attribute__((alias("__imp__sub_8307D5B0"))) PPC_WEAK_FUNC(sub_8307D5B0);
PPC_FUNC_IMPL(__imp__sub_8307D5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30812
	ctx.r3.s64 = ctx.r11.s64 + 30812;
	// bl 0x82d375b0
	ctx.lr = 0x8307D5CC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24776
	ctx.r3.s64 = ctx.r11.s64 + -24776;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D5D8;
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

__attribute__((alias("__imp__sub_8307D5E8"))) PPC_WEAK_FUNC(sub_8307D5E8);
PPC_FUNC_IMPL(__imp__sub_8307D5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30820
	ctx.r3.s64 = ctx.r11.s64 + 30820;
	// bl 0x82d375b0
	ctx.lr = 0x8307D604;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24696
	ctx.r3.s64 = ctx.r11.s64 + -24696;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D610;
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

__attribute__((alias("__imp__sub_8307D620"))) PPC_WEAK_FUNC(sub_8307D620);
PPC_FUNC_IMPL(__imp__sub_8307D620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30828
	ctx.r3.s64 = ctx.r11.s64 + 30828;
	// bl 0x82d375b0
	ctx.lr = 0x8307D63C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24616
	ctx.r3.s64 = ctx.r11.s64 + -24616;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D648;
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

__attribute__((alias("__imp__sub_8307D658"))) PPC_WEAK_FUNC(sub_8307D658);
PPC_FUNC_IMPL(__imp__sub_8307D658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30836
	ctx.r3.s64 = ctx.r11.s64 + 30836;
	// bl 0x82d375b0
	ctx.lr = 0x8307D674;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24536
	ctx.r3.s64 = ctx.r11.s64 + -24536;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D680;
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

__attribute__((alias("__imp__sub_8307D690"))) PPC_WEAK_FUNC(sub_8307D690);
PPC_FUNC_IMPL(__imp__sub_8307D690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30844
	ctx.r3.s64 = ctx.r11.s64 + 30844;
	// bl 0x82d375b0
	ctx.lr = 0x8307D6AC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24456
	ctx.r3.s64 = ctx.r11.s64 + -24456;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D6B8;
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

__attribute__((alias("__imp__sub_8307D6C8"))) PPC_WEAK_FUNC(sub_8307D6C8);
PPC_FUNC_IMPL(__imp__sub_8307D6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,30852
	ctx.r3.s64 = ctx.r11.s64 + 30852;
	// bl 0x82d375b0
	ctx.lr = 0x8307D6E4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24376
	ctx.r3.s64 = ctx.r11.s64 + -24376;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D6F0;
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

__attribute__((alias("__imp__sub_8307D700"))) PPC_WEAK_FUNC(sub_8307D700);
PPC_FUNC_IMPL(__imp__sub_8307D700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-23784
	ctx.r3.s64 = ctx.r11.s64 + -23784;
	// bl 0x82d59e38
	ctx.lr = 0x8307D718;
	sub_82D59E38(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24264
	ctx.r3.s64 = ctx.r11.s64 + -24264;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D724;
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

__attribute__((alias("__imp__sub_8307D738"))) PPC_WEAK_FUNC(sub_8307D738);
PPC_FUNC_IMPL(__imp__sub_8307D738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24248
	ctx.r3.s64 = ctx.r11.s64 + -24248;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307D748"))) PPC_WEAK_FUNC(sub_8307D748);
PPC_FUNC_IMPL(__imp__sub_8307D748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-23535
	ctx.r3.s64 = ctx.r11.s64 + -23535;
	// bl 0x82d59e38
	ctx.lr = 0x8307D760;
	sub_82D59E38(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24168
	ctx.r3.s64 = ctx.r11.s64 + -24168;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D76C;
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

__attribute__((alias("__imp__sub_8307D780"))) PPC_WEAK_FUNC(sub_8307D780);
PPC_FUNC_IMPL(__imp__sub_8307D780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d5efa0
	ctx.lr = 0x8307D790;
	sub_82D5EFA0(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r11,r11,-23672
	ctx.r11.s64 = ctx.r11.s64 + -23672;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a19128
	ctx.lr = 0x8307D7A4;
	sub_82A19128(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24104
	ctx.r3.s64 = ctx.r11.s64 + -24104;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D7B0;
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

__attribute__((alias("__imp__sub_8307D7C0"))) PPC_WEAK_FUNC(sub_8307D7C0);
PPC_FUNC_IMPL(__imp__sub_8307D7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-23672
	ctx.r4.s64 = ctx.r11.s64 + -23672;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-23592
	ctx.r3.s64 = ctx.r11.s64 + -23592;
	// bl 0x82a1f440
	ctx.lr = 0x8307D7E8;
	sub_82A1F440(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24152
	ctx.r3.s64 = ctx.r11.s64 + -24152;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D7F4;
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

__attribute__((alias("__imp__sub_8307D808"))) PPC_WEAK_FUNC(sub_8307D808);
PPC_FUNC_IMPL(__imp__sub_8307D808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r11,r11,-23592
	ctx.r11.s64 = ctx.r11.s64 + -23592;
	// addi r8,r11,44
	ctx.r8.s64 = ctx.r11.s64 + 44;
	// stw r11,-23524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23524, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// lwz r10,-23528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23528);
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307D850"))) PPC_WEAK_FUNC(sub_8307D850);
PPC_FUNC_IMPL(__imp__sub_8307D850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-23460
	ctx.r3.s64 = ctx.r11.s64 + -23460;
	// bl 0x82d59e38
	ctx.lr = 0x8307D868;
	sub_82D59E38(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24088
	ctx.r3.s64 = ctx.r11.s64 + -24088;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D874;
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

__attribute__((alias("__imp__sub_8307D888"))) PPC_WEAK_FUNC(sub_8307D888);
PPC_FUNC_IMPL(__imp__sub_8307D888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24072
	ctx.r3.s64 = ctx.r11.s64 + -24072;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307D898"))) PPC_WEAK_FUNC(sub_8307D898);
PPC_FUNC_IMPL(__imp__sub_8307D898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r4,114
	ctx.r4.s64 = 114;
	// addi r3,r11,-20600
	ctx.r3.s64 = ctx.r11.s64 + -20600;
	// b 0x82e54698
	sub_82E54698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307D8A8"))) PPC_WEAK_FUNC(sub_8307D8A8);
PPC_FUNC_IMPL(__imp__sub_8307D8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r4,r11,-20600
	ctx.r4.s64 = ctx.r11.s64 + -20600;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20556
	ctx.r3.s64 = ctx.r11.s64 + -20556;
	// b 0x82e55468
	sub_82E55468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307D8C0"))) PPC_WEAK_FUNC(sub_8307D8C0);
PPC_FUNC_IMPL(__imp__sub_8307D8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24056
	ctx.r3.s64 = ctx.r11.s64 + -24056;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307D8D0"))) PPC_WEAK_FUNC(sub_8307D8D0);
PPC_FUNC_IMPL(__imp__sub_8307D8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18984
	ctx.r3.s64 = ctx.r11.s64 + -18984;
	// bl 0x82ee2cb0
	ctx.lr = 0x8307D8E8;
	sub_82EE2CB0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24032
	ctx.r3.s64 = ctx.r11.s64 + -24032;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D8F4;
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

__attribute__((alias("__imp__sub_8307D908"))) PPC_WEAK_FUNC(sub_8307D908);
PPC_FUNC_IMPL(__imp__sub_8307D908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24016
	ctx.r3.s64 = ctx.r11.s64 + -24016;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8307D918"))) PPC_WEAK_FUNC(sub_8307D918);
PPC_FUNC_IMPL(__imp__sub_8307D918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-17800
	ctx.r3.s64 = ctx.r11.s64 + -17800;
	// bl 0x8308acd4
	ctx.lr = 0x8307D930;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-24000
	ctx.r3.s64 = ctx.r11.s64 + -24000;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D93C;
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

__attribute__((alias("__imp__sub_8307D950"))) PPC_WEAK_FUNC(sub_8307D950);
PPC_FUNC_IMPL(__imp__sub_8307D950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-18944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18944);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,-17744(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -17744, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307D968"))) PPC_WEAK_FUNC(sub_8307D968);
PPC_FUNC_IMPL(__imp__sub_8307D968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-12024
	ctx.r3.s64 = ctx.r11.s64 + -12024;
	// bl 0x82d375b0
	ctx.lr = 0x8307D984;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-23992
	ctx.r3.s64 = ctx.r11.s64 + -23992;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D990;
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

__attribute__((alias("__imp__sub_8307D9A0"))) PPC_WEAK_FUNC(sub_8307D9A0);
PPC_FUNC_IMPL(__imp__sub_8307D9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-11772
	ctx.r3.s64 = ctx.r11.s64 + -11772;
	// bl 0x82d375b0
	ctx.lr = 0x8307D9BC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-23912
	ctx.r3.s64 = ctx.r11.s64 + -23912;
	// bl 0x82d5cd68
	ctx.lr = 0x8307D9C8;
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

__attribute__((alias("__imp__sub_8307D9D8"))) PPC_WEAK_FUNC(sub_8307D9D8);
PPC_FUNC_IMPL(__imp__sub_8307D9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-11764
	ctx.r3.s64 = ctx.r11.s64 + -11764;
	// bl 0x82d375b0
	ctx.lr = 0x8307D9F4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-23832
	ctx.r3.s64 = ctx.r11.s64 + -23832;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DA00;
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

__attribute__((alias("__imp__sub_8307DA10"))) PPC_WEAK_FUNC(sub_8307DA10);
PPC_FUNC_IMPL(__imp__sub_8307DA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-11756
	ctx.r3.s64 = ctx.r11.s64 + -11756;
	// bl 0x82d375b0
	ctx.lr = 0x8307DA2C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-23752
	ctx.r3.s64 = ctx.r11.s64 + -23752;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DA38;
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

__attribute__((alias("__imp__sub_8307DA48"))) PPC_WEAK_FUNC(sub_8307DA48);
PPC_FUNC_IMPL(__imp__sub_8307DA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-11748
	ctx.r3.s64 = ctx.r11.s64 + -11748;
	// bl 0x82d375b0
	ctx.lr = 0x8307DA64;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-23672
	ctx.r3.s64 = ctx.r11.s64 + -23672;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DA70;
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

__attribute__((alias("__imp__sub_8307DA80"))) PPC_WEAK_FUNC(sub_8307DA80);
PPC_FUNC_IMPL(__imp__sub_8307DA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-11228
	ctx.r3.s64 = ctx.r11.s64 + -11228;
	// bl 0x82d375b0
	ctx.lr = 0x8307DA9C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-23592
	ctx.r3.s64 = ctx.r11.s64 + -23592;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DAA8;
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

__attribute__((alias("__imp__sub_8307DAB8"))) PPC_WEAK_FUNC(sub_8307DAB8);
PPC_FUNC_IMPL(__imp__sub_8307DAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-11188
	ctx.r3.s64 = ctx.r11.s64 + -11188;
	// bl 0x82d375b0
	ctx.lr = 0x8307DAD4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-23512
	ctx.r3.s64 = ctx.r11.s64 + -23512;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DAE0;
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

__attribute__((alias("__imp__sub_8307DAF0"))) PPC_WEAK_FUNC(sub_8307DAF0);
PPC_FUNC_IMPL(__imp__sub_8307DAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-11004
	ctx.r3.s64 = ctx.r11.s64 + -11004;
	// bl 0x82d375b0
	ctx.lr = 0x8307DB0C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-23432
	ctx.r3.s64 = ctx.r11.s64 + -23432;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DB18;
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

__attribute__((alias("__imp__sub_8307DB28"))) PPC_WEAK_FUNC(sub_8307DB28);
PPC_FUNC_IMPL(__imp__sub_8307DB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-10844
	ctx.r3.s64 = ctx.r11.s64 + -10844;
	// bl 0x82d375b0
	ctx.lr = 0x8307DB44;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-23352
	ctx.r3.s64 = ctx.r11.s64 + -23352;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DB50;
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

__attribute__((alias("__imp__sub_8307DB60"))) PPC_WEAK_FUNC(sub_8307DB60);
PPC_FUNC_IMPL(__imp__sub_8307DB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-10516
	ctx.r3.s64 = ctx.r11.s64 + -10516;
	// bl 0x82d375b0
	ctx.lr = 0x8307DB7C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-23272
	ctx.r3.s64 = ctx.r11.s64 + -23272;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DB88;
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

__attribute__((alias("__imp__sub_8307DB98"))) PPC_WEAK_FUNC(sub_8307DB98);
PPC_FUNC_IMPL(__imp__sub_8307DB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-10512
	ctx.r3.s64 = ctx.r11.s64 + -10512;
	// bl 0x82d375b0
	ctx.lr = 0x8307DBB4;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-23192
	ctx.r3.s64 = ctx.r11.s64 + -23192;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DBC0;
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

__attribute__((alias("__imp__sub_8307DBD0"))) PPC_WEAK_FUNC(sub_8307DBD0);
PPC_FUNC_IMPL(__imp__sub_8307DBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-10316
	ctx.r3.s64 = ctx.r11.s64 + -10316;
	// bl 0x82d375b0
	ctx.lr = 0x8307DBEC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-23112
	ctx.r3.s64 = ctx.r11.s64 + -23112;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DBF8;
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

__attribute__((alias("__imp__sub_8307DC08"))) PPC_WEAK_FUNC(sub_8307DC08);
PPC_FUNC_IMPL(__imp__sub_8307DC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-10100
	ctx.r3.s64 = ctx.r11.s64 + -10100;
	// bl 0x82d375b0
	ctx.lr = 0x8307DC24;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-23032
	ctx.r3.s64 = ctx.r11.s64 + -23032;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DC30;
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

__attribute__((alias("__imp__sub_8307DC40"))) PPC_WEAK_FUNC(sub_8307DC40);
PPC_FUNC_IMPL(__imp__sub_8307DC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-9996
	ctx.r3.s64 = ctx.r11.s64 + -9996;
	// bl 0x82d375b0
	ctx.lr = 0x8307DC5C;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-22952
	ctx.r3.s64 = ctx.r11.s64 + -22952;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DC68;
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

__attribute__((alias("__imp__sub_8307DC78"))) PPC_WEAK_FUNC(sub_8307DC78);
PPC_FUNC_IMPL(__imp__sub_8307DC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-9860
	ctx.r3.s64 = ctx.r11.s64 + -9860;
	// bl 0x82d375b0
	ctx.lr = 0x8307DC94;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-22872
	ctx.r3.s64 = ctx.r11.s64 + -22872;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DCA0;
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

__attribute__((alias("__imp__sub_8307DCB0"))) PPC_WEAK_FUNC(sub_8307DCB0);
PPC_FUNC_IMPL(__imp__sub_8307DCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-9724
	ctx.r3.s64 = ctx.r11.s64 + -9724;
	// bl 0x82d375b0
	ctx.lr = 0x8307DCCC;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-22792
	ctx.r3.s64 = ctx.r11.s64 + -22792;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DCD8;
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

__attribute__((alias("__imp__sub_8307DCE8"))) PPC_WEAK_FUNC(sub_8307DCE8);
PPC_FUNC_IMPL(__imp__sub_8307DCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-9300
	ctx.r3.s64 = ctx.r11.s64 + -9300;
	// bl 0x82d375b0
	ctx.lr = 0x8307DD04;
	sub_82D375B0(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,-22712
	ctx.r3.s64 = ctx.r11.s64 + -22712;
	// bl 0x82d5cd68
	ctx.lr = 0x8307DD10;
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

