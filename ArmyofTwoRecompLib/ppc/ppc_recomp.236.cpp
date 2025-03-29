#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83126928"))) PPC_WEAK_FUNC(sub_83126928);
PPC_FUNC_IMPL(__imp__sub_83126928) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-17400
	ctx.r9.s64 = ctx.r10.s64 + -17400;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,28980
	ctx.r4.s64 = ctx.r10.s64 + 28980;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-18548
	ctx.r31.s64 = ctx.r10.s64 + -18548;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126980;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-3928
	ctx.r3.s64 = ctx.r8.s64 + -3928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6672
	ctx.r11.s64 = ctx.r9.s64 + 6672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831269B0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831269C8"))) PPC_WEAK_FUNC(sub_831269C8);
PPC_FUNC_IMPL(__imp__sub_831269C8) {
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
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-312
	ctx.r9.s64 = ctx.r10.s64 + -312;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29008
	ctx.r4.s64 = ctx.r10.s64 + 29008;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-21676
	ctx.r31.s64 = ctx.r10.s64 + -21676;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126A20;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-3848
	ctx.r3.s64 = ctx.r8.s64 + -3848;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6496
	ctx.r11.s64 = ctx.r9.s64 + 6496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83126A50;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83126A68"))) PPC_WEAK_FUNC(sub_83126A68);
PPC_FUNC_IMPL(__imp__sub_83126A68) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-17304
	ctx.r9.s64 = ctx.r10.s64 + -17304;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29032
	ctx.r4.s64 = ctx.r10.s64 + 29032;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-19008
	ctx.r31.s64 = ctx.r10.s64 + -19008;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126AC0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-3768
	ctx.r3.s64 = ctx.r8.s64 + -3768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6584
	ctx.r11.s64 = ctx.r9.s64 + 6584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83126AF0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83126B08"))) PPC_WEAK_FUNC(sub_83126B08);
PPC_FUNC_IMPL(__imp__sub_83126B08) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-17152
	ctx.r9.s64 = ctx.r10.s64 + -17152;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29056
	ctx.r4.s64 = ctx.r10.s64 + 29056;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-17628
	ctx.r31.s64 = ctx.r10.s64 + -17628;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126B60;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-3688
	ctx.r3.s64 = ctx.r8.s64 + -3688;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6672
	ctx.r11.s64 = ctx.r9.s64 + 6672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83126B90;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83126BA8"))) PPC_WEAK_FUNC(sub_83126BA8);
PPC_FUNC_IMPL(__imp__sub_83126BA8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-17304
	ctx.r9.s64 = ctx.r10.s64 + -17304;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29084
	ctx.r4.s64 = ctx.r10.s64 + 29084;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-18916
	ctx.r31.s64 = ctx.r10.s64 + -18916;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126C00;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-3608
	ctx.r3.s64 = ctx.r8.s64 + -3608;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6496
	ctx.r11.s64 = ctx.r9.s64 + 6496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83126C30;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83126C48"))) PPC_WEAK_FUNC(sub_83126C48);
PPC_FUNC_IMPL(__imp__sub_83126C48) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-16960
	ctx.r9.s64 = ctx.r10.s64 + -16960;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29108
	ctx.r4.s64 = ctx.r10.s64 + 29108;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-20020
	ctx.r31.s64 = ctx.r10.s64 + -20020;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126CA0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-3528
	ctx.r3.s64 = ctx.r8.s64 + -3528;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6584
	ctx.r11.s64 = ctx.r9.s64 + 6584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83126CD0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83126CE8"))) PPC_WEAK_FUNC(sub_83126CE8);
PPC_FUNC_IMPL(__imp__sub_83126CE8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-17056
	ctx.r9.s64 = ctx.r10.s64 + -17056;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29132
	ctx.r4.s64 = ctx.r10.s64 + 29132;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-18824
	ctx.r31.s64 = ctx.r10.s64 + -18824;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126D40;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-3448
	ctx.r3.s64 = ctx.r8.s64 + -3448;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6672
	ctx.r11.s64 = ctx.r9.s64 + 6672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83126D70;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83126D88"))) PPC_WEAK_FUNC(sub_83126D88);
PPC_FUNC_IMPL(__imp__sub_83126D88) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-16960
	ctx.r9.s64 = ctx.r10.s64 + -16960;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29160
	ctx.r4.s64 = ctx.r10.s64 + 29160;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-19928
	ctx.r31.s64 = ctx.r10.s64 + -19928;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126DE0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-3368
	ctx.r3.s64 = ctx.r8.s64 + -3368;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6496
	ctx.r11.s64 = ctx.r9.s64 + 6496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83126E10;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83126E28"))) PPC_WEAK_FUNC(sub_83126E28);
PPC_FUNC_IMPL(__imp__sub_83126E28) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-16712
	ctx.r9.s64 = ctx.r10.s64 + -16712;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29184
	ctx.r4.s64 = ctx.r10.s64 + 29184;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-17996
	ctx.r31.s64 = ctx.r10.s64 + -17996;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126E80;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-3288
	ctx.r3.s64 = ctx.r8.s64 + -3288;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6584
	ctx.r11.s64 = ctx.r9.s64 + 6584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83126EB0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83126EC8"))) PPC_WEAK_FUNC(sub_83126EC8);
PPC_FUNC_IMPL(__imp__sub_83126EC8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-16808
	ctx.r9.s64 = ctx.r10.s64 + -16808;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29208
	ctx.r4.s64 = ctx.r10.s64 + 29208;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-21032
	ctx.r31.s64 = ctx.r10.s64 + -21032;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126F20;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-3208
	ctx.r3.s64 = ctx.r8.s64 + -3208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6672
	ctx.r11.s64 = ctx.r9.s64 + 6672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83126F50;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83126F68"))) PPC_WEAK_FUNC(sub_83126F68);
PPC_FUNC_IMPL(__imp__sub_83126F68) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-16712
	ctx.r9.s64 = ctx.r10.s64 + -16712;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29236
	ctx.r4.s64 = ctx.r10.s64 + 29236;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-18272
	ctx.r31.s64 = ctx.r10.s64 + -18272;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126FC0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-3128
	ctx.r3.s64 = ctx.r8.s64 + -3128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6496
	ctx.r11.s64 = ctx.r9.s64 + 6496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83126FF0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127008"))) PPC_WEAK_FUNC(sub_83127008);
PPC_FUNC_IMPL(__imp__sub_83127008) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-16464
	ctx.r9.s64 = ctx.r10.s64 + -16464;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29260
	ctx.r4.s64 = ctx.r10.s64 + 29260;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-22044
	ctx.r31.s64 = ctx.r10.s64 + -22044;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127060;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-3048
	ctx.r3.s64 = ctx.r8.s64 + -3048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6584
	ctx.r11.s64 = ctx.r9.s64 + 6584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127090;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831270A8"))) PPC_WEAK_FUNC(sub_831270A8);
PPC_FUNC_IMPL(__imp__sub_831270A8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-16560
	ctx.r9.s64 = ctx.r10.s64 + -16560;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29284
	ctx.r4.s64 = ctx.r10.s64 + 29284;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-22412
	ctx.r31.s64 = ctx.r10.s64 + -22412;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127100;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-2968
	ctx.r3.s64 = ctx.r8.s64 + -2968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6672
	ctx.r11.s64 = ctx.r9.s64 + 6672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127130;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127148"))) PPC_WEAK_FUNC(sub_83127148);
PPC_FUNC_IMPL(__imp__sub_83127148) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-16464
	ctx.r9.s64 = ctx.r10.s64 + -16464;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29312
	ctx.r4.s64 = ctx.r10.s64 + 29312;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-19836
	ctx.r31.s64 = ctx.r10.s64 + -19836;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831271A0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-2888
	ctx.r3.s64 = ctx.r8.s64 + -2888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6496
	ctx.r11.s64 = ctx.r9.s64 + 6496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831271D0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831271E8"))) PPC_WEAK_FUNC(sub_831271E8);
PPC_FUNC_IMPL(__imp__sub_831271E8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-16312
	ctx.r9.s64 = ctx.r10.s64 + -16312;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29336
	ctx.r4.s64 = ctx.r10.s64 + 29336;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-19100
	ctx.r31.s64 = ctx.r10.s64 + -19100;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127240;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-2808
	ctx.r3.s64 = ctx.r8.s64 + -2808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6584
	ctx.r11.s64 = ctx.r9.s64 + 6584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127270;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127288"))) PPC_WEAK_FUNC(sub_83127288);
PPC_FUNC_IMPL(__imp__sub_83127288) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-16160
	ctx.r9.s64 = ctx.r10.s64 + -16160;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29360
	ctx.r4.s64 = ctx.r10.s64 + 29360;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-20296
	ctx.r31.s64 = ctx.r10.s64 + -20296;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831272E0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-2728
	ctx.r3.s64 = ctx.r8.s64 + -2728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6672
	ctx.r11.s64 = ctx.r9.s64 + 6672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127310;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127328"))) PPC_WEAK_FUNC(sub_83127328);
PPC_FUNC_IMPL(__imp__sub_83127328) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-16312
	ctx.r9.s64 = ctx.r10.s64 + -16312;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29388
	ctx.r4.s64 = ctx.r10.s64 + 29388;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-20480
	ctx.r31.s64 = ctx.r10.s64 + -20480;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127380;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-2648
	ctx.r3.s64 = ctx.r8.s64 + -2648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6496
	ctx.r11.s64 = ctx.r9.s64 + 6496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831273B0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831273C8"))) PPC_WEAK_FUNC(sub_831273C8);
PPC_FUNC_IMPL(__imp__sub_831273C8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-16064
	ctx.r9.s64 = ctx.r10.s64 + -16064;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29412
	ctx.r4.s64 = ctx.r10.s64 + 29412;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-19652
	ctx.r31.s64 = ctx.r10.s64 + -19652;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127420;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-2568
	ctx.r3.s64 = ctx.r8.s64 + -2568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6584
	ctx.r11.s64 = ctx.r9.s64 + 6584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127450;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127468"))) PPC_WEAK_FUNC(sub_83127468);
PPC_FUNC_IMPL(__imp__sub_83127468) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-15912
	ctx.r9.s64 = ctx.r10.s64 + -15912;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29436
	ctx.r4.s64 = ctx.r10.s64 + 29436;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-20848
	ctx.r31.s64 = ctx.r10.s64 + -20848;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831274C0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-2488
	ctx.r3.s64 = ctx.r8.s64 + -2488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6672
	ctx.r11.s64 = ctx.r9.s64 + 6672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831274F0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127508"))) PPC_WEAK_FUNC(sub_83127508);
PPC_FUNC_IMPL(__imp__sub_83127508) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-16064
	ctx.r9.s64 = ctx.r10.s64 + -16064;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29464
	ctx.r4.s64 = ctx.r10.s64 + 29464;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-21584
	ctx.r31.s64 = ctx.r10.s64 + -21584;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127560;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-2408
	ctx.r3.s64 = ctx.r8.s64 + -2408;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6496
	ctx.r11.s64 = ctx.r9.s64 + 6496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127590;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831275A8"))) PPC_WEAK_FUNC(sub_831275A8);
PPC_FUNC_IMPL(__imp__sub_831275A8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-15560
	ctx.r9.s64 = ctx.r10.s64 + -15560;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29488
	ctx.r4.s64 = ctx.r10.s64 + 29488;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-21768
	ctx.r31.s64 = ctx.r10.s64 + -21768;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127600;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-2328
	ctx.r3.s64 = ctx.r8.s64 + -2328;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6584
	ctx.r11.s64 = ctx.r9.s64 + 6584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127630;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127648"))) PPC_WEAK_FUNC(sub_83127648);
PPC_FUNC_IMPL(__imp__sub_83127648) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-15816
	ctx.r9.s64 = ctx.r10.s64 + -15816;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29512
	ctx.r4.s64 = ctx.r10.s64 + 29512;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-20572
	ctx.r31.s64 = ctx.r10.s64 + -20572;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831276A0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-2248
	ctx.r3.s64 = ctx.r8.s64 + -2248;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6672
	ctx.r11.s64 = ctx.r9.s64 + 6672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831276D0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831276E8"))) PPC_WEAK_FUNC(sub_831276E8);
PPC_FUNC_IMPL(__imp__sub_831276E8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-15560
	ctx.r9.s64 = ctx.r10.s64 + -15560;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29540
	ctx.r4.s64 = ctx.r10.s64 + 29540;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-22320
	ctx.r31.s64 = ctx.r10.s64 + -22320;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127740;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-2168
	ctx.r3.s64 = ctx.r8.s64 + -2168;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6496
	ctx.r11.s64 = ctx.r9.s64 + 6496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127770;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127788"))) PPC_WEAK_FUNC(sub_83127788);
PPC_FUNC_IMPL(__imp__sub_83127788) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-15312
	ctx.r9.s64 = ctx.r10.s64 + -15312;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29564
	ctx.r4.s64 = ctx.r10.s64 + 29564;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-17812
	ctx.r31.s64 = ctx.r10.s64 + -17812;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831277E0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-2088
	ctx.r3.s64 = ctx.r8.s64 + -2088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6584
	ctx.r11.s64 = ctx.r9.s64 + 6584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127810;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127828"))) PPC_WEAK_FUNC(sub_83127828);
PPC_FUNC_IMPL(__imp__sub_83127828) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-15408
	ctx.r9.s64 = ctx.r10.s64 + -15408;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29588
	ctx.r4.s64 = ctx.r10.s64 + 29588;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-20664
	ctx.r31.s64 = ctx.r10.s64 + -20664;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127880;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-2008
	ctx.r3.s64 = ctx.r8.s64 + -2008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6672
	ctx.r11.s64 = ctx.r9.s64 + 6672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831278B0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831278C8"))) PPC_WEAK_FUNC(sub_831278C8);
PPC_FUNC_IMPL(__imp__sub_831278C8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-15312
	ctx.r9.s64 = ctx.r10.s64 + -15312;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29616
	ctx.r4.s64 = ctx.r10.s64 + 29616;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-21400
	ctx.r31.s64 = ctx.r10.s64 + -21400;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127920;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-1928
	ctx.r3.s64 = ctx.r8.s64 + -1928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6496
	ctx.r11.s64 = ctx.r9.s64 + 6496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127950;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127968"))) PPC_WEAK_FUNC(sub_83127968);
PPC_FUNC_IMPL(__imp__sub_83127968) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-15160
	ctx.r9.s64 = ctx.r10.s64 + -15160;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29640
	ctx.r4.s64 = ctx.r10.s64 + 29640;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-18640
	ctx.r31.s64 = ctx.r10.s64 + -18640;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831279C0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-1848
	ctx.r3.s64 = ctx.r8.s64 + -1848;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6584
	ctx.r11.s64 = ctx.r9.s64 + 6584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831279F0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127A08"))) PPC_WEAK_FUNC(sub_83127A08);
PPC_FUNC_IMPL(__imp__sub_83127A08) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-15008
	ctx.r9.s64 = ctx.r10.s64 + -15008;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29664
	ctx.r4.s64 = ctx.r10.s64 + 29664;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-19560
	ctx.r31.s64 = ctx.r10.s64 + -19560;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127A60;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-1768
	ctx.r3.s64 = ctx.r8.s64 + -1768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6672
	ctx.r11.s64 = ctx.r9.s64 + 6672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127A90;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127AA8"))) PPC_WEAK_FUNC(sub_83127AA8);
PPC_FUNC_IMPL(__imp__sub_83127AA8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-15160
	ctx.r9.s64 = ctx.r10.s64 + -15160;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29692
	ctx.r4.s64 = ctx.r10.s64 + 29692;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-18456
	ctx.r31.s64 = ctx.r10.s64 + -18456;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127B00;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-1688
	ctx.r3.s64 = ctx.r8.s64 + -1688;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6496
	ctx.r11.s64 = ctx.r9.s64 + 6496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127B30;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127B48"))) PPC_WEAK_FUNC(sub_83127B48);
PPC_FUNC_IMPL(__imp__sub_83127B48) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-14816
	ctx.r9.s64 = ctx.r10.s64 + -14816;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29716
	ctx.r4.s64 = ctx.r10.s64 + 29716;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-20204
	ctx.r31.s64 = ctx.r10.s64 + -20204;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127BA0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-1608
	ctx.r3.s64 = ctx.r8.s64 + -1608;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6584
	ctx.r11.s64 = ctx.r9.s64 + 6584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127BD0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127BE8"))) PPC_WEAK_FUNC(sub_83127BE8);
PPC_FUNC_IMPL(__imp__sub_83127BE8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-14912
	ctx.r9.s64 = ctx.r10.s64 + -14912;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29740
	ctx.r4.s64 = ctx.r10.s64 + 29740;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-21860
	ctx.r31.s64 = ctx.r10.s64 + -21860;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127C40;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-1528
	ctx.r3.s64 = ctx.r8.s64 + -1528;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6672
	ctx.r11.s64 = ctx.r9.s64 + 6672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127C70;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127C88"))) PPC_WEAK_FUNC(sub_83127C88);
PPC_FUNC_IMPL(__imp__sub_83127C88) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-14816
	ctx.r9.s64 = ctx.r10.s64 + -14816;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29768
	ctx.r4.s64 = ctx.r10.s64 + 29768;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-22228
	ctx.r31.s64 = ctx.r10.s64 + -22228;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127CE0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-1448
	ctx.r3.s64 = ctx.r8.s64 + -1448;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6496
	ctx.r11.s64 = ctx.r9.s64 + 6496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127D10;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127D28"))) PPC_WEAK_FUNC(sub_83127D28);
PPC_FUNC_IMPL(__imp__sub_83127D28) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-14408
	ctx.r9.s64 = ctx.r10.s64 + -14408;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29792
	ctx.r4.s64 = ctx.r10.s64 + 29792;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-21308
	ctx.r31.s64 = ctx.r10.s64 + -21308;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127D80;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-1368
	ctx.r3.s64 = ctx.r8.s64 + -1368;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6584
	ctx.r11.s64 = ctx.r9.s64 + 6584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127DB0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127DC8"))) PPC_WEAK_FUNC(sub_83127DC8);
PPC_FUNC_IMPL(__imp__sub_83127DC8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-14504
	ctx.r9.s64 = ctx.r10.s64 + -14504;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29816
	ctx.r4.s64 = ctx.r10.s64 + 29816;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-21492
	ctx.r31.s64 = ctx.r10.s64 + -21492;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127E20;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-1288
	ctx.r3.s64 = ctx.r8.s64 + -1288;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6672
	ctx.r11.s64 = ctx.r9.s64 + 6672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127E50;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127E68"))) PPC_WEAK_FUNC(sub_83127E68);
PPC_FUNC_IMPL(__imp__sub_83127E68) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-14408
	ctx.r9.s64 = ctx.r10.s64 + -14408;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29844
	ctx.r4.s64 = ctx.r10.s64 + 29844;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-18088
	ctx.r31.s64 = ctx.r10.s64 + -18088;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127EC0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-1208
	ctx.r3.s64 = ctx.r8.s64 + -1208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6496
	ctx.r11.s64 = ctx.r9.s64 + 6496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127EF0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127F08"))) PPC_WEAK_FUNC(sub_83127F08);
PPC_FUNC_IMPL(__imp__sub_83127F08) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-14160
	ctx.r9.s64 = ctx.r10.s64 + -14160;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29868
	ctx.r4.s64 = ctx.r10.s64 + 29868;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-20388
	ctx.r31.s64 = ctx.r10.s64 + -20388;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83127F60;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-1128
	ctx.r3.s64 = ctx.r8.s64 + -1128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6584
	ctx.r11.s64 = ctx.r9.s64 + 6584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83127F90;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83127FA8"))) PPC_WEAK_FUNC(sub_83127FA8);
PPC_FUNC_IMPL(__imp__sub_83127FA8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-14256
	ctx.r9.s64 = ctx.r10.s64 + -14256;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29892
	ctx.r4.s64 = ctx.r10.s64 + 29892;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-19284
	ctx.r31.s64 = ctx.r10.s64 + -19284;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128000;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-1048
	ctx.r3.s64 = ctx.r8.s64 + -1048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6672
	ctx.r11.s64 = ctx.r9.s64 + 6672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128030;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128048"))) PPC_WEAK_FUNC(sub_83128048);
PPC_FUNC_IMPL(__imp__sub_83128048) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-14160
	ctx.r9.s64 = ctx.r10.s64 + -14160;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,28784
	ctx.r5.s64 = ctx.r10.s64 + 28784;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29920
	ctx.r4.s64 = ctx.r10.s64 + 29920;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-20940
	ctx.r31.s64 = ctx.r10.s64 + -20940;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831280A0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-968
	ctx.r3.s64 = ctx.r8.s64 + -968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6496
	ctx.r11.s64 = ctx.r9.s64 + 6496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831280D0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831280E8"))) PPC_WEAK_FUNC(sub_831280E8);
PPC_FUNC_IMPL(__imp__sub_831280E8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,29968
	ctx.r5.s64 = ctx.r10.s64 + 29968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29944
	ctx.r4.s64 = ctx.r10.s64 + 29944;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-25164
	ctx.r31.s64 = ctx.r10.s64 + -25164;
	// addi r10,r11,19048
	ctx.r10.s64 = ctx.r11.s64 + 19048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128140;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,1272
	ctx.r3.s64 = ctx.r8.s64 + 1272;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-1576
	ctx.r11.s64 = ctx.r9.s64 + -1576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,2496
	ctx.r11.s64 = ctx.r10.s64 + 2496;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128170;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128188"))) PPC_WEAK_FUNC(sub_83128188);
PPC_FUNC_IMPL(__imp__sub_83128188) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30016
	ctx.r5.s64 = ctx.r10.s64 + 30016;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,29992
	ctx.r4.s64 = ctx.r10.s64 + 29992;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-24368
	ctx.r31.s64 = ctx.r10.s64 + -24368;
	// addi r10,r11,-21416
	ctx.r10.s64 = ctx.r11.s64 + -21416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831281E0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-888
	ctx.r3.s64 = ctx.r8.s64 + -888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4800
	ctx.r11.s64 = ctx.r9.s64 + 4800;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,2496
	ctx.r11.s64 = ctx.r10.s64 + 2496;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128210;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128228"))) PPC_WEAK_FUNC(sub_83128228);
PPC_FUNC_IMPL(__imp__sub_83128228) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,30064
	ctx.r5.s64 = ctx.r10.s64 + 30064;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30036
	ctx.r4.s64 = ctx.r10.s64 + 30036;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-25356
	ctx.r31.s64 = ctx.r10.s64 + -25356;
	// addi r10,r11,-21344
	ctx.r10.s64 = ctx.r11.s64 + -21344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128280;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-808
	ctx.r3.s64 = ctx.r8.s64 + -808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4888
	ctx.r11.s64 = ctx.r9.s64 + 4888;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831282B0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831282C8"))) PPC_WEAK_FUNC(sub_831282C8);
PPC_FUNC_IMPL(__imp__sub_831282C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6920
	ctx.r3.s64 = ctx.r11.s64 + -6920;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x825f48b8
	ctx.lr = 0x831282EC;
	sub_825F48B8(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-4928
	ctx.r3.s64 = ctx.r11.s64 + -4928;
	// bl 0x82e29708
	ctx.lr = 0x831282F8;
	sub_82E29708(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128308"))) PPC_WEAK_FUNC(sub_83128308);
PPC_FUNC_IMPL(__imp__sub_83128308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-6336
	ctx.r3.s64 = ctx.r11.s64 + -6336;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83128318"))) PPC_WEAK_FUNC(sub_83128318);
PPC_FUNC_IMPL(__imp__sub_83128318) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30116
	ctx.r5.s64 = ctx.r10.s64 + 30116;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30092
	ctx.r4.s64 = ctx.r10.s64 + 30092;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-27456
	ctx.r31.s64 = ctx.r10.s64 + -27456;
	// addi r10,r11,-22264
	ctx.r10.s64 = ctx.r11.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128370;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-728
	ctx.r3.s64 = ctx.r8.s64 + -728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,5000
	ctx.r11.s64 = ctx.r9.s64 + 5000;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831283A0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831283B8"))) PPC_WEAK_FUNC(sub_831283B8);
PPC_FUNC_IMPL(__imp__sub_831283B8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30168
	ctx.r5.s64 = ctx.r10.s64 + 30168;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30140
	ctx.r4.s64 = ctx.r10.s64 + 30140;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-24576
	ctx.r31.s64 = ctx.r10.s64 + -24576;
	// addi r10,r11,-21192
	ctx.r10.s64 = ctx.r11.s64 + -21192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128410;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-648
	ctx.r3.s64 = ctx.r8.s64 + -648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,5088
	ctx.r11.s64 = ctx.r9.s64 + 5088;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128440;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128458"))) PPC_WEAK_FUNC(sub_83128458);
PPC_FUNC_IMPL(__imp__sub_83128458) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30228
	ctx.r5.s64 = ctx.r10.s64 + 30228;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30196
	ctx.r4.s64 = ctx.r10.s64 + 30196;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-25064
	ctx.r31.s64 = ctx.r10.s64 + -25064;
	// addi r10,r11,-21024
	ctx.r10.s64 = ctx.r11.s64 + -21024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831284B0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-568
	ctx.r3.s64 = ctx.r8.s64 + -568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,5176
	ctx.r11.s64 = ctx.r9.s64 + 5176;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831284E0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831284F8"))) PPC_WEAK_FUNC(sub_831284F8);
PPC_FUNC_IMPL(__imp__sub_831284F8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,30292
	ctx.r5.s64 = ctx.r10.s64 + 30292;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30260
	ctx.r4.s64 = ctx.r10.s64 + 30260;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-24484
	ctx.r31.s64 = ctx.r10.s64 + -24484;
	// addi r10,r11,-22416
	ctx.r10.s64 = ctx.r11.s64 + -22416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128550;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-488
	ctx.r3.s64 = ctx.r8.s64 + -488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18720
	ctx.r11.s64 = ctx.r9.s64 + 18720;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128580;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128598"))) PPC_WEAK_FUNC(sub_83128598);
PPC_FUNC_IMPL(__imp__sub_83128598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,2088
	ctx.r3.s64 = ctx.r11.s64 + 2088;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831285A8"))) PPC_WEAK_FUNC(sub_831285A8);
PPC_FUNC_IMPL(__imp__sub_831285A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,2104
	ctx.r3.s64 = ctx.r11.s64 + 2104;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831285B8"))) PPC_WEAK_FUNC(sub_831285B8);
PPC_FUNC_IMPL(__imp__sub_831285B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,2120
	ctx.r3.s64 = ctx.r11.s64 + 2120;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831285C8"))) PPC_WEAK_FUNC(sub_831285C8);
PPC_FUNC_IMPL(__imp__sub_831285C8) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r31,r11,-27172
	ctx.r31.s64 = ctx.r11.s64 + -27172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82637740
	ctx.lr = 0x831285E8;
	sub_82637740(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25292
	ctx.r11.s64 = ctx.r11.s64 + 25292;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825f48b8
	ctx.lr = 0x831285FC;
	sub_825F48B8(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-4848
	ctx.r3.s64 = ctx.r11.s64 + -4848;
	// bl 0x82e29708
	ctx.lr = 0x83128608;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128620"))) PPC_WEAK_FUNC(sub_83128620);
PPC_FUNC_IMPL(__imp__sub_83128620) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r11,-6848
	ctx.r3.s64 = ctx.r11.s64 + -6848;
	// li r4,144
	ctx.r4.s64 = 144;
	// bl 0x822e0788
	ctx.lr = 0x83128640;
	sub_822E0788(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-4824
	ctx.r3.s64 = ctx.r11.s64 + -4824;
	// bl 0x82e29708
	ctx.lr = 0x8312864C;
	sub_82E29708(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128660"))) PPC_WEAK_FUNC(sub_83128660);
PPC_FUNC_IMPL(__imp__sub_83128660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r11,r11,-24276
	ctx.r11.s64 = ctx.r11.s64 + -24276;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfd f0,-11432(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -11432);
loc_8312867C:
	// stfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne cr6,0x8312867c
	if (!ctx.cr6.eq) goto loc_8312867C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831286A8"))) PPC_WEAK_FUNC(sub_831286A8);
PPC_FUNC_IMPL(__imp__sub_831286A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6836
	ctx.r3.s64 = ctx.r11.s64 + -6836;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x825f48b8
	ctx.lr = 0x831286CC;
	sub_825F48B8(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-4808
	ctx.r3.s64 = ctx.r11.s64 + -4808;
	// bl 0x82e29708
	ctx.lr = 0x831286D8;
	sub_82E29708(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831286E8"))) PPC_WEAK_FUNC(sub_831286E8);
PPC_FUNC_IMPL(__imp__sub_831286E8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30340
	ctx.r5.s64 = ctx.r10.s64 + 30340;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30320
	ctx.r4.s64 = ctx.r10.s64 + 30320;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-24000
	ctx.r31.s64 = ctx.r10.s64 + -24000;
	// addi r10,r11,-22264
	ctx.r10.s64 = ctx.r11.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128740;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-408
	ctx.r3.s64 = ctx.r8.s64 + -408;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,5264
	ctx.r11.s64 = ctx.r9.s64 + 5264;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128770;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128788"))) PPC_WEAK_FUNC(sub_83128788);
PPC_FUNC_IMPL(__imp__sub_83128788) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,30380
	ctx.r5.s64 = ctx.r10.s64 + 30380;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30360
	ctx.r4.s64 = ctx.r10.s64 + 30360;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-27364
	ctx.r31.s64 = ctx.r10.s64 + -27364;
	// addi r10,r11,8672
	ctx.r10.s64 = ctx.r11.s64 + 8672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831287E0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-328
	ctx.r3.s64 = ctx.r8.s64 + -328;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22176
	ctx.r11.s64 = ctx.r9.s64 + 22176;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128810;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128828"))) PPC_WEAK_FUNC(sub_83128828);
PPC_FUNC_IMPL(__imp__sub_83128828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-6320
	ctx.r3.s64 = ctx.r11.s64 + -6320;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83128838"))) PPC_WEAK_FUNC(sub_83128838);
PPC_FUNC_IMPL(__imp__sub_83128838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-6304
	ctx.r3.s64 = ctx.r11.s64 + -6304;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83128848"))) PPC_WEAK_FUNC(sub_83128848);
PPC_FUNC_IMPL(__imp__sub_83128848) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30440
	ctx.r5.s64 = ctx.r10.s64 + 30440;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30400
	ctx.r4.s64 = ctx.r10.s64 + 30400;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-24780
	ctx.r31.s64 = ctx.r10.s64 + -24780;
	// addi r10,r11,-22264
	ctx.r10.s64 = ctx.r11.s64 + -22264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831288A0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-248
	ctx.r3.s64 = ctx.r8.s64 + -248;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4264
	ctx.r11.s64 = ctx.r9.s64 + 4264;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-15456
	ctx.r11.s64 = ctx.r10.s64 + -15456;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831288D0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831288E8"))) PPC_WEAK_FUNC(sub_831288E8);
PPC_FUNC_IMPL(__imp__sub_831288E8) {
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
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-8080
	ctx.r9.s64 = ctx.r10.s64 + -8080;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30516
	ctx.r5.s64 = ctx.r10.s64 + 30516;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30480
	ctx.r4.s64 = ctx.r10.s64 + 30480;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-25256
	ctx.r31.s64 = ctx.r10.s64 + -25256;
	// addi r10,r11,-20608
	ctx.r10.s64 = ctx.r11.s64 + -20608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128940;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-168
	ctx.r3.s64 = ctx.r8.s64 + -168;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,5352
	ctx.r11.s64 = ctx.r9.s64 + 5352;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128970;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128988"))) PPC_WEAK_FUNC(sub_83128988);
PPC_FUNC_IMPL(__imp__sub_83128988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,2136
	ctx.r3.s64 = ctx.r11.s64 + 2136;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83128998"))) PPC_WEAK_FUNC(sub_83128998);
PPC_FUNC_IMPL(__imp__sub_83128998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,2152
	ctx.r3.s64 = ctx.r11.s64 + 2152;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831289A8"))) PPC_WEAK_FUNC(sub_831289A8);
PPC_FUNC_IMPL(__imp__sub_831289A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,2168
	ctx.r3.s64 = ctx.r11.s64 + 2168;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831289B8"))) PPC_WEAK_FUNC(sub_831289B8);
PPC_FUNC_IMPL(__imp__sub_831289B8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30572
	ctx.r5.s64 = ctx.r10.s64 + 30572;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30552
	ctx.r4.s64 = ctx.r10.s64 + 30552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-27272
	ctx.r31.s64 = ctx.r10.s64 + -27272;
	// addi r10,r11,-22568
	ctx.r10.s64 = ctx.r11.s64 + -22568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128A10;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-88
	ctx.r3.s64 = ctx.r8.s64 + -88;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,3960
	ctx.r11.s64 = ctx.r9.s64 + 3960;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128A40;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128A58"))) PPC_WEAK_FUNC(sub_83128A58);
PPC_FUNC_IMPL(__imp__sub_83128A58) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,30628
	ctx.r6.s64 = ctx.r10.s64 + 30628;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,30612
	ctx.r5.s64 = ctx.r10.s64 + 30612;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30588
	ctx.r4.s64 = ctx.r10.s64 + 30588;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-24880
	ctx.r31.s64 = ctx.r10.s64 + -24880;
	// addi r10,r11,-22416
	ctx.r10.s64 = ctx.r11.s64 + -22416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128AB0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-8
	ctx.r3.s64 = ctx.r8.s64 + -8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18720
	ctx.r11.s64 = ctx.r9.s64 + 18720;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128AE0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128AF8"))) PPC_WEAK_FUNC(sub_83128AF8);
PPC_FUNC_IMPL(__imp__sub_83128AF8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,30672
	ctx.r6.s64 = ctx.r10.s64 + 30672;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30612
	ctx.r5.s64 = ctx.r10.s64 + 30612;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30648
	ctx.r4.s64 = ctx.r10.s64 + 30648;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-23632
	ctx.r31.s64 = ctx.r10.s64 + -23632;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128B50;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,72
	ctx.r3.s64 = ctx.r8.s64 + 72;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4072
	ctx.r11.s64 = ctx.r9.s64 + 4072;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128B80;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128B98"))) PPC_WEAK_FUNC(sub_83128B98);
PPC_FUNC_IMPL(__imp__sub_83128B98) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,30716
	ctx.r5.s64 = ctx.r10.s64 + 30716;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30688
	ctx.r4.s64 = ctx.r10.s64 + 30688;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-23816
	ctx.r31.s64 = ctx.r10.s64 + -23816;
	// addi r10,r11,32496
	ctx.r10.s64 = ctx.r11.s64 + 32496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128BF0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,152
	ctx.r3.s64 = ctx.r8.s64 + 152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-1120
	ctx.r11.s64 = ctx.r9.s64 + -1120;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,3144
	ctx.r11.s64 = ctx.r10.s64 + 3144;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128C20;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128C38"))) PPC_WEAK_FUNC(sub_83128C38);
PPC_FUNC_IMPL(__imp__sub_83128C38) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30764
	ctx.r5.s64 = ctx.r10.s64 + 30764;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30740
	ctx.r4.s64 = ctx.r10.s64 + 30740;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-24136
	ctx.r31.s64 = ctx.r10.s64 + -24136;
	// addi r10,r11,-20048
	ctx.r10.s64 = ctx.r11.s64 + -20048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128C90;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,232
	ctx.r3.s64 = ctx.r8.s64 + 232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-1032
	ctx.r11.s64 = ctx.r9.s64 + -1032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,3248
	ctx.r11.s64 = ctx.r10.s64 + 3248;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128CC0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128CD8"))) PPC_WEAK_FUNC(sub_83128CD8);
PPC_FUNC_IMPL(__imp__sub_83128CD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6756
	ctx.r3.s64 = ctx.r11.s64 + -6756;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x825f48b8
	ctx.lr = 0x83128CFC;
	sub_825F48B8(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-4728
	ctx.r3.s64 = ctx.r11.s64 + -4728;
	// bl 0x82e29708
	ctx.lr = 0x83128D08;
	sub_82E29708(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128D18"))) PPC_WEAK_FUNC(sub_83128D18);
PPC_FUNC_IMPL(__imp__sub_83128D18) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30816
	ctx.r5.s64 = ctx.r10.s64 + 30816;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30788
	ctx.r4.s64 = ctx.r10.s64 + 30788;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-24972
	ctx.r31.s64 = ctx.r10.s64 + -24972;
	// addi r10,r11,-19976
	ctx.r10.s64 = ctx.r11.s64 + -19976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128D70;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,312
	ctx.r3.s64 = ctx.r8.s64 + 312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-944
	ctx.r11.s64 = ctx.r9.s64 + -944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,3248
	ctx.r11.s64 = ctx.r10.s64 + 3248;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128DA0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128DB8"))) PPC_WEAK_FUNC(sub_83128DB8);
PPC_FUNC_IMPL(__imp__sub_83128DB8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,30876
	ctx.r5.s64 = ctx.r10.s64 + 30876;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30844
	ctx.r4.s64 = ctx.r10.s64 + 30844;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-24688
	ctx.r31.s64 = ctx.r10.s64 + -24688;
	// addi r10,r11,-22104
	ctx.r10.s64 = ctx.r11.s64 + -22104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128E10;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,392
	ctx.r3.s64 = ctx.r8.s64 + 392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4352
	ctx.r11.s64 = ctx.r9.s64 + 4352;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18256
	ctx.r11.s64 = ctx.r10.s64 + 18256;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128E40;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128E58"))) PPC_WEAK_FUNC(sub_83128E58);
PPC_FUNC_IMPL(__imp__sub_83128E58) {
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
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,-3768
	ctx.r9.s64 = ctx.r10.s64 + -3768;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30940
	ctx.r5.s64 = ctx.r10.s64 + 30940;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30908
	ctx.r4.s64 = ctx.r10.s64 + 30908;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-23724
	ctx.r31.s64 = ctx.r10.s64 + -23724;
	// addi r10,r11,-21800
	ctx.r10.s64 = ctx.r11.s64 + -21800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128EB0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,472
	ctx.r3.s64 = ctx.r8.s64 + 472;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4576
	ctx.r11.s64 = ctx.r9.s64 + 4576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128EE0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128EF8"))) PPC_WEAK_FUNC(sub_83128EF8);
PPC_FUNC_IMPL(__imp__sub_83128EF8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,31004
	ctx.r5.s64 = ctx.r10.s64 + 31004;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,30968
	ctx.r4.s64 = ctx.r10.s64 + 30968;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-23908
	ctx.r31.s64 = ctx.r10.s64 + -23908;
	// addi r10,r11,-21952
	ctx.r10.s64 = ctx.r11.s64 + -21952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128F50;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,552
	ctx.r3.s64 = ctx.r8.s64 + 552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4464
	ctx.r11.s64 = ctx.r9.s64 + 4464;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18256
	ctx.r11.s64 = ctx.r10.s64 + 18256;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83128F80;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83128F98"))) PPC_WEAK_FUNC(sub_83128F98);
PPC_FUNC_IMPL(__imp__sub_83128F98) {
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
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,12168
	ctx.r9.s64 = ctx.r10.s64 + 12168;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,8708
	ctx.r6.s64 = ctx.r10.s64 + 8708;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30940
	ctx.r5.s64 = ctx.r10.s64 + 30940;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,31036
	ctx.r4.s64 = ctx.r10.s64 + 31036;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-19744
	ctx.r31.s64 = ctx.r10.s64 + -19744;
	// addi r10,r11,-13688
	ctx.r10.s64 = ctx.r11.s64 + -13688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83128FF0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,632
	ctx.r3.s64 = ctx.r8.s64 + 632;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6960
	ctx.r11.s64 = ctx.r9.s64 + 6960;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-12952
	ctx.r11.s64 = ctx.r10.s64 + -12952;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129020;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129038"))) PPC_WEAK_FUNC(sub_83129038);
PPC_FUNC_IMPL(__imp__sub_83129038) {
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
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,12168
	ctx.r9.s64 = ctx.r10.s64 + 12168;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30940
	ctx.r5.s64 = ctx.r10.s64 + 30940;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,31080
	ctx.r4.s64 = ctx.r10.s64 + 31080;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-21216
	ctx.r31.s64 = ctx.r10.s64 + -21216;
	// addi r10,r11,-13616
	ctx.r10.s64 = ctx.r11.s64 + -13616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129090;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,712
	ctx.r3.s64 = ctx.r8.s64 + 712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,7048
	ctx.r11.s64 = ctx.r9.s64 + 7048;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831290C0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831290D8"))) PPC_WEAK_FUNC(sub_831290D8);
PPC_FUNC_IMPL(__imp__sub_831290D8) {
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
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,12320
	ctx.r9.s64 = ctx.r10.s64 + 12320;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,8708
	ctx.r6.s64 = ctx.r10.s64 + 8708;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30940
	ctx.r5.s64 = ctx.r10.s64 + 30940;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,31128
	ctx.r4.s64 = ctx.r10.s64 + 31128;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-17720
	ctx.r31.s64 = ctx.r10.s64 + -17720;
	// addi r10,r11,-13544
	ctx.r10.s64 = ctx.r11.s64 + -13544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129130;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,792
	ctx.r3.s64 = ctx.r8.s64 + 792;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,7136
	ctx.r11.s64 = ctx.r9.s64 + 7136;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129160;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129178"))) PPC_WEAK_FUNC(sub_83129178);
PPC_FUNC_IMPL(__imp__sub_83129178) {
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
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,12320
	ctx.r9.s64 = ctx.r10.s64 + 12320;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,8816
	ctx.r6.s64 = ctx.r10.s64 + 8816;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30940
	ctx.r5.s64 = ctx.r10.s64 + 30940;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,31176
	ctx.r4.s64 = ctx.r10.s64 + 31176;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-18364
	ctx.r31.s64 = ctx.r10.s64 + -18364;
	// addi r10,r11,-13472
	ctx.r10.s64 = ctx.r11.s64 + -13472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831291D0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,872
	ctx.r3.s64 = ctx.r8.s64 + 872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,7224
	ctx.r11.s64 = ctx.r9.s64 + 7224;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129200;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129218"))) PPC_WEAK_FUNC(sub_83129218);
PPC_FUNC_IMPL(__imp__sub_83129218) {
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
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,12320
	ctx.r9.s64 = ctx.r10.s64 + 12320;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,30940
	ctx.r5.s64 = ctx.r10.s64 + 30940;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,31228
	ctx.r4.s64 = ctx.r10.s64 + 31228;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-20112
	ctx.r31.s64 = ctx.r10.s64 + -20112;
	// addi r10,r11,-13760
	ctx.r10.s64 = ctx.r11.s64 + -13760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129270;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,952
	ctx.r3.s64 = ctx.r8.s64 + 952;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6872
	ctx.r11.s64 = ctx.r9.s64 + 6872;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831292A0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831292B8"))) PPC_WEAK_FUNC(sub_831292B8);
PPC_FUNC_IMPL(__imp__sub_831292B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-6288
	ctx.r3.s64 = ctx.r11.s64 + -6288;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831292C8"))) PPC_WEAK_FUNC(sub_831292C8);
PPC_FUNC_IMPL(__imp__sub_831292C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831292D8"))) PPC_WEAK_FUNC(sub_831292D8);
PPC_FUNC_IMPL(__imp__sub_831292D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,1512
	ctx.r3.s64 = ctx.r11.s64 + 1512;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831292E8"))) PPC_WEAK_FUNC(sub_831292E8);
PPC_FUNC_IMPL(__imp__sub_831292E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,1528
	ctx.r3.s64 = ctx.r11.s64 + 1528;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831292F8"))) PPC_WEAK_FUNC(sub_831292F8);
PPC_FUNC_IMPL(__imp__sub_831292F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,1544
	ctx.r3.s64 = ctx.r11.s64 + 1544;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129308"))) PPC_WEAK_FUNC(sub_83129308);
PPC_FUNC_IMPL(__imp__sub_83129308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,1560
	ctx.r3.s64 = ctx.r11.s64 + 1560;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129318"))) PPC_WEAK_FUNC(sub_83129318);
PPC_FUNC_IMPL(__imp__sub_83129318) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,31280
	ctx.r5.s64 = ctx.r10.s64 + 31280;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-26428
	ctx.r4.s64 = ctx.r10.s64 + -26428;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-25448
	ctx.r31.s64 = ctx.r10.s64 + -25448;
	// addi r10,r11,-19808
	ctx.r10.s64 = ctx.r11.s64 + -19808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129370;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,1032
	ctx.r3.s64 = ctx.r8.s64 + 1032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,5520
	ctx.r11.s64 = ctx.r9.s64 + 5520;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831293A0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831293B8"))) PPC_WEAK_FUNC(sub_831293B8);
PPC_FUNC_IMPL(__imp__sub_831293B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-6272
	ctx.r3.s64 = ctx.r11.s64 + -6272;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831293C8"))) PPC_WEAK_FUNC(sub_831293C8);
PPC_FUNC_IMPL(__imp__sub_831293C8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,31340
	ctx.r5.s64 = ctx.r10.s64 + 31340;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,31308
	ctx.r4.s64 = ctx.r10.s64 + 31308;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-24228
	ctx.r31.s64 = ctx.r10.s64 + -24228;
	// addi r10,r11,-21648
	ctx.r10.s64 = ctx.r11.s64 + -21648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129420;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32156
	ctx.r9.s64 = -2107375616;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,1112
	ctx.r3.s64 = ctx.r8.s64 + 1112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4688
	ctx.r11.s64 = ctx.r9.s64 + 4688;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18728
	ctx.r11.s64 = ctx.r10.s64 + 18728;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129450;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129468"))) PPC_WEAK_FUNC(sub_83129468);
PPC_FUNC_IMPL(__imp__sub_83129468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,-17216
	ctx.r11.s64 = ctx.r11.s64 + -17216;
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

__attribute__((alias("__imp__sub_83129498"))) PPC_WEAK_FUNC(sub_83129498);
PPC_FUNC_IMPL(__imp__sub_83129498) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-17088
	ctx.r11.s64 = ctx.r11.s64 + -17088;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831294C8"))) PPC_WEAK_FUNC(sub_831294C8);
PPC_FUNC_IMPL(__imp__sub_831294C8) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-17072
	ctx.r11.s64 = ctx.r11.s64 + -17072;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129510"))) PPC_WEAK_FUNC(sub_83129510);
PPC_FUNC_IMPL(__imp__sub_83129510) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-17200
	ctx.r11.s64 = ctx.r11.s64 + -17200;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129558"))) PPC_WEAK_FUNC(sub_83129558);
PPC_FUNC_IMPL(__imp__sub_83129558) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-22436
	ctx.r5.s64 = ctx.r10.s64 + -22436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-22496
	ctx.r4.s64 = ctx.r10.s64 + -22496;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-15072
	ctx.r31.s64 = ctx.r10.s64 + -15072;
	// addi r10,r11,-19592
	ctx.r10.s64 = ctx.r11.s64 + -19592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831295B0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,3896
	ctx.r3.s64 = ctx.r8.s64 + 3896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31456
	ctx.r11.s64 = ctx.r9.s64 + 31456;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,3984
	ctx.r11.s64 = ctx.r10.s64 + 3984;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831295E0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831295F8"))) PPC_WEAK_FUNC(sub_831295F8);
PPC_FUNC_IMPL(__imp__sub_831295F8) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,31544
	ctx.r9.s64 = ctx.r10.s64 + 31544;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-22352
	ctx.r5.s64 = ctx.r10.s64 + -22352;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-22412
	ctx.r4.s64 = ctx.r10.s64 + -22412;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-15716
	ctx.r31.s64 = ctx.r10.s64 + -15716;
	// addi r10,r11,26744
	ctx.r10.s64 = ctx.r11.s64 + 26744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129650;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,2216
	ctx.r3.s64 = ctx.r8.s64 + 2216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,26816
	ctx.r11.s64 = ctx.r9.s64 + 26816;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,3984
	ctx.r11.s64 = ctx.r10.s64 + 3984;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129680;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129698"))) PPC_WEAK_FUNC(sub_83129698);
PPC_FUNC_IMPL(__imp__sub_83129698) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,-16840
	ctx.r9.s64 = ctx.r10.s64 + -16840;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-22436
	ctx.r5.s64 = ctx.r10.s64 + -22436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-22328
	ctx.r4.s64 = ctx.r10.s64 + -22328;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-15440
	ctx.r31.s64 = ctx.r10.s64 + -15440;
	// addi r10,r11,20176
	ctx.r10.s64 = ctx.r11.s64 + 20176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831296F0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,2296
	ctx.r3.s64 = ctx.r8.s64 + 2296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31640
	ctx.r11.s64 = ctx.r9.s64 + 31640;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,26336
	ctx.r11.s64 = ctx.r10.s64 + 26336;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129720;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129738"))) PPC_WEAK_FUNC(sub_83129738);
PPC_FUNC_IMPL(__imp__sub_83129738) {
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
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,25320
	ctx.r9.s64 = ctx.r10.s64 + 25320;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-22352
	ctx.r5.s64 = ctx.r10.s64 + -22352;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-22272
	ctx.r4.s64 = ctx.r10.s64 + -22272;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-15992
	ctx.r31.s64 = ctx.r10.s64 + -15992;
	// addi r10,r11,26904
	ctx.r10.s64 = ctx.r11.s64 + 26904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129790;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,2376
	ctx.r3.s64 = ctx.r8.s64 + 2376;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,26976
	ctx.r11.s64 = ctx.r9.s64 + 26976;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,26336
	ctx.r11.s64 = ctx.r10.s64 + 26336;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831297C0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831297D8"))) PPC_WEAK_FUNC(sub_831297D8);
PPC_FUNC_IMPL(__imp__sub_831297D8) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,-16752
	ctx.r9.s64 = ctx.r10.s64 + -16752;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-22436
	ctx.r5.s64 = ctx.r10.s64 + -22436;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-22216
	ctx.r4.s64 = ctx.r10.s64 + -22216;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-15532
	ctx.r31.s64 = ctx.r10.s64 + -15532;
	// addi r10,r11,-19592
	ctx.r10.s64 = ctx.r11.s64 + -19592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129830;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,2456
	ctx.r3.s64 = ctx.r8.s64 + 2456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31456
	ctx.r11.s64 = ctx.r9.s64 + 31456;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,26336
	ctx.r11.s64 = ctx.r10.s64 + 26336;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129860;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129878"))) PPC_WEAK_FUNC(sub_83129878);
PPC_FUNC_IMPL(__imp__sub_83129878) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,-31728
	ctx.r9.s64 = ctx.r10.s64 + -31728;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-22352
	ctx.r5.s64 = ctx.r10.s64 + -22352;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-22156
	ctx.r4.s64 = ctx.r10.s64 + -22156;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-16912
	ctx.r31.s64 = ctx.r10.s64 + -16912;
	// addi r10,r11,26744
	ctx.r10.s64 = ctx.r11.s64 + 26744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831298D0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,2536
	ctx.r3.s64 = ctx.r8.s64 + 2536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,26816
	ctx.r11.s64 = ctx.r9.s64 + 26816;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,26336
	ctx.r11.s64 = ctx.r10.s64 + 26336;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129900;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129918"))) PPC_WEAK_FUNC(sub_83129918);
PPC_FUNC_IMPL(__imp__sub_83129918) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,-31568
	ctx.r9.s64 = ctx.r10.s64 + -31568;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-31320
	ctx.r5.s64 = ctx.r10.s64 + -31320;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-22096
	ctx.r4.s64 = ctx.r10.s64 + -22096;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-16084
	ctx.r31.s64 = ctx.r10.s64 + -16084;
	// addi r10,r11,20344
	ctx.r10.s64 = ctx.r11.s64 + 20344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129970;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,3976
	ctx.r3.s64 = ctx.r8.s64 + 3976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,14872
	ctx.r11.s64 = ctx.r9.s64 + 14872;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18744
	ctx.r11.s64 = ctx.r10.s64 + 18744;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831299A0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_831299B8"))) PPC_WEAK_FUNC(sub_831299B8);
PPC_FUNC_IMPL(__imp__sub_831299B8) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,-31480
	ctx.r9.s64 = ctx.r10.s64 + -31480;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,8708
	ctx.r6.s64 = ctx.r10.s64 + 8708;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-31220
	ctx.r5.s64 = ctx.r10.s64 + -31220;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-22052
	ctx.r4.s64 = ctx.r10.s64 + -22052;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-16176
	ctx.r31.s64 = ctx.r10.s64 + -16176;
	// addi r10,r11,27064
	ctx.r10.s64 = ctx.r11.s64 + 27064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129A10;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,2616
	ctx.r3.s64 = ctx.r8.s64 + 2616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,20536
	ctx.r11.s64 = ctx.r9.s64 + 20536;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-12952
	ctx.r11.s64 = ctx.r10.s64 + -12952;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129A40;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129A58"))) PPC_WEAK_FUNC(sub_83129A58);
PPC_FUNC_IMPL(__imp__sub_83129A58) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,-31480
	ctx.r9.s64 = ctx.r10.s64 + -31480;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-31220
	ctx.r5.s64 = ctx.r10.s64 + -31220;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-21984
	ctx.r4.s64 = ctx.r10.s64 + -21984;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-16544
	ctx.r31.s64 = ctx.r10.s64 + -16544;
	// addi r10,r11,27784
	ctx.r10.s64 = ctx.r11.s64 + 27784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129AB0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,2696
	ctx.r3.s64 = ctx.r8.s64 + 2696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,20624
	ctx.r11.s64 = ctx.r9.s64 + 20624;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129AE0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129AF8"))) PPC_WEAK_FUNC(sub_83129AF8);
PPC_FUNC_IMPL(__imp__sub_83129AF8) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,-31384
	ctx.r9.s64 = ctx.r10.s64 + -31384;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,8708
	ctx.r6.s64 = ctx.r10.s64 + 8708;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-31220
	ctx.r5.s64 = ctx.r10.s64 + -31220;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-21916
	ctx.r4.s64 = ctx.r10.s64 + -21916;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-15256
	ctx.r31.s64 = ctx.r10.s64 + -15256;
	// addi r10,r11,28504
	ctx.r10.s64 = ctx.r11.s64 + 28504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129B50;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,2776
	ctx.r3.s64 = ctx.r8.s64 + 2776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,20712
	ctx.r11.s64 = ctx.r9.s64 + 20712;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129B80;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129B98"))) PPC_WEAK_FUNC(sub_83129B98);
PPC_FUNC_IMPL(__imp__sub_83129B98) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,-31384
	ctx.r9.s64 = ctx.r10.s64 + -31384;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,8816
	ctx.r6.s64 = ctx.r10.s64 + 8816;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-31220
	ctx.r5.s64 = ctx.r10.s64 + -31220;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-21848
	ctx.r4.s64 = ctx.r10.s64 + -21848;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-16452
	ctx.r31.s64 = ctx.r10.s64 + -16452;
	// addi r10,r11,29224
	ctx.r10.s64 = ctx.r11.s64 + 29224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129BF0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,2856
	ctx.r3.s64 = ctx.r8.s64 + 2856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,20800
	ctx.r11.s64 = ctx.r9.s64 + 20800;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129C20;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129C38"))) PPC_WEAK_FUNC(sub_83129C38);
PPC_FUNC_IMPL(__imp__sub_83129C38) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,-31384
	ctx.r9.s64 = ctx.r10.s64 + -31384;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-31220
	ctx.r5.s64 = ctx.r10.s64 + -31220;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-21776
	ctx.r4.s64 = ctx.r10.s64 + -21776;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-15348
	ctx.r31.s64 = ctx.r10.s64 + -15348;
	// addi r10,r11,29944
	ctx.r10.s64 = ctx.r11.s64 + 29944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129C90;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,2936
	ctx.r3.s64 = ctx.r8.s64 + 2936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,20888
	ctx.r11.s64 = ctx.r9.s64 + 20888;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129CC0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129CD8"))) PPC_WEAK_FUNC(sub_83129CD8);
PPC_FUNC_IMPL(__imp__sub_83129CD8) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r9,r10,-29424
	ctx.r9.s64 = ctx.r10.s64 + -29424;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,8708
	ctx.r6.s64 = ctx.r10.s64 + 8708;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-30800
	ctx.r5.s64 = ctx.r10.s64 + -30800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-21704
	ctx.r4.s64 = ctx.r10.s64 + -21704;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-15624
	ctx.r31.s64 = ctx.r10.s64 + -15624;
	// addi r10,r11,-31288
	ctx.r10.s64 = ctx.r11.s64 + -31288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129D30;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,3016
	ctx.r3.s64 = ctx.r8.s64 + 3016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,30664
	ctx.r11.s64 = ctx.r9.s64 + 30664;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129D60;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129D78"))) PPC_WEAK_FUNC(sub_83129D78);
PPC_FUNC_IMPL(__imp__sub_83129D78) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r9,r10,-29328
	ctx.r9.s64 = ctx.r10.s64 + -29328;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,8708
	ctx.r6.s64 = ctx.r10.s64 + 8708;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-30800
	ctx.r5.s64 = ctx.r10.s64 + -30800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-21632
	ctx.r4.s64 = ctx.r10.s64 + -21632;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-16820
	ctx.r31.s64 = ctx.r10.s64 + -16820;
	// addi r10,r11,-31160
	ctx.r10.s64 = ctx.r11.s64 + -31160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129DD0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,3096
	ctx.r3.s64 = ctx.r8.s64 + 3096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,30752
	ctx.r11.s64 = ctx.r9.s64 + 30752;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129E00;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129E18"))) PPC_WEAK_FUNC(sub_83129E18);
PPC_FUNC_IMPL(__imp__sub_83129E18) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r9,r10,-29232
	ctx.r9.s64 = ctx.r10.s64 + -29232;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,8708
	ctx.r6.s64 = ctx.r10.s64 + 8708;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-30800
	ctx.r5.s64 = ctx.r10.s64 + -30800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-21552
	ctx.r4.s64 = ctx.r10.s64 + -21552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-16728
	ctx.r31.s64 = ctx.r10.s64 + -16728;
	// addi r10,r11,-31032
	ctx.r10.s64 = ctx.r11.s64 + -31032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129E70;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,3176
	ctx.r3.s64 = ctx.r8.s64 + 3176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,30840
	ctx.r11.s64 = ctx.r9.s64 + 30840;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129EA0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129EB8"))) PPC_WEAK_FUNC(sub_83129EB8);
PPC_FUNC_IMPL(__imp__sub_83129EB8) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r9,r10,-29424
	ctx.r9.s64 = ctx.r10.s64 + -29424;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,8816
	ctx.r6.s64 = ctx.r10.s64 + 8816;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-30800
	ctx.r5.s64 = ctx.r10.s64 + -30800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-21480
	ctx.r4.s64 = ctx.r10.s64 + -21480;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-16360
	ctx.r31.s64 = ctx.r10.s64 + -16360;
	// addi r10,r11,-30904
	ctx.r10.s64 = ctx.r11.s64 + -30904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129F10;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,3256
	ctx.r3.s64 = ctx.r8.s64 + 3256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,30928
	ctx.r11.s64 = ctx.r9.s64 + 30928;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129F40;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129F58"))) PPC_WEAK_FUNC(sub_83129F58);
PPC_FUNC_IMPL(__imp__sub_83129F58) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r9,r10,-29328
	ctx.r9.s64 = ctx.r10.s64 + -29328;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,8816
	ctx.r6.s64 = ctx.r10.s64 + 8816;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-30800
	ctx.r5.s64 = ctx.r10.s64 + -30800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-21400
	ctx.r4.s64 = ctx.r10.s64 + -21400;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-16268
	ctx.r31.s64 = ctx.r10.s64 + -16268;
	// addi r10,r11,-30776
	ctx.r10.s64 = ctx.r11.s64 + -30776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83129FB0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,3336
	ctx.r3.s64 = ctx.r8.s64 + 3336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31016
	ctx.r11.s64 = ctx.r9.s64 + 31016;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83129FE0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_83129FF8"))) PPC_WEAK_FUNC(sub_83129FF8);
PPC_FUNC_IMPL(__imp__sub_83129FF8) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r9,r10,-29232
	ctx.r9.s64 = ctx.r10.s64 + -29232;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,8816
	ctx.r6.s64 = ctx.r10.s64 + 8816;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-30800
	ctx.r5.s64 = ctx.r10.s64 + -30800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-21320
	ctx.r4.s64 = ctx.r10.s64 + -21320;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-15900
	ctx.r31.s64 = ctx.r10.s64 + -15900;
	// addi r10,r11,-30648
	ctx.r10.s64 = ctx.r11.s64 + -30648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312A050;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,3416
	ctx.r3.s64 = ctx.r8.s64 + 3416;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31104
	ctx.r11.s64 = ctx.r9.s64 + 31104;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312A080;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312A098"))) PPC_WEAK_FUNC(sub_8312A098);
PPC_FUNC_IMPL(__imp__sub_8312A098) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r9,r10,-29136
	ctx.r9.s64 = ctx.r10.s64 + -29136;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-30800
	ctx.r5.s64 = ctx.r10.s64 + -30800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-21240
	ctx.r4.s64 = ctx.r10.s64 + -21240;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-15164
	ctx.r31.s64 = ctx.r10.s64 + -15164;
	// addi r10,r11,-30520
	ctx.r10.s64 = ctx.r11.s64 + -30520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312A0F0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,3496
	ctx.r3.s64 = ctx.r8.s64 + 3496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31192
	ctx.r11.s64 = ctx.r9.s64 + 31192;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312A120;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312A138"))) PPC_WEAK_FUNC(sub_8312A138);
PPC_FUNC_IMPL(__imp__sub_8312A138) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r9,r10,-29040
	ctx.r9.s64 = ctx.r10.s64 + -29040;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-30800
	ctx.r5.s64 = ctx.r10.s64 + -30800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-21160
	ctx.r4.s64 = ctx.r10.s64 + -21160;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-15808
	ctx.r31.s64 = ctx.r10.s64 + -15808;
	// addi r10,r11,-30392
	ctx.r10.s64 = ctx.r11.s64 + -30392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312A190;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,3576
	ctx.r3.s64 = ctx.r8.s64 + 3576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31280
	ctx.r11.s64 = ctx.r9.s64 + 31280;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312A1C0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312A1D8"))) PPC_WEAK_FUNC(sub_8312A1D8);
PPC_FUNC_IMPL(__imp__sub_8312A1D8) {
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
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r9,r10,-28944
	ctx.r9.s64 = ctx.r10.s64 + -28944;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-30800
	ctx.r5.s64 = ctx.r10.s64 + -30800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-21080
	ctx.r4.s64 = ctx.r10.s64 + -21080;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-16636
	ctx.r31.s64 = ctx.r10.s64 + -16636;
	// addi r10,r11,-30264
	ctx.r10.s64 = ctx.r11.s64 + -30264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312A230;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,3656
	ctx.r3.s64 = ctx.r8.s64 + 3656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31368
	ctx.r11.s64 = ctx.r9.s64 + 31368;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312A260;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312A278"))) PPC_WEAK_FUNC(sub_8312A278);
PPC_FUNC_IMPL(__imp__sub_8312A278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,4056
	ctx.r3.s64 = ctx.r11.s64 + 4056;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A288"))) PPC_WEAK_FUNC(sub_8312A288);
PPC_FUNC_IMPL(__imp__sub_8312A288) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r31,r11,-5500
	ctx.r31.s64 = ctx.r11.s64 + -5500;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// addi r4,r11,25016
	ctx.r4.s64 = ctx.r11.s64 + 25016;
	// bl 0x823099b0
	ctx.lr = 0x8312A2B0;
	sub_823099B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,2184
	ctx.r3.s64 = ctx.r10.s64 + 2184;
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
	// bl 0x82e29708
	ctx.lr = 0x8312A2D4;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312A2E8"))) PPC_WEAK_FUNC(sub_8312A2E8);
PPC_FUNC_IMPL(__imp__sub_8312A2E8) {
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
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r5,r9,-20980
	ctx.r5.s64 = ctx.r9.s64 + -20980;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,7472
	ctx.r6.s64 = ctx.r11.s64 + 7472;
	// li r8,52
	ctx.r8.s64 = 52;
	// li r7,440
	ctx.r7.s64 = 440;
	// addi r4,r9,-21004
	ctx.r4.s64 = ctx.r9.s64 + -21004;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-17404
	ctx.r3.s64 = ctx.r9.s64 + -17404;
	// addi r10,r10,3008
	ctx.r10.s64 = ctx.r10.s64 + 3008;
	// addi r9,r11,-31472
	ctx.r9.s64 = ctx.r11.s64 + -31472;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x8312A348;
	sub_829707D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A358"))) PPC_WEAK_FUNC(sub_8312A358);
PPC_FUNC_IMPL(__imp__sub_8312A358) {
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
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r9,-20980
	ctx.r5.s64 = ctx.r9.s64 + -20980;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-32760
	ctx.r6.s64 = ctx.r11.s64 + -32760;
	// li r8,52
	ctx.r8.s64 = 52;
	// li r7,440
	ctx.r7.s64 = 440;
	// addi r4,r9,-20956
	ctx.r4.s64 = ctx.r9.s64 + -20956;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-17356
	ctx.r3.s64 = ctx.r9.s64 + -17356;
	// addi r10,r10,18192
	ctx.r10.s64 = ctx.r10.s64 + 18192;
	// addi r9,r11,-31352
	ctx.r9.s64 = ctx.r11.s64 + -31352;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x8312A3B8;
	sub_829707D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A3C8"))) PPC_WEAK_FUNC(sub_8312A3C8);
PPC_FUNC_IMPL(__imp__sub_8312A3C8) {
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
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r9,-20980
	ctx.r5.s64 = ctx.r9.s64 + -20980;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-32672
	ctx.r6.s64 = ctx.r11.s64 + -32672;
	// li r7,440
	ctx.r7.s64 = 440;
	// addi r4,r9,-20928
	ctx.r4.s64 = ctx.r9.s64 + -20928;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-17184
	ctx.r3.s64 = ctx.r9.s64 + -17184;
	// addi r10,r10,3008
	ctx.r10.s64 = ctx.r10.s64 + 3008;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,28016
	ctx.r9.s64 = ctx.r11.s64 + 28016;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x8312A424;
	sub_829707D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A438"))) PPC_WEAK_FUNC(sub_8312A438);
PPC_FUNC_IMPL(__imp__sub_8312A438) {
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
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r9,-20980
	ctx.r5.s64 = ctx.r9.s64 + -20980;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-32584
	ctx.r6.s64 = ctx.r11.s64 + -32584;
	// li r7,440
	ctx.r7.s64 = 440;
	// addi r4,r9,-20900
	ctx.r4.s64 = ctx.r9.s64 + -20900;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-17136
	ctx.r3.s64 = ctx.r9.s64 + -17136;
	// addi r10,r10,18296
	ctx.r10.s64 = ctx.r10.s64 + 18296;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,28136
	ctx.r9.s64 = ctx.r11.s64 + 28136;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x8312A494;
	sub_829707D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A4A8"))) PPC_WEAK_FUNC(sub_8312A4A8);
PPC_FUNC_IMPL(__imp__sub_8312A4A8) {
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
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r9,-20980
	ctx.r5.s64 = ctx.r9.s64 + -20980;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-32432
	ctx.r6.s64 = ctx.r11.s64 + -32432;
	// li r7,440
	ctx.r7.s64 = 440;
	// addi r4,r9,-20868
	ctx.r4.s64 = ctx.r9.s64 + -20868;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-17452
	ctx.r3.s64 = ctx.r9.s64 + -17452;
	// addi r10,r10,3008
	ctx.r10.s64 = ctx.r10.s64 + 3008;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,28792
	ctx.r9.s64 = ctx.r11.s64 + 28792;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x8312A504;
	sub_829707D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A518"))) PPC_WEAK_FUNC(sub_8312A518);
PPC_FUNC_IMPL(__imp__sub_8312A518) {
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
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r5,r9,-20980
	ctx.r5.s64 = ctx.r9.s64 + -20980;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-32280
	ctx.r6.s64 = ctx.r11.s64 + -32280;
	// li r7,440
	ctx.r7.s64 = 440;
	// addi r4,r9,-20836
	ctx.r4.s64 = ctx.r9.s64 + -20836;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-17056
	ctx.r3.s64 = ctx.r9.s64 + -17056;
	// addi r10,r10,18400
	ctx.r10.s64 = ctx.r10.s64 + 18400;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,28912
	ctx.r9.s64 = ctx.r11.s64 + 28912;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x8312A574;
	sub_829707D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A588"))) PPC_WEAK_FUNC(sub_8312A588);
PPC_FUNC_IMPL(__imp__sub_8312A588) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,30628
	ctx.r6.s64 = ctx.r10.s64 + 30628;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-20772
	ctx.r5.s64 = ctx.r10.s64 + -20772;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-20800
	ctx.r4.s64 = ctx.r10.s64 + -20800;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-17008
	ctx.r31.s64 = ctx.r10.s64 + -17008;
	// addi r10,r11,19048
	ctx.r10.s64 = ctx.r11.s64 + 19048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312A5E0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,3736
	ctx.r3.s64 = ctx.r8.s64 + 3736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-1576
	ctx.r11.s64 = ctx.r9.s64 + -1576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,3832
	ctx.r11.s64 = ctx.r10.s64 + 3832;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312A610;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312A628"))) PPC_WEAK_FUNC(sub_8312A628);
PPC_FUNC_IMPL(__imp__sub_8312A628) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,30672
	ctx.r6.s64 = ctx.r10.s64 + 30672;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-20772
	ctx.r5.s64 = ctx.r10.s64 + -20772;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-20748
	ctx.r4.s64 = ctx.r10.s64 + -20748;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-17308
	ctx.r31.s64 = ctx.r10.s64 + -17308;
	// addi r10,r11,26584
	ctx.r10.s64 = ctx.r11.s64 + 26584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312A680;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,3816
	ctx.r3.s64 = ctx.r8.s64 + 3816;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,26656
	ctx.r11.s64 = ctx.r9.s64 + 26656;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,3832
	ctx.r11.s64 = ctx.r10.s64 + 3832;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312A6B0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312A6C8"))) PPC_WEAK_FUNC(sub_8312A6C8);
PPC_FUNC_IMPL(__imp__sub_8312A6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,-12720
	ctx.r11.s64 = ctx.r11.s64 + -12720;
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

__attribute__((alias("__imp__sub_8312A6F8"))) PPC_WEAK_FUNC(sub_8312A6F8);
PPC_FUNC_IMPL(__imp__sub_8312A6F8) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A728"))) PPC_WEAK_FUNC(sub_8312A728);
PPC_FUNC_IMPL(__imp__sub_8312A728) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-12512
	ctx.r11.s64 = ctx.r11.s64 + -12512;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A770"))) PPC_WEAK_FUNC(sub_8312A770);
PPC_FUNC_IMPL(__imp__sub_8312A770) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-12704
	ctx.r11.s64 = ctx.r11.s64 + -12704;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A7B8"))) PPC_WEAK_FUNC(sub_8312A7B8);
PPC_FUNC_IMPL(__imp__sub_8312A7B8) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r31,r11,-3928
	ctx.r31.s64 = ctx.r11.s64 + -3928;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82966af8
	ctx.lr = 0x8312A7E4;
	sub_82966AF8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// addi r11,r11,-5412
	ctx.r11.s64 = ctx.r11.s64 + -5412;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8258df60
	ctx.lr = 0x8312A7F8;
	sub_8258DF60(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,4352
	ctx.r3.s64 = ctx.r11.s64 + 4352;
	// bl 0x82e29708
	ctx.lr = 0x8312A804;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312A818"))) PPC_WEAK_FUNC(sub_8312A818);
PPC_FUNC_IMPL(__imp__sub_8312A818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// addi r11,r11,-3544
	ctx.r11.s64 = ctx.r11.s64 + -3544;
	// addi r3,r9,5120
	ctx.r3.s64 = ctx.r9.s64 + 5120;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A838"))) PPC_WEAK_FUNC(sub_8312A838);
PPC_FUNC_IMPL(__imp__sub_8312A838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// addi r11,r11,-14208
	ctx.r11.s64 = ctx.r11.s64 + -14208;
	// addi r3,r9,4176
	ctx.r3.s64 = ctx.r9.s64 + 4176;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// clrlwi r10,r10,9
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFF;
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A860"))) PPC_WEAK_FUNC(sub_8312A860);
PPC_FUNC_IMPL(__imp__sub_8312A860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,-13680
	ctx.r11.s64 = ctx.r11.s64 + -13680;
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// addi r10,r10,-13552
	ctx.r10.s64 = ctx.r10.s64 + -13552;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r3,r9,4184
	ctx.r3.s64 = ctx.r9.s64 + 4184;
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
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A8B0"))) PPC_WEAK_FUNC(sub_8312A8B0);
PPC_FUNC_IMPL(__imp__sub_8312A8B0) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r31,r11,-3520
	ctx.r31.s64 = ctx.r11.s64 + -3520;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82966af8
	ctx.lr = 0x8312A8DC;
	sub_82966AF8(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// addi r11,r11,-5412
	ctx.r11.s64 = ctx.r11.s64 + -5412;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8258df60
	ctx.lr = 0x8312A8F0;
	sub_8258DF60(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,4456
	ctx.r3.s64 = ctx.r11.s64 + 4456;
	// bl 0x82e29708
	ctx.lr = 0x8312A8FC;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312A910"))) PPC_WEAK_FUNC(sub_8312A910);
PPC_FUNC_IMPL(__imp__sub_8312A910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// addi r11,r11,-3136
	ctx.r11.s64 = ctx.r11.s64 + -3136;
	// addi r3,r9,5136
	ctx.r3.s64 = ctx.r9.s64 + 5136;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A930"))) PPC_WEAK_FUNC(sub_8312A930);
PPC_FUNC_IMPL(__imp__sub_8312A930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// addi r11,r11,-13936
	ctx.r11.s64 = ctx.r11.s64 + -13936;
	// addi r3,r9,4192
	ctx.r3.s64 = ctx.r9.s64 + 4192;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// clrlwi r10,r10,9
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFF;
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A958"))) PPC_WEAK_FUNC(sub_8312A958);
PPC_FUNC_IMPL(__imp__sub_8312A958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,-13680
	ctx.r11.s64 = ctx.r11.s64 + -13680;
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// addi r10,r10,-12864
	ctx.r10.s64 = ctx.r10.s64 + -12864;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r3,r9,4200
	ctx.r3.s64 = ctx.r9.s64 + 4200;
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
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312A9A8"))) PPC_WEAK_FUNC(sub_8312A9A8);
PPC_FUNC_IMPL(__imp__sub_8312A9A8) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-10488
	ctx.r5.s64 = ctx.r10.s64 + -10488;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-10524
	ctx.r4.s64 = ctx.r10.s64 + -10524;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-13396
	ctx.r31.s64 = ctx.r10.s64 + -13396;
	// addi r10,r11,9344
	ctx.r10.s64 = ctx.r11.s64 + 9344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312AA00;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,14384
	ctx.r3.s64 = ctx.r8.s64 + 14384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27816
	ctx.r11.s64 = ctx.r9.s64 + -27816;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14248
	ctx.r11.s64 = ctx.r10.s64 + 14248;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312AA30;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312AA48"))) PPC_WEAK_FUNC(sub_8312AA48);
PPC_FUNC_IMPL(__imp__sub_8312AA48) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10416
	ctx.r5.s64 = ctx.r10.s64 + -10416;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-10452
	ctx.r4.s64 = ctx.r10.s64 + -10452;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-12672
	ctx.r31.s64 = ctx.r10.s64 + -12672;
	// addi r10,r11,-22416
	ctx.r10.s64 = ctx.r11.s64 + -22416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312AAA0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,5184
	ctx.r3.s64 = ctx.r8.s64 + 5184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18720
	ctx.r11.s64 = ctx.r9.s64 + 18720;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312AAD0;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312AAE8"))) PPC_WEAK_FUNC(sub_8312AAE8);
PPC_FUNC_IMPL(__imp__sub_8312AAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-12772
	ctx.r3.s64 = ctx.r11.s64 + -12772;
	// bl 0x82616000
	ctx.lr = 0x8312AB00;
	sub_82616000(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,4208
	ctx.r3.s64 = ctx.r11.s64 + 4208;
	// bl 0x82e29708
	ctx.lr = 0x8312AB0C;
	sub_82E29708(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312AB20"))) PPC_WEAK_FUNC(sub_8312AB20);
PPC_FUNC_IMPL(__imp__sub_8312AB20) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10264
	ctx.r6.s64 = ctx.r10.s64 + -10264;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-10376
	ctx.r4.s64 = ctx.r10.s64 + -10376;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-8500
	ctx.r31.s64 = ctx.r10.s64 + -8500;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312AB78;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,14464
	ctx.r3.s64 = ctx.r8.s64 + 14464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28816
	ctx.r11.s64 = ctx.r10.s64 + 28816;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312ABA8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312ABC0"))) PPC_WEAK_FUNC(sub_8312ABC0);
PPC_FUNC_IMPL(__imp__sub_8312ABC0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10160
	ctx.r6.s64 = ctx.r10.s64 + -10160;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-10248
	ctx.r4.s64 = ctx.r10.s64 + -10248;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-11076
	ctx.r31.s64 = ctx.r10.s64 + -11076;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312AC18;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,5264
	ctx.r3.s64 = ctx.r8.s64 + 5264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28664
	ctx.r11.s64 = ctx.r10.s64 + 28664;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312AC48;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312AC60"))) PPC_WEAK_FUNC(sub_8312AC60);
PPC_FUNC_IMPL(__imp__sub_8312AC60) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10048
	ctx.r6.s64 = ctx.r10.s64 + -10048;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-10144
	ctx.r4.s64 = ctx.r10.s64 + -10144;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-11352
	ctx.r31.s64 = ctx.r10.s64 + -11352;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312ACB8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,5344
	ctx.r3.s64 = ctx.r8.s64 + 5344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28664
	ctx.r11.s64 = ctx.r10.s64 + 28664;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312ACE8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312AD00"))) PPC_WEAK_FUNC(sub_8312AD00);
PPC_FUNC_IMPL(__imp__sub_8312AD00) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-9928
	ctx.r6.s64 = ctx.r10.s64 + -9928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-10024
	ctx.r4.s64 = ctx.r10.s64 + -10024;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-2888
	ctx.r31.s64 = ctx.r10.s64 + -2888;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312AD58;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,5424
	ctx.r3.s64 = ctx.r8.s64 + 5424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28664
	ctx.r11.s64 = ctx.r10.s64 + 28664;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312AD88;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312ADA0"))) PPC_WEAK_FUNC(sub_8312ADA0);
PPC_FUNC_IMPL(__imp__sub_8312ADA0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-9816
	ctx.r6.s64 = ctx.r10.s64 + -9816;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-9904
	ctx.r4.s64 = ctx.r10.s64 + -9904;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-7212
	ctx.r31.s64 = ctx.r10.s64 + -7212;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312ADF8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,5504
	ctx.r3.s64 = ctx.r8.s64 + 5504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28664
	ctx.r11.s64 = ctx.r10.s64 + 28664;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312AE28;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312AE40"))) PPC_WEAK_FUNC(sub_8312AE40);
PPC_FUNC_IMPL(__imp__sub_8312AE40) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,-19960
	ctx.r9.s64 = ctx.r10.s64 + -19960;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-9724
	ctx.r5.s64 = ctx.r10.s64 + -9724;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-9792
	ctx.r4.s64 = ctx.r10.s64 + -9792;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-10800
	ctx.r31.s64 = ctx.r10.s64 + -10800;
	// addi r10,r11,-19736
	ctx.r10.s64 = ctx.r11.s64 + -19736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312AE98;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,5584
	ctx.r3.s64 = ctx.r8.s64 + 5584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19576
	ctx.r11.s64 = ctx.r9.s64 + -19576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28816
	ctx.r11.s64 = ctx.r10.s64 + 28816;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312AEC8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312AEE0"))) PPC_WEAK_FUNC(sub_8312AEE0);
PPC_FUNC_IMPL(__imp__sub_8312AEE0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-9696
	ctx.r4.s64 = ctx.r10.s64 + -9696;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-5556
	ctx.r31.s64 = ctx.r10.s64 + -5556;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312AF38;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,5664
	ctx.r3.s64 = ctx.r8.s64 + 5664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29120
	ctx.r11.s64 = ctx.r10.s64 + 29120;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312AF68;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312AF80"))) PPC_WEAK_FUNC(sub_8312AF80);
PPC_FUNC_IMPL(__imp__sub_8312AF80) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-9608
	ctx.r4.s64 = ctx.r10.s64 + -9608;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-5464
	ctx.r31.s64 = ctx.r10.s64 + -5464;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312AFD8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,5744
	ctx.r3.s64 = ctx.r8.s64 + 5744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28944
	ctx.r11.s64 = ctx.r10.s64 + 28944;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B008;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B020"))) PPC_WEAK_FUNC(sub_8312B020);
PPC_FUNC_IMPL(__imp__sub_8312B020) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-9512
	ctx.r4.s64 = ctx.r10.s64 + -9512;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-2612
	ctx.r31.s64 = ctx.r10.s64 + -2612;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B078;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,5824
	ctx.r3.s64 = ctx.r8.s64 + 5824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28944
	ctx.r11.s64 = ctx.r10.s64 + 28944;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B0A8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B0C0"))) PPC_WEAK_FUNC(sub_8312B0C0);
PPC_FUNC_IMPL(__imp__sub_8312B0C0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-9408
	ctx.r4.s64 = ctx.r10.s64 + -9408;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-6384
	ctx.r31.s64 = ctx.r10.s64 + -6384;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B118;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,5904
	ctx.r3.s64 = ctx.r8.s64 + 5904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28944
	ctx.r11.s64 = ctx.r10.s64 + 28944;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B148;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B160"))) PPC_WEAK_FUNC(sub_8312B160);
PPC_FUNC_IMPL(__imp__sub_8312B160) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-9304
	ctx.r4.s64 = ctx.r10.s64 + -9304;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-8592
	ctx.r31.s64 = ctx.r10.s64 + -8592;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B1B8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,5984
	ctx.r3.s64 = ctx.r8.s64 + 5984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28944
	ctx.r11.s64 = ctx.r10.s64 + 28944;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B1E8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B200"))) PPC_WEAK_FUNC(sub_8312B200);
PPC_FUNC_IMPL(__imp__sub_8312B200) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,704
	ctx.r9.s64 = ctx.r10.s64 + 704;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-9208
	ctx.r4.s64 = ctx.r10.s64 + -9208;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-5832
	ctx.r31.s64 = ctx.r10.s64 + -5832;
	// addi r10,r11,-19736
	ctx.r10.s64 = ctx.r11.s64 + -19736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B258;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,6064
	ctx.r3.s64 = ctx.r8.s64 + 6064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19576
	ctx.r11.s64 = ctx.r9.s64 + -19576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29120
	ctx.r11.s64 = ctx.r10.s64 + 29120;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B288;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B2A0"))) PPC_WEAK_FUNC(sub_8312B2A0);
PPC_FUNC_IMPL(__imp__sub_8312B2A0) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-9136
	ctx.r4.s64 = ctx.r10.s64 + -9136;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-2428
	ctx.r31.s64 = ctx.r10.s64 + -2428;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B2F8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,6144
	ctx.r3.s64 = ctx.r8.s64 + 6144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29120
	ctx.r11.s64 = ctx.r10.s64 + 29120;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B328;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B340"))) PPC_WEAK_FUNC(sub_8312B340);
PPC_FUNC_IMPL(__imp__sub_8312B340) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-9048
	ctx.r4.s64 = ctx.r10.s64 + -9048;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-9604
	ctx.r31.s64 = ctx.r10.s64 + -9604;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B398;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,6224
	ctx.r3.s64 = ctx.r8.s64 + 6224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28944
	ctx.r11.s64 = ctx.r10.s64 + 28944;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B3C8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B3E0"))) PPC_WEAK_FUNC(sub_8312B3E0);
PPC_FUNC_IMPL(__imp__sub_8312B3E0) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-8952
	ctx.r4.s64 = ctx.r10.s64 + -8952;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-4820
	ctx.r31.s64 = ctx.r10.s64 + -4820;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B438;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,6304
	ctx.r3.s64 = ctx.r8.s64 + 6304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28944
	ctx.r11.s64 = ctx.r10.s64 + 28944;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B468;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B480"))) PPC_WEAK_FUNC(sub_8312B480);
PPC_FUNC_IMPL(__imp__sub_8312B480) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-8848
	ctx.r4.s64 = ctx.r10.s64 + -8848;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-6660
	ctx.r31.s64 = ctx.r10.s64 + -6660;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B4D8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,6384
	ctx.r3.s64 = ctx.r8.s64 + 6384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28944
	ctx.r11.s64 = ctx.r10.s64 + 28944;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B508;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B520"))) PPC_WEAK_FUNC(sub_8312B520);
PPC_FUNC_IMPL(__imp__sub_8312B520) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-8744
	ctx.r4.s64 = ctx.r10.s64 + -8744;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-3716
	ctx.r31.s64 = ctx.r10.s64 + -3716;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B578;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,6464
	ctx.r3.s64 = ctx.r8.s64 + 6464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,28944
	ctx.r11.s64 = ctx.r10.s64 + 28944;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B5A8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B5C0"))) PPC_WEAK_FUNC(sub_8312B5C0);
PPC_FUNC_IMPL(__imp__sub_8312B5C0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,976
	ctx.r9.s64 = ctx.r10.s64 + 976;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-8648
	ctx.r4.s64 = ctx.r10.s64 + -8648;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-11168
	ctx.r31.s64 = ctx.r10.s64 + -11168;
	// addi r10,r11,-19488
	ctx.r10.s64 = ctx.r11.s64 + -19488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B618;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,6544
	ctx.r3.s64 = ctx.r8.s64 + 6544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19664
	ctx.r11.s64 = ctx.r9.s64 + -19664;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29120
	ctx.r11.s64 = ctx.r10.s64 + 29120;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B648;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B660"))) PPC_WEAK_FUNC(sub_8312B660);
PPC_FUNC_IMPL(__imp__sub_8312B660) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10264
	ctx.r6.s64 = ctx.r10.s64 + -10264;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-8576
	ctx.r4.s64 = ctx.r10.s64 + -8576;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-4728
	ctx.r31.s64 = ctx.r10.s64 + -4728;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B6B8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,6624
	ctx.r3.s64 = ctx.r8.s64 + 6624;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29432
	ctx.r11.s64 = ctx.r10.s64 + 29432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B6E8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B700"))) PPC_WEAK_FUNC(sub_8312B700);
PPC_FUNC_IMPL(__imp__sub_8312B700) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10160
	ctx.r6.s64 = ctx.r10.s64 + -10160;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-8488
	ctx.r4.s64 = ctx.r10.s64 + -8488;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-4912
	ctx.r31.s64 = ctx.r10.s64 + -4912;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B758;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,6704
	ctx.r3.s64 = ctx.r8.s64 + 6704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29272
	ctx.r11.s64 = ctx.r10.s64 + 29272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B788;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B7A0"))) PPC_WEAK_FUNC(sub_8312B7A0);
PPC_FUNC_IMPL(__imp__sub_8312B7A0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10048
	ctx.r6.s64 = ctx.r10.s64 + -10048;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-8392
	ctx.r4.s64 = ctx.r10.s64 + -8392;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-9420
	ctx.r31.s64 = ctx.r10.s64 + -9420;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B7F8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,6784
	ctx.r3.s64 = ctx.r8.s64 + 6784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29272
	ctx.r11.s64 = ctx.r10.s64 + 29272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B828;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B840"))) PPC_WEAK_FUNC(sub_8312B840);
PPC_FUNC_IMPL(__imp__sub_8312B840) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-9928
	ctx.r6.s64 = ctx.r10.s64 + -9928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-8288
	ctx.r4.s64 = ctx.r10.s64 + -8288;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-8224
	ctx.r31.s64 = ctx.r10.s64 + -8224;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B898;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,6864
	ctx.r3.s64 = ctx.r8.s64 + 6864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29272
	ctx.r11.s64 = ctx.r10.s64 + 29272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B8C8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B8E0"))) PPC_WEAK_FUNC(sub_8312B8E0);
PPC_FUNC_IMPL(__imp__sub_8312B8E0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-9816
	ctx.r6.s64 = ctx.r10.s64 + -9816;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-8184
	ctx.r4.s64 = ctx.r10.s64 + -8184;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-8316
	ctx.r31.s64 = ctx.r10.s64 + -8316;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B938;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,6944
	ctx.r3.s64 = ctx.r8.s64 + 6944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29272
	ctx.r11.s64 = ctx.r10.s64 + 29272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312B968;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312B980"))) PPC_WEAK_FUNC(sub_8312B980);
PPC_FUNC_IMPL(__imp__sub_8312B980) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,-20336
	ctx.r9.s64 = ctx.r10.s64 + -20336;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-9724
	ctx.r5.s64 = ctx.r10.s64 + -9724;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-8088
	ctx.r4.s64 = ctx.r10.s64 + -8088;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-8040
	ctx.r31.s64 = ctx.r10.s64 + -8040;
	// addi r10,r11,-19736
	ctx.r10.s64 = ctx.r11.s64 + -19736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312B9D8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,7024
	ctx.r3.s64 = ctx.r8.s64 + 7024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19576
	ctx.r11.s64 = ctx.r9.s64 + -19576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29432
	ctx.r11.s64 = ctx.r10.s64 + 29432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312BA08;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312BA20"))) PPC_WEAK_FUNC(sub_8312BA20);
PPC_FUNC_IMPL(__imp__sub_8312BA20) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-8016
	ctx.r4.s64 = ctx.r10.s64 + -8016;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-1876
	ctx.r31.s64 = ctx.r10.s64 + -1876;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312BA78;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,7104
	ctx.r3.s64 = ctx.r8.s64 + 7104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29752
	ctx.r11.s64 = ctx.r10.s64 + 29752;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312BAA8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312BAC0"))) PPC_WEAK_FUNC(sub_8312BAC0);
PPC_FUNC_IMPL(__imp__sub_8312BAC0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-7920
	ctx.r4.s64 = ctx.r10.s64 + -7920;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-2520
	ctx.r31.s64 = ctx.r10.s64 + -2520;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312BB18;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,7184
	ctx.r3.s64 = ctx.r8.s64 + 7184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29568
	ctx.r11.s64 = ctx.r10.s64 + 29568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312BB48;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312BB60"))) PPC_WEAK_FUNC(sub_8312BB60);
PPC_FUNC_IMPL(__imp__sub_8312BB60) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-7816
	ctx.r4.s64 = ctx.r10.s64 + -7816;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-4636
	ctx.r31.s64 = ctx.r10.s64 + -4636;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312BBB8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,7264
	ctx.r3.s64 = ctx.r8.s64 + 7264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29568
	ctx.r11.s64 = ctx.r10.s64 + 29568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312BBE8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312BC00"))) PPC_WEAK_FUNC(sub_8312BC00);
PPC_FUNC_IMPL(__imp__sub_8312BC00) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-7712
	ctx.r4.s64 = ctx.r10.s64 + -7712;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-11260
	ctx.r31.s64 = ctx.r10.s64 + -11260;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312BC58;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,7344
	ctx.r3.s64 = ctx.r8.s64 + 7344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29568
	ctx.r11.s64 = ctx.r10.s64 + 29568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312BC88;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312BCA0"))) PPC_WEAK_FUNC(sub_8312BCA0);
PPC_FUNC_IMPL(__imp__sub_8312BCA0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-7600
	ctx.r4.s64 = ctx.r10.s64 + -7600;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-1324
	ctx.r31.s64 = ctx.r10.s64 + -1324;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312BCF8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,7424
	ctx.r3.s64 = ctx.r8.s64 + 7424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29568
	ctx.r11.s64 = ctx.r10.s64 + 29568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312BD28;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312BD40"))) PPC_WEAK_FUNC(sub_8312BD40);
PPC_FUNC_IMPL(__imp__sub_8312BD40) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,160
	ctx.r9.s64 = ctx.r10.s64 + 160;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-7504
	ctx.r4.s64 = ctx.r10.s64 + -7504;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-6476
	ctx.r31.s64 = ctx.r10.s64 + -6476;
	// addi r10,r11,-19736
	ctx.r10.s64 = ctx.r11.s64 + -19736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312BD98;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,7504
	ctx.r3.s64 = ctx.r8.s64 + 7504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19576
	ctx.r11.s64 = ctx.r9.s64 + -19576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29752
	ctx.r11.s64 = ctx.r10.s64 + 29752;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312BDC8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312BDE0"))) PPC_WEAK_FUNC(sub_8312BDE0);
PPC_FUNC_IMPL(__imp__sub_8312BDE0) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-7424
	ctx.r4.s64 = ctx.r10.s64 + -7424;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-8684
	ctx.r31.s64 = ctx.r10.s64 + -8684;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312BE38;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,7584
	ctx.r3.s64 = ctx.r8.s64 + 7584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29752
	ctx.r11.s64 = ctx.r10.s64 + 29752;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312BE68;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312BE80"))) PPC_WEAK_FUNC(sub_8312BE80);
PPC_FUNC_IMPL(__imp__sub_8312BE80) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-7328
	ctx.r4.s64 = ctx.r10.s64 + -7328;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-9696
	ctx.r31.s64 = ctx.r10.s64 + -9696;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312BED8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,7664
	ctx.r3.s64 = ctx.r8.s64 + 7664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29568
	ctx.r11.s64 = ctx.r10.s64 + 29568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312BF08;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312BF20"))) PPC_WEAK_FUNC(sub_8312BF20);
PPC_FUNC_IMPL(__imp__sub_8312BF20) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-7224
	ctx.r4.s64 = ctx.r10.s64 + -7224;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-6016
	ctx.r31.s64 = ctx.r10.s64 + -6016;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312BF78;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,7744
	ctx.r3.s64 = ctx.r8.s64 + 7744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29568
	ctx.r11.s64 = ctx.r10.s64 + 29568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312BFA8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312BFC0"))) PPC_WEAK_FUNC(sub_8312BFC0);
PPC_FUNC_IMPL(__imp__sub_8312BFC0) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-7112
	ctx.r4.s64 = ctx.r10.s64 + -7112;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-10064
	ctx.r31.s64 = ctx.r10.s64 + -10064;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C018;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,7824
	ctx.r3.s64 = ctx.r8.s64 + 7824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29568
	ctx.r11.s64 = ctx.r10.s64 + 29568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C048;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C060"))) PPC_WEAK_FUNC(sub_8312C060);
PPC_FUNC_IMPL(__imp__sub_8312C060) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-7000
	ctx.r4.s64 = ctx.r10.s64 + -7000;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-7304
	ctx.r31.s64 = ctx.r10.s64 + -7304;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C0B8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,7904
	ctx.r3.s64 = ctx.r8.s64 + 7904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29568
	ctx.r11.s64 = ctx.r10.s64 + 29568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C0E8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C100"))) PPC_WEAK_FUNC(sub_8312C100);
PPC_FUNC_IMPL(__imp__sub_8312C100) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,432
	ctx.r9.s64 = ctx.r10.s64 + 432;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-6896
	ctx.r4.s64 = ctx.r10.s64 + -6896;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-10248
	ctx.r31.s64 = ctx.r10.s64 + -10248;
	// addi r10,r11,-19488
	ctx.r10.s64 = ctx.r11.s64 + -19488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C158;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,7984
	ctx.r3.s64 = ctx.r8.s64 + 7984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19664
	ctx.r11.s64 = ctx.r9.s64 + -19664;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29752
	ctx.r11.s64 = ctx.r10.s64 + 29752;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C188;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C1A0"))) PPC_WEAK_FUNC(sub_8312C1A0);
PPC_FUNC_IMPL(__imp__sub_8312C1A0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10264
	ctx.r6.s64 = ctx.r10.s64 + -10264;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-6816
	ctx.r4.s64 = ctx.r10.s64 + -6816;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-9972
	ctx.r31.s64 = ctx.r10.s64 + -9972;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C1F8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,8064
	ctx.r3.s64 = ctx.r8.s64 + 8064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30064
	ctx.r11.s64 = ctx.r10.s64 + 30064;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C228;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C240"))) PPC_WEAK_FUNC(sub_8312C240);
PPC_FUNC_IMPL(__imp__sub_8312C240) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10160
	ctx.r6.s64 = ctx.r10.s64 + -10160;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-6736
	ctx.r4.s64 = ctx.r10.s64 + -6736;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-3900
	ctx.r31.s64 = ctx.r10.s64 + -3900;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C298;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,8144
	ctx.r3.s64 = ctx.r8.s64 + 8144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29912
	ctx.r11.s64 = ctx.r10.s64 + 29912;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C2C8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C2E0"))) PPC_WEAK_FUNC(sub_8312C2E0);
PPC_FUNC_IMPL(__imp__sub_8312C2E0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10048
	ctx.r6.s64 = ctx.r10.s64 + -10048;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-6648
	ctx.r4.s64 = ctx.r10.s64 + -6648;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-4360
	ctx.r31.s64 = ctx.r10.s64 + -4360;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C338;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,8224
	ctx.r3.s64 = ctx.r8.s64 + 8224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29912
	ctx.r11.s64 = ctx.r10.s64 + 29912;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C368;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C380"))) PPC_WEAK_FUNC(sub_8312C380);
PPC_FUNC_IMPL(__imp__sub_8312C380) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-9928
	ctx.r6.s64 = ctx.r10.s64 + -9928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-6552
	ctx.r4.s64 = ctx.r10.s64 + -6552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-9880
	ctx.r31.s64 = ctx.r10.s64 + -9880;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C3D8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,8304
	ctx.r3.s64 = ctx.r8.s64 + 8304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29912
	ctx.r11.s64 = ctx.r10.s64 + 29912;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C408;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C420"))) PPC_WEAK_FUNC(sub_8312C420);
PPC_FUNC_IMPL(__imp__sub_8312C420) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-9816
	ctx.r6.s64 = ctx.r10.s64 + -9816;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-6456
	ctx.r4.s64 = ctx.r10.s64 + -6456;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-6752
	ctx.r31.s64 = ctx.r10.s64 + -6752;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C478;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,8384
	ctx.r3.s64 = ctx.r8.s64 + 8384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,29912
	ctx.r11.s64 = ctx.r10.s64 + 29912;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C4A8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C4C0"))) PPC_WEAK_FUNC(sub_8312C4C0);
PPC_FUNC_IMPL(__imp__sub_8312C4C0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,-19960
	ctx.r9.s64 = ctx.r10.s64 + -19960;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-9724
	ctx.r5.s64 = ctx.r10.s64 + -9724;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-6372
	ctx.r4.s64 = ctx.r10.s64 + -6372;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-2704
	ctx.r31.s64 = ctx.r10.s64 + -2704;
	// addi r10,r11,-19736
	ctx.r10.s64 = ctx.r11.s64 + -19736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C518;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,8464
	ctx.r3.s64 = ctx.r8.s64 + 8464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19576
	ctx.r11.s64 = ctx.r9.s64 + -19576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30064
	ctx.r11.s64 = ctx.r10.s64 + 30064;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C548;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C560"))) PPC_WEAK_FUNC(sub_8312C560);
PPC_FUNC_IMPL(__imp__sub_8312C560) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-6304
	ctx.r4.s64 = ctx.r10.s64 + -6304;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-10892
	ctx.r31.s64 = ctx.r10.s64 + -10892;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C5B8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,8544
	ctx.r3.s64 = ctx.r8.s64 + 8544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30368
	ctx.r11.s64 = ctx.r10.s64 + 30368;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C5E8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C600"))) PPC_WEAK_FUNC(sub_8312C600);
PPC_FUNC_IMPL(__imp__sub_8312C600) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-6216
	ctx.r4.s64 = ctx.r10.s64 + -6216;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-3164
	ctx.r31.s64 = ctx.r10.s64 + -3164;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C658;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,8624
	ctx.r3.s64 = ctx.r8.s64 + 8624;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30192
	ctx.r11.s64 = ctx.r10.s64 + 30192;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C688;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C6A0"))) PPC_WEAK_FUNC(sub_8312C6A0);
PPC_FUNC_IMPL(__imp__sub_8312C6A0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-6120
	ctx.r4.s64 = ctx.r10.s64 + -6120;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-5372
	ctx.r31.s64 = ctx.r10.s64 + -5372;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C6F8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,8704
	ctx.r3.s64 = ctx.r8.s64 + 8704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30192
	ctx.r11.s64 = ctx.r10.s64 + 30192;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C728;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C740"))) PPC_WEAK_FUNC(sub_8312C740);
PPC_FUNC_IMPL(__imp__sub_8312C740) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-6024
	ctx.r4.s64 = ctx.r10.s64 + -6024;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-7028
	ctx.r31.s64 = ctx.r10.s64 + -7028;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C798;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,8784
	ctx.r3.s64 = ctx.r8.s64 + 8784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30192
	ctx.r11.s64 = ctx.r10.s64 + 30192;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C7C8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C7E0"))) PPC_WEAK_FUNC(sub_8312C7E0);
PPC_FUNC_IMPL(__imp__sub_8312C7E0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-5928
	ctx.r4.s64 = ctx.r10.s64 + -5928;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-5004
	ctx.r31.s64 = ctx.r10.s64 + -5004;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C838;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,8864
	ctx.r3.s64 = ctx.r8.s64 + 8864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30192
	ctx.r11.s64 = ctx.r10.s64 + 30192;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C868;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C880"))) PPC_WEAK_FUNC(sub_8312C880);
PPC_FUNC_IMPL(__imp__sub_8312C880) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,704
	ctx.r9.s64 = ctx.r10.s64 + 704;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-5840
	ctx.r4.s64 = ctx.r10.s64 + -5840;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-2796
	ctx.r31.s64 = ctx.r10.s64 + -2796;
	// addi r10,r11,-19736
	ctx.r10.s64 = ctx.r11.s64 + -19736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C8D8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,8944
	ctx.r3.s64 = ctx.r8.s64 + 8944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19576
	ctx.r11.s64 = ctx.r9.s64 + -19576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30368
	ctx.r11.s64 = ctx.r10.s64 + 30368;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C908;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C920"))) PPC_WEAK_FUNC(sub_8312C920);
PPC_FUNC_IMPL(__imp__sub_8312C920) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-5768
	ctx.r4.s64 = ctx.r10.s64 + -5768;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-6200
	ctx.r31.s64 = ctx.r10.s64 + -6200;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312C978;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,9024
	ctx.r3.s64 = ctx.r8.s64 + 9024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30368
	ctx.r11.s64 = ctx.r10.s64 + 30368;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312C9A8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312C9C0"))) PPC_WEAK_FUNC(sub_8312C9C0);
PPC_FUNC_IMPL(__imp__sub_8312C9C0) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-5680
	ctx.r4.s64 = ctx.r10.s64 + -5680;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-4084
	ctx.r31.s64 = ctx.r10.s64 + -4084;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312CA18;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,9104
	ctx.r3.s64 = ctx.r8.s64 + 9104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30192
	ctx.r11.s64 = ctx.r10.s64 + 30192;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312CA48;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312CA60"))) PPC_WEAK_FUNC(sub_8312CA60);
PPC_FUNC_IMPL(__imp__sub_8312CA60) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-5584
	ctx.r4.s64 = ctx.r10.s64 + -5584;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-5648
	ctx.r31.s64 = ctx.r10.s64 + -5648;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312CAB8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,9184
	ctx.r3.s64 = ctx.r8.s64 + 9184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30192
	ctx.r11.s64 = ctx.r10.s64 + 30192;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312CAE8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312CB00"))) PPC_WEAK_FUNC(sub_8312CB00);
PPC_FUNC_IMPL(__imp__sub_8312CB00) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-5488
	ctx.r4.s64 = ctx.r10.s64 + -5488;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-2060
	ctx.r31.s64 = ctx.r10.s64 + -2060;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312CB58;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,9264
	ctx.r3.s64 = ctx.r8.s64 + 9264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30192
	ctx.r11.s64 = ctx.r10.s64 + 30192;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312CB88;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312CBA0"))) PPC_WEAK_FUNC(sub_8312CBA0);
PPC_FUNC_IMPL(__imp__sub_8312CBA0) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-5384
	ctx.r4.s64 = ctx.r10.s64 + -5384;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-7672
	ctx.r31.s64 = ctx.r10.s64 + -7672;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312CBF8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,9344
	ctx.r3.s64 = ctx.r8.s64 + 9344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30192
	ctx.r11.s64 = ctx.r10.s64 + 30192;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312CC28;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312CC40"))) PPC_WEAK_FUNC(sub_8312CC40);
PPC_FUNC_IMPL(__imp__sub_8312CC40) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,976
	ctx.r9.s64 = ctx.r10.s64 + 976;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-5296
	ctx.r4.s64 = ctx.r10.s64 + -5296;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-7856
	ctx.r31.s64 = ctx.r10.s64 + -7856;
	// addi r10,r11,-19488
	ctx.r10.s64 = ctx.r11.s64 + -19488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312CC98;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,9424
	ctx.r3.s64 = ctx.r8.s64 + 9424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19664
	ctx.r11.s64 = ctx.r9.s64 + -19664;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30368
	ctx.r11.s64 = ctx.r10.s64 + 30368;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312CCC8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312CCE0"))) PPC_WEAK_FUNC(sub_8312CCE0);
PPC_FUNC_IMPL(__imp__sub_8312CCE0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10264
	ctx.r6.s64 = ctx.r10.s64 + -10264;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-5224
	ctx.r4.s64 = ctx.r10.s64 + -5224;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-3624
	ctx.r31.s64 = ctx.r10.s64 + -3624;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312CD38;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,9504
	ctx.r3.s64 = ctx.r8.s64 + 9504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30680
	ctx.r11.s64 = ctx.r10.s64 + 30680;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312CD68;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312CD80"))) PPC_WEAK_FUNC(sub_8312CD80);
PPC_FUNC_IMPL(__imp__sub_8312CD80) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10160
	ctx.r6.s64 = ctx.r10.s64 + -10160;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-5136
	ctx.r4.s64 = ctx.r10.s64 + -5136;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-1692
	ctx.r31.s64 = ctx.r10.s64 + -1692;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312CDD8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,9584
	ctx.r3.s64 = ctx.r8.s64 + 9584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30520
	ctx.r11.s64 = ctx.r10.s64 + 30520;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312CE08;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312CE20"))) PPC_WEAK_FUNC(sub_8312CE20);
PPC_FUNC_IMPL(__imp__sub_8312CE20) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10048
	ctx.r6.s64 = ctx.r10.s64 + -10048;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-5040
	ctx.r4.s64 = ctx.r10.s64 + -5040;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-6292
	ctx.r31.s64 = ctx.r10.s64 + -6292;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312CE78;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,9664
	ctx.r3.s64 = ctx.r8.s64 + 9664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30520
	ctx.r11.s64 = ctx.r10.s64 + 30520;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312CEA8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312CEC0"))) PPC_WEAK_FUNC(sub_8312CEC0);
PPC_FUNC_IMPL(__imp__sub_8312CEC0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-9928
	ctx.r6.s64 = ctx.r10.s64 + -9928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-4936
	ctx.r4.s64 = ctx.r10.s64 + -4936;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-9144
	ctx.r31.s64 = ctx.r10.s64 + -9144;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312CF18;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,9744
	ctx.r3.s64 = ctx.r8.s64 + 9744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30520
	ctx.r11.s64 = ctx.r10.s64 + 30520;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312CF48;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312CF60"))) PPC_WEAK_FUNC(sub_8312CF60);
PPC_FUNC_IMPL(__imp__sub_8312CF60) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-9816
	ctx.r6.s64 = ctx.r10.s64 + -9816;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-4832
	ctx.r4.s64 = ctx.r10.s64 + -4832;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-2336
	ctx.r31.s64 = ctx.r10.s64 + -2336;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312CFB8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,9824
	ctx.r3.s64 = ctx.r8.s64 + 9824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30520
	ctx.r11.s64 = ctx.r10.s64 + 30520;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312CFE8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D000"))) PPC_WEAK_FUNC(sub_8312D000);
PPC_FUNC_IMPL(__imp__sub_8312D000) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,-20336
	ctx.r9.s64 = ctx.r10.s64 + -20336;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-9724
	ctx.r5.s64 = ctx.r10.s64 + -9724;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-4736
	ctx.r4.s64 = ctx.r10.s64 + -4736;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-6108
	ctx.r31.s64 = ctx.r10.s64 + -6108;
	// addi r10,r11,-19736
	ctx.r10.s64 = ctx.r11.s64 + -19736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D058;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,9904
	ctx.r3.s64 = ctx.r8.s64 + 9904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19576
	ctx.r11.s64 = ctx.r9.s64 + -19576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30680
	ctx.r11.s64 = ctx.r10.s64 + 30680;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D088;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D0A0"))) PPC_WEAK_FUNC(sub_8312D0A0);
PPC_FUNC_IMPL(__imp__sub_8312D0A0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-4664
	ctx.r4.s64 = ctx.r10.s64 + -4664;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-4268
	ctx.r31.s64 = ctx.r10.s64 + -4268;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D0F8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,9984
	ctx.r3.s64 = ctx.r8.s64 + 9984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30816
	ctx.r11.s64 = ctx.r10.s64 + 30816;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D128;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D140"))) PPC_WEAK_FUNC(sub_8312D140);
PPC_FUNC_IMPL(__imp__sub_8312D140) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-4568
	ctx.r4.s64 = ctx.r10.s64 + -4568;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-4176
	ctx.r31.s64 = ctx.r10.s64 + -4176;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D198;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,10064
	ctx.r3.s64 = ctx.r8.s64 + 10064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30976
	ctx.r11.s64 = ctx.r10.s64 + 30976;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D1C8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D1E0"))) PPC_WEAK_FUNC(sub_8312D1E0);
PPC_FUNC_IMPL(__imp__sub_8312D1E0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-4472
	ctx.r4.s64 = ctx.r10.s64 + -4472;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-1784
	ctx.r31.s64 = ctx.r10.s64 + -1784;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D238;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,10144
	ctx.r3.s64 = ctx.r8.s64 + 10144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30976
	ctx.r11.s64 = ctx.r10.s64 + 30976;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D268;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D280"))) PPC_WEAK_FUNC(sub_8312D280);
PPC_FUNC_IMPL(__imp__sub_8312D280) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-4368
	ctx.r4.s64 = ctx.r10.s64 + -4368;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-10984
	ctx.r31.s64 = ctx.r10.s64 + -10984;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D2D8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,10224
	ctx.r3.s64 = ctx.r8.s64 + 10224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30976
	ctx.r11.s64 = ctx.r10.s64 + 30976;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D308;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D320"))) PPC_WEAK_FUNC(sub_8312D320);
PPC_FUNC_IMPL(__imp__sub_8312D320) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-4264
	ctx.r4.s64 = ctx.r10.s64 + -4264;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-3808
	ctx.r31.s64 = ctx.r10.s64 + -3808;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D378;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,10304
	ctx.r3.s64 = ctx.r8.s64 + 10304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30976
	ctx.r11.s64 = ctx.r10.s64 + 30976;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D3A8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D3C0"))) PPC_WEAK_FUNC(sub_8312D3C0);
PPC_FUNC_IMPL(__imp__sub_8312D3C0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,160
	ctx.r9.s64 = ctx.r10.s64 + 160;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-4168
	ctx.r4.s64 = ctx.r10.s64 + -4168;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-8132
	ctx.r31.s64 = ctx.r10.s64 + -8132;
	// addi r10,r11,-19736
	ctx.r10.s64 = ctx.r11.s64 + -19736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D418;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,10384
	ctx.r3.s64 = ctx.r8.s64 + 10384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19576
	ctx.r11.s64 = ctx.r9.s64 + -19576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30816
	ctx.r11.s64 = ctx.r10.s64 + 30816;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D448;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D460"))) PPC_WEAK_FUNC(sub_8312D460);
PPC_FUNC_IMPL(__imp__sub_8312D460) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-4096
	ctx.r4.s64 = ctx.r10.s64 + -4096;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-7396
	ctx.r31.s64 = ctx.r10.s64 + -7396;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D4B8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,10464
	ctx.r3.s64 = ctx.r8.s64 + 10464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30816
	ctx.r11.s64 = ctx.r10.s64 + 30816;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D4E8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D500"))) PPC_WEAK_FUNC(sub_8312D500);
PPC_FUNC_IMPL(__imp__sub_8312D500) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-4000
	ctx.r4.s64 = ctx.r10.s64 + -4000;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-2152
	ctx.r31.s64 = ctx.r10.s64 + -2152;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D558;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,10544
	ctx.r3.s64 = ctx.r8.s64 + 10544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30976
	ctx.r11.s64 = ctx.r10.s64 + 30976;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D588;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D5A0"))) PPC_WEAK_FUNC(sub_8312D5A0);
PPC_FUNC_IMPL(__imp__sub_8312D5A0) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-3904
	ctx.r4.s64 = ctx.r10.s64 + -3904;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-7764
	ctx.r31.s64 = ctx.r10.s64 + -7764;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D5F8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,10624
	ctx.r3.s64 = ctx.r8.s64 + 10624;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30976
	ctx.r11.s64 = ctx.r10.s64 + 30976;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D628;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D640"))) PPC_WEAK_FUNC(sub_8312D640);
PPC_FUNC_IMPL(__imp__sub_8312D640) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-3800
	ctx.r4.s64 = ctx.r10.s64 + -3800;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-3992
	ctx.r31.s64 = ctx.r10.s64 + -3992;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D698;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,10704
	ctx.r3.s64 = ctx.r8.s64 + 10704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30976
	ctx.r11.s64 = ctx.r10.s64 + 30976;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D6C8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D6E0"))) PPC_WEAK_FUNC(sub_8312D6E0);
PPC_FUNC_IMPL(__imp__sub_8312D6E0) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-3696
	ctx.r4.s64 = ctx.r10.s64 + -3696;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-7948
	ctx.r31.s64 = ctx.r10.s64 + -7948;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D738;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,10784
	ctx.r3.s64 = ctx.r8.s64 + 10784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30976
	ctx.r11.s64 = ctx.r10.s64 + 30976;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D768;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D780"))) PPC_WEAK_FUNC(sub_8312D780);
PPC_FUNC_IMPL(__imp__sub_8312D780) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,432
	ctx.r9.s64 = ctx.r10.s64 + 432;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-3600
	ctx.r4.s64 = ctx.r10.s64 + -3600;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-1968
	ctx.r31.s64 = ctx.r10.s64 + -1968;
	// addi r10,r11,-19488
	ctx.r10.s64 = ctx.r11.s64 + -19488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D7D8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,10864
	ctx.r3.s64 = ctx.r8.s64 + 10864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19664
	ctx.r11.s64 = ctx.r9.s64 + -19664;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30816
	ctx.r11.s64 = ctx.r10.s64 + 30816;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D808;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D820"))) PPC_WEAK_FUNC(sub_8312D820);
PPC_FUNC_IMPL(__imp__sub_8312D820) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10264
	ctx.r6.s64 = ctx.r10.s64 + -10264;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-3520
	ctx.r4.s64 = ctx.r10.s64 + -3520;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-1600
	ctx.r31.s64 = ctx.r10.s64 + -1600;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D878;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,10944
	ctx.r3.s64 = ctx.r8.s64 + 10944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31160
	ctx.r11.s64 = ctx.r10.s64 + 31160;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D8A8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D8C0"))) PPC_WEAK_FUNC(sub_8312D8C0);
PPC_FUNC_IMPL(__imp__sub_8312D8C0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10160
	ctx.r6.s64 = ctx.r10.s64 + -10160;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-3440
	ctx.r4.s64 = ctx.r10.s64 + -3440;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-6568
	ctx.r31.s64 = ctx.r10.s64 + -6568;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D918;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,11024
	ctx.r3.s64 = ctx.r8.s64 + 11024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D948;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312D960"))) PPC_WEAK_FUNC(sub_8312D960);
PPC_FUNC_IMPL(__imp__sub_8312D960) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10048
	ctx.r6.s64 = ctx.r10.s64 + -10048;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-3352
	ctx.r4.s64 = ctx.r10.s64 + -3352;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-10340
	ctx.r31.s64 = ctx.r10.s64 + -10340;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312D9B8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,11104
	ctx.r3.s64 = ctx.r8.s64 + 11104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312D9E8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312DA00"))) PPC_WEAK_FUNC(sub_8312DA00);
PPC_FUNC_IMPL(__imp__sub_8312DA00) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-9928
	ctx.r6.s64 = ctx.r10.s64 + -9928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-3256
	ctx.r4.s64 = ctx.r10.s64 + -3256;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-2244
	ctx.r31.s64 = ctx.r10.s64 + -2244;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312DA58;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,11184
	ctx.r3.s64 = ctx.r8.s64 + 11184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312DA88;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312DAA0"))) PPC_WEAK_FUNC(sub_8312DAA0);
PPC_FUNC_IMPL(__imp__sub_8312DAA0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-9816
	ctx.r6.s64 = ctx.r10.s64 + -9816;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-3160
	ctx.r4.s64 = ctx.r10.s64 + -3160;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-2980
	ctx.r31.s64 = ctx.r10.s64 + -2980;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312DAF8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,11264
	ctx.r3.s64 = ctx.r8.s64 + 11264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312DB28;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312DB40"))) PPC_WEAK_FUNC(sub_8312DB40);
PPC_FUNC_IMPL(__imp__sub_8312DB40) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,-19960
	ctx.r9.s64 = ctx.r10.s64 + -19960;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-9724
	ctx.r5.s64 = ctx.r10.s64 + -9724;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-3076
	ctx.r4.s64 = ctx.r10.s64 + -3076;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-1232
	ctx.r31.s64 = ctx.r10.s64 + -1232;
	// addi r10,r11,-19736
	ctx.r10.s64 = ctx.r11.s64 + -19736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312DB98;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,11344
	ctx.r3.s64 = ctx.r8.s64 + 11344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19576
	ctx.r11.s64 = ctx.r9.s64 + -19576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31160
	ctx.r11.s64 = ctx.r10.s64 + 31160;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312DBC8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312DBE0"))) PPC_WEAK_FUNC(sub_8312DBE0);
PPC_FUNC_IMPL(__imp__sub_8312DBE0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-3008
	ctx.r4.s64 = ctx.r10.s64 + -3008;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-3256
	ctx.r31.s64 = ctx.r10.s64 + -3256;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312DC38;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,11424
	ctx.r3.s64 = ctx.r8.s64 + 11424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31288
	ctx.r11.s64 = ctx.r10.s64 + 31288;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312DC68;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312DC80"))) PPC_WEAK_FUNC(sub_8312DC80);
PPC_FUNC_IMPL(__imp__sub_8312DC80) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-2920
	ctx.r4.s64 = ctx.r10.s64 + -2920;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-6936
	ctx.r31.s64 = ctx.r10.s64 + -6936;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312DCD8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,11504
	ctx.r3.s64 = ctx.r8.s64 + 11504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312DD08;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312DD20"))) PPC_WEAK_FUNC(sub_8312DD20);
PPC_FUNC_IMPL(__imp__sub_8312DD20) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-2824
	ctx.r4.s64 = ctx.r10.s64 + -2824;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-8776
	ctx.r31.s64 = ctx.r10.s64 + -8776;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312DD78;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,11584
	ctx.r3.s64 = ctx.r8.s64 + 11584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312DDA8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312DDC0"))) PPC_WEAK_FUNC(sub_8312DDC0);
PPC_FUNC_IMPL(__imp__sub_8312DDC0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-2728
	ctx.r4.s64 = ctx.r10.s64 + -2728;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-9328
	ctx.r31.s64 = ctx.r10.s64 + -9328;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312DE18;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,11664
	ctx.r3.s64 = ctx.r8.s64 + 11664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312DE48;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312DE60"))) PPC_WEAK_FUNC(sub_8312DE60);
PPC_FUNC_IMPL(__imp__sub_8312DE60) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-2632
	ctx.r4.s64 = ctx.r10.s64 + -2632;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-5096
	ctx.r31.s64 = ctx.r10.s64 + -5096;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312DEB8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,11744
	ctx.r3.s64 = ctx.r8.s64 + 11744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312DEE8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312DF00"))) PPC_WEAK_FUNC(sub_8312DF00);
PPC_FUNC_IMPL(__imp__sub_8312DF00) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,704
	ctx.r9.s64 = ctx.r10.s64 + 704;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-2544
	ctx.r4.s64 = ctx.r10.s64 + -2544;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-3072
	ctx.r31.s64 = ctx.r10.s64 + -3072;
	// addi r10,r11,-19736
	ctx.r10.s64 = ctx.r11.s64 + -19736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312DF58;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,11824
	ctx.r3.s64 = ctx.r8.s64 + 11824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19576
	ctx.r11.s64 = ctx.r9.s64 + -19576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31288
	ctx.r11.s64 = ctx.r10.s64 + 31288;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312DF88;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312DFA0"))) PPC_WEAK_FUNC(sub_8312DFA0);
PPC_FUNC_IMPL(__imp__sub_8312DFA0) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-2472
	ctx.r4.s64 = ctx.r10.s64 + -2472;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-7120
	ctx.r31.s64 = ctx.r10.s64 + -7120;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312DFF8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,11904
	ctx.r3.s64 = ctx.r8.s64 + 11904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31288
	ctx.r11.s64 = ctx.r10.s64 + 31288;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E028;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E040"))) PPC_WEAK_FUNC(sub_8312E040);
PPC_FUNC_IMPL(__imp__sub_8312E040) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-2384
	ctx.r4.s64 = ctx.r10.s64 + -2384;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-8408
	ctx.r31.s64 = ctx.r10.s64 + -8408;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E098;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,11984
	ctx.r3.s64 = ctx.r8.s64 + 11984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E0C8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E0E0"))) PPC_WEAK_FUNC(sub_8312E0E0);
PPC_FUNC_IMPL(__imp__sub_8312E0E0) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-2288
	ctx.r4.s64 = ctx.r10.s64 + -2288;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-10432
	ctx.r31.s64 = ctx.r10.s64 + -10432;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E138;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,12064
	ctx.r3.s64 = ctx.r8.s64 + 12064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E168;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E180"))) PPC_WEAK_FUNC(sub_8312E180);
PPC_FUNC_IMPL(__imp__sub_8312E180) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-2192
	ctx.r4.s64 = ctx.r10.s64 + -2192;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-1416
	ctx.r31.s64 = ctx.r10.s64 + -1416;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E1D8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,12144
	ctx.r3.s64 = ctx.r8.s64 + 12144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E208;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E220"))) PPC_WEAK_FUNC(sub_8312E220);
PPC_FUNC_IMPL(__imp__sub_8312E220) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-2088
	ctx.r4.s64 = ctx.r10.s64 + -2088;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-8868
	ctx.r31.s64 = ctx.r10.s64 + -8868;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E278;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,12224
	ctx.r3.s64 = ctx.r8.s64 + 12224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E2A8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E2C0"))) PPC_WEAK_FUNC(sub_8312E2C0);
PPC_FUNC_IMPL(__imp__sub_8312E2C0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,976
	ctx.r9.s64 = ctx.r10.s64 + 976;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,79
	ctx.r9.s64 = 79;
	// addi r4,r10,-2000
	ctx.r4.s64 = ctx.r10.s64 + -2000;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-5740
	ctx.r31.s64 = ctx.r10.s64 + -5740;
	// addi r10,r11,-19488
	ctx.r10.s64 = ctx.r11.s64 + -19488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E318;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,12304
	ctx.r3.s64 = ctx.r8.s64 + 12304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19664
	ctx.r11.s64 = ctx.r9.s64 + -19664;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31288
	ctx.r11.s64 = ctx.r10.s64 + 31288;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E348;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E360"))) PPC_WEAK_FUNC(sub_8312E360);
PPC_FUNC_IMPL(__imp__sub_8312E360) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10264
	ctx.r6.s64 = ctx.r10.s64 + -10264;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-1928
	ctx.r4.s64 = ctx.r10.s64 + -1928;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-10524
	ctx.r31.s64 = ctx.r10.s64 + -10524;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E3B8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,12384
	ctx.r3.s64 = ctx.r8.s64 + 12384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31440
	ctx.r11.s64 = ctx.r10.s64 + 31440;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E3E8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E400"))) PPC_WEAK_FUNC(sub_8312E400);
PPC_FUNC_IMPL(__imp__sub_8312E400) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10160
	ctx.r6.s64 = ctx.r10.s64 + -10160;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-1840
	ctx.r4.s64 = ctx.r10.s64 + -1840;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-4452
	ctx.r31.s64 = ctx.r10.s64 + -4452;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E458;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,12464
	ctx.r3.s64 = ctx.r8.s64 + 12464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E488;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E4A0"))) PPC_WEAK_FUNC(sub_8312E4A0);
PPC_FUNC_IMPL(__imp__sub_8312E4A0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-10048
	ctx.r6.s64 = ctx.r10.s64 + -10048;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-1744
	ctx.r4.s64 = ctx.r10.s64 + -1744;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-9512
	ctx.r31.s64 = ctx.r10.s64 + -9512;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E4F8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,12544
	ctx.r3.s64 = ctx.r8.s64 + 12544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E528;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E540"))) PPC_WEAK_FUNC(sub_8312E540);
PPC_FUNC_IMPL(__imp__sub_8312E540) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-9928
	ctx.r6.s64 = ctx.r10.s64 + -9928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-1640
	ctx.r4.s64 = ctx.r10.s64 + -1640;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-5188
	ctx.r31.s64 = ctx.r10.s64 + -5188;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E598;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,12624
	ctx.r3.s64 = ctx.r8.s64 + 12624;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E5C8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E5E0"))) PPC_WEAK_FUNC(sub_8312E5E0);
PPC_FUNC_IMPL(__imp__sub_8312E5E0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-9816
	ctx.r6.s64 = ctx.r10.s64 + -9816;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-10292
	ctx.r5.s64 = ctx.r10.s64 + -10292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-1536
	ctx.r4.s64 = ctx.r10.s64 + -1536;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-10156
	ctx.r31.s64 = ctx.r10.s64 + -10156;
	// addi r10,r11,12912
	ctx.r10.s64 = ctx.r11.s64 + 12912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E638;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,12704
	ctx.r3.s64 = ctx.r8.s64 + 12704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10920
	ctx.r11.s64 = ctx.r9.s64 + -10920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E668;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E680"))) PPC_WEAK_FUNC(sub_8312E680);
PPC_FUNC_IMPL(__imp__sub_8312E680) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,-20336
	ctx.r9.s64 = ctx.r10.s64 + -20336;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-9724
	ctx.r5.s64 = ctx.r10.s64 + -9724;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-1440
	ctx.r4.s64 = ctx.r10.s64 + -1440;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-1140
	ctx.r31.s64 = ctx.r10.s64 + -1140;
	// addi r10,r11,-19736
	ctx.r10.s64 = ctx.r11.s64 + -19736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E6D8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,12784
	ctx.r3.s64 = ctx.r8.s64 + 12784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19576
	ctx.r11.s64 = ctx.r9.s64 + -19576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31440
	ctx.r11.s64 = ctx.r10.s64 + 31440;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E708;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E720"))) PPC_WEAK_FUNC(sub_8312E720);
PPC_FUNC_IMPL(__imp__sub_8312E720) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-1368
	ctx.r4.s64 = ctx.r10.s64 + -1368;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-10708
	ctx.r31.s64 = ctx.r10.s64 + -10708;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E778;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,12864
	ctx.r3.s64 = ctx.r8.s64 + 12864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31576
	ctx.r11.s64 = ctx.r10.s64 + 31576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E7A8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E7C0"))) PPC_WEAK_FUNC(sub_8312E7C0);
PPC_FUNC_IMPL(__imp__sub_8312E7C0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-1272
	ctx.r4.s64 = ctx.r10.s64 + -1272;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-3348
	ctx.r31.s64 = ctx.r10.s64 + -3348;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E818;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,12944
	ctx.r3.s64 = ctx.r8.s64 + 12944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E848;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E860"))) PPC_WEAK_FUNC(sub_8312E860);
PPC_FUNC_IMPL(__imp__sub_8312E860) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-1176
	ctx.r4.s64 = ctx.r10.s64 + -1176;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-3440
	ctx.r31.s64 = ctx.r10.s64 + -3440;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E8B8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,13024
	ctx.r3.s64 = ctx.r8.s64 + 13024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E8E8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E900"))) PPC_WEAK_FUNC(sub_8312E900);
PPC_FUNC_IMPL(__imp__sub_8312E900) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-1072
	ctx.r4.s64 = ctx.r10.s64 + -1072;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-4544
	ctx.r31.s64 = ctx.r10.s64 + -4544;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E958;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,13104
	ctx.r3.s64 = ctx.r8.s64 + 13104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312E988;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312E9A0"))) PPC_WEAK_FUNC(sub_8312E9A0);
PPC_FUNC_IMPL(__imp__sub_8312E9A0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1248
	ctx.r9.s64 = ctx.r10.s64 + 1248;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-968
	ctx.r4.s64 = ctx.r10.s64 + -968;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-9236
	ctx.r31.s64 = ctx.r10.s64 + -9236;
	// addi r10,r11,13056
	ctx.r10.s64 = ctx.r11.s64 + 13056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312E9F8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,13184
	ctx.r3.s64 = ctx.r8.s64 + 13184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10744
	ctx.r11.s64 = ctx.r9.s64 + -10744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312EA28;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312EA40"))) PPC_WEAK_FUNC(sub_8312EA40);
PPC_FUNC_IMPL(__imp__sub_8312EA40) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,160
	ctx.r9.s64 = ctx.r10.s64 + 160;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-872
	ctx.r4.s64 = ctx.r10.s64 + -872;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-1508
	ctx.r31.s64 = ctx.r10.s64 + -1508;
	// addi r10,r11,-19736
	ctx.r10.s64 = ctx.r11.s64 + -19736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312EA98;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,13264
	ctx.r3.s64 = ctx.r8.s64 + 13264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19576
	ctx.r11.s64 = ctx.r9.s64 + -19576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31576
	ctx.r11.s64 = ctx.r10.s64 + 31576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312EAC8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312EAE0"))) PPC_WEAK_FUNC(sub_8312EAE0);
PPC_FUNC_IMPL(__imp__sub_8312EAE0) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-800
	ctx.r4.s64 = ctx.r10.s64 + -800;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-7580
	ctx.r31.s64 = ctx.r10.s64 + -7580;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312EB38;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,13344
	ctx.r3.s64 = ctx.r8.s64 + 13344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31576
	ctx.r11.s64 = ctx.r10.s64 + 31576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312EB68;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312EB80"))) PPC_WEAK_FUNC(sub_8312EB80);
PPC_FUNC_IMPL(__imp__sub_8312EB80) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-704
	ctx.r4.s64 = ctx.r10.s64 + -704;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-10616
	ctx.r31.s64 = ctx.r10.s64 + -10616;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312EBD8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,13424
	ctx.r3.s64 = ctx.r8.s64 + 13424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312EC08;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312EC20"))) PPC_WEAK_FUNC(sub_8312EC20);
PPC_FUNC_IMPL(__imp__sub_8312EC20) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-608
	ctx.r4.s64 = ctx.r10.s64 + -608;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-5280
	ctx.r31.s64 = ctx.r10.s64 + -5280;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312EC78;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,13504
	ctx.r3.s64 = ctx.r8.s64 + 13504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312ECA8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312ECC0"))) PPC_WEAK_FUNC(sub_8312ECC0);
PPC_FUNC_IMPL(__imp__sub_8312ECC0) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-504
	ctx.r4.s64 = ctx.r10.s64 + -504;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-8960
	ctx.r31.s64 = ctx.r10.s64 + -8960;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312ED18;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,13584
	ctx.r3.s64 = ctx.r8.s64 + 13584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312ED48;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312ED60"))) PPC_WEAK_FUNC(sub_8312ED60);
PPC_FUNC_IMPL(__imp__sub_8312ED60) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,-13120
	ctx.r9.s64 = ctx.r10.s64 + -13120;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-400
	ctx.r4.s64 = ctx.r10.s64 + -400;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-9052
	ctx.r31.s64 = ctx.r10.s64 + -9052;
	// addi r10,r11,12984
	ctx.r10.s64 = ctx.r11.s64 + 12984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312EDB8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,13664
	ctx.r3.s64 = ctx.r8.s64 + 13664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10832
	ctx.r11.s64 = ctx.r9.s64 + -10832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31736
	ctx.r11.s64 = ctx.r10.s64 + 31736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312EDE8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312EE00"))) PPC_WEAK_FUNC(sub_8312EE00);
PPC_FUNC_IMPL(__imp__sub_8312EE00) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,432
	ctx.r9.s64 = ctx.r10.s64 + 432;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-304
	ctx.r4.s64 = ctx.r10.s64 + -304;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-6844
	ctx.r31.s64 = ctx.r10.s64 + -6844;
	// addi r10,r11,-19488
	ctx.r10.s64 = ctx.r11.s64 + -19488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312EE58;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,13744
	ctx.r3.s64 = ctx.r8.s64 + 13744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19664
	ctx.r11.s64 = ctx.r9.s64 + -19664;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31576
	ctx.r11.s64 = ctx.r10.s64 + 31576;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312EE88;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312EEA0"))) PPC_WEAK_FUNC(sub_8312EEA0);
PPC_FUNC_IMPL(__imp__sub_8312EEA0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1448
	ctx.r9.s64 = ctx.r10.s64 + 1448;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-224
	ctx.r4.s64 = ctx.r10.s64 + -224;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-3532
	ctx.r31.s64 = ctx.r10.s64 + -3532;
	// addi r10,r11,13128
	ctx.r10.s64 = ctx.r11.s64 + 13128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312EEF8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,13824
	ctx.r3.s64 = ctx.r8.s64 + 13824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10656
	ctx.r11.s64 = ctx.r9.s64 + -10656;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31800
	ctx.r11.s64 = ctx.r10.s64 + 31800;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312EF28;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312EF40"))) PPC_WEAK_FUNC(sub_8312EF40);
PPC_FUNC_IMPL(__imp__sub_8312EF40) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,1632
	ctx.r9.s64 = ctx.r10.s64 + 1632;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-152
	ctx.r4.s64 = ctx.r10.s64 + -152;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-9788
	ctx.r31.s64 = ctx.r10.s64 + -9788;
	// addi r10,r11,-19328
	ctx.r10.s64 = ctx.r11.s64 + -19328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312EF98;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,13904
	ctx.r3.s64 = ctx.r8.s64 + 13904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19416
	ctx.r11.s64 = ctx.r9.s64 + -19416;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31880
	ctx.r11.s64 = ctx.r10.s64 + 31880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312EFC8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312EFE0"))) PPC_WEAK_FUNC(sub_8312EFE0);
PPC_FUNC_IMPL(__imp__sub_8312EFE0) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,1448
	ctx.r9.s64 = ctx.r10.s64 + 1448;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-28040
	ctx.r5.s64 = ctx.r10.s64 + -28040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-80
	ctx.r4.s64 = ctx.r10.s64 + -80;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-7488
	ctx.r31.s64 = ctx.r10.s64 + -7488;
	// addi r10,r11,13128
	ctx.r10.s64 = ctx.r11.s64 + 13128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312F038;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,13984
	ctx.r3.s64 = ctx.r8.s64 + 13984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-10656
	ctx.r11.s64 = ctx.r9.s64 + -10656;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31984
	ctx.r11.s64 = ctx.r10.s64 + 31984;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312F068;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312F080"))) PPC_WEAK_FUNC(sub_8312F080);
PPC_FUNC_IMPL(__imp__sub_8312F080) {
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
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r9,r10,1960
	ctx.r9.s64 = ctx.r10.s64 + 1960;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,0
	ctx.r4.s64 = ctx.r10.s64 + 0;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-5924
	ctx.r31.s64 = ctx.r10.s64 + -5924;
	// addi r10,r11,-19328
	ctx.r10.s64 = ctx.r11.s64 + -19328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312F0D8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,14064
	ctx.r3.s64 = ctx.r8.s64 + 14064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19416
	ctx.r11.s64 = ctx.r9.s64 + -19416;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,32064
	ctx.r11.s64 = ctx.r10.s64 + 32064;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312F108;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312F120"))) PPC_WEAK_FUNC(sub_8312F120);
PPC_FUNC_IMPL(__imp__sub_8312F120) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,108
	ctx.r5.s64 = ctx.r10.s64 + 108;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,72
	ctx.r4.s64 = ctx.r10.s64 + 72;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-13104
	ctx.r31.s64 = ctx.r10.s64 + -13104;
	// addi r10,r11,9520
	ctx.r10.s64 = ctx.r11.s64 + 9520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312F178;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,14144
	ctx.r3.s64 = ctx.r8.s64 + 14144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27648
	ctx.r11.s64 = ctx.r9.s64 + -27648;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312F1A8;
	sub_82E29708(ctx, base);
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

__attribute__((alias("__imp__sub_8312F1C0"))) PPC_WEAK_FUNC(sub_8312F1C0);
PPC_FUNC_IMPL(__imp__sub_8312F1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-12496
	ctx.r3.s64 = ctx.r11.s64 + -12496;
	// bl 0x82616000
	ctx.lr = 0x8312F1D8;
	sub_82616000(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,4224
	ctx.r3.s64 = ctx.r11.s64 + 4224;
	// bl 0x82e29708
	ctx.lr = 0x8312F1E4;
	sub_82E29708(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F1F8"))) PPC_WEAK_FUNC(sub_8312F1F8);
PPC_FUNC_IMPL(__imp__sub_8312F1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,5152
	ctx.r3.s64 = ctx.r11.s64 + 5152;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F208"))) PPC_WEAK_FUNC(sub_8312F208);
PPC_FUNC_IMPL(__imp__sub_8312F208) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-13008
	ctx.r11.s64 = ctx.r11.s64 + -13008;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F238"))) PPC_WEAK_FUNC(sub_8312F238);
PPC_FUNC_IMPL(__imp__sub_8312F238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,-13136
	ctx.r11.s64 = ctx.r11.s64 + -13136;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F260"))) PPC_WEAK_FUNC(sub_8312F260);
PPC_FUNC_IMPL(__imp__sub_8312F260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25656);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,-12752
	ctx.r11.s64 = ctx.r11.s64 + -12752;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F288"))) PPC_WEAK_FUNC(sub_8312F288);
PPC_FUNC_IMPL(__imp__sub_8312F288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,-12576
	ctx.r11.s64 = ctx.r11.s64 + -12576;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

