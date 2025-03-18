#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83054690"))) PPC_WEAK_FUNC(sub_83054690);
PPC_FUNC_IMPL(__imp__sub_83054690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,25504
	ctx.r11.s64 = ctx.r11.s64 + 25504;
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

__attribute__((alias("__imp__sub_830546C0"))) PPC_WEAK_FUNC(sub_830546C0);
PPC_FUNC_IMPL(__imp__sub_830546C0) {
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
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,25984
	ctx.r11.s64 = ctx.r11.s64 + 25984;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830546F0"))) PPC_WEAK_FUNC(sub_830546F0);
PPC_FUNC_IMPL(__imp__sub_830546F0) {
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
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,26000
	ctx.r11.s64 = ctx.r11.s64 + 26000;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054738"))) PPC_WEAK_FUNC(sub_83054738);
PPC_FUNC_IMPL(__imp__sub_83054738) {
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
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,25536
	ctx.r11.s64 = ctx.r11.s64 + 25536;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83054780"))) PPC_WEAK_FUNC(sub_83054780);
PPC_FUNC_IMPL(__imp__sub_83054780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,25844
	ctx.r3.s64 = ctx.r11.s64 + 25844;
	// bl 0x824ca558
	ctx.lr = 0x8305479C;
	sub_824CA558(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-2432
	ctx.r3.s64 = ctx.r11.s64 + -2432;
	// bl 0x82d5cd68
	ctx.lr = 0x830547A8;
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

__attribute__((alias("__imp__sub_830547B8"))) PPC_WEAK_FUNC(sub_830547B8);
PPC_FUNC_IMPL(__imp__sub_830547B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,4684
	ctx.r5.s64 = ctx.r10.s64 + 4684;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,4660
	ctx.r4.s64 = ctx.r10.s64 + 4660;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,25328
	ctx.r31.s64 = ctx.r10.s64 + 25328;
	// addi r10,r11,-12616
	ctx.r10.s64 = ctx.r11.s64 + -12616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054810;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,3080
	ctx.r3.s64 = ctx.r8.s64 + 3080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29520
	ctx.r11.s64 = ctx.r9.s64 + 29520;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-32608
	ctx.r11.s64 = ctx.r10.s64 + -32608;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054840;
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

__attribute__((alias("__imp__sub_83054858"))) PPC_WEAK_FUNC(sub_83054858);
PPC_FUNC_IMPL(__imp__sub_83054858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,4732
	ctx.r5.s64 = ctx.r10.s64 + 4732;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,4708
	ctx.r4.s64 = ctx.r10.s64 + 4708;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,25644
	ctx.r31.s64 = ctx.r10.s64 + 25644;
	// addi r10,r11,23216
	ctx.r10.s64 = ctx.r11.s64 + 23216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830548B0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-2360
	ctx.r3.s64 = ctx.r8.s64 + -2360;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-24224
	ctx.r11.s64 = ctx.r9.s64 + -24224;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-32608
	ctx.r11.s64 = ctx.r10.s64 + -32608;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830548E0;
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

__attribute__((alias("__imp__sub_830548F8"))) PPC_WEAK_FUNC(sub_830548F8);
PPC_FUNC_IMPL(__imp__sub_830548F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,4828
	ctx.r5.s64 = ctx.r10.s64 + 4828;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,4760
	ctx.r4.s64 = ctx.r10.s64 + 4760;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,30316
	ctx.r31.s64 = ctx.r10.s64 + 30316;
	// addi r10,r11,3136
	ctx.r10.s64 = ctx.r11.s64 + 3136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054950;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-2280
	ctx.r3.s64 = ctx.r8.s64 + -2280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16552
	ctx.r11.s64 = ctx.r9.s64 + -16552;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-28352
	ctx.r11.s64 = ctx.r10.s64 + -28352;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054980;
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

__attribute__((alias("__imp__sub_83054998"))) PPC_WEAK_FUNC(sub_83054998);
PPC_FUNC_IMPL(__imp__sub_83054998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,-17088
	ctx.r9.s64 = ctx.r10.s64 + -17088;
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
	// addi r5,r10,4932
	ctx.r5.s64 = ctx.r10.s64 + 4932;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,4864
	ctx.r4.s64 = ctx.r10.s64 + 4864;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,26912
	ctx.r31.s64 = ctx.r10.s64 + 26912;
	// addi r10,r11,9256
	ctx.r10.s64 = ctx.r11.s64 + 9256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830549F0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-2200
	ctx.r3.s64 = ctx.r8.s64 + -2200;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,30344
	ctx.r11.s64 = ctx.r9.s64 + 30344;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-28352
	ctx.r11.s64 = ctx.r10.s64 + -28352;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054A20;
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

__attribute__((alias("__imp__sub_83054A38"))) PPC_WEAK_FUNC(sub_83054A38);
PPC_FUNC_IMPL(__imp__sub_83054A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,4828
	ctx.r5.s64 = ctx.r10.s64 + 4828;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,4960
	ctx.r4.s64 = ctx.r10.s64 + 4960;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,28108
	ctx.r31.s64 = ctx.r10.s64 + 28108;
	// addi r10,r11,-11488
	ctx.r10.s64 = ctx.r11.s64 + -11488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054A90;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-2120
	ctx.r3.s64 = ctx.r8.s64 + -2120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16640
	ctx.r11.s64 = ctx.r9.s64 + -16640;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16264
	ctx.r11.s64 = ctx.r10.s64 + 16264;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054AC0;
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

__attribute__((alias("__imp__sub_83054AD8"))) PPC_WEAK_FUNC(sub_83054AD8);
PPC_FUNC_IMPL(__imp__sub_83054AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,15824
	ctx.r9.s64 = ctx.r10.s64 + 15824;
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
	// addi r5,r10,4932
	ctx.r5.s64 = ctx.r10.s64 + 4932;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,5024
	ctx.r4.s64 = ctx.r10.s64 + 5024;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,27832
	ctx.r31.s64 = ctx.r10.s64 + 27832;
	// addi r10,r11,30432
	ctx.r10.s64 = ctx.r11.s64 + 30432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054B30;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-2040
	ctx.r3.s64 = ctx.r8.s64 + -2040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,30504
	ctx.r11.s64 = ctx.r9.s64 + 30504;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16264
	ctx.r11.s64 = ctx.r10.s64 + 16264;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054B60;
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

__attribute__((alias("__imp__sub_83054B78"))) PPC_WEAK_FUNC(sub_83054B78);
PPC_FUNC_IMPL(__imp__sub_83054B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,4828
	ctx.r5.s64 = ctx.r10.s64 + 4828;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,5088
	ctx.r4.s64 = ctx.r10.s64 + 5088;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,31604
	ctx.r31.s64 = ctx.r10.s64 + 31604;
	// addi r10,r11,3136
	ctx.r10.s64 = ctx.r11.s64 + 3136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054BD0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-1960
	ctx.r3.s64 = ctx.r8.s64 + -1960;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16552
	ctx.r11.s64 = ctx.r9.s64 + -16552;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16264
	ctx.r11.s64 = ctx.r10.s64 + 16264;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054C00;
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

__attribute__((alias("__imp__sub_83054C18"))) PPC_WEAK_FUNC(sub_83054C18);
PPC_FUNC_IMPL(__imp__sub_83054C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-9600
	ctx.r9.s64 = ctx.r10.s64 + -9600;
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
	// addi r5,r10,4932
	ctx.r5.s64 = ctx.r10.s64 + 4932;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,5160
	ctx.r4.s64 = ctx.r10.s64 + 5160;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,27556
	ctx.r31.s64 = ctx.r10.s64 + 27556;
	// addi r10,r11,9256
	ctx.r10.s64 = ctx.r11.s64 + 9256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054C70;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-1880
	ctx.r3.s64 = ctx.r8.s64 + -1880;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,30344
	ctx.r11.s64 = ctx.r9.s64 + 30344;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16264
	ctx.r11.s64 = ctx.r10.s64 + 16264;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054CA0;
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

__attribute__((alias("__imp__sub_83054CB8"))) PPC_WEAK_FUNC(sub_83054CB8);
PPC_FUNC_IMPL(__imp__sub_83054CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,-9440
	ctx.r9.s64 = ctx.r10.s64 + -9440;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,5228
	ctx.r4.s64 = ctx.r10.s64 + 5228;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,30224
	ctx.r31.s64 = ctx.r10.s64 + 30224;
	// addi r10,r11,1360
	ctx.r10.s64 = ctx.r11.s64 + 1360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054D10;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,3160
	ctx.r3.s64 = ctx.r8.s64 + 3160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29152
	ctx.r11.s64 = ctx.r9.s64 + 29152;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-16040
	ctx.r11.s64 = ctx.r10.s64 + -16040;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054D40;
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

__attribute__((alias("__imp__sub_83054D58"))) PPC_WEAK_FUNC(sub_83054D58);
PPC_FUNC_IMPL(__imp__sub_83054D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,-9352
	ctx.r9.s64 = ctx.r10.s64 + -9352;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,5312
	ctx.r4.s64 = ctx.r10.s64 + 5312;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,26452
	ctx.r31.s64 = ctx.r10.s64 + 26452;
	// addi r10,r11,30592
	ctx.r10.s64 = ctx.r11.s64 + 30592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054DB0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-1800
	ctx.r3.s64 = ctx.r8.s64 + -1800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,1536
	ctx.r11.s64 = ctx.r9.s64 + 1536;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23440
	ctx.r11.s64 = ctx.r10.s64 + -23440;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054DE0;
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

__attribute__((alias("__imp__sub_83054DF8"))) PPC_WEAK_FUNC(sub_83054DF8);
PPC_FUNC_IMPL(__imp__sub_83054DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,-9352
	ctx.r9.s64 = ctx.r10.s64 + -9352;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,5416
	ctx.r4.s64 = ctx.r10.s64 + 5416;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,31788
	ctx.r31.s64 = ctx.r10.s64 + 31788;
	// addi r10,r11,31344
	ctx.r10.s64 = ctx.r11.s64 + 31344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054E50;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-1720
	ctx.r3.s64 = ctx.r8.s64 + -1720;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,3192
	ctx.r11.s64 = ctx.r9.s64 + 3192;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054E80;
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

__attribute__((alias("__imp__sub_83054E98"))) PPC_WEAK_FUNC(sub_83054E98);
PPC_FUNC_IMPL(__imp__sub_83054E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,-9256
	ctx.r9.s64 = ctx.r10.s64 + -9256;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,5488
	ctx.r4.s64 = ctx.r10.s64 + 5488;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,28660
	ctx.r31.s64 = ctx.r10.s64 + 28660;
	// addi r10,r11,32096
	ctx.r10.s64 = ctx.r11.s64 + 32096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054EF0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-1640
	ctx.r3.s64 = ctx.r8.s64 + -1640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4944
	ctx.r11.s64 = ctx.r9.s64 + 4944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054F20;
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

__attribute__((alias("__imp__sub_83054F38"))) PPC_WEAK_FUNC(sub_83054F38);
PPC_FUNC_IMPL(__imp__sub_83054F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-9256
	ctx.r9.s64 = ctx.r10.s64 + -9256;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,5560
	ctx.r4.s64 = ctx.r10.s64 + 5560;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,26820
	ctx.r31.s64 = ctx.r10.s64 + 26820;
	// addi r10,r11,-32688
	ctx.r10.s64 = ctx.r11.s64 + -32688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83054F90;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-1560
	ctx.r3.s64 = ctx.r8.s64 + -1560;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6600
	ctx.r11.s64 = ctx.r9.s64 + 6600;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83054FC0;
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

__attribute__((alias("__imp__sub_83054FD8"))) PPC_WEAK_FUNC(sub_83054FD8);
PPC_FUNC_IMPL(__imp__sub_83054FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-9256
	ctx.r9.s64 = ctx.r10.s64 + -9256;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,5640
	ctx.r4.s64 = ctx.r10.s64 + 5640;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,29120
	ctx.r31.s64 = ctx.r10.s64 + 29120;
	// addi r10,r11,-31936
	ctx.r10.s64 = ctx.r11.s64 + -31936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055030;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-1480
	ctx.r3.s64 = ctx.r8.s64 + -1480;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,8288
	ctx.r11.s64 = ctx.r9.s64 + 8288;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055060;
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

__attribute__((alias("__imp__sub_83055078"))) PPC_WEAK_FUNC(sub_83055078);
PPC_FUNC_IMPL(__imp__sub_83055078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-3544
	ctx.r9.s64 = ctx.r10.s64 + -3544;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,5720
	ctx.r4.s64 = ctx.r10.s64 + 5720;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,31420
	ctx.r31.s64 = ctx.r10.s64 + 31420;
	// addi r10,r11,-9160
	ctx.r10.s64 = ctx.r11.s64 + -9160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830550D0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-1400
	ctx.r3.s64 = ctx.r8.s64 + -1400;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-31184
	ctx.r11.s64 = ctx.r9.s64 + -31184;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055100;
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

__attribute__((alias("__imp__sub_83055118"))) PPC_WEAK_FUNC(sub_83055118);
PPC_FUNC_IMPL(__imp__sub_83055118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-3448
	ctx.r9.s64 = ctx.r10.s64 + -3448;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,5840
	ctx.r4.s64 = ctx.r10.s64 + 5840;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,26636
	ctx.r31.s64 = ctx.r10.s64 + 26636;
	// addi r10,r11,-9024
	ctx.r10.s64 = ctx.r11.s64 + -9024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055170;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-1320
	ctx.r3.s64 = ctx.r8.s64 + -1320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-30448
	ctx.r11.s64 = ctx.r9.s64 + -30448;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830551A0;
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

__attribute__((alias("__imp__sub_830551B8"))) PPC_WEAK_FUNC(sub_830551B8);
PPC_FUNC_IMPL(__imp__sub_830551B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-3352
	ctx.r9.s64 = ctx.r10.s64 + -3352;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,5920
	ctx.r4.s64 = ctx.r10.s64 + 5920;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,26728
	ctx.r31.s64 = ctx.r10.s64 + 26728;
	// addi r10,r11,-8888
	ctx.r10.s64 = ctx.r11.s64 + -8888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055210;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-1240
	ctx.r3.s64 = ctx.r8.s64 + -1240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29712
	ctx.r11.s64 = ctx.r9.s64 + -29712;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055240;
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

__attribute__((alias("__imp__sub_83055258"))) PPC_WEAK_FUNC(sub_83055258);
PPC_FUNC_IMPL(__imp__sub_83055258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-3544
	ctx.r9.s64 = ctx.r10.s64 + -3544;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,6000
	ctx.r4.s64 = ctx.r10.s64 + 6000;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,31972
	ctx.r31.s64 = ctx.r10.s64 + 31972;
	// addi r10,r11,-8752
	ctx.r10.s64 = ctx.r11.s64 + -8752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830552B0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-1160
	ctx.r3.s64 = ctx.r8.s64 + -1160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-28976
	ctx.r11.s64 = ctx.r9.s64 + -28976;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830552E0;
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

__attribute__((alias("__imp__sub_830552F8"))) PPC_WEAK_FUNC(sub_830552F8);
PPC_FUNC_IMPL(__imp__sub_830552F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-3448
	ctx.r9.s64 = ctx.r10.s64 + -3448;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,6088
	ctx.r4.s64 = ctx.r10.s64 + 6088;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,28844
	ctx.r31.s64 = ctx.r10.s64 + 28844;
	// addi r10,r11,-8616
	ctx.r10.s64 = ctx.r11.s64 + -8616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055350;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-1080
	ctx.r3.s64 = ctx.r8.s64 + -1080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-28240
	ctx.r11.s64 = ctx.r9.s64 + -28240;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055380;
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

__attribute__((alias("__imp__sub_83055398"))) PPC_WEAK_FUNC(sub_83055398);
PPC_FUNC_IMPL(__imp__sub_83055398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-3352
	ctx.r9.s64 = ctx.r10.s64 + -3352;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,6176
	ctx.r4.s64 = ctx.r10.s64 + 6176;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,27648
	ctx.r31.s64 = ctx.r10.s64 + 27648;
	// addi r10,r11,-8480
	ctx.r10.s64 = ctx.r11.s64 + -8480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830553F0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-1000
	ctx.r3.s64 = ctx.r8.s64 + -1000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27504
	ctx.r11.s64 = ctx.r9.s64 + -27504;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055420;
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

__attribute__((alias("__imp__sub_83055438"))) PPC_WEAK_FUNC(sub_83055438);
PPC_FUNC_IMPL(__imp__sub_83055438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-3256
	ctx.r9.s64 = ctx.r10.s64 + -3256;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,6264
	ctx.r4.s64 = ctx.r10.s64 + 6264;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,28476
	ctx.r31.s64 = ctx.r10.s64 + 28476;
	// addi r10,r11,-8344
	ctx.r10.s64 = ctx.r11.s64 + -8344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055490;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-920
	ctx.r3.s64 = ctx.r8.s64 + -920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26768
	ctx.r11.s64 = ctx.r9.s64 + -26768;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830554C0;
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

__attribute__((alias("__imp__sub_830554D8"))) PPC_WEAK_FUNC(sub_830554D8);
PPC_FUNC_IMPL(__imp__sub_830554D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-3160
	ctx.r9.s64 = ctx.r10.s64 + -3160;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,6352
	ctx.r4.s64 = ctx.r10.s64 + 6352;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,32248
	ctx.r31.s64 = ctx.r10.s64 + 32248;
	// addi r10,r11,-8208
	ctx.r10.s64 = ctx.r11.s64 + -8208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055530;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-840
	ctx.r3.s64 = ctx.r8.s64 + -840;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055560;
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

__attribute__((alias("__imp__sub_83055578"))) PPC_WEAK_FUNC(sub_83055578);
PPC_FUNC_IMPL(__imp__sub_83055578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-3064
	ctx.r9.s64 = ctx.r10.s64 + -3064;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,6440
	ctx.r4.s64 = ctx.r10.s64 + 6440;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,30592
	ctx.r31.s64 = ctx.r10.s64 + 30592;
	// addi r10,r11,-8072
	ctx.r10.s64 = ctx.r11.s64 + -8072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830555D0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-760
	ctx.r3.s64 = ctx.r8.s64 + -760;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25296
	ctx.r11.s64 = ctx.r9.s64 + -25296;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055600;
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

__attribute__((alias("__imp__sub_83055618"))) PPC_WEAK_FUNC(sub_83055618);
PPC_FUNC_IMPL(__imp__sub_83055618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-7936
	ctx.r9.s64 = ctx.r10.s64 + -7936;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,6528
	ctx.r4.s64 = ctx.r10.s64 + 6528;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,31880
	ctx.r31.s64 = ctx.r10.s64 + 31880;
	// addi r10,r11,-24560
	ctx.r10.s64 = ctx.r11.s64 + -24560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055670;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-680
	ctx.r3.s64 = ctx.r8.s64 + -680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,10040
	ctx.r11.s64 = ctx.r9.s64 + 10040;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830556A0;
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

__attribute__((alias("__imp__sub_830556B8"))) PPC_WEAK_FUNC(sub_830556B8);
PPC_FUNC_IMPL(__imp__sub_830556B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
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
	// addi r5,r10,6692
	ctx.r5.s64 = ctx.r10.s64 + 6692;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,6600
	ctx.r4.s64 = ctx.r10.s64 + 6600;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,27372
	ctx.r31.s64 = ctx.r10.s64 + 27372;
	// addi r10,r11,10152
	ctx.r10.s64 = ctx.r11.s64 + 10152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055710;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-600
	ctx.r3.s64 = ctx.r8.s64 + -600;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16464
	ctx.r11.s64 = ctx.r9.s64 + -16464;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055740;
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

__attribute__((alias("__imp__sub_83055758"))) PPC_WEAK_FUNC(sub_83055758);
PPC_FUNC_IMPL(__imp__sub_83055758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-24432
	ctx.r9.s64 = ctx.r10.s64 + -24432;
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
	// addi r5,r10,6820
	ctx.r5.s64 = ctx.r10.s64 + 6820;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,6728
	ctx.r4.s64 = ctx.r10.s64 + 6728;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,31696
	ctx.r31.s64 = ctx.r10.s64 + 31696;
	// addi r10,r11,-6144
	ctx.r10.s64 = ctx.r11.s64 + -6144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830557B0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-520
	ctx.r3.s64 = ctx.r8.s64 + -520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-7784
	ctx.r11.s64 = ctx.r9.s64 + -7784;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830557E0;
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

__attribute__((alias("__imp__sub_830557F8"))) PPC_WEAK_FUNC(sub_830557F8);
PPC_FUNC_IMPL(__imp__sub_830557F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,-7696
	ctx.r9.s64 = ctx.r10.s64 + -7696;
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
	// addi r5,r10,6692
	ctx.r5.s64 = ctx.r10.s64 + 6692;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,6848
	ctx.r4.s64 = ctx.r10.s64 + 6848;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,28016
	ctx.r31.s64 = ctx.r10.s64 + 28016;
	// addi r10,r11,10320
	ctx.r10.s64 = ctx.r11.s64 + 10320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055850;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-440
	ctx.r3.s64 = ctx.r8.s64 + -440;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16352
	ctx.r11.s64 = ctx.r9.s64 + -16352;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055880;
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

__attribute__((alias("__imp__sub_83055898"))) PPC_WEAK_FUNC(sub_83055898);
PPC_FUNC_IMPL(__imp__sub_83055898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-7336
	ctx.r9.s64 = ctx.r10.s64 + -7336;
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
	// addi r5,r10,6820
	ctx.r5.s64 = ctx.r10.s64 + 6820;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,6936
	ctx.r4.s64 = ctx.r10.s64 + 6936;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,27740
	ctx.r31.s64 = ctx.r10.s64 + 27740;
	// addi r10,r11,-7496
	ctx.r10.s64 = ctx.r11.s64 + -7496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830558F0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-360
	ctx.r3.s64 = ctx.r8.s64 + -360;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-7424
	ctx.r11.s64 = ctx.r9.s64 + -7424;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055920;
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

__attribute__((alias("__imp__sub_83055938"))) PPC_WEAK_FUNC(sub_83055938);
PPC_FUNC_IMPL(__imp__sub_83055938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,-7184
	ctx.r9.s64 = ctx.r10.s64 + -7184;
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
	// addi r5,r10,6692
	ctx.r5.s64 = ctx.r10.s64 + 6692;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,7024
	ctx.r4.s64 = ctx.r10.s64 + 7024;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,29948
	ctx.r31.s64 = ctx.r10.s64 + 29948;
	// addi r10,r11,10152
	ctx.r10.s64 = ctx.r11.s64 + 10152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055990;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-280
	ctx.r3.s64 = ctx.r8.s64 + -280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16464
	ctx.r11.s64 = ctx.r9.s64 + -16464;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830559C0;
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

__attribute__((alias("__imp__sub_830559D8"))) PPC_WEAK_FUNC(sub_830559D8);
PPC_FUNC_IMPL(__imp__sub_830559D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-6864
	ctx.r9.s64 = ctx.r10.s64 + -6864;
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
	// addi r5,r10,6820
	ctx.r5.s64 = ctx.r10.s64 + 6820;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,7128
	ctx.r4.s64 = ctx.r10.s64 + 7128;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,28384
	ctx.r31.s64 = ctx.r10.s64 + 28384;
	// addi r10,r11,-7024
	ctx.r10.s64 = ctx.r11.s64 + -7024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055A30;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-200
	ctx.r3.s64 = ctx.r8.s64 + -200;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-6952
	ctx.r11.s64 = ctx.r9.s64 + -6952;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055A60;
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

__attribute__((alias("__imp__sub_83055A78"))) PPC_WEAK_FUNC(sub_83055A78);
PPC_FUNC_IMPL(__imp__sub_83055A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,-6648
	ctx.r9.s64 = ctx.r10.s64 + -6648;
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
	// addi r5,r10,6692
	ctx.r5.s64 = ctx.r10.s64 + 6692;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,7232
	ctx.r4.s64 = ctx.r10.s64 + 7232;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,30132
	ctx.r31.s64 = ctx.r10.s64 + 30132;
	// addi r10,r11,10320
	ctx.r10.s64 = ctx.r11.s64 + 10320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055AD0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-120
	ctx.r3.s64 = ctx.r8.s64 + -120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16352
	ctx.r11.s64 = ctx.r9.s64 + -16352;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055B00;
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

__attribute__((alias("__imp__sub_83055B18"))) PPC_WEAK_FUNC(sub_83055B18);
PPC_FUNC_IMPL(__imp__sub_83055B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-6304
	ctx.r9.s64 = ctx.r10.s64 + -6304;
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
	// addi r5,r10,6820
	ctx.r5.s64 = ctx.r10.s64 + 6820;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,7336
	ctx.r4.s64 = ctx.r10.s64 + 7336;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,27280
	ctx.r31.s64 = ctx.r10.s64 + 27280;
	// addi r10,r11,-6464
	ctx.r10.s64 = ctx.r11.s64 + -6464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055B70;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,-40
	ctx.r3.s64 = ctx.r8.s64 + -40;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-6392
	ctx.r11.s64 = ctx.r9.s64 + -6392;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055BA0;
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

__attribute__((alias("__imp__sub_83055BB8"))) PPC_WEAK_FUNC(sub_83055BB8);
PPC_FUNC_IMPL(__imp__sub_83055BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
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
	// addi r5,r10,6692
	ctx.r5.s64 = ctx.r10.s64 + 6692;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,7432
	ctx.r4.s64 = ctx.r10.s64 + 7432;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,30500
	ctx.r31.s64 = ctx.r10.s64 + 30500;
	// addi r10,r11,10488
	ctx.r10.s64 = ctx.r11.s64 + 10488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055C10;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,40
	ctx.r3.s64 = ctx.r8.s64 + 40;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16240
	ctx.r11.s64 = ctx.r9.s64 + -16240;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055C40;
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

__attribute__((alias("__imp__sub_83055C58"))) PPC_WEAK_FUNC(sub_83055C58);
PPC_FUNC_IMPL(__imp__sub_83055C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-6072
	ctx.r9.s64 = ctx.r10.s64 + -6072;
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
	// addi r5,r10,6820
	ctx.r5.s64 = ctx.r10.s64 + 6820;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,7528
	ctx.r4.s64 = ctx.r10.s64 + 7528;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,30776
	ctx.r31.s64 = ctx.r10.s64 + 30776;
	// addi r10,r11,-6144
	ctx.r10.s64 = ctx.r11.s64 + -6144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055CB0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,120
	ctx.r3.s64 = ctx.r8.s64 + 120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-7784
	ctx.r11.s64 = ctx.r9.s64 + -7784;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055CE0;
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

__attribute__((alias("__imp__sub_83055CF8"))) PPC_WEAK_FUNC(sub_83055CF8);
PPC_FUNC_IMPL(__imp__sub_83055CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,-5808
	ctx.r9.s64 = ctx.r10.s64 + -5808;
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
	// addi r5,r10,6692
	ctx.r5.s64 = ctx.r10.s64 + 6692;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,7624
	ctx.r4.s64 = ctx.r10.s64 + 7624;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,31236
	ctx.r31.s64 = ctx.r10.s64 + 31236;
	// addi r10,r11,10656
	ctx.r10.s64 = ctx.r11.s64 + 10656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055D50;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,200
	ctx.r3.s64 = ctx.r8.s64 + 200;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16152
	ctx.r11.s64 = ctx.r9.s64 + -16152;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055D80;
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

__attribute__((alias("__imp__sub_83055D98"))) PPC_WEAK_FUNC(sub_83055D98);
PPC_FUNC_IMPL(__imp__sub_83055D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-5584
	ctx.r9.s64 = ctx.r10.s64 + -5584;
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
	// addi r5,r10,6820
	ctx.r5.s64 = ctx.r10.s64 + 6820;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,7720
	ctx.r4.s64 = ctx.r10.s64 + 7720;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,32064
	ctx.r31.s64 = ctx.r10.s64 + 32064;
	// addi r10,r11,-7496
	ctx.r10.s64 = ctx.r11.s64 + -7496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055DF0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,280
	ctx.r3.s64 = ctx.r8.s64 + 280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-7424
	ctx.r11.s64 = ctx.r9.s64 + -7424;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055E20;
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

__attribute__((alias("__imp__sub_83055E38"))) PPC_WEAK_FUNC(sub_83055E38);
PPC_FUNC_IMPL(__imp__sub_83055E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
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
	// addi r5,r10,6692
	ctx.r5.s64 = ctx.r10.s64 + 6692;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,7816
	ctx.r4.s64 = ctx.r10.s64 + 7816;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,29856
	ctx.r31.s64 = ctx.r10.s64 + 29856;
	// addi r10,r11,10488
	ctx.r10.s64 = ctx.r11.s64 + 10488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055E90;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,360
	ctx.r3.s64 = ctx.r8.s64 + 360;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16064
	ctx.r11.s64 = ctx.r9.s64 + -16064;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055EC0;
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

__attribute__((alias("__imp__sub_83055ED8"))) PPC_WEAK_FUNC(sub_83055ED8);
PPC_FUNC_IMPL(__imp__sub_83055ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-5216
	ctx.r9.s64 = ctx.r10.s64 + -5216;
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
	// addi r5,r10,6820
	ctx.r5.s64 = ctx.r10.s64 + 6820;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,7912
	ctx.r4.s64 = ctx.r10.s64 + 7912;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,29212
	ctx.r31.s64 = ctx.r10.s64 + 29212;
	// addi r10,r11,-5376
	ctx.r10.s64 = ctx.r11.s64 + -5376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055F30;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,440
	ctx.r3.s64 = ctx.r8.s64 + 440;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-5304
	ctx.r11.s64 = ctx.r9.s64 + -5304;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83055F60;
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

__attribute__((alias("__imp__sub_83055F78"))) PPC_WEAK_FUNC(sub_83055F78);
PPC_FUNC_IMPL(__imp__sub_83055F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,-4952
	ctx.r9.s64 = ctx.r10.s64 + -4952;
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
	// addi r5,r10,6692
	ctx.r5.s64 = ctx.r10.s64 + 6692;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8008
	ctx.r4.s64 = ctx.r10.s64 + 8008;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,29028
	ctx.r31.s64 = ctx.r10.s64 + 29028;
	// addi r10,r11,10656
	ctx.r10.s64 = ctx.r11.s64 + 10656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83055FD0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,520
	ctx.r3.s64 = ctx.r8.s64 + 520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-15976
	ctx.r11.s64 = ctx.r9.s64 + -15976;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056000;
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

__attribute__((alias("__imp__sub_83056018"))) PPC_WEAK_FUNC(sub_83056018);
PPC_FUNC_IMPL(__imp__sub_83056018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-4568
	ctx.r9.s64 = ctx.r10.s64 + -4568;
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
	// addi r5,r10,6820
	ctx.r5.s64 = ctx.r10.s64 + 6820;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8104
	ctx.r4.s64 = ctx.r10.s64 + 8104;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,31052
	ctx.r31.s64 = ctx.r10.s64 + 31052;
	// addi r10,r11,-4728
	ctx.r10.s64 = ctx.r11.s64 + -4728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056070;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,600
	ctx.r3.s64 = ctx.r8.s64 + 600;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-4656
	ctx.r11.s64 = ctx.r9.s64 + -4656;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31272
	ctx.r11.s64 = ctx.r10.s64 + -31272;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830560A0;
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

__attribute__((alias("__imp__sub_830560B8"))) PPC_WEAK_FUNC(sub_830560B8);
PPC_FUNC_IMPL(__imp__sub_830560B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,8256
	ctx.r5.s64 = ctx.r10.s64 + 8256;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8196
	ctx.r4.s64 = ctx.r10.s64 + 8196;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,29764
	ctx.r31.s64 = ctx.r10.s64 + 29764;
	// addi r10,r11,-12616
	ctx.r10.s64 = ctx.r11.s64 + -12616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056110;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,680
	ctx.r3.s64 = ctx.r8.s64 + 680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29520
	ctx.r11.s64 = ctx.r9.s64 + 29520;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16392
	ctx.r11.s64 = ctx.r10.s64 + 16392;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056140;
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

__attribute__((alias("__imp__sub_83056158"))) PPC_WEAK_FUNC(sub_83056158);
PPC_FUNC_IMPL(__imp__sub_83056158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8348
	ctx.r5.s64 = ctx.r10.s64 + 8348;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,8288
	ctx.r4.s64 = ctx.r10.s64 + 8288;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,30960
	ctx.r31.s64 = ctx.r10.s64 + 30960;
	// addi r10,r11,23216
	ctx.r10.s64 = ctx.r11.s64 + 23216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830561B0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,760
	ctx.r3.s64 = ctx.r8.s64 + 760;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-24224
	ctx.r11.s64 = ctx.r9.s64 + -24224;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16392
	ctx.r11.s64 = ctx.r10.s64 + 16392;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830561E0;
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

__attribute__((alias("__imp__sub_830561F8"))) PPC_WEAK_FUNC(sub_830561F8);
PPC_FUNC_IMPL(__imp__sub_830561F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8416
	ctx.r5.s64 = ctx.r10.s64 + 8416;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8380
	ctx.r4.s64 = ctx.r10.s64 + 8380;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,25892
	ctx.r31.s64 = ctx.r10.s64 + 25892;
	// addi r10,r11,-3848
	ctx.r10.s64 = ctx.r11.s64 + -3848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056250;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,840
	ctx.r3.s64 = ctx.r8.s64 + 840;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,23576
	ctx.r11.s64 = ctx.r9.s64 + 23576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056280;
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

__attribute__((alias("__imp__sub_83056298"))) PPC_WEAK_FUNC(sub_83056298);
PPC_FUNC_IMPL(__imp__sub_83056298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8484
	ctx.r5.s64 = ctx.r10.s64 + 8484;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8448
	ctx.r4.s64 = ctx.r10.s64 + 8448;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,25552
	ctx.r31.s64 = ctx.r10.s64 + 25552;
	// addi r10,r11,1480
	ctx.r10.s64 = ctx.r11.s64 + 1480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830562F0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,920
	ctx.r3.s64 = ctx.r8.s64 + 920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,23664
	ctx.r11.s64 = ctx.r9.s64 + 23664;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056320;
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

__attribute__((alias("__imp__sub_83056338"))) PPC_WEAK_FUNC(sub_83056338);
PPC_FUNC_IMPL(__imp__sub_83056338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r3,r11,26108
	ctx.r3.s64 = ctx.r11.s64 + 26108;
	// bl 0x8254d820
	ctx.lr = 0x83056350;
	sub_8254D820(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-3408
	ctx.r3.s64 = ctx.r11.s64 + -3408;
	// bl 0x82d5cd68
	ctx.lr = 0x8305635C;
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

__attribute__((alias("__imp__sub_83056370"))) PPC_WEAK_FUNC(sub_83056370);
PPC_FUNC_IMPL(__imp__sub_83056370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,25520
	ctx.r11.s64 = ctx.r11.s64 + 25520;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83056390"))) PPC_WEAK_FUNC(sub_83056390);
PPC_FUNC_IMPL(__imp__sub_83056390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,26124
	ctx.r11.s64 = ctx.r11.s64 + 26124;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830563B0"))) PPC_WEAK_FUNC(sub_830563B0);
PPC_FUNC_IMPL(__imp__sub_830563B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,25484
	ctx.r11.s64 = ctx.r11.s64 + 25484;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830563D0"))) PPC_WEAK_FUNC(sub_830563D0);
PPC_FUNC_IMPL(__imp__sub_830563D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8516
	ctx.r4.s64 = ctx.r10.s64 + 8516;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,29672
	ctx.r31.s64 = ctx.r10.s64 + 29672;
	// addi r10,r11,-12616
	ctx.r10.s64 = ctx.r11.s64 + -12616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056428;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,1000
	ctx.r3.s64 = ctx.r8.s64 + 1000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29520
	ctx.r11.s64 = ctx.r9.s64 + 29520;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16400
	ctx.r11.s64 = ctx.r10.s64 + 16400;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056458;
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

__attribute__((alias("__imp__sub_83056470"))) PPC_WEAK_FUNC(sub_83056470);
PPC_FUNC_IMPL(__imp__sub_83056470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8584
	ctx.r4.s64 = ctx.r10.s64 + 8584;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,28936
	ctx.r31.s64 = ctx.r10.s64 + 28936;
	// addi r10,r11,3136
	ctx.r10.s64 = ctx.r11.s64 + 3136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830564C8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,1080
	ctx.r3.s64 = ctx.r8.s64 + 1080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-15688
	ctx.r11.s64 = ctx.r9.s64 + -15688;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16464
	ctx.r11.s64 = ctx.r10.s64 + 16464;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830564F8;
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

__attribute__((alias("__imp__sub_83056510"))) PPC_WEAK_FUNC(sub_83056510);
PPC_FUNC_IMPL(__imp__sub_83056510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8632
	ctx.r4.s64 = ctx.r10.s64 + 8632;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,30868
	ctx.r31.s64 = ctx.r10.s64 + 30868;
	// addi r10,r11,3136
	ctx.r10.s64 = ctx.r11.s64 + 3136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056568;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,1160
	ctx.r3.s64 = ctx.r8.s64 + 1160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-15600
	ctx.r11.s64 = ctx.r9.s64 + -15600;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16464
	ctx.r11.s64 = ctx.r10.s64 + 16464;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056598;
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

__attribute__((alias("__imp__sub_830565B0"))) PPC_WEAK_FUNC(sub_830565B0);
PPC_FUNC_IMPL(__imp__sub_830565B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,12184
	ctx.r9.s64 = ctx.r10.s64 + 12184;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8680
	ctx.r4.s64 = ctx.r10.s64 + 8680;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,29396
	ctx.r31.s64 = ctx.r10.s64 + 29396;
	// addi r10,r11,-24136
	ctx.r10.s64 = ctx.r11.s64 + -24136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056608;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,1240
	ctx.r3.s64 = ctx.r8.s64 + 1240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-24064
	ctx.r11.s64 = ctx.r9.s64 + -24064;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16400
	ctx.r11.s64 = ctx.r10.s64 + 16400;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056638;
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

__attribute__((alias("__imp__sub_83056650"))) PPC_WEAK_FUNC(sub_83056650);
PPC_FUNC_IMPL(__imp__sub_83056650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
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
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8740
	ctx.r4.s64 = ctx.r10.s64 + 8740;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,26544
	ctx.r31.s64 = ctx.r10.s64 + 26544;
	// addi r10,r11,-24136
	ctx.r10.s64 = ctx.r11.s64 + -24136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830566A8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,1320
	ctx.r3.s64 = ctx.r8.s64 + 1320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-24064
	ctx.r11.s64 = ctx.r9.s64 + -24064;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16464
	ctx.r11.s64 = ctx.r10.s64 + 16464;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830566D8;
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

__attribute__((alias("__imp__sub_830566F0"))) PPC_WEAK_FUNC(sub_830566F0);
PPC_FUNC_IMPL(__imp__sub_830566F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
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
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,69
	ctx.r9.s64 = 69;
	// addi r4,r10,8784
	ctx.r4.s64 = ctx.r10.s64 + 8784;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,28752
	ctx.r31.s64 = ctx.r10.s64 + 28752;
	// addi r10,r11,-23976
	ctx.r10.s64 = ctx.r11.s64 + -23976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056748;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,1400
	ctx.r3.s64 = ctx.r8.s64 + 1400;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23904
	ctx.r11.s64 = ctx.r9.s64 + -23904;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16464
	ctx.r11.s64 = ctx.r10.s64 + 16464;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056778;
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

__attribute__((alias("__imp__sub_83056790"))) PPC_WEAK_FUNC(sub_83056790);
PPC_FUNC_IMPL(__imp__sub_83056790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-7184
	ctx.r9.s64 = ctx.r10.s64 + -7184;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8832
	ctx.r4.s64 = ctx.r10.s64 + 8832;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,30408
	ctx.r31.s64 = ctx.r10.s64 + 30408;
	// addi r10,r11,-12616
	ctx.r10.s64 = ctx.r11.s64 + -12616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830567E8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,1480
	ctx.r3.s64 = ctx.r8.s64 + 1480;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29520
	ctx.r11.s64 = ctx.r9.s64 + 29520;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16400
	ctx.r11.s64 = ctx.r10.s64 + 16400;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056818;
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

__attribute__((alias("__imp__sub_83056830"))) PPC_WEAK_FUNC(sub_83056830);
PPC_FUNC_IMPL(__imp__sub_83056830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,-7184
	ctx.r9.s64 = ctx.r10.s64 + -7184;
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8884
	ctx.r4.s64 = ctx.r10.s64 + 8884;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,28292
	ctx.r31.s64 = ctx.r10.s64 + 28292;
	// addi r10,r11,-23816
	ctx.r10.s64 = ctx.r11.s64 + -23816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056888;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,1560
	ctx.r3.s64 = ctx.r8.s64 + 1560;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23744
	ctx.r11.s64 = ctx.r9.s64 + -23744;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16400
	ctx.r11.s64 = ctx.r10.s64 + 16400;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830568B8;
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

__attribute__((alias("__imp__sub_830568D0"))) PPC_WEAK_FUNC(sub_830568D0);
PPC_FUNC_IMPL(__imp__sub_830568D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8936
	ctx.r4.s64 = ctx.r10.s64 + 8936;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,27004
	ctx.r31.s64 = ctx.r10.s64 + 27004;
	// addi r10,r11,3136
	ctx.r10.s64 = ctx.r11.s64 + 3136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056928;
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
	// addi r3,r8,1640
	ctx.r3.s64 = ctx.r8.s64 + 1640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16904
	ctx.r11.s64 = ctx.r9.s64 + -16904;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16600
	ctx.r11.s64 = ctx.r10.s64 + 16600;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056958;
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

__attribute__((alias("__imp__sub_83056970"))) PPC_WEAK_FUNC(sub_83056970);
PPC_FUNC_IMPL(__imp__sub_83056970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
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
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8720
	ctx.r5.s64 = ctx.r10.s64 + 8720;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8984
	ctx.r4.s64 = ctx.r10.s64 + 8984;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,29580
	ctx.r31.s64 = ctx.r10.s64 + 29580;
	// addi r10,r11,-23656
	ctx.r10.s64 = ctx.r11.s64 + -23656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830569C8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,1720
	ctx.r3.s64 = ctx.r8.s64 + 1720;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23584
	ctx.r11.s64 = ctx.r9.s64 + -23584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16600
	ctx.r11.s64 = ctx.r10.s64 + 16600;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830569F8;
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

__attribute__((alias("__imp__sub_83056A10"))) PPC_WEAK_FUNC(sub_83056A10);
PPC_FUNC_IMPL(__imp__sub_83056A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,9084
	ctx.r6.s64 = ctx.r10.s64 + 9084;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9060
	ctx.r5.s64 = ctx.r10.s64 + 9060;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,9032
	ctx.r4.s64 = ctx.r10.s64 + 9032;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,27464
	ctx.r31.s64 = ctx.r10.s64 + 27464;
	// addi r10,r11,11704
	ctx.r10.s64 = ctx.r11.s64 + 11704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056A68;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,1800
	ctx.r3.s64 = ctx.r8.s64 + 1800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,30784
	ctx.r11.s64 = ctx.r9.s64 + 30784;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056A98;
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

__attribute__((alias("__imp__sub_83056AB0"))) PPC_WEAK_FUNC(sub_83056AB0);
PPC_FUNC_IMPL(__imp__sub_83056AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,9128
	ctx.r6.s64 = ctx.r10.s64 + 9128;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9060
	ctx.r5.s64 = ctx.r10.s64 + 9060;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,9100
	ctx.r4.s64 = ctx.r10.s64 + 9100;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,27188
	ctx.r31.s64 = ctx.r10.s64 + 27188;
	// addi r10,r11,11704
	ctx.r10.s64 = ctx.r11.s64 + 11704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056B08;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,1880
	ctx.r3.s64 = ctx.r8.s64 + 1880;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,30784
	ctx.r11.s64 = ctx.r9.s64 + 30784;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056B38;
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

__attribute__((alias("__imp__sub_83056B50"))) PPC_WEAK_FUNC(sub_83056B50);
PPC_FUNC_IMPL(__imp__sub_83056B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,-17088
	ctx.r9.s64 = ctx.r10.s64 + -17088;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,9084
	ctx.r6.s64 = ctx.r10.s64 + 9084;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,9172
	ctx.r5.s64 = ctx.r10.s64 + 9172;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,9144
	ctx.r4.s64 = ctx.r10.s64 + 9144;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,29304
	ctx.r31.s64 = ctx.r10.s64 + 29304;
	// addi r10,r11,11872
	ctx.r10.s64 = ctx.r11.s64 + 11872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056BA8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,1960
	ctx.r3.s64 = ctx.r8.s64 + 1960;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,30872
	ctx.r11.s64 = ctx.r9.s64 + 30872;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056BD8;
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

__attribute__((alias("__imp__sub_83056BF0"))) PPC_WEAK_FUNC(sub_83056BF0);
PPC_FUNC_IMPL(__imp__sub_83056BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r9,r10,-17088
	ctx.r9.s64 = ctx.r10.s64 + -17088;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,9128
	ctx.r6.s64 = ctx.r10.s64 + 9128;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,9172
	ctx.r5.s64 = ctx.r10.s64 + 9172;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,9196
	ctx.r4.s64 = ctx.r10.s64 + 9196;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,28200
	ctx.r31.s64 = ctx.r10.s64 + 28200;
	// addi r10,r11,11872
	ctx.r10.s64 = ctx.r11.s64 + 11872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056C48;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,2040
	ctx.r3.s64 = ctx.r8.s64 + 2040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,30872
	ctx.r11.s64 = ctx.r9.s64 + 30872;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056C78;
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

__attribute__((alias("__imp__sub_83056C90"))) PPC_WEAK_FUNC(sub_83056C90);
PPC_FUNC_IMPL(__imp__sub_83056C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r3,r11,-11712
	ctx.r3.s64 = ctx.r11.s64 + -11712;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8252cb70
	ctx.lr = 0x83056CB4;
	sub_8252CB70(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-2512
	ctx.r3.s64 = ctx.r11.s64 + -2512;
	// bl 0x82d5cd68
	ctx.lr = 0x83056CC0;
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

__attribute__((alias("__imp__sub_83056CD0"))) PPC_WEAK_FUNC(sub_83056CD0);
PPC_FUNC_IMPL(__imp__sub_83056CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r3,r11,25828
	ctx.r3.s64 = ctx.r11.s64 + 25828;
	// bl 0x8254d820
	ctx.lr = 0x83056CE8;
	sub_8254D820(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-3392
	ctx.r3.s64 = ctx.r11.s64 + -3392;
	// bl 0x82d5cd68
	ctx.lr = 0x83056CF4;
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

__attribute__((alias("__imp__sub_83056D08"))) PPC_WEAK_FUNC(sub_83056D08);
PPC_FUNC_IMPL(__imp__sub_83056D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r3,r11,25468
	ctx.r3.s64 = ctx.r11.s64 + 25468;
	// bl 0x8254d820
	ctx.lr = 0x83056D20;
	sub_8254D820(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-3376
	ctx.r3.s64 = ctx.r11.s64 + -3376;
	// bl 0x82d5cd68
	ctx.lr = 0x83056D2C;
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

__attribute__((alias("__imp__sub_83056D40"))) PPC_WEAK_FUNC(sub_83056D40);
PPC_FUNC_IMPL(__imp__sub_83056D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9276
	ctx.r5.s64 = ctx.r10.s64 + 9276;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,9224
	ctx.r4.s64 = ctx.r10.s64 + 9224;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,27924
	ctx.r31.s64 = ctx.r10.s64 + 27924;
	// addi r10,r11,13464
	ctx.r10.s64 = ctx.r11.s64 + 13464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056D98;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,2120
	ctx.r3.s64 = ctx.r8.s64 + 2120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23392
	ctx.r11.s64 = ctx.r9.s64 + -23392;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16696
	ctx.r11.s64 = ctx.r10.s64 + 16696;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056DC8;
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

__attribute__((alias("__imp__sub_83056DE0"))) PPC_WEAK_FUNC(sub_83056DE0);
PPC_FUNC_IMPL(__imp__sub_83056DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,9372
	ctx.r6.s64 = ctx.r10.s64 + 9372;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,9348
	ctx.r5.s64 = ctx.r10.s64 + 9348;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,9300
	ctx.r4.s64 = ctx.r10.s64 + 9300;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,31144
	ctx.r31.s64 = ctx.r10.s64 + 31144;
	// addi r10,r11,-23496
	ctx.r10.s64 = ctx.r11.s64 + -23496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056E38;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,2200
	ctx.r3.s64 = ctx.r8.s64 + 2200;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23424
	ctx.r11.s64 = ctx.r9.s64 + -23424;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16696
	ctx.r11.s64 = ctx.r10.s64 + 16696;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056E68;
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

__attribute__((alias("__imp__sub_83056E80"))) PPC_WEAK_FUNC(sub_83056E80);
PPC_FUNC_IMPL(__imp__sub_83056E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9276
	ctx.r5.s64 = ctx.r10.s64 + 9276;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,9392
	ctx.r4.s64 = ctx.r10.s64 + 9392;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,29488
	ctx.r31.s64 = ctx.r10.s64 + 29488;
	// addi r10,r11,13464
	ctx.r10.s64 = ctx.r11.s64 + 13464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056ED8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,2280
	ctx.r3.s64 = ctx.r8.s64 + 2280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23392
	ctx.r11.s64 = ctx.r9.s64 + -23392;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16696
	ctx.r11.s64 = ctx.r10.s64 + 16696;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056F08;
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

__attribute__((alias("__imp__sub_83056F20"))) PPC_WEAK_FUNC(sub_83056F20);
PPC_FUNC_IMPL(__imp__sub_83056F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,9504
	ctx.r6.s64 = ctx.r10.s64 + 9504;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,9348
	ctx.r5.s64 = ctx.r10.s64 + 9348;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,9448
	ctx.r4.s64 = ctx.r10.s64 + 9448;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,31328
	ctx.r31.s64 = ctx.r10.s64 + 31328;
	// addi r10,r11,-23496
	ctx.r10.s64 = ctx.r11.s64 + -23496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83056F78;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,2360
	ctx.r3.s64 = ctx.r8.s64 + 2360;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23424
	ctx.r11.s64 = ctx.r9.s64 + -23424;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16696
	ctx.r11.s64 = ctx.r10.s64 + 16696;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83056FA8;
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

__attribute__((alias("__imp__sub_83056FC0"))) PPC_WEAK_FUNC(sub_83056FC0);
PPC_FUNC_IMPL(__imp__sub_83056FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9276
	ctx.r5.s64 = ctx.r10.s64 + 9276;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,9532
	ctx.r4.s64 = ctx.r10.s64 + 9532;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,31512
	ctx.r31.s64 = ctx.r10.s64 + 31512;
	// addi r10,r11,13464
	ctx.r10.s64 = ctx.r11.s64 + 13464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83057018;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,2440
	ctx.r3.s64 = ctx.r8.s64 + 2440;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23392
	ctx.r11.s64 = ctx.r9.s64 + -23392;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16696
	ctx.r11.s64 = ctx.r10.s64 + 16696;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83057048;
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

__attribute__((alias("__imp__sub_83057060"))) PPC_WEAK_FUNC(sub_83057060);
PPC_FUNC_IMPL(__imp__sub_83057060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,9644
	ctx.r6.s64 = ctx.r10.s64 + 9644;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,9348
	ctx.r5.s64 = ctx.r10.s64 + 9348;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,9588
	ctx.r4.s64 = ctx.r10.s64 + 9588;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,27096
	ctx.r31.s64 = ctx.r10.s64 + 27096;
	// addi r10,r11,-23496
	ctx.r10.s64 = ctx.r11.s64 + -23496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830570B8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,2520
	ctx.r3.s64 = ctx.r8.s64 + 2520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23424
	ctx.r11.s64 = ctx.r9.s64 + -23424;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16696
	ctx.r11.s64 = ctx.r10.s64 + 16696;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830570E8;
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

__attribute__((alias("__imp__sub_83057100"))) PPC_WEAK_FUNC(sub_83057100);
PPC_FUNC_IMPL(__imp__sub_83057100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9276
	ctx.r5.s64 = ctx.r10.s64 + 9276;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,9672
	ctx.r4.s64 = ctx.r10.s64 + 9672;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,30684
	ctx.r31.s64 = ctx.r10.s64 + 30684;
	// addi r10,r11,13464
	ctx.r10.s64 = ctx.r11.s64 + 13464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83057158;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,2600
	ctx.r3.s64 = ctx.r8.s64 + 2600;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23392
	ctx.r11.s64 = ctx.r9.s64 + -23392;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16696
	ctx.r11.s64 = ctx.r10.s64 + 16696;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83057188;
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

__attribute__((alias("__imp__sub_830571A0"))) PPC_WEAK_FUNC(sub_830571A0);
PPC_FUNC_IMPL(__imp__sub_830571A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,9768
	ctx.r6.s64 = ctx.r10.s64 + 9768;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,9348
	ctx.r5.s64 = ctx.r10.s64 + 9348;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,9720
	ctx.r4.s64 = ctx.r10.s64 + 9720;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,30040
	ctx.r31.s64 = ctx.r10.s64 + 30040;
	// addi r10,r11,-23496
	ctx.r10.s64 = ctx.r11.s64 + -23496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830571F8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,2680
	ctx.r3.s64 = ctx.r8.s64 + 2680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23424
	ctx.r11.s64 = ctx.r9.s64 + -23424;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16696
	ctx.r11.s64 = ctx.r10.s64 + 16696;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83057228;
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

__attribute__((alias("__imp__sub_83057240"))) PPC_WEAK_FUNC(sub_83057240);
PPC_FUNC_IMPL(__imp__sub_83057240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9276
	ctx.r5.s64 = ctx.r10.s64 + 9276;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,9792
	ctx.r4.s64 = ctx.r10.s64 + 9792;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,28568
	ctx.r31.s64 = ctx.r10.s64 + 28568;
	// addi r10,r11,13464
	ctx.r10.s64 = ctx.r11.s64 + 13464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83057298;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,2760
	ctx.r3.s64 = ctx.r8.s64 + 2760;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23392
	ctx.r11.s64 = ctx.r9.s64 + -23392;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16696
	ctx.r11.s64 = ctx.r10.s64 + 16696;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830572C8;
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

__attribute__((alias("__imp__sub_830572E0"))) PPC_WEAK_FUNC(sub_830572E0);
PPC_FUNC_IMPL(__imp__sub_830572E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,9884
	ctx.r6.s64 = ctx.r10.s64 + 9884;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,9348
	ctx.r5.s64 = ctx.r10.s64 + 9348;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,9840
	ctx.r4.s64 = ctx.r10.s64 + 9840;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,32156
	ctx.r31.s64 = ctx.r10.s64 + 32156;
	// addi r10,r11,-23496
	ctx.r10.s64 = ctx.r11.s64 + -23496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83057338;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,2840
	ctx.r3.s64 = ctx.r8.s64 + 2840;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23424
	ctx.r11.s64 = ctx.r9.s64 + -23424;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16696
	ctx.r11.s64 = ctx.r10.s64 + 16696;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83057368;
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

__attribute__((alias("__imp__sub_83057380"))) PPC_WEAK_FUNC(sub_83057380);
PPC_FUNC_IMPL(__imp__sub_83057380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9928
	ctx.r5.s64 = ctx.r10.s64 + 9928;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,9900
	ctx.r4.s64 = ctx.r10.s64 + 9900;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,25736
	ctx.r31.s64 = ctx.r10.s64 + 25736;
	// addi r10,r11,13464
	ctx.r10.s64 = ctx.r11.s64 + 13464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830573D8;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,2920
	ctx.r3.s64 = ctx.r8.s64 + 2920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23392
	ctx.r11.s64 = ctx.r9.s64 + -23392;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14608
	ctx.r11.s64 = ctx.r10.s64 + 14608;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83057408;
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

__attribute__((alias("__imp__sub_83057420"))) PPC_WEAK_FUNC(sub_83057420);
PPC_FUNC_IMPL(__imp__sub_83057420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r10,27376
	ctx.r9.s64 = ctx.r10.s64 + 27376;
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
	// addi r5,r10,9984
	ctx.r5.s64 = ctx.r10.s64 + 9984;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,9956
	ctx.r4.s64 = ctx.r10.s64 + 9956;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,26016
	ctx.r31.s64 = ctx.r10.s64 + 26016;
	// addi r10,r11,-16264
	ctx.r10.s64 = ctx.r11.s64 + -16264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83057478;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,3000
	ctx.r3.s64 = ctx.r8.s64 + 3000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-16192
	ctx.r11.s64 = ctx.r9.s64 + -16192;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14608
	ctx.r11.s64 = ctx.r10.s64 + 14608;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830574A8;
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

__attribute__((alias("__imp__sub_830574C0"))) PPC_WEAK_FUNC(sub_830574C0);
PPC_FUNC_IMPL(__imp__sub_830574C0) {
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
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r5,r9,10036
	ctx.r5.s64 = ctx.r9.s64 + 10036;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,27376
	ctx.r6.s64 = ctx.r11.s64 + 27376;
	// li r8,68
	ctx.r8.s64 = 68;
	// li r7,433
	ctx.r7.s64 = 433;
	// addi r4,r9,10012
	ctx.r4.s64 = ctx.r9.s64 + 10012;
	// lis r9,-31983
	ctx.r9.s64 = -2096037888;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,25420
	ctx.r3.s64 = ctx.r9.s64 + 25420;
	// addi r10,r10,-16464
	ctx.r10.s64 = ctx.r10.s64 + -16464;
	// addi r9,r11,7856
	ctx.r9.s64 = ctx.r11.s64 + 7856;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x83057520;
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

__attribute__((alias("__imp__sub_83057530"))) PPC_WEAK_FUNC(sub_83057530);
PPC_FUNC_IMPL(__imp__sub_83057530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-3360
	ctx.r3.s64 = ctx.r11.s64 + -3360;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057540"))) PPC_WEAK_FUNC(sub_83057540);
PPC_FUNC_IMPL(__imp__sub_83057540) {
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
	// addi r11,r11,-32272
	ctx.r11.s64 = ctx.r11.s64 + -32272;
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

__attribute__((alias("__imp__sub_83057570"))) PPC_WEAK_FUNC(sub_83057570);
PPC_FUNC_IMPL(__imp__sub_83057570) {
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
	// addi r11,r11,-32160
	ctx.r11.s64 = ctx.r11.s64 + -32160;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830575A0"))) PPC_WEAK_FUNC(sub_830575A0);
PPC_FUNC_IMPL(__imp__sub_830575A0) {
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
	// addi r11,r11,-32096
	ctx.r11.s64 = ctx.r11.s64 + -32096;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830575E8"))) PPC_WEAK_FUNC(sub_830575E8);
PPC_FUNC_IMPL(__imp__sub_830575E8) {
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
	// addi r11,r11,-32256
	ctx.r11.s64 = ctx.r11.s64 + -32256;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057630"))) PPC_WEAK_FUNC(sub_83057630);
PPC_FUNC_IMPL(__imp__sub_83057630) {
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
	// addi r5,r9,-21276
	ctx.r5.s64 = ctx.r9.s64 + -21276;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,27376
	ctx.r6.s64 = ctx.r11.s64 + 27376;
	// li r8,78
	ctx.r8.s64 = 78;
	// li r7,362
	ctx.r7.s64 = 362;
	// addi r4,r9,-21300
	ctx.r4.s64 = ctx.r9.s64 + -21300;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-32384
	ctx.r3.s64 = ctx.r9.s64 + -32384;
	// addi r10,r10,28040
	ctx.r10.s64 = ctx.r10.s64 + 28040;
	// addi r9,r11,4720
	ctx.r9.s64 = ctx.r11.s64 + 4720;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x83057690;
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

__attribute__((alias("__imp__sub_830576A0"))) PPC_WEAK_FUNC(sub_830576A0);
PPC_FUNC_IMPL(__imp__sub_830576A0) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r5,r9,-21276
	ctx.r5.s64 = ctx.r9.s64 + -21276;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,2800
	ctx.r6.s64 = ctx.r11.s64 + 2800;
	// li r8,78
	ctx.r8.s64 = 78;
	// li r7,405
	ctx.r7.s64 = 405;
	// addi r4,r9,-21252
	ctx.r4.s64 = ctx.r9.s64 + -21252;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-32240
	ctx.r3.s64 = ctx.r9.s64 + -32240;
	// addi r10,r10,28144
	ctx.r10.s64 = ctx.r10.s64 + 28144;
	// addi r9,r11,-19944
	ctx.r9.s64 = ctx.r11.s64 + -19944;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x83057700;
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

__attribute__((alias("__imp__sub_83057710"))) PPC_WEAK_FUNC(sub_83057710);
PPC_FUNC_IMPL(__imp__sub_83057710) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r5,r9,-21276
	ctx.r5.s64 = ctx.r9.s64 + -21276;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,2888
	ctx.r6.s64 = ctx.r11.s64 + 2888;
	// li r8,78
	ctx.r8.s64 = 78;
	// li r7,404
	ctx.r7.s64 = 404;
	// addi r4,r9,-21224
	ctx.r4.s64 = ctx.r9.s64 + -21224;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-32336
	ctx.r3.s64 = ctx.r9.s64 + -32336;
	// addi r10,r10,28272
	ctx.r10.s64 = ctx.r10.s64 + 28272;
	// addi r9,r11,4816
	ctx.r9.s64 = ctx.r11.s64 + 4816;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x83057770;
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

__attribute__((alias("__imp__sub_83057780"))) PPC_WEAK_FUNC(sub_83057780);
PPC_FUNC_IMPL(__imp__sub_83057780) {
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
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// addi r5,r9,-21276
	ctx.r5.s64 = ctx.r9.s64 + -21276;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,2976
	ctx.r6.s64 = ctx.r11.s64 + 2976;
	// li r8,78
	ctx.r8.s64 = 78;
	// li r7,404
	ctx.r7.s64 = 404;
	// addi r4,r9,-21196
	ctx.r4.s64 = ctx.r9.s64 + -21196;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-32660
	ctx.r3.s64 = ctx.r9.s64 + -32660;
	// addi r10,r10,28368
	ctx.r10.s64 = ctx.r10.s64 + 28368;
	// addi r9,r11,-19848
	ctx.r9.s64 = ctx.r11.s64 + -19848;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x830577E0;
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

__attribute__((alias("__imp__sub_830577F0"))) PPC_WEAK_FUNC(sub_830577F0);
PPC_FUNC_IMPL(__imp__sub_830577F0) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-32136
	ctx.r11.s64 = ctx.r11.s64 + -32136;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x823e3ae0
	ctx.lr = 0x83057814;
	sub_823E3AE0(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,3656
	ctx.r3.s64 = ctx.r11.s64 + 3656;
	// bl 0x82d5cd68
	ctx.lr = 0x83057820;
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

__attribute__((alias("__imp__sub_83057830"))) PPC_WEAK_FUNC(sub_83057830);
PPC_FUNC_IMPL(__imp__sub_83057830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-11660
	ctx.r4.s64 = ctx.r11.s64 + -11660;
	// bl 0x824215d0
	ctx.lr = 0x8305784C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-32734(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32734, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057868"))) PPC_WEAK_FUNC(sub_83057868);
PPC_FUNC_IMPL(__imp__sub_83057868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-11656
	ctx.r4.s64 = ctx.r11.s64 + -11656;
	// bl 0x824215d0
	ctx.lr = 0x83057884;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-32735(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32735, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830578A0"))) PPC_WEAK_FUNC(sub_830578A0);
PPC_FUNC_IMPL(__imp__sub_830578A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-11652
	ctx.r4.s64 = ctx.r11.s64 + -11652;
	// bl 0x824215d0
	ctx.lr = 0x830578BC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-32736(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32736, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830578D8"))) PPC_WEAK_FUNC(sub_830578D8);
PPC_FUNC_IMPL(__imp__sub_830578D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-11648
	ctx.r4.s64 = ctx.r11.s64 + -11648;
	// bl 0x824215d0
	ctx.lr = 0x830578F4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-32733(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32733, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83057910"))) PPC_WEAK_FUNC(sub_83057910);
PPC_FUNC_IMPL(__imp__sub_83057910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-21136
	ctx.r5.s64 = ctx.r10.s64 + -21136;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-21164
	ctx.r4.s64 = ctx.r10.s64 + -21164;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-32540
	ctx.r31.s64 = ctx.r10.s64 + -32540;
	// addi r10,r11,11800
	ctx.r10.s64 = ctx.r11.s64 + 11800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83057968;
	sub_824A5230(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32103
	ctx.r9.s64 = -2103902208;
	// addi r11,r11,-25236
	ctx.r11.s64 = ctx.r11.s64 + -25236;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,3856
	ctx.r3.s64 = ctx.r8.s64 + 3856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29912
	ctx.r11.s64 = ctx.r9.s64 + -29912;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,6176
	ctx.r11.s64 = ctx.r10.s64 + 6176;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83057998;
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

__attribute__((alias("__imp__sub_830579B0"))) PPC_WEAK_FUNC(sub_830579B0);
PPC_FUNC_IMPL(__imp__sub_830579B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
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
	// addi r5,r10,-21080
	ctx.r5.s64 = ctx.r10.s64 + -21080;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-21108
	ctx.r4.s64 = ctx.r10.s64 + -21108;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-32064
	ctx.r31.s64 = ctx.r10.s64 + -32064;
	// addi r10,r11,-25032
	ctx.r10.s64 = ctx.r11.s64 + -25032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83057A08;
	sub_824A5230(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r11,r11,-25236
	ctx.r11.s64 = ctx.r11.s64 + -25236;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,3728
	ctx.r3.s64 = ctx.r8.s64 + 3728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-9976
	ctx.r11.s64 = ctx.r9.s64 + -9976;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,6176
	ctx.r11.s64 = ctx.r10.s64 + 6176;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83057A38;
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

__attribute__((alias("__imp__sub_83057A50"))) PPC_WEAK_FUNC(sub_83057A50);
PPC_FUNC_IMPL(__imp__sub_83057A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r3,r11,-10616
	ctx.r3.s64 = ctx.r11.s64 + -10616;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8252cb70
	ctx.lr = 0x83057A74;
	sub_8252CB70(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,3576
	ctx.r3.s64 = ctx.r11.s64 + 3576;
	// bl 0x82d5cd68
	ctx.lr = 0x83057A80;
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

__attribute__((alias("__imp__sub_83057A90"))) PPC_WEAK_FUNC(sub_83057A90);
PPC_FUNC_IMPL(__imp__sub_83057A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r3,r11,-10592
	ctx.r3.s64 = ctx.r11.s64 + -10592;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8252cb70
	ctx.lr = 0x83057AB4;
	sub_8252CB70(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,3808
	ctx.r3.s64 = ctx.r11.s64 + 3808;
	// bl 0x82d5cd68
	ctx.lr = 0x83057AC0;
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

__attribute__((alias("__imp__sub_83057AD0"))) PPC_WEAK_FUNC(sub_83057AD0);
PPC_FUNC_IMPL(__imp__sub_83057AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r3,r11,-10568
	ctx.r3.s64 = ctx.r11.s64 + -10568;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8252cb70
	ctx.lr = 0x83057AF4;
	sub_8252CB70(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,3832
	ctx.r3.s64 = ctx.r11.s64 + 3832;
	// bl 0x82d5cd68
	ctx.lr = 0x83057B00;
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

__attribute__((alias("__imp__sub_83057B10"))) PPC_WEAK_FUNC(sub_83057B10);
PPC_FUNC_IMPL(__imp__sub_83057B10) {
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
	// addi r5,r9,-21024
	ctx.r5.s64 = ctx.r9.s64 + -21024;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,27376
	ctx.r6.s64 = ctx.r11.s64 + 27376;
	// li r7,400
	ctx.r7.s64 = 400;
	// addi r4,r9,-21052
	ctx.r4.s64 = ctx.r9.s64 + -21052;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-32732
	ctx.r3.s64 = ctx.r9.s64 + -32732;
	// addi r10,r10,6200
	ctx.r10.s64 = ctx.r10.s64 + 6200;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,8216
	ctx.r9.s64 = ctx.r11.s64 + 8216;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x83057B6C;
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

__attribute__((alias("__imp__sub_83057B80"))) PPC_WEAK_FUNC(sub_83057B80);
PPC_FUNC_IMPL(__imp__sub_83057B80) {
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
	// addi r5,r9,-20980
	ctx.r5.s64 = ctx.r9.s64 + -20980;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,27376
	ctx.r6.s64 = ctx.r11.s64 + 27376;
	// li r8,68
	ctx.r8.s64 = 68;
	// li r7,434
	ctx.r7.s64 = 434;
	// addi r4,r9,-21000
	ctx.r4.s64 = ctx.r9.s64 + -21000;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-32432
	ctx.r3.s64 = ctx.r9.s64 + -32432;
	// addi r10,r10,31928
	ctx.r10.s64 = ctx.r10.s64 + 31928;
	// addi r9,r11,-32184
	ctx.r9.s64 = ctx.r11.s64 + -32184;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x83057BE0;
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

__attribute__((alias("__imp__sub_83057BF0"))) PPC_WEAK_FUNC(sub_83057BF0);
PPC_FUNC_IMPL(__imp__sub_83057BF0) {
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
	// addi r5,r9,-20980
	ctx.r5.s64 = ctx.r9.s64 + -20980;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,27376
	ctx.r6.s64 = ctx.r11.s64 + 27376;
	// li r7,339
	ctx.r7.s64 = 339;
	// addi r4,r9,-20960
	ctx.r4.s64 = ctx.r9.s64 + -20960;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-32604
	ctx.r3.s64 = ctx.r9.s64 + -32604;
	// addi r10,r10,5296
	ctx.r10.s64 = ctx.r10.s64 + 5296;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,-32096
	ctx.r9.s64 = ctx.r11.s64 + -32096;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x828aaac0
	ctx.lr = 0x83057C4C;
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

__attribute__((alias("__imp__sub_83057C60"))) PPC_WEAK_FUNC(sub_83057C60);
PPC_FUNC_IMPL(__imp__sub_83057C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,32680
	ctx.r11.s64 = ctx.r11.s64 + 32680;
	// lis r9,-31992
	ctx.r9.s64 = -2096627712;
	// addi r3,r9,3936
	ctx.r3.s64 = ctx.r9.s64 + 3936;
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
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057CE8"))) PPC_WEAK_FUNC(sub_83057CE8);
PPC_FUNC_IMPL(__imp__sub_83057CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20932
	ctx.r4.s64 = ctx.r10.s64 + -20932;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,31144
	ctx.r5.s64 = ctx.r11.s64 + 31144;
	// addi r3,r10,-32556
	ctx.r3.s64 = ctx.r10.s64 + -32556;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057D08"))) PPC_WEAK_FUNC(sub_83057D08);
PPC_FUNC_IMPL(__imp__sub_83057D08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20896
	ctx.r4.s64 = ctx.r10.s64 + -20896;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,11888
	ctx.r5.s64 = ctx.r11.s64 + 11888;
	// addi r3,r10,-32668
	ctx.r3.s64 = ctx.r10.s64 + -32668;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057D28"))) PPC_WEAK_FUNC(sub_83057D28);
PPC_FUNC_IMPL(__imp__sub_83057D28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20860
	ctx.r4.s64 = ctx.r10.s64 + -20860;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,11984
	ctx.r5.s64 = ctx.r11.s64 + 11984;
	// addi r3,r10,-31956
	ctx.r3.s64 = ctx.r10.s64 + -31956;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057D48"))) PPC_WEAK_FUNC(sub_83057D48);
PPC_FUNC_IMPL(__imp__sub_83057D48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20820
	ctx.r4.s64 = ctx.r10.s64 + -20820;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,12080
	ctx.r5.s64 = ctx.r11.s64 + 12080;
	// addi r3,r10,-31948
	ctx.r3.s64 = ctx.r10.s64 + -31948;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057D68"))) PPC_WEAK_FUNC(sub_83057D68);
PPC_FUNC_IMPL(__imp__sub_83057D68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20780
	ctx.r4.s64 = ctx.r10.s64 + -20780;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,12176
	ctx.r5.s64 = ctx.r11.s64 + 12176;
	// addi r3,r10,-32072
	ctx.r3.s64 = ctx.r10.s64 + -32072;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057D88"))) PPC_WEAK_FUNC(sub_83057D88);
PPC_FUNC_IMPL(__imp__sub_83057D88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20740
	ctx.r4.s64 = ctx.r10.s64 + -20740;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,12264
	ctx.r5.s64 = ctx.r11.s64 + 12264;
	// addi r3,r10,-32144
	ctx.r3.s64 = ctx.r10.s64 + -32144;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057DA8"))) PPC_WEAK_FUNC(sub_83057DA8);
PPC_FUNC_IMPL(__imp__sub_83057DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20704
	ctx.r4.s64 = ctx.r10.s64 + -20704;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,12488
	ctx.r5.s64 = ctx.r11.s64 + 12488;
	// addi r3,r10,-32612
	ctx.r3.s64 = ctx.r10.s64 + -32612;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057DC8"))) PPC_WEAK_FUNC(sub_83057DC8);
PPC_FUNC_IMPL(__imp__sub_83057DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20672
	ctx.r4.s64 = ctx.r10.s64 + -20672;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,12648
	ctx.r5.s64 = ctx.r11.s64 + 12648;
	// addi r3,r10,-32176
	ctx.r3.s64 = ctx.r10.s64 + -32176;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057DE8"))) PPC_WEAK_FUNC(sub_83057DE8);
PPC_FUNC_IMPL(__imp__sub_83057DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20636
	ctx.r4.s64 = ctx.r10.s64 + -20636;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,12736
	ctx.r5.s64 = ctx.r11.s64 + 12736;
	// addi r3,r10,-31940
	ctx.r3.s64 = ctx.r10.s64 + -31940;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057E08"))) PPC_WEAK_FUNC(sub_83057E08);
PPC_FUNC_IMPL(__imp__sub_83057E08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20592
	ctx.r4.s64 = ctx.r10.s64 + -20592;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,12824
	ctx.r5.s64 = ctx.r11.s64 + 12824;
	// addi r3,r10,-32448
	ctx.r3.s64 = ctx.r10.s64 + -32448;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057E28"))) PPC_WEAK_FUNC(sub_83057E28);
PPC_FUNC_IMPL(__imp__sub_83057E28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20548
	ctx.r4.s64 = ctx.r10.s64 + -20548;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,12912
	ctx.r5.s64 = ctx.r11.s64 + 12912;
	// addi r3,r10,-32280
	ctx.r3.s64 = ctx.r10.s64 + -32280;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057E48"))) PPC_WEAK_FUNC(sub_83057E48);
PPC_FUNC_IMPL(__imp__sub_83057E48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20504
	ctx.r4.s64 = ctx.r10.s64 + -20504;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,13000
	ctx.r5.s64 = ctx.r11.s64 + 13000;
	// addi r3,r10,-31932
	ctx.r3.s64 = ctx.r10.s64 + -31932;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057E68"))) PPC_WEAK_FUNC(sub_83057E68);
PPC_FUNC_IMPL(__imp__sub_83057E68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20452
	ctx.r4.s64 = ctx.r10.s64 + -20452;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,31232
	ctx.r5.s64 = ctx.r11.s64 + 31232;
	// addi r3,r10,-32684
	ctx.r3.s64 = ctx.r10.s64 + -32684;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057E88"))) PPC_WEAK_FUNC(sub_83057E88);
PPC_FUNC_IMPL(__imp__sub_83057E88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20420
	ctx.r4.s64 = ctx.r10.s64 + -20420;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,31456
	ctx.r5.s64 = ctx.r11.s64 + 31456;
	// addi r3,r10,-32080
	ctx.r3.s64 = ctx.r10.s64 + -32080;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057EA8"))) PPC_WEAK_FUNC(sub_83057EA8);
PPC_FUNC_IMPL(__imp__sub_83057EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20380
	ctx.r4.s64 = ctx.r10.s64 + -20380;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,31544
	ctx.r5.s64 = ctx.r11.s64 + 31544;
	// addi r3,r10,-32744
	ctx.r3.s64 = ctx.r10.s64 + -32744;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057EC8"))) PPC_WEAK_FUNC(sub_83057EC8);
PPC_FUNC_IMPL(__imp__sub_83057EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20340
	ctx.r4.s64 = ctx.r10.s64 + -20340;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,31720
	ctx.r5.s64 = ctx.r11.s64 + 31720;
	// addi r3,r10,-32168
	ctx.r3.s64 = ctx.r10.s64 + -32168;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057EE8"))) PPC_WEAK_FUNC(sub_83057EE8);
PPC_FUNC_IMPL(__imp__sub_83057EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20304
	ctx.r4.s64 = ctx.r10.s64 + -20304;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,31808
	ctx.r5.s64 = ctx.r11.s64 + 31808;
	// addi r3,r10,-31964
	ctx.r3.s64 = ctx.r10.s64 + -31964;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057F08"))) PPC_WEAK_FUNC(sub_83057F08);
PPC_FUNC_IMPL(__imp__sub_83057F08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20264
	ctx.r4.s64 = ctx.r10.s64 + -20264;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,31904
	ctx.r5.s64 = ctx.r11.s64 + 31904;
	// addi r3,r10,-32440
	ctx.r3.s64 = ctx.r10.s64 + -32440;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057F28"))) PPC_WEAK_FUNC(sub_83057F28);
PPC_FUNC_IMPL(__imp__sub_83057F28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20232
	ctx.r4.s64 = ctx.r10.s64 + -20232;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,32000
	ctx.r5.s64 = ctx.r11.s64 + 32000;
	// addi r3,r10,-32548
	ctx.r3.s64 = ctx.r10.s64 + -32548;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057F48"))) PPC_WEAK_FUNC(sub_83057F48);
PPC_FUNC_IMPL(__imp__sub_83057F48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20200
	ctx.r4.s64 = ctx.r10.s64 + -20200;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,32096
	ctx.r5.s64 = ctx.r11.s64 + 32096;
	// addi r3,r10,-32192
	ctx.r3.s64 = ctx.r10.s64 + -32192;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057F68"))) PPC_WEAK_FUNC(sub_83057F68);
PPC_FUNC_IMPL(__imp__sub_83057F68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20168
	ctx.r4.s64 = ctx.r10.s64 + -20168;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,32272
	ctx.r5.s64 = ctx.r11.s64 + 32272;
	// addi r3,r10,-32676
	ctx.r3.s64 = ctx.r10.s64 + -32676;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057F88"))) PPC_WEAK_FUNC(sub_83057F88);
PPC_FUNC_IMPL(__imp__sub_83057F88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20136
	ctx.r4.s64 = ctx.r10.s64 + -20136;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,32360
	ctx.r5.s64 = ctx.r11.s64 + 32360;
	// addi r3,r10,-31972
	ctx.r3.s64 = ctx.r10.s64 + -31972;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057FA8"))) PPC_WEAK_FUNC(sub_83057FA8);
PPC_FUNC_IMPL(__imp__sub_83057FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20104
	ctx.r4.s64 = ctx.r10.s64 + -20104;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,32448
	ctx.r5.s64 = ctx.r11.s64 + 32448;
	// addi r3,r10,-32288
	ctx.r3.s64 = ctx.r10.s64 + -32288;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057FC8"))) PPC_WEAK_FUNC(sub_83057FC8);
PPC_FUNC_IMPL(__imp__sub_83057FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r4,r10,-20072
	ctx.r4.s64 = ctx.r10.s64 + -20072;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r5,r11,32536
	ctx.r5.s64 = ctx.r11.s64 + 32536;
	// addi r3,r10,-32184
	ctx.r3.s64 = ctx.r10.s64 + -32184;
	// b 0x824f0ee8
	sub_824F0EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83057FE8"))) PPC_WEAK_FUNC(sub_83057FE8);
PPC_FUNC_IMPL(__imp__sub_83057FE8) {
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
	// addi r11,r11,-31488
	ctx.r11.s64 = ctx.r11.s64 + -31488;
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

__attribute__((alias("__imp__sub_83058018"))) PPC_WEAK_FUNC(sub_83058018);
PPC_FUNC_IMPL(__imp__sub_83058018) {
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
	// addi r11,r11,-31456
	ctx.r11.s64 = ctx.r11.s64 + -31456;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83058048"))) PPC_WEAK_FUNC(sub_83058048);
PPC_FUNC_IMPL(__imp__sub_83058048) {
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
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83058090"))) PPC_WEAK_FUNC(sub_83058090);
PPC_FUNC_IMPL(__imp__sub_83058090) {
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
	// addi r11,r11,-31472
	ctx.r11.s64 = ctx.r11.s64 + -31472;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830580D8"))) PPC_WEAK_FUNC(sub_830580D8);
PPC_FUNC_IMPL(__imp__sub_830580D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,4088
	ctx.r3.s64 = ctx.r11.s64 + 4088;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830580E8"))) PPC_WEAK_FUNC(sub_830580E8);
PPC_FUNC_IMPL(__imp__sub_830580E8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r5,r9,-7160
	ctx.r5.s64 = ctx.r9.s64 + -7160;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-27432
	ctx.r6.s64 = ctx.r11.s64 + -27432;
	// li r7,339
	ctx.r7.s64 = 339;
	// addi r4,r9,-7192
	ctx.r4.s64 = ctx.r9.s64 + -7192;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-31596
	ctx.r3.s64 = ctx.r9.s64 + -31596;
	// addi r10,r10,4040
	ctx.r10.s64 = ctx.r10.s64 + 4040;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,-3824
	ctx.r9.s64 = ctx.r11.s64 + -3824;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x83058144;
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

__attribute__((alias("__imp__sub_83058158"))) PPC_WEAK_FUNC(sub_83058158);
PPC_FUNC_IMPL(__imp__sub_83058158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,4112
	ctx.r3.s64 = ctx.r11.s64 + 4112;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83058168"))) PPC_WEAK_FUNC(sub_83058168);
PPC_FUNC_IMPL(__imp__sub_83058168) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r5,r9,-6932
	ctx.r5.s64 = ctx.r9.s64 + -6932;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-21424
	ctx.r6.s64 = ctx.r11.s64 + -21424;
	// li r8,79
	ctx.r8.s64 = 79;
	// li r7,441
	ctx.r7.s64 = 441;
	// addi r4,r9,-6960
	ctx.r4.s64 = ctx.r9.s64 + -6960;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-31680
	ctx.r3.s64 = ctx.r9.s64 + -31680;
	// addi r10,r10,12912
	ctx.r10.s64 = ctx.r10.s64 + 12912;
	// addi r9,r11,-22560
	ctx.r9.s64 = ctx.r11.s64 + -22560;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x830581C8;
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

__attribute__((alias("__imp__sub_830581D8"))) PPC_WEAK_FUNC(sub_830581D8);
PPC_FUNC_IMPL(__imp__sub_830581D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,4136
	ctx.r3.s64 = ctx.r11.s64 + 4136;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830581E8"))) PPC_WEAK_FUNC(sub_830581E8);
PPC_FUNC_IMPL(__imp__sub_830581E8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r5,r9,-6932
	ctx.r5.s64 = ctx.r9.s64 + -6932;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-27432
	ctx.r6.s64 = ctx.r11.s64 + -27432;
	// li r8,79
	ctx.r8.s64 = 79;
	// li r7,441
	ctx.r7.s64 = 441;
	// addi r4,r9,-6872
	ctx.r4.s64 = ctx.r9.s64 + -6872;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-31548
	ctx.r3.s64 = ctx.r9.s64 + -31548;
	// addi r10,r10,15984
	ctx.r10.s64 = ctx.r10.s64 + 15984;
	// addi r9,r11,16088
	ctx.r9.s64 = ctx.r11.s64 + 16088;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x828aaac0
	ctx.lr = 0x83058248;
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

__attribute__((alias("__imp__sub_83058258"))) PPC_WEAK_FUNC(sub_83058258);
PPC_FUNC_IMPL(__imp__sub_83058258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-6788
	ctx.r5.s64 = ctx.r10.s64 + -6788;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-6848
	ctx.r4.s64 = ctx.r10.s64 + -6848;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-30376
	ctx.r31.s64 = ctx.r10.s64 + -30376;
	// addi r10,r11,3136
	ctx.r10.s64 = ctx.r11.s64 + 3136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830582B0;
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
	// addi r3,r8,5696
	ctx.r3.s64 = ctx.r8.s64 + 5696;
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
	ctx.lr = 0x830582E0;
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

__attribute__((alias("__imp__sub_830582F8"))) PPC_WEAK_FUNC(sub_830582F8);
PPC_FUNC_IMPL(__imp__sub_830582F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
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
	// addi r5,r10,-6704
	ctx.r5.s64 = ctx.r10.s64 + -6704;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-6764
	ctx.r4.s64 = ctx.r10.s64 + -6764;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-29916
	ctx.r31.s64 = ctx.r10.s64 + -29916;
	// addi r10,r11,9256
	ctx.r10.s64 = ctx.r11.s64 + 9256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058350;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,4176
	ctx.r3.s64 = ctx.r8.s64 + 4176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,9328
	ctx.r11.s64 = ctx.r9.s64 + 9328;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-28352
	ctx.r11.s64 = ctx.r10.s64 + -28352;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058380;
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

__attribute__((alias("__imp__sub_83058398"))) PPC_WEAK_FUNC(sub_83058398);
PPC_FUNC_IMPL(__imp__sub_83058398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-6788
	ctx.r5.s64 = ctx.r10.s64 + -6788;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-6680
	ctx.r4.s64 = ctx.r10.s64 + -6680;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-31296
	ctx.r31.s64 = ctx.r10.s64 + -31296;
	// addi r10,r11,-11488
	ctx.r10.s64 = ctx.r11.s64 + -11488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830583F0;
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
	// addi r3,r8,4256
	ctx.r3.s64 = ctx.r8.s64 + 4256;
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
	ctx.lr = 0x83058420;
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

__attribute__((alias("__imp__sub_83058438"))) PPC_WEAK_FUNC(sub_83058438);
PPC_FUNC_IMPL(__imp__sub_83058438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
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
	// addi r5,r10,-6704
	ctx.r5.s64 = ctx.r10.s64 + -6704;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-6624
	ctx.r4.s64 = ctx.r10.s64 + -6624;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-29824
	ctx.r31.s64 = ctx.r10.s64 + -29824;
	// addi r10,r11,30432
	ctx.r10.s64 = ctx.r11.s64 + 30432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058490;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,4336
	ctx.r3.s64 = ctx.r8.s64 + 4336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,9168
	ctx.r11.s64 = ctx.r9.s64 + 9168;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16264
	ctx.r11.s64 = ctx.r10.s64 + 16264;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830584C0;
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

__attribute__((alias("__imp__sub_830584D8"))) PPC_WEAK_FUNC(sub_830584D8);
PPC_FUNC_IMPL(__imp__sub_830584D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-6788
	ctx.r5.s64 = ctx.r10.s64 + -6788;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-6568
	ctx.r4.s64 = ctx.r10.s64 + -6568;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-31388
	ctx.r31.s64 = ctx.r10.s64 + -31388;
	// addi r10,r11,3136
	ctx.r10.s64 = ctx.r11.s64 + 3136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058530;
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
	// addi r3,r8,4416
	ctx.r3.s64 = ctx.r8.s64 + 4416;
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
	ctx.lr = 0x83058560;
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

__attribute__((alias("__imp__sub_83058578"))) PPC_WEAK_FUNC(sub_83058578);
PPC_FUNC_IMPL(__imp__sub_83058578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-6704
	ctx.r5.s64 = ctx.r10.s64 + -6704;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-6504
	ctx.r4.s64 = ctx.r10.s64 + -6504;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-29548
	ctx.r31.s64 = ctx.r10.s64 + -29548;
	// addi r10,r11,9256
	ctx.r10.s64 = ctx.r11.s64 + 9256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830585D0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,4496
	ctx.r3.s64 = ctx.r8.s64 + 4496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,9328
	ctx.r11.s64 = ctx.r9.s64 + 9328;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,16264
	ctx.r11.s64 = ctx.r10.s64 + 16264;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058600;
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

__attribute__((alias("__imp__sub_83058618"))) PPC_WEAK_FUNC(sub_83058618);
PPC_FUNC_IMPL(__imp__sub_83058618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,15984
	ctx.r9.s64 = ctx.r10.s64 + 15984;
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
	// addi r4,r10,-6444
	ctx.r4.s64 = ctx.r10.s64 + -6444;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-30744
	ctx.r31.s64 = ctx.r10.s64 + -30744;
	// addi r10,r11,3304
	ctx.r10.s64 = ctx.r11.s64 + 3304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058670;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,5776
	ctx.r3.s64 = ctx.r8.s64 + 5776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-656
	ctx.r11.s64 = ctx.r9.s64 + -656;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-16040
	ctx.r11.s64 = ctx.r10.s64 + -16040;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830586A0;
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

__attribute__((alias("__imp__sub_830586B8"))) PPC_WEAK_FUNC(sub_830586B8);
PPC_FUNC_IMPL(__imp__sub_830586B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,16072
	ctx.r9.s64 = ctx.r10.s64 + 16072;
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
	// addi r4,r10,-6396
	ctx.r4.s64 = ctx.r10.s64 + -6396;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-29732
	ctx.r31.s64 = ctx.r10.s64 + -29732;
	// addi r10,r11,9416
	ctx.r10.s64 = ctx.r11.s64 + 9416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058710;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,4576
	ctx.r3.s64 = ctx.r8.s64 + 4576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,3488
	ctx.r11.s64 = ctx.r9.s64 + 3488;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23440
	ctx.r11.s64 = ctx.r10.s64 + -23440;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058740;
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

__attribute__((alias("__imp__sub_83058758"))) PPC_WEAK_FUNC(sub_83058758);
PPC_FUNC_IMPL(__imp__sub_83058758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,16072
	ctx.r9.s64 = ctx.r10.s64 + 16072;
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
	// addi r4,r10,-6328
	ctx.r4.s64 = ctx.r10.s64 + -6328;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-30652
	ctx.r31.s64 = ctx.r10.s64 + -30652;
	// addi r10,r11,10200
	ctx.r10.s64 = ctx.r11.s64 + 10200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830587B0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,4656
	ctx.r3.s64 = ctx.r8.s64 + 4656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,3576
	ctx.r11.s64 = ctx.r9.s64 + 3576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830587E0;
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

__attribute__((alias("__imp__sub_830587F8"))) PPC_WEAK_FUNC(sub_830587F8);
PPC_FUNC_IMPL(__imp__sub_830587F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,16168
	ctx.r9.s64 = ctx.r10.s64 + 16168;
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
	// addi r4,r10,-6260
	ctx.r4.s64 = ctx.r10.s64 + -6260;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-30928
	ctx.r31.s64 = ctx.r10.s64 + -30928;
	// addi r10,r11,10984
	ctx.r10.s64 = ctx.r11.s64 + 10984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058850;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,4736
	ctx.r3.s64 = ctx.r8.s64 + 4736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,3664
	ctx.r11.s64 = ctx.r9.s64 + 3664;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058880;
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

__attribute__((alias("__imp__sub_83058898"))) PPC_WEAK_FUNC(sub_83058898);
PPC_FUNC_IMPL(__imp__sub_83058898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,16168
	ctx.r9.s64 = ctx.r10.s64 + 16168;
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
	// addi r4,r10,-6192
	ctx.r4.s64 = ctx.r10.s64 + -6192;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-30100
	ctx.r31.s64 = ctx.r10.s64 + -30100;
	// addi r10,r11,11768
	ctx.r10.s64 = ctx.r11.s64 + 11768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830588F0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,4816
	ctx.r3.s64 = ctx.r8.s64 + 4816;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,3752
	ctx.r11.s64 = ctx.r9.s64 + 3752;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058920;
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

__attribute__((alias("__imp__sub_83058938"))) PPC_WEAK_FUNC(sub_83058938);
PPC_FUNC_IMPL(__imp__sub_83058938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,16168
	ctx.r9.s64 = ctx.r10.s64 + 16168;
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
	// addi r4,r10,-6120
	ctx.r4.s64 = ctx.r10.s64 + -6120;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-29640
	ctx.r31.s64 = ctx.r10.s64 + -29640;
	// addi r10,r11,12552
	ctx.r10.s64 = ctx.r11.s64 + 12552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058990;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,4896
	ctx.r3.s64 = ctx.r8.s64 + 4896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,3840
	ctx.r11.s64 = ctx.r9.s64 + 3840;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830589C0;
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

__attribute__((alias("__imp__sub_830589D8"))) PPC_WEAK_FUNC(sub_830589D8);
PPC_FUNC_IMPL(__imp__sub_830589D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,21344
	ctx.r9.s64 = ctx.r10.s64 + 21344;
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
	// addi r4,r10,-6048
	ctx.r4.s64 = ctx.r10.s64 + -6048;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-30192
	ctx.r31.s64 = ctx.r10.s64 + -30192;
	// addi r10,r11,16264
	ctx.r10.s64 = ctx.r11.s64 + 16264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058A30;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,4976
	ctx.r3.s64 = ctx.r8.s64 + 4976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,13336
	ctx.r11.s64 = ctx.r9.s64 + 13336;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058A60;
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

__attribute__((alias("__imp__sub_83058A78"))) PPC_WEAK_FUNC(sub_83058A78);
PPC_FUNC_IMPL(__imp__sub_83058A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,21152
	ctx.r9.s64 = ctx.r10.s64 + 21152;
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
	// addi r4,r10,-5976
	ctx.r4.s64 = ctx.r10.s64 + -5976;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-30560
	ctx.r31.s64 = ctx.r10.s64 + -30560;
	// addi r10,r11,16456
	ctx.r10.s64 = ctx.r11.s64 + 16456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058AD0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,5056
	ctx.r3.s64 = ctx.r8.s64 + 5056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,13424
	ctx.r11.s64 = ctx.r9.s64 + 13424;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058B00;
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

__attribute__((alias("__imp__sub_83058B18"))) PPC_WEAK_FUNC(sub_83058B18);
PPC_FUNC_IMPL(__imp__sub_83058B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,21248
	ctx.r9.s64 = ctx.r10.s64 + 21248;
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
	// addi r4,r10,-5896
	ctx.r4.s64 = ctx.r10.s64 + -5896;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-30284
	ctx.r31.s64 = ctx.r10.s64 + -30284;
	// addi r10,r11,16648
	ctx.r10.s64 = ctx.r11.s64 + 16648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058B70;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,5136
	ctx.r3.s64 = ctx.r8.s64 + 5136;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,13512
	ctx.r11.s64 = ctx.r9.s64 + 13512;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-568
	ctx.r11.s64 = ctx.r10.s64 + -568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058BA0;
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

__attribute__((alias("__imp__sub_83058BB8"))) PPC_WEAK_FUNC(sub_83058BB8);
PPC_FUNC_IMPL(__imp__sub_83058BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,21344
	ctx.r9.s64 = ctx.r10.s64 + 21344;
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
	// addi r4,r10,-5824
	ctx.r4.s64 = ctx.r10.s64 + -5824;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-30468
	ctx.r31.s64 = ctx.r10.s64 + -30468;
	// addi r10,r11,16840
	ctx.r10.s64 = ctx.r11.s64 + 16840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058C10;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,5216
	ctx.r3.s64 = ctx.r8.s64 + 5216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,13600
	ctx.r11.s64 = ctx.r9.s64 + 13600;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058C40;
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

__attribute__((alias("__imp__sub_83058C58"))) PPC_WEAK_FUNC(sub_83058C58);
PPC_FUNC_IMPL(__imp__sub_83058C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,21152
	ctx.r9.s64 = ctx.r10.s64 + 21152;
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
	// addi r4,r10,-5744
	ctx.r4.s64 = ctx.r10.s64 + -5744;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-30836
	ctx.r31.s64 = ctx.r10.s64 + -30836;
	// addi r10,r11,17032
	ctx.r10.s64 = ctx.r11.s64 + 17032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058CB0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,5296
	ctx.r3.s64 = ctx.r8.s64 + 5296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,13688
	ctx.r11.s64 = ctx.r9.s64 + 13688;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058CE0;
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

__attribute__((alias("__imp__sub_83058CF8"))) PPC_WEAK_FUNC(sub_83058CF8);
PPC_FUNC_IMPL(__imp__sub_83058CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,21248
	ctx.r9.s64 = ctx.r10.s64 + 21248;
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
	// addi r4,r10,-5664
	ctx.r4.s64 = ctx.r10.s64 + -5664;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-31112
	ctx.r31.s64 = ctx.r10.s64 + -31112;
	// addi r10,r11,17224
	ctx.r10.s64 = ctx.r11.s64 + 17224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058D50;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,5376
	ctx.r3.s64 = ctx.r8.s64 + 5376;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,13776
	ctx.r11.s64 = ctx.r9.s64 + 13776;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-2736
	ctx.r11.s64 = ctx.r10.s64 + -2736;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058D80;
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

__attribute__((alias("__imp__sub_83058D98"))) PPC_WEAK_FUNC(sub_83058D98);
PPC_FUNC_IMPL(__imp__sub_83058D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,21440
	ctx.r9.s64 = ctx.r10.s64 + 21440;
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
	// addi r4,r10,-5584
	ctx.r4.s64 = ctx.r10.s64 + -5584;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-31204
	ctx.r31.s64 = ctx.r10.s64 + -31204;
	// addi r10,r11,17416
	ctx.r10.s64 = ctx.r11.s64 + 17416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058DF0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,5456
	ctx.r3.s64 = ctx.r8.s64 + 5456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,13864
	ctx.r11.s64 = ctx.r9.s64 + 13864;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058E20;
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

__attribute__((alias("__imp__sub_83058E38"))) PPC_WEAK_FUNC(sub_83058E38);
PPC_FUNC_IMPL(__imp__sub_83058E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,21536
	ctx.r9.s64 = ctx.r10.s64 + 21536;
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
	// addi r4,r10,-5504
	ctx.r4.s64 = ctx.r10.s64 + -5504;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-30008
	ctx.r31.s64 = ctx.r10.s64 + -30008;
	// addi r10,r11,17608
	ctx.r10.s64 = ctx.r11.s64 + 17608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058E90;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,5536
	ctx.r3.s64 = ctx.r8.s64 + 5536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,13952
	ctx.r11.s64 = ctx.r9.s64 + 13952;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058EC0;
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

__attribute__((alias("__imp__sub_83058ED8"))) PPC_WEAK_FUNC(sub_83058ED8);
PPC_FUNC_IMPL(__imp__sub_83058ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r9,r10,21632
	ctx.r9.s64 = ctx.r10.s64 + 21632;
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
	// addi r4,r10,-5424
	ctx.r4.s64 = ctx.r10.s64 + -5424;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-31020
	ctx.r31.s64 = ctx.r10.s64 + -31020;
	// addi r10,r11,17800
	ctx.r10.s64 = ctx.r11.s64 + 17800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83058F30;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,5616
	ctx.r3.s64 = ctx.r8.s64 + 5616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,14040
	ctx.r11.s64 = ctx.r9.s64 + 14040;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-23416
	ctx.r11.s64 = ctx.r10.s64 + -23416;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83058F60;
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

__attribute__((alias("__imp__sub_83058F78"))) PPC_WEAK_FUNC(sub_83058F78);
PPC_FUNC_IMPL(__imp__sub_83058F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-10532
	ctx.r4.s64 = ctx.r11.s64 + -10532;
	// bl 0x824215d0
	ctx.lr = 0x83058F94;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-31628(r11)
	PPC_STORE_U8(ctx.r11.u32 + -31628, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83058FB0"))) PPC_WEAK_FUNC(sub_83058FB0);
PPC_FUNC_IMPL(__imp__sub_83058FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-10528
	ctx.r4.s64 = ctx.r11.s64 + -10528;
	// bl 0x824215d0
	ctx.lr = 0x83058FCC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-31492(r11)
	PPC_STORE_U8(ctx.r11.u32 + -31492, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83058FE8"))) PPC_WEAK_FUNC(sub_83058FE8);
PPC_FUNC_IMPL(__imp__sub_83058FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-10524
	ctx.r4.s64 = ctx.r11.s64 + -10524;
	// bl 0x824215d0
	ctx.lr = 0x83059004;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-31495(r11)
	PPC_STORE_U8(ctx.r11.u32 + -31495, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059020"))) PPC_WEAK_FUNC(sub_83059020);
PPC_FUNC_IMPL(__imp__sub_83059020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-10520
	ctx.r4.s64 = ctx.r11.s64 + -10520;
	// bl 0x824215d0
	ctx.lr = 0x8305903C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-31493(r11)
	PPC_STORE_U8(ctx.r11.u32 + -31493, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059058"))) PPC_WEAK_FUNC(sub_83059058);
PPC_FUNC_IMPL(__imp__sub_83059058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-10516
	ctx.r4.s64 = ctx.r11.s64 + -10516;
	// bl 0x824215d0
	ctx.lr = 0x83059074;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-31627(r11)
	PPC_STORE_U8(ctx.r11.u32 + -31627, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059090"))) PPC_WEAK_FUNC(sub_83059090);
PPC_FUNC_IMPL(__imp__sub_83059090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-10512
	ctx.r4.s64 = ctx.r11.s64 + -10512;
	// bl 0x824215d0
	ctx.lr = 0x830590AC;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-31491(r11)
	PPC_STORE_U8(ctx.r11.u32 + -31491, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830590C8"))) PPC_WEAK_FUNC(sub_830590C8);
PPC_FUNC_IMPL(__imp__sub_830590C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-10508
	ctx.r4.s64 = ctx.r11.s64 + -10508;
	// bl 0x824215d0
	ctx.lr = 0x830590E4;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-31625(r11)
	PPC_STORE_U8(ctx.r11.u32 + -31625, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059100"))) PPC_WEAK_FUNC(sub_83059100);
PPC_FUNC_IMPL(__imp__sub_83059100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-10504
	ctx.r4.s64 = ctx.r11.s64 + -10504;
	// bl 0x824215d0
	ctx.lr = 0x8305911C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-31496(r11)
	PPC_STORE_U8(ctx.r11.u32 + -31496, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059138"))) PPC_WEAK_FUNC(sub_83059138);
PPC_FUNC_IMPL(__imp__sub_83059138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-10500
	ctx.r4.s64 = ctx.r11.s64 + -10500;
	// bl 0x824215d0
	ctx.lr = 0x83059154;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-31626(r11)
	PPC_STORE_U8(ctx.r11.u32 + -31626, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059170"))) PPC_WEAK_FUNC(sub_83059170);
PPC_FUNC_IMPL(__imp__sub_83059170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-10496
	ctx.r4.s64 = ctx.r11.s64 + -10496;
	// bl 0x824215d0
	ctx.lr = 0x8305918C;
	sub_824215D0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stb r3,-31494(r11)
	PPC_STORE_U8(ctx.r11.u32 + -31494, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830591A8"))) PPC_WEAK_FUNC(sub_830591A8);
PPC_FUNC_IMPL(__imp__sub_830591A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// bl 0x8247d9a8
	ctx.lr = 0x830591BC;
	sub_8247D9A8(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r11,r11,-31624
	ctx.r11.s64 = ctx.r11.s64 + -31624;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addis r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 262144;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830591F8"))) PPC_WEAK_FUNC(sub_830591F8);
PPC_FUNC_IMPL(__imp__sub_830591F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,4160
	ctx.r3.s64 = ctx.r11.s64 + 4160;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83059208"))) PPC_WEAK_FUNC(sub_83059208);
PPC_FUNC_IMPL(__imp__sub_83059208) {
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
	// addi r11,r11,-26432
	ctx.r11.s64 = ctx.r11.s64 + -26432;
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

__attribute__((alias("__imp__sub_83059238"))) PPC_WEAK_FUNC(sub_83059238);
PPC_FUNC_IMPL(__imp__sub_83059238) {
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
	// addi r11,r11,-25872
	ctx.r11.s64 = ctx.r11.s64 + -25872;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83059268"))) PPC_WEAK_FUNC(sub_83059268);
PPC_FUNC_IMPL(__imp__sub_83059268) {
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
	// addi r11,r11,-25856
	ctx.r11.s64 = ctx.r11.s64 + -25856;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830592B0"))) PPC_WEAK_FUNC(sub_830592B0);
PPC_FUNC_IMPL(__imp__sub_830592B0) {
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
	// addi r11,r11,-26224
	ctx.r11.s64 = ctx.r11.s64 + -26224;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830592F8"))) PPC_WEAK_FUNC(sub_830592F8);
PPC_FUNC_IMPL(__imp__sub_830592F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r10,r11,-29312
	ctx.r10.s64 = ctx.r11.s64 + -29312;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r3,r11,-27408
	ctx.r3.s64 = ctx.r11.s64 + -27408;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x82567d68
	sub_82567D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83059328"))) PPC_WEAK_FUNC(sub_83059328);
PPC_FUNC_IMPL(__imp__sub_83059328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r3,r11,-8352
	ctx.r3.s64 = ctx.r11.s64 + -8352;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8252cb70
	ctx.lr = 0x8305934C;
	sub_8252CB70(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,7184
	ctx.r3.s64 = ctx.r11.s64 + 7184;
	// bl 0x82d5cd68
	ctx.lr = 0x83059358;
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

__attribute__((alias("__imp__sub_83059368"))) PPC_WEAK_FUNC(sub_83059368);
PPC_FUNC_IMPL(__imp__sub_83059368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,14752
	ctx.r9.s64 = ctx.r10.s64 + 14752;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-272
	ctx.r4.s64 = ctx.r10.s64 + -272;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-23792
	ctx.r31.s64 = ctx.r10.s64 + -23792;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830593C0;
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
	// addi r3,r8,13384
	ctx.r3.s64 = ctx.r8.s64 + 13384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830593F0;
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

__attribute__((alias("__imp__sub_83059408"))) PPC_WEAK_FUNC(sub_83059408);
PPC_FUNC_IMPL(__imp__sub_83059408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,14904
	ctx.r9.s64 = ctx.r10.s64 + 14904;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-228
	ctx.r4.s64 = ctx.r10.s64 + -228;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-21216
	ctx.r31.s64 = ctx.r10.s64 + -21216;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059460;
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
	// addi r3,r8,7544
	ctx.r3.s64 = ctx.r8.s64 + 7544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059490;
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

__attribute__((alias("__imp__sub_830594A8"))) PPC_WEAK_FUNC(sub_830594A8);
PPC_FUNC_IMPL(__imp__sub_830594A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,14752
	ctx.r9.s64 = ctx.r10.s64 + 14752;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-200
	ctx.r4.s64 = ctx.r10.s64 + -200;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-21308
	ctx.r31.s64 = ctx.r10.s64 + -21308;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059500;
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
	// addi r3,r8,7624
	ctx.r3.s64 = ctx.r8.s64 + 7624;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059530;
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

__attribute__((alias("__imp__sub_83059548"))) PPC_WEAK_FUNC(sub_83059548);
PPC_FUNC_IMPL(__imp__sub_83059548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,15096
	ctx.r9.s64 = ctx.r10.s64 + 15096;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-156
	ctx.r4.s64 = ctx.r10.s64 + -156;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-22964
	ctx.r31.s64 = ctx.r10.s64 + -22964;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830595A0;
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
	// addi r3,r8,7704
	ctx.r3.s64 = ctx.r8.s64 + 7704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830595D0;
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

__attribute__((alias("__imp__sub_830595E8"))) PPC_WEAK_FUNC(sub_830595E8);
PPC_FUNC_IMPL(__imp__sub_830595E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,15000
	ctx.r9.s64 = ctx.r10.s64 + 15000;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-132
	ctx.r4.s64 = ctx.r10.s64 + -132;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-22596
	ctx.r31.s64 = ctx.r10.s64 + -22596;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059640;
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
	// addi r3,r8,7784
	ctx.r3.s64 = ctx.r8.s64 + 7784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059670;
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

__attribute__((alias("__imp__sub_83059688"))) PPC_WEAK_FUNC(sub_83059688);
PPC_FUNC_IMPL(__imp__sub_83059688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,15096
	ctx.r9.s64 = ctx.r10.s64 + 15096;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-104
	ctx.r4.s64 = ctx.r10.s64 + -104;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-20020
	ctx.r31.s64 = ctx.r10.s64 + -20020;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830596E0;
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
	// addi r3,r8,7864
	ctx.r3.s64 = ctx.r8.s64 + 7864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059710;
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

__attribute__((alias("__imp__sub_83059728"))) PPC_WEAK_FUNC(sub_83059728);
PPC_FUNC_IMPL(__imp__sub_83059728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,15344
	ctx.r9.s64 = ctx.r10.s64 + 15344;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-80
	ctx.r4.s64 = ctx.r10.s64 + -80;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-19744
	ctx.r31.s64 = ctx.r10.s64 + -19744;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059780;
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
	// addi r3,r8,7944
	ctx.r3.s64 = ctx.r8.s64 + 7944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830597B0;
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

__attribute__((alias("__imp__sub_830597C8"))) PPC_WEAK_FUNC(sub_830597C8);
PPC_FUNC_IMPL(__imp__sub_830597C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,15248
	ctx.r9.s64 = ctx.r10.s64 + 15248;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-56
	ctx.r4.s64 = ctx.r10.s64 + -56;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-20572
	ctx.r31.s64 = ctx.r10.s64 + -20572;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059820;
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
	// addi r3,r8,8024
	ctx.r3.s64 = ctx.r8.s64 + 8024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059850;
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

__attribute__((alias("__imp__sub_83059868"))) PPC_WEAK_FUNC(sub_83059868);
PPC_FUNC_IMPL(__imp__sub_83059868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,15344
	ctx.r9.s64 = ctx.r10.s64 + 15344;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28
	ctx.r4.s64 = ctx.r10.s64 + -28;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-21032
	ctx.r31.s64 = ctx.r10.s64 + -21032;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x830598C0;
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
	// addi r3,r8,8104
	ctx.r3.s64 = ctx.r8.s64 + 8104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830598F0;
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

__attribute__((alias("__imp__sub_83059908"))) PPC_WEAK_FUNC(sub_83059908);
PPC_FUNC_IMPL(__imp__sub_83059908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,15592
	ctx.r9.s64 = ctx.r10.s64 + 15592;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-23976
	ctx.r31.s64 = ctx.r10.s64 + -23976;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059960;
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
	// addi r3,r8,8184
	ctx.r3.s64 = ctx.r8.s64 + 8184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059990;
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

__attribute__((alias("__imp__sub_830599A8"))) PPC_WEAK_FUNC(sub_830599A8);
PPC_FUNC_IMPL(__imp__sub_830599A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,15496
	ctx.r9.s64 = ctx.r10.s64 + 15496;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,20
	ctx.r4.s64 = ctx.r10.s64 + 20;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-20388
	ctx.r31.s64 = ctx.r10.s64 + -20388;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059A00;
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
	// addi r3,r8,8264
	ctx.r3.s64 = ctx.r8.s64 + 8264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059A30;
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

__attribute__((alias("__imp__sub_83059A48"))) PPC_WEAK_FUNC(sub_83059A48);
PPC_FUNC_IMPL(__imp__sub_83059A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,15592
	ctx.r9.s64 = ctx.r10.s64 + 15592;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,48
	ctx.r4.s64 = ctx.r10.s64 + 48;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-23516
	ctx.r31.s64 = ctx.r10.s64 + -23516;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059AA0;
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
	// addi r3,r8,8344
	ctx.r3.s64 = ctx.r8.s64 + 8344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059AD0;
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

__attribute__((alias("__imp__sub_83059AE8"))) PPC_WEAK_FUNC(sub_83059AE8);
PPC_FUNC_IMPL(__imp__sub_83059AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,15840
	ctx.r9.s64 = ctx.r10.s64 + 15840;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,72
	ctx.r4.s64 = ctx.r10.s64 + 72;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-20848
	ctx.r31.s64 = ctx.r10.s64 + -20848;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059B40;
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
	// addi r3,r8,8424
	ctx.r3.s64 = ctx.r8.s64 + 8424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059B70;
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

__attribute__((alias("__imp__sub_83059B88"))) PPC_WEAK_FUNC(sub_83059B88);
PPC_FUNC_IMPL(__imp__sub_83059B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,15744
	ctx.r9.s64 = ctx.r10.s64 + 15744;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,96
	ctx.r4.s64 = ctx.r10.s64 + 96;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-19468
	ctx.r31.s64 = ctx.r10.s64 + -19468;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059BE0;
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
	// addi r3,r8,8504
	ctx.r3.s64 = ctx.r8.s64 + 8504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059C10;
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

__attribute__((alias("__imp__sub_83059C28"))) PPC_WEAK_FUNC(sub_83059C28);
PPC_FUNC_IMPL(__imp__sub_83059C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,15840
	ctx.r9.s64 = ctx.r10.s64 + 15840;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,124
	ctx.r4.s64 = ctx.r10.s64 + 124;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-20756
	ctx.r31.s64 = ctx.r10.s64 + -20756;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059C80;
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
	// addi r3,r8,8584
	ctx.r3.s64 = ctx.r8.s64 + 8584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059CB0;
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

__attribute__((alias("__imp__sub_83059CC8"))) PPC_WEAK_FUNC(sub_83059CC8);
PPC_FUNC_IMPL(__imp__sub_83059CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,16088
	ctx.r9.s64 = ctx.r10.s64 + 16088;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,148
	ctx.r4.s64 = ctx.r10.s64 + 148;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-21860
	ctx.r31.s64 = ctx.r10.s64 + -21860;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059D20;
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
	// addi r3,r8,8664
	ctx.r3.s64 = ctx.r8.s64 + 8664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059D50;
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

__attribute__((alias("__imp__sub_83059D68"))) PPC_WEAK_FUNC(sub_83059D68);
PPC_FUNC_IMPL(__imp__sub_83059D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,15992
	ctx.r9.s64 = ctx.r10.s64 + 15992;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,172
	ctx.r4.s64 = ctx.r10.s64 + 172;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-20664
	ctx.r31.s64 = ctx.r10.s64 + -20664;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059DC0;
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
	// addi r3,r8,8744
	ctx.r3.s64 = ctx.r8.s64 + 8744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059DF0;
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

__attribute__((alias("__imp__sub_83059E08"))) PPC_WEAK_FUNC(sub_83059E08);
PPC_FUNC_IMPL(__imp__sub_83059E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,16088
	ctx.r9.s64 = ctx.r10.s64 + 16088;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,200
	ctx.r4.s64 = ctx.r10.s64 + 200;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-21768
	ctx.r31.s64 = ctx.r10.s64 + -21768;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059E60;
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
	// addi r3,r8,8824
	ctx.r3.s64 = ctx.r8.s64 + 8824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059E90;
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

__attribute__((alias("__imp__sub_83059EA8"))) PPC_WEAK_FUNC(sub_83059EA8);
PPC_FUNC_IMPL(__imp__sub_83059EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,16336
	ctx.r9.s64 = ctx.r10.s64 + 16336;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,224
	ctx.r4.s64 = ctx.r10.s64 + 224;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-19836
	ctx.r31.s64 = ctx.r10.s64 + -19836;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059F00;
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
	// addi r3,r8,8904
	ctx.r3.s64 = ctx.r8.s64 + 8904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059F30;
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

__attribute__((alias("__imp__sub_83059F48"))) PPC_WEAK_FUNC(sub_83059F48);
PPC_FUNC_IMPL(__imp__sub_83059F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,16240
	ctx.r9.s64 = ctx.r10.s64 + 16240;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,248
	ctx.r4.s64 = ctx.r10.s64 + 248;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-22872
	ctx.r31.s64 = ctx.r10.s64 + -22872;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x83059FA0;
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
	// addi r3,r8,8984
	ctx.r3.s64 = ctx.r8.s64 + 8984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83059FD0;
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

__attribute__((alias("__imp__sub_83059FE8"))) PPC_WEAK_FUNC(sub_83059FE8);
PPC_FUNC_IMPL(__imp__sub_83059FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,16336
	ctx.r9.s64 = ctx.r10.s64 + 16336;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,276
	ctx.r4.s64 = ctx.r10.s64 + 276;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-20112
	ctx.r31.s64 = ctx.r10.s64 + -20112;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A040;
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
	// addi r3,r8,9064
	ctx.r3.s64 = ctx.r8.s64 + 9064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A070;
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

__attribute__((alias("__imp__sub_8305A088"))) PPC_WEAK_FUNC(sub_8305A088);
PPC_FUNC_IMPL(__imp__sub_8305A088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,16584
	ctx.r9.s64 = ctx.r10.s64 + 16584;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,300
	ctx.r4.s64 = ctx.r10.s64 + 300;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-23884
	ctx.r31.s64 = ctx.r10.s64 + -23884;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A0E0;
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
	// addi r3,r8,9144
	ctx.r3.s64 = ctx.r8.s64 + 9144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A110;
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

__attribute__((alias("__imp__sub_8305A128"))) PPC_WEAK_FUNC(sub_8305A128);
PPC_FUNC_IMPL(__imp__sub_8305A128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,16488
	ctx.r9.s64 = ctx.r10.s64 + 16488;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,324
	ctx.r4.s64 = ctx.r10.s64 + 324;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-24252
	ctx.r31.s64 = ctx.r10.s64 + -24252;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A180;
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
	// addi r3,r8,9224
	ctx.r3.s64 = ctx.r8.s64 + 9224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A1B0;
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

__attribute__((alias("__imp__sub_8305A1C8"))) PPC_WEAK_FUNC(sub_8305A1C8);
PPC_FUNC_IMPL(__imp__sub_8305A1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,16584
	ctx.r9.s64 = ctx.r10.s64 + 16584;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,352
	ctx.r4.s64 = ctx.r10.s64 + 352;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-21676
	ctx.r31.s64 = ctx.r10.s64 + -21676;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A220;
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
	// addi r3,r8,9304
	ctx.r3.s64 = ctx.r8.s64 + 9304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A250;
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

__attribute__((alias("__imp__sub_8305A268"))) PPC_WEAK_FUNC(sub_8305A268);
PPC_FUNC_IMPL(__imp__sub_8305A268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,16832
	ctx.r9.s64 = ctx.r10.s64 + 16832;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,376
	ctx.r4.s64 = ctx.r10.s64 + 376;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-20940
	ctx.r31.s64 = ctx.r10.s64 + -20940;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A2C0;
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
	// addi r3,r8,9384
	ctx.r3.s64 = ctx.r8.s64 + 9384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A2F0;
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

__attribute__((alias("__imp__sub_8305A308"))) PPC_WEAK_FUNC(sub_8305A308);
PPC_FUNC_IMPL(__imp__sub_8305A308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,16736
	ctx.r9.s64 = ctx.r10.s64 + 16736;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,400
	ctx.r4.s64 = ctx.r10.s64 + 400;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-22136
	ctx.r31.s64 = ctx.r10.s64 + -22136;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A360;
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
	// addi r3,r8,9464
	ctx.r3.s64 = ctx.r8.s64 + 9464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A390;
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

__attribute__((alias("__imp__sub_8305A3A8"))) PPC_WEAK_FUNC(sub_8305A3A8);
PPC_FUNC_IMPL(__imp__sub_8305A3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,16832
	ctx.r9.s64 = ctx.r10.s64 + 16832;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,428
	ctx.r4.s64 = ctx.r10.s64 + 428;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-22320
	ctx.r31.s64 = ctx.r10.s64 + -22320;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A400;
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
	// addi r3,r8,9544
	ctx.r3.s64 = ctx.r8.s64 + 9544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A430;
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

__attribute__((alias("__imp__sub_8305A448"))) PPC_WEAK_FUNC(sub_8305A448);
PPC_FUNC_IMPL(__imp__sub_8305A448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,17240
	ctx.r9.s64 = ctx.r10.s64 + 17240;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,452
	ctx.r4.s64 = ctx.r10.s64 + 452;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-21492
	ctx.r31.s64 = ctx.r10.s64 + -21492;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A4A0;
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
	// addi r3,r8,9624
	ctx.r3.s64 = ctx.r8.s64 + 9624;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A4D0;
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

__attribute__((alias("__imp__sub_8305A4E8"))) PPC_WEAK_FUNC(sub_8305A4E8);
PPC_FUNC_IMPL(__imp__sub_8305A4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,16984
	ctx.r9.s64 = ctx.r10.s64 + 16984;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,476
	ctx.r4.s64 = ctx.r10.s64 + 476;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-22688
	ctx.r31.s64 = ctx.r10.s64 + -22688;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A540;
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
	// addi r3,r8,9704
	ctx.r3.s64 = ctx.r8.s64 + 9704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A570;
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

__attribute__((alias("__imp__sub_8305A588"))) PPC_WEAK_FUNC(sub_8305A588);
PPC_FUNC_IMPL(__imp__sub_8305A588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,17240
	ctx.r9.s64 = ctx.r10.s64 + 17240;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,504
	ctx.r4.s64 = ctx.r10.s64 + 504;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-23424
	ctx.r31.s64 = ctx.r10.s64 + -23424;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A5E0;
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
	// addi r3,r8,9784
	ctx.r3.s64 = ctx.r8.s64 + 9784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A610;
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

__attribute__((alias("__imp__sub_8305A628"))) PPC_WEAK_FUNC(sub_8305A628);
PPC_FUNC_IMPL(__imp__sub_8305A628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,17488
	ctx.r9.s64 = ctx.r10.s64 + 17488;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,528
	ctx.r4.s64 = ctx.r10.s64 + 528;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-23608
	ctx.r31.s64 = ctx.r10.s64 + -23608;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A680;
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
	// addi r3,r8,9864
	ctx.r3.s64 = ctx.r8.s64 + 9864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A6B0;
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

__attribute__((alias("__imp__sub_8305A6C8"))) PPC_WEAK_FUNC(sub_8305A6C8);
PPC_FUNC_IMPL(__imp__sub_8305A6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,17392
	ctx.r9.s64 = ctx.r10.s64 + 17392;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,552
	ctx.r4.s64 = ctx.r10.s64 + 552;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-22412
	ctx.r31.s64 = ctx.r10.s64 + -22412;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A720;
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
	// addi r3,r8,9944
	ctx.r3.s64 = ctx.r8.s64 + 9944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A750;
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

__attribute__((alias("__imp__sub_8305A768"))) PPC_WEAK_FUNC(sub_8305A768);
PPC_FUNC_IMPL(__imp__sub_8305A768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,17488
	ctx.r9.s64 = ctx.r10.s64 + 17488;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,580
	ctx.r4.s64 = ctx.r10.s64 + 580;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-24160
	ctx.r31.s64 = ctx.r10.s64 + -24160;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A7C0;
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
	// addi r3,r8,10024
	ctx.r3.s64 = ctx.r8.s64 + 10024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A7F0;
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

__attribute__((alias("__imp__sub_8305A808"))) PPC_WEAK_FUNC(sub_8305A808);
PPC_FUNC_IMPL(__imp__sub_8305A808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,17640
	ctx.r9.s64 = ctx.r10.s64 + 17640;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,604
	ctx.r4.s64 = ctx.r10.s64 + 604;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-19652
	ctx.r31.s64 = ctx.r10.s64 + -19652;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A860;
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
	// addi r3,r8,10104
	ctx.r3.s64 = ctx.r8.s64 + 10104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A890;
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

__attribute__((alias("__imp__sub_8305A8A8"))) PPC_WEAK_FUNC(sub_8305A8A8);
PPC_FUNC_IMPL(__imp__sub_8305A8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,17792
	ctx.r9.s64 = ctx.r10.s64 + 17792;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,628
	ctx.r4.s64 = ctx.r10.s64 + 628;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-22504
	ctx.r31.s64 = ctx.r10.s64 + -22504;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A900;
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
	// addi r3,r8,10184
	ctx.r3.s64 = ctx.r8.s64 + 10184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A930;
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

__attribute__((alias("__imp__sub_8305A948"))) PPC_WEAK_FUNC(sub_8305A948);
PPC_FUNC_IMPL(__imp__sub_8305A948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,17640
	ctx.r9.s64 = ctx.r10.s64 + 17640;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,656
	ctx.r4.s64 = ctx.r10.s64 + 656;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-23240
	ctx.r31.s64 = ctx.r10.s64 + -23240;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305A9A0;
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
	// addi r3,r8,10264
	ctx.r3.s64 = ctx.r8.s64 + 10264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305A9D0;
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

__attribute__((alias("__imp__sub_8305A9E8"))) PPC_WEAK_FUNC(sub_8305A9E8);
PPC_FUNC_IMPL(__imp__sub_8305A9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,17888
	ctx.r9.s64 = ctx.r10.s64 + 17888;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,680
	ctx.r4.s64 = ctx.r10.s64 + 680;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-20480
	ctx.r31.s64 = ctx.r10.s64 + -20480;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305AA40;
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
	// addi r3,r8,10344
	ctx.r3.s64 = ctx.r8.s64 + 10344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305AA70;
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

__attribute__((alias("__imp__sub_8305AA88"))) PPC_WEAK_FUNC(sub_8305AA88);
PPC_FUNC_IMPL(__imp__sub_8305AA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,18040
	ctx.r9.s64 = ctx.r10.s64 + 18040;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,704
	ctx.r4.s64 = ctx.r10.s64 + 704;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-21400
	ctx.r31.s64 = ctx.r10.s64 + -21400;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305AAE0;
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
	// addi r3,r8,10424
	ctx.r3.s64 = ctx.r8.s64 + 10424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305AB10;
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

__attribute__((alias("__imp__sub_8305AB28"))) PPC_WEAK_FUNC(sub_8305AB28);
PPC_FUNC_IMPL(__imp__sub_8305AB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,17888
	ctx.r9.s64 = ctx.r10.s64 + 17888;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,732
	ctx.r4.s64 = ctx.r10.s64 + 732;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-20296
	ctx.r31.s64 = ctx.r10.s64 + -20296;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305AB80;
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
	// addi r3,r8,10504
	ctx.r3.s64 = ctx.r8.s64 + 10504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305ABB0;
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

__attribute__((alias("__imp__sub_8305ABC8"))) PPC_WEAK_FUNC(sub_8305ABC8);
PPC_FUNC_IMPL(__imp__sub_8305ABC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,18232
	ctx.r9.s64 = ctx.r10.s64 + 18232;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,756
	ctx.r4.s64 = ctx.r10.s64 + 756;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-22044
	ctx.r31.s64 = ctx.r10.s64 + -22044;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305AC20;
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
	// addi r3,r8,10584
	ctx.r3.s64 = ctx.r8.s64 + 10584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305AC50;
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

__attribute__((alias("__imp__sub_8305AC68"))) PPC_WEAK_FUNC(sub_8305AC68);
PPC_FUNC_IMPL(__imp__sub_8305AC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,18136
	ctx.r9.s64 = ctx.r10.s64 + 18136;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,780
	ctx.r4.s64 = ctx.r10.s64 + 780;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-23700
	ctx.r31.s64 = ctx.r10.s64 + -23700;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305ACC0;
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
	// addi r3,r8,10664
	ctx.r3.s64 = ctx.r8.s64 + 10664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305ACF0;
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

__attribute__((alias("__imp__sub_8305AD08"))) PPC_WEAK_FUNC(sub_8305AD08);
PPC_FUNC_IMPL(__imp__sub_8305AD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,18232
	ctx.r9.s64 = ctx.r10.s64 + 18232;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,808
	ctx.r4.s64 = ctx.r10.s64 + 808;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-24068
	ctx.r31.s64 = ctx.r10.s64 + -24068;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305AD60;
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
	// addi r3,r8,10744
	ctx.r3.s64 = ctx.r8.s64 + 10744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305AD90;
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

__attribute__((alias("__imp__sub_8305ADA8"))) PPC_WEAK_FUNC(sub_8305ADA8);
PPC_FUNC_IMPL(__imp__sub_8305ADA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,18544
	ctx.r9.s64 = ctx.r10.s64 + 18544;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,832
	ctx.r4.s64 = ctx.r10.s64 + 832;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-23148
	ctx.r31.s64 = ctx.r10.s64 + -23148;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305AE00;
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
	// addi r3,r8,10824
	ctx.r3.s64 = ctx.r8.s64 + 10824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305AE30;
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

__attribute__((alias("__imp__sub_8305AE48"))) PPC_WEAK_FUNC(sub_8305AE48);
PPC_FUNC_IMPL(__imp__sub_8305AE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,18696
	ctx.r9.s64 = ctx.r10.s64 + 18696;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,856
	ctx.r4.s64 = ctx.r10.s64 + 856;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-23332
	ctx.r31.s64 = ctx.r10.s64 + -23332;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305AEA0;
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
	// addi r3,r8,10904
	ctx.r3.s64 = ctx.r8.s64 + 10904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305AED0;
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

__attribute__((alias("__imp__sub_8305AEE8"))) PPC_WEAK_FUNC(sub_8305AEE8);
PPC_FUNC_IMPL(__imp__sub_8305AEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,18544
	ctx.r9.s64 = ctx.r10.s64 + 18544;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,884
	ctx.r4.s64 = ctx.r10.s64 + 884;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-19928
	ctx.r31.s64 = ctx.r10.s64 + -19928;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305AF40;
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
	// addi r3,r8,10984
	ctx.r3.s64 = ctx.r8.s64 + 10984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305AF70;
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

__attribute__((alias("__imp__sub_8305AF88"))) PPC_WEAK_FUNC(sub_8305AF88);
PPC_FUNC_IMPL(__imp__sub_8305AF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,18792
	ctx.r9.s64 = ctx.r10.s64 + 18792;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,908
	ctx.r4.s64 = ctx.r10.s64 + 908;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-22228
	ctx.r31.s64 = ctx.r10.s64 + -22228;
	// addi r10,r11,18384
	ctx.r10.s64 = ctx.r11.s64 + 18384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305AFE0;
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
	// addi r3,r8,11064
	ctx.r3.s64 = ctx.r8.s64 + 11064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26032
	ctx.r11.s64 = ctx.r9.s64 + -26032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305B010;
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

__attribute__((alias("__imp__sub_8305B028"))) PPC_WEAK_FUNC(sub_8305B028);
PPC_FUNC_IMPL(__imp__sub_8305B028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,18944
	ctx.r9.s64 = ctx.r10.s64 + 18944;
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
	// addi r5,r10,-248
	ctx.r5.s64 = ctx.r10.s64 + -248;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,932
	ctx.r4.s64 = ctx.r10.s64 + 932;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-21124
	ctx.r31.s64 = ctx.r10.s64 + -21124;
	// addi r10,r11,27424
	ctx.r10.s64 = ctx.r11.s64 + 27424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305B080;
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
	// addi r3,r8,11144
	ctx.r3.s64 = ctx.r8.s64 + 11144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26144
	ctx.r11.s64 = ctx.r9.s64 + -26144;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305B0B0;
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

__attribute__((alias("__imp__sub_8305B0C8"))) PPC_WEAK_FUNC(sub_8305B0C8);
PPC_FUNC_IMPL(__imp__sub_8305B0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,18792
	ctx.r9.s64 = ctx.r10.s64 + 18792;
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
	// addi r5,r10,-176
	ctx.r5.s64 = ctx.r10.s64 + -176;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,960
	ctx.r4.s64 = ctx.r10.s64 + 960;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-22780
	ctx.r31.s64 = ctx.r10.s64 + -22780;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305B120;
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
	// addi r3,r8,11224
	ctx.r3.s64 = ctx.r8.s64 + 11224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25944
	ctx.r11.s64 = ctx.r9.s64 + -25944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305B150;
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

__attribute__((alias("__imp__sub_8305B168"))) PPC_WEAK_FUNC(sub_8305B168);
PPC_FUNC_IMPL(__imp__sub_8305B168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,1008
	ctx.r5.s64 = ctx.r10.s64 + 1008;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,984
	ctx.r4.s64 = ctx.r10.s64 + 984;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-27004
	ctx.r31.s64 = ctx.r10.s64 + -27004;
	// addi r10,r11,-12616
	ctx.r10.s64 = ctx.r11.s64 + -12616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305B1C0;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,13464
	ctx.r3.s64 = ctx.r8.s64 + 13464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29520
	ctx.r11.s64 = ctx.r9.s64 + 29520;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-32184
	ctx.r11.s64 = ctx.r10.s64 + -32184;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305B1F0;
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

__attribute__((alias("__imp__sub_8305B208"))) PPC_WEAK_FUNC(sub_8305B208);
PPC_FUNC_IMPL(__imp__sub_8305B208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,1056
	ctx.r5.s64 = ctx.r10.s64 + 1056;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1032
	ctx.r4.s64 = ctx.r10.s64 + 1032;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-26208
	ctx.r31.s64 = ctx.r10.s64 + -26208;
	// addi r10,r11,10832
	ctx.r10.s64 = ctx.r11.s64 + 10832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305B260;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,11304
	ctx.r3.s64 = ctx.r8.s64 + 11304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27840
	ctx.r11.s64 = ctx.r9.s64 + -27840;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-32184
	ctx.r11.s64 = ctx.r10.s64 + -32184;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305B290;
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

__attribute__((alias("__imp__sub_8305B2A8"))) PPC_WEAK_FUNC(sub_8305B2A8);
PPC_FUNC_IMPL(__imp__sub_8305B2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,1104
	ctx.r5.s64 = ctx.r10.s64 + 1104;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1076
	ctx.r4.s64 = ctx.r10.s64 + 1076;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-27196
	ctx.r31.s64 = ctx.r10.s64 + -27196;
	// addi r10,r11,10904
	ctx.r10.s64 = ctx.r11.s64 + 10904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305B300;
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
	// addi r3,r8,11384
	ctx.r3.s64 = ctx.r8.s64 + 11384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27752
	ctx.r11.s64 = ctx.r9.s64 + -27752;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305B330;
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

__attribute__((alias("__imp__sub_8305B348"))) PPC_WEAK_FUNC(sub_8305B348);
PPC_FUNC_IMPL(__imp__sub_8305B348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r3,r11,-8328
	ctx.r3.s64 = ctx.r11.s64 + -8328;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8252cb70
	ctx.lr = 0x8305B36C;
	sub_8252CB70(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,7264
	ctx.r3.s64 = ctx.r11.s64 + 7264;
	// bl 0x82d5cd68
	ctx.lr = 0x8305B378;
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

__attribute__((alias("__imp__sub_8305B388"))) PPC_WEAK_FUNC(sub_8305B388);
PPC_FUNC_IMPL(__imp__sub_8305B388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,5856
	ctx.r3.s64 = ctx.r11.s64 + 5856;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305B398"))) PPC_WEAK_FUNC(sub_8305B398);
PPC_FUNC_IMPL(__imp__sub_8305B398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,1156
	ctx.r5.s64 = ctx.r10.s64 + 1156;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1132
	ctx.r4.s64 = ctx.r10.s64 + 1132;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-29296
	ctx.r31.s64 = ctx.r10.s64 + -29296;
	// addi r10,r11,11640
	ctx.r10.s64 = ctx.r11.s64 + 11640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305B3F0;
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
	// addi r3,r8,11464
	ctx.r3.s64 = ctx.r8.s64 + 11464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27640
	ctx.r11.s64 = ctx.r9.s64 + -27640;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305B420;
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

__attribute__((alias("__imp__sub_8305B438"))) PPC_WEAK_FUNC(sub_8305B438);
PPC_FUNC_IMPL(__imp__sub_8305B438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,1208
	ctx.r5.s64 = ctx.r10.s64 + 1208;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1180
	ctx.r4.s64 = ctx.r10.s64 + 1180;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-26416
	ctx.r31.s64 = ctx.r10.s64 + -26416;
	// addi r10,r11,11056
	ctx.r10.s64 = ctx.r11.s64 + 11056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305B490;
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
	// addi r3,r8,11544
	ctx.r3.s64 = ctx.r8.s64 + 11544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27552
	ctx.r11.s64 = ctx.r9.s64 + -27552;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305B4C0;
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

__attribute__((alias("__imp__sub_8305B4D8"))) PPC_WEAK_FUNC(sub_8305B4D8);
PPC_FUNC_IMPL(__imp__sub_8305B4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,1268
	ctx.r5.s64 = ctx.r10.s64 + 1268;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1236
	ctx.r4.s64 = ctx.r10.s64 + 1236;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-26904
	ctx.r31.s64 = ctx.r10.s64 + -26904;
	// addi r10,r11,11224
	ctx.r10.s64 = ctx.r11.s64 + 11224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305B530;
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
	// addi r3,r8,11624
	ctx.r3.s64 = ctx.r8.s64 + 11624;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27464
	ctx.r11.s64 = ctx.r9.s64 + -27464;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305B560;
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

__attribute__((alias("__imp__sub_8305B578"))) PPC_WEAK_FUNC(sub_8305B578);
PPC_FUNC_IMPL(__imp__sub_8305B578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,1332
	ctx.r5.s64 = ctx.r10.s64 + 1332;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1300
	ctx.r4.s64 = ctx.r10.s64 + 1300;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-26324
	ctx.r31.s64 = ctx.r10.s64 + -26324;
	// addi r10,r11,-20544
	ctx.r10.s64 = ctx.r11.s64 + -20544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305B5D0;
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
	// addi r3,r8,11704
	ctx.r3.s64 = ctx.r8.s64 + 11704;
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
	ctx.lr = 0x8305B600;
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

__attribute__((alias("__imp__sub_8305B618"))) PPC_WEAK_FUNC(sub_8305B618);
PPC_FUNC_IMPL(__imp__sub_8305B618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,14280
	ctx.r3.s64 = ctx.r11.s64 + 14280;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305B628"))) PPC_WEAK_FUNC(sub_8305B628);
PPC_FUNC_IMPL(__imp__sub_8305B628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,14296
	ctx.r3.s64 = ctx.r11.s64 + 14296;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305B638"))) PPC_WEAK_FUNC(sub_8305B638);
PPC_FUNC_IMPL(__imp__sub_8305B638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,14312
	ctx.r3.s64 = ctx.r11.s64 + 14312;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305B648"))) PPC_WEAK_FUNC(sub_8305B648);
PPC_FUNC_IMPL(__imp__sub_8305B648) {
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
	// addi r31,r11,-29012
	ctx.r31.s64 = ctx.r11.s64 + -29012;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256f1b0
	ctx.lr = 0x8305B668;
	sub_8256F1B0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-3708
	ctx.r11.s64 = ctx.r11.s64 + -3708;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8252cb70
	ctx.lr = 0x8305B67C;
	sub_8252CB70(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,7344
	ctx.r3.s64 = ctx.r11.s64 + 7344;
	// bl 0x82d5cd68
	ctx.lr = 0x8305B688;
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

__attribute__((alias("__imp__sub_8305B6A0"))) PPC_WEAK_FUNC(sub_8305B6A0);
PPC_FUNC_IMPL(__imp__sub_8305B6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r11,-8256
	ctx.r3.s64 = ctx.r11.s64 + -8256;
	// li r4,144
	ctx.r4.s64 = 144;
	// bl 0x822dc718
	ctx.lr = 0x8305B6C0;
	sub_822DC718(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,7368
	ctx.r3.s64 = ctx.r11.s64 + 7368;
	// bl 0x82d5cd68
	ctx.lr = 0x8305B6CC;
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

__attribute__((alias("__imp__sub_8305B6E0"))) PPC_WEAK_FUNC(sub_8305B6E0);
PPC_FUNC_IMPL(__imp__sub_8305B6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r11,r11,-26116
	ctx.r11.s64 = ctx.r11.s64 + -26116;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfd f0,-11920(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -11920);
loc_8305B6FC:
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
	// bne cr6,0x8305b6fc
	if (!ctx.cr6.eq) goto loc_8305B6FC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8305B728"))) PPC_WEAK_FUNC(sub_8305B728);
PPC_FUNC_IMPL(__imp__sub_8305B728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r3,r11,-8244
	ctx.r3.s64 = ctx.r11.s64 + -8244;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8252cb70
	ctx.lr = 0x8305B74C;
	sub_8252CB70(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,7384
	ctx.r3.s64 = ctx.r11.s64 + 7384;
	// bl 0x82d5cd68
	ctx.lr = 0x8305B758;
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

__attribute__((alias("__imp__sub_8305B768"))) PPC_WEAK_FUNC(sub_8305B768);
PPC_FUNC_IMPL(__imp__sub_8305B768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,1380
	ctx.r5.s64 = ctx.r10.s64 + 1380;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1360
	ctx.r4.s64 = ctx.r10.s64 + 1360;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-25840
	ctx.r31.s64 = ctx.r10.s64 + -25840;
	// addi r10,r11,11640
	ctx.r10.s64 = ctx.r11.s64 + 11640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305B7C0;
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
	// addi r3,r8,11784
	ctx.r3.s64 = ctx.r8.s64 + 11784;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27376
	ctx.r11.s64 = ctx.r9.s64 + -27376;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305B7F0;
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

__attribute__((alias("__imp__sub_8305B808"))) PPC_WEAK_FUNC(sub_8305B808);
PPC_FUNC_IMPL(__imp__sub_8305B808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,1420
	ctx.r5.s64 = ctx.r10.s64 + 1420;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1400
	ctx.r4.s64 = ctx.r10.s64 + 1400;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-29204
	ctx.r31.s64 = ctx.r10.s64 + -29204;
	// addi r10,r11,11800
	ctx.r10.s64 = ctx.r11.s64 + 11800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305B860;
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
	// addi r3,r8,11864
	ctx.r3.s64 = ctx.r8.s64 + 11864;
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
	ctx.lr = 0x8305B890;
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

__attribute__((alias("__imp__sub_8305B8A8"))) PPC_WEAK_FUNC(sub_8305B8A8);
PPC_FUNC_IMPL(__imp__sub_8305B8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,5872
	ctx.r3.s64 = ctx.r11.s64 + 5872;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305B8B8"))) PPC_WEAK_FUNC(sub_8305B8B8);
PPC_FUNC_IMPL(__imp__sub_8305B8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,5888
	ctx.r3.s64 = ctx.r11.s64 + 5888;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305B8C8"))) PPC_WEAK_FUNC(sub_8305B8C8);
PPC_FUNC_IMPL(__imp__sub_8305B8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,1480
	ctx.r5.s64 = ctx.r10.s64 + 1480;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1440
	ctx.r4.s64 = ctx.r10.s64 + 1440;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-26620
	ctx.r31.s64 = ctx.r10.s64 + -26620;
	// addi r10,r11,11640
	ctx.r10.s64 = ctx.r11.s64 + 11640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305B920;
	sub_824A5230(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r8,-31992
	ctx.r8.s64 = -2096627712;
	// addi r3,r8,11944
	ctx.r3.s64 = ctx.r8.s64 + 11944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-28376
	ctx.r11.s64 = ctx.r9.s64 + -28376;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-32608
	ctx.r11.s64 = ctx.r10.s64 + -32608;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305B950;
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

__attribute__((alias("__imp__sub_8305B968"))) PPC_WEAK_FUNC(sub_8305B968);
PPC_FUNC_IMPL(__imp__sub_8305B968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,24464
	ctx.r9.s64 = ctx.r10.s64 + 24464;
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
	// addi r5,r10,1556
	ctx.r5.s64 = ctx.r10.s64 + 1556;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1520
	ctx.r4.s64 = ctx.r10.s64 + 1520;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-27096
	ctx.r31.s64 = ctx.r10.s64 + -27096;
	// addi r10,r11,11952
	ctx.r10.s64 = ctx.r11.s64 + 11952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305B9C0;
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
	// addi r3,r8,12024
	ctx.r3.s64 = ctx.r8.s64 + 12024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27288
	ctx.r11.s64 = ctx.r9.s64 + -27288;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305B9F0;
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

__attribute__((alias("__imp__sub_8305BA08"))) PPC_WEAK_FUNC(sub_8305BA08);
PPC_FUNC_IMPL(__imp__sub_8305BA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,14328
	ctx.r3.s64 = ctx.r11.s64 + 14328;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305BA18"))) PPC_WEAK_FUNC(sub_8305BA18);
PPC_FUNC_IMPL(__imp__sub_8305BA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,14344
	ctx.r3.s64 = ctx.r11.s64 + 14344;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305BA28"))) PPC_WEAK_FUNC(sub_8305BA28);
PPC_FUNC_IMPL(__imp__sub_8305BA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,14360
	ctx.r3.s64 = ctx.r11.s64 + 14360;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8305BA38"))) PPC_WEAK_FUNC(sub_8305BA38);
PPC_FUNC_IMPL(__imp__sub_8305BA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,1612
	ctx.r5.s64 = ctx.r10.s64 + 1612;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1592
	ctx.r4.s64 = ctx.r10.s64 + 1592;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-29112
	ctx.r31.s64 = ctx.r10.s64 + -29112;
	// addi r10,r11,9992
	ctx.r10.s64 = ctx.r11.s64 + 9992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305BA90;
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
	// addi r3,r8,12104
	ctx.r3.s64 = ctx.r8.s64 + 12104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-28792
	ctx.r11.s64 = ctx.r9.s64 + -28792;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305BAC0;
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

__attribute__((alias("__imp__sub_8305BAD8"))) PPC_WEAK_FUNC(sub_8305BAD8);
PPC_FUNC_IMPL(__imp__sub_8305BAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,1652
	ctx.r5.s64 = ctx.r10.s64 + 1652;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1628
	ctx.r4.s64 = ctx.r10.s64 + 1628;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-26720
	ctx.r31.s64 = ctx.r10.s64 + -26720;
	// addi r10,r11,-20544
	ctx.r10.s64 = ctx.r11.s64 + -20544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305BB30;
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
	// addi r3,r8,12184
	ctx.r3.s64 = ctx.r8.s64 + 12184;
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
	ctx.lr = 0x8305BB60;
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

__attribute__((alias("__imp__sub_8305BB78"))) PPC_WEAK_FUNC(sub_8305BB78);
PPC_FUNC_IMPL(__imp__sub_8305BB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,1652
	ctx.r5.s64 = ctx.r10.s64 + 1652;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1688
	ctx.r4.s64 = ctx.r10.s64 + 1688;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-25472
	ctx.r31.s64 = ctx.r10.s64 + -25472;
	// addi r10,r11,17080
	ctx.r10.s64 = ctx.r11.s64 + 17080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305BBD0;
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
	// addi r3,r8,12264
	ctx.r3.s64 = ctx.r8.s64 + 12264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-28568
	ctx.r11.s64 = ctx.r9.s64 + -28568;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,31928
	ctx.r11.s64 = ctx.r10.s64 + 31928;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305BC00;
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

__attribute__((alias("__imp__sub_8305BC18"))) PPC_WEAK_FUNC(sub_8305BC18);
PPC_FUNC_IMPL(__imp__sub_8305BC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,1756
	ctx.r5.s64 = ctx.r10.s64 + 1756;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,1728
	ctx.r4.s64 = ctx.r10.s64 + 1728;
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// addi r31,r10,-25656
	ctx.r31.s64 = ctx.r10.s64 + -25656;
	// addi r10,r11,-1696
	ctx.r10.s64 = ctx.r11.s64 + -1696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a5230
	ctx.lr = 0x8305BC70;
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
	// addi r3,r8,12344
	ctx.r3.s64 = ctx.r8.s64 + 12344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31752
	ctx.r11.s64 = ctx.r9.s64 + 31752;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-31536
	ctx.r11.s64 = ctx.r10.s64 + -31536;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8305BCA0;
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

