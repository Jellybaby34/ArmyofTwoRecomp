#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83049030"))) PPC_WEAK_FUNC(sub_83049030);
PPC_FUNC_IMPL(__imp__sub_83049030) {
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
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,4672
	ctx.r11.s64 = ctx.r11.s64 + 4672;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049060"))) PPC_WEAK_FUNC(sub_83049060);
PPC_FUNC_IMPL(__imp__sub_83049060) {
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
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,4688
	ctx.r11.s64 = ctx.r11.s64 + 4688;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830490A8"))) PPC_WEAK_FUNC(sub_830490A8);
PPC_FUNC_IMPL(__imp__sub_830490A8) {
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
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,4656
	ctx.r11.s64 = ctx.r11.s64 + 4656;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830490F0"))) PPC_WEAK_FUNC(sub_830490F0);
PPC_FUNC_IMPL(__imp__sub_830490F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-8136
	ctx.r3.s64 = ctx.r11.s64 + -8136;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83049100"))) PPC_WEAK_FUNC(sub_83049100);
PPC_FUNC_IMPL(__imp__sub_83049100) {
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
	// addi r31,r11,-19740
	ctx.r31.s64 = ctx.r11.s64 + -19740;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dc718
	ctx.lr = 0x83049128;
	sub_822DC718(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31992
	ctx.r10.s64 = -2096627712;
	// addi r3,r10,-8120
	ctx.r3.s64 = ctx.r10.s64 + -8120;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x8304913C;
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

__attribute__((alias("__imp__sub_83049150"))) PPC_WEAK_FUNC(sub_83049150);
PPC_FUNC_IMPL(__imp__sub_83049150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7888
	ctx.r3.s64 = ctx.r11.s64 + -7888;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83049160"))) PPC_WEAK_FUNC(sub_83049160);
PPC_FUNC_IMPL(__imp__sub_83049160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-8184
	ctx.r3.s64 = ctx.r11.s64 + -8184;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83049170"))) PPC_WEAK_FUNC(sub_83049170);
PPC_FUNC_IMPL(__imp__sub_83049170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-8160
	ctx.r3.s64 = ctx.r11.s64 + -8160;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83049180"))) PPC_WEAK_FUNC(sub_83049180);
PPC_FUNC_IMPL(__imp__sub_83049180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-8104
	ctx.r3.s64 = ctx.r11.s64 + -8104;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83049190"))) PPC_WEAK_FUNC(sub_83049190);
PPC_FUNC_IMPL(__imp__sub_83049190) {
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
	// addi r31,r11,-19692
	ctx.r31.s64 = ctx.r11.s64 + -19692;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x822dc718
	ctx.lr = 0x830491B8;
	sub_822DC718(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830491d8
	if (ctx.cr6.eq) goto loc_830491D8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,257
	ctx.r5.s64 = 257;
	// addi r4,r11,5983
	ctx.r4.s64 = ctx.r11.s64 + 5983;
	// bl 0x823fd208
	ctx.lr = 0x830491D8;
	sub_823FD208(ctx, base);
loc_830491D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31992
	ctx.r10.s64 = -2096627712;
	// addi r3,r10,-8032
	ctx.r3.s64 = ctx.r10.s64 + -8032;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x830491EC;
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

__attribute__((alias("__imp__sub_83049200"))) PPC_WEAK_FUNC(sub_83049200);
PPC_FUNC_IMPL(__imp__sub_83049200) {
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
	// addi r11,r11,5248
	ctx.r11.s64 = ctx.r11.s64 + 5248;
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

__attribute__((alias("__imp__sub_83049230"))) PPC_WEAK_FUNC(sub_83049230);
PPC_FUNC_IMPL(__imp__sub_83049230) {
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
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
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

__attribute__((alias("__imp__sub_83049260"))) PPC_WEAK_FUNC(sub_83049260);
PPC_FUNC_IMPL(__imp__sub_83049260) {
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
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5296
	ctx.r11.s64 = ctx.r11.s64 + 5296;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830492A8"))) PPC_WEAK_FUNC(sub_830492A8);
PPC_FUNC_IMPL(__imp__sub_830492A8) {
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
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5264
	ctx.r11.s64 = ctx.r11.s64 + 5264;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830492F0"))) PPC_WEAK_FUNC(sub_830492F0);
PPC_FUNC_IMPL(__imp__sub_830492F0) {
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
	// addi r11,r11,5936
	ctx.r11.s64 = ctx.r11.s64 + 5936;
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

__attribute__((alias("__imp__sub_83049320"))) PPC_WEAK_FUNC(sub_83049320);
PPC_FUNC_IMPL(__imp__sub_83049320) {
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
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5968
	ctx.r11.s64 = ctx.r11.s64 + 5968;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049350"))) PPC_WEAK_FUNC(sub_83049350);
PPC_FUNC_IMPL(__imp__sub_83049350) {
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
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5984
	ctx.r11.s64 = ctx.r11.s64 + 5984;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049398"))) PPC_WEAK_FUNC(sub_83049398);
PPC_FUNC_IMPL(__imp__sub_83049398) {
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
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,5952
	ctx.r11.s64 = ctx.r11.s64 + 5952;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830493E0"))) PPC_WEAK_FUNC(sub_830493E0);
PPC_FUNC_IMPL(__imp__sub_830493E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// li r3,4001
	ctx.r3.s64 = 4001;
	// addi r4,r11,-19444
	ctx.r4.s64 = ctx.r11.s64 + -19444;
	// bl 0x824215d0
	ctx.lr = 0x830493FC;
	sub_824215D0(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stb r3,6012(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6012, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049418"))) PPC_WEAK_FUNC(sub_83049418);
PPC_FUNC_IMPL(__imp__sub_83049418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,5983
	ctx.r4.s64 = ctx.r11.s64 + 5983;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r3,r11,6000
	ctx.r3.s64 = ctx.r11.s64 + 6000;
	// bl 0x82304fb8
	ctx.lr = 0x83049438;
	sub_82304FB8(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// bl 0x82d5cd68
	ctx.lr = 0x83049444;
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

__attribute__((alias("__imp__sub_83049458"))) PPC_WEAK_FUNC(sub_83049458);
PPC_FUNC_IMPL(__imp__sub_83049458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r3,r11,-19256
	ctx.r3.s64 = ctx.r11.s64 + -19256;
	// bl 0x823da070
	ctx.lr = 0x83049470;
	sub_823DA070(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// bl 0x82d5cd68
	ctx.lr = 0x8304947C;
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

__attribute__((alias("__imp__sub_83049490"))) PPC_WEAK_FUNC(sub_83049490);
PPC_FUNC_IMPL(__imp__sub_83049490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r11,r11,-19192
	ctx.r11.s64 = ctx.r11.s64 + -19192;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8308acd4
	ctx.lr = 0x830494AC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7872
	ctx.r3.s64 = ctx.r11.s64 + -7872;
	// bl 0x82d5cd68
	ctx.lr = 0x830494B8;
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

__attribute__((alias("__imp__sub_830494C8"))) PPC_WEAK_FUNC(sub_830494C8);
PPC_FUNC_IMPL(__imp__sub_830494C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,6016
	ctx.r3.s64 = ctx.r11.s64 + 6016;
	// bl 0x823cc730
	ctx.lr = 0x830494E0;
	sub_823CC730(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7808
	ctx.r3.s64 = ctx.r11.s64 + -7808;
	// bl 0x82d5cd68
	ctx.lr = 0x830494EC;
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

__attribute__((alias("__imp__sub_83049500"))) PPC_WEAK_FUNC(sub_83049500);
PPC_FUNC_IMPL(__imp__sub_83049500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,28432
	ctx.r11.s64 = ctx.r11.s64 + 28432;
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

__attribute__((alias("__imp__sub_83049530"))) PPC_WEAK_FUNC(sub_83049530);
PPC_FUNC_IMPL(__imp__sub_83049530) {
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
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,28464
	ctx.r11.s64 = ctx.r11.s64 + 28464;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049560"))) PPC_WEAK_FUNC(sub_83049560);
PPC_FUNC_IMPL(__imp__sub_83049560) {
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
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,28480
	ctx.r11.s64 = ctx.r11.s64 + 28480;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830495A8"))) PPC_WEAK_FUNC(sub_830495A8);
PPC_FUNC_IMPL(__imp__sub_830495A8) {
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
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,28448
	ctx.r11.s64 = ctx.r11.s64 + 28448;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830495F0"))) PPC_WEAK_FUNC(sub_830495F0);
PPC_FUNC_IMPL(__imp__sub_830495F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7704
	ctx.r3.s64 = ctx.r11.s64 + -7704;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83049600"))) PPC_WEAK_FUNC(sub_83049600);
PPC_FUNC_IMPL(__imp__sub_83049600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7680
	ctx.r3.s64 = ctx.r11.s64 + -7680;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83049610"))) PPC_WEAK_FUNC(sub_83049610);
PPC_FUNC_IMPL(__imp__sub_83049610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lis r9,-31992
	ctx.r9.s64 = -2096627712;
	// addi r3,r9,-7656
	ctx.r3.s64 = ctx.r9.s64 + -7656;
	// lwz r10,-14840(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14840);
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// addi r11,r11,-18672
	ctx.r11.s64 = ctx.r11.s64 + -18672;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r10,-31989
	ctx.r10.s64 = -2096431104;
	// lwz r10,-14844(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14844);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r10,-31989
	ctx.r10.s64 = -2096431104;
	// lwz r10,-14832(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14832);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83049648"))) PPC_WEAK_FUNC(sub_83049648);
PPC_FUNC_IMPL(__imp__sub_83049648) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,28348
	ctx.r3.s64 = ctx.r11.s64 + 28348;
	// bl 0x82464a70
	ctx.lr = 0x83049660;
	sub_82464A70(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7464
	ctx.r3.s64 = ctx.r11.s64 + -7464;
	// bl 0x82d5cd68
	ctx.lr = 0x8304966C;
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

__attribute__((alias("__imp__sub_83049680"))) PPC_WEAK_FUNC(sub_83049680);
PPC_FUNC_IMPL(__imp__sub_83049680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r3,r11,28424
	ctx.r3.s64 = ctx.r11.s64 + 28424;
	// b 0x8240a5c8
	sub_8240A5C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83049690"))) PPC_WEAK_FUNC(sub_83049690);
PPC_FUNC_IMPL(__imp__sub_83049690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7584
	ctx.r3.s64 = ctx.r11.s64 + -7584;
	// b 0x82d5cd68
	sub_82D5CD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830496A0"))) PPC_WEAK_FUNC(sub_830496A0);
PPC_FUNC_IMPL(__imp__sub_830496A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,5983
	ctx.r4.s64 = ctx.r11.s64 + 5983;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r3,r11,28324
	ctx.r3.s64 = ctx.r11.s64 + 28324;
	// bl 0x82304fb8
	ctx.lr = 0x830496C0;
	sub_82304FB8(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7632
	ctx.r3.s64 = ctx.r11.s64 + -7632;
	// bl 0x82d5cd68
	ctx.lr = 0x830496CC;
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

__attribute__((alias("__imp__sub_830496E0"))) PPC_WEAK_FUNC(sub_830496E0);
PPC_FUNC_IMPL(__imp__sub_830496E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823e4a00
	ctx.lr = 0x830496F0;
	sub_823E4A00(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// stw r3,28320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049708"))) PPC_WEAK_FUNC(sub_83049708);
PPC_FUNC_IMPL(__imp__sub_83049708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,5983
	ctx.r4.s64 = ctx.r11.s64 + 5983;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r3,r11,28412
	ctx.r3.s64 = ctx.r11.s64 + 28412;
	// bl 0x82304fb8
	ctx.lr = 0x83049728;
	sub_82304FB8(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7616
	ctx.r3.s64 = ctx.r11.s64 + -7616;
	// bl 0x82d5cd68
	ctx.lr = 0x83049734;
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

__attribute__((alias("__imp__sub_83049748"))) PPC_WEAK_FUNC(sub_83049748);
PPC_FUNC_IMPL(__imp__sub_83049748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,5983
	ctx.r4.s64 = ctx.r11.s64 + 5983;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r3,r11,28496
	ctx.r3.s64 = ctx.r11.s64 + 28496;
	// bl 0x82304fb8
	ctx.lr = 0x83049768;
	sub_82304FB8(ctx, base);
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// addi r3,r11,-7600
	ctx.r3.s64 = ctx.r11.s64 + -7600;
	// bl 0x82d5cd68
	ctx.lr = 0x83049774;
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

__attribute__((alias("__imp__sub_83049788"))) PPC_WEAK_FUNC(sub_83049788);
PPC_FUNC_IMPL(__imp__sub_83049788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,3920
	ctx.r11.s64 = ctx.r11.s64 + 3920;
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

__attribute__((alias("__imp__sub_830497B8"))) PPC_WEAK_FUNC(sub_830497B8);
PPC_FUNC_IMPL(__imp__sub_830497B8) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,4016
	ctx.r11.s64 = ctx.r11.s64 + 4016;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830497E8"))) PPC_WEAK_FUNC(sub_830497E8);
PPC_FUNC_IMPL(__imp__sub_830497E8) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,4048
	ctx.r11.s64 = ctx.r11.s64 + 4048;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049830"))) PPC_WEAK_FUNC(sub_83049830);
PPC_FUNC_IMPL(__imp__sub_83049830) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,3952
	ctx.r11.s64 = ctx.r11.s64 + 3952;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049878"))) PPC_WEAK_FUNC(sub_83049878);
PPC_FUNC_IMPL(__imp__sub_83049878) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830498A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830498a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830498A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830498B8"))) PPC_WEAK_FUNC(sub_830498B8);
PPC_FUNC_IMPL(__imp__sub_830498B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830498E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830498e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830498E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830498F8"))) PPC_WEAK_FUNC(sub_830498F8);
PPC_FUNC_IMPL(__imp__sub_830498F8) {
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
	// addi r31,r11,-15116
	ctx.r31.s64 = ctx.r11.s64 + -15116;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dc718
	ctx.lr = 0x83049920;
	sub_822DC718(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31992
	ctx.r10.s64 = -2096627712;
	// addi r3,r10,-7424
	ctx.r3.s64 = ctx.r10.s64 + -7424;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82d5cd68
	ctx.lr = 0x83049934;
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

__attribute__((alias("__imp__sub_83049948"))) PPC_WEAK_FUNC(sub_83049948);
PPC_FUNC_IMPL(__imp__sub_83049948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83049988
	if (!ctx.cr6.eq) goto loc_83049988;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304997C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304997c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304997C;
loc_83049988:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830499a8
	if (ctx.cr6.eq) goto loc_830499A8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,65
	ctx.r11.s64 = 65;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_830499A8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16664);
	// stw r11,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830499B8"))) PPC_WEAK_FUNC(sub_830499B8);
PPC_FUNC_IMPL(__imp__sub_830499B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x830499f8
	if (!ctx.cr6.eq) goto loc_830499F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830499EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830499ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830499EC;
loc_830499F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049a18
	if (ctx.cr6.eq) goto loc_83049A18;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83049A18:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16660);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049A28"))) PPC_WEAK_FUNC(sub_83049A28);
PPC_FUNC_IMPL(__imp__sub_83049A28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// lwz r11,10568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// bne cr6,0x83049a68
	if (!ctx.cr6.eq) goto loc_83049A68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10568, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049A5C:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83049a5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049A5C;
loc_83049A68:
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// addi r9,r10,-16344
	ctx.r9.s64 = ctx.r10.s64 + -16344;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049a88
	if (ctx.cr6.eq) goto loc_83049A88;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r10.u32);
loc_83049A88:
	// lis r10,-31989
	ctx.r10.s64 = -2096431104;
	// lwz r10,-16656(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16656);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049A98"))) PPC_WEAK_FUNC(sub_83049A98);
PPC_FUNC_IMPL(__imp__sub_83049A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83049ad8
	if (!ctx.cr6.eq) goto loc_83049AD8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049ACC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83049acc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049ACC;
loc_83049AD8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049af8
	if (ctx.cr6.eq) goto loc_83049AF8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83049AF8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16652);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049B08"))) PPC_WEAK_FUNC(sub_83049B08);
PPC_FUNC_IMPL(__imp__sub_83049B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83049b48
	if (!ctx.cr6.eq) goto loc_83049B48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049B3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83049b3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049B3C;
loc_83049B48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049b68
	if (ctx.cr6.eq) goto loc_83049B68;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,72
	ctx.r11.s64 = 72;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83049B68:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16648);
	// stw r11,288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049B78"))) PPC_WEAK_FUNC(sub_83049B78);
PPC_FUNC_IMPL(__imp__sub_83049B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83049bb8
	if (!ctx.cr6.eq) goto loc_83049BB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049BAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83049bac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049BAC;
loc_83049BB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049bd8
	if (ctx.cr6.eq) goto loc_83049BD8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,73
	ctx.r11.s64 = 73;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83049BD8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16644);
	// stw r11,292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049BE8"))) PPC_WEAK_FUNC(sub_83049BE8);
PPC_FUNC_IMPL(__imp__sub_83049BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83049c28
	if (!ctx.cr6.eq) goto loc_83049C28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049C1C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83049c1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049C1C;
loc_83049C28:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049c48
	if (ctx.cr6.eq) goto loc_83049C48;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,81
	ctx.r11.s64 = 81;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83049C48:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16640);
	// stw r11,324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049C58"))) PPC_WEAK_FUNC(sub_83049C58);
PPC_FUNC_IMPL(__imp__sub_83049C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83049c98
	if (!ctx.cr6.eq) goto loc_83049C98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049C8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83049c8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049C8C;
loc_83049C98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049cb8
	if (ctx.cr6.eq) goto loc_83049CB8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83049CB8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16636);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049CC8"))) PPC_WEAK_FUNC(sub_83049CC8);
PPC_FUNC_IMPL(__imp__sub_83049CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83049d08
	if (!ctx.cr6.eq) goto loc_83049D08;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049CFC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83049cfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049CFC;
loc_83049D08:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049d28
	if (ctx.cr6.eq) goto loc_83049D28;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83049D28:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16632);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049D38"))) PPC_WEAK_FUNC(sub_83049D38);
PPC_FUNC_IMPL(__imp__sub_83049D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83049d78
	if (!ctx.cr6.eq) goto loc_83049D78;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049D6C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83049d6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049D6C;
loc_83049D78:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049d98
	if (ctx.cr6.eq) goto loc_83049D98;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83049D98:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16628);
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049DA8"))) PPC_WEAK_FUNC(sub_83049DA8);
PPC_FUNC_IMPL(__imp__sub_83049DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83049de8
	if (!ctx.cr6.eq) goto loc_83049DE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049DDC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83049ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049DDC;
loc_83049DE8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049e08
	if (ctx.cr6.eq) goto loc_83049E08;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,54
	ctx.r11.s64 = 54;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83049E08:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16624);
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049E18"))) PPC_WEAK_FUNC(sub_83049E18);
PPC_FUNC_IMPL(__imp__sub_83049E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83049e58
	if (!ctx.cr6.eq) goto loc_83049E58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049E4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83049e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049E4C;
loc_83049E58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049e78
	if (ctx.cr6.eq) goto loc_83049E78;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,57
	ctx.r11.s64 = 57;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83049E78:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16620);
	// stw r11,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049E88"))) PPC_WEAK_FUNC(sub_83049E88);
PPC_FUNC_IMPL(__imp__sub_83049E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83049ec8
	if (!ctx.cr6.eq) goto loc_83049EC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049EBC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83049ebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049EBC;
loc_83049EC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049ee8
	if (ctx.cr6.eq) goto loc_83049EE8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,84
	ctx.r11.s64 = 84;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83049EE8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16616);
	// stw r11,336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049EF8"))) PPC_WEAK_FUNC(sub_83049EF8);
PPC_FUNC_IMPL(__imp__sub_83049EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83049f38
	if (!ctx.cr6.eq) goto loc_83049F38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049F2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83049f2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049F2C;
loc_83049F38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049f58
	if (ctx.cr6.eq) goto loc_83049F58;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,85
	ctx.r11.s64 = 85;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83049F58:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16612);
	// stw r11,340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049F68"))) PPC_WEAK_FUNC(sub_83049F68);
PPC_FUNC_IMPL(__imp__sub_83049F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x83049fa8
	if (!ctx.cr6.eq) goto loc_83049FA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_83049F9C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83049f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83049F9C;
loc_83049FA8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83049fc8
	if (ctx.cr6.eq) goto loc_83049FC8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,87
	ctx.r11.s64 = 87;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_83049FC8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16608);
	// stw r11,348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83049FD8"))) PPC_WEAK_FUNC(sub_83049FD8);
PPC_FUNC_IMPL(__imp__sub_83049FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a018
	if (!ctx.cr6.eq) goto loc_8304A018;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A00C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a00c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A00C;
loc_8304A018:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a038
	if (ctx.cr6.eq) goto loc_8304A038;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,86
	ctx.r11.s64 = 86;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A038:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16604);
	// stw r11,344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A048"))) PPC_WEAK_FUNC(sub_8304A048);
PPC_FUNC_IMPL(__imp__sub_8304A048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a088
	if (!ctx.cr6.eq) goto loc_8304A088;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A07C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a07c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A07C;
loc_8304A088:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a0a8
	if (ctx.cr6.eq) goto loc_8304A0A8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A0A8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16600);
	// stw r11,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A0B8"))) PPC_WEAK_FUNC(sub_8304A0B8);
PPC_FUNC_IMPL(__imp__sub_8304A0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a0f8
	if (!ctx.cr6.eq) goto loc_8304A0F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A0EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a0ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A0EC;
loc_8304A0F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a118
	if (ctx.cr6.eq) goto loc_8304A118;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,70
	ctx.r11.s64 = 70;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A118:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16596);
	// stw r11,280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A128"))) PPC_WEAK_FUNC(sub_8304A128);
PPC_FUNC_IMPL(__imp__sub_8304A128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a168
	if (!ctx.cr6.eq) goto loc_8304A168;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A15C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a15c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A15C;
loc_8304A168:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a188
	if (ctx.cr6.eq) goto loc_8304A188;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,71
	ctx.r11.s64 = 71;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A188:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16592);
	// stw r11,284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 284, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A198"))) PPC_WEAK_FUNC(sub_8304A198);
PPC_FUNC_IMPL(__imp__sub_8304A198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a1d8
	if (!ctx.cr6.eq) goto loc_8304A1D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A1CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a1cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A1CC;
loc_8304A1D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a1f8
	if (ctx.cr6.eq) goto loc_8304A1F8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,45
	ctx.r11.s64 = 45;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A1F8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16588);
	// stw r11,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A208"))) PPC_WEAK_FUNC(sub_8304A208);
PPC_FUNC_IMPL(__imp__sub_8304A208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a248
	if (!ctx.cr6.eq) goto loc_8304A248;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A23C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a23c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A23C;
loc_8304A248:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a268
	if (ctx.cr6.eq) goto loc_8304A268;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,53
	ctx.r11.s64 = 53;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A268:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16584);
	// stw r11,212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 212, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A278"))) PPC_WEAK_FUNC(sub_8304A278);
PPC_FUNC_IMPL(__imp__sub_8304A278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a2b8
	if (!ctx.cr6.eq) goto loc_8304A2B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A2AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a2ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A2AC;
loc_8304A2B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a2d8
	if (ctx.cr6.eq) goto loc_8304A2D8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,83
	ctx.r11.s64 = 83;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A2D8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16580);
	// stw r11,332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A2E8"))) PPC_WEAK_FUNC(sub_8304A2E8);
PPC_FUNC_IMPL(__imp__sub_8304A2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a328
	if (!ctx.cr6.eq) goto loc_8304A328;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A31C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a31c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A31C;
loc_8304A328:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a348
	if (ctx.cr6.eq) goto loc_8304A348;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A348:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16576);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A358"))) PPC_WEAK_FUNC(sub_8304A358);
PPC_FUNC_IMPL(__imp__sub_8304A358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a398
	if (!ctx.cr6.eq) goto loc_8304A398;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A38C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a38c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A38C;
loc_8304A398:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a3b8
	if (ctx.cr6.eq) goto loc_8304A3B8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,58
	ctx.r11.s64 = 58;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A3B8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16572);
	// stw r11,232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A3C8"))) PPC_WEAK_FUNC(sub_8304A3C8);
PPC_FUNC_IMPL(__imp__sub_8304A3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a408
	if (!ctx.cr6.eq) goto loc_8304A408;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A3FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a3fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A3FC;
loc_8304A408:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a428
	if (ctx.cr6.eq) goto loc_8304A428;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A428:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16568);
	// stw r11,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A438"))) PPC_WEAK_FUNC(sub_8304A438);
PPC_FUNC_IMPL(__imp__sub_8304A438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a478
	if (!ctx.cr6.eq) goto loc_8304A478;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A46C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a46c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A46C;
loc_8304A478:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a498
	if (ctx.cr6.eq) goto loc_8304A498;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A498:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16564);
	// stw r11,320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A4A8"))) PPC_WEAK_FUNC(sub_8304A4A8);
PPC_FUNC_IMPL(__imp__sub_8304A4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a4e8
	if (!ctx.cr6.eq) goto loc_8304A4E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A4DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a4dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A4DC;
loc_8304A4E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a508
	if (ctx.cr6.eq) goto loc_8304A508;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,41
	ctx.r11.s64 = 41;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A508:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16560);
	// stw r11,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A518"))) PPC_WEAK_FUNC(sub_8304A518);
PPC_FUNC_IMPL(__imp__sub_8304A518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a558
	if (!ctx.cr6.eq) goto loc_8304A558;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A54C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a54c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A54C;
loc_8304A558:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a578
	if (ctx.cr6.eq) goto loc_8304A578;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A578:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16556);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A588"))) PPC_WEAK_FUNC(sub_8304A588);
PPC_FUNC_IMPL(__imp__sub_8304A588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a5c8
	if (!ctx.cr6.eq) goto loc_8304A5C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A5BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a5bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A5BC;
loc_8304A5C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a5e8
	if (ctx.cr6.eq) goto loc_8304A5E8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A5E8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16552);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A5F8"))) PPC_WEAK_FUNC(sub_8304A5F8);
PPC_FUNC_IMPL(__imp__sub_8304A5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a638
	if (!ctx.cr6.eq) goto loc_8304A638;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A62C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a62c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A62C;
loc_8304A638:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a658
	if (ctx.cr6.eq) goto loc_8304A658;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A658:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16548);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A668"))) PPC_WEAK_FUNC(sub_8304A668);
PPC_FUNC_IMPL(__imp__sub_8304A668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a6a8
	if (!ctx.cr6.eq) goto loc_8304A6A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A69C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a69c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A69C;
loc_8304A6A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a6c8
	if (ctx.cr6.eq) goto loc_8304A6C8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A6C8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16544);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A6D8"))) PPC_WEAK_FUNC(sub_8304A6D8);
PPC_FUNC_IMPL(__imp__sub_8304A6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a718
	if (!ctx.cr6.eq) goto loc_8304A718;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A70C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a70c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A70C;
loc_8304A718:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a738
	if (ctx.cr6.eq) goto loc_8304A738;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A738:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16540);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A748"))) PPC_WEAK_FUNC(sub_8304A748);
PPC_FUNC_IMPL(__imp__sub_8304A748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a788
	if (!ctx.cr6.eq) goto loc_8304A788;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A77C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a77c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A77C;
loc_8304A788:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a7a8
	if (ctx.cr6.eq) goto loc_8304A7A8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A7A8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16536);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A7B8"))) PPC_WEAK_FUNC(sub_8304A7B8);
PPC_FUNC_IMPL(__imp__sub_8304A7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a7f8
	if (!ctx.cr6.eq) goto loc_8304A7F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A7EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a7ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A7EC;
loc_8304A7F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a818
	if (ctx.cr6.eq) goto loc_8304A818;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,69
	ctx.r11.s64 = 69;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A818:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16532);
	// stw r11,276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A828"))) PPC_WEAK_FUNC(sub_8304A828);
PPC_FUNC_IMPL(__imp__sub_8304A828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a868
	if (!ctx.cr6.eq) goto loc_8304A868;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A85C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a85c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A85C;
loc_8304A868:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a888
	if (ctx.cr6.eq) goto loc_8304A888;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A888:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16528);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A898"))) PPC_WEAK_FUNC(sub_8304A898);
PPC_FUNC_IMPL(__imp__sub_8304A898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a8d8
	if (!ctx.cr6.eq) goto loc_8304A8D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A8CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a8cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A8CC;
loc_8304A8D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a8f8
	if (ctx.cr6.eq) goto loc_8304A8F8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A8F8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16524);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A908"))) PPC_WEAK_FUNC(sub_8304A908);
PPC_FUNC_IMPL(__imp__sub_8304A908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a948
	if (!ctx.cr6.eq) goto loc_8304A948;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A93C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a93c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A93C;
loc_8304A948:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a968
	if (ctx.cr6.eq) goto loc_8304A968;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A968:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16520);
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A978"))) PPC_WEAK_FUNC(sub_8304A978);
PPC_FUNC_IMPL(__imp__sub_8304A978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304a9b8
	if (!ctx.cr6.eq) goto loc_8304A9B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304A9AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304a9ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304A9AC;
loc_8304A9B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304a9d8
	if (ctx.cr6.eq) goto loc_8304A9D8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304A9D8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16516);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304A9E8"))) PPC_WEAK_FUNC(sub_8304A9E8);
PPC_FUNC_IMPL(__imp__sub_8304A9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304aa28
	if (!ctx.cr6.eq) goto loc_8304AA28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304AA1C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304aa1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304AA1C;
loc_8304AA28:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304aa48
	if (ctx.cr6.eq) goto loc_8304AA48;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304AA48:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16512);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304AA58"))) PPC_WEAK_FUNC(sub_8304AA58);
PPC_FUNC_IMPL(__imp__sub_8304AA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304aa98
	if (!ctx.cr6.eq) goto loc_8304AA98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304AA8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304aa8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304AA8C;
loc_8304AA98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304aab8
	if (ctx.cr6.eq) goto loc_8304AAB8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304AAB8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16508);
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304AAC8"))) PPC_WEAK_FUNC(sub_8304AAC8);
PPC_FUNC_IMPL(__imp__sub_8304AAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ab08
	if (!ctx.cr6.eq) goto loc_8304AB08;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304AAFC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304aafc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304AAFC;
loc_8304AB08:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ab28
	if (ctx.cr6.eq) goto loc_8304AB28;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,27
	ctx.r11.s64 = 27;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304AB28:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16504);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304AB38"))) PPC_WEAK_FUNC(sub_8304AB38);
PPC_FUNC_IMPL(__imp__sub_8304AB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ab78
	if (!ctx.cr6.eq) goto loc_8304AB78;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304AB6C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ab6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304AB6C;
loc_8304AB78:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ab98
	if (ctx.cr6.eq) goto loc_8304AB98;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304AB98:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16500);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304ABA8"))) PPC_WEAK_FUNC(sub_8304ABA8);
PPC_FUNC_IMPL(__imp__sub_8304ABA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304abe8
	if (!ctx.cr6.eq) goto loc_8304ABE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304ABDC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304abdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304ABDC;
loc_8304ABE8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ac08
	if (ctx.cr6.eq) goto loc_8304AC08;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,55
	ctx.r11.s64 = 55;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304AC08:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16496);
	// stw r11,220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304AC18"))) PPC_WEAK_FUNC(sub_8304AC18);
PPC_FUNC_IMPL(__imp__sub_8304AC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ac58
	if (!ctx.cr6.eq) goto loc_8304AC58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304AC4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ac4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304AC4C;
loc_8304AC58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ac78
	if (ctx.cr6.eq) goto loc_8304AC78;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304AC78:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16492);
	// stw r11,264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304AC88"))) PPC_WEAK_FUNC(sub_8304AC88);
PPC_FUNC_IMPL(__imp__sub_8304AC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304acc8
	if (!ctx.cr6.eq) goto loc_8304ACC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304ACBC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304acbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304ACBC;
loc_8304ACC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ace8
	if (ctx.cr6.eq) goto loc_8304ACE8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,67
	ctx.r11.s64 = 67;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304ACE8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16488);
	// stw r11,268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304ACF8"))) PPC_WEAK_FUNC(sub_8304ACF8);
PPC_FUNC_IMPL(__imp__sub_8304ACF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ad38
	if (!ctx.cr6.eq) goto loc_8304AD38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304AD2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ad2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304AD2C;
loc_8304AD38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ad58
	if (ctx.cr6.eq) goto loc_8304AD58;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,68
	ctx.r11.s64 = 68;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304AD58:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16484);
	// stw r11,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304AD68"))) PPC_WEAK_FUNC(sub_8304AD68);
PPC_FUNC_IMPL(__imp__sub_8304AD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ada8
	if (!ctx.cr6.eq) goto loc_8304ADA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304AD9C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ad9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304AD9C;
loc_8304ADA8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304adc8
	if (ctx.cr6.eq) goto loc_8304ADC8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304ADC8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16480);
	// stw r11,200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304ADD8"))) PPC_WEAK_FUNC(sub_8304ADD8);
PPC_FUNC_IMPL(__imp__sub_8304ADD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ae18
	if (!ctx.cr6.eq) goto loc_8304AE18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304AE0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ae0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304AE0C;
loc_8304AE18:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,204(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ae38
	if (ctx.cr6.eq) goto loc_8304AE38;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,51
	ctx.r11.s64 = 51;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304AE38:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16476);
	// stw r11,204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 204, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304AE48"))) PPC_WEAK_FUNC(sub_8304AE48);
PPC_FUNC_IMPL(__imp__sub_8304AE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ae88
	if (!ctx.cr6.eq) goto loc_8304AE88;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304AE7C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ae7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304AE7C;
loc_8304AE88:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304aea8
	if (ctx.cr6.eq) goto loc_8304AEA8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304AEA8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16472);
	// stw r11,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304AEB8"))) PPC_WEAK_FUNC(sub_8304AEB8);
PPC_FUNC_IMPL(__imp__sub_8304AEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304aef8
	if (!ctx.cr6.eq) goto loc_8304AEF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304AEEC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304aeec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304AEEC;
loc_8304AEF8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304af18
	if (ctx.cr6.eq) goto loc_8304AF18;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304AF18:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16468);
	// stw r11,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304AF28"))) PPC_WEAK_FUNC(sub_8304AF28);
PPC_FUNC_IMPL(__imp__sub_8304AF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304af68
	if (!ctx.cr6.eq) goto loc_8304AF68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304AF5C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304af5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304AF5C;
loc_8304AF68:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304af88
	if (ctx.cr6.eq) goto loc_8304AF88;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304AF88:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16464);
	// stw r11,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304AF98"))) PPC_WEAK_FUNC(sub_8304AF98);
PPC_FUNC_IMPL(__imp__sub_8304AF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304afd8
	if (!ctx.cr6.eq) goto loc_8304AFD8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304AFCC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304afcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304AFCC;
loc_8304AFD8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304aff8
	if (ctx.cr6.eq) goto loc_8304AFF8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304AFF8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16460);
	// stw r11,208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B008"))) PPC_WEAK_FUNC(sub_8304B008);
PPC_FUNC_IMPL(__imp__sub_8304B008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304b048
	if (!ctx.cr6.eq) goto loc_8304B048;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B03C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b03c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B03C;
loc_8304B048:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b068
	if (ctx.cr6.eq) goto loc_8304B068;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304B068:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16456);
	// stw r11,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B078"))) PPC_WEAK_FUNC(sub_8304B078);
PPC_FUNC_IMPL(__imp__sub_8304B078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304b0b8
	if (!ctx.cr6.eq) goto loc_8304B0B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B0AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b0ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B0AC;
loc_8304B0B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b0d8
	if (ctx.cr6.eq) goto loc_8304B0D8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304B0D8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16452);
	// stw r11,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B0E8"))) PPC_WEAK_FUNC(sub_8304B0E8);
PPC_FUNC_IMPL(__imp__sub_8304B0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304b128
	if (!ctx.cr6.eq) goto loc_8304B128;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B11C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b11c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B11C;
loc_8304B128:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b148
	if (ctx.cr6.eq) goto loc_8304B148;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304B148:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16448);
	// stw r11,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B158"))) PPC_WEAK_FUNC(sub_8304B158);
PPC_FUNC_IMPL(__imp__sub_8304B158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304b198
	if (!ctx.cr6.eq) goto loc_8304B198;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B18C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b18c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B18C;
loc_8304B198:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b1b8
	if (ctx.cr6.eq) goto loc_8304B1B8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304B1B8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16444);
	// stw r11,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B1C8"))) PPC_WEAK_FUNC(sub_8304B1C8);
PPC_FUNC_IMPL(__imp__sub_8304B1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304b208
	if (!ctx.cr6.eq) goto loc_8304B208;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B1FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b1fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B1FC;
loc_8304B208:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b228
	if (ctx.cr6.eq) goto loc_8304B228;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304B228:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16440);
	// stw r11,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B238"))) PPC_WEAK_FUNC(sub_8304B238);
PPC_FUNC_IMPL(__imp__sub_8304B238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304b278
	if (!ctx.cr6.eq) goto loc_8304B278;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B26C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b26c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B26C;
loc_8304B278:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b298
	if (ctx.cr6.eq) goto loc_8304B298;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,39
	ctx.r11.s64 = 39;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304B298:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16436);
	// stw r11,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B2A8"))) PPC_WEAK_FUNC(sub_8304B2A8);
PPC_FUNC_IMPL(__imp__sub_8304B2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304b2e8
	if (!ctx.cr6.eq) goto loc_8304B2E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B2DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b2dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B2DC;
loc_8304B2E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b308
	if (ctx.cr6.eq) goto loc_8304B308;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304B308:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16432);
	// stw r11,160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B318"))) PPC_WEAK_FUNC(sub_8304B318);
PPC_FUNC_IMPL(__imp__sub_8304B318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304b358
	if (!ctx.cr6.eq) goto loc_8304B358;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B34C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b34c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B34C;
loc_8304B358:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b378
	if (ctx.cr6.eq) goto loc_8304B378;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304B378:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16428);
	// stw r11,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B388"))) PPC_WEAK_FUNC(sub_8304B388);
PPC_FUNC_IMPL(__imp__sub_8304B388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304b3c8
	if (!ctx.cr6.eq) goto loc_8304B3C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B3BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b3bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B3BC;
loc_8304B3C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b3e8
	if (ctx.cr6.eq) goto loc_8304B3E8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304B3E8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16424);
	// stw r11,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B3F8"))) PPC_WEAK_FUNC(sub_8304B3F8);
PPC_FUNC_IMPL(__imp__sub_8304B3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304b438
	if (!ctx.cr6.eq) goto loc_8304B438;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B42C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b42c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B42C;
loc_8304B438:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b458
	if (ctx.cr6.eq) goto loc_8304B458;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304B458:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16420);
	// stw r11,184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B468"))) PPC_WEAK_FUNC(sub_8304B468);
PPC_FUNC_IMPL(__imp__sub_8304B468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304b4a8
	if (!ctx.cr6.eq) goto loc_8304B4A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B49C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b49c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B49C;
loc_8304B4A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b4c8
	if (ctx.cr6.eq) goto loc_8304B4C8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304B4C8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16416);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B4D8"))) PPC_WEAK_FUNC(sub_8304B4D8);
PPC_FUNC_IMPL(__imp__sub_8304B4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304b518
	if (!ctx.cr6.eq) goto loc_8304B518;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B50C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b50c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B50C;
loc_8304B518:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b538
	if (ctx.cr6.eq) goto loc_8304B538;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304B538:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16412);
	// stw r11,224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B548"))) PPC_WEAK_FUNC(sub_8304B548);
PPC_FUNC_IMPL(__imp__sub_8304B548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304b588
	if (!ctx.cr6.eq) goto loc_8304B588;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B57C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b57c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B57C;
loc_8304B588:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b5a8
	if (ctx.cr6.eq) goto loc_8304B5A8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,82
	ctx.r11.s64 = 82;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304B5A8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16408);
	// stw r11,328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B5B8"))) PPC_WEAK_FUNC(sub_8304B5B8);
PPC_FUNC_IMPL(__imp__sub_8304B5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304B5E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b5e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B5E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B5F8"))) PPC_WEAK_FUNC(sub_8304B5F8);
PPC_FUNC_IMPL(__imp__sub_8304B5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304b638
	if (!ctx.cr6.eq) goto loc_8304B638;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B62C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b62c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B62C;
loc_8304B638:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b658
	if (ctx.cr6.eq) goto loc_8304B658;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,58
	ctx.r11.s64 = 58;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304B658:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16404);
	// stw r11,232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B668"))) PPC_WEAK_FUNC(sub_8304B668);
PPC_FUNC_IMPL(__imp__sub_8304B668) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304B698:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B698;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B6A8"))) PPC_WEAK_FUNC(sub_8304B6A8);
PPC_FUNC_IMPL(__imp__sub_8304B6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304b6e8
	if (!ctx.cr6.eq) goto loc_8304B6E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B6DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b6dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B6DC;
loc_8304B6E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b708
	if (ctx.cr6.eq) goto loc_8304B708;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,59
	ctx.r11.s64 = 59;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304B708:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16400);
	// stw r11,236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B718"))) PPC_WEAK_FUNC(sub_8304B718);
PPC_FUNC_IMPL(__imp__sub_8304B718) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304B748:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b748
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B758"))) PPC_WEAK_FUNC(sub_8304B758);
PPC_FUNC_IMPL(__imp__sub_8304B758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304b798
	if (!ctx.cr6.eq) goto loc_8304B798;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B78C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b78c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B78C;
loc_8304B798:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,240(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b7b8
	if (ctx.cr6.eq) goto loc_8304B7B8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,60
	ctx.r11.s64 = 60;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304B7B8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16396);
	// stw r11,240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 240, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B7C8"))) PPC_WEAK_FUNC(sub_8304B7C8);
PPC_FUNC_IMPL(__imp__sub_8304B7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304B7F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b7f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B7F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B808"))) PPC_WEAK_FUNC(sub_8304B808);
PPC_FUNC_IMPL(__imp__sub_8304B808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304b848
	if (!ctx.cr6.eq) goto loc_8304B848;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B83C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b83c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B83C;
loc_8304B848:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b868
	if (ctx.cr6.eq) goto loc_8304B868;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,82
	ctx.r11.s64 = 82;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304B868:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16392);
	// stw r11,328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B878"))) PPC_WEAK_FUNC(sub_8304B878);
PPC_FUNC_IMPL(__imp__sub_8304B878) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304B8A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b8a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B8A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B8B8"))) PPC_WEAK_FUNC(sub_8304B8B8);
PPC_FUNC_IMPL(__imp__sub_8304B8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304b8f8
	if (!ctx.cr6.eq) goto loc_8304B8F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B8EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b8ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B8EC;
loc_8304B8F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b918
	if (ctx.cr6.eq) goto loc_8304B918;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,61
	ctx.r11.s64 = 61;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304B918:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16388);
	// stw r11,244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B928"))) PPC_WEAK_FUNC(sub_8304B928);
PPC_FUNC_IMPL(__imp__sub_8304B928) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304B958:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B958;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B968"))) PPC_WEAK_FUNC(sub_8304B968);
PPC_FUNC_IMPL(__imp__sub_8304B968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304b9a8
	if (!ctx.cr6.eq) goto loc_8304B9A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304B99C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304b99c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304B99C;
loc_8304B9A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304b9c8
	if (ctx.cr6.eq) goto loc_8304B9C8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,62
	ctx.r11.s64 = 62;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304B9C8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16384);
	// stw r11,248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304B9D8"))) PPC_WEAK_FUNC(sub_8304B9D8);
PPC_FUNC_IMPL(__imp__sub_8304B9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304BA08:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ba08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BA08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BA18"))) PPC_WEAK_FUNC(sub_8304BA18);
PPC_FUNC_IMPL(__imp__sub_8304BA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304ba58
	if (!ctx.cr6.eq) goto loc_8304BA58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304BA4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ba4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BA4C;
loc_8304BA58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ba78
	if (ctx.cr6.eq) goto loc_8304BA78;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304BA78:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16380);
	// stw r11,252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 252, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BA88"))) PPC_WEAK_FUNC(sub_8304BA88);
PPC_FUNC_IMPL(__imp__sub_8304BA88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304BAB8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BAB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BAC8"))) PPC_WEAK_FUNC(sub_8304BAC8);
PPC_FUNC_IMPL(__imp__sub_8304BAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304bb08
	if (!ctx.cr6.eq) goto loc_8304BB08;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304BAFC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bafc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BAFC;
loc_8304BB08:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304bb28
	if (ctx.cr6.eq) goto loc_8304BB28;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,83
	ctx.r11.s64 = 83;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304BB28:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16376);
	// stw r11,332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BB38"))) PPC_WEAK_FUNC(sub_8304BB38);
PPC_FUNC_IMPL(__imp__sub_8304BB38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304BB68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bb68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BB68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BB78"))) PPC_WEAK_FUNC(sub_8304BB78);
PPC_FUNC_IMPL(__imp__sub_8304BB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304bbb8
	if (!ctx.cr6.eq) goto loc_8304BBB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304BBAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bbac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BBAC;
loc_8304BBB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304bbd8
	if (ctx.cr6.eq) goto loc_8304BBD8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304BBD8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16372);
	// stw r11,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BBE8"))) PPC_WEAK_FUNC(sub_8304BBE8);
PPC_FUNC_IMPL(__imp__sub_8304BBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304BC18:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bc18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BC18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BC28"))) PPC_WEAK_FUNC(sub_8304BC28);
PPC_FUNC_IMPL(__imp__sub_8304BC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304bc68
	if (!ctx.cr6.eq) goto loc_8304BC68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304BC5C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bc5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BC5C;
loc_8304BC68:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304bc88
	if (ctx.cr6.eq) goto loc_8304BC88;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,65
	ctx.r11.s64 = 65;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304BC88:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16368);
	// stw r11,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BC98"))) PPC_WEAK_FUNC(sub_8304BC98);
PPC_FUNC_IMPL(__imp__sub_8304BC98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304BCC8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bcc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BCC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BCD8"))) PPC_WEAK_FUNC(sub_8304BCD8);
PPC_FUNC_IMPL(__imp__sub_8304BCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304bd18
	if (!ctx.cr6.eq) goto loc_8304BD18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304BD0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bd0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BD0C;
loc_8304BD18:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304bd38
	if (ctx.cr6.eq) goto loc_8304BD38;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304BD38:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16364);
	// stw r11,264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BD48"))) PPC_WEAK_FUNC(sub_8304BD48);
PPC_FUNC_IMPL(__imp__sub_8304BD48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304BD78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bd78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BD78;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BD88"))) PPC_WEAK_FUNC(sub_8304BD88);
PPC_FUNC_IMPL(__imp__sub_8304BD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304bdc8
	if (!ctx.cr6.eq) goto loc_8304BDC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304BDBC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bdbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BDBC;
loc_8304BDC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304bde8
	if (ctx.cr6.eq) goto loc_8304BDE8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,84
	ctx.r11.s64 = 84;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304BDE8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16360);
	// stw r11,336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BDF8"))) PPC_WEAK_FUNC(sub_8304BDF8);
PPC_FUNC_IMPL(__imp__sub_8304BDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304BE28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304be28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BE28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BE38"))) PPC_WEAK_FUNC(sub_8304BE38);
PPC_FUNC_IMPL(__imp__sub_8304BE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304be78
	if (!ctx.cr6.eq) goto loc_8304BE78;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304BE6C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304be6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BE6C;
loc_8304BE78:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304be98
	if (ctx.cr6.eq) goto loc_8304BE98;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,67
	ctx.r11.s64 = 67;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304BE98:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16356);
	// stw r11,268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BEA8"))) PPC_WEAK_FUNC(sub_8304BEA8);
PPC_FUNC_IMPL(__imp__sub_8304BEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304BED8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BED8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BEE8"))) PPC_WEAK_FUNC(sub_8304BEE8);
PPC_FUNC_IMPL(__imp__sub_8304BEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304bf28
	if (!ctx.cr6.eq) goto loc_8304BF28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304BF1C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bf1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BF1C;
loc_8304BF28:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304bf48
	if (ctx.cr6.eq) goto loc_8304BF48;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,68
	ctx.r11.s64 = 68;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304BF48:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16352);
	// stw r11,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BF58"))) PPC_WEAK_FUNC(sub_8304BF58);
PPC_FUNC_IMPL(__imp__sub_8304BF58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304BF88:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bf88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BF88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304BF98"))) PPC_WEAK_FUNC(sub_8304BF98);
PPC_FUNC_IMPL(__imp__sub_8304BF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304bfd8
	if (!ctx.cr6.eq) goto loc_8304BFD8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304BFCC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304bfcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304BFCC;
loc_8304BFD8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304bff8
	if (ctx.cr6.eq) goto loc_8304BFF8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,69
	ctx.r11.s64 = 69;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304BFF8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16348);
	// stw r11,276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C008"))) PPC_WEAK_FUNC(sub_8304C008);
PPC_FUNC_IMPL(__imp__sub_8304C008) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C038:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C038;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C048"))) PPC_WEAK_FUNC(sub_8304C048);
PPC_FUNC_IMPL(__imp__sub_8304C048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c088
	if (!ctx.cr6.eq) goto loc_8304C088;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C07C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c07c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C07C;
loc_8304C088:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c0a8
	if (ctx.cr6.eq) goto loc_8304C0A8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,85
	ctx.r11.s64 = 85;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C0A8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16344);
	// stw r11,340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C0B8"))) PPC_WEAK_FUNC(sub_8304C0B8);
PPC_FUNC_IMPL(__imp__sub_8304C0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C0E8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C0E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C0F8"))) PPC_WEAK_FUNC(sub_8304C0F8);
PPC_FUNC_IMPL(__imp__sub_8304C0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c138
	if (!ctx.cr6.eq) goto loc_8304C138;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C12C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c12c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C12C;
loc_8304C138:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c158
	if (ctx.cr6.eq) goto loc_8304C158;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,71
	ctx.r11.s64 = 71;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C158:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16340);
	// stw r11,284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 284, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C168"))) PPC_WEAK_FUNC(sub_8304C168);
PPC_FUNC_IMPL(__imp__sub_8304C168) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C198:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C198;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C1A8"))) PPC_WEAK_FUNC(sub_8304C1A8);
PPC_FUNC_IMPL(__imp__sub_8304C1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c1e8
	if (!ctx.cr6.eq) goto loc_8304C1E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C1DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c1dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C1DC;
loc_8304C1E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c208
	if (ctx.cr6.eq) goto loc_8304C208;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,70
	ctx.r11.s64 = 70;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C208:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16336);
	// stw r11,280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C218"))) PPC_WEAK_FUNC(sub_8304C218);
PPC_FUNC_IMPL(__imp__sub_8304C218) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C248:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C258"))) PPC_WEAK_FUNC(sub_8304C258);
PPC_FUNC_IMPL(__imp__sub_8304C258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c298
	if (!ctx.cr6.eq) goto loc_8304C298;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C28C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c28c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C28C;
loc_8304C298:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c2b8
	if (ctx.cr6.eq) goto loc_8304C2B8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,86
	ctx.r11.s64 = 86;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C2B8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16332);
	// stw r11,344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C2C8"))) PPC_WEAK_FUNC(sub_8304C2C8);
PPC_FUNC_IMPL(__imp__sub_8304C2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C2F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c2f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C2F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C308"))) PPC_WEAK_FUNC(sub_8304C308);
PPC_FUNC_IMPL(__imp__sub_8304C308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c348
	if (!ctx.cr6.eq) goto loc_8304C348;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C33C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c33c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C33C;
loc_8304C348:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c368
	if (ctx.cr6.eq) goto loc_8304C368;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,55
	ctx.r11.s64 = 55;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C368:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16328);
	// stw r11,220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C378"))) PPC_WEAK_FUNC(sub_8304C378);
PPC_FUNC_IMPL(__imp__sub_8304C378) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C3A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c3a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C3A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C3B8"))) PPC_WEAK_FUNC(sub_8304C3B8);
PPC_FUNC_IMPL(__imp__sub_8304C3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c3f8
	if (!ctx.cr6.eq) goto loc_8304C3F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C3EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c3ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C3EC;
loc_8304C3F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c418
	if (ctx.cr6.eq) goto loc_8304C418;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C418:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16324);
	// stw r11,224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C428"))) PPC_WEAK_FUNC(sub_8304C428);
PPC_FUNC_IMPL(__imp__sub_8304C428) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C458:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C458;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C468"))) PPC_WEAK_FUNC(sub_8304C468);
PPC_FUNC_IMPL(__imp__sub_8304C468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c4a8
	if (!ctx.cr6.eq) goto loc_8304C4A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C49C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c49c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C49C;
loc_8304C4A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c4c8
	if (ctx.cr6.eq) goto loc_8304C4C8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,54
	ctx.r11.s64 = 54;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C4C8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16320);
	// stw r11,216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C4D8"))) PPC_WEAK_FUNC(sub_8304C4D8);
PPC_FUNC_IMPL(__imp__sub_8304C4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C508:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C518"))) PPC_WEAK_FUNC(sub_8304C518);
PPC_FUNC_IMPL(__imp__sub_8304C518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c558
	if (!ctx.cr6.eq) goto loc_8304C558;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C54C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c54c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C54C;
loc_8304C558:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c578
	if (ctx.cr6.eq) goto loc_8304C578;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,72
	ctx.r11.s64 = 72;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C578:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16316);
	// stw r11,288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C588"))) PPC_WEAK_FUNC(sub_8304C588);
PPC_FUNC_IMPL(__imp__sub_8304C588) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C5B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c5b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C5B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C5C8"))) PPC_WEAK_FUNC(sub_8304C5C8);
PPC_FUNC_IMPL(__imp__sub_8304C5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c608
	if (!ctx.cr6.eq) goto loc_8304C608;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C5FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c5fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C5FC;
loc_8304C608:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c628
	if (ctx.cr6.eq) goto loc_8304C628;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,87
	ctx.r11.s64 = 87;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C628:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16312);
	// stw r11,348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C638"))) PPC_WEAK_FUNC(sub_8304C638);
PPC_FUNC_IMPL(__imp__sub_8304C638) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C668:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C668;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C678"))) PPC_WEAK_FUNC(sub_8304C678);
PPC_FUNC_IMPL(__imp__sub_8304C678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c6b8
	if (!ctx.cr6.eq) goto loc_8304C6B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C6AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c6ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C6AC;
loc_8304C6B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 384);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c6d8
	if (ctx.cr6.eq) goto loc_8304C6D8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,96
	ctx.r11.s64 = 96;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C6D8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16308);
	// stw r11,384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C6E8"))) PPC_WEAK_FUNC(sub_8304C6E8);
PPC_FUNC_IMPL(__imp__sub_8304C6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C718:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C718;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C728"))) PPC_WEAK_FUNC(sub_8304C728);
PPC_FUNC_IMPL(__imp__sub_8304C728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c768
	if (!ctx.cr6.eq) goto loc_8304C768;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C75C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c75c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C75C;
loc_8304C768:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c788
	if (ctx.cr6.eq) goto loc_8304C788;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,73
	ctx.r11.s64 = 73;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C788:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16304);
	// stw r11,292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C798"))) PPC_WEAK_FUNC(sub_8304C798);
PPC_FUNC_IMPL(__imp__sub_8304C798) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C7C8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c7c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C7C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C7D8"))) PPC_WEAK_FUNC(sub_8304C7D8);
PPC_FUNC_IMPL(__imp__sub_8304C7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c818
	if (!ctx.cr6.eq) goto loc_8304C818;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C80C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c80c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C80C;
loc_8304C818:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c838
	if (ctx.cr6.eq) goto loc_8304C838;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,74
	ctx.r11.s64 = 74;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C838:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16300);
	// stw r11,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C848"))) PPC_WEAK_FUNC(sub_8304C848);
PPC_FUNC_IMPL(__imp__sub_8304C848) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C878:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C878;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C888"))) PPC_WEAK_FUNC(sub_8304C888);
PPC_FUNC_IMPL(__imp__sub_8304C888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c8c8
	if (!ctx.cr6.eq) goto loc_8304C8C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C8BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c8bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C8BC;
loc_8304C8C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c8e8
	if (ctx.cr6.eq) goto loc_8304C8E8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,75
	ctx.r11.s64 = 75;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C8E8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16296);
	// stw r11,300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C8F8"))) PPC_WEAK_FUNC(sub_8304C8F8);
PPC_FUNC_IMPL(__imp__sub_8304C8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304C928:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C938"))) PPC_WEAK_FUNC(sub_8304C938);
PPC_FUNC_IMPL(__imp__sub_8304C938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304c978
	if (!ctx.cr6.eq) goto loc_8304C978;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C96C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c96c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C96C;
loc_8304C978:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304c998
	if (ctx.cr6.eq) goto loc_8304C998;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,76
	ctx.r11.s64 = 76;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304C998:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16292);
	// stw r11,304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304C9A8"))) PPC_WEAK_FUNC(sub_8304C9A8);
PPC_FUNC_IMPL(__imp__sub_8304C9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304c9e8
	if (!ctx.cr6.eq) goto loc_8304C9E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304C9DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304c9dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304C9DC;
loc_8304C9E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 516);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ca08
	if (ctx.cr6.eq) goto loc_8304CA08;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,129
	ctx.r11.s64 = 129;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CA08:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16288);
	// stw r11,516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CA18"))) PPC_WEAK_FUNC(sub_8304CA18);
PPC_FUNC_IMPL(__imp__sub_8304CA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ca58
	if (!ctx.cr6.eq) goto loc_8304CA58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CA4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ca4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CA4C;
loc_8304CA58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 968);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ca78
	if (ctx.cr6.eq) goto loc_8304CA78;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,242
	ctx.r11.s64 = 242;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CA78:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16284);
	// stw r11,968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 968, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CA88"))) PPC_WEAK_FUNC(sub_8304CA88);
PPC_FUNC_IMPL(__imp__sub_8304CA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304cac8
	if (!ctx.cr6.eq) goto loc_8304CAC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CABC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304cabc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CABC;
loc_8304CAC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,972(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 972);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304cae8
	if (ctx.cr6.eq) goto loc_8304CAE8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,243
	ctx.r11.s64 = 243;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CAE8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16280);
	// stw r11,972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 972, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CAF8"))) PPC_WEAK_FUNC(sub_8304CAF8);
PPC_FUNC_IMPL(__imp__sub_8304CAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304cb38
	if (!ctx.cr6.eq) goto loc_8304CB38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CB2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304cb2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CB2C;
loc_8304CB38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304cb58
	if (ctx.cr6.eq) goto loc_8304CB58;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,130
	ctx.r11.s64 = 130;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CB58:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16276);
	// stw r11,520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CB68"))) PPC_WEAK_FUNC(sub_8304CB68);
PPC_FUNC_IMPL(__imp__sub_8304CB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304cba8
	if (!ctx.cr6.eq) goto loc_8304CBA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CB9C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304cb9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CB9C;
loc_8304CBA8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 524);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304cbc8
	if (ctx.cr6.eq) goto loc_8304CBC8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,131
	ctx.r11.s64 = 131;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CBC8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16272);
	// stw r11,524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 524, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CBD8"))) PPC_WEAK_FUNC(sub_8304CBD8);
PPC_FUNC_IMPL(__imp__sub_8304CBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304cc18
	if (!ctx.cr6.eq) goto loc_8304CC18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CC0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304cc0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CC0C;
loc_8304CC18:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304cc38
	if (ctx.cr6.eq) goto loc_8304CC38;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,132
	ctx.r11.s64 = 132;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CC38:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16268);
	// stw r11,528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 528, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CC48"))) PPC_WEAK_FUNC(sub_8304CC48);
PPC_FUNC_IMPL(__imp__sub_8304CC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304cc88
	if (!ctx.cr6.eq) goto loc_8304CC88;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CC7C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304cc7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CC7C;
loc_8304CC88:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304cca8
	if (ctx.cr6.eq) goto loc_8304CCA8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,133
	ctx.r11.s64 = 133;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CCA8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16264);
	// stw r11,532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 532, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CCB8"))) PPC_WEAK_FUNC(sub_8304CCB8);
PPC_FUNC_IMPL(__imp__sub_8304CCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ccf8
	if (!ctx.cr6.eq) goto loc_8304CCF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CCEC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ccec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CCEC;
loc_8304CCF8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 792);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304cd18
	if (ctx.cr6.eq) goto loc_8304CD18;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,198
	ctx.r11.s64 = 198;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CD18:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16260);
	// stw r11,792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CD28"))) PPC_WEAK_FUNC(sub_8304CD28);
PPC_FUNC_IMPL(__imp__sub_8304CD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304cd68
	if (!ctx.cr6.eq) goto loc_8304CD68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CD5C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304cd5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CD5C;
loc_8304CD68:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,536(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 536);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304cd88
	if (ctx.cr6.eq) goto loc_8304CD88;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,134
	ctx.r11.s64 = 134;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CD88:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16256);
	// stw r11,536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CD98"))) PPC_WEAK_FUNC(sub_8304CD98);
PPC_FUNC_IMPL(__imp__sub_8304CD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304cdd8
	if (!ctx.cr6.eq) goto loc_8304CDD8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CDCC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304cdcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CDCC;
loc_8304CDD8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 540);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304cdf8
	if (ctx.cr6.eq) goto loc_8304CDF8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,135
	ctx.r11.s64 = 135;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CDF8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16252);
	// stw r11,540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 540, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CE08"))) PPC_WEAK_FUNC(sub_8304CE08);
PPC_FUNC_IMPL(__imp__sub_8304CE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ce48
	if (!ctx.cr6.eq) goto loc_8304CE48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CE3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ce3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CE3C;
loc_8304CE48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 544);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ce68
	if (ctx.cr6.eq) goto loc_8304CE68;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,136
	ctx.r11.s64 = 136;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CE68:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16248);
	// stw r11,544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CE78"))) PPC_WEAK_FUNC(sub_8304CE78);
PPC_FUNC_IMPL(__imp__sub_8304CE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ceb8
	if (!ctx.cr6.eq) goto loc_8304CEB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CEAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ceac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CEAC;
loc_8304CEB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 548);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ced8
	if (ctx.cr6.eq) goto loc_8304CED8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,137
	ctx.r11.s64 = 137;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CED8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16244);
	// stw r11,548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 548, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CEE8"))) PPC_WEAK_FUNC(sub_8304CEE8);
PPC_FUNC_IMPL(__imp__sub_8304CEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304cf28
	if (!ctx.cr6.eq) goto loc_8304CF28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CF1C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304cf1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CF1C;
loc_8304CF28:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 552);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304cf48
	if (ctx.cr6.eq) goto loc_8304CF48;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,138
	ctx.r11.s64 = 138;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CF48:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16240);
	// stw r11,552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 552, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CF58"))) PPC_WEAK_FUNC(sub_8304CF58);
PPC_FUNC_IMPL(__imp__sub_8304CF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304cf98
	if (!ctx.cr6.eq) goto loc_8304CF98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CF8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304cf8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CF8C;
loc_8304CF98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304cfb8
	if (ctx.cr6.eq) goto loc_8304CFB8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,139
	ctx.r11.s64 = 139;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304CFB8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16236);
	// stw r11,556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304CFC8"))) PPC_WEAK_FUNC(sub_8304CFC8);
PPC_FUNC_IMPL(__imp__sub_8304CFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d008
	if (!ctx.cr6.eq) goto loc_8304D008;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304CFFC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304cffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304CFFC;
loc_8304D008:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d028
	if (ctx.cr6.eq) goto loc_8304D028;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,140
	ctx.r11.s64 = 140;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D028:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16232);
	// stw r11,560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 560, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D038"))) PPC_WEAK_FUNC(sub_8304D038);
PPC_FUNC_IMPL(__imp__sub_8304D038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d078
	if (!ctx.cr6.eq) goto loc_8304D078;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D06C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d06c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D06C;
loc_8304D078:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 564);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d098
	if (ctx.cr6.eq) goto loc_8304D098;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,141
	ctx.r11.s64 = 141;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D098:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16228);
	// stw r11,564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D0A8"))) PPC_WEAK_FUNC(sub_8304D0A8);
PPC_FUNC_IMPL(__imp__sub_8304D0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d0e8
	if (!ctx.cr6.eq) goto loc_8304D0E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D0DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d0dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D0DC;
loc_8304D0E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d108
	if (ctx.cr6.eq) goto loc_8304D108;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,196
	ctx.r11.s64 = 196;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D108:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16224);
	// stw r11,784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 784, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D118"))) PPC_WEAK_FUNC(sub_8304D118);
PPC_FUNC_IMPL(__imp__sub_8304D118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d158
	if (!ctx.cr6.eq) goto loc_8304D158;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D14C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d14c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D14C;
loc_8304D158:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d178
	if (ctx.cr6.eq) goto loc_8304D178;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,143
	ctx.r11.s64 = 143;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D178:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16220);
	// stw r11,572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D188"))) PPC_WEAK_FUNC(sub_8304D188);
PPC_FUNC_IMPL(__imp__sub_8304D188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d1c8
	if (!ctx.cr6.eq) goto loc_8304D1C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D1BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d1bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D1BC;
loc_8304D1C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 576);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d1e8
	if (ctx.cr6.eq) goto loc_8304D1E8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,144
	ctx.r11.s64 = 144;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D1E8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16216);
	// stw r11,576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D1F8"))) PPC_WEAK_FUNC(sub_8304D1F8);
PPC_FUNC_IMPL(__imp__sub_8304D1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d238
	if (!ctx.cr6.eq) goto loc_8304D238;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D22C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d22c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D22C;
loc_8304D238:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 580);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d258
	if (ctx.cr6.eq) goto loc_8304D258;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,145
	ctx.r11.s64 = 145;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D258:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16212);
	// stw r11,580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D268"))) PPC_WEAK_FUNC(sub_8304D268);
PPC_FUNC_IMPL(__imp__sub_8304D268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d2a8
	if (!ctx.cr6.eq) goto loc_8304D2A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D29C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d29c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D29C;
loc_8304D2A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 584);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d2c8
	if (ctx.cr6.eq) goto loc_8304D2C8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,146
	ctx.r11.s64 = 146;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D2C8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16208);
	// stw r11,584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D2D8"))) PPC_WEAK_FUNC(sub_8304D2D8);
PPC_FUNC_IMPL(__imp__sub_8304D2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d318
	if (!ctx.cr6.eq) goto loc_8304D318;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D30C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d30c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D30C;
loc_8304D318:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,588(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 588);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d338
	if (ctx.cr6.eq) goto loc_8304D338;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,147
	ctx.r11.s64 = 147;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D338:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16204);
	// stw r11,588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D348"))) PPC_WEAK_FUNC(sub_8304D348);
PPC_FUNC_IMPL(__imp__sub_8304D348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d388
	if (!ctx.cr6.eq) goto loc_8304D388;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D37C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d37c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D37C;
loc_8304D388:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 592);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d3a8
	if (ctx.cr6.eq) goto loc_8304D3A8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,148
	ctx.r11.s64 = 148;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D3A8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16200);
	// stw r11,592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D3B8"))) PPC_WEAK_FUNC(sub_8304D3B8);
PPC_FUNC_IMPL(__imp__sub_8304D3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d3f8
	if (!ctx.cr6.eq) goto loc_8304D3F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D3EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d3ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D3EC;
loc_8304D3F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 596);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d418
	if (ctx.cr6.eq) goto loc_8304D418;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,149
	ctx.r11.s64 = 149;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D418:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16196);
	// stw r11,596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 596, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D428"))) PPC_WEAK_FUNC(sub_8304D428);
PPC_FUNC_IMPL(__imp__sub_8304D428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d468
	if (!ctx.cr6.eq) goto loc_8304D468;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D45C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d45c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D45C;
loc_8304D468:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 600);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d488
	if (ctx.cr6.eq) goto loc_8304D488;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,150
	ctx.r11.s64 = 150;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D488:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16192);
	// stw r11,600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D498"))) PPC_WEAK_FUNC(sub_8304D498);
PPC_FUNC_IMPL(__imp__sub_8304D498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d4d8
	if (!ctx.cr6.eq) goto loc_8304D4D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D4CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d4cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D4CC;
loc_8304D4D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,604(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 604);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d4f8
	if (ctx.cr6.eq) goto loc_8304D4F8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,151
	ctx.r11.s64 = 151;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D4F8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16188);
	// stw r11,604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D508"))) PPC_WEAK_FUNC(sub_8304D508);
PPC_FUNC_IMPL(__imp__sub_8304D508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d548
	if (!ctx.cr6.eq) goto loc_8304D548;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D53C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d53c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D53C;
loc_8304D548:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 608);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d568
	if (ctx.cr6.eq) goto loc_8304D568;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,152
	ctx.r11.s64 = 152;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D568:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16184);
	// stw r11,608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D578"))) PPC_WEAK_FUNC(sub_8304D578);
PPC_FUNC_IMPL(__imp__sub_8304D578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d5b8
	if (!ctx.cr6.eq) goto loc_8304D5B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D5AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d5ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D5AC;
loc_8304D5B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,612(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 612);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d5d8
	if (ctx.cr6.eq) goto loc_8304D5D8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,153
	ctx.r11.s64 = 153;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D5D8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16180);
	// stw r11,612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 612, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D5E8"))) PPC_WEAK_FUNC(sub_8304D5E8);
PPC_FUNC_IMPL(__imp__sub_8304D5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d628
	if (!ctx.cr6.eq) goto loc_8304D628;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D61C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D61C;
loc_8304D628:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 616);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d648
	if (ctx.cr6.eq) goto loc_8304D648;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,154
	ctx.r11.s64 = 154;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D648:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16176);
	// stw r11,616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 616, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D658"))) PPC_WEAK_FUNC(sub_8304D658);
PPC_FUNC_IMPL(__imp__sub_8304D658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d698
	if (!ctx.cr6.eq) goto loc_8304D698;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D68C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d68c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D68C;
loc_8304D698:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d6b8
	if (ctx.cr6.eq) goto loc_8304D6B8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,155
	ctx.r11.s64 = 155;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D6B8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16172);
	// stw r11,620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D6C8"))) PPC_WEAK_FUNC(sub_8304D6C8);
PPC_FUNC_IMPL(__imp__sub_8304D6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d708
	if (!ctx.cr6.eq) goto loc_8304D708;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D6FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d6fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D6FC;
loc_8304D708:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 624);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d728
	if (ctx.cr6.eq) goto loc_8304D728;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,156
	ctx.r11.s64 = 156;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D728:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16168);
	// stw r11,624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 624, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D738"))) PPC_WEAK_FUNC(sub_8304D738);
PPC_FUNC_IMPL(__imp__sub_8304D738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d778
	if (!ctx.cr6.eq) goto loc_8304D778;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D76C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D76C;
loc_8304D778:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,628(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 628);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d798
	if (ctx.cr6.eq) goto loc_8304D798;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,157
	ctx.r11.s64 = 157;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D798:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16164);
	// stw r11,628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D7A8"))) PPC_WEAK_FUNC(sub_8304D7A8);
PPC_FUNC_IMPL(__imp__sub_8304D7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d7e8
	if (!ctx.cr6.eq) goto loc_8304D7E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D7DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d7dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D7DC;
loc_8304D7E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 632);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d808
	if (ctx.cr6.eq) goto loc_8304D808;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,158
	ctx.r11.s64 = 158;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D808:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16160);
	// stw r11,632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D818"))) PPC_WEAK_FUNC(sub_8304D818);
PPC_FUNC_IMPL(__imp__sub_8304D818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d858
	if (!ctx.cr6.eq) goto loc_8304D858;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D84C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d84c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D84C;
loc_8304D858:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 636);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d878
	if (ctx.cr6.eq) goto loc_8304D878;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,159
	ctx.r11.s64 = 159;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D878:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16156);
	// stw r11,636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 636, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D888"))) PPC_WEAK_FUNC(sub_8304D888);
PPC_FUNC_IMPL(__imp__sub_8304D888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d8c8
	if (!ctx.cr6.eq) goto loc_8304D8C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D8BC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d8bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D8BC;
loc_8304D8C8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,640(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 640);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d8e8
	if (ctx.cr6.eq) goto loc_8304D8E8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,160
	ctx.r11.s64 = 160;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D8E8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16152);
	// stw r11,640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 640, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D8F8"))) PPC_WEAK_FUNC(sub_8304D8F8);
PPC_FUNC_IMPL(__imp__sub_8304D8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d938
	if (!ctx.cr6.eq) goto loc_8304D938;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D92C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d92c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D92C;
loc_8304D938:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,644(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 644);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d958
	if (ctx.cr6.eq) goto loc_8304D958;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,161
	ctx.r11.s64 = 161;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D958:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16148);
	// stw r11,644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D968"))) PPC_WEAK_FUNC(sub_8304D968);
PPC_FUNC_IMPL(__imp__sub_8304D968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304d9a8
	if (!ctx.cr6.eq) goto loc_8304D9A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304D99C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304d99c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304D99C;
loc_8304D9A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304d9c8
	if (ctx.cr6.eq) goto loc_8304D9C8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,162
	ctx.r11.s64 = 162;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304D9C8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16144);
	// stw r11,648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 648, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304D9D8"))) PPC_WEAK_FUNC(sub_8304D9D8);
PPC_FUNC_IMPL(__imp__sub_8304D9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304da18
	if (!ctx.cr6.eq) goto loc_8304DA18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DA0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304da0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DA0C;
loc_8304DA18:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,652(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 652);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304da38
	if (ctx.cr6.eq) goto loc_8304DA38;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,163
	ctx.r11.s64 = 163;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DA38:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16140);
	// stw r11,652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 652, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DA48"))) PPC_WEAK_FUNC(sub_8304DA48);
PPC_FUNC_IMPL(__imp__sub_8304DA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304da88
	if (!ctx.cr6.eq) goto loc_8304DA88;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DA7C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304da7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DA7C;
loc_8304DA88:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 656);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304daa8
	if (ctx.cr6.eq) goto loc_8304DAA8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,164
	ctx.r11.s64 = 164;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DAA8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16136);
	// stw r11,656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 656, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DAB8"))) PPC_WEAK_FUNC(sub_8304DAB8);
PPC_FUNC_IMPL(__imp__sub_8304DAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304daf8
	if (!ctx.cr6.eq) goto loc_8304DAF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DAEC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304daec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DAEC;
loc_8304DAF8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304db18
	if (ctx.cr6.eq) goto loc_8304DB18;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,165
	ctx.r11.s64 = 165;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DB18:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16132);
	// stw r11,660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DB28"))) PPC_WEAK_FUNC(sub_8304DB28);
PPC_FUNC_IMPL(__imp__sub_8304DB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304db68
	if (!ctx.cr6.eq) goto loc_8304DB68;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DB5C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304db5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DB5C;
loc_8304DB68:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 664);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304db88
	if (ctx.cr6.eq) goto loc_8304DB88;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,166
	ctx.r11.s64 = 166;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DB88:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16128);
	// stw r11,664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 664, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DB98"))) PPC_WEAK_FUNC(sub_8304DB98);
PPC_FUNC_IMPL(__imp__sub_8304DB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304dbd8
	if (!ctx.cr6.eq) goto loc_8304DBD8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DBCC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304dbcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DBCC;
loc_8304DBD8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,668(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304dbf8
	if (ctx.cr6.eq) goto loc_8304DBF8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,167
	ctx.r11.s64 = 167;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DBF8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16124);
	// stw r11,668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 668, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DC08"))) PPC_WEAK_FUNC(sub_8304DC08);
PPC_FUNC_IMPL(__imp__sub_8304DC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304dc48
	if (!ctx.cr6.eq) goto loc_8304DC48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DC3C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304dc3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DC3C;
loc_8304DC48:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,996(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 996);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304dc68
	if (ctx.cr6.eq) goto loc_8304DC68;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,249
	ctx.r11.s64 = 249;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DC68:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16120);
	// stw r11,996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 996, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DC78"))) PPC_WEAK_FUNC(sub_8304DC78);
PPC_FUNC_IMPL(__imp__sub_8304DC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304dcb8
	if (!ctx.cr6.eq) goto loc_8304DCB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DCAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304dcac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DCAC;
loc_8304DCB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1000);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304dcd8
	if (ctx.cr6.eq) goto loc_8304DCD8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,250
	ctx.r11.s64 = 250;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DCD8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16116);
	// stw r11,1000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1000, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DCE8"))) PPC_WEAK_FUNC(sub_8304DCE8);
PPC_FUNC_IMPL(__imp__sub_8304DCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304dd28
	if (!ctx.cr6.eq) goto loc_8304DD28;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DD1C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304dd1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DD1C;
loc_8304DD28:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,1004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1004);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304dd48
	if (ctx.cr6.eq) goto loc_8304DD48;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,251
	ctx.r11.s64 = 251;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DD48:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16112);
	// stw r11,1004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DD58"))) PPC_WEAK_FUNC(sub_8304DD58);
PPC_FUNC_IMPL(__imp__sub_8304DD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304dd98
	if (!ctx.cr6.eq) goto loc_8304DD98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DD8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304dd8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DD8C;
loc_8304DD98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,676(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 676);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ddb8
	if (ctx.cr6.eq) goto loc_8304DDB8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,169
	ctx.r11.s64 = 169;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DDB8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16108);
	// stw r11,676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 676, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DDC8"))) PPC_WEAK_FUNC(sub_8304DDC8);
PPC_FUNC_IMPL(__imp__sub_8304DDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304de08
	if (!ctx.cr6.eq) goto loc_8304DE08;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DDFC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ddfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DDFC;
loc_8304DE08:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 680);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304de28
	if (ctx.cr6.eq) goto loc_8304DE28;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,170
	ctx.r11.s64 = 170;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DE28:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16104);
	// stw r11,680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DE38"))) PPC_WEAK_FUNC(sub_8304DE38);
PPC_FUNC_IMPL(__imp__sub_8304DE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304de78
	if (!ctx.cr6.eq) goto loc_8304DE78;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DE6C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304de6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DE6C;
loc_8304DE78:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,684(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 684);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304de98
	if (ctx.cr6.eq) goto loc_8304DE98;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,171
	ctx.r11.s64 = 171;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DE98:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16100);
	// stw r11,684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 684, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DEA8"))) PPC_WEAK_FUNC(sub_8304DEA8);
PPC_FUNC_IMPL(__imp__sub_8304DEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304dee8
	if (!ctx.cr6.eq) goto loc_8304DEE8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DEDC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304dedc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DEDC;
loc_8304DEE8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 688);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304df08
	if (ctx.cr6.eq) goto loc_8304DF08;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,172
	ctx.r11.s64 = 172;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DF08:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16096);
	// stw r11,688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 688, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DF18"))) PPC_WEAK_FUNC(sub_8304DF18);
PPC_FUNC_IMPL(__imp__sub_8304DF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304df58
	if (!ctx.cr6.eq) goto loc_8304DF58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DF4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304df4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DF4C;
loc_8304DF58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,692(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 692);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304df78
	if (ctx.cr6.eq) goto loc_8304DF78;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,173
	ctx.r11.s64 = 173;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DF78:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16092);
	// stw r11,692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DF88"))) PPC_WEAK_FUNC(sub_8304DF88);
PPC_FUNC_IMPL(__imp__sub_8304DF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304dfc8
	if (!ctx.cr6.eq) goto loc_8304DFC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304DFBC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304dfbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304DFBC;
loc_8304DFC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 696);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304dfe8
	if (ctx.cr6.eq) goto loc_8304DFE8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,174
	ctx.r11.s64 = 174;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304DFE8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16088);
	// stw r11,696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 696, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304DFF8"))) PPC_WEAK_FUNC(sub_8304DFF8);
PPC_FUNC_IMPL(__imp__sub_8304DFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e038
	if (!ctx.cr6.eq) goto loc_8304E038;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E02C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e02c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E02C;
loc_8304E038:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,700(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 700);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e058
	if (ctx.cr6.eq) goto loc_8304E058;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,175
	ctx.r11.s64 = 175;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E058:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16084);
	// stw r11,700(r10)
	PPC_STORE_U32(ctx.r10.u32 + 700, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E068"))) PPC_WEAK_FUNC(sub_8304E068);
PPC_FUNC_IMPL(__imp__sub_8304E068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e0a8
	if (!ctx.cr6.eq) goto loc_8304E0A8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E09C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e09c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E09C;
loc_8304E0A8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 704);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e0c8
	if (ctx.cr6.eq) goto loc_8304E0C8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,176
	ctx.r11.s64 = 176;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E0C8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16080);
	// stw r11,704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 704, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E0D8"))) PPC_WEAK_FUNC(sub_8304E0D8);
PPC_FUNC_IMPL(__imp__sub_8304E0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e118
	if (!ctx.cr6.eq) goto loc_8304E118;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E10C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e10c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E10C;
loc_8304E118:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,708(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 708);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e138
	if (ctx.cr6.eq) goto loc_8304E138;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,177
	ctx.r11.s64 = 177;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E138:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16076);
	// stw r11,708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 708, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E148"))) PPC_WEAK_FUNC(sub_8304E148);
PPC_FUNC_IMPL(__imp__sub_8304E148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e188
	if (!ctx.cr6.eq) goto loc_8304E188;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E17C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e17c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E17C;
loc_8304E188:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 712);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e1a8
	if (ctx.cr6.eq) goto loc_8304E1A8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,178
	ctx.r11.s64 = 178;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E1A8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16072);
	// stw r11,712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E1B8"))) PPC_WEAK_FUNC(sub_8304E1B8);
PPC_FUNC_IMPL(__imp__sub_8304E1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e1f8
	if (!ctx.cr6.eq) goto loc_8304E1F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E1EC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e1ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E1EC;
loc_8304E1F8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,716(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 716);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e218
	if (ctx.cr6.eq) goto loc_8304E218;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,179
	ctx.r11.s64 = 179;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E218:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16068);
	// stw r11,716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E228"))) PPC_WEAK_FUNC(sub_8304E228);
PPC_FUNC_IMPL(__imp__sub_8304E228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e268
	if (!ctx.cr6.eq) goto loc_8304E268;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E25C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e25c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E25C;
loc_8304E268:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,720(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 720);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e288
	if (ctx.cr6.eq) goto loc_8304E288;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,180
	ctx.r11.s64 = 180;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E288:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16064);
	// stw r11,720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 720, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E298"))) PPC_WEAK_FUNC(sub_8304E298);
PPC_FUNC_IMPL(__imp__sub_8304E298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e2d8
	if (!ctx.cr6.eq) goto loc_8304E2D8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E2CC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e2cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E2CC;
loc_8304E2D8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,724(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 724);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e2f8
	if (ctx.cr6.eq) goto loc_8304E2F8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,181
	ctx.r11.s64 = 181;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E2F8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16060);
	// stw r11,724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 724, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E308"))) PPC_WEAK_FUNC(sub_8304E308);
PPC_FUNC_IMPL(__imp__sub_8304E308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e348
	if (!ctx.cr6.eq) goto loc_8304E348;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E33C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e33c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E33C;
loc_8304E348:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 840);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e368
	if (ctx.cr6.eq) goto loc_8304E368;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,210
	ctx.r11.s64 = 210;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E368:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16056);
	// stw r11,840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 840, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E378"))) PPC_WEAK_FUNC(sub_8304E378);
PPC_FUNC_IMPL(__imp__sub_8304E378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e3b8
	if (!ctx.cr6.eq) goto loc_8304E3B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E3AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e3ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E3AC;
loc_8304E3B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 728);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e3d8
	if (ctx.cr6.eq) goto loc_8304E3D8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,182
	ctx.r11.s64 = 182;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E3D8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16052);
	// stw r11,728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E3E8"))) PPC_WEAK_FUNC(sub_8304E3E8);
PPC_FUNC_IMPL(__imp__sub_8304E3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e428
	if (!ctx.cr6.eq) goto loc_8304E428;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E41C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e41c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E41C;
loc_8304E428:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,732(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 732);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e448
	if (ctx.cr6.eq) goto loc_8304E448;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,183
	ctx.r11.s64 = 183;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E448:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16048);
	// stw r11,732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 732, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E458"))) PPC_WEAK_FUNC(sub_8304E458);
PPC_FUNC_IMPL(__imp__sub_8304E458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e498
	if (!ctx.cr6.eq) goto loc_8304E498;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E48C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e48c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E48C;
loc_8304E498:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,736(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 736);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e4b8
	if (ctx.cr6.eq) goto loc_8304E4B8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,184
	ctx.r11.s64 = 184;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E4B8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16044);
	// stw r11,736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 736, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E4C8"))) PPC_WEAK_FUNC(sub_8304E4C8);
PPC_FUNC_IMPL(__imp__sub_8304E4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e508
	if (!ctx.cr6.eq) goto loc_8304E508;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E4FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e4fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E4FC;
loc_8304E508:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,740(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 740);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e528
	if (ctx.cr6.eq) goto loc_8304E528;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,185
	ctx.r11.s64 = 185;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E528:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16040);
	// stw r11,740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 740, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E538"))) PPC_WEAK_FUNC(sub_8304E538);
PPC_FUNC_IMPL(__imp__sub_8304E538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e578
	if (!ctx.cr6.eq) goto loc_8304E578;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E56C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e56c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E56C;
loc_8304E578:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 744);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e598
	if (ctx.cr6.eq) goto loc_8304E598;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,186
	ctx.r11.s64 = 186;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E598:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16036);
	// stw r11,744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 744, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E5A8"))) PPC_WEAK_FUNC(sub_8304E5A8);
PPC_FUNC_IMPL(__imp__sub_8304E5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e5e8
	if (!ctx.cr6.eq) goto loc_8304E5E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E5DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e5dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E5DC;
loc_8304E5E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,748(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 748);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e608
	if (ctx.cr6.eq) goto loc_8304E608;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,187
	ctx.r11.s64 = 187;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E608:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16032);
	// stw r11,748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 748, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E618"))) PPC_WEAK_FUNC(sub_8304E618);
PPC_FUNC_IMPL(__imp__sub_8304E618) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304E648:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E658"))) PPC_WEAK_FUNC(sub_8304E658);
PPC_FUNC_IMPL(__imp__sub_8304E658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e698
	if (!ctx.cr6.eq) goto loc_8304E698;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E68C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e68c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E68C;
loc_8304E698:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 752);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e6b8
	if (ctx.cr6.eq) goto loc_8304E6B8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,188
	ctx.r11.s64 = 188;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E6B8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16024);
	// stw r11,752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 752, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E6C8"))) PPC_WEAK_FUNC(sub_8304E6C8);
PPC_FUNC_IMPL(__imp__sub_8304E6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304E6F8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e6f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E6F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E708"))) PPC_WEAK_FUNC(sub_8304E708);
PPC_FUNC_IMPL(__imp__sub_8304E708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e748
	if (!ctx.cr6.eq) goto loc_8304E748;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E73C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e73c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E73C;
loc_8304E748:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,756(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 756);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e768
	if (ctx.cr6.eq) goto loc_8304E768;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,189
	ctx.r11.s64 = 189;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E768:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16016);
	// stw r11,756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 756, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E778"))) PPC_WEAK_FUNC(sub_8304E778);
PPC_FUNC_IMPL(__imp__sub_8304E778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e7b8
	if (!ctx.cr6.eq) goto loc_8304E7B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E7AC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e7ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E7AC;
loc_8304E7B8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 760);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e7d8
	if (ctx.cr6.eq) goto loc_8304E7D8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,190
	ctx.r11.s64 = 190;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E7D8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16012);
	// stw r11,760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 760, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E7E8"))) PPC_WEAK_FUNC(sub_8304E7E8);
PPC_FUNC_IMPL(__imp__sub_8304E7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e828
	if (!ctx.cr6.eq) goto loc_8304E828;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E81C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e81c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E81C;
loc_8304E828:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 764);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e848
	if (ctx.cr6.eq) goto loc_8304E848;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,191
	ctx.r11.s64 = 191;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E848:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16008);
	// stw r11,764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 764, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E858"))) PPC_WEAK_FUNC(sub_8304E858);
PPC_FUNC_IMPL(__imp__sub_8304E858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e898
	if (!ctx.cr6.eq) goto loc_8304E898;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E88C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e88c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E88C;
loc_8304E898:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,768(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 768);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e8b8
	if (ctx.cr6.eq) goto loc_8304E8B8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,192
	ctx.r11.s64 = 192;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E8B8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16004);
	// stw r11,768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 768, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E8C8"))) PPC_WEAK_FUNC(sub_8304E8C8);
PPC_FUNC_IMPL(__imp__sub_8304E8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e908
	if (!ctx.cr6.eq) goto loc_8304E908;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E8FC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e8fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E8FC;
loc_8304E908:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 772);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e928
	if (ctx.cr6.eq) goto loc_8304E928;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,193
	ctx.r11.s64 = 193;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E928:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-16000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16000);
	// stw r11,772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 772, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E938"))) PPC_WEAK_FUNC(sub_8304E938);
PPC_FUNC_IMPL(__imp__sub_8304E938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e978
	if (!ctx.cr6.eq) goto loc_8304E978;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E96C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e96c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E96C;
loc_8304E978:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,776(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 776);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304e998
	if (ctx.cr6.eq) goto loc_8304E998;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,194
	ctx.r11.s64 = 194;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304E998:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15996);
	// stw r11,776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 776, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304E9A8"))) PPC_WEAK_FUNC(sub_8304E9A8);
PPC_FUNC_IMPL(__imp__sub_8304E9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304e9e8
	if (!ctx.cr6.eq) goto loc_8304E9E8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304E9DC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304e9dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304E9DC;
loc_8304E9E8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 780);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ea08
	if (ctx.cr6.eq) goto loc_8304EA08;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,195
	ctx.r11.s64 = 195;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304EA08:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15992);
	// stw r11,780(r10)
	PPC_STORE_U32(ctx.r10.u32 + 780, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EA18"))) PPC_WEAK_FUNC(sub_8304EA18);
PPC_FUNC_IMPL(__imp__sub_8304EA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ea58
	if (!ctx.cr6.eq) goto loc_8304EA58;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304EA4C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ea4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EA4C;
loc_8304EA58:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 976);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ea78
	if (ctx.cr6.eq) goto loc_8304EA78;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,244
	ctx.r11.s64 = 244;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304EA78:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15988);
	// stw r11,976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 976, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EA88"))) PPC_WEAK_FUNC(sub_8304EA88);
PPC_FUNC_IMPL(__imp__sub_8304EA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304eac8
	if (!ctx.cr6.eq) goto loc_8304EAC8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304EABC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304eabc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EABC;
loc_8304EAC8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,980(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 980);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304eae8
	if (ctx.cr6.eq) goto loc_8304EAE8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,245
	ctx.r11.s64 = 245;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304EAE8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15984);
	// stw r11,980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 980, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EAF8"))) PPC_WEAK_FUNC(sub_8304EAF8);
PPC_FUNC_IMPL(__imp__sub_8304EAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304eb38
	if (!ctx.cr6.eq) goto loc_8304EB38;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304EB2C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304eb2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EB2C;
loc_8304EB38:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304eb58
	if (ctx.cr6.eq) goto loc_8304EB58;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,246
	ctx.r11.s64 = 246;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304EB58:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15980);
	// stw r11,984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 984, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EB68"))) PPC_WEAK_FUNC(sub_8304EB68);
PPC_FUNC_IMPL(__imp__sub_8304EB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304eba8
	if (!ctx.cr6.eq) goto loc_8304EBA8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304EB9C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304eb9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EB9C;
loc_8304EBA8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,988(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 988);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ebc8
	if (ctx.cr6.eq) goto loc_8304EBC8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,247
	ctx.r11.s64 = 247;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304EBC8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15976);
	// stw r11,988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 988, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EBD8"))) PPC_WEAK_FUNC(sub_8304EBD8);
PPC_FUNC_IMPL(__imp__sub_8304EBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304EC08:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ec08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EC08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EC18"))) PPC_WEAK_FUNC(sub_8304EC18);
PPC_FUNC_IMPL(__imp__sub_8304EC18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304EC48:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ec48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EC48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EC58"))) PPC_WEAK_FUNC(sub_8304EC58);
PPC_FUNC_IMPL(__imp__sub_8304EC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ec98
	if (!ctx.cr6.eq) goto loc_8304EC98;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304EC8C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ec8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EC8C;
loc_8304EC98:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ecb8
	if (ctx.cr6.eq) goto loc_8304ECB8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304ECB8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15964);
	// stw r11,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304ECC8"))) PPC_WEAK_FUNC(sub_8304ECC8);
PPC_FUNC_IMPL(__imp__sub_8304ECC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-16968
	ctx.r10.s64 = ctx.r10.s64 + -16968;
	// bne cr6,0x8304ed08
	if (!ctx.cr6.eq) goto loc_8304ED08;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304ECFC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ecfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304ECFC;
loc_8304ED08:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304ed28
	if (ctx.cr6.eq) goto loc_8304ED28;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
loc_8304ED28:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15960);
	// stw r11,140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304ED38"))) PPC_WEAK_FUNC(sub_8304ED38);
PPC_FUNC_IMPL(__imp__sub_8304ED38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304ED68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ed68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304ED68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304ED78"))) PPC_WEAK_FUNC(sub_8304ED78);
PPC_FUNC_IMPL(__imp__sub_8304ED78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304EDA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304eda8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EDA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EDB8"))) PPC_WEAK_FUNC(sub_8304EDB8);
PPC_FUNC_IMPL(__imp__sub_8304EDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304EDE8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ede8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EDE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EDF8"))) PPC_WEAK_FUNC(sub_8304EDF8);
PPC_FUNC_IMPL(__imp__sub_8304EDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304EE28:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ee28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EE28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EE38"))) PPC_WEAK_FUNC(sub_8304EE38);
PPC_FUNC_IMPL(__imp__sub_8304EE38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lwz r11,10568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r9,-16344
	ctx.r9.s64 = ctx.r9.s64 + -16344;
	// addi r11,r11,-16968
	ctx.r11.s64 = ctx.r11.s64 + -16968;
	// stw r10,10568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10568, ctx.r10.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8304EE68:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304ee68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EE68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8304EE78"))) PPC_WEAK_FUNC(sub_8304EE78);
PPC_FUNC_IMPL(__imp__sub_8304EE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lwz r10,10572(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10572);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,-17992
	ctx.r10.s64 = ctx.r10.s64 + -17992;
	// bne cr6,0x8304eeb8
	if (!ctx.cr6.eq) goto loc_8304EEB8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r8,r8,-16344
	ctx.r8.s64 = ctx.r8.s64 + -16344;
	// stw r9,10572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10572, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8304EEAC:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8304eeac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8304EEAC;
loc_8304EEB8:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r11,-16344
	ctx.r9.s64 = ctx.r11.s64 + -16344;
	// lwz r11,308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8304eed8
	if (ctx.cr6.eq) goto loc_8304EED8;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// li r11,77
	ctx.r11.s64 = 77;
	// stw r11,-504(r9)
	PPC_STORE_U32(ctx.r9.u32 + -504, ctx.r11.u32);
loc_8304EED8:
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lwz r11,-15940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15940);
	// stw r11,308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 308, ctx.r11.u32);
	// blr 
	return;
}

