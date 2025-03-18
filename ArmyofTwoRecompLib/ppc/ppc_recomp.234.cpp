#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8305BCB8"))) PPC_WEAK_FUNC(sub_8305BCB8);
PPC_FUNC_IMPL(__imp__sub_8305BCB8) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,1804
	ctx.r5.s64 = ctx.r10.s64 + 1804;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1780
	ctx.r4.s64 = ctx.r10.s64 + 1780;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-25976
	ctx.r31.s64 = ctx.r10.s64 + -25976;
	// addi r10,r11,12512
	ctx.r10.s64 = ctx.r11.s64 + 12512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305BD10;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,12424
	ctx.r3.s64 = ctx.r8.s64 + 12424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31840
	ctx.r11.s64 = ctx.r9.s64 + 31840;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31432
	ctx.r11.s64 = ctx.r10.s64 + -31432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305BD40;
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

__attribute__((alias("__imp__sub_8305BD58"))) PPC_WEAK_FUNC(sub_8305BD58);
PPC_FUNC_IMPL(__imp__sub_8305BD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r3,r11,-8164
	ctx.r3.s64 = ctx.r11.s64 + -8164;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8252cb70
	ctx.lr = 0x8305BD7C;
	sub_8252CB70(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,7464
	ctx.r3.s64 = ctx.r11.s64 + 7464;
	// bl 0x82d5cd68
	ctx.lr = 0x8305BD88;
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

__attribute__((alias("__imp__sub_8305BD98"))) PPC_WEAK_FUNC(sub_8305BD98);
PPC_FUNC_IMPL(__imp__sub_8305BD98) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,1856
	ctx.r5.s64 = ctx.r10.s64 + 1856;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1828
	ctx.r4.s64 = ctx.r10.s64 + 1828;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-26812
	ctx.r31.s64 = ctx.r10.s64 + -26812;
	// addi r10,r11,12584
	ctx.r10.s64 = ctx.r11.s64 + 12584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305BDF0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,12504
	ctx.r3.s64 = ctx.r8.s64 + 12504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31928
	ctx.r11.s64 = ctx.r9.s64 + 31928;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31432
	ctx.r11.s64 = ctx.r10.s64 + -31432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305BE20;
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

__attribute__((alias("__imp__sub_8305BE38"))) PPC_WEAK_FUNC(sub_8305BE38);
PPC_FUNC_IMPL(__imp__sub_8305BE38) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,1916
	ctx.r5.s64 = ctx.r10.s64 + 1916;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1884
	ctx.r4.s64 = ctx.r10.s64 + 1884;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-26528
	ctx.r31.s64 = ctx.r10.s64 + -26528;
	// addi r10,r11,10144
	ctx.r10.s64 = ctx.r11.s64 + 10144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305BE90;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,12584
	ctx.r3.s64 = ctx.r8.s64 + 12584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-28288
	ctx.r11.s64 = ctx.r9.s64 + -28288;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-16528
	ctx.r11.s64 = ctx.r10.s64 + -16528;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305BEC0;
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

__attribute__((alias("__imp__sub_8305BED8"))) PPC_WEAK_FUNC(sub_8305BED8);
PPC_FUNC_IMPL(__imp__sub_8305BED8) {
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
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,26984
	ctx.r9.s64 = ctx.r10.s64 + 26984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,1980
	ctx.r5.s64 = ctx.r10.s64 + 1980;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1948
	ctx.r4.s64 = ctx.r10.s64 + 1948;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-25564
	ctx.r31.s64 = ctx.r10.s64 + -25564;
	// addi r10,r11,10448
	ctx.r10.s64 = ctx.r11.s64 + 10448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305BF30;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,12664
	ctx.r3.s64 = ctx.r8.s64 + 12664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-28064
	ctx.r11.s64 = ctx.r9.s64 + -28064;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305BF60;
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

__attribute__((alias("__imp__sub_8305BF78"))) PPC_WEAK_FUNC(sub_8305BF78);
PPC_FUNC_IMPL(__imp__sub_8305BF78) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,2044
	ctx.r5.s64 = ctx.r10.s64 + 2044;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,2008
	ctx.r4.s64 = ctx.r10.s64 + 2008;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-25748
	ctx.r31.s64 = ctx.r10.s64 + -25748;
	// addi r10,r11,10296
	ctx.r10.s64 = ctx.r11.s64 + 10296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305BFD0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,12744
	ctx.r3.s64 = ctx.r8.s64 + 12744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-28176
	ctx.r11.s64 = ctx.r9.s64 + -28176;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-16528
	ctx.r11.s64 = ctx.r10.s64 + -16528;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C000;
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

__attribute__((alias("__imp__sub_8305C018"))) PPC_WEAK_FUNC(sub_8305C018);
PPC_FUNC_IMPL(__imp__sub_8305C018) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,-23208
	ctx.r9.s64 = ctx.r10.s64 + -23208;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-20324
	ctx.r6.s64 = ctx.r10.s64 + -20324;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,1980
	ctx.r5.s64 = ctx.r10.s64 + 1980;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,2076
	ctx.r4.s64 = ctx.r10.s64 + 2076;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-21584
	ctx.r31.s64 = ctx.r10.s64 + -21584;
	// addi r10,r11,19112
	ctx.r10.s64 = ctx.r11.s64 + 19112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C070;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,12824
	ctx.r3.s64 = ctx.r8.s64 + 12824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25680
	ctx.r11.s64 = ctx.r9.s64 + -25680;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23440
	ctx.r11.s64 = ctx.r10.s64 + -23440;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C0A0;
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

__attribute__((alias("__imp__sub_8305C0B8"))) PPC_WEAK_FUNC(sub_8305C0B8);
PPC_FUNC_IMPL(__imp__sub_8305C0B8) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,-23208
	ctx.r9.s64 = ctx.r10.s64 + -23208;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,1980
	ctx.r5.s64 = ctx.r10.s64 + 1980;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,2120
	ctx.r4.s64 = ctx.r10.s64 + 2120;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-23056
	ctx.r31.s64 = ctx.r10.s64 + -23056;
	// addi r10,r11,19184
	ctx.r10.s64 = ctx.r11.s64 + 19184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C110;
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
	// addi r3,r8,12904
	ctx.r3.s64 = ctx.r8.s64 + 12904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25592
	ctx.r11.s64 = ctx.r9.s64 + -25592;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C140;
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

__attribute__((alias("__imp__sub_8305C158"))) PPC_WEAK_FUNC(sub_8305C158);
PPC_FUNC_IMPL(__imp__sub_8305C158) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,-23056
	ctx.r9.s64 = ctx.r10.s64 + -23056;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-20324
	ctx.r6.s64 = ctx.r10.s64 + -20324;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,1980
	ctx.r5.s64 = ctx.r10.s64 + 1980;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,2168
	ctx.r4.s64 = ctx.r10.s64 + 2168;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-19560
	ctx.r31.s64 = ctx.r10.s64 + -19560;
	// addi r10,r11,19256
	ctx.r10.s64 = ctx.r11.s64 + 19256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C1B0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,12984
	ctx.r3.s64 = ctx.r8.s64 + 12984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25504
	ctx.r11.s64 = ctx.r9.s64 + -25504;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C1E0;
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

__attribute__((alias("__imp__sub_8305C1F8"))) PPC_WEAK_FUNC(sub_8305C1F8);
PPC_FUNC_IMPL(__imp__sub_8305C1F8) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,-23056
	ctx.r9.s64 = ctx.r10.s64 + -23056;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-20216
	ctx.r6.s64 = ctx.r10.s64 + -20216;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,1980
	ctx.r5.s64 = ctx.r10.s64 + 1980;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,2216
	ctx.r4.s64 = ctx.r10.s64 + 2216;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-20204
	ctx.r31.s64 = ctx.r10.s64 + -20204;
	// addi r10,r11,19328
	ctx.r10.s64 = ctx.r11.s64 + 19328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C250;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,13064
	ctx.r3.s64 = ctx.r8.s64 + 13064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25416
	ctx.r11.s64 = ctx.r9.s64 + -25416;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C280;
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

__attribute__((alias("__imp__sub_8305C298"))) PPC_WEAK_FUNC(sub_8305C298);
PPC_FUNC_IMPL(__imp__sub_8305C298) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,-23056
	ctx.r9.s64 = ctx.r10.s64 + -23056;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,1980
	ctx.r5.s64 = ctx.r10.s64 + 1980;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,2268
	ctx.r4.s64 = ctx.r10.s64 + 2268;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-21952
	ctx.r31.s64 = ctx.r10.s64 + -21952;
	// addi r10,r11,19040
	ctx.r10.s64 = ctx.r11.s64 + 19040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C2F0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,13144
	ctx.r3.s64 = ctx.r8.s64 + 13144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25768
	ctx.r11.s64 = ctx.r9.s64 + -25768;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C320;
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

__attribute__((alias("__imp__sub_8305C338"))) PPC_WEAK_FUNC(sub_8305C338);
PPC_FUNC_IMPL(__imp__sub_8305C338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,5904
	ctx.r3.s64 = ctx.r11.s64 + 5904;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305C348"))) PPC_WEAK_FUNC(sub_8305C348);
PPC_FUNC_IMPL(__imp__sub_8305C348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,13688
	ctx.r3.s64 = ctx.r11.s64 + 13688;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305C358"))) PPC_WEAK_FUNC(sub_8305C358);
PPC_FUNC_IMPL(__imp__sub_8305C358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,13704
	ctx.r3.s64 = ctx.r11.s64 + 13704;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305C368"))) PPC_WEAK_FUNC(sub_8305C368);
PPC_FUNC_IMPL(__imp__sub_8305C368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,13720
	ctx.r3.s64 = ctx.r11.s64 + 13720;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305C378"))) PPC_WEAK_FUNC(sub_8305C378);
PPC_FUNC_IMPL(__imp__sub_8305C378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,13736
	ctx.r3.s64 = ctx.r11.s64 + 13736;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305C388"))) PPC_WEAK_FUNC(sub_8305C388);
PPC_FUNC_IMPL(__imp__sub_8305C388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,13752
	ctx.r3.s64 = ctx.r11.s64 + 13752;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305C398"))) PPC_WEAK_FUNC(sub_8305C398);
PPC_FUNC_IMPL(__imp__sub_8305C398) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,2320
	ctx.r5.s64 = ctx.r10.s64 + 2320;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,10164
	ctx.r4.s64 = ctx.r10.s64 + 10164;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-27288
	ctx.r31.s64 = ctx.r10.s64 + -27288;
	// addi r10,r11,12656
	ctx.r10.s64 = ctx.r11.s64 + 12656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C3F0;
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
	// addi r3,r8,13224
	ctx.r3.s64 = ctx.r8.s64 + 13224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27120
	ctx.r11.s64 = ctx.r9.s64 + -27120;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C420;
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

__attribute__((alias("__imp__sub_8305C438"))) PPC_WEAK_FUNC(sub_8305C438);
PPC_FUNC_IMPL(__imp__sub_8305C438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,5920
	ctx.r3.s64 = ctx.r11.s64 + 5920;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305C448"))) PPC_WEAK_FUNC(sub_8305C448);
PPC_FUNC_IMPL(__imp__sub_8305C448) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,2380
	ctx.r5.s64 = ctx.r10.s64 + 2380;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,2348
	ctx.r4.s64 = ctx.r10.s64 + 2348;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-26068
	ctx.r31.s64 = ctx.r10.s64 + -26068;
	// addi r10,r11,10600
	ctx.r10.s64 = ctx.r11.s64 + 10600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C4A0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,13304
	ctx.r3.s64 = ctx.r8.s64 + 13304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27952
	ctx.r11.s64 = ctx.r9.s64 + -27952;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-16056
	ctx.r11.s64 = ctx.r10.s64 + -16056;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C4D0;
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

__attribute__((alias("__imp__sub_8305C4E8"))) PPC_WEAK_FUNC(sub_8305C4E8);
PPC_FUNC_IMPL(__imp__sub_8305C4E8) {
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
	// addi r11,r11,-19056
	ctx.r11.s64 = ctx.r11.s64 + -19056;
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

__attribute__((alias("__imp__sub_8305C518"))) PPC_WEAK_FUNC(sub_8305C518);
PPC_FUNC_IMPL(__imp__sub_8305C518) {
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
	// addi r11,r11,-18928
	ctx.r11.s64 = ctx.r11.s64 + -18928;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C548"))) PPC_WEAK_FUNC(sub_8305C548);
PPC_FUNC_IMPL(__imp__sub_8305C548) {
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
	// addi r11,r11,-18912
	ctx.r11.s64 = ctx.r11.s64 + -18912;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C590"))) PPC_WEAK_FUNC(sub_8305C590);
PPC_FUNC_IMPL(__imp__sub_8305C590) {
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
	// addi r11,r11,-19040
	ctx.r11.s64 = ctx.r11.s64 + -19040;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305C5D8"))) PPC_WEAK_FUNC(sub_8305C5D8);
PPC_FUNC_IMPL(__imp__sub_8305C5D8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,14180
	ctx.r5.s64 = ctx.r10.s64 + 14180;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14120
	ctx.r4.s64 = ctx.r10.s64 + 14120;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-16912
	ctx.r31.s64 = ctx.r10.s64 + -16912;
	// addi r10,r11,3136
	ctx.r10.s64 = ctx.r11.s64 + 3136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C630;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,16088
	ctx.r3.s64 = ctx.r8.s64 + 16088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16904
	ctx.r11.s64 = ctx.r9.s64 + -16904;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-28352
	ctx.r11.s64 = ctx.r10.s64 + -28352;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C660;
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

__attribute__((alias("__imp__sub_8305C678"))) PPC_WEAK_FUNC(sub_8305C678);
PPC_FUNC_IMPL(__imp__sub_8305C678) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,-17088
	ctx.r9.s64 = ctx.r10.s64 + -17088;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,14264
	ctx.r5.s64 = ctx.r10.s64 + 14264;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14204
	ctx.r4.s64 = ctx.r10.s64 + 14204;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-17556
	ctx.r31.s64 = ctx.r10.s64 + -17556;
	// addi r10,r11,-4760
	ctx.r10.s64 = ctx.r11.s64 + -4760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C6D0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,14408
	ctx.r3.s64 = ctx.r8.s64 + 14408;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-4688
	ctx.r11.s64 = ctx.r9.s64 + -4688;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-28352
	ctx.r11.s64 = ctx.r10.s64 + -28352;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C700;
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

__attribute__((alias("__imp__sub_8305C718"))) PPC_WEAK_FUNC(sub_8305C718);
PPC_FUNC_IMPL(__imp__sub_8305C718) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,-9776
	ctx.r9.s64 = ctx.r10.s64 + -9776;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,14180
	ctx.r5.s64 = ctx.r10.s64 + 14180;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14288
	ctx.r4.s64 = ctx.r10.s64 + 14288;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-17280
	ctx.r31.s64 = ctx.r10.s64 + -17280;
	// addi r10,r11,-11488
	ctx.r10.s64 = ctx.r11.s64 + -11488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C770;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,14488
	ctx.r3.s64 = ctx.r8.s64 + 14488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16992
	ctx.r11.s64 = ctx.r9.s64 + -16992;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16264
	ctx.r11.s64 = ctx.r10.s64 + 16264;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C7A0;
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

__attribute__((alias("__imp__sub_8305C7B8"))) PPC_WEAK_FUNC(sub_8305C7B8);
PPC_FUNC_IMPL(__imp__sub_8305C7B8) {
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
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,15824
	ctx.r9.s64 = ctx.r10.s64 + 15824;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,14264
	ctx.r5.s64 = ctx.r10.s64 + 14264;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14344
	ctx.r4.s64 = ctx.r10.s64 + 14344;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-17832
	ctx.r31.s64 = ctx.r10.s64 + -17832;
	// addi r10,r11,-4920
	ctx.r10.s64 = ctx.r11.s64 + -4920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C810;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,14568
	ctx.r3.s64 = ctx.r8.s64 + 14568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-4848
	ctx.r11.s64 = ctx.r9.s64 + -4848;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16264
	ctx.r11.s64 = ctx.r10.s64 + 16264;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C840;
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

__attribute__((alias("__imp__sub_8305C858"))) PPC_WEAK_FUNC(sub_8305C858);
PPC_FUNC_IMPL(__imp__sub_8305C858) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,-9688
	ctx.r9.s64 = ctx.r10.s64 + -9688;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,14180
	ctx.r5.s64 = ctx.r10.s64 + 14180;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14400
	ctx.r4.s64 = ctx.r10.s64 + 14400;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-17372
	ctx.r31.s64 = ctx.r10.s64 + -17372;
	// addi r10,r11,3136
	ctx.r10.s64 = ctx.r11.s64 + 3136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C8B0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,14648
	ctx.r3.s64 = ctx.r8.s64 + 14648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16904
	ctx.r11.s64 = ctx.r9.s64 + -16904;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16264
	ctx.r11.s64 = ctx.r10.s64 + 16264;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C8E0;
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

__attribute__((alias("__imp__sub_8305C8F8"))) PPC_WEAK_FUNC(sub_8305C8F8);
PPC_FUNC_IMPL(__imp__sub_8305C8F8) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,-9600
	ctx.r9.s64 = ctx.r10.s64 + -9600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,14264
	ctx.r5.s64 = ctx.r10.s64 + 14264;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14460
	ctx.r4.s64 = ctx.r10.s64 + 14460;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-18752
	ctx.r31.s64 = ctx.r10.s64 + -18752;
	// addi r10,r11,-4760
	ctx.r10.s64 = ctx.r11.s64 + -4760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C950;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,14728
	ctx.r3.s64 = ctx.r8.s64 + 14728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-4688
	ctx.r11.s64 = ctx.r9.s64 + -4688;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16264
	ctx.r11.s64 = ctx.r10.s64 + 16264;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305C980;
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

__attribute__((alias("__imp__sub_8305C998"))) PPC_WEAK_FUNC(sub_8305C998);
PPC_FUNC_IMPL(__imp__sub_8305C998) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,2016
	ctx.r9.s64 = ctx.r10.s64 + 2016;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5280
	ctx.r5.s64 = ctx.r10.s64 + 5280;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14520
	ctx.r4.s64 = ctx.r10.s64 + 14520;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-17924
	ctx.r31.s64 = ctx.r10.s64 + -17924;
	// addi r10,r11,-11320
	ctx.r10.s64 = ctx.r11.s64 + -11320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305C9F0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,16168
	ctx.r3.s64 = ctx.r8.s64 + 16168;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16816
	ctx.r11.s64 = ctx.r9.s64 + -16816;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-16040
	ctx.r11.s64 = ctx.r10.s64 + -16040;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305CA20;
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

__attribute__((alias("__imp__sub_8305CA38"))) PPC_WEAK_FUNC(sub_8305CA38);
PPC_FUNC_IMPL(__imp__sub_8305CA38) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,2104
	ctx.r9.s64 = ctx.r10.s64 + 2104;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-20324
	ctx.r6.s64 = ctx.r10.s64 + -20324;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5380
	ctx.r5.s64 = ctx.r10.s64 + 5380;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14564
	ctx.r4.s64 = ctx.r10.s64 + 14564;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-18016
	ctx.r31.s64 = ctx.r10.s64 + -18016;
	// addi r10,r11,-4600
	ctx.r10.s64 = ctx.r11.s64 + -4600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305CA90;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,14808
	ctx.r3.s64 = ctx.r8.s64 + 14808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-11128
	ctx.r11.s64 = ctx.r9.s64 + -11128;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23440
	ctx.r11.s64 = ctx.r10.s64 + -23440;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305CAC0;
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

__attribute__((alias("__imp__sub_8305CAD8"))) PPC_WEAK_FUNC(sub_8305CAD8);
PPC_FUNC_IMPL(__imp__sub_8305CAD8) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,2104
	ctx.r9.s64 = ctx.r10.s64 + 2104;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5380
	ctx.r5.s64 = ctx.r10.s64 + 5380;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14632
	ctx.r4.s64 = ctx.r10.s64 + 14632;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-18384
	ctx.r31.s64 = ctx.r10.s64 + -18384;
	// addi r10,r11,-3880
	ctx.r10.s64 = ctx.r11.s64 + -3880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305CB30;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,14888
	ctx.r3.s64 = ctx.r8.s64 + 14888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-11040
	ctx.r11.s64 = ctx.r9.s64 + -11040;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305CB60;
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

__attribute__((alias("__imp__sub_8305CB78"))) PPC_WEAK_FUNC(sub_8305CB78);
PPC_FUNC_IMPL(__imp__sub_8305CB78) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,2200
	ctx.r9.s64 = ctx.r10.s64 + 2200;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-20324
	ctx.r6.s64 = ctx.r10.s64 + -20324;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5380
	ctx.r5.s64 = ctx.r10.s64 + 5380;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14700
	ctx.r4.s64 = ctx.r10.s64 + 14700;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-17096
	ctx.r31.s64 = ctx.r10.s64 + -17096;
	// addi r10,r11,-3160
	ctx.r10.s64 = ctx.r11.s64 + -3160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305CBD0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,14968
	ctx.r3.s64 = ctx.r8.s64 + 14968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10952
	ctx.r11.s64 = ctx.r9.s64 + -10952;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305CC00;
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

__attribute__((alias("__imp__sub_8305CC18"))) PPC_WEAK_FUNC(sub_8305CC18);
PPC_FUNC_IMPL(__imp__sub_8305CC18) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,2200
	ctx.r9.s64 = ctx.r10.s64 + 2200;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-20216
	ctx.r6.s64 = ctx.r10.s64 + -20216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5380
	ctx.r5.s64 = ctx.r10.s64 + 5380;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14768
	ctx.r4.s64 = ctx.r10.s64 + 14768;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-18292
	ctx.r31.s64 = ctx.r10.s64 + -18292;
	// addi r10,r11,-2440
	ctx.r10.s64 = ctx.r11.s64 + -2440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305CC70;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,15048
	ctx.r3.s64 = ctx.r8.s64 + 15048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10864
	ctx.r11.s64 = ctx.r9.s64 + -10864;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305CCA0;
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

__attribute__((alias("__imp__sub_8305CCB8"))) PPC_WEAK_FUNC(sub_8305CCB8);
PPC_FUNC_IMPL(__imp__sub_8305CCB8) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,2200
	ctx.r9.s64 = ctx.r10.s64 + 2200;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5380
	ctx.r5.s64 = ctx.r10.s64 + 5380;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14840
	ctx.r4.s64 = ctx.r10.s64 + 14840;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-17188
	ctx.r31.s64 = ctx.r10.s64 + -17188;
	// addi r10,r11,-1720
	ctx.r10.s64 = ctx.r11.s64 + -1720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305CD10;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,15128
	ctx.r3.s64 = ctx.r8.s64 + 15128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10776
	ctx.r11.s64 = ctx.r9.s64 + -10776;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305CD40;
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

__attribute__((alias("__imp__sub_8305CD58"))) PPC_WEAK_FUNC(sub_8305CD58);
PPC_FUNC_IMPL(__imp__sub_8305CD58) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,4200
	ctx.r9.s64 = ctx.r10.s64 + 4200;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-20324
	ctx.r6.s64 = ctx.r10.s64 + -20324;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5800
	ctx.r5.s64 = ctx.r10.s64 + 5800;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14912
	ctx.r4.s64 = ctx.r10.s64 + 14912;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-17464
	ctx.r31.s64 = ctx.r10.s64 + -17464;
	// addi r10,r11,2296
	ctx.r10.s64 = ctx.r11.s64 + 2296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305CDB0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,15208
	ctx.r3.s64 = ctx.r8.s64 + 15208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-1000
	ctx.r11.s64 = ctx.r9.s64 + -1000;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305CDE0;
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

__attribute__((alias("__imp__sub_8305CDF8"))) PPC_WEAK_FUNC(sub_8305CDF8);
PPC_FUNC_IMPL(__imp__sub_8305CDF8) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,4296
	ctx.r9.s64 = ctx.r10.s64 + 4296;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-20324
	ctx.r6.s64 = ctx.r10.s64 + -20324;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5800
	ctx.r5.s64 = ctx.r10.s64 + 5800;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,14984
	ctx.r4.s64 = ctx.r10.s64 + 14984;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-18660
	ctx.r31.s64 = ctx.r10.s64 + -18660;
	// addi r10,r11,2424
	ctx.r10.s64 = ctx.r11.s64 + 2424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305CE50;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,15288
	ctx.r3.s64 = ctx.r8.s64 + 15288;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-912
	ctx.r11.s64 = ctx.r9.s64 + -912;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305CE80;
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

__attribute__((alias("__imp__sub_8305CE98"))) PPC_WEAK_FUNC(sub_8305CE98);
PPC_FUNC_IMPL(__imp__sub_8305CE98) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,4392
	ctx.r9.s64 = ctx.r10.s64 + 4392;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-20324
	ctx.r6.s64 = ctx.r10.s64 + -20324;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5800
	ctx.r5.s64 = ctx.r10.s64 + 5800;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,15064
	ctx.r4.s64 = ctx.r10.s64 + 15064;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-18568
	ctx.r31.s64 = ctx.r10.s64 + -18568;
	// addi r10,r11,2552
	ctx.r10.s64 = ctx.r11.s64 + 2552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305CEF0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,15368
	ctx.r3.s64 = ctx.r8.s64 + 15368;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-824
	ctx.r11.s64 = ctx.r9.s64 + -824;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305CF20;
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

__attribute__((alias("__imp__sub_8305CF38"))) PPC_WEAK_FUNC(sub_8305CF38);
PPC_FUNC_IMPL(__imp__sub_8305CF38) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,4200
	ctx.r9.s64 = ctx.r10.s64 + 4200;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-20216
	ctx.r6.s64 = ctx.r10.s64 + -20216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5800
	ctx.r5.s64 = ctx.r10.s64 + 5800;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,15136
	ctx.r4.s64 = ctx.r10.s64 + 15136;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-18200
	ctx.r31.s64 = ctx.r10.s64 + -18200;
	// addi r10,r11,2680
	ctx.r10.s64 = ctx.r11.s64 + 2680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305CF90;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,15448
	ctx.r3.s64 = ctx.r8.s64 + 15448;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-736
	ctx.r11.s64 = ctx.r9.s64 + -736;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305CFC0;
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

__attribute__((alias("__imp__sub_8305CFD8"))) PPC_WEAK_FUNC(sub_8305CFD8);
PPC_FUNC_IMPL(__imp__sub_8305CFD8) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,4296
	ctx.r9.s64 = ctx.r10.s64 + 4296;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-20216
	ctx.r6.s64 = ctx.r10.s64 + -20216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5800
	ctx.r5.s64 = ctx.r10.s64 + 5800;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,15216
	ctx.r4.s64 = ctx.r10.s64 + 15216;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-18108
	ctx.r31.s64 = ctx.r10.s64 + -18108;
	// addi r10,r11,2808
	ctx.r10.s64 = ctx.r11.s64 + 2808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305D030;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,15528
	ctx.r3.s64 = ctx.r8.s64 + 15528;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-648
	ctx.r11.s64 = ctx.r9.s64 + -648;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305D060;
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

__attribute__((alias("__imp__sub_8305D078"))) PPC_WEAK_FUNC(sub_8305D078);
PPC_FUNC_IMPL(__imp__sub_8305D078) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,4392
	ctx.r9.s64 = ctx.r10.s64 + 4392;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-20216
	ctx.r6.s64 = ctx.r10.s64 + -20216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5800
	ctx.r5.s64 = ctx.r10.s64 + 5800;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,15296
	ctx.r4.s64 = ctx.r10.s64 + 15296;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-17740
	ctx.r31.s64 = ctx.r10.s64 + -17740;
	// addi r10,r11,2936
	ctx.r10.s64 = ctx.r11.s64 + 2936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305D0D0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,15608
	ctx.r3.s64 = ctx.r8.s64 + 15608;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-560
	ctx.r11.s64 = ctx.r9.s64 + -560;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305D100;
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

__attribute__((alias("__imp__sub_8305D118"))) PPC_WEAK_FUNC(sub_8305D118);
PPC_FUNC_IMPL(__imp__sub_8305D118) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,4488
	ctx.r9.s64 = ctx.r10.s64 + 4488;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5800
	ctx.r5.s64 = ctx.r10.s64 + 5800;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,15376
	ctx.r4.s64 = ctx.r10.s64 + 15376;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-17004
	ctx.r31.s64 = ctx.r10.s64 + -17004;
	// addi r10,r11,3064
	ctx.r10.s64 = ctx.r11.s64 + 3064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305D170;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,15688
	ctx.r3.s64 = ctx.r8.s64 + 15688;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-472
	ctx.r11.s64 = ctx.r9.s64 + -472;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305D1A0;
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

__attribute__((alias("__imp__sub_8305D1B8"))) PPC_WEAK_FUNC(sub_8305D1B8);
PPC_FUNC_IMPL(__imp__sub_8305D1B8) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,4584
	ctx.r9.s64 = ctx.r10.s64 + 4584;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5800
	ctx.r5.s64 = ctx.r10.s64 + 5800;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,15456
	ctx.r4.s64 = ctx.r10.s64 + 15456;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-17648
	ctx.r31.s64 = ctx.r10.s64 + -17648;
	// addi r10,r11,3192
	ctx.r10.s64 = ctx.r11.s64 + 3192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305D210;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,15768
	ctx.r3.s64 = ctx.r8.s64 + 15768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-384
	ctx.r11.s64 = ctx.r9.s64 + -384;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305D240;
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

__attribute__((alias("__imp__sub_8305D258"))) PPC_WEAK_FUNC(sub_8305D258);
PPC_FUNC_IMPL(__imp__sub_8305D258) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,4680
	ctx.r9.s64 = ctx.r10.s64 + 4680;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,5800
	ctx.r5.s64 = ctx.r10.s64 + 5800;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,15536
	ctx.r4.s64 = ctx.r10.s64 + 15536;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-18476
	ctx.r31.s64 = ctx.r10.s64 + -18476;
	// addi r10,r11,3320
	ctx.r10.s64 = ctx.r11.s64 + 3320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305D2B0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,15848
	ctx.r3.s64 = ctx.r8.s64 + 15848;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-296
	ctx.r11.s64 = ctx.r9.s64 + -296;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305D2E0;
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

__attribute__((alias("__imp__sub_8305D2F8"))) PPC_WEAK_FUNC(sub_8305D2F8);
PPC_FUNC_IMPL(__imp__sub_8305D2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,16248
	ctx.r3.s64 = ctx.r11.s64 + 16248;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305D308"))) PPC_WEAK_FUNC(sub_8305D308);
PPC_FUNC_IMPL(__imp__sub_8305D308) {
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
	// addi r31,r11,-6908
	ctx.r31.s64 = ctx.r11.s64 + -6908;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// addi r4,r11,-3984
	ctx.r4.s64 = ctx.r11.s64 + -3984;
	// bl 0x82304fb8
	ctx.lr = 0x8305D330;
	sub_82304FB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31992
	ctx.r10.s64 = -2096627712;
	// addi r3,r10,14376
	ctx.r3.s64 = ctx.r10.s64 + 14376;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305D354;
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

__attribute__((alias("__imp__sub_8305D368"))) PPC_WEAK_FUNC(sub_8305D368);
PPC_FUNC_IMPL(__imp__sub_8305D368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r5,r9,15636
	ctx.r5.s64 = ctx.r9.s64 + 15636;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,27376
	ctx.r6.s64 = ctx.r11.s64 + 27376;
	// li r8,52
	ctx.r8.s64 = 52;
	// li r7,440
	ctx.r7.s64 = 440;
	// addi r4,r9,15612
	ctx.r4.s64 = ctx.r9.s64 + 15612;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-19244
	ctx.r3.s64 = ctx.r9.s64 + -19244;
	// addi r10,r10,-29328
	ctx.r10.s64 = ctx.r10.s64 + -29328;
	// addi r9,r11,1728
	ctx.r9.s64 = ctx.r11.s64 + 1728;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x8305D3C8;
	sub_828AAAC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D3D8"))) PPC_WEAK_FUNC(sub_8305D3D8);
PPC_FUNC_IMPL(__imp__sub_8305D3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r5,r9,15636
	ctx.r5.s64 = ctx.r9.s64 + 15636;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,984
	ctx.r6.s64 = ctx.r11.s64 + 984;
	// li r8,52
	ctx.r8.s64 = 52;
	// li r7,440
	ctx.r7.s64 = 440;
	// addi r4,r9,15660
	ctx.r4.s64 = ctx.r9.s64 + 15660;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-19196
	ctx.r3.s64 = ctx.r9.s64 + -19196;
	// addi r10,r10,-14208
	ctx.r10.s64 = ctx.r10.s64 + -14208;
	// addi r9,r11,1848
	ctx.r9.s64 = ctx.r11.s64 + 1848;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x8305D438;
	sub_828AAAC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D448"))) PPC_WEAK_FUNC(sub_8305D448);
PPC_FUNC_IMPL(__imp__sub_8305D448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r5,r9,15636
	ctx.r5.s64 = ctx.r9.s64 + 15636;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,1072
	ctx.r6.s64 = ctx.r11.s64 + 1072;
	// li r7,440
	ctx.r7.s64 = 440;
	// addi r4,r9,15688
	ctx.r4.s64 = ctx.r9.s64 + 15688;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-19024
	ctx.r3.s64 = ctx.r9.s64 + -19024;
	// addi r10,r10,-29328
	ctx.r10.s64 = ctx.r10.s64 + -29328;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,-4320
	ctx.r9.s64 = ctx.r11.s64 + -4320;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x8305D4A4;
	sub_828AAAC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D4B8"))) PPC_WEAK_FUNC(sub_8305D4B8);
PPC_FUNC_IMPL(__imp__sub_8305D4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r5,r9,15636
	ctx.r5.s64 = ctx.r9.s64 + 15636;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,1160
	ctx.r6.s64 = ctx.r11.s64 + 1160;
	// li r7,440
	ctx.r7.s64 = 440;
	// addi r4,r9,15716
	ctx.r4.s64 = ctx.r9.s64 + 15716;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-18976
	ctx.r3.s64 = ctx.r9.s64 + -18976;
	// addi r10,r10,-14104
	ctx.r10.s64 = ctx.r10.s64 + -14104;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,-4200
	ctx.r9.s64 = ctx.r11.s64 + -4200;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x8305D514;
	sub_828AAAC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D528"))) PPC_WEAK_FUNC(sub_8305D528);
PPC_FUNC_IMPL(__imp__sub_8305D528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r5,r9,15636
	ctx.r5.s64 = ctx.r9.s64 + 15636;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,1312
	ctx.r6.s64 = ctx.r11.s64 + 1312;
	// li r7,440
	ctx.r7.s64 = 440;
	// addi r4,r9,15748
	ctx.r4.s64 = ctx.r9.s64 + 15748;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-19292
	ctx.r3.s64 = ctx.r9.s64 + -19292;
	// addi r10,r10,-29328
	ctx.r10.s64 = ctx.r10.s64 + -29328;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,-3544
	ctx.r9.s64 = ctx.r11.s64 + -3544;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x8305D584;
	sub_828AAAC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D598"))) PPC_WEAK_FUNC(sub_8305D598);
PPC_FUNC_IMPL(__imp__sub_8305D598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r5,r9,15636
	ctx.r5.s64 = ctx.r9.s64 + 15636;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,1464
	ctx.r6.s64 = ctx.r11.s64 + 1464;
	// li r7,440
	ctx.r7.s64 = 440;
	// addi r4,r9,15780
	ctx.r4.s64 = ctx.r9.s64 + 15780;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-18896
	ctx.r3.s64 = ctx.r9.s64 + -18896;
	// addi r10,r10,-14000
	ctx.r10.s64 = ctx.r10.s64 + -14000;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,-3424
	ctx.r9.s64 = ctx.r11.s64 + -3424;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x8305D5F4;
	sub_828AAAC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D608"))) PPC_WEAK_FUNC(sub_8305D608);
PPC_FUNC_IMPL(__imp__sub_8305D608) {
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
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,1668
	ctx.r6.s64 = ctx.r10.s64 + 1668;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,15844
	ctx.r5.s64 = ctx.r10.s64 + 15844;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,15816
	ctx.r4.s64 = ctx.r10.s64 + 15816;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-18848
	ctx.r31.s64 = ctx.r10.s64 + -18848;
	// addi r10,r11,-12616
	ctx.r10.s64 = ctx.r11.s64 + -12616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305D660;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,15928
	ctx.r3.s64 = ctx.r8.s64 + 15928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29520
	ctx.r11.s64 = ctx.r9.s64 + 29520;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-28504
	ctx.r11.s64 = ctx.r10.s64 + -28504;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305D690;
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

__attribute__((alias("__imp__sub_8305D6A8"))) PPC_WEAK_FUNC(sub_8305D6A8);
PPC_FUNC_IMPL(__imp__sub_8305D6A8) {
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
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,1712
	ctx.r6.s64 = ctx.r10.s64 + 1712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,15844
	ctx.r5.s64 = ctx.r10.s64 + 15844;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,15868
	ctx.r4.s64 = ctx.r10.s64 + 15868;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-19148
	ctx.r31.s64 = ctx.r10.s64 + -19148;
	// addi r10,r11,-5080
	ctx.r10.s64 = ctx.r11.s64 + -5080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305D700;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,16008
	ctx.r3.s64 = ctx.r8.s64 + 16008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-5008
	ctx.r11.s64 = ctx.r9.s64 + -5008;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-28504
	ctx.r11.s64 = ctx.r10.s64 + -28504;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305D730;
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

__attribute__((alias("__imp__sub_8305D748"))) PPC_WEAK_FUNC(sub_8305D748);
PPC_FUNC_IMPL(__imp__sub_8305D748) {
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
	// addi r11,r11,-14560
	ctx.r11.s64 = ctx.r11.s64 + -14560;
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

__attribute__((alias("__imp__sub_8305D778"))) PPC_WEAK_FUNC(sub_8305D778);
PPC_FUNC_IMPL(__imp__sub_8305D778) {
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
	// addi r11,r11,-14368
	ctx.r11.s64 = ctx.r11.s64 + -14368;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D7A8"))) PPC_WEAK_FUNC(sub_8305D7A8);
PPC_FUNC_IMPL(__imp__sub_8305D7A8) {
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
	// addi r11,r11,-14352
	ctx.r11.s64 = ctx.r11.s64 + -14352;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D7F0"))) PPC_WEAK_FUNC(sub_8305D7F0);
PPC_FUNC_IMPL(__imp__sub_8305D7F0) {
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
	// addi r11,r11,-14544
	ctx.r11.s64 = ctx.r11.s64 + -14544;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305D838"))) PPC_WEAK_FUNC(sub_8305D838);
PPC_FUNC_IMPL(__imp__sub_8305D838) {
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
	// addi r31,r11,-5376
	ctx.r31.s64 = ctx.r11.s64 + -5376;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x828a0dd0
	ctx.lr = 0x8305D864;
	sub_828A0DD0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// addi r11,r11,31288
	ctx.r11.s64 = ctx.r11.s64 + 31288;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824c56f8
	ctx.lr = 0x8305D878;
	sub_824C56F8(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,16544
	ctx.r3.s64 = ctx.r11.s64 + 16544;
	// bl 0x82d5cd68
	ctx.lr = 0x8305D884;
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

__attribute__((alias("__imp__sub_8305D898"))) PPC_WEAK_FUNC(sub_8305D898);
PPC_FUNC_IMPL(__imp__sub_8305D898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lis r9,-31992
	ctx.r9.s64 = -2096627712;
	// addi r11,r11,-4992
	ctx.r11.s64 = ctx.r11.s64 + -4992;
	// addi r3,r9,17312
	ctx.r3.s64 = ctx.r9.s64 + 17312;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305D8B8"))) PPC_WEAK_FUNC(sub_8305D8B8);
PPC_FUNC_IMPL(__imp__sub_8305D8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// lis r9,-31992
	ctx.r9.s64 = -2096627712;
	// addi r11,r11,-16048
	ctx.r11.s64 = ctx.r11.s64 + -16048;
	// addi r3,r9,16368
	ctx.r3.s64 = ctx.r9.s64 + 16368;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// clrlwi r10,r10,9
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFF;
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305D8E0"))) PPC_WEAK_FUNC(sub_8305D8E0);
PPC_FUNC_IMPL(__imp__sub_8305D8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r11,r11,-15040
	ctx.r11.s64 = ctx.r11.s64 + -15040;
	// lis r9,-31992
	ctx.r9.s64 = -2096627712;
	// addi r10,r10,-15392
	ctx.r10.s64 = ctx.r10.s64 + -15392;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r3,r9,16376
	ctx.r3.s64 = ctx.r9.s64 + 16376;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v0,r11,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// stvx128 v0,r10,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305D930"))) PPC_WEAK_FUNC(sub_8305D930);
PPC_FUNC_IMPL(__imp__sub_8305D930) {
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
	// addi r31,r11,-4968
	ctx.r31.s64 = ctx.r11.s64 + -4968;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x828a0dd0
	ctx.lr = 0x8305D95C;
	sub_828A0DD0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// addi r11,r11,31288
	ctx.r11.s64 = ctx.r11.s64 + 31288;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824c56f8
	ctx.lr = 0x8305D970;
	sub_824C56F8(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,16648
	ctx.r3.s64 = ctx.r11.s64 + 16648;
	// bl 0x82d5cd68
	ctx.lr = 0x8305D97C;
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

__attribute__((alias("__imp__sub_8305D990"))) PPC_WEAK_FUNC(sub_8305D990);
PPC_FUNC_IMPL(__imp__sub_8305D990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lis r9,-31992
	ctx.r9.s64 = -2096627712;
	// addi r11,r11,-4584
	ctx.r11.s64 = ctx.r11.s64 + -4584;
	// addi r3,r9,17328
	ctx.r3.s64 = ctx.r9.s64 + 17328;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305D9B0"))) PPC_WEAK_FUNC(sub_8305D9B0);
PPC_FUNC_IMPL(__imp__sub_8305D9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// lis r9,-31992
	ctx.r9.s64 = -2096627712;
	// addi r11,r11,-15776
	ctx.r11.s64 = ctx.r11.s64 + -15776;
	// addi r3,r9,16384
	ctx.r3.s64 = ctx.r9.s64 + 16384;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// clrlwi r10,r10,9
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFF;
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305D9D8"))) PPC_WEAK_FUNC(sub_8305D9D8);
PPC_FUNC_IMPL(__imp__sub_8305D9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r11,r11,-15040
	ctx.r11.s64 = ctx.r11.s64 + -15040;
	// lis r9,-31992
	ctx.r9.s64 = -2096627712;
	// addi r10,r10,-14704
	ctx.r10.s64 = ctx.r10.s64 + -14704;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r3,r9,16392
	ctx.r3.s64 = ctx.r9.s64 + 16392;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v0,r11,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// stvx128 v0,r10,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305DA28"))) PPC_WEAK_FUNC(sub_8305DA28);
PPC_FUNC_IMPL(__imp__sub_8305DA28) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,26240
	ctx.r5.s64 = ctx.r10.s64 + 26240;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,26204
	ctx.r4.s64 = ctx.r10.s64 + 26204;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-15236
	ctx.r31.s64 = ctx.r10.s64 + -15236;
	// addi r10,r11,-22880
	ctx.r10.s64 = ctx.r11.s64 + -22880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305DA80;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,26576
	ctx.r3.s64 = ctx.r8.s64 + 26576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6344
	ctx.r11.s64 = ctx.r9.s64 + 6344;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-4880
	ctx.r11.s64 = ctx.r10.s64 + -4880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305DAB0;
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

__attribute__((alias("__imp__sub_8305DAC8"))) PPC_WEAK_FUNC(sub_8305DAC8);
PPC_FUNC_IMPL(__imp__sub_8305DAC8) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26312
	ctx.r5.s64 = ctx.r10.s64 + 26312;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,26276
	ctx.r4.s64 = ctx.r10.s64 + 26276;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-14512
	ctx.r31.s64 = ctx.r10.s64 + -14512;
	// addi r10,r11,-20544
	ctx.r10.s64 = ctx.r11.s64 + -20544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305DB20;
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
	// addi r3,r8,17376
	ctx.r3.s64 = ctx.r8.s64 + 17376;
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
	ctx.lr = 0x8305DB50;
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

__attribute__((alias("__imp__sub_8305DB68"))) PPC_WEAK_FUNC(sub_8305DB68);
PPC_FUNC_IMPL(__imp__sub_8305DB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r3,r11,-14612
	ctx.r3.s64 = ctx.r11.s64 + -14612;
	// bl 0x8254d820
	ctx.lr = 0x8305DB80;
	sub_8254D820(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,16400
	ctx.r3.s64 = ctx.r11.s64 + 16400;
	// bl 0x82d5cd68
	ctx.lr = 0x8305DB8C;
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

__attribute__((alias("__imp__sub_8305DBA0"))) PPC_WEAK_FUNC(sub_8305DBA0);
PPC_FUNC_IMPL(__imp__sub_8305DBA0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26464
	ctx.r6.s64 = ctx.r10.s64 + 26464;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,26352
	ctx.r4.s64 = ctx.r10.s64 + 26352;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-10340
	ctx.r31.s64 = ctx.r10.s64 + -10340;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305DBF8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,26656
	ctx.r3.s64 = ctx.r8.s64 + 26656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2576
	ctx.r11.s64 = ctx.r10.s64 + -2576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305DC28;
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

__attribute__((alias("__imp__sub_8305DC40"))) PPC_WEAK_FUNC(sub_8305DC40);
PPC_FUNC_IMPL(__imp__sub_8305DC40) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26568
	ctx.r6.s64 = ctx.r10.s64 + 26568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,26480
	ctx.r4.s64 = ctx.r10.s64 + 26480;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-12916
	ctx.r31.s64 = ctx.r10.s64 + -12916;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305DC98;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,17456
	ctx.r3.s64 = ctx.r8.s64 + 17456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2728
	ctx.r11.s64 = ctx.r10.s64 + -2728;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305DCC8;
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

__attribute__((alias("__imp__sub_8305DCE0"))) PPC_WEAK_FUNC(sub_8305DCE0);
PPC_FUNC_IMPL(__imp__sub_8305DCE0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26680
	ctx.r6.s64 = ctx.r10.s64 + 26680;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,26584
	ctx.r4.s64 = ctx.r10.s64 + 26584;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-13192
	ctx.r31.s64 = ctx.r10.s64 + -13192;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305DD38;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,17536
	ctx.r3.s64 = ctx.r8.s64 + 17536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2728
	ctx.r11.s64 = ctx.r10.s64 + -2728;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305DD68;
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

__attribute__((alias("__imp__sub_8305DD80"))) PPC_WEAK_FUNC(sub_8305DD80);
PPC_FUNC_IMPL(__imp__sub_8305DD80) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26800
	ctx.r6.s64 = ctx.r10.s64 + 26800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,26704
	ctx.r4.s64 = ctx.r10.s64 + 26704;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-4728
	ctx.r31.s64 = ctx.r10.s64 + -4728;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305DDD8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,17616
	ctx.r3.s64 = ctx.r8.s64 + 17616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2728
	ctx.r11.s64 = ctx.r10.s64 + -2728;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305DE08;
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

__attribute__((alias("__imp__sub_8305DE20"))) PPC_WEAK_FUNC(sub_8305DE20);
PPC_FUNC_IMPL(__imp__sub_8305DE20) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26912
	ctx.r6.s64 = ctx.r10.s64 + 26912;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,26824
	ctx.r4.s64 = ctx.r10.s64 + 26824;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-9052
	ctx.r31.s64 = ctx.r10.s64 + -9052;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305DE78;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,17696
	ctx.r3.s64 = ctx.r8.s64 + 17696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2728
	ctx.r11.s64 = ctx.r10.s64 + -2728;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305DEA8;
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

__attribute__((alias("__imp__sub_8305DEC0"))) PPC_WEAK_FUNC(sub_8305DEC0);
PPC_FUNC_IMPL(__imp__sub_8305DEC0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12336
	ctx.r9.s64 = ctx.r10.s64 + 12336;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,27004
	ctx.r5.s64 = ctx.r10.s64 + 27004;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,26936
	ctx.r4.s64 = ctx.r10.s64 + 26936;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-12640
	ctx.r31.s64 = ctx.r10.s64 + -12640;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305DF18;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,17776
	ctx.r3.s64 = ctx.r8.s64 + 17776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12944
	ctx.r11.s64 = ctx.r9.s64 + 12944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2576
	ctx.r11.s64 = ctx.r10.s64 + -2576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305DF48;
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

__attribute__((alias("__imp__sub_8305DF60"))) PPC_WEAK_FUNC(sub_8305DF60);
PPC_FUNC_IMPL(__imp__sub_8305DF60) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,27032
	ctx.r4.s64 = ctx.r10.s64 + 27032;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-7396
	ctx.r31.s64 = ctx.r10.s64 + -7396;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305DFB8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,17856
	ctx.r3.s64 = ctx.r8.s64 + 17856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2272
	ctx.r11.s64 = ctx.r10.s64 + -2272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305DFE8;
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

__attribute__((alias("__imp__sub_8305E000"))) PPC_WEAK_FUNC(sub_8305E000);
PPC_FUNC_IMPL(__imp__sub_8305E000) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,27120
	ctx.r4.s64 = ctx.r10.s64 + 27120;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-7304
	ctx.r31.s64 = ctx.r10.s64 + -7304;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E058;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,17936
	ctx.r3.s64 = ctx.r8.s64 + 17936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2448
	ctx.r11.s64 = ctx.r10.s64 + -2448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E088;
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

__attribute__((alias("__imp__sub_8305E0A0"))) PPC_WEAK_FUNC(sub_8305E0A0);
PPC_FUNC_IMPL(__imp__sub_8305E0A0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,27216
	ctx.r4.s64 = ctx.r10.s64 + 27216;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-4452
	ctx.r31.s64 = ctx.r10.s64 + -4452;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E0F8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,18016
	ctx.r3.s64 = ctx.r8.s64 + 18016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2448
	ctx.r11.s64 = ctx.r10.s64 + -2448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E128;
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

__attribute__((alias("__imp__sub_8305E140"))) PPC_WEAK_FUNC(sub_8305E140);
PPC_FUNC_IMPL(__imp__sub_8305E140) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,27320
	ctx.r4.s64 = ctx.r10.s64 + 27320;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-8224
	ctx.r31.s64 = ctx.r10.s64 + -8224;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E198;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,18096
	ctx.r3.s64 = ctx.r8.s64 + 18096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2448
	ctx.r11.s64 = ctx.r10.s64 + -2448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E1C8;
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

__attribute__((alias("__imp__sub_8305E1E0"))) PPC_WEAK_FUNC(sub_8305E1E0);
PPC_FUNC_IMPL(__imp__sub_8305E1E0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,27424
	ctx.r4.s64 = ctx.r10.s64 + 27424;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-10432
	ctx.r31.s64 = ctx.r10.s64 + -10432;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E238;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,18176
	ctx.r3.s64 = ctx.r8.s64 + 18176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2448
	ctx.r11.s64 = ctx.r10.s64 + -2448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E268;
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

__attribute__((alias("__imp__sub_8305E280"))) PPC_WEAK_FUNC(sub_8305E280);
PPC_FUNC_IMPL(__imp__sub_8305E280) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,32488
	ctx.r9.s64 = ctx.r10.s64 + 32488;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,27520
	ctx.r4.s64 = ctx.r10.s64 + 27520;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-7672
	ctx.r31.s64 = ctx.r10.s64 + -7672;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E2D8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,18256
	ctx.r3.s64 = ctx.r8.s64 + 18256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12944
	ctx.r11.s64 = ctx.r9.s64 + 12944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2272
	ctx.r11.s64 = ctx.r10.s64 + -2272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E308;
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

__attribute__((alias("__imp__sub_8305E320"))) PPC_WEAK_FUNC(sub_8305E320);
PPC_FUNC_IMPL(__imp__sub_8305E320) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,27592
	ctx.r4.s64 = ctx.r10.s64 + 27592;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-4268
	ctx.r31.s64 = ctx.r10.s64 + -4268;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E378;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,18336
	ctx.r3.s64 = ctx.r8.s64 + 18336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2272
	ctx.r11.s64 = ctx.r10.s64 + -2272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E3A8;
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

__attribute__((alias("__imp__sub_8305E3C0"))) PPC_WEAK_FUNC(sub_8305E3C0);
PPC_FUNC_IMPL(__imp__sub_8305E3C0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,27680
	ctx.r4.s64 = ctx.r10.s64 + 27680;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-11444
	ctx.r31.s64 = ctx.r10.s64 + -11444;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E418;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,18416
	ctx.r3.s64 = ctx.r8.s64 + 18416;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2448
	ctx.r11.s64 = ctx.r10.s64 + -2448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E448;
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

__attribute__((alias("__imp__sub_8305E460"))) PPC_WEAK_FUNC(sub_8305E460);
PPC_FUNC_IMPL(__imp__sub_8305E460) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,27776
	ctx.r4.s64 = ctx.r10.s64 + 27776;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-6660
	ctx.r31.s64 = ctx.r10.s64 + -6660;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E4B8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,18496
	ctx.r3.s64 = ctx.r8.s64 + 18496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2448
	ctx.r11.s64 = ctx.r10.s64 + -2448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E4E8;
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

__attribute__((alias("__imp__sub_8305E500"))) PPC_WEAK_FUNC(sub_8305E500);
PPC_FUNC_IMPL(__imp__sub_8305E500) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,27880
	ctx.r4.s64 = ctx.r10.s64 + 27880;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-8500
	ctx.r31.s64 = ctx.r10.s64 + -8500;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E558;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,18576
	ctx.r3.s64 = ctx.r8.s64 + 18576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2448
	ctx.r11.s64 = ctx.r10.s64 + -2448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E588;
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

__attribute__((alias("__imp__sub_8305E5A0"))) PPC_WEAK_FUNC(sub_8305E5A0);
PPC_FUNC_IMPL(__imp__sub_8305E5A0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,27984
	ctx.r4.s64 = ctx.r10.s64 + 27984;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-5556
	ctx.r31.s64 = ctx.r10.s64 + -5556;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E5F8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,18656
	ctx.r3.s64 = ctx.r8.s64 + 18656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2448
	ctx.r11.s64 = ctx.r10.s64 + -2448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E628;
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

__attribute__((alias("__imp__sub_8305E640"))) PPC_WEAK_FUNC(sub_8305E640);
PPC_FUNC_IMPL(__imp__sub_8305E640) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,32760
	ctx.r9.s64 = ctx.r10.s64 + 32760;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,28080
	ctx.r4.s64 = ctx.r10.s64 + 28080;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-13008
	ctx.r31.s64 = ctx.r10.s64 + -13008;
	// addi r10,r11,13032
	ctx.r10.s64 = ctx.r11.s64 + 13032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E698;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,18736
	ctx.r3.s64 = ctx.r8.s64 + 18736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12560
	ctx.r11.s64 = ctx.r9.s64 + 12560;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2272
	ctx.r11.s64 = ctx.r10.s64 + -2272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E6C8;
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

__attribute__((alias("__imp__sub_8305E6E0"))) PPC_WEAK_FUNC(sub_8305E6E0);
PPC_FUNC_IMPL(__imp__sub_8305E6E0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26464
	ctx.r6.s64 = ctx.r10.s64 + 26464;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,28152
	ctx.r4.s64 = ctx.r10.s64 + 28152;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-6568
	ctx.r31.s64 = ctx.r10.s64 + -6568;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E738;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,18816
	ctx.r3.s64 = ctx.r8.s64 + 18816;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2120
	ctx.r11.s64 = ctx.r10.s64 + -2120;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E768;
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

__attribute__((alias("__imp__sub_8305E780"))) PPC_WEAK_FUNC(sub_8305E780);
PPC_FUNC_IMPL(__imp__sub_8305E780) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26568
	ctx.r6.s64 = ctx.r10.s64 + 26568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,28240
	ctx.r4.s64 = ctx.r10.s64 + 28240;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-6752
	ctx.r31.s64 = ctx.r10.s64 + -6752;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E7D8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,18896
	ctx.r3.s64 = ctx.r8.s64 + 18896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1984
	ctx.r11.s64 = ctx.r10.s64 + -1984;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E808;
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

__attribute__((alias("__imp__sub_8305E820"))) PPC_WEAK_FUNC(sub_8305E820);
PPC_FUNC_IMPL(__imp__sub_8305E820) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26680
	ctx.r6.s64 = ctx.r10.s64 + 26680;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,28336
	ctx.r4.s64 = ctx.r10.s64 + 28336;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-11260
	ctx.r31.s64 = ctx.r10.s64 + -11260;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E878;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,18976
	ctx.r3.s64 = ctx.r8.s64 + 18976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1984
	ctx.r11.s64 = ctx.r10.s64 + -1984;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E8A8;
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

__attribute__((alias("__imp__sub_8305E8C0"))) PPC_WEAK_FUNC(sub_8305E8C0);
PPC_FUNC_IMPL(__imp__sub_8305E8C0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26800
	ctx.r6.s64 = ctx.r10.s64 + 26800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,28440
	ctx.r4.s64 = ctx.r10.s64 + 28440;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-10064
	ctx.r31.s64 = ctx.r10.s64 + -10064;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E918;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,19056
	ctx.r3.s64 = ctx.r8.s64 + 19056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1984
	ctx.r11.s64 = ctx.r10.s64 + -1984;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E948;
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

__attribute__((alias("__imp__sub_8305E960"))) PPC_WEAK_FUNC(sub_8305E960);
PPC_FUNC_IMPL(__imp__sub_8305E960) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26912
	ctx.r6.s64 = ctx.r10.s64 + 26912;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,28544
	ctx.r4.s64 = ctx.r10.s64 + 28544;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-10156
	ctx.r31.s64 = ctx.r10.s64 + -10156;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305E9B8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,19136
	ctx.r3.s64 = ctx.r8.s64 + 19136;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1984
	ctx.r11.s64 = ctx.r10.s64 + -1984;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305E9E8;
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

__attribute__((alias("__imp__sub_8305EA00"))) PPC_WEAK_FUNC(sub_8305EA00);
PPC_FUNC_IMPL(__imp__sub_8305EA00) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12648
	ctx.r9.s64 = ctx.r10.s64 + 12648;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,27004
	ctx.r5.s64 = ctx.r10.s64 + 27004;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,28640
	ctx.r4.s64 = ctx.r10.s64 + 28640;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-9880
	ctx.r31.s64 = ctx.r10.s64 + -9880;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305EA58;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,19216
	ctx.r3.s64 = ctx.r8.s64 + 19216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12944
	ctx.r11.s64 = ctx.r9.s64 + 12944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2120
	ctx.r11.s64 = ctx.r10.s64 + -2120;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305EA88;
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

__attribute__((alias("__imp__sub_8305EAA0"))) PPC_WEAK_FUNC(sub_8305EAA0);
PPC_FUNC_IMPL(__imp__sub_8305EAA0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,28712
	ctx.r4.s64 = ctx.r10.s64 + 28712;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-3716
	ctx.r31.s64 = ctx.r10.s64 + -3716;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305EAF8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,19296
	ctx.r3.s64 = ctx.r8.s64 + 19296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1640
	ctx.r11.s64 = ctx.r10.s64 + -1640;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305EB28;
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

__attribute__((alias("__imp__sub_8305EB40"))) PPC_WEAK_FUNC(sub_8305EB40);
PPC_FUNC_IMPL(__imp__sub_8305EB40) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,28808
	ctx.r4.s64 = ctx.r10.s64 + 28808;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-4360
	ctx.r31.s64 = ctx.r10.s64 + -4360;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305EB98;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,19376
	ctx.r3.s64 = ctx.r8.s64 + 19376;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1824
	ctx.r11.s64 = ctx.r10.s64 + -1824;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305EBC8;
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

__attribute__((alias("__imp__sub_8305EBE0"))) PPC_WEAK_FUNC(sub_8305EBE0);
PPC_FUNC_IMPL(__imp__sub_8305EBE0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,28912
	ctx.r4.s64 = ctx.r10.s64 + 28912;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-6476
	ctx.r31.s64 = ctx.r10.s64 + -6476;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305EC38;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,19456
	ctx.r3.s64 = ctx.r8.s64 + 19456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1824
	ctx.r11.s64 = ctx.r10.s64 + -1824;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305EC68;
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

__attribute__((alias("__imp__sub_8305EC80"))) PPC_WEAK_FUNC(sub_8305EC80);
PPC_FUNC_IMPL(__imp__sub_8305EC80) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29016
	ctx.r4.s64 = ctx.r10.s64 + 29016;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-13100
	ctx.r31.s64 = ctx.r10.s64 + -13100;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305ECD8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,19536
	ctx.r3.s64 = ctx.r8.s64 + 19536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1824
	ctx.r11.s64 = ctx.r10.s64 + -1824;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305ED08;
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

__attribute__((alias("__imp__sub_8305ED20"))) PPC_WEAK_FUNC(sub_8305ED20);
PPC_FUNC_IMPL(__imp__sub_8305ED20) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29128
	ctx.r4.s64 = ctx.r10.s64 + 29128;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-3164
	ctx.r31.s64 = ctx.r10.s64 + -3164;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305ED78;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,19616
	ctx.r3.s64 = ctx.r8.s64 + 19616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1824
	ctx.r11.s64 = ctx.r10.s64 + -1824;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305EDA8;
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

__attribute__((alias("__imp__sub_8305EDC0"))) PPC_WEAK_FUNC(sub_8305EDC0);
PPC_FUNC_IMPL(__imp__sub_8305EDC0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32304
	ctx.r9.s64 = ctx.r10.s64 + -32304;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29224
	ctx.r4.s64 = ctx.r10.s64 + 29224;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-8316
	ctx.r31.s64 = ctx.r10.s64 + -8316;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305EE18;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,19696
	ctx.r3.s64 = ctx.r8.s64 + 19696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12944
	ctx.r11.s64 = ctx.r9.s64 + 12944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1640
	ctx.r11.s64 = ctx.r10.s64 + -1640;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305EE48;
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

__attribute__((alias("__imp__sub_8305EE60"))) PPC_WEAK_FUNC(sub_8305EE60);
PPC_FUNC_IMPL(__imp__sub_8305EE60) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29304
	ctx.r4.s64 = ctx.r10.s64 + 29304;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-10524
	ctx.r31.s64 = ctx.r10.s64 + -10524;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305EEB8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,19776
	ctx.r3.s64 = ctx.r8.s64 + 19776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1640
	ctx.r11.s64 = ctx.r10.s64 + -1640;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305EEE8;
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

__attribute__((alias("__imp__sub_8305EF00"))) PPC_WEAK_FUNC(sub_8305EF00);
PPC_FUNC_IMPL(__imp__sub_8305EF00) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29400
	ctx.r4.s64 = ctx.r10.s64 + 29400;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-11536
	ctx.r31.s64 = ctx.r10.s64 + -11536;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305EF58;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,19856
	ctx.r3.s64 = ctx.r8.s64 + 19856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1824
	ctx.r11.s64 = ctx.r10.s64 + -1824;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305EF88;
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

__attribute__((alias("__imp__sub_8305EFA0"))) PPC_WEAK_FUNC(sub_8305EFA0);
PPC_FUNC_IMPL(__imp__sub_8305EFA0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29504
	ctx.r4.s64 = ctx.r10.s64 + 29504;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-7856
	ctx.r31.s64 = ctx.r10.s64 + -7856;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305EFF8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,19936
	ctx.r3.s64 = ctx.r8.s64 + 19936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1824
	ctx.r11.s64 = ctx.r10.s64 + -1824;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F028;
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

__attribute__((alias("__imp__sub_8305F040"))) PPC_WEAK_FUNC(sub_8305F040);
PPC_FUNC_IMPL(__imp__sub_8305F040) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29616
	ctx.r4.s64 = ctx.r10.s64 + 29616;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-11904
	ctx.r31.s64 = ctx.r10.s64 + -11904;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F098;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,20016
	ctx.r3.s64 = ctx.r8.s64 + 20016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1824
	ctx.r11.s64 = ctx.r10.s64 + -1824;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F0C8;
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

__attribute__((alias("__imp__sub_8305F0E0"))) PPC_WEAK_FUNC(sub_8305F0E0);
PPC_FUNC_IMPL(__imp__sub_8305F0E0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29728
	ctx.r4.s64 = ctx.r10.s64 + 29728;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-9144
	ctx.r31.s64 = ctx.r10.s64 + -9144;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F138;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,20096
	ctx.r3.s64 = ctx.r8.s64 + 20096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1824
	ctx.r11.s64 = ctx.r10.s64 + -1824;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F168;
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

__attribute__((alias("__imp__sub_8305F180"))) PPC_WEAK_FUNC(sub_8305F180);
PPC_FUNC_IMPL(__imp__sub_8305F180) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-31832
	ctx.r9.s64 = ctx.r10.s64 + -31832;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29832
	ctx.r4.s64 = ctx.r10.s64 + 29832;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-12088
	ctx.r31.s64 = ctx.r10.s64 + -12088;
	// addi r10,r11,13032
	ctx.r10.s64 = ctx.r11.s64 + 13032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F1D8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,20176
	ctx.r3.s64 = ctx.r8.s64 + 20176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12560
	ctx.r11.s64 = ctx.r9.s64 + 12560;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1640
	ctx.r11.s64 = ctx.r10.s64 + -1640;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F208;
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

__attribute__((alias("__imp__sub_8305F220"))) PPC_WEAK_FUNC(sub_8305F220);
PPC_FUNC_IMPL(__imp__sub_8305F220) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26464
	ctx.r6.s64 = ctx.r10.s64 + 26464;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,29912
	ctx.r4.s64 = ctx.r10.s64 + 29912;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-11812
	ctx.r31.s64 = ctx.r10.s64 + -11812;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F278;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,20256
	ctx.r3.s64 = ctx.r8.s64 + 20256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1328
	ctx.r11.s64 = ctx.r10.s64 + -1328;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F2A8;
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

__attribute__((alias("__imp__sub_8305F2C0"))) PPC_WEAK_FUNC(sub_8305F2C0);
PPC_FUNC_IMPL(__imp__sub_8305F2C0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26568
	ctx.r6.s64 = ctx.r10.s64 + 26568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,29992
	ctx.r4.s64 = ctx.r10.s64 + 29992;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-5740
	ctx.r31.s64 = ctx.r10.s64 + -5740;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F318;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,20336
	ctx.r3.s64 = ctx.r8.s64 + 20336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1480
	ctx.r11.s64 = ctx.r10.s64 + -1480;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F348;
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

__attribute__((alias("__imp__sub_8305F360"))) PPC_WEAK_FUNC(sub_8305F360);
PPC_FUNC_IMPL(__imp__sub_8305F360) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26680
	ctx.r6.s64 = ctx.r10.s64 + 26680;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,30080
	ctx.r4.s64 = ctx.r10.s64 + 30080;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-6200
	ctx.r31.s64 = ctx.r10.s64 + -6200;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F3B8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,20416
	ctx.r3.s64 = ctx.r8.s64 + 20416;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1480
	ctx.r11.s64 = ctx.r10.s64 + -1480;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F3E8;
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

__attribute__((alias("__imp__sub_8305F400"))) PPC_WEAK_FUNC(sub_8305F400);
PPC_FUNC_IMPL(__imp__sub_8305F400) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26800
	ctx.r6.s64 = ctx.r10.s64 + 26800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,30176
	ctx.r4.s64 = ctx.r10.s64 + 30176;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-11720
	ctx.r31.s64 = ctx.r10.s64 + -11720;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F458;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,20496
	ctx.r3.s64 = ctx.r8.s64 + 20496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1480
	ctx.r11.s64 = ctx.r10.s64 + -1480;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F488;
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

__attribute__((alias("__imp__sub_8305F4A0"))) PPC_WEAK_FUNC(sub_8305F4A0);
PPC_FUNC_IMPL(__imp__sub_8305F4A0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26912
	ctx.r6.s64 = ctx.r10.s64 + 26912;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,30272
	ctx.r4.s64 = ctx.r10.s64 + 30272;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-8592
	ctx.r31.s64 = ctx.r10.s64 + -8592;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F4F8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,20576
	ctx.r3.s64 = ctx.r8.s64 + 20576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1480
	ctx.r11.s64 = ctx.r10.s64 + -1480;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F528;
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

__attribute__((alias("__imp__sub_8305F540"))) PPC_WEAK_FUNC(sub_8305F540);
PPC_FUNC_IMPL(__imp__sub_8305F540) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12336
	ctx.r9.s64 = ctx.r10.s64 + 12336;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,27004
	ctx.r5.s64 = ctx.r10.s64 + 27004;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,30356
	ctx.r4.s64 = ctx.r10.s64 + 30356;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-4544
	ctx.r31.s64 = ctx.r10.s64 + -4544;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F598;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,20656
	ctx.r3.s64 = ctx.r8.s64 + 20656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12944
	ctx.r11.s64 = ctx.r9.s64 + 12944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1328
	ctx.r11.s64 = ctx.r10.s64 + -1328;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F5C8;
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

__attribute__((alias("__imp__sub_8305F5E0"))) PPC_WEAK_FUNC(sub_8305F5E0);
PPC_FUNC_IMPL(__imp__sub_8305F5E0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,30424
	ctx.r4.s64 = ctx.r10.s64 + 30424;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-12732
	ctx.r31.s64 = ctx.r10.s64 + -12732;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F638;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,20736
	ctx.r3.s64 = ctx.r8.s64 + 20736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1024
	ctx.r11.s64 = ctx.r10.s64 + -1024;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F668;
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

__attribute__((alias("__imp__sub_8305F680"))) PPC_WEAK_FUNC(sub_8305F680);
PPC_FUNC_IMPL(__imp__sub_8305F680) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,30512
	ctx.r4.s64 = ctx.r10.s64 + 30512;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-5004
	ctx.r31.s64 = ctx.r10.s64 + -5004;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F6D8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,20816
	ctx.r3.s64 = ctx.r8.s64 + 20816;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1200
	ctx.r11.s64 = ctx.r10.s64 + -1200;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F708;
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

__attribute__((alias("__imp__sub_8305F720"))) PPC_WEAK_FUNC(sub_8305F720);
PPC_FUNC_IMPL(__imp__sub_8305F720) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,30608
	ctx.r4.s64 = ctx.r10.s64 + 30608;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-7212
	ctx.r31.s64 = ctx.r10.s64 + -7212;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F778;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,20896
	ctx.r3.s64 = ctx.r8.s64 + 20896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1200
	ctx.r11.s64 = ctx.r10.s64 + -1200;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F7A8;
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

__attribute__((alias("__imp__sub_8305F7C0"))) PPC_WEAK_FUNC(sub_8305F7C0);
PPC_FUNC_IMPL(__imp__sub_8305F7C0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,30704
	ctx.r4.s64 = ctx.r10.s64 + 30704;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-8868
	ctx.r31.s64 = ctx.r10.s64 + -8868;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F818;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,20976
	ctx.r3.s64 = ctx.r8.s64 + 20976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1200
	ctx.r11.s64 = ctx.r10.s64 + -1200;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F848;
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

__attribute__((alias("__imp__sub_8305F860"))) PPC_WEAK_FUNC(sub_8305F860);
PPC_FUNC_IMPL(__imp__sub_8305F860) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,30800
	ctx.r4.s64 = ctx.r10.s64 + 30800;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-6844
	ctx.r31.s64 = ctx.r10.s64 + -6844;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F8B8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,21056
	ctx.r3.s64 = ctx.r8.s64 + 21056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1200
	ctx.r11.s64 = ctx.r10.s64 + -1200;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F8E8;
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

__attribute__((alias("__imp__sub_8305F900"))) PPC_WEAK_FUNC(sub_8305F900);
PPC_FUNC_IMPL(__imp__sub_8305F900) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,32488
	ctx.r9.s64 = ctx.r10.s64 + 32488;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,30888
	ctx.r4.s64 = ctx.r10.s64 + 30888;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-4636
	ctx.r31.s64 = ctx.r10.s64 + -4636;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F958;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,21136
	ctx.r3.s64 = ctx.r8.s64 + 21136;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12944
	ctx.r11.s64 = ctx.r9.s64 + 12944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1024
	ctx.r11.s64 = ctx.r10.s64 + -1024;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305F988;
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

__attribute__((alias("__imp__sub_8305F9A0"))) PPC_WEAK_FUNC(sub_8305F9A0);
PPC_FUNC_IMPL(__imp__sub_8305F9A0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,30960
	ctx.r4.s64 = ctx.r10.s64 + 30960;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-8040
	ctx.r31.s64 = ctx.r10.s64 + -8040;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305F9F8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,21216
	ctx.r3.s64 = ctx.r8.s64 + 21216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1024
	ctx.r11.s64 = ctx.r10.s64 + -1024;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305FA28;
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

__attribute__((alias("__imp__sub_8305FA40"))) PPC_WEAK_FUNC(sub_8305FA40);
PPC_FUNC_IMPL(__imp__sub_8305FA40) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,31048
	ctx.r4.s64 = ctx.r10.s64 + 31048;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-5924
	ctx.r31.s64 = ctx.r10.s64 + -5924;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305FA98;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,21296
	ctx.r3.s64 = ctx.r8.s64 + 21296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1200
	ctx.r11.s64 = ctx.r10.s64 + -1200;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305FAC8;
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

__attribute__((alias("__imp__sub_8305FAE0"))) PPC_WEAK_FUNC(sub_8305FAE0);
PPC_FUNC_IMPL(__imp__sub_8305FAE0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,31144
	ctx.r4.s64 = ctx.r10.s64 + 31144;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-7488
	ctx.r31.s64 = ctx.r10.s64 + -7488;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305FB38;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,21376
	ctx.r3.s64 = ctx.r8.s64 + 21376;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1200
	ctx.r11.s64 = ctx.r10.s64 + -1200;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305FB68;
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

__attribute__((alias("__imp__sub_8305FB80"))) PPC_WEAK_FUNC(sub_8305FB80);
PPC_FUNC_IMPL(__imp__sub_8305FB80) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,31240
	ctx.r4.s64 = ctx.r10.s64 + 31240;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-3900
	ctx.r31.s64 = ctx.r10.s64 + -3900;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305FBD8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,21456
	ctx.r3.s64 = ctx.r8.s64 + 21456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1200
	ctx.r11.s64 = ctx.r10.s64 + -1200;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305FC08;
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

__attribute__((alias("__imp__sub_8305FC20"))) PPC_WEAK_FUNC(sub_8305FC20);
PPC_FUNC_IMPL(__imp__sub_8305FC20) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,31344
	ctx.r4.s64 = ctx.r10.s64 + 31344;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-9512
	ctx.r31.s64 = ctx.r10.s64 + -9512;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305FC78;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,21536
	ctx.r3.s64 = ctx.r8.s64 + 21536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1200
	ctx.r11.s64 = ctx.r10.s64 + -1200;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305FCA8;
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

__attribute__((alias("__imp__sub_8305FCC0"))) PPC_WEAK_FUNC(sub_8305FCC0);
PPC_FUNC_IMPL(__imp__sub_8305FCC0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,32760
	ctx.r9.s64 = ctx.r10.s64 + 32760;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,31432
	ctx.r4.s64 = ctx.r10.s64 + 31432;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-9696
	ctx.r31.s64 = ctx.r10.s64 + -9696;
	// addi r10,r11,13032
	ctx.r10.s64 = ctx.r11.s64 + 13032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305FD18;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,21616
	ctx.r3.s64 = ctx.r8.s64 + 21616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12560
	ctx.r11.s64 = ctx.r9.s64 + 12560;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-1024
	ctx.r11.s64 = ctx.r10.s64 + -1024;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305FD48;
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

__attribute__((alias("__imp__sub_8305FD60"))) PPC_WEAK_FUNC(sub_8305FD60);
PPC_FUNC_IMPL(__imp__sub_8305FD60) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26464
	ctx.r6.s64 = ctx.r10.s64 + 26464;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,31504
	ctx.r4.s64 = ctx.r10.s64 + 31504;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-5464
	ctx.r31.s64 = ctx.r10.s64 + -5464;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305FDB8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,21696
	ctx.r3.s64 = ctx.r8.s64 + 21696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-712
	ctx.r11.s64 = ctx.r10.s64 + -712;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305FDE8;
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

__attribute__((alias("__imp__sub_8305FE00"))) PPC_WEAK_FUNC(sub_8305FE00);
PPC_FUNC_IMPL(__imp__sub_8305FE00) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26568
	ctx.r6.s64 = ctx.r10.s64 + 26568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,31592
	ctx.r4.s64 = ctx.r10.s64 + 31592;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-3532
	ctx.r31.s64 = ctx.r10.s64 + -3532;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305FE58;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,21776
	ctx.r3.s64 = ctx.r8.s64 + 21776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-872
	ctx.r11.s64 = ctx.r10.s64 + -872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305FE88;
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

__attribute__((alias("__imp__sub_8305FEA0"))) PPC_WEAK_FUNC(sub_8305FEA0);
PPC_FUNC_IMPL(__imp__sub_8305FEA0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26680
	ctx.r6.s64 = ctx.r10.s64 + 26680;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,31688
	ctx.r4.s64 = ctx.r10.s64 + 31688;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-8132
	ctx.r31.s64 = ctx.r10.s64 + -8132;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305FEF8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,21856
	ctx.r3.s64 = ctx.r8.s64 + 21856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-872
	ctx.r11.s64 = ctx.r10.s64 + -872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305FF28;
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

__attribute__((alias("__imp__sub_8305FF40"))) PPC_WEAK_FUNC(sub_8305FF40);
PPC_FUNC_IMPL(__imp__sub_8305FF40) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26800
	ctx.r6.s64 = ctx.r10.s64 + 26800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,31792
	ctx.r4.s64 = ctx.r10.s64 + 31792;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-10984
	ctx.r31.s64 = ctx.r10.s64 + -10984;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305FF98;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,21936
	ctx.r3.s64 = ctx.r8.s64 + 21936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-872
	ctx.r11.s64 = ctx.r10.s64 + -872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305FFC8;
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

__attribute__((alias("__imp__sub_8305FFE0"))) PPC_WEAK_FUNC(sub_8305FFE0);
PPC_FUNC_IMPL(__imp__sub_8305FFE0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26912
	ctx.r6.s64 = ctx.r10.s64 + 26912;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,31896
	ctx.r4.s64 = ctx.r10.s64 + 31896;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-4176
	ctx.r31.s64 = ctx.r10.s64 + -4176;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060038;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,22016
	ctx.r3.s64 = ctx.r8.s64 + 22016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-872
	ctx.r11.s64 = ctx.r10.s64 + -872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060068;
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

__attribute__((alias("__imp__sub_83060080"))) PPC_WEAK_FUNC(sub_83060080);
PPC_FUNC_IMPL(__imp__sub_83060080) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12648
	ctx.r9.s64 = ctx.r10.s64 + 12648;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,27004
	ctx.r5.s64 = ctx.r10.s64 + 27004;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,31992
	ctx.r4.s64 = ctx.r10.s64 + 31992;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-7948
	ctx.r31.s64 = ctx.r10.s64 + -7948;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830600D8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,22096
	ctx.r3.s64 = ctx.r8.s64 + 22096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12944
	ctx.r11.s64 = ctx.r9.s64 + 12944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-712
	ctx.r11.s64 = ctx.r10.s64 + -712;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060108;
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

__attribute__((alias("__imp__sub_83060120"))) PPC_WEAK_FUNC(sub_83060120);
PPC_FUNC_IMPL(__imp__sub_83060120) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,32064
	ctx.r4.s64 = ctx.r10.s64 + 32064;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-6108
	ctx.r31.s64 = ctx.r10.s64 + -6108;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060178;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,22176
	ctx.r3.s64 = ctx.r8.s64 + 22176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-392
	ctx.r11.s64 = ctx.r10.s64 + -392;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830601A8;
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

__attribute__((alias("__imp__sub_830601C0"))) PPC_WEAK_FUNC(sub_830601C0);
PPC_FUNC_IMPL(__imp__sub_830601C0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,32160
	ctx.r4.s64 = ctx.r10.s64 + 32160;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-6016
	ctx.r31.s64 = ctx.r10.s64 + -6016;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060218;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,22256
	ctx.r3.s64 = ctx.r8.s64 + 22256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-576
	ctx.r11.s64 = ctx.r10.s64 + -576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060248;
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

__attribute__((alias("__imp__sub_83060260"))) PPC_WEAK_FUNC(sub_83060260);
PPC_FUNC_IMPL(__imp__sub_83060260) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,32256
	ctx.r4.s64 = ctx.r10.s64 + 32256;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-3624
	ctx.r31.s64 = ctx.r10.s64 + -3624;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830602B8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,22336
	ctx.r3.s64 = ctx.r8.s64 + 22336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-576
	ctx.r11.s64 = ctx.r10.s64 + -576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830602E8;
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

__attribute__((alias("__imp__sub_83060300"))) PPC_WEAK_FUNC(sub_83060300);
PPC_FUNC_IMPL(__imp__sub_83060300) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,32360
	ctx.r4.s64 = ctx.r10.s64 + 32360;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-12824
	ctx.r31.s64 = ctx.r10.s64 + -12824;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060358;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,22416
	ctx.r3.s64 = ctx.r8.s64 + 22416;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-576
	ctx.r11.s64 = ctx.r10.s64 + -576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060388;
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

__attribute__((alias("__imp__sub_830603A0"))) PPC_WEAK_FUNC(sub_830603A0);
PPC_FUNC_IMPL(__imp__sub_830603A0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,32464
	ctx.r4.s64 = ctx.r10.s64 + 32464;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-5648
	ctx.r31.s64 = ctx.r10.s64 + -5648;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830603F8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,22496
	ctx.r3.s64 = ctx.r8.s64 + 22496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-576
	ctx.r11.s64 = ctx.r10.s64 + -576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060428;
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

__attribute__((alias("__imp__sub_83060440"))) PPC_WEAK_FUNC(sub_83060440);
PPC_FUNC_IMPL(__imp__sub_83060440) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32304
	ctx.r9.s64 = ctx.r10.s64 + -32304;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,32560
	ctx.r4.s64 = ctx.r10.s64 + 32560;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-9972
	ctx.r31.s64 = ctx.r10.s64 + -9972;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060498;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,22576
	ctx.r3.s64 = ctx.r8.s64 + 22576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12944
	ctx.r11.s64 = ctx.r9.s64 + 12944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-392
	ctx.r11.s64 = ctx.r10.s64 + -392;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830604C8;
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

__attribute__((alias("__imp__sub_830604E0"))) PPC_WEAK_FUNC(sub_830604E0);
PPC_FUNC_IMPL(__imp__sub_830604E0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,32632
	ctx.r4.s64 = ctx.r10.s64 + 32632;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-9236
	ctx.r31.s64 = ctx.r10.s64 + -9236;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060538;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,22656
	ctx.r3.s64 = ctx.r8.s64 + 22656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-392
	ctx.r11.s64 = ctx.r10.s64 + -392;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060568;
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

__attribute__((alias("__imp__sub_83060580"))) PPC_WEAK_FUNC(sub_83060580);
PPC_FUNC_IMPL(__imp__sub_83060580) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,32728
	ctx.r4.s64 = ctx.r10.s64 + 32728;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-3992
	ctx.r31.s64 = ctx.r10.s64 + -3992;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830605D8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,22736
	ctx.r3.s64 = ctx.r8.s64 + 22736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-576
	ctx.r11.s64 = ctx.r10.s64 + -576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060608;
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

__attribute__((alias("__imp__sub_83060620"))) PPC_WEAK_FUNC(sub_83060620);
PPC_FUNC_IMPL(__imp__sub_83060620) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-32712
	ctx.r4.s64 = ctx.r10.s64 + -32712;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-9604
	ctx.r31.s64 = ctx.r10.s64 + -9604;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060678;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,22816
	ctx.r3.s64 = ctx.r8.s64 + 22816;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-576
	ctx.r11.s64 = ctx.r10.s64 + -576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830606A8;
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

__attribute__((alias("__imp__sub_830606C0"))) PPC_WEAK_FUNC(sub_830606C0);
PPC_FUNC_IMPL(__imp__sub_830606C0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-32608
	ctx.r4.s64 = ctx.r10.s64 + -32608;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-5832
	ctx.r31.s64 = ctx.r10.s64 + -5832;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060718;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,22896
	ctx.r3.s64 = ctx.r8.s64 + 22896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-576
	ctx.r11.s64 = ctx.r10.s64 + -576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060748;
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

__attribute__((alias("__imp__sub_83060760"))) PPC_WEAK_FUNC(sub_83060760);
PPC_FUNC_IMPL(__imp__sub_83060760) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-32504
	ctx.r4.s64 = ctx.r10.s64 + -32504;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-9788
	ctx.r31.s64 = ctx.r10.s64 + -9788;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830607B8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,22976
	ctx.r3.s64 = ctx.r8.s64 + 22976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-576
	ctx.r11.s64 = ctx.r10.s64 + -576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830607E8;
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

__attribute__((alias("__imp__sub_83060800"))) PPC_WEAK_FUNC(sub_83060800);
PPC_FUNC_IMPL(__imp__sub_83060800) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-31832
	ctx.r9.s64 = ctx.r10.s64 + -31832;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-32408
	ctx.r4.s64 = ctx.r10.s64 + -32408;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-3808
	ctx.r31.s64 = ctx.r10.s64 + -3808;
	// addi r10,r11,13032
	ctx.r10.s64 = ctx.r11.s64 + 13032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060858;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,23056
	ctx.r3.s64 = ctx.r8.s64 + 23056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12560
	ctx.r11.s64 = ctx.r9.s64 + 12560;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-392
	ctx.r11.s64 = ctx.r10.s64 + -392;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060888;
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

__attribute__((alias("__imp__sub_830608A0"))) PPC_WEAK_FUNC(sub_830608A0);
PPC_FUNC_IMPL(__imp__sub_830608A0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26464
	ctx.r6.s64 = ctx.r10.s64 + 26464;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-32328
	ctx.r4.s64 = ctx.r10.s64 + -32328;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-3440
	ctx.r31.s64 = ctx.r10.s64 + -3440;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830608F8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,23136
	ctx.r3.s64 = ctx.r8.s64 + 23136;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-168
	ctx.r11.s64 = ctx.r10.s64 + -168;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060928;
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

__attribute__((alias("__imp__sub_83060940"))) PPC_WEAK_FUNC(sub_83060940);
PPC_FUNC_IMPL(__imp__sub_83060940) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26568
	ctx.r6.s64 = ctx.r10.s64 + 26568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-32248
	ctx.r4.s64 = ctx.r10.s64 + -32248;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-8408
	ctx.r31.s64 = ctx.r10.s64 + -8408;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060998;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,23216
	ctx.r3.s64 = ctx.r8.s64 + 23216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830609C8;
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

__attribute__((alias("__imp__sub_830609E0"))) PPC_WEAK_FUNC(sub_830609E0);
PPC_FUNC_IMPL(__imp__sub_830609E0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26680
	ctx.r6.s64 = ctx.r10.s64 + 26680;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-32160
	ctx.r4.s64 = ctx.r10.s64 + -32160;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-12180
	ctx.r31.s64 = ctx.r10.s64 + -12180;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060A38;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,23296
	ctx.r3.s64 = ctx.r8.s64 + 23296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060A68;
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

__attribute__((alias("__imp__sub_83060A80"))) PPC_WEAK_FUNC(sub_83060A80);
PPC_FUNC_IMPL(__imp__sub_83060A80) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26800
	ctx.r6.s64 = ctx.r10.s64 + 26800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-32064
	ctx.r4.s64 = ctx.r10.s64 + -32064;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-4084
	ctx.r31.s64 = ctx.r10.s64 + -4084;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060AD8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,23376
	ctx.r3.s64 = ctx.r8.s64 + 23376;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060B08;
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

__attribute__((alias("__imp__sub_83060B20"))) PPC_WEAK_FUNC(sub_83060B20);
PPC_FUNC_IMPL(__imp__sub_83060B20) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26912
	ctx.r6.s64 = ctx.r10.s64 + 26912;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-31968
	ctx.r4.s64 = ctx.r10.s64 + -31968;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-4820
	ctx.r31.s64 = ctx.r10.s64 + -4820;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060B78;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,23456
	ctx.r3.s64 = ctx.r8.s64 + 23456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060BA8;
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

__attribute__((alias("__imp__sub_83060BC0"))) PPC_WEAK_FUNC(sub_83060BC0);
PPC_FUNC_IMPL(__imp__sub_83060BC0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12336
	ctx.r9.s64 = ctx.r10.s64 + 12336;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,27004
	ctx.r5.s64 = ctx.r10.s64 + 27004;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-31884
	ctx.r4.s64 = ctx.r10.s64 + -31884;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-3072
	ctx.r31.s64 = ctx.r10.s64 + -3072;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060C18;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,23536
	ctx.r3.s64 = ctx.r8.s64 + 23536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12944
	ctx.r11.s64 = ctx.r9.s64 + 12944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-168
	ctx.r11.s64 = ctx.r10.s64 + -168;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060C48;
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

__attribute__((alias("__imp__sub_83060C60"))) PPC_WEAK_FUNC(sub_83060C60);
PPC_FUNC_IMPL(__imp__sub_83060C60) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-31816
	ctx.r4.s64 = ctx.r10.s64 + -31816;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-5096
	ctx.r31.s64 = ctx.r10.s64 + -5096;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060CB8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,23616
	ctx.r3.s64 = ctx.r8.s64 + 23616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-40
	ctx.r11.s64 = ctx.r10.s64 + -40;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060CE8;
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

__attribute__((alias("__imp__sub_83060D00"))) PPC_WEAK_FUNC(sub_83060D00);
PPC_FUNC_IMPL(__imp__sub_83060D00) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-31728
	ctx.r4.s64 = ctx.r10.s64 + -31728;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-8776
	ctx.r31.s64 = ctx.r10.s64 + -8776;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060D58;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,23696
	ctx.r3.s64 = ctx.r8.s64 + 23696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060D88;
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

__attribute__((alias("__imp__sub_83060DA0"))) PPC_WEAK_FUNC(sub_83060DA0);
PPC_FUNC_IMPL(__imp__sub_83060DA0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-31632
	ctx.r4.s64 = ctx.r10.s64 + -31632;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-10616
	ctx.r31.s64 = ctx.r10.s64 + -10616;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060DF8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,23776
	ctx.r3.s64 = ctx.r8.s64 + 23776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060E28;
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

__attribute__((alias("__imp__sub_83060E40"))) PPC_WEAK_FUNC(sub_83060E40);
PPC_FUNC_IMPL(__imp__sub_83060E40) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-31536
	ctx.r4.s64 = ctx.r10.s64 + -31536;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-11168
	ctx.r31.s64 = ctx.r10.s64 + -11168;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060E98;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,23856
	ctx.r3.s64 = ctx.r8.s64 + 23856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060EC8;
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

__attribute__((alias("__imp__sub_83060EE0"))) PPC_WEAK_FUNC(sub_83060EE0);
PPC_FUNC_IMPL(__imp__sub_83060EE0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-31440
	ctx.r4.s64 = ctx.r10.s64 + -31440;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-6936
	ctx.r31.s64 = ctx.r10.s64 + -6936;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060F38;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,23936
	ctx.r3.s64 = ctx.r8.s64 + 23936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83060F68;
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

__attribute__((alias("__imp__sub_83060F80"))) PPC_WEAK_FUNC(sub_83060F80);
PPC_FUNC_IMPL(__imp__sub_83060F80) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,32488
	ctx.r9.s64 = ctx.r10.s64 + 32488;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-31352
	ctx.r4.s64 = ctx.r10.s64 + -31352;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-4912
	ctx.r31.s64 = ctx.r10.s64 + -4912;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83060FD8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,24016
	ctx.r3.s64 = ctx.r8.s64 + 24016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12944
	ctx.r11.s64 = ctx.r9.s64 + 12944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-40
	ctx.r11.s64 = ctx.r10.s64 + -40;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061008;
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

__attribute__((alias("__imp__sub_83061020"))) PPC_WEAK_FUNC(sub_83061020);
PPC_FUNC_IMPL(__imp__sub_83061020) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-31280
	ctx.r4.s64 = ctx.r10.s64 + -31280;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-8960
	ctx.r31.s64 = ctx.r10.s64 + -8960;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061078;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,24096
	ctx.r3.s64 = ctx.r8.s64 + 24096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-40
	ctx.r11.s64 = ctx.r10.s64 + -40;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830610A8;
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

__attribute__((alias("__imp__sub_830610C0"))) PPC_WEAK_FUNC(sub_830610C0);
PPC_FUNC_IMPL(__imp__sub_830610C0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-31192
	ctx.r4.s64 = ctx.r10.s64 + -31192;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-10248
	ctx.r31.s64 = ctx.r10.s64 + -10248;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061118;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,24176
	ctx.r3.s64 = ctx.r8.s64 + 24176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061148;
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

__attribute__((alias("__imp__sub_83061160"))) PPC_WEAK_FUNC(sub_83061160);
PPC_FUNC_IMPL(__imp__sub_83061160) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-31096
	ctx.r4.s64 = ctx.r10.s64 + -31096;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-12272
	ctx.r31.s64 = ctx.r10.s64 + -12272;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830611B8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,24256
	ctx.r3.s64 = ctx.r8.s64 + 24256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830611E8;
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

__attribute__((alias("__imp__sub_83061200"))) PPC_WEAK_FUNC(sub_83061200);
PPC_FUNC_IMPL(__imp__sub_83061200) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-31000
	ctx.r4.s64 = ctx.r10.s64 + -31000;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-3256
	ctx.r31.s64 = ctx.r10.s64 + -3256;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061258;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,24336
	ctx.r3.s64 = ctx.r8.s64 + 24336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061288;
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

__attribute__((alias("__imp__sub_830612A0"))) PPC_WEAK_FUNC(sub_830612A0);
PPC_FUNC_IMPL(__imp__sub_830612A0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-30896
	ctx.r4.s64 = ctx.r10.s64 + -30896;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-10708
	ctx.r31.s64 = ctx.r10.s64 + -10708;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830612F8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,24416
	ctx.r3.s64 = ctx.r8.s64 + 24416;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061328;
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

__attribute__((alias("__imp__sub_83061340"))) PPC_WEAK_FUNC(sub_83061340);
PPC_FUNC_IMPL(__imp__sub_83061340) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,32760
	ctx.r9.s64 = ctx.r10.s64 + 32760;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-30808
	ctx.r4.s64 = ctx.r10.s64 + -30808;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-7580
	ctx.r31.s64 = ctx.r10.s64 + -7580;
	// addi r10,r11,13032
	ctx.r10.s64 = ctx.r11.s64 + 13032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061398;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,24496
	ctx.r3.s64 = ctx.r8.s64 + 24496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12560
	ctx.r11.s64 = ctx.r9.s64 + 12560;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-40
	ctx.r11.s64 = ctx.r10.s64 + -40;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830613C8;
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

__attribute__((alias("__imp__sub_830613E0"))) PPC_WEAK_FUNC(sub_830613E0);
PPC_FUNC_IMPL(__imp__sub_830613E0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26464
	ctx.r6.s64 = ctx.r10.s64 + 26464;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30736
	ctx.r4.s64 = ctx.r10.s64 + -30736;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-12364
	ctx.r31.s64 = ctx.r10.s64 + -12364;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061438;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,24576
	ctx.r3.s64 = ctx.r8.s64 + 24576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 + 112;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061468;
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

__attribute__((alias("__imp__sub_83061480"))) PPC_WEAK_FUNC(sub_83061480);
PPC_FUNC_IMPL(__imp__sub_83061480) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26568
	ctx.r6.s64 = ctx.r10.s64 + 26568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30648
	ctx.r4.s64 = ctx.r10.s64 + -30648;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-6292
	ctx.r31.s64 = ctx.r10.s64 + -6292;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830614D8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,24656
	ctx.r3.s64 = ctx.r8.s64 + 24656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061508;
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

__attribute__((alias("__imp__sub_83061520"))) PPC_WEAK_FUNC(sub_83061520);
PPC_FUNC_IMPL(__imp__sub_83061520) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26680
	ctx.r6.s64 = ctx.r10.s64 + 26680;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30552
	ctx.r4.s64 = ctx.r10.s64 + -30552;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-11352
	ctx.r31.s64 = ctx.r10.s64 + -11352;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061578;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,24736
	ctx.r3.s64 = ctx.r8.s64 + 24736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830615A8;
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

__attribute__((alias("__imp__sub_830615C0"))) PPC_WEAK_FUNC(sub_830615C0);
PPC_FUNC_IMPL(__imp__sub_830615C0) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26800
	ctx.r6.s64 = ctx.r10.s64 + 26800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30448
	ctx.r4.s64 = ctx.r10.s64 + -30448;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-7028
	ctx.r31.s64 = ctx.r10.s64 + -7028;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061618;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,24816
	ctx.r3.s64 = ctx.r8.s64 + 24816;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061648;
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

__attribute__((alias("__imp__sub_83061660"))) PPC_WEAK_FUNC(sub_83061660);
PPC_FUNC_IMPL(__imp__sub_83061660) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,26912
	ctx.r6.s64 = ctx.r10.s64 + 26912;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26436
	ctx.r5.s64 = ctx.r10.s64 + 26436;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30344
	ctx.r4.s64 = ctx.r10.s64 + -30344;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-11996
	ctx.r31.s64 = ctx.r10.s64 + -11996;
	// addi r10,r11,-19064
	ctx.r10.s64 = ctx.r11.s64 + -19064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830616B8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,24896
	ctx.r3.s64 = ctx.r8.s64 + 24896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22808
	ctx.r11.s64 = ctx.r9.s64 + 22808;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830616E8;
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

__attribute__((alias("__imp__sub_83061700"))) PPC_WEAK_FUNC(sub_83061700);
PPC_FUNC_IMPL(__imp__sub_83061700) {
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
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,12648
	ctx.r9.s64 = ctx.r10.s64 + 12648;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,27004
	ctx.r5.s64 = ctx.r10.s64 + 27004;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30248
	ctx.r4.s64 = ctx.r10.s64 + -30248;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-2980
	ctx.r31.s64 = ctx.r10.s64 + -2980;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061758;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,24976
	ctx.r3.s64 = ctx.r8.s64 + 24976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12944
	ctx.r11.s64 = ctx.r9.s64 + 12944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,112
	ctx.r11.s64 = ctx.r10.s64 + 112;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061788;
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

__attribute__((alias("__imp__sub_830617A0"))) PPC_WEAK_FUNC(sub_830617A0);
PPC_FUNC_IMPL(__imp__sub_830617A0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30176
	ctx.r4.s64 = ctx.r10.s64 + -30176;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-12548
	ctx.r31.s64 = ctx.r10.s64 + -12548;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830617F8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,25056
	ctx.r3.s64 = ctx.r8.s64 + 25056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,248
	ctx.r11.s64 = ctx.r10.s64 + 248;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061828;
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

__attribute__((alias("__imp__sub_83061840"))) PPC_WEAK_FUNC(sub_83061840);
PPC_FUNC_IMPL(__imp__sub_83061840) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30080
	ctx.r4.s64 = ctx.r10.s64 + -30080;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-5188
	ctx.r31.s64 = ctx.r10.s64 + -5188;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061898;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,25136
	ctx.r3.s64 = ctx.r8.s64 + 25136;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830618C8;
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

__attribute__((alias("__imp__sub_830618E0"))) PPC_WEAK_FUNC(sub_830618E0);
PPC_FUNC_IMPL(__imp__sub_830618E0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29984
	ctx.r4.s64 = ctx.r10.s64 + -29984;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-5280
	ctx.r31.s64 = ctx.r10.s64 + -5280;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061938;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,25216
	ctx.r3.s64 = ctx.r8.s64 + 25216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061968;
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

__attribute__((alias("__imp__sub_83061980"))) PPC_WEAK_FUNC(sub_83061980);
PPC_FUNC_IMPL(__imp__sub_83061980) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29880
	ctx.r4.s64 = ctx.r10.s64 + -29880;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-6384
	ctx.r31.s64 = ctx.r10.s64 + -6384;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830619D8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,25296
	ctx.r3.s64 = ctx.r8.s64 + 25296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061A08;
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

__attribute__((alias("__imp__sub_83061A20"))) PPC_WEAK_FUNC(sub_83061A20);
PPC_FUNC_IMPL(__imp__sub_83061A20) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32504
	ctx.r9.s64 = ctx.r10.s64 + -32504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29776
	ctx.r4.s64 = ctx.r10.s64 + -29776;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-11076
	ctx.r31.s64 = ctx.r10.s64 + -11076;
	// addi r10,r11,-19208
	ctx.r10.s64 = ctx.r11.s64 + -19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061A78;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,25376
	ctx.r3.s64 = ctx.r8.s64 + 25376;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22896
	ctx.r11.s64 = ctx.r9.s64 + 22896;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061AA8;
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

__attribute__((alias("__imp__sub_83061AC0"))) PPC_WEAK_FUNC(sub_83061AC0);
PPC_FUNC_IMPL(__imp__sub_83061AC0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32304
	ctx.r9.s64 = ctx.r10.s64 + -32304;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29680
	ctx.r4.s64 = ctx.r10.s64 + -29680;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-3348
	ctx.r31.s64 = ctx.r10.s64 + -3348;
	// addi r10,r11,12872
	ctx.r10.s64 = ctx.r11.s64 + 12872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061B18;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,25456
	ctx.r3.s64 = ctx.r8.s64 + 25456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12944
	ctx.r11.s64 = ctx.r9.s64 + 12944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,248
	ctx.r11.s64 = ctx.r10.s64 + 248;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061B48;
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

__attribute__((alias("__imp__sub_83061B60"))) PPC_WEAK_FUNC(sub_83061B60);
PPC_FUNC_IMPL(__imp__sub_83061B60) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29608
	ctx.r4.s64 = ctx.r10.s64 + -29608;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-9420
	ctx.r31.s64 = ctx.r10.s64 + -9420;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061BB8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,25536
	ctx.r3.s64 = ctx.r8.s64 + 25536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,248
	ctx.r11.s64 = ctx.r10.s64 + 248;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061BE8;
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

__attribute__((alias("__imp__sub_83061C00"))) PPC_WEAK_FUNC(sub_83061C00);
PPC_FUNC_IMPL(__imp__sub_83061C00) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29512
	ctx.r4.s64 = ctx.r10.s64 + -29512;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-12456
	ctx.r31.s64 = ctx.r10.s64 + -12456;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061C58;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,25616
	ctx.r3.s64 = ctx.r8.s64 + 25616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061C88;
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

__attribute__((alias("__imp__sub_83061CA0"))) PPC_WEAK_FUNC(sub_83061CA0);
PPC_FUNC_IMPL(__imp__sub_83061CA0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29416
	ctx.r4.s64 = ctx.r10.s64 + -29416;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-7120
	ctx.r31.s64 = ctx.r10.s64 + -7120;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061CF8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,25696
	ctx.r3.s64 = ctx.r8.s64 + 25696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061D28;
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

__attribute__((alias("__imp__sub_83061D40"))) PPC_WEAK_FUNC(sub_83061D40);
PPC_FUNC_IMPL(__imp__sub_83061D40) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29312
	ctx.r4.s64 = ctx.r10.s64 + -29312;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-10800
	ctx.r31.s64 = ctx.r10.s64 + -10800;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061D98;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,25776
	ctx.r3.s64 = ctx.r8.s64 + 25776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061DC8;
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

__attribute__((alias("__imp__sub_83061DE0"))) PPC_WEAK_FUNC(sub_83061DE0);
PPC_FUNC_IMPL(__imp__sub_83061DE0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29208
	ctx.r4.s64 = ctx.r10.s64 + -29208;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-10892
	ctx.r31.s64 = ctx.r10.s64 + -10892;
	// addi r10,r11,-19136
	ctx.r10.s64 = ctx.r11.s64 + -19136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061E38;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,25856
	ctx.r3.s64 = ctx.r8.s64 + 25856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22984
	ctx.r11.s64 = ctx.r9.s64 + 22984;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-232
	ctx.r11.s64 = ctx.r10.s64 + -232;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061E68;
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

__attribute__((alias("__imp__sub_83061E80"))) PPC_WEAK_FUNC(sub_83061E80);
PPC_FUNC_IMPL(__imp__sub_83061E80) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-31832
	ctx.r9.s64 = ctx.r10.s64 + -31832;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29112
	ctx.r4.s64 = ctx.r10.s64 + -29112;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-8684
	ctx.r31.s64 = ctx.r10.s64 + -8684;
	// addi r10,r11,13032
	ctx.r10.s64 = ctx.r11.s64 + 13032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061ED8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,25936
	ctx.r3.s64 = ctx.r8.s64 + 25936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,12560
	ctx.r11.s64 = ctx.r9.s64 + 12560;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,248
	ctx.r11.s64 = ctx.r10.s64 + 248;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061F08;
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

__attribute__((alias("__imp__sub_83061F20"))) PPC_WEAK_FUNC(sub_83061F20);
PPC_FUNC_IMPL(__imp__sub_83061F20) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-4360
	ctx.r9.s64 = ctx.r10.s64 + -4360;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29032
	ctx.r4.s64 = ctx.r10.s64 + -29032;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-5372
	ctx.r31.s64 = ctx.r10.s64 + -5372;
	// addi r10,r11,-18992
	ctx.r10.s64 = ctx.r11.s64 + -18992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83061F78;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,26016
	ctx.r3.s64 = ctx.r8.s64 + 26016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,23072
	ctx.r11.s64 = ctx.r9.s64 + 23072;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,408
	ctx.r11.s64 = ctx.r10.s64 + 408;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83061FA8;
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

__attribute__((alias("__imp__sub_83061FC0"))) PPC_WEAK_FUNC(sub_83061FC0);
PPC_FUNC_IMPL(__imp__sub_83061FC0) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-31560
	ctx.r9.s64 = ctx.r10.s64 + -31560;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28960
	ctx.r4.s64 = ctx.r10.s64 + -28960;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-11628
	ctx.r31.s64 = ctx.r10.s64 + -11628;
	// addi r10,r11,13104
	ctx.r10.s64 = ctx.r11.s64 + 13104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83062018;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,26096
	ctx.r3.s64 = ctx.r8.s64 + 26096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,13176
	ctx.r11.s64 = ctx.r9.s64 + 13176;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,488
	ctx.r11.s64 = ctx.r10.s64 + 488;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83062048;
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

__attribute__((alias("__imp__sub_83062060"))) PPC_WEAK_FUNC(sub_83062060);
PPC_FUNC_IMPL(__imp__sub_83062060) {
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
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-4360
	ctx.r9.s64 = ctx.r10.s64 + -4360;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8560
	ctx.r5.s64 = ctx.r10.s64 + 8560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28888
	ctx.r4.s64 = ctx.r10.s64 + -28888;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-9328
	ctx.r31.s64 = ctx.r10.s64 + -9328;
	// addi r10,r11,-18992
	ctx.r10.s64 = ctx.r11.s64 + -18992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830620B8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,26176
	ctx.r3.s64 = ctx.r8.s64 + 26176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,23072
	ctx.r11.s64 = ctx.r9.s64 + 23072;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,592
	ctx.r11.s64 = ctx.r10.s64 + 592;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830620E8;
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

__attribute__((alias("__imp__sub_83062100"))) PPC_WEAK_FUNC(sub_83062100);
PPC_FUNC_IMPL(__imp__sub_83062100) {
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
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r9,r10,-31232
	ctx.r9.s64 = ctx.r10.s64 + -31232;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28808
	ctx.r4.s64 = ctx.r10.s64 + -28808;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-7764
	ctx.r31.s64 = ctx.r10.s64 + -7764;
	// addi r10,r11,13104
	ctx.r10.s64 = ctx.r11.s64 + 13104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83062158;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,26256
	ctx.r3.s64 = ctx.r8.s64 + 26256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,13176
	ctx.r11.s64 = ctx.r9.s64 + 13176;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,672
	ctx.r11.s64 = ctx.r10.s64 + 672;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83062188;
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

__attribute__((alias("__imp__sub_830621A0"))) PPC_WEAK_FUNC(sub_830621A0);
PPC_FUNC_IMPL(__imp__sub_830621A0) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-28700
	ctx.r5.s64 = ctx.r10.s64 + -28700;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28736
	ctx.r4.s64 = ctx.r10.s64 + -28736;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-14944
	ctx.r31.s64 = ctx.r10.s64 + -14944;
	// addi r10,r11,-22704
	ctx.r10.s64 = ctx.r11.s64 + -22704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830621F8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,26336
	ctx.r3.s64 = ctx.r8.s64 + 26336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6432
	ctx.r11.s64 = ctx.r9.s64 + 6432;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83062228;
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

__attribute__((alias("__imp__sub_83062240"))) PPC_WEAK_FUNC(sub_83062240);
PPC_FUNC_IMPL(__imp__sub_83062240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r3,r11,-14336
	ctx.r3.s64 = ctx.r11.s64 + -14336;
	// bl 0x8254d820
	ctx.lr = 0x83062258;
	sub_8254D820(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,16416
	ctx.r3.s64 = ctx.r11.s64 + 16416;
	// bl 0x82d5cd68
	ctx.lr = 0x83062264;
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

__attribute__((alias("__imp__sub_83062278"))) PPC_WEAK_FUNC(sub_83062278);
PPC_FUNC_IMPL(__imp__sub_83062278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,17344
	ctx.r3.s64 = ctx.r11.s64 + 17344;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83062288"))) PPC_WEAK_FUNC(sub_83062288);
PPC_FUNC_IMPL(__imp__sub_83062288) {
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
	// addi r11,r11,-14848
	ctx.r11.s64 = ctx.r11.s64 + -14848;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830622B8"))) PPC_WEAK_FUNC(sub_830622B8);
PPC_FUNC_IMPL(__imp__sub_830622B8) {
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
	// addi r11,r11,-14976
	ctx.r11.s64 = ctx.r11.s64 + -14976;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830622E0"))) PPC_WEAK_FUNC(sub_830622E0);
PPC_FUNC_IMPL(__imp__sub_830622E0) {
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
	// addi r11,r11,-14592
	ctx.r11.s64 = ctx.r11.s64 + -14592;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062308"))) PPC_WEAK_FUNC(sub_83062308);
PPC_FUNC_IMPL(__imp__sub_83062308) {
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
	// addi r11,r11,-14416
	ctx.r11.s64 = ctx.r11.s64 + -14416;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062330"))) PPC_WEAK_FUNC(sub_83062330);
PPC_FUNC_IMPL(__imp__sub_83062330) {
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
	// addi r11,r11,-15072
	ctx.r11.s64 = ctx.r11.s64 + -15072;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062358"))) PPC_WEAK_FUNC(sub_83062358);
PPC_FUNC_IMPL(__imp__sub_83062358) {
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
	// addi r11,r11,-14816
	ctx.r11.s64 = ctx.r11.s64 + -14816;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062380"))) PPC_WEAK_FUNC(sub_83062380);
PPC_FUNC_IMPL(__imp__sub_83062380) {
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
	// addi r11,r11,-14320
	ctx.r11.s64 = ctx.r11.s64 + -14320;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830623B0"))) PPC_WEAK_FUNC(sub_830623B0);
PPC_FUNC_IMPL(__imp__sub_830623B0) {
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
	// addi r11,r11,-15040
	ctx.r11.s64 = ctx.r11.s64 + -15040;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830623E8"))) PPC_WEAK_FUNC(sub_830623E8);
PPC_FUNC_IMPL(__imp__sub_830623E8) {
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
	// addi r11,r11,-14720
	ctx.r11.s64 = ctx.r11.s64 + -14720;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062420"))) PPC_WEAK_FUNC(sub_83062420);
PPC_FUNC_IMPL(__imp__sub_83062420) {
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
	// addi r11,r11,-15024
	ctx.r11.s64 = ctx.r11.s64 + -15024;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062458"))) PPC_WEAK_FUNC(sub_83062458);
PPC_FUNC_IMPL(__imp__sub_83062458) {
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
	// addi r11,r11,-15088
	ctx.r11.s64 = ctx.r11.s64 + -15088;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062480"))) PPC_WEAK_FUNC(sub_83062480);
PPC_FUNC_IMPL(__imp__sub_83062480) {
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
	// addi r11,r11,-15008
	ctx.r11.s64 = ctx.r11.s64 + -15008;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830624A8"))) PPC_WEAK_FUNC(sub_830624A8);
PPC_FUNC_IMPL(__imp__sub_830624A8) {
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
	// addi r11,r11,-14784
	ctx.r11.s64 = ctx.r11.s64 + -14784;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830624D0"))) PPC_WEAK_FUNC(sub_830624D0);
PPC_FUNC_IMPL(__imp__sub_830624D0) {
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
	// addi r11,r11,-15104
	ctx.r11.s64 = ctx.r11.s64 + -15104;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830624F8"))) PPC_WEAK_FUNC(sub_830624F8);
PPC_FUNC_IMPL(__imp__sub_830624F8) {
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
	// addi r11,r11,-14800
	ctx.r11.s64 = ctx.r11.s64 + -14800;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062520"))) PPC_WEAK_FUNC(sub_83062520);
PPC_FUNC_IMPL(__imp__sub_83062520) {
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
	// addi r11,r11,-14992
	ctx.r11.s64 = ctx.r11.s64 + -14992;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062548"))) PPC_WEAK_FUNC(sub_83062548);
PPC_FUNC_IMPL(__imp__sub_83062548) {
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
	// addi r11,r11,-14960
	ctx.r11.s64 = ctx.r11.s64 + -14960;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062570"))) PPC_WEAK_FUNC(sub_83062570);
PPC_FUNC_IMPL(__imp__sub_83062570) {
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
	// addi r11,r11,-15056
	ctx.r11.s64 = ctx.r11.s64 + -15056;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062598"))) PPC_WEAK_FUNC(sub_83062598);
PPC_FUNC_IMPL(__imp__sub_83062598) {
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
	// addi r11,r11,-14384
	ctx.r11.s64 = ctx.r11.s64 + -14384;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830625C0"))) PPC_WEAK_FUNC(sub_830625C0);
PPC_FUNC_IMPL(__imp__sub_830625C0) {
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
	// addi r11,r11,-14528
	ctx.r11.s64 = ctx.r11.s64 + -14528;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830625E8"))) PPC_WEAK_FUNC(sub_830625E8);
PPC_FUNC_IMPL(__imp__sub_830625E8) {
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
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062610"))) PPC_WEAK_FUNC(sub_83062610);
PPC_FUNC_IMPL(__imp__sub_83062610) {
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
	// addi r11,r11,-15120
	ctx.r11.s64 = ctx.r11.s64 + -15120;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062638"))) PPC_WEAK_FUNC(sub_83062638);
PPC_FUNC_IMPL(__imp__sub_83062638) {
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
	// addi r11,r11,-14768
	ctx.r11.s64 = ctx.r11.s64 + -14768;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062660"))) PPC_WEAK_FUNC(sub_83062660);
PPC_FUNC_IMPL(__imp__sub_83062660) {
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
	// addi r11,r11,-14832
	ctx.r11.s64 = ctx.r11.s64 + -14832;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062688"))) PPC_WEAK_FUNC(sub_83062688);
PPC_FUNC_IMPL(__imp__sub_83062688) {
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
	// addi r11,r11,-14736
	ctx.r11.s64 = ctx.r11.s64 + -14736;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830626B0"))) PPC_WEAK_FUNC(sub_830626B0);
PPC_FUNC_IMPL(__imp__sub_830626B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31989
	ctx.r10.s64 = -2096431104;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r9,r10,-4560
	ctx.r9.s64 = ctx.r10.s64 + -4560;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lwz r7,-28(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lwz r6,-24(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// lfs f13,21344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,-32(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062730"))) PPC_WEAK_FUNC(sub_83062730);
PPC_FUNC_IMPL(__imp__sub_83062730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,26736
	ctx.r3.s64 = ctx.r11.s64 + 26736;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83062740"))) PPC_WEAK_FUNC(sub_83062740);
PPC_FUNC_IMPL(__imp__sub_83062740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,385
	ctx.r3.s64 = 385;
	// addi r4,r11,-6440
	ctx.r4.s64 = ctx.r11.s64 + -6440;
	// bl 0x824215d0
	ctx.lr = 0x8306275C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-15393(r11)
	PPC_STORE_U8(ctx.r11.u32 + -15393, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062778"))) PPC_WEAK_FUNC(sub_83062778);
PPC_FUNC_IMPL(__imp__sub_83062778) {
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
	// addi r31,r11,-4488
	ctx.r31.s64 = ctx.r11.s64 + -4488;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dc718
	ctx.lr = 0x830627A0;
	sub_822DC718(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31992
	ctx.r10.s64 = -2096627712;
	// addi r3,r10,17360
	ctx.r3.s64 = ctx.r10.s64 + 17360;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830627B4;
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

__attribute__((alias("__imp__sub_830627C8"))) PPC_WEAK_FUNC(sub_830627C8);
PPC_FUNC_IMPL(__imp__sub_830627C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-6432
	ctx.r4.s64 = ctx.r11.s64 + -6432;
	// bl 0x824215d0
	ctx.lr = 0x830627E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-15395(r11)
	PPC_STORE_U8(ctx.r11.u32 + -15395, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062800"))) PPC_WEAK_FUNC(sub_83062800);
PPC_FUNC_IMPL(__imp__sub_83062800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-6428
	ctx.r4.s64 = ctx.r11.s64 + -6428;
	// bl 0x824215d0
	ctx.lr = 0x8306281C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-15399(r11)
	PPC_STORE_U8(ctx.r11.u32 + -15399, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062838"))) PPC_WEAK_FUNC(sub_83062838);
PPC_FUNC_IMPL(__imp__sub_83062838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-6424
	ctx.r4.s64 = ctx.r11.s64 + -6424;
	// bl 0x824215d0
	ctx.lr = 0x83062854;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-15396(r11)
	PPC_STORE_U8(ctx.r11.u32 + -15396, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062870"))) PPC_WEAK_FUNC(sub_83062870);
PPC_FUNC_IMPL(__imp__sub_83062870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-6420
	ctx.r4.s64 = ctx.r11.s64 + -6420;
	// bl 0x824215d0
	ctx.lr = 0x8306288C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-15398(r11)
	PPC_STORE_U8(ctx.r11.u32 + -15398, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830628A8"))) PPC_WEAK_FUNC(sub_830628A8);
PPC_FUNC_IMPL(__imp__sub_830628A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-6416
	ctx.r4.s64 = ctx.r11.s64 + -6416;
	// bl 0x824215d0
	ctx.lr = 0x830628C4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-15397(r11)
	PPC_STORE_U8(ctx.r11.u32 + -15397, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830628E0"))) PPC_WEAK_FUNC(sub_830628E0);
PPC_FUNC_IMPL(__imp__sub_830628E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-6412
	ctx.r4.s64 = ctx.r11.s64 + -6412;
	// bl 0x824215d0
	ctx.lr = 0x830628FC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-15394(r11)
	PPC_STORE_U8(ctx.r11.u32 + -15394, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062918"))) PPC_WEAK_FUNC(sub_83062918);
PPC_FUNC_IMPL(__imp__sub_83062918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-6408
	ctx.r4.s64 = ctx.r11.s64 + -6408;
	// bl 0x824215d0
	ctx.lr = 0x83062934;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-15400(r11)
	PPC_STORE_U8(ctx.r11.u32 + -15400, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062950"))) PPC_WEAK_FUNC(sub_83062950);
PPC_FUNC_IMPL(__imp__sub_83062950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,16432
	ctx.r3.s64 = ctx.r11.s64 + 16432;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83062960"))) PPC_WEAK_FUNC(sub_83062960);
PPC_FUNC_IMPL(__imp__sub_83062960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,16480
	ctx.r3.s64 = ctx.r11.s64 + 16480;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83062970"))) PPC_WEAK_FUNC(sub_83062970);
PPC_FUNC_IMPL(__imp__sub_83062970) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-28644
	ctx.r5.s64 = ctx.r10.s64 + -28644;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28668
	ctx.r4.s64 = ctx.r10.s64 + -28668;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-15328
	ctx.r31.s64 = ctx.r10.s64 + -15328;
	// addi r10,r11,-20720
	ctx.r10.s64 = ctx.r11.s64 + -20720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830629C8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,26416
	ctx.r3.s64 = ctx.r8.s64 + 26416;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,7920
	ctx.r11.s64 = ctx.r9.s64 + 7920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830629F8;
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

__attribute__((alias("__imp__sub_83062A10"))) PPC_WEAK_FUNC(sub_83062A10);
PPC_FUNC_IMPL(__imp__sub_83062A10) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28596
	ctx.r5.s64 = ctx.r10.s64 + -28596;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28620
	ctx.r4.s64 = ctx.r10.s64 + -28620;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-15492
	ctx.r31.s64 = ctx.r10.s64 + -15492;
	// addi r10,r11,-20544
	ctx.r10.s64 = ctx.r11.s64 + -20544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83062A68;
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
	// addi r3,r8,26496
	ctx.r3.s64 = ctx.r8.s64 + 26496;
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
	ctx.lr = 0x83062A98;
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

__attribute__((alias("__imp__sub_83062AB0"))) PPC_WEAK_FUNC(sub_83062AB0);
PPC_FUNC_IMPL(__imp__sub_83062AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r3,r11,-14628
	ctx.r3.s64 = ctx.r11.s64 + -14628;
	// bl 0x8254d820
	ctx.lr = 0x83062AC8;
	sub_8254D820(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,16528
	ctx.r3.s64 = ctx.r11.s64 + 16528;
	// bl 0x82d5cd68
	ctx.lr = 0x83062AD4;
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

__attribute__((alias("__imp__sub_83062AE8"))) PPC_WEAK_FUNC(sub_83062AE8);
PPC_FUNC_IMPL(__imp__sub_83062AE8) {
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
	// addi r11,r11,1008
	ctx.r11.s64 = ctx.r11.s64 + 1008;
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

__attribute__((alias("__imp__sub_83062B18"))) PPC_WEAK_FUNC(sub_83062B18);
PPC_FUNC_IMPL(__imp__sub_83062B18) {
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
	// addi r11,r11,2272
	ctx.r11.s64 = ctx.r11.s64 + 2272;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062B48"))) PPC_WEAK_FUNC(sub_83062B48);
PPC_FUNC_IMPL(__imp__sub_83062B48) {
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
	// addi r11,r11,2352
	ctx.r11.s64 = ctx.r11.s64 + 2352;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062B90"))) PPC_WEAK_FUNC(sub_83062B90);
PPC_FUNC_IMPL(__imp__sub_83062B90) {
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
	// addi r11,r11,1312
	ctx.r11.s64 = ctx.r11.s64 + 1312;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062BD8"))) PPC_WEAK_FUNC(sub_83062BD8);
PPC_FUNC_IMPL(__imp__sub_83062BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,466
	ctx.r3.s64 = 466;
	// addi r4,r11,-2652
	ctx.r4.s64 = ctx.r11.s64 + -2652;
	// bl 0x824215d0
	ctx.lr = 0x83062BF4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1247(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1247, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062C10"))) PPC_WEAK_FUNC(sub_83062C10);
PPC_FUNC_IMPL(__imp__sub_83062C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2648
	ctx.r4.s64 = ctx.r11.s64 + -2648;
	// bl 0x824215d0
	ctx.lr = 0x83062C2C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-166(r11)
	PPC_STORE_U8(ctx.r11.u32 + -166, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062C48"))) PPC_WEAK_FUNC(sub_83062C48);
PPC_FUNC_IMPL(__imp__sub_83062C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2644
	ctx.r4.s64 = ctx.r11.s64 + -2644;
	// bl 0x824215d0
	ctx.lr = 0x83062C64;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1796(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1796, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062C80"))) PPC_WEAK_FUNC(sub_83062C80);
PPC_FUNC_IMPL(__imp__sub_83062C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2640
	ctx.r4.s64 = ctx.r11.s64 + -2640;
	// bl 0x824215d0
	ctx.lr = 0x83062C9C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1955(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1955, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062CB8"))) PPC_WEAK_FUNC(sub_83062CB8);
PPC_FUNC_IMPL(__imp__sub_83062CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2636
	ctx.r4.s64 = ctx.r11.s64 + -2636;
	// bl 0x824215d0
	ctx.lr = 0x83062CD4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062CF0"))) PPC_WEAK_FUNC(sub_83062CF0);
PPC_FUNC_IMPL(__imp__sub_83062CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,465
	ctx.r3.s64 = 465;
	// addi r4,r11,-2632
	ctx.r4.s64 = ctx.r11.s64 + -2632;
	// bl 0x824215d0
	ctx.lr = 0x83062D0C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83062D28"))) PPC_WEAK_FUNC(sub_83062D28);
PPC_FUNC_IMPL(__imp__sub_83062D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,469
	ctx.r3.s64 = 469;
	// addi r4,r11,-2628
	ctx.r4.s64 = ctx.r11.s64 + -2628;
	// bl 0x824215d0
	ctx.lr = 0x83062D44;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3366(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3366, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062D60"))) PPC_WEAK_FUNC(sub_83062D60);
PPC_FUNC_IMPL(__imp__sub_83062D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,464
	ctx.r3.s64 = 464;
	// addi r4,r11,-2624
	ctx.r4.s64 = ctx.r11.s64 + -2624;
	// bl 0x824215d0
	ctx.lr = 0x83062D7C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2298(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2298, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062D98"))) PPC_WEAK_FUNC(sub_83062D98);
PPC_FUNC_IMPL(__imp__sub_83062D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,470
	ctx.r3.s64 = 470;
	// addi r4,r11,-2620
	ctx.r4.s64 = ctx.r11.s64 + -2620;
	// bl 0x824215d0
	ctx.lr = 0x83062DB4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2491(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2491, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062DD0"))) PPC_WEAK_FUNC(sub_83062DD0);
PPC_FUNC_IMPL(__imp__sub_83062DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2616
	ctx.r4.s64 = ctx.r11.s64 + -2616;
	// bl 0x824215d0
	ctx.lr = 0x83062DEC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2183(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2183, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062E08"))) PPC_WEAK_FUNC(sub_83062E08);
PPC_FUNC_IMPL(__imp__sub_83062E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2612
	ctx.r4.s64 = ctx.r11.s64 + -2612;
	// bl 0x824215d0
	ctx.lr = 0x83062E24;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83062E40"))) PPC_WEAK_FUNC(sub_83062E40);
PPC_FUNC_IMPL(__imp__sub_83062E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,26848
	ctx.r3.s64 = ctx.r11.s64 + 26848;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83062E50"))) PPC_WEAK_FUNC(sub_83062E50);
PPC_FUNC_IMPL(__imp__sub_83062E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,27072
	ctx.r3.s64 = ctx.r11.s64 + 27072;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83062E60"))) PPC_WEAK_FUNC(sub_83062E60);
PPC_FUNC_IMPL(__imp__sub_83062E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,528
	ctx.r3.s64 = 528;
	// addi r4,r11,-2492
	ctx.r4.s64 = ctx.r11.s64 + -2492;
	// bl 0x824215d0
	ctx.lr = 0x83062E7C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,3230(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3230, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062E98"))) PPC_WEAK_FUNC(sub_83062E98);
PPC_FUNC_IMPL(__imp__sub_83062E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,501
	ctx.r3.s64 = 501;
	// addi r4,r11,-2488
	ctx.r4.s64 = ctx.r11.s64 + -2488;
	// bl 0x824215d0
	ctx.lr = 0x83062EB4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2528(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2528, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062ED0"))) PPC_WEAK_FUNC(sub_83062ED0);
PPC_FUNC_IMPL(__imp__sub_83062ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,503
	ctx.r3.s64 = 503;
	// addi r4,r11,-2484
	ctx.r4.s64 = ctx.r11.s64 + -2484;
	// bl 0x824215d0
	ctx.lr = 0x83062EEC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-2078(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2078, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83062F08"))) PPC_WEAK_FUNC(sub_83062F08);
PPC_FUNC_IMPL(__imp__sub_83062F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,509
	ctx.r3.s64 = 509;
	// addi r4,r11,-2480
	ctx.r4.s64 = ctx.r11.s64 + -2480;
	// bl 0x824215d0
	ctx.lr = 0x83062F24;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
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

__attribute__((alias("__imp__sub_83062F40"))) PPC_WEAK_FUNC(sub_83062F40);
PPC_FUNC_IMPL(__imp__sub_83062F40) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-22508
	ctx.r5.s64 = ctx.r10.s64 + -22508;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-22536
	ctx.r4.s64 = ctx.r10.s64 + -22536;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,88
	ctx.r31.s64 = ctx.r10.s64 + 88;
	// addi r10,r11,16088
	ctx.r10.s64 = ctx.r11.s64 + 16088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83062F98;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32103
	ctx.r9.s64 = -2103902208;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,26992
	ctx.r3.s64 = ctx.r8.s64 + 26992;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-32008
	ctx.r11.s64 = ctx.r9.s64 + -32008;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83062FC8;
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

__attribute__((alias("__imp__sub_83062FE0"))) PPC_WEAK_FUNC(sub_83062FE0);
PPC_FUNC_IMPL(__imp__sub_83062FE0) {
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
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-22452
	ctx.r5.s64 = ctx.r10.s64 + -22452;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-22480
	ctx.r4.s64 = ctx.r10.s64 + -22480;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-2400
	ctx.r31.s64 = ctx.r10.s64 + -2400;
	// addi r10,r11,16248
	ctx.r10.s64 = ctx.r11.s64 + 16248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83063038;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,26912
	ctx.r3.s64 = ctx.r8.s64 + 26912;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31496
	ctx.r11.s64 = ctx.r9.s64 + 31496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83063068;
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

__attribute__((alias("__imp__sub_83063080"))) PPC_WEAK_FUNC(sub_83063080);
PPC_FUNC_IMPL(__imp__sub_83063080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r3,r11,1188
	ctx.r3.s64 = ctx.r11.s64 + 1188;
	// bl 0x8254d820
	ctx.lr = 0x83063098;
	sub_8254D820(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,26808
	ctx.r3.s64 = ctx.r11.s64 + 26808;
	// bl 0x82d5cd68
	ctx.lr = 0x830630A4;
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

__attribute__((alias("__imp__sub_830630B8"))) PPC_WEAK_FUNC(sub_830630B8);
PPC_FUNC_IMPL(__imp__sub_830630B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2476
	ctx.r4.s64 = ctx.r11.s64 + -2476;
	// bl 0x824215d0
	ctx.lr = 0x830630D4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2401, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830630F0"))) PPC_WEAK_FUNC(sub_830630F0);
PPC_FUNC_IMPL(__imp__sub_830630F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2472
	ctx.r4.s64 = ctx.r11.s64 + -2472;
	// bl 0x824215d0
	ctx.lr = 0x8306310C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1306(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1306, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063128"))) PPC_WEAK_FUNC(sub_83063128);
PPC_FUNC_IMPL(__imp__sub_83063128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2468
	ctx.r4.s64 = ctx.r11.s64 + -2468;
	// bl 0x824215d0
	ctx.lr = 0x83063144;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,2728(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2728, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063160"))) PPC_WEAK_FUNC(sub_83063160);
PPC_FUNC_IMPL(__imp__sub_83063160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2464
	ctx.r4.s64 = ctx.r11.s64 + -2464;
	// bl 0x824215d0
	ctx.lr = 0x8306317C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-1559(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1559, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83063198"))) PPC_WEAK_FUNC(sub_83063198);
PPC_FUNC_IMPL(__imp__sub_83063198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2460
	ctx.r4.s64 = ctx.r11.s64 + -2460;
	// bl 0x824215d0
	ctx.lr = 0x830631B4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1829(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1829, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830631D0"))) PPC_WEAK_FUNC(sub_830631D0);
PPC_FUNC_IMPL(__imp__sub_830631D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-2456
	ctx.r4.s64 = ctx.r11.s64 + -2456;
	// bl 0x824215d0
	ctx.lr = 0x830631EC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,1131(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1131, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

