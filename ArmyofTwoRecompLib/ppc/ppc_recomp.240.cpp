#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83076350"))) PPC_WEAK_FUNC(sub_83076350);
PPC_FUNC_IMPL(__imp__sub_83076350) {
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
	// addi r11,r11,10064
	ctx.r11.s64 = ctx.r11.s64 + 10064;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076398"))) PPC_WEAK_FUNC(sub_83076398);
PPC_FUNC_IMPL(__imp__sub_83076398) {
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
	// addi r11,r11,9984
	ctx.r11.s64 = ctx.r11.s64 + 9984;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830763E0"))) PPC_WEAK_FUNC(sub_830763E0);
PPC_FUNC_IMPL(__imp__sub_830763E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28592
	ctx.r3.s64 = ctx.r11.s64 + 28592;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830763F0"))) PPC_WEAK_FUNC(sub_830763F0);
PPC_FUNC_IMPL(__imp__sub_830763F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28608
	ctx.r3.s64 = ctx.r11.s64 + 28608;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076400"))) PPC_WEAK_FUNC(sub_83076400);
PPC_FUNC_IMPL(__imp__sub_83076400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28624
	ctx.r3.s64 = ctx.r11.s64 + 28624;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076410"))) PPC_WEAK_FUNC(sub_83076410);
PPC_FUNC_IMPL(__imp__sub_83076410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28640
	ctx.r3.s64 = ctx.r11.s64 + 28640;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076420"))) PPC_WEAK_FUNC(sub_83076420);
PPC_FUNC_IMPL(__imp__sub_83076420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28656
	ctx.r3.s64 = ctx.r11.s64 + 28656;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076430"))) PPC_WEAK_FUNC(sub_83076430);
PPC_FUNC_IMPL(__imp__sub_83076430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28672
	ctx.r3.s64 = ctx.r11.s64 + 28672;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076440"))) PPC_WEAK_FUNC(sub_83076440);
PPC_FUNC_IMPL(__imp__sub_83076440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28688
	ctx.r3.s64 = ctx.r11.s64 + 28688;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076450"))) PPC_WEAK_FUNC(sub_83076450);
PPC_FUNC_IMPL(__imp__sub_83076450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28704
	ctx.r3.s64 = ctx.r11.s64 + 28704;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076460"))) PPC_WEAK_FUNC(sub_83076460);
PPC_FUNC_IMPL(__imp__sub_83076460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28720
	ctx.r3.s64 = ctx.r11.s64 + 28720;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076470"))) PPC_WEAK_FUNC(sub_83076470);
PPC_FUNC_IMPL(__imp__sub_83076470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28736
	ctx.r3.s64 = ctx.r11.s64 + 28736;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076480"))) PPC_WEAK_FUNC(sub_83076480);
PPC_FUNC_IMPL(__imp__sub_83076480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28752
	ctx.r3.s64 = ctx.r11.s64 + 28752;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83076490"))) PPC_WEAK_FUNC(sub_83076490);
PPC_FUNC_IMPL(__imp__sub_83076490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-11688
	ctx.r3.s64 = ctx.r11.s64 + -11688;
	// bl 0x82457cf8
	ctx.lr = 0x830764AC;
	sub_82457CF8(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r3,9964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830764C8"))) PPC_WEAK_FUNC(sub_830764C8);
PPC_FUNC_IMPL(__imp__sub_830764C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-27680
	ctx.r3.s64 = ctx.r11.s64 + -27680;
	// bl 0x82457d18
	ctx.lr = 0x830764E4;
	sub_82457D18(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r3,10104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076500"))) PPC_WEAK_FUNC(sub_83076500);
PPC_FUNC_IMPL(__imp__sub_83076500) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,9768
	ctx.r31.s64 = ctx.r11.s64 + 9768;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x828d0368
	ctx.lr = 0x83076524;
	sub_828D0368(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31992
	ctx.r10.s64 = -2096627712;
	// addi r3,r10,28928
	ctx.r3.s64 = ctx.r10.s64 + 28928;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8307653C;
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

__attribute__((alias("__imp__sub_83076550"))) PPC_WEAK_FUNC(sub_83076550);
PPC_FUNC_IMPL(__imp__sub_83076550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,1668
	ctx.r6.s64 = ctx.r10.s64 + 1668;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,26316
	ctx.r5.s64 = ctx.r10.s64 + 26316;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,26292
	ctx.r4.s64 = ctx.r10.s64 + 26292;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,9872
	ctx.r31.s64 = ctx.r10.s64 + 9872;
	// addi r10,r11,-10872
	ctx.r10.s64 = ctx.r11.s64 + -10872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830765A8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32111
	ctx.r9.s64 = -2104426496;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,28848
	ctx.r3.s64 = ctx.r8.s64 + 28848;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,27296
	ctx.r11.s64 = ctx.r9.s64 + 27296;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,23168
	ctx.r11.s64 = ctx.r10.s64 + 23168;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830765D8;
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

__attribute__((alias("__imp__sub_830765F0"))) PPC_WEAK_FUNC(sub_830765F0);
PPC_FUNC_IMPL(__imp__sub_830765F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,1712
	ctx.r6.s64 = ctx.r10.s64 + 1712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,26316
	ctx.r5.s64 = ctx.r10.s64 + 26316;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,26332
	ctx.r4.s64 = ctx.r10.s64 + 26332;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,9640
	ctx.r31.s64 = ctx.r10.s64 + 9640;
	// addi r10,r11,4768
	ctx.r10.s64 = ctx.r11.s64 + 4768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83076648;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32110
	ctx.r9.s64 = -2104360960;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32111
	ctx.r10.s64 = -2104426496;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,28768
	ctx.r3.s64 = ctx.r8.s64 + 28768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4840
	ctx.r11.s64 = ctx.r9.s64 + 4840;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,23168
	ctx.r11.s64 = ctx.r10.s64 + 23168;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83076678;
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

__attribute__((alias("__imp__sub_83076690"))) PPC_WEAK_FUNC(sub_83076690);
PPC_FUNC_IMPL(__imp__sub_83076690) {
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
	// addi r11,r11,10368
	ctx.r11.s64 = ctx.r11.s64 + 10368;
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

__attribute__((alias("__imp__sub_830766C0"))) PPC_WEAK_FUNC(sub_830766C0);
PPC_FUNC_IMPL(__imp__sub_830766C0) {
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
	// addi r11,r11,10400
	ctx.r11.s64 = ctx.r11.s64 + 10400;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830766F0"))) PPC_WEAK_FUNC(sub_830766F0);
PPC_FUNC_IMPL(__imp__sub_830766F0) {
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
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076738"))) PPC_WEAK_FUNC(sub_83076738);
PPC_FUNC_IMPL(__imp__sub_83076738) {
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
	// addi r11,r11,10384
	ctx.r11.s64 = ctx.r11.s64 + 10384;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076780"))) PPC_WEAK_FUNC(sub_83076780);
PPC_FUNC_IMPL(__imp__sub_83076780) {
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
	// addi r11,r11,10544
	ctx.r11.s64 = ctx.r11.s64 + 10544;
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

__attribute__((alias("__imp__sub_830767B0"))) PPC_WEAK_FUNC(sub_830767B0);
PPC_FUNC_IMPL(__imp__sub_830767B0) {
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
	// addi r11,r11,10576
	ctx.r11.s64 = ctx.r11.s64 + 10576;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830767E0"))) PPC_WEAK_FUNC(sub_830767E0);
PPC_FUNC_IMPL(__imp__sub_830767E0) {
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
	// addi r11,r11,10592
	ctx.r11.s64 = ctx.r11.s64 + 10592;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076828"))) PPC_WEAK_FUNC(sub_83076828);
PPC_FUNC_IMPL(__imp__sub_83076828) {
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
	// addi r11,r11,10560
	ctx.r11.s64 = ctx.r11.s64 + 10560;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076870"))) PPC_WEAK_FUNC(sub_83076870);
PPC_FUNC_IMPL(__imp__sub_83076870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-9668
	ctx.r4.s64 = ctx.r11.s64 + -9668;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r3,r11,10508
	ctx.r3.s64 = ctx.r11.s64 + 10508;
	// bl 0x82304fb8
	ctx.lr = 0x83076890;
	sub_82304FB8(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28944
	ctx.r3.s64 = ctx.r11.s64 + 28944;
	// bl 0x82d5cd68
	ctx.lr = 0x8307689C;
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

__attribute__((alias("__imp__sub_830768B0"))) PPC_WEAK_FUNC(sub_830768B0);
PPC_FUNC_IMPL(__imp__sub_830768B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-1592
	ctx.r4.s64 = ctx.r11.s64 + -1592;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r3,r11,10496
	ctx.r3.s64 = ctx.r11.s64 + 10496;
	// bl 0x82304fb8
	ctx.lr = 0x830768D0;
	sub_82304FB8(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28960
	ctx.r3.s64 = ctx.r11.s64 + 28960;
	// bl 0x82d5cd68
	ctx.lr = 0x830768DC;
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

__attribute__((alias("__imp__sub_830768F0"))) PPC_WEAK_FUNC(sub_830768F0);
PPC_FUNC_IMPL(__imp__sub_830768F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-24740
	ctx.r4.s64 = ctx.r11.s64 + -24740;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r3,r11,10520
	ctx.r3.s64 = ctx.r11.s64 + 10520;
	// bl 0x82304fb8
	ctx.lr = 0x83076910;
	sub_82304FB8(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28976
	ctx.r3.s64 = ctx.r11.s64 + 28976;
	// bl 0x82d5cd68
	ctx.lr = 0x8307691C;
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

__attribute__((alias("__imp__sub_83076930"))) PPC_WEAK_FUNC(sub_83076930);
PPC_FUNC_IMPL(__imp__sub_83076930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-24736
	ctx.r4.s64 = ctx.r11.s64 + -24736;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r3,r11,10532
	ctx.r3.s64 = ctx.r11.s64 + 10532;
	// bl 0x82304fb8
	ctx.lr = 0x83076950;
	sub_82304FB8(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,28992
	ctx.r3.s64 = ctx.r11.s64 + 28992;
	// bl 0x82d5cd68
	ctx.lr = 0x8307695C;
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

__attribute__((alias("__imp__sub_83076970"))) PPC_WEAK_FUNC(sub_83076970);
PPC_FUNC_IMPL(__imp__sub_83076970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,31536
	ctx.r11.s64 = ctx.r11.s64 + 31536;
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

__attribute__((alias("__imp__sub_830769A0"))) PPC_WEAK_FUNC(sub_830769A0);
PPC_FUNC_IMPL(__imp__sub_830769A0) {
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
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,31952
	ctx.r11.s64 = ctx.r11.s64 + 31952;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830769D0"))) PPC_WEAK_FUNC(sub_830769D0);
PPC_FUNC_IMPL(__imp__sub_830769D0) {
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
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,31968
	ctx.r11.s64 = ctx.r11.s64 + 31968;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076A18"))) PPC_WEAK_FUNC(sub_83076A18);
PPC_FUNC_IMPL(__imp__sub_83076A18) {
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
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,31568
	ctx.r11.s64 = ctx.r11.s64 + 31568;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83076A60"))) PPC_WEAK_FUNC(sub_83076A60);
PPC_FUNC_IMPL(__imp__sub_83076A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-13660
	ctx.r5.s64 = ctx.r10.s64 + -13660;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-13692
	ctx.r4.s64 = ctx.r10.s64 + -13692;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,31140
	ctx.r31.s64 = ctx.r10.s64 + 31140;
	// addi r10,r11,-14544
	ctx.r10.s64 = ctx.r11.s64 + -14544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83076AB8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32104
	ctx.r9.s64 = -2103967744;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32104
	ctx.r10.s64 = -2103967744;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,31208
	ctx.r3.s64 = ctx.r8.s64 + 31208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31416
	ctx.r11.s64 = ctx.r9.s64 + 31416;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,22856
	ctx.r11.s64 = ctx.r10.s64 + 22856;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83076AE8;
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

__attribute__((alias("__imp__sub_83076B00"))) PPC_WEAK_FUNC(sub_83076B00);
PPC_FUNC_IMPL(__imp__sub_83076B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,-32032
	ctx.r9.s64 = ctx.r10.s64 + -32032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-13596
	ctx.r5.s64 = ctx.r10.s64 + -13596;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-13628
	ctx.r4.s64 = ctx.r10.s64 + -13628;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,30400
	ctx.r31.s64 = ctx.r10.s64 + 30400;
	// addi r10,r11,-5520
	ctx.r10.s64 = ctx.r11.s64 + -5520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83076B58;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32103
	ctx.r9.s64 = -2103902208;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32104
	ctx.r10.s64 = -2103967744;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,29448
	ctx.r3.s64 = ctx.r8.s64 + 29448;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-5448
	ctx.r11.s64 = ctx.r9.s64 + -5448;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,22856
	ctx.r11.s64 = ctx.r10.s64 + 22856;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83076B88;
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

__attribute__((alias("__imp__sub_83076BA0"))) PPC_WEAK_FUNC(sub_83076BA0);
PPC_FUNC_IMPL(__imp__sub_83076BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-13520
	ctx.r6.s64 = ctx.r10.s64 + -13520;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-13540
	ctx.r5.s64 = ctx.r10.s64 + -13540;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-13568
	ctx.r4.s64 = ctx.r10.s64 + -13568;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,31768
	ctx.r31.s64 = ctx.r10.s64 + 31768;
	// addi r10,r11,-20544
	ctx.r10.s64 = ctx.r11.s64 + -20544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83076BF8;
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
	// addi r3,r8,31288
	ctx.r3.s64 = ctx.r8.s64 + 31288;
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
	ctx.lr = 0x83076C28;
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

__attribute__((alias("__imp__sub_83076C40"))) PPC_WEAK_FUNC(sub_83076C40);
PPC_FUNC_IMPL(__imp__sub_83076C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,96
	ctx.r9.s64 = ctx.r10.s64 + 96;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-13460
	ctx.r6.s64 = ctx.r10.s64 + -13460;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-13540
	ctx.r5.s64 = ctx.r10.s64 + -13540;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-13488
	ctx.r4.s64 = ctx.r10.s64 + -13488;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,32076
	ctx.r31.s64 = ctx.r10.s64 + 32076;
	// addi r10,r11,11872
	ctx.r10.s64 = ctx.r11.s64 + 11872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83076C98;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32104
	ctx.r9.s64 = -2103967744;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,29528
	ctx.r3.s64 = ctx.r8.s64 + 29528;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,32352
	ctx.r11.s64 = ctx.r9.s64 + 32352;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83076CC8;
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

__attribute__((alias("__imp__sub_83076CE0"))) PPC_WEAK_FUNC(sub_83076CE0);
PPC_FUNC_IMPL(__imp__sub_83076CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,184
	ctx.r9.s64 = ctx.r10.s64 + 184;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-13460
	ctx.r6.s64 = ctx.r10.s64 + -13460;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-13540
	ctx.r5.s64 = ctx.r10.s64 + -13540;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-13428
	ctx.r4.s64 = ctx.r10.s64 + -13428;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,29940
	ctx.r31.s64 = ctx.r10.s64 + 29940;
	// addi r10,r11,-13680
	ctx.r10.s64 = ctx.r11.s64 + -13680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83076D38;
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
	// addi r3,r8,29608
	ctx.r3.s64 = ctx.r8.s64 + 29608;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-32320
	ctx.r11.s64 = ctx.r9.s64 + -32320;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83076D68;
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

__attribute__((alias("__imp__sub_83076D80"))) PPC_WEAK_FUNC(sub_83076D80);
PPC_FUNC_IMPL(__imp__sub_83076D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,272
	ctx.r9.s64 = ctx.r10.s64 + 272;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-13364
	ctx.r6.s64 = ctx.r10.s64 + -13364;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-13540
	ctx.r5.s64 = ctx.r10.s64 + -13540;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-13396
	ctx.r4.s64 = ctx.r10.s64 + -13396;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,30216
	ctx.r31.s64 = ctx.r10.s64 + 30216;
	// addi r10,r11,-13488
	ctx.r10.s64 = ctx.r11.s64 + -13488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83076DD8;
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
	// addi r3,r8,29688
	ctx.r3.s64 = ctx.r8.s64 + 29688;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-32208
	ctx.r11.s64 = ctx.r9.s64 + -32208;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83076E08;
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

__attribute__((alias("__imp__sub_83076E20"))) PPC_WEAK_FUNC(sub_83076E20);
PPC_FUNC_IMPL(__imp__sub_83076E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,360
	ctx.r9.s64 = ctx.r10.s64 + 360;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-13364
	ctx.r6.s64 = ctx.r10.s64 + -13364;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-13540
	ctx.r5.s64 = ctx.r10.s64 + -13540;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-13332
	ctx.r4.s64 = ctx.r10.s64 + -13332;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,32168
	ctx.r31.s64 = ctx.r10.s64 + 32168;
	// addi r10,r11,-12472
	ctx.r10.s64 = ctx.r11.s64 + -12472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83076E78;
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
	// addi r3,r8,29768
	ctx.r3.s64 = ctx.r8.s64 + 29768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-32120
	ctx.r11.s64 = ctx.r9.s64 + -32120;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83076EA8;
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

__attribute__((alias("__imp__sub_83076EC0"))) PPC_WEAK_FUNC(sub_83076EC0);
PPC_FUNC_IMPL(__imp__sub_83076EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-13364
	ctx.r6.s64 = ctx.r10.s64 + -13364;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-13540
	ctx.r5.s64 = ctx.r10.s64 + -13540;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-13292
	ctx.r4.s64 = ctx.r10.s64 + -13292;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,30664
	ctx.r31.s64 = ctx.r10.s64 + 30664;
	// addi r10,r11,-12472
	ctx.r10.s64 = ctx.r11.s64 + -12472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83076F18;
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
	// addi r3,r8,29848
	ctx.r3.s64 = ctx.r8.s64 + 29848;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-32120
	ctx.r11.s64 = ctx.r9.s64 + -32120;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83076F48;
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

__attribute__((alias("__imp__sub_83076F60"))) PPC_WEAK_FUNC(sub_83076F60);
PPC_FUNC_IMPL(__imp__sub_83076F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,664
	ctx.r9.s64 = ctx.r10.s64 + 664;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-13364
	ctx.r6.s64 = ctx.r10.s64 + -13364;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-13540
	ctx.r5.s64 = ctx.r10.s64 + -13540;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-13264
	ctx.r4.s64 = ctx.r10.s64 + -13264;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,30032
	ctx.r31.s64 = ctx.r10.s64 + 30032;
	// addi r10,r11,-12472
	ctx.r10.s64 = ctx.r11.s64 + -12472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83076FB8;
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
	// addi r3,r8,29928
	ctx.r3.s64 = ctx.r8.s64 + 29928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-32120
	ctx.r11.s64 = ctx.r9.s64 + -32120;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83076FE8;
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

__attribute__((alias("__imp__sub_83077000"))) PPC_WEAK_FUNC(sub_83077000);
PPC_FUNC_IMPL(__imp__sub_83077000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-13184
	ctx.r6.s64 = ctx.r10.s64 + -13184;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-13540
	ctx.r5.s64 = ctx.r10.s64 + -13540;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-13232
	ctx.r4.s64 = ctx.r10.s64 + -13232;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,31048
	ctx.r31.s64 = ctx.r10.s64 + 31048;
	// addi r10,r11,-12472
	ctx.r10.s64 = ctx.r11.s64 + -12472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83077058;
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
	// addi r3,r8,30008
	ctx.r3.s64 = ctx.r8.s64 + 30008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-32120
	ctx.r11.s64 = ctx.r9.s64 + -32120;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83077088;
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

__attribute__((alias("__imp__sub_830770A0"))) PPC_WEAK_FUNC(sub_830770A0);
PPC_FUNC_IMPL(__imp__sub_830770A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-13092
	ctx.r6.s64 = ctx.r10.s64 + -13092;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-13108
	ctx.r5.s64 = ctx.r10.s64 + -13108;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-13132
	ctx.r4.s64 = ctx.r10.s64 + -13132;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,30856
	ctx.r31.s64 = ctx.r10.s64 + 30856;
	// addi r10,r11,16088
	ctx.r10.s64 = ctx.r11.s64 + 16088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830770F8;
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
	// addi r3,r8,30088
	ctx.r3.s64 = ctx.r8.s64 + 30088;
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
	ctx.lr = 0x83077128;
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

__attribute__((alias("__imp__sub_83077140"))) PPC_WEAK_FUNC(sub_83077140);
PPC_FUNC_IMPL(__imp__sub_83077140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-13056
	ctx.r6.s64 = ctx.r10.s64 + -13056;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-13108
	ctx.r5.s64 = ctx.r10.s64 + -13108;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-13084
	ctx.r4.s64 = ctx.r10.s64 + -13084;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,31860
	ctx.r31.s64 = ctx.r10.s64 + 31860;
	// addi r10,r11,-11832
	ctx.r10.s64 = ctx.r11.s64 + -11832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83077198;
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
	// addi r3,r8,30168
	ctx.r3.s64 = ctx.r8.s64 + 30168;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-31920
	ctx.r11.s64 = ctx.r9.s64 + -31920;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830771C8;
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

__attribute__((alias("__imp__sub_830771E0"))) PPC_WEAK_FUNC(sub_830771E0);
PPC_FUNC_IMPL(__imp__sub_830771E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-13012
	ctx.r6.s64 = ctx.r10.s64 + -13012;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-13108
	ctx.r5.s64 = ctx.r10.s64 + -13108;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-13044
	ctx.r4.s64 = ctx.r10.s64 + -13044;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,31676
	ctx.r31.s64 = ctx.r10.s64 + 31676;
	// addi r10,r11,-11384
	ctx.r10.s64 = ctx.r11.s64 + -11384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83077238;
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
	// addi r3,r8,30248
	ctx.r3.s64 = ctx.r8.s64 + 30248;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-31832
	ctx.r11.s64 = ctx.r9.s64 + -31832;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83077268;
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

__attribute__((alias("__imp__sub_83077280"))) PPC_WEAK_FUNC(sub_83077280);
PPC_FUNC_IMPL(__imp__sub_83077280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,30632
	ctx.r3.s64 = ctx.r11.s64 + 30632;
	// bl 0x8254d820
	ctx.lr = 0x83077298;
	sub_8254D820(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,29272
	ctx.r3.s64 = ctx.r11.s64 + 29272;
	// bl 0x82d5cd68
	ctx.lr = 0x830772A4;
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

__attribute__((alias("__imp__sub_830772B8"))) PPC_WEAK_FUNC(sub_830772B8);
PPC_FUNC_IMPL(__imp__sub_830772B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,30648
	ctx.r3.s64 = ctx.r11.s64 + 30648;
	// bl 0x8254d820
	ctx.lr = 0x830772D0;
	sub_8254D820(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,29288
	ctx.r3.s64 = ctx.r11.s64 + 29288;
	// bl 0x82d5cd68
	ctx.lr = 0x830772DC;
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

__attribute__((alias("__imp__sub_830772F0"))) PPC_WEAK_FUNC(sub_830772F0);
PPC_FUNC_IMPL(__imp__sub_830772F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-12968
	ctx.r5.s64 = ctx.r10.s64 + -12968;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-12996
	ctx.r4.s64 = ctx.r10.s64 + -12996;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,30756
	ctx.r31.s64 = ctx.r10.s64 + 30756;
	// addi r10,r11,11800
	ctx.r10.s64 = ctx.r11.s64 + 11800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83077348;
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
	// addi r3,r8,30328
	ctx.r3.s64 = ctx.r8.s64 + 30328;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29912
	ctx.r11.s64 = ctx.r9.s64 + -29912;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83077378;
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

__attribute__((alias("__imp__sub_83077390"))) PPC_WEAK_FUNC(sub_83077390);
PPC_FUNC_IMPL(__imp__sub_83077390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-12912
	ctx.r6.s64 = ctx.r10.s64 + -12912;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-12968
	ctx.r5.s64 = ctx.r10.s64 + -12968;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-12944
	ctx.r4.s64 = ctx.r10.s64 + -12944;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,32268
	ctx.r31.s64 = ctx.r10.s64 + 32268;
	// addi r10,r11,-3848
	ctx.r10.s64 = ctx.r11.s64 + -3848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830773E8;
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
	// addi r3,r8,30408
	ctx.r3.s64 = ctx.r8.s64 + 30408;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29800
	ctx.r11.s64 = ctx.r9.s64 + -29800;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83077418;
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

__attribute__((alias("__imp__sub_83077430"))) PPC_WEAK_FUNC(sub_83077430);
PPC_FUNC_IMPL(__imp__sub_83077430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-12876
	ctx.r5.s64 = ctx.r10.s64 + -12876;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-12900
	ctx.r4.s64 = ctx.r10.s64 + -12900;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,30308
	ctx.r31.s64 = ctx.r10.s64 + 30308;
	// addi r10,r11,-10440
	ctx.r10.s64 = ctx.r11.s64 + -10440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83077488;
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
	// addi r3,r8,30488
	ctx.r3.s64 = ctx.r8.s64 + 30488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29712
	ctx.r11.s64 = ctx.r9.s64 + -29712;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830774B8;
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

__attribute__((alias("__imp__sub_830774D0"))) PPC_WEAK_FUNC(sub_830774D0);
PPC_FUNC_IMPL(__imp__sub_830774D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,3488
	ctx.r9.s64 = ctx.r10.s64 + 3488;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-12876
	ctx.r5.s64 = ctx.r10.s64 + -12876;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-12852
	ctx.r4.s64 = ctx.r10.s64 + -12852;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,31984
	ctx.r31.s64 = ctx.r10.s64 + 31984;
	// addi r10,r11,-10280
	ctx.r10.s64 = ctx.r11.s64 + -10280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83077528;
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
	// addi r3,r8,30568
	ctx.r3.s64 = ctx.r8.s64 + 30568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29368
	ctx.r11.s64 = ctx.r9.s64 + -29368;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83077558;
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

__attribute__((alias("__imp__sub_83077570"))) PPC_WEAK_FUNC(sub_83077570);
PPC_FUNC_IMPL(__imp__sub_83077570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,3488
	ctx.r9.s64 = ctx.r10.s64 + 3488;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-12784
	ctx.r5.s64 = ctx.r10.s64 + -12784;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,71
	ctx.r9.s64 = 71;
	// addi r4,r10,-12820
	ctx.r4.s64 = ctx.r10.s64 + -12820;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,31340
	ctx.r31.s64 = ctx.r10.s64 + 31340;
	// addi r10,r11,-10112
	ctx.r10.s64 = ctx.r11.s64 + -10112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830775C8;
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
	// addi r3,r8,30648
	ctx.r3.s64 = ctx.r8.s64 + 30648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29024
	ctx.r11.s64 = ctx.r9.s64 + -29024;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830775F8;
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

__attribute__((alias("__imp__sub_83077610"))) PPC_WEAK_FUNC(sub_83077610);
PPC_FUNC_IMPL(__imp__sub_83077610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-12732
	ctx.r5.s64 = ctx.r10.s64 + -12732;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-12752
	ctx.r4.s64 = ctx.r10.s64 + -12752;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,30540
	ctx.r31.s64 = ctx.r10.s64 + 30540;
	// addi r10,r11,-3848
	ctx.r10.s64 = ctx.r11.s64 + -3848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83077668;
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
	// addi r3,r8,30728
	ctx.r3.s64 = ctx.r8.s64 + 30728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-28312
	ctx.r11.s64 = ctx.r9.s64 + -28312;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83077698;
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

__attribute__((alias("__imp__sub_830776B0"))) PPC_WEAK_FUNC(sub_830776B0);
PPC_FUNC_IMPL(__imp__sub_830776B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-12684
	ctx.r5.s64 = ctx.r10.s64 + -12684;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-12708
	ctx.r4.s64 = ctx.r10.s64 + -12708;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,30124
	ctx.r31.s64 = ctx.r10.s64 + 30124;
	// addi r10,r11,1480
	ctx.r10.s64 = ctx.r11.s64 + 1480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83077708;
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
	// addi r3,r8,30808
	ctx.r3.s64 = ctx.r8.s64 + 30808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-28016
	ctx.r11.s64 = ctx.r9.s64 + -28016;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83077738;
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

__attribute__((alias("__imp__sub_83077750"))) PPC_WEAK_FUNC(sub_83077750);
PPC_FUNC_IMPL(__imp__sub_83077750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-12636
	ctx.r5.s64 = ctx.r10.s64 + -12636;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-12660
	ctx.r4.s64 = ctx.r10.s64 + -12660;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,31240
	ctx.r31.s64 = ctx.r10.s64 + 31240;
	// addi r10,r11,-9576
	ctx.r10.s64 = ctx.r11.s64 + -9576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830777A8;
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
	// addi r3,r8,30888
	ctx.r3.s64 = ctx.r8.s64 + 30888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27672
	ctx.r11.s64 = ctx.r9.s64 + -27672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830777D8;
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

__attribute__((alias("__imp__sub_830777F0"))) PPC_WEAK_FUNC(sub_830777F0);
PPC_FUNC_IMPL(__imp__sub_830777F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,3576
	ctx.r9.s64 = ctx.r10.s64 + 3576;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-12636
	ctx.r5.s64 = ctx.r10.s64 + -12636;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-12612
	ctx.r4.s64 = ctx.r10.s64 + -12612;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,31440
	ctx.r31.s64 = ctx.r10.s64 + 31440;
	// addi r10,r11,-9408
	ctx.r10.s64 = ctx.r11.s64 + -9408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83077848;
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
	// addi r3,r8,30968
	ctx.r3.s64 = ctx.r8.s64 + 30968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27280
	ctx.r11.s64 = ctx.r9.s64 + -27280;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83077878;
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

__attribute__((alias("__imp__sub_83077890"))) PPC_WEAK_FUNC(sub_83077890);
PPC_FUNC_IMPL(__imp__sub_83077890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r9,r10,3664
	ctx.r9.s64 = ctx.r10.s64 + 3664;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-12556
	ctx.r5.s64 = ctx.r10.s64 + -12556;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-12584
	ctx.r4.s64 = ctx.r10.s64 + -12584;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,30948
	ctx.r31.s64 = ctx.r10.s64 + 30948;
	// addi r10,r11,1480
	ctx.r10.s64 = ctx.r11.s64 + 1480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830778E8;
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
	// addi r3,r8,31048
	ctx.r3.s64 = ctx.r8.s64 + 31048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26856
	ctx.r11.s64 = ctx.r9.s64 + -26856;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83077918;
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

__attribute__((alias("__imp__sub_83077930"))) PPC_WEAK_FUNC(sub_83077930);
PPC_FUNC_IMPL(__imp__sub_83077930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32103
	ctx.r10.s64 = -2103902208;
	// lis r11,-32103
	ctx.r11.s64 = -2103902208;
	// addi r9,r10,3816
	ctx.r9.s64 = ctx.r10.s64 + 3816;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,7528
	ctx.r6.s64 = ctx.r10.s64 + 7528;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-12556
	ctx.r5.s64 = ctx.r10.s64 + -12556;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-12532
	ctx.r4.s64 = ctx.r10.s64 + -12532;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r31,r10,31584
	ctx.r31.s64 = ctx.r10.s64 + 31584;
	// addi r10,r11,-9240
	ctx.r10.s64 = ctx.r11.s64 + -9240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83077988;
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
	// addi r3,r8,31128
	ctx.r3.s64 = ctx.r8.s64 + 31128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26608
	ctx.r11.s64 = ctx.r9.s64 + -26608;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830779B8;
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

__attribute__((alias("__imp__sub_830779D0"))) PPC_WEAK_FUNC(sub_830779D0);
PPC_FUNC_IMPL(__imp__sub_830779D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,29304
	ctx.r3.s64 = ctx.r11.s64 + 29304;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830779E0"))) PPC_WEAK_FUNC(sub_830779E0);
PPC_FUNC_IMPL(__imp__sub_830779E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,29320
	ctx.r3.s64 = ctx.r11.s64 + 29320;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830779F0"))) PPC_WEAK_FUNC(sub_830779F0);
PPC_FUNC_IMPL(__imp__sub_830779F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,29336
	ctx.r3.s64 = ctx.r11.s64 + 29336;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077A00"))) PPC_WEAK_FUNC(sub_83077A00);
PPC_FUNC_IMPL(__imp__sub_83077A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,29352
	ctx.r3.s64 = ctx.r11.s64 + 29352;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077A10"))) PPC_WEAK_FUNC(sub_83077A10);
PPC_FUNC_IMPL(__imp__sub_83077A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,29368
	ctx.r3.s64 = ctx.r11.s64 + 29368;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077A20"))) PPC_WEAK_FUNC(sub_83077A20);
PPC_FUNC_IMPL(__imp__sub_83077A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,29384
	ctx.r3.s64 = ctx.r11.s64 + 29384;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077A30"))) PPC_WEAK_FUNC(sub_83077A30);
PPC_FUNC_IMPL(__imp__sub_83077A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,29400
	ctx.r3.s64 = ctx.r11.s64 + 29400;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077A40"))) PPC_WEAK_FUNC(sub_83077A40);
PPC_FUNC_IMPL(__imp__sub_83077A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,29416
	ctx.r3.s64 = ctx.r11.s64 + 29416;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077A50"))) PPC_WEAK_FUNC(sub_83077A50);
PPC_FUNC_IMPL(__imp__sub_83077A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,29432
	ctx.r3.s64 = ctx.r11.s64 + 29432;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077A60"))) PPC_WEAK_FUNC(sub_83077A60);
PPC_FUNC_IMPL(__imp__sub_83077A60) {
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
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r5,r9,-12476
	ctx.r5.s64 = ctx.r9.s64 + -12476;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r6,r11,27376
	ctx.r6.s64 = ctx.r11.s64 + 27376;
	// li r8,66
	ctx.r8.s64 = 66;
	// addi r4,r9,-12500
	ctx.r4.s64 = ctx.r9.s64 + -12500;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// lis r11,-32104
	ctx.r11.s64 = -2103967744;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32104
	ctx.r10.s64 = -2103967744;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r3,r9,30492
	ctx.r3.s64 = ctx.r9.s64 + 30492;
	// addi r10,r10,21872
	ctx.r10.s64 = ctx.r10.s64 + 21872;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r9,r11,-24792
	ctx.r9.s64 = ctx.r11.s64 + -24792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x83077ABC;
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

__attribute__((alias("__imp__sub_83077AD0"))) PPC_WEAK_FUNC(sub_83077AD0);
PPC_FUNC_IMPL(__imp__sub_83077AD0) {
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
	// addi r11,r11,-32496
	ctx.r11.s64 = ctx.r11.s64 + -32496;
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

__attribute__((alias("__imp__sub_83077B00"))) PPC_WEAK_FUNC(sub_83077B00);
PPC_FUNC_IMPL(__imp__sub_83077B00) {
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
	// addi r11,r11,-32352
	ctx.r11.s64 = ctx.r11.s64 + -32352;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077B30"))) PPC_WEAK_FUNC(sub_83077B30);
PPC_FUNC_IMPL(__imp__sub_83077B30) {
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
	// addi r11,r11,-32336
	ctx.r11.s64 = ctx.r11.s64 + -32336;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077B78"))) PPC_WEAK_FUNC(sub_83077B78);
PPC_FUNC_IMPL(__imp__sub_83077B78) {
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
	// addi r11,r11,-32464
	ctx.r11.s64 = ctx.r11.s64 + -32464;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077BC0"))) PPC_WEAK_FUNC(sub_83077BC0);
PPC_FUNC_IMPL(__imp__sub_83077BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,10924
	ctx.r4.s64 = ctx.r11.s64 + 10924;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32296
	ctx.r3.s64 = ctx.r11.s64 + -32296;
	// b 0x824340d0
	sub_824340D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077BE0"))) PPC_WEAK_FUNC(sub_83077BE0);
PPC_FUNC_IMPL(__imp__sub_83077BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,10948
	ctx.r4.s64 = ctx.r11.s64 + 10948;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32472
	ctx.r3.s64 = ctx.r11.s64 + -32472;
	// b 0x824340d0
	sub_824340D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077C00"))) PPC_WEAK_FUNC(sub_83077C00);
PPC_FUNC_IMPL(__imp__sub_83077C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,10964
	ctx.r4.s64 = ctx.r11.s64 + 10964;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32596
	ctx.r3.s64 = ctx.r11.s64 + -32596;
	// b 0x824340d0
	sub_824340D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077C20"))) PPC_WEAK_FUNC(sub_83077C20);
PPC_FUNC_IMPL(__imp__sub_83077C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,10992
	ctx.r4.s64 = ctx.r11.s64 + 10992;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32272
	ctx.r3.s64 = ctx.r11.s64 + -32272;
	// b 0x824340d0
	sub_824340D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077C40"))) PPC_WEAK_FUNC(sub_83077C40);
PPC_FUNC_IMPL(__imp__sub_83077C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,11024
	ctx.r4.s64 = ctx.r11.s64 + 11024;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-32416
	ctx.r3.s64 = ctx.r11.s64 + -32416;
	// b 0x824340d0
	sub_824340D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83077C60"))) PPC_WEAK_FUNC(sub_83077C60);
PPC_FUNC_IMPL(__imp__sub_83077C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25828
	ctx.r4.s64 = ctx.r11.s64 + 25828;
	// bl 0x824215d0
	ctx.lr = 0x83077C7C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32667(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32667, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077C98"))) PPC_WEAK_FUNC(sub_83077C98);
PPC_FUNC_IMPL(__imp__sub_83077C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25832
	ctx.r4.s64 = ctx.r11.s64 + 25832;
	// bl 0x824215d0
	ctx.lr = 0x83077CB4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32264(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32264, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077CD0"))) PPC_WEAK_FUNC(sub_83077CD0);
PPC_FUNC_IMPL(__imp__sub_83077CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25836
	ctx.r4.s64 = ctx.r11.s64 + 25836;
	// bl 0x824215d0
	ctx.lr = 0x83077CEC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32399(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32399, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077D08"))) PPC_WEAK_FUNC(sub_83077D08);
PPC_FUNC_IMPL(__imp__sub_83077D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25840
	ctx.r4.s64 = ctx.r11.s64 + 25840;
	// bl 0x824215d0
	ctx.lr = 0x83077D24;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32574(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32574, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077D40"))) PPC_WEAK_FUNC(sub_83077D40);
PPC_FUNC_IMPL(__imp__sub_83077D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25844
	ctx.r4.s64 = ctx.r11.s64 + 25844;
	// bl 0x824215d0
	ctx.lr = 0x83077D5C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32671(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32671, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077D78"))) PPC_WEAK_FUNC(sub_83077D78);
PPC_FUNC_IMPL(__imp__sub_83077D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25848
	ctx.r4.s64 = ctx.r11.s64 + 25848;
	// bl 0x824215d0
	ctx.lr = 0x83077D94;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32669(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32669, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077DB0"))) PPC_WEAK_FUNC(sub_83077DB0);
PPC_FUNC_IMPL(__imp__sub_83077DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25852
	ctx.r4.s64 = ctx.r11.s64 + 25852;
	// bl 0x824215d0
	ctx.lr = 0x83077DCC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32417(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32417, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077DE8"))) PPC_WEAK_FUNC(sub_83077DE8);
PPC_FUNC_IMPL(__imp__sub_83077DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25856
	ctx.r4.s64 = ctx.r11.s64 + 25856;
	// bl 0x824215d0
	ctx.lr = 0x83077E04;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32422(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32422, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077E20"))) PPC_WEAK_FUNC(sub_83077E20);
PPC_FUNC_IMPL(__imp__sub_83077E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25860
	ctx.r4.s64 = ctx.r11.s64 + 25860;
	// bl 0x824215d0
	ctx.lr = 0x83077E3C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32499(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32499, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077E58"))) PPC_WEAK_FUNC(sub_83077E58);
PPC_FUNC_IMPL(__imp__sub_83077E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25864
	ctx.r4.s64 = ctx.r11.s64 + 25864;
	// bl 0x824215d0
	ctx.lr = 0x83077E74;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32212(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32212, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077E90"))) PPC_WEAK_FUNC(sub_83077E90);
PPC_FUNC_IMPL(__imp__sub_83077E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25868
	ctx.r4.s64 = ctx.r11.s64 + 25868;
	// bl 0x824215d0
	ctx.lr = 0x83077EAC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32632(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32632, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077EC8"))) PPC_WEAK_FUNC(sub_83077EC8);
PPC_FUNC_IMPL(__imp__sub_83077EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25872
	ctx.r4.s64 = ctx.r11.s64 + 25872;
	// bl 0x824215d0
	ctx.lr = 0x83077EE4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32668(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32668, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077F00"))) PPC_WEAK_FUNC(sub_83077F00);
PPC_FUNC_IMPL(__imp__sub_83077F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25876
	ctx.r4.s64 = ctx.r11.s64 + 25876;
	// bl 0x824215d0
	ctx.lr = 0x83077F1C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32573(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32573, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077F38"))) PPC_WEAK_FUNC(sub_83077F38);
PPC_FUNC_IMPL(__imp__sub_83077F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25880
	ctx.r4.s64 = ctx.r11.s64 + 25880;
	// bl 0x824215d0
	ctx.lr = 0x83077F54;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32576(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32576, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077F70"))) PPC_WEAK_FUNC(sub_83077F70);
PPC_FUNC_IMPL(__imp__sub_83077F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25884
	ctx.r4.s64 = ctx.r11.s64 + 25884;
	// bl 0x824215d0
	ctx.lr = 0x83077F8C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32419(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32419, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077FA8"))) PPC_WEAK_FUNC(sub_83077FA8);
PPC_FUNC_IMPL(__imp__sub_83077FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25888
	ctx.r4.s64 = ctx.r11.s64 + 25888;
	// bl 0x824215d0
	ctx.lr = 0x83077FC4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32681(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32681, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83077FE0"))) PPC_WEAK_FUNC(sub_83077FE0);
PPC_FUNC_IMPL(__imp__sub_83077FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25892
	ctx.r4.s64 = ctx.r11.s64 + 25892;
	// bl 0x824215d0
	ctx.lr = 0x83077FFC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32521(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32521, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078018"))) PPC_WEAK_FUNC(sub_83078018);
PPC_FUNC_IMPL(__imp__sub_83078018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25896
	ctx.r4.s64 = ctx.r11.s64 + 25896;
	// bl 0x824215d0
	ctx.lr = 0x83078034;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32498(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32498, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078050"))) PPC_WEAK_FUNC(sub_83078050);
PPC_FUNC_IMPL(__imp__sub_83078050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25900
	ctx.r4.s64 = ctx.r11.s64 + 25900;
	// bl 0x824215d0
	ctx.lr = 0x8307806C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32610(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32610, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078088"))) PPC_WEAK_FUNC(sub_83078088);
PPC_FUNC_IMPL(__imp__sub_83078088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25904
	ctx.r4.s64 = ctx.r11.s64 + 25904;
	// bl 0x824215d0
	ctx.lr = 0x830780A4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32355(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32355, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830780C0"))) PPC_WEAK_FUNC(sub_830780C0);
PPC_FUNC_IMPL(__imp__sub_830780C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25908
	ctx.r4.s64 = ctx.r11.s64 + 25908;
	// bl 0x824215d0
	ctx.lr = 0x830780DC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32502(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32502, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830780F8"))) PPC_WEAK_FUNC(sub_830780F8);
PPC_FUNC_IMPL(__imp__sub_830780F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25912
	ctx.r4.s64 = ctx.r11.s64 + 25912;
	// bl 0x824215d0
	ctx.lr = 0x83078114;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32216(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32216, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078130"))) PPC_WEAK_FUNC(sub_83078130);
PPC_FUNC_IMPL(__imp__sub_83078130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25916
	ctx.r4.s64 = ctx.r11.s64 + 25916;
	// bl 0x824215d0
	ctx.lr = 0x8307814C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32353(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32353, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078168"))) PPC_WEAK_FUNC(sub_83078168);
PPC_FUNC_IMPL(__imp__sub_83078168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25920
	ctx.r4.s64 = ctx.r11.s64 + 25920;
	// bl 0x824215d0
	ctx.lr = 0x83078184;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32534(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32534, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830781A0"))) PPC_WEAK_FUNC(sub_830781A0);
PPC_FUNC_IMPL(__imp__sub_830781A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25924
	ctx.r4.s64 = ctx.r11.s64 + 25924;
	// bl 0x824215d0
	ctx.lr = 0x830781BC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32241(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32241, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830781D8"))) PPC_WEAK_FUNC(sub_830781D8);
PPC_FUNC_IMPL(__imp__sub_830781D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25928
	ctx.r4.s64 = ctx.r11.s64 + 25928;
	// bl 0x824215d0
	ctx.lr = 0x830781F4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32741(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32741, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078210"))) PPC_WEAK_FUNC(sub_83078210);
PPC_FUNC_IMPL(__imp__sub_83078210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25932
	ctx.r4.s64 = ctx.r11.s64 + 25932;
	// bl 0x824215d0
	ctx.lr = 0x8307822C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32666(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32666, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078248"))) PPC_WEAK_FUNC(sub_83078248);
PPC_FUNC_IMPL(__imp__sub_83078248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25936
	ctx.r4.s64 = ctx.r11.s64 + 25936;
	// bl 0x824215d0
	ctx.lr = 0x83078264;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32670(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32670, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078280"))) PPC_WEAK_FUNC(sub_83078280);
PPC_FUNC_IMPL(__imp__sub_83078280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25940
	ctx.r4.s64 = ctx.r11.s64 + 25940;
	// bl 0x824215d0
	ctx.lr = 0x8307829C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32242(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32242, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830782B8"))) PPC_WEAK_FUNC(sub_830782B8);
PPC_FUNC_IMPL(__imp__sub_830782B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25944
	ctx.r4.s64 = ctx.r11.s64 + 25944;
	// bl 0x824215d0
	ctx.lr = 0x830782D4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32400(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32400, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830782F0"))) PPC_WEAK_FUNC(sub_830782F0);
PPC_FUNC_IMPL(__imp__sub_830782F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25948
	ctx.r4.s64 = ctx.r11.s64 + 25948;
	// bl 0x824215d0
	ctx.lr = 0x8307830C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32523(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32523, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078328"))) PPC_WEAK_FUNC(sub_83078328);
PPC_FUNC_IMPL(__imp__sub_83078328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25952
	ctx.r4.s64 = ctx.r11.s64 + 25952;
	// bl 0x824215d0
	ctx.lr = 0x83078344;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32587(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32587, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078360"))) PPC_WEAK_FUNC(sub_83078360);
PPC_FUNC_IMPL(__imp__sub_83078360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25956
	ctx.r4.s64 = ctx.r11.s64 + 25956;
	// bl 0x824215d0
	ctx.lr = 0x8307837C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32586(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32586, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078398"))) PPC_WEAK_FUNC(sub_83078398);
PPC_FUNC_IMPL(__imp__sub_83078398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25960
	ctx.r4.s64 = ctx.r11.s64 + 25960;
	// bl 0x824215d0
	ctx.lr = 0x830783B4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32545(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32545, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830783D0"))) PPC_WEAK_FUNC(sub_830783D0);
PPC_FUNC_IMPL(__imp__sub_830783D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25964
	ctx.r4.s64 = ctx.r11.s64 + 25964;
	// bl 0x824215d0
	ctx.lr = 0x830783EC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32742(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32742, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078408"))) PPC_WEAK_FUNC(sub_83078408);
PPC_FUNC_IMPL(__imp__sub_83078408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25968
	ctx.r4.s64 = ctx.r11.s64 + 25968;
	// bl 0x824215d0
	ctx.lr = 0x83078424;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32547(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32547, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078440"))) PPC_WEAK_FUNC(sub_83078440);
PPC_FUNC_IMPL(__imp__sub_83078440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25972
	ctx.r4.s64 = ctx.r11.s64 + 25972;
	// bl 0x824215d0
	ctx.lr = 0x8307845C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32354(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32354, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078478"))) PPC_WEAK_FUNC(sub_83078478);
PPC_FUNC_IMPL(__imp__sub_83078478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25976
	ctx.r4.s64 = ctx.r11.s64 + 25976;
	// bl 0x824215d0
	ctx.lr = 0x83078494;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32497(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32497, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830784B0"))) PPC_WEAK_FUNC(sub_830784B0);
PPC_FUNC_IMPL(__imp__sub_830784B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25980
	ctx.r4.s64 = ctx.r11.s64 + 25980;
	// bl 0x824215d0
	ctx.lr = 0x830784CC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32629(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32629, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830784E8"))) PPC_WEAK_FUNC(sub_830784E8);
PPC_FUNC_IMPL(__imp__sub_830784E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25984
	ctx.r4.s64 = ctx.r11.s64 + 25984;
	// bl 0x824215d0
	ctx.lr = 0x83078504;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32397(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32397, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078520"))) PPC_WEAK_FUNC(sub_83078520);
PPC_FUNC_IMPL(__imp__sub_83078520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25988
	ctx.r4.s64 = ctx.r11.s64 + 25988;
	// bl 0x824215d0
	ctx.lr = 0x8307853C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32262(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32262, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078558"))) PPC_WEAK_FUNC(sub_83078558);
PPC_FUNC_IMPL(__imp__sub_83078558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25992
	ctx.r4.s64 = ctx.r11.s64 + 25992;
	// bl 0x824215d0
	ctx.lr = 0x83078574;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32665(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32665, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078590"))) PPC_WEAK_FUNC(sub_83078590);
PPC_FUNC_IMPL(__imp__sub_83078590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,25996
	ctx.r4.s64 = ctx.r11.s64 + 25996;
	// bl 0x824215d0
	ctx.lr = 0x830785AC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32214(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32214, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830785C8"))) PPC_WEAK_FUNC(sub_830785C8);
PPC_FUNC_IMPL(__imp__sub_830785C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26000
	ctx.r4.s64 = ctx.r11.s64 + 26000;
	// bl 0x824215d0
	ctx.lr = 0x830785E4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32533(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32533, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078600"))) PPC_WEAK_FUNC(sub_83078600);
PPC_FUNC_IMPL(__imp__sub_83078600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26004
	ctx.r4.s64 = ctx.r11.s64 + 26004;
	// bl 0x824215d0
	ctx.lr = 0x8307861C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32714(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32714, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078638"))) PPC_WEAK_FUNC(sub_83078638);
PPC_FUNC_IMPL(__imp__sub_83078638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26008
	ctx.r4.s64 = ctx.r11.s64 + 26008;
	// bl 0x824215d0
	ctx.lr = 0x83078654;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32263(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32263, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078670"))) PPC_WEAK_FUNC(sub_83078670);
PPC_FUNC_IMPL(__imp__sub_83078670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26012
	ctx.r4.s64 = ctx.r11.s64 + 26012;
	// bl 0x824215d0
	ctx.lr = 0x8307868C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32696(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32696, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830786A8"))) PPC_WEAK_FUNC(sub_830786A8);
PPC_FUNC_IMPL(__imp__sub_830786A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26016
	ctx.r4.s64 = ctx.r11.s64 + 26016;
	// bl 0x824215d0
	ctx.lr = 0x830786C4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32524(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32524, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830786E0"))) PPC_WEAK_FUNC(sub_830786E0);
PPC_FUNC_IMPL(__imp__sub_830786E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26020
	ctx.r4.s64 = ctx.r11.s64 + 26020;
	// bl 0x824215d0
	ctx.lr = 0x830786FC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32715(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32715, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078718"))) PPC_WEAK_FUNC(sub_83078718);
PPC_FUNC_IMPL(__imp__sub_83078718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26024
	ctx.r4.s64 = ctx.r11.s64 + 26024;
	// bl 0x824215d0
	ctx.lr = 0x83078734;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32693(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32693, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078750"))) PPC_WEAK_FUNC(sub_83078750);
PPC_FUNC_IMPL(__imp__sub_83078750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26028
	ctx.r4.s64 = ctx.r11.s64 + 26028;
	// bl 0x824215d0
	ctx.lr = 0x8307876C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32631(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32631, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078788"))) PPC_WEAK_FUNC(sub_83078788);
PPC_FUNC_IMPL(__imp__sub_83078788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26032
	ctx.r4.s64 = ctx.r11.s64 + 26032;
	// bl 0x824215d0
	ctx.lr = 0x830787A4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32215(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32215, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830787C0"))) PPC_WEAK_FUNC(sub_830787C0);
PPC_FUNC_IMPL(__imp__sub_830787C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26036
	ctx.r4.s64 = ctx.r11.s64 + 26036;
	// bl 0x824215d0
	ctx.lr = 0x830787DC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32536(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32536, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830787F8"))) PPC_WEAK_FUNC(sub_830787F8);
PPC_FUNC_IMPL(__imp__sub_830787F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26040
	ctx.r4.s64 = ctx.r11.s64 + 26040;
	// bl 0x824215d0
	ctx.lr = 0x83078814;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32684(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32684, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078830"))) PPC_WEAK_FUNC(sub_83078830);
PPC_FUNC_IMPL(__imp__sub_83078830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26044
	ctx.r4.s64 = ctx.r11.s64 + 26044;
	// bl 0x824215d0
	ctx.lr = 0x8307884C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32683(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32683, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078868"))) PPC_WEAK_FUNC(sub_83078868);
PPC_FUNC_IMPL(__imp__sub_83078868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26048
	ctx.r4.s64 = ctx.r11.s64 + 26048;
	// bl 0x824215d0
	ctx.lr = 0x83078884;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32504(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32504, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830788A0"))) PPC_WEAK_FUNC(sub_830788A0);
PPC_FUNC_IMPL(__imp__sub_830788A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26052
	ctx.r4.s64 = ctx.r11.s64 + 26052;
	// bl 0x824215d0
	ctx.lr = 0x830788BC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32424(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32424, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830788D8"))) PPC_WEAK_FUNC(sub_830788D8);
PPC_FUNC_IMPL(__imp__sub_830788D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26056
	ctx.r4.s64 = ctx.r11.s64 + 26056;
	// bl 0x824215d0
	ctx.lr = 0x830788F4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32418(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32418, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078910"))) PPC_WEAK_FUNC(sub_83078910);
PPC_FUNC_IMPL(__imp__sub_83078910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26060
	ctx.r4.s64 = ctx.r11.s64 + 26060;
	// bl 0x824215d0
	ctx.lr = 0x8307892C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32548(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32548, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078948"))) PPC_WEAK_FUNC(sub_83078948);
PPC_FUNC_IMPL(__imp__sub_83078948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26064
	ctx.r4.s64 = ctx.r11.s64 + 26064;
	// bl 0x824215d0
	ctx.lr = 0x83078964;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32503(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32503, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078980"))) PPC_WEAK_FUNC(sub_83078980);
PPC_FUNC_IMPL(__imp__sub_83078980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26068
	ctx.r4.s64 = ctx.r11.s64 + 26068;
	// bl 0x824215d0
	ctx.lr = 0x8307899C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32609(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32609, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830789B8"))) PPC_WEAK_FUNC(sub_830789B8);
PPC_FUNC_IMPL(__imp__sub_830789B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26072
	ctx.r4.s64 = ctx.r11.s64 + 26072;
	// bl 0x824215d0
	ctx.lr = 0x830789D4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32423(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32423, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830789F0"))) PPC_WEAK_FUNC(sub_830789F0);
PPC_FUNC_IMPL(__imp__sub_830789F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26076
	ctx.r4.s64 = ctx.r11.s64 + 26076;
	// bl 0x824215d0
	ctx.lr = 0x83078A0C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32682(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32682, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078A28"))) PPC_WEAK_FUNC(sub_83078A28);
PPC_FUNC_IMPL(__imp__sub_83078A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26080
	ctx.r4.s64 = ctx.r11.s64 + 26080;
	// bl 0x824215d0
	ctx.lr = 0x83078A44;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32743(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32743, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078A60"))) PPC_WEAK_FUNC(sub_83078A60);
PPC_FUNC_IMPL(__imp__sub_83078A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26084
	ctx.r4.s64 = ctx.r11.s64 + 26084;
	// bl 0x824215d0
	ctx.lr = 0x83078A7C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32211(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32211, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078A98"))) PPC_WEAK_FUNC(sub_83078A98);
PPC_FUNC_IMPL(__imp__sub_83078A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26088
	ctx.r4.s64 = ctx.r11.s64 + 26088;
	// bl 0x824215d0
	ctx.lr = 0x83078AB4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32575(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32575, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078AD0"))) PPC_WEAK_FUNC(sub_83078AD0);
PPC_FUNC_IMPL(__imp__sub_83078AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26092
	ctx.r4.s64 = ctx.r11.s64 + 26092;
	// bl 0x824215d0
	ctx.lr = 0x83078AEC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32535(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32535, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078B08"))) PPC_WEAK_FUNC(sub_83078B08);
PPC_FUNC_IMPL(__imp__sub_83078B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26096
	ctx.r4.s64 = ctx.r11.s64 + 26096;
	// bl 0x824215d0
	ctx.lr = 0x83078B24;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32356(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32356, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078B40"))) PPC_WEAK_FUNC(sub_83078B40);
PPC_FUNC_IMPL(__imp__sub_83078B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26100
	ctx.r4.s64 = ctx.r11.s64 + 26100;
	// bl 0x824215d0
	ctx.lr = 0x83078B5C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32261(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32261, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078B78"))) PPC_WEAK_FUNC(sub_83078B78);
PPC_FUNC_IMPL(__imp__sub_83078B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26104
	ctx.r4.s64 = ctx.r11.s64 + 26104;
	// bl 0x824215d0
	ctx.lr = 0x83078B94;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32716(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32716, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078BB0"))) PPC_WEAK_FUNC(sub_83078BB0);
PPC_FUNC_IMPL(__imp__sub_83078BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26108
	ctx.r4.s64 = ctx.r11.s64 + 26108;
	// bl 0x824215d0
	ctx.lr = 0x83078BCC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32588(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32588, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078BE8"))) PPC_WEAK_FUNC(sub_83078BE8);
PPC_FUNC_IMPL(__imp__sub_83078BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26112
	ctx.r4.s64 = ctx.r11.s64 + 26112;
	// bl 0x824215d0
	ctx.lr = 0x83078C04;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32672(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32672, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078C20"))) PPC_WEAK_FUNC(sub_83078C20);
PPC_FUNC_IMPL(__imp__sub_83078C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26116
	ctx.r4.s64 = ctx.r11.s64 + 26116;
	// bl 0x824215d0
	ctx.lr = 0x83078C3C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32500(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32500, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078C58"))) PPC_WEAK_FUNC(sub_83078C58);
PPC_FUNC_IMPL(__imp__sub_83078C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26120
	ctx.r4.s64 = ctx.r11.s64 + 26120;
	// bl 0x824215d0
	ctx.lr = 0x83078C74;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32398(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32398, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078C90"))) PPC_WEAK_FUNC(sub_83078C90);
PPC_FUNC_IMPL(__imp__sub_83078C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26124
	ctx.r4.s64 = ctx.r11.s64 + 26124;
	// bl 0x824215d0
	ctx.lr = 0x83078CAC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32744(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32744, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078CC8"))) PPC_WEAK_FUNC(sub_83078CC8);
PPC_FUNC_IMPL(__imp__sub_83078CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26128
	ctx.r4.s64 = ctx.r11.s64 + 26128;
	// bl 0x824215d0
	ctx.lr = 0x83078CE4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32607(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32607, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078D00"))) PPC_WEAK_FUNC(sub_83078D00);
PPC_FUNC_IMPL(__imp__sub_83078D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26132
	ctx.r4.s64 = ctx.r11.s64 + 26132;
	// bl 0x824215d0
	ctx.lr = 0x83078D1C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32630(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32630, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078D38"))) PPC_WEAK_FUNC(sub_83078D38);
PPC_FUNC_IMPL(__imp__sub_83078D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26136
	ctx.r4.s64 = ctx.r11.s64 + 26136;
	// bl 0x824215d0
	ctx.lr = 0x83078D54;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32501(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32501, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078D70"))) PPC_WEAK_FUNC(sub_83078D70);
PPC_FUNC_IMPL(__imp__sub_83078D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26140
	ctx.r4.s64 = ctx.r11.s64 + 26140;
	// bl 0x824215d0
	ctx.lr = 0x83078D8C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32694(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32694, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078DA8"))) PPC_WEAK_FUNC(sub_83078DA8);
PPC_FUNC_IMPL(__imp__sub_83078DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26144
	ctx.r4.s64 = ctx.r11.s64 + 26144;
	// bl 0x824215d0
	ctx.lr = 0x83078DC4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32213(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32213, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078DE0"))) PPC_WEAK_FUNC(sub_83078DE0);
PPC_FUNC_IMPL(__imp__sub_83078DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26148
	ctx.r4.s64 = ctx.r11.s64 + 26148;
	// bl 0x824215d0
	ctx.lr = 0x83078DFC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32585(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32585, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078E18"))) PPC_WEAK_FUNC(sub_83078E18);
PPC_FUNC_IMPL(__imp__sub_83078E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26152
	ctx.r4.s64 = ctx.r11.s64 + 26152;
	// bl 0x824215d0
	ctx.lr = 0x83078E34;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32244(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32244, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078E50"))) PPC_WEAK_FUNC(sub_83078E50);
PPC_FUNC_IMPL(__imp__sub_83078E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26156
	ctx.r4.s64 = ctx.r11.s64 + 26156;
	// bl 0x824215d0
	ctx.lr = 0x83078E6C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32546(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32546, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078E88"))) PPC_WEAK_FUNC(sub_83078E88);
PPC_FUNC_IMPL(__imp__sub_83078E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26160
	ctx.r4.s64 = ctx.r11.s64 + 26160;
	// bl 0x824215d0
	ctx.lr = 0x83078EA4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32612(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32612, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078EC0"))) PPC_WEAK_FUNC(sub_83078EC0);
PPC_FUNC_IMPL(__imp__sub_83078EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26164
	ctx.r4.s64 = ctx.r11.s64 + 26164;
	// bl 0x824215d0
	ctx.lr = 0x83078EDC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32522(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32522, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078EF8"))) PPC_WEAK_FUNC(sub_83078EF8);
PPC_FUNC_IMPL(__imp__sub_83078EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26168
	ctx.r4.s64 = ctx.r11.s64 + 26168;
	// bl 0x824215d0
	ctx.lr = 0x83078F14;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32611(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32611, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078F30"))) PPC_WEAK_FUNC(sub_83078F30);
PPC_FUNC_IMPL(__imp__sub_83078F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26172
	ctx.r4.s64 = ctx.r11.s64 + 26172;
	// bl 0x824215d0
	ctx.lr = 0x83078F4C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32608(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32608, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078F68"))) PPC_WEAK_FUNC(sub_83078F68);
PPC_FUNC_IMPL(__imp__sub_83078F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26176
	ctx.r4.s64 = ctx.r11.s64 + 26176;
	// bl 0x824215d0
	ctx.lr = 0x83078F84;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32421(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32421, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078FA0"))) PPC_WEAK_FUNC(sub_83078FA0);
PPC_FUNC_IMPL(__imp__sub_83078FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26180
	ctx.r4.s64 = ctx.r11.s64 + 26180;
	// bl 0x824215d0
	ctx.lr = 0x83078FBC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32243(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32243, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83078FD8"))) PPC_WEAK_FUNC(sub_83078FD8);
PPC_FUNC_IMPL(__imp__sub_83078FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26184
	ctx.r4.s64 = ctx.r11.s64 + 26184;
	// bl 0x824215d0
	ctx.lr = 0x83078FF4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32420(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32420, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079010"))) PPC_WEAK_FUNC(sub_83079010);
PPC_FUNC_IMPL(__imp__sub_83079010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26188
	ctx.r4.s64 = ctx.r11.s64 + 26188;
	// bl 0x824215d0
	ctx.lr = 0x8307902C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32606(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32606, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079048"))) PPC_WEAK_FUNC(sub_83079048);
PPC_FUNC_IMPL(__imp__sub_83079048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26192
	ctx.r4.s64 = ctx.r11.s64 + 26192;
	// bl 0x824215d0
	ctx.lr = 0x83079064;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32713(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32713, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079080"))) PPC_WEAK_FUNC(sub_83079080);
PPC_FUNC_IMPL(__imp__sub_83079080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26196
	ctx.r4.s64 = ctx.r11.s64 + 26196;
	// bl 0x824215d0
	ctx.lr = 0x8307909C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32695(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32695, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830790B8"))) PPC_WEAK_FUNC(sub_830790B8);
PPC_FUNC_IMPL(__imp__sub_830790B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26200
	ctx.r4.s64 = ctx.r11.s64 + 26200;
	// bl 0x824215d0
	ctx.lr = 0x830790D4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32605(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32605, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830790F0"))) PPC_WEAK_FUNC(sub_830790F0);
PPC_FUNC_IMPL(__imp__sub_830790F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,26204
	ctx.r4.s64 = ctx.r11.s64 + 26204;
	// bl 0x824215d0
	ctx.lr = 0x8307910C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,-32210(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32210, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079128"))) PPC_WEAK_FUNC(sub_83079128);
PPC_FUNC_IMPL(__imp__sub_83079128) {
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
	// addi r11,r11,-31696
	ctx.r11.s64 = ctx.r11.s64 + -31696;
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

__attribute__((alias("__imp__sub_83079158"))) PPC_WEAK_FUNC(sub_83079158);
PPC_FUNC_IMPL(__imp__sub_83079158) {
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
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079188"))) PPC_WEAK_FUNC(sub_83079188);
PPC_FUNC_IMPL(__imp__sub_83079188) {
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
	// addi r11,r11,-31648
	ctx.r11.s64 = ctx.r11.s64 + -31648;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830791D0"))) PPC_WEAK_FUNC(sub_830791D0);
PPC_FUNC_IMPL(__imp__sub_830791D0) {
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
	// addi r11,r11,-31680
	ctx.r11.s64 = ctx.r11.s64 + -31680;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079218"))) PPC_WEAK_FUNC(sub_83079218);
PPC_FUNC_IMPL(__imp__sub_83079218) {
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
	// addi r11,r11,-31264
	ctx.r11.s64 = ctx.r11.s64 + -31264;
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

__attribute__((alias("__imp__sub_83079248"))) PPC_WEAK_FUNC(sub_83079248);
PPC_FUNC_IMPL(__imp__sub_83079248) {
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
	// addi r11,r11,-31216
	ctx.r11.s64 = ctx.r11.s64 + -31216;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079278"))) PPC_WEAK_FUNC(sub_83079278);
PPC_FUNC_IMPL(__imp__sub_83079278) {
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
	// addi r11,r11,-31200
	ctx.r11.s64 = ctx.r11.s64 + -31200;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830792C0"))) PPC_WEAK_FUNC(sub_830792C0);
PPC_FUNC_IMPL(__imp__sub_830792C0) {
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
	// addi r11,r11,-31248
	ctx.r11.s64 = ctx.r11.s64 + -31248;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079308"))) PPC_WEAK_FUNC(sub_83079308);
PPC_FUNC_IMPL(__imp__sub_83079308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31384
	ctx.r3.s64 = ctx.r11.s64 + 31384;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079318"))) PPC_WEAK_FUNC(sub_83079318);
PPC_FUNC_IMPL(__imp__sub_83079318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// addi r3,r11,-31592
	ctx.r3.s64 = ctx.r11.s64 + -31592;
	// b 0x829c74a0
	sub_829C74A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079328"))) PPC_WEAK_FUNC(sub_83079328);
PPC_FUNC_IMPL(__imp__sub_83079328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31424
	ctx.r3.s64 = ctx.r11.s64 + 31424;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079338"))) PPC_WEAK_FUNC(sub_83079338);
PPC_FUNC_IMPL(__imp__sub_83079338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// addi r3,r11,-31232
	ctx.r3.s64 = ctx.r11.s64 + -31232;
	// b 0x8245a018
	sub_8245A018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079348"))) PPC_WEAK_FUNC(sub_83079348);
PPC_FUNC_IMPL(__imp__sub_83079348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31368
	ctx.r3.s64 = ctx.r11.s64 + 31368;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079358"))) PPC_WEAK_FUNC(sub_83079358);
PPC_FUNC_IMPL(__imp__sub_83079358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31408
	ctx.r3.s64 = ctx.r11.s64 + 31408;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079368"))) PPC_WEAK_FUNC(sub_83079368);
PPC_FUNC_IMPL(__imp__sub_83079368) {
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
	// addi r11,r11,-29216
	ctx.r11.s64 = ctx.r11.s64 + -29216;
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

__attribute__((alias("__imp__sub_83079398"))) PPC_WEAK_FUNC(sub_83079398);
PPC_FUNC_IMPL(__imp__sub_83079398) {
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
	// addi r11,r11,-29168
	ctx.r11.s64 = ctx.r11.s64 + -29168;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830793C8"))) PPC_WEAK_FUNC(sub_830793C8);
PPC_FUNC_IMPL(__imp__sub_830793C8) {
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
	// addi r11,r11,-29152
	ctx.r11.s64 = ctx.r11.s64 + -29152;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079410"))) PPC_WEAK_FUNC(sub_83079410);
PPC_FUNC_IMPL(__imp__sub_83079410) {
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
	// addi r11,r11,-29200
	ctx.r11.s64 = ctx.r11.s64 + -29200;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079458"))) PPC_WEAK_FUNC(sub_83079458);
PPC_FUNC_IMPL(__imp__sub_83079458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29136
	ctx.r11.s64 = ctx.r11.s64 + -29136;
	// lis r9,-31992
	ctx.r9.s64 = -2096627712;
	// addi r3,r9,31440
	ctx.r3.s64 = ctx.r9.s64 + 31440;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079488"))) PPC_WEAK_FUNC(sub_83079488);
PPC_FUNC_IMPL(__imp__sub_83079488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31608
	ctx.r3.s64 = ctx.r11.s64 + 31608;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079498"))) PPC_WEAK_FUNC(sub_83079498);
PPC_FUNC_IMPL(__imp__sub_83079498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31728
	ctx.r3.s64 = ctx.r11.s64 + 31728;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830794A8"))) PPC_WEAK_FUNC(sub_830794A8);
PPC_FUNC_IMPL(__imp__sub_830794A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r11,28980
	ctx.r3.s64 = ctx.r11.s64 + 28980;
	// li r4,220
	ctx.r4.s64 = 220;
	// bl 0x822dc718
	ctx.lr = 0x830794C8;
	sub_822DC718(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31824
	ctx.r3.s64 = ctx.r11.s64 + 31824;
	// bl 0x82d5cd68
	ctx.lr = 0x830794D4;
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

__attribute__((alias("__imp__sub_830794E8"))) PPC_WEAK_FUNC(sub_830794E8);
PPC_FUNC_IMPL(__imp__sub_830794E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31592
	ctx.r3.s64 = ctx.r11.s64 + 31592;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830794F8"))) PPC_WEAK_FUNC(sub_830794F8);
PPC_FUNC_IMPL(__imp__sub_830794F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// addi r3,r11,-29048
	ctx.r3.s64 = ctx.r11.s64 + -29048;
	// bl 0x829fb908
	ctx.lr = 0x83079510;
	sub_829FB908(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31840
	ctx.r3.s64 = ctx.r11.s64 + 31840;
	// bl 0x82d5cd68
	ctx.lr = 0x8307951C;
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

__attribute__((alias("__imp__sub_83079530"))) PPC_WEAK_FUNC(sub_83079530);
PPC_FUNC_IMPL(__imp__sub_83079530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// addi r3,r11,-29044
	ctx.r3.s64 = ctx.r11.s64 + -29044;
	// bl 0x829fb908
	ctx.lr = 0x83079548;
	sub_829FB908(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31856
	ctx.r3.s64 = ctx.r11.s64 + 31856;
	// bl 0x82d5cd68
	ctx.lr = 0x83079554;
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

__attribute__((alias("__imp__sub_83079568"))) PPC_WEAK_FUNC(sub_83079568);
PPC_FUNC_IMPL(__imp__sub_83079568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31872
	ctx.r3.s64 = ctx.r11.s64 + 31872;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079578"))) PPC_WEAK_FUNC(sub_83079578);
PPC_FUNC_IMPL(__imp__sub_83079578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r11,-28920
	ctx.r11.s64 = ctx.r11.s64 + -28920;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8307958C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// stb r9,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r9.u8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge cr6,0x8307958c
	if (!ctx.cr6.lt) goto loc_8307958C;
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31880
	ctx.r3.s64 = ctx.r11.s64 + 31880;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830795B8"))) PPC_WEAK_FUNC(sub_830795B8);
PPC_FUNC_IMPL(__imp__sub_830795B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// li r10,4095
	ctx.r10.s64 = 4095;
	// addi r11,r11,-28176
	ctx.r11.s64 = ctx.r11.s64 + -28176;
	// li r9,0
	ctx.r9.s64 = 0;
loc_830795C8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x830795c8
	if (!ctx.cr6.lt) goto loc_830795C8;
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31888
	ctx.r3.s64 = ctx.r11.s64 + 31888;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830795F0"))) PPC_WEAK_FUNC(sub_830795F0);
PPC_FUNC_IMPL(__imp__sub_830795F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,31984
	ctx.r3.s64 = ctx.r11.s64 + 31984;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83079600"))) PPC_WEAK_FUNC(sub_83079600);
PPC_FUNC_IMPL(__imp__sub_83079600) {
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
	// addi r11,r11,4736
	ctx.r11.s64 = ctx.r11.s64 + 4736;
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

__attribute__((alias("__imp__sub_83079630"))) PPC_WEAK_FUNC(sub_83079630);
PPC_FUNC_IMPL(__imp__sub_83079630) {
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
	// addi r11,r11,4800
	ctx.r11.s64 = ctx.r11.s64 + 4800;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079660"))) PPC_WEAK_FUNC(sub_83079660);
PPC_FUNC_IMPL(__imp__sub_83079660) {
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
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830796A8"))) PPC_WEAK_FUNC(sub_830796A8);
PPC_FUNC_IMPL(__imp__sub_830796A8) {
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
	// addi r11,r11,4752
	ctx.r11.s64 = ctx.r11.s64 + 4752;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830796F0"))) PPC_WEAK_FUNC(sub_830796F0);
PPC_FUNC_IMPL(__imp__sub_830796F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,29976
	ctx.r3.s64 = ctx.r11.s64 + 29976;
	// bl 0x82d375b0
	ctx.lr = 0x8307970C;
	sub_82D375B0(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,32000
	ctx.r3.s64 = ctx.r11.s64 + 32000;
	// bl 0x82d5cd68
	ctx.lr = 0x83079718;
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

__attribute__((alias("__imp__sub_83079728"))) PPC_WEAK_FUNC(sub_83079728);
PPC_FUNC_IMPL(__imp__sub_83079728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29020
	ctx.r4.s64 = ctx.r11.s64 + 29020;
	// bl 0x824215d0
	ctx.lr = 0x83079744;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_83079760"))) PPC_WEAK_FUNC(sub_83079760);
PPC_FUNC_IMPL(__imp__sub_83079760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29024
	ctx.r4.s64 = ctx.r11.s64 + 29024;
	// bl 0x824215d0
	ctx.lr = 0x8307977C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4894(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4894, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079798"))) PPC_WEAK_FUNC(sub_83079798);
PPC_FUNC_IMPL(__imp__sub_83079798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29028
	ctx.r4.s64 = ctx.r11.s64 + 29028;
	// bl 0x824215d0
	ctx.lr = 0x830797B4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4731(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4731, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830797D0"))) PPC_WEAK_FUNC(sub_830797D0);
PPC_FUNC_IMPL(__imp__sub_830797D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29032
	ctx.r4.s64 = ctx.r11.s64 + 29032;
	// bl 0x824215d0
	ctx.lr = 0x830797EC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4716(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4716, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079808"))) PPC_WEAK_FUNC(sub_83079808);
PPC_FUNC_IMPL(__imp__sub_83079808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29036
	ctx.r4.s64 = ctx.r11.s64 + 29036;
	// bl 0x824215d0
	ctx.lr = 0x83079824;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4700(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4700, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079840"))) PPC_WEAK_FUNC(sub_83079840);
PPC_FUNC_IMPL(__imp__sub_83079840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29040
	ctx.r4.s64 = ctx.r11.s64 + 29040;
	// bl 0x824215d0
	ctx.lr = 0x8307985C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4895(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4895, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079878"))) PPC_WEAK_FUNC(sub_83079878);
PPC_FUNC_IMPL(__imp__sub_83079878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29044
	ctx.r4.s64 = ctx.r11.s64 + 29044;
	// bl 0x824215d0
	ctx.lr = 0x83079894;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4893(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4893, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830798B0"))) PPC_WEAK_FUNC(sub_830798B0);
PPC_FUNC_IMPL(__imp__sub_830798B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29048
	ctx.r4.s64 = ctx.r11.s64 + 29048;
	// bl 0x824215d0
	ctx.lr = 0x830798CC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_830798E8"))) PPC_WEAK_FUNC(sub_830798E8);
PPC_FUNC_IMPL(__imp__sub_830798E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29052
	ctx.r4.s64 = ctx.r11.s64 + 29052;
	// bl 0x824215d0
	ctx.lr = 0x83079904;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4771(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4771, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079920"))) PPC_WEAK_FUNC(sub_83079920);
PPC_FUNC_IMPL(__imp__sub_83079920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29056
	ctx.r4.s64 = ctx.r11.s64 + 29056;
	// bl 0x824215d0
	ctx.lr = 0x8307993C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4729(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4729, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079958"))) PPC_WEAK_FUNC(sub_83079958);
PPC_FUNC_IMPL(__imp__sub_83079958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29060
	ctx.r4.s64 = ctx.r11.s64 + 29060;
	// bl 0x824215d0
	ctx.lr = 0x83079974;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4726(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4726, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079990"))) PPC_WEAK_FUNC(sub_83079990);
PPC_FUNC_IMPL(__imp__sub_83079990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29064
	ctx.r4.s64 = ctx.r11.s64 + 29064;
	// bl 0x824215d0
	ctx.lr = 0x830799AC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4724(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4724, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830799C8"))) PPC_WEAK_FUNC(sub_830799C8);
PPC_FUNC_IMPL(__imp__sub_830799C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29068
	ctx.r4.s64 = ctx.r11.s64 + 29068;
	// bl 0x824215d0
	ctx.lr = 0x830799E4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4768(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4768, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079A00"))) PPC_WEAK_FUNC(sub_83079A00);
PPC_FUNC_IMPL(__imp__sub_83079A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29072
	ctx.r4.s64 = ctx.r11.s64 + 29072;
	// bl 0x824215d0
	ctx.lr = 0x83079A1C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4697(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4697, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079A38"))) PPC_WEAK_FUNC(sub_83079A38);
PPC_FUNC_IMPL(__imp__sub_83079A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29076
	ctx.r4.s64 = ctx.r11.s64 + 29076;
	// bl 0x824215d0
	ctx.lr = 0x83079A54;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4701(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4701, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079A70"))) PPC_WEAK_FUNC(sub_83079A70);
PPC_FUNC_IMPL(__imp__sub_83079A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29080
	ctx.r4.s64 = ctx.r11.s64 + 29080;
	// bl 0x824215d0
	ctx.lr = 0x83079A8C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_83079AA8"))) PPC_WEAK_FUNC(sub_83079AA8);
PPC_FUNC_IMPL(__imp__sub_83079AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29084
	ctx.r4.s64 = ctx.r11.s64 + 29084;
	// bl 0x824215d0
	ctx.lr = 0x83079AC4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_83079AE0"))) PPC_WEAK_FUNC(sub_83079AE0);
PPC_FUNC_IMPL(__imp__sub_83079AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29088
	ctx.r4.s64 = ctx.r11.s64 + 29088;
	// bl 0x824215d0
	ctx.lr = 0x83079AFC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4798(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4798, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079B18"))) PPC_WEAK_FUNC(sub_83079B18);
PPC_FUNC_IMPL(__imp__sub_83079B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29092
	ctx.r4.s64 = ctx.r11.s64 + 29092;
	// bl 0x824215d0
	ctx.lr = 0x83079B34;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4728(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4728, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079B50"))) PPC_WEAK_FUNC(sub_83079B50);
PPC_FUNC_IMPL(__imp__sub_83079B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29096
	ctx.r4.s64 = ctx.r11.s64 + 29096;
	// bl 0x824215d0
	ctx.lr = 0x83079B6C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4714(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4714, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079B88"))) PPC_WEAK_FUNC(sub_83079B88);
PPC_FUNC_IMPL(__imp__sub_83079B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29100
	ctx.r4.s64 = ctx.r11.s64 + 29100;
	// bl 0x824215d0
	ctx.lr = 0x83079BA4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4727(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4727, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079BC0"))) PPC_WEAK_FUNC(sub_83079BC0);
PPC_FUNC_IMPL(__imp__sub_83079BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29104
	ctx.r4.s64 = ctx.r11.s64 + 29104;
	// bl 0x824215d0
	ctx.lr = 0x83079BDC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4892(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4892, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079BF8"))) PPC_WEAK_FUNC(sub_83079BF8);
PPC_FUNC_IMPL(__imp__sub_83079BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29108
	ctx.r4.s64 = ctx.r11.s64 + 29108;
	// bl 0x824215d0
	ctx.lr = 0x83079C14;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4720(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4720, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079C30"))) PPC_WEAK_FUNC(sub_83079C30);
PPC_FUNC_IMPL(__imp__sub_83079C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29112
	ctx.r4.s64 = ctx.r11.s64 + 29112;
	// bl 0x824215d0
	ctx.lr = 0x83079C4C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4705(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4705, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079C68"))) PPC_WEAK_FUNC(sub_83079C68);
PPC_FUNC_IMPL(__imp__sub_83079C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29116
	ctx.r4.s64 = ctx.r11.s64 + 29116;
	// bl 0x824215d0
	ctx.lr = 0x83079C84;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4707(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4707, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079CA0"))) PPC_WEAK_FUNC(sub_83079CA0);
PPC_FUNC_IMPL(__imp__sub_83079CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29120
	ctx.r4.s64 = ctx.r11.s64 + 29120;
	// bl 0x824215d0
	ctx.lr = 0x83079CBC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_83079CD8"))) PPC_WEAK_FUNC(sub_83079CD8);
PPC_FUNC_IMPL(__imp__sub_83079CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29124
	ctx.r4.s64 = ctx.r11.s64 + 29124;
	// bl 0x824215d0
	ctx.lr = 0x83079CF4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4735(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4735, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079D10"))) PPC_WEAK_FUNC(sub_83079D10);
PPC_FUNC_IMPL(__imp__sub_83079D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29128
	ctx.r4.s64 = ctx.r11.s64 + 29128;
	// bl 0x824215d0
	ctx.lr = 0x83079D2C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4703(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4703, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079D48"))) PPC_WEAK_FUNC(sub_83079D48);
PPC_FUNC_IMPL(__imp__sub_83079D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29132
	ctx.r4.s64 = ctx.r11.s64 + 29132;
	// bl 0x824215d0
	ctx.lr = 0x83079D64;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4730(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4730, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079D80"))) PPC_WEAK_FUNC(sub_83079D80);
PPC_FUNC_IMPL(__imp__sub_83079D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29136
	ctx.r4.s64 = ctx.r11.s64 + 29136;
	// bl 0x824215d0
	ctx.lr = 0x83079D9C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4704(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4704, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079DB8"))) PPC_WEAK_FUNC(sub_83079DB8);
PPC_FUNC_IMPL(__imp__sub_83079DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29140
	ctx.r4.s64 = ctx.r11.s64 + 29140;
	// bl 0x824215d0
	ctx.lr = 0x83079DD4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4692(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4692, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079DF0"))) PPC_WEAK_FUNC(sub_83079DF0);
PPC_FUNC_IMPL(__imp__sub_83079DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29144
	ctx.r4.s64 = ctx.r11.s64 + 29144;
	// bl 0x824215d0
	ctx.lr = 0x83079E0C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_83079E28"))) PPC_WEAK_FUNC(sub_83079E28);
PPC_FUNC_IMPL(__imp__sub_83079E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29148
	ctx.r4.s64 = ctx.r11.s64 + 29148;
	// bl 0x824215d0
	ctx.lr = 0x83079E44;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4719(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4719, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079E60"))) PPC_WEAK_FUNC(sub_83079E60);
PPC_FUNC_IMPL(__imp__sub_83079E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29152
	ctx.r4.s64 = ctx.r11.s64 + 29152;
	// bl 0x824215d0
	ctx.lr = 0x83079E7C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4732(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4732, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079E98"))) PPC_WEAK_FUNC(sub_83079E98);
PPC_FUNC_IMPL(__imp__sub_83079E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29156
	ctx.r4.s64 = ctx.r11.s64 + 29156;
	// bl 0x824215d0
	ctx.lr = 0x83079EB4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
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

__attribute__((alias("__imp__sub_83079ED0"))) PPC_WEAK_FUNC(sub_83079ED0);
PPC_FUNC_IMPL(__imp__sub_83079ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29160
	ctx.r4.s64 = ctx.r11.s64 + 29160;
	// bl 0x824215d0
	ctx.lr = 0x83079EEC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4694(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4694, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079F08"))) PPC_WEAK_FUNC(sub_83079F08);
PPC_FUNC_IMPL(__imp__sub_83079F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29164
	ctx.r4.s64 = ctx.r11.s64 + 29164;
	// bl 0x824215d0
	ctx.lr = 0x83079F24;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4723(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4723, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079F40"))) PPC_WEAK_FUNC(sub_83079F40);
PPC_FUNC_IMPL(__imp__sub_83079F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29168
	ctx.r4.s64 = ctx.r11.s64 + 29168;
	// bl 0x824215d0
	ctx.lr = 0x83079F5C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4709(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4709, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079F78"))) PPC_WEAK_FUNC(sub_83079F78);
PPC_FUNC_IMPL(__imp__sub_83079F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29172
	ctx.r4.s64 = ctx.r11.s64 + 29172;
	// bl 0x824215d0
	ctx.lr = 0x83079F94;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4733(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4733, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079FB0"))) PPC_WEAK_FUNC(sub_83079FB0);
PPC_FUNC_IMPL(__imp__sub_83079FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29176
	ctx.r4.s64 = ctx.r11.s64 + 29176;
	// bl 0x824215d0
	ctx.lr = 0x83079FCC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4708(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4708, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83079FE8"))) PPC_WEAK_FUNC(sub_83079FE8);
PPC_FUNC_IMPL(__imp__sub_83079FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29180
	ctx.r4.s64 = ctx.r11.s64 + 29180;
	// bl 0x824215d0
	ctx.lr = 0x8307A004;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4717(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4717, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A020"))) PPC_WEAK_FUNC(sub_8307A020);
PPC_FUNC_IMPL(__imp__sub_8307A020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29184
	ctx.r4.s64 = ctx.r11.s64 + 29184;
	// bl 0x824215d0
	ctx.lr = 0x8307A03C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4891(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4891, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A058"))) PPC_WEAK_FUNC(sub_8307A058);
PPC_FUNC_IMPL(__imp__sub_8307A058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29188
	ctx.r4.s64 = ctx.r11.s64 + 29188;
	// bl 0x824215d0
	ctx.lr = 0x8307A074;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4722(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4722, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A090"))) PPC_WEAK_FUNC(sub_8307A090);
PPC_FUNC_IMPL(__imp__sub_8307A090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29192
	ctx.r4.s64 = ctx.r11.s64 + 29192;
	// bl 0x824215d0
	ctx.lr = 0x8307A0AC;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4698(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4698, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A0C8"))) PPC_WEAK_FUNC(sub_8307A0C8);
PPC_FUNC_IMPL(__imp__sub_8307A0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29196
	ctx.r4.s64 = ctx.r11.s64 + 29196;
	// bl 0x824215d0
	ctx.lr = 0x8307A0E4;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4734(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4734, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A100"))) PPC_WEAK_FUNC(sub_8307A100);
PPC_FUNC_IMPL(__imp__sub_8307A100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29200
	ctx.r4.s64 = ctx.r11.s64 + 29200;
	// bl 0x824215d0
	ctx.lr = 0x8307A11C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4706(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4706, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A138"))) PPC_WEAK_FUNC(sub_8307A138);
PPC_FUNC_IMPL(__imp__sub_8307A138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29204
	ctx.r4.s64 = ctx.r11.s64 + 29204;
	// bl 0x824215d0
	ctx.lr = 0x8307A154;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4699(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4699, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8307A170"))) PPC_WEAK_FUNC(sub_8307A170);
PPC_FUNC_IMPL(__imp__sub_8307A170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29208
	ctx.r4.s64 = ctx.r11.s64 + 29208;
	// bl 0x824215d0
	ctx.lr = 0x8307A18C;
	sub_824215D0(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// stb r3,4721(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4721, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

