#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831200B8"))) PPC_WEAK_FUNC(sub_831200B8);
PPC_FUNC_IMPL(__imp__sub_831200B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19176
	ctx.r3.s64 = ctx.r11.s64 + -19176;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831200C8"))) PPC_WEAK_FUNC(sub_831200C8);
PPC_FUNC_IMPL(__imp__sub_831200C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19160
	ctx.r3.s64 = ctx.r11.s64 + -19160;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831200D8"))) PPC_WEAK_FUNC(sub_831200D8);
PPC_FUNC_IMPL(__imp__sub_831200D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19144
	ctx.r3.s64 = ctx.r11.s64 + -19144;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831200E8"))) PPC_WEAK_FUNC(sub_831200E8);
PPC_FUNC_IMPL(__imp__sub_831200E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-19128
	ctx.r3.s64 = ctx.r11.s64 + -19128;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831200F8"))) PPC_WEAK_FUNC(sub_831200F8);
PPC_FUNC_IMPL(__imp__sub_831200F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-31971
	ctx.r10.s64 = -2095251456;
	// addi r11,r11,6736
	ctx.r11.s64 = ctx.r11.s64 + 6736;
	// stw r11,19688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19688, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120110"))) PPC_WEAK_FUNC(sub_83120110);
PPC_FUNC_IMPL(__imp__sub_83120110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,20192
	ctx.r11.s64 = ctx.r11.s64 + 20192;
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

__attribute__((alias("__imp__sub_83120140"))) PPC_WEAK_FUNC(sub_83120140);
PPC_FUNC_IMPL(__imp__sub_83120140) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,20224
	ctx.r11.s64 = ctx.r11.s64 + 20224;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120170"))) PPC_WEAK_FUNC(sub_83120170);
PPC_FUNC_IMPL(__imp__sub_83120170) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,20240
	ctx.r11.s64 = ctx.r11.s64 + 20240;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831201B8"))) PPC_WEAK_FUNC(sub_831201B8);
PPC_FUNC_IMPL(__imp__sub_831201B8) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,20208
	ctx.r11.s64 = ctx.r11.s64 + 20208;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120200"))) PPC_WEAK_FUNC(sub_83120200);
PPC_FUNC_IMPL(__imp__sub_83120200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,23536
	ctx.r11.s64 = ctx.r11.s64 + 23536;
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

__attribute__((alias("__imp__sub_83120230"))) PPC_WEAK_FUNC(sub_83120230);
PPC_FUNC_IMPL(__imp__sub_83120230) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,23584
	ctx.r11.s64 = ctx.r11.s64 + 23584;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120260"))) PPC_WEAK_FUNC(sub_83120260);
PPC_FUNC_IMPL(__imp__sub_83120260) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,23600
	ctx.r11.s64 = ctx.r11.s64 + 23600;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831202A8"))) PPC_WEAK_FUNC(sub_831202A8);
PPC_FUNC_IMPL(__imp__sub_831202A8) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,23552
	ctx.r11.s64 = ctx.r11.s64 + 23552;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831202F0"))) PPC_WEAK_FUNC(sub_831202F0);
PPC_FUNC_IMPL(__imp__sub_831202F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,-12952
	ctx.r11.s64 = ctx.r11.s64 + -12952;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83157d34
	ctx.lr = 0x8312030C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18992
	ctx.r3.s64 = ctx.r11.s64 + -18992;
	// bl 0x82e29708
	ctx.lr = 0x83120318;
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

__attribute__((alias("__imp__sub_83120328"))) PPC_WEAK_FUNC(sub_83120328);
PPC_FUNC_IMPL(__imp__sub_83120328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,22484
	ctx.r3.s64 = ctx.r11.s64 + 22484;
	// bl 0x82461b58
	ctx.lr = 0x83120344;
	sub_82461B58(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18944
	ctx.r3.s64 = ctx.r11.s64 + -18944;
	// bl 0x82e29708
	ctx.lr = 0x83120350;
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

__attribute__((alias("__imp__sub_83120360"))) PPC_WEAK_FUNC(sub_83120360);
PPC_FUNC_IMPL(__imp__sub_83120360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,23524
	ctx.r3.s64 = ctx.r11.s64 + 23524;
	// bl 0x82463ab0
	ctx.lr = 0x83120378;
	sub_82463AB0(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18920
	ctx.r3.s64 = ctx.r11.s64 + -18920;
	// bl 0x82e29708
	ctx.lr = 0x83120384;
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

__attribute__((alias("__imp__sub_83120398"))) PPC_WEAK_FUNC(sub_83120398);
PPC_FUNC_IMPL(__imp__sub_83120398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18800
	ctx.r3.s64 = ctx.r11.s64 + -18800;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831203A8"))) PPC_WEAK_FUNC(sub_831203A8);
PPC_FUNC_IMPL(__imp__sub_831203A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,-12868
	ctx.r11.s64 = ctx.r11.s64 + -12868;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x83157d34
	ctx.lr = 0x831203C4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18784
	ctx.r3.s64 = ctx.r11.s64 + -18784;
	// bl 0x82e29708
	ctx.lr = 0x831203D0;
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

__attribute__((alias("__imp__sub_831203E0"))) PPC_WEAK_FUNC(sub_831203E0);
PPC_FUNC_IMPL(__imp__sub_831203E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,23616
	ctx.r3.s64 = ctx.r11.s64 + 23616;
	// bl 0x8254aa78
	ctx.lr = 0x831203F8;
	sub_8254AA78(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18896
	ctx.r3.s64 = ctx.r11.s64 + -18896;
	// bl 0x82e29708
	ctx.lr = 0x83120404;
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

__attribute__((alias("__imp__sub_83120418"))) PPC_WEAK_FUNC(sub_83120418);
PPC_FUNC_IMPL(__imp__sub_83120418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18968
	ctx.r3.s64 = ctx.r11.s64 + -18968;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83120428"))) PPC_WEAK_FUNC(sub_83120428);
PPC_FUNC_IMPL(__imp__sub_83120428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,23568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23568, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120438"))) PPC_WEAK_FUNC(sub_83120438);
PPC_FUNC_IMPL(__imp__sub_83120438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,22436
	ctx.r11.s64 = ctx.r11.s64 + 22436;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-18880
	ctx.r3.s64 = ctx.r10.s64 + -18880;
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83120458"))) PPC_WEAK_FUNC(sub_83120458);
PPC_FUNC_IMPL(__imp__sub_83120458) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r31,r11,-12808
	ctx.r31.s64 = ctx.r11.s64 + -12808;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0788
	ctx.lr = 0x83120480;
	sub_822E0788(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bge cr6,0x831204a4
	if (!ctx.cr6.lt) goto loc_831204A4;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x822e0788
	ctx.lr = 0x831204A4;
	sub_822E0788(ctx, base);
loc_831204A4:
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18864
	ctx.r3.s64 = ctx.r11.s64 + -18864;
	// bl 0x82e29708
	ctx.lr = 0x831204B0;
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

__attribute__((alias("__imp__sub_831204C8"))) PPC_WEAK_FUNC(sub_831204C8);
PPC_FUNC_IMPL(__imp__sub_831204C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,24320
	ctx.r11.s64 = ctx.r11.s64 + 24320;
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

__attribute__((alias("__imp__sub_831204F8"))) PPC_WEAK_FUNC(sub_831204F8);
PPC_FUNC_IMPL(__imp__sub_831204F8) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,24368
	ctx.r11.s64 = ctx.r11.s64 + 24368;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120528"))) PPC_WEAK_FUNC(sub_83120528);
PPC_FUNC_IMPL(__imp__sub_83120528) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,24384
	ctx.r11.s64 = ctx.r11.s64 + 24384;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120570"))) PPC_WEAK_FUNC(sub_83120570);
PPC_FUNC_IMPL(__imp__sub_83120570) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,24336
	ctx.r11.s64 = ctx.r11.s64 + 24336;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831205B8"))) PPC_WEAK_FUNC(sub_831205B8);
PPC_FUNC_IMPL(__imp__sub_831205B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-12764
	ctx.r4.s64 = ctx.r11.s64 + -12764;
	// bl 0x82429b48
	ctx.lr = 0x831205D4;
	sub_82429B48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stb r3,24400(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24400, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831205F0"))) PPC_WEAK_FUNC(sub_831205F0);
PPC_FUNC_IMPL(__imp__sub_831205F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-12760
	ctx.r4.s64 = ctx.r11.s64 + -12760;
	// bl 0x82429b48
	ctx.lr = 0x8312060C;
	sub_82429B48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stb r3,24319(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24319, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120628"))) PPC_WEAK_FUNC(sub_83120628);
PPC_FUNC_IMPL(__imp__sub_83120628) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-12756
	ctx.r4.s64 = ctx.r11.s64 + -12756;
	// bl 0x82429b48
	ctx.lr = 0x83120644;
	sub_82429B48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stb r3,24281(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24281, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120660"))) PPC_WEAK_FUNC(sub_83120660);
PPC_FUNC_IMPL(__imp__sub_83120660) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-12752
	ctx.r4.s64 = ctx.r11.s64 + -12752;
	// bl 0x82429b48
	ctx.lr = 0x8312067C;
	sub_82429B48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stb r3,24401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24401, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120698"))) PPC_WEAK_FUNC(sub_83120698);
PPC_FUNC_IMPL(__imp__sub_83120698) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-12748
	ctx.r4.s64 = ctx.r11.s64 + -12748;
	// bl 0x82429b48
	ctx.lr = 0x831206B4;
	sub_82429B48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stb r3,24318(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24318, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831206D0"))) PPC_WEAK_FUNC(sub_831206D0);
PPC_FUNC_IMPL(__imp__sub_831206D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-12744
	ctx.r4.s64 = ctx.r11.s64 + -12744;
	// bl 0x82429b48
	ctx.lr = 0x831206EC;
	sub_82429B48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stb r3,24282(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24282, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120708"))) PPC_WEAK_FUNC(sub_83120708);
PPC_FUNC_IMPL(__imp__sub_83120708) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-12740
	ctx.r4.s64 = ctx.r11.s64 + -12740;
	// bl 0x82429b48
	ctx.lr = 0x83120724;
	sub_82429B48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stb r3,24283(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24283, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120740"))) PPC_WEAK_FUNC(sub_83120740);
PPC_FUNC_IMPL(__imp__sub_83120740) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-12736
	ctx.r4.s64 = ctx.r11.s64 + -12736;
	// bl 0x82429b48
	ctx.lr = 0x8312075C;
	sub_82429B48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stb r3,24316(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24316, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120778"))) PPC_WEAK_FUNC(sub_83120778);
PPC_FUNC_IMPL(__imp__sub_83120778) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-12732
	ctx.r4.s64 = ctx.r11.s64 + -12732;
	// bl 0x82429b48
	ctx.lr = 0x83120794;
	sub_82429B48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stb r3,24280(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24280, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831207B0"))) PPC_WEAK_FUNC(sub_831207B0);
PPC_FUNC_IMPL(__imp__sub_831207B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-12728
	ctx.r4.s64 = ctx.r11.s64 + -12728;
	// bl 0x82429b48
	ctx.lr = 0x831207CC;
	sub_82429B48(ctx, base);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stb r3,24317(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24317, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831207E8"))) PPC_WEAK_FUNC(sub_831207E8);
PPC_FUNC_IMPL(__imp__sub_831207E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,15888
	ctx.r11.s64 = ctx.r11.s64 + 15888;
	// addi r10,r10,26768
	ctx.r10.s64 = ctx.r10.s64 + 26768;
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// addi r11,r11,-12480
	ctx.r11.s64 = ctx.r11.s64 + -12480;
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

__attribute__((alias("__imp__sub_83120838"))) PPC_WEAK_FUNC(sub_83120838);
PPC_FUNC_IMPL(__imp__sub_83120838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,24784
	ctx.r11.s64 = ctx.r11.s64 + 24784;
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

__attribute__((alias("__imp__sub_83120868"))) PPC_WEAK_FUNC(sub_83120868);
PPC_FUNC_IMPL(__imp__sub_83120868) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,25024
	ctx.r11.s64 = ctx.r11.s64 + 25024;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120898"))) PPC_WEAK_FUNC(sub_83120898);
PPC_FUNC_IMPL(__imp__sub_83120898) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,25040
	ctx.r11.s64 = ctx.r11.s64 + 25040;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831208E0"))) PPC_WEAK_FUNC(sub_831208E0);
PPC_FUNC_IMPL(__imp__sub_831208E0) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,24800
	ctx.r11.s64 = ctx.r11.s64 + 24800;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83120928"))) PPC_WEAK_FUNC(sub_83120928);
PPC_FUNC_IMPL(__imp__sub_83120928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8416
	ctx.r5.s64 = ctx.r10.s64 + 8416;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8388
	ctx.r4.s64 = ctx.r10.s64 + 8388;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,24688
	ctx.r31.s64 = ctx.r10.s64 + 24688;
	// addi r10,r11,-23128
	ctx.r10.s64 = ctx.r11.s64 + -23128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83120980;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-15680
	ctx.r3.s64 = ctx.r8.s64 + -15680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,17400
	ctx.r11.s64 = ctx.r9.s64 + 17400;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831209B0;
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

__attribute__((alias("__imp__sub_831209C8"))) PPC_WEAK_FUNC(sub_831209C8);
PPC_FUNC_IMPL(__imp__sub_831209C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8480
	ctx.r5.s64 = ctx.r10.s64 + 8480;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8444
	ctx.r4.s64 = ctx.r10.s64 + 8444;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,24596
	ctx.r31.s64 = ctx.r10.s64 + 24596;
	// addi r10,r11,-30120
	ctx.r10.s64 = ctx.r11.s64 + -30120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83120A20;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-17136
	ctx.r3.s64 = ctx.r8.s64 + -17136;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,17768
	ctx.r11.s64 = ctx.r9.s64 + 17768;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13976
	ctx.r11.s64 = ctx.r10.s64 + 13976;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83120A50;
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

__attribute__((alias("__imp__sub_83120A68"))) PPC_WEAK_FUNC(sub_83120A68);
PPC_FUNC_IMPL(__imp__sub_83120A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8544
	ctx.r5.s64 = ctx.r10.s64 + 8544;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8516
	ctx.r4.s64 = ctx.r10.s64 + 8516;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,24496
	ctx.r31.s64 = ctx.r10.s64 + 24496;
	// addi r10,r11,-30120
	ctx.r10.s64 = ctx.r11.s64 + -30120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83120AC0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-17056
	ctx.r3.s64 = ctx.r8.s64 + -17056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,17960
	ctx.r11.s64 = ctx.r9.s64 + 17960;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83120AF0;
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

__attribute__((alias("__imp__sub_83120B08"))) PPC_WEAK_FUNC(sub_83120B08);
PPC_FUNC_IMPL(__imp__sub_83120B08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-12304
	ctx.r3.s64 = ctx.r11.s64 + -12304;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x825f48b8
	ctx.lr = 0x83120B2C;
	sub_825F48B8(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-17216
	ctx.r3.s64 = ctx.r11.s64 + -17216;
	// bl 0x82e29708
	ctx.lr = 0x83120B38;
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

__attribute__((alias("__imp__sub_83120B48"))) PPC_WEAK_FUNC(sub_83120B48);
PPC_FUNC_IMPL(__imp__sub_83120B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18704
	ctx.r3.s64 = ctx.r11.s64 + -18704;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83120B58"))) PPC_WEAK_FUNC(sub_83120B58);
PPC_FUNC_IMPL(__imp__sub_83120B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18688
	ctx.r3.s64 = ctx.r11.s64 + -18688;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83120B68"))) PPC_WEAK_FUNC(sub_83120B68);
PPC_FUNC_IMPL(__imp__sub_83120B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-2152
	ctx.r9.s64 = ctx.r10.s64 + -2152;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,403
	ctx.r8.s64 = 403;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8596
	ctx.r5.s64 = ctx.r10.s64 + 8596;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,8572
	ctx.r4.s64 = ctx.r10.s64 + 8572;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,26516
	ctx.r31.s64 = ctx.r10.s64 + 26516;
	// addi r10,r11,-28744
	ctx.r10.s64 = ctx.r11.s64 + -28744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83120BC0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-16976
	ctx.r3.s64 = ctx.r8.s64 + -16976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,28768
	ctx.r11.s64 = ctx.r9.s64 + 28768;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83120BF0;
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

__attribute__((alias("__imp__sub_83120C08"))) PPC_WEAK_FUNC(sub_83120C08);
PPC_FUNC_IMPL(__imp__sub_83120C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-1904
	ctx.r9.s64 = ctx.r10.s64 + -1904;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,403
	ctx.r8.s64 = 403;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8596
	ctx.r5.s64 = ctx.r10.s64 + 8596;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,8632
	ctx.r4.s64 = ctx.r10.s64 + 8632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,26240
	ctx.r31.s64 = ctx.r10.s64 + 26240;
	// addi r10,r11,-26704
	ctx.r10.s64 = ctx.r11.s64 + -26704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83120C60;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-16896
	ctx.r3.s64 = ctx.r8.s64 + -16896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,28856
	ctx.r11.s64 = ctx.r9.s64 + 28856;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83120C90;
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

__attribute__((alias("__imp__sub_83120CA8"))) PPC_WEAK_FUNC(sub_83120CA8);
PPC_FUNC_IMPL(__imp__sub_83120CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-1656
	ctx.r9.s64 = ctx.r10.s64 + -1656;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,403
	ctx.r8.s64 = 403;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8596
	ctx.r5.s64 = ctx.r10.s64 + 8596;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,8656
	ctx.r4.s64 = ctx.r10.s64 + 8656;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,26148
	ctx.r31.s64 = ctx.r10.s64 + 26148;
	// addi r10,r11,-24664
	ctx.r10.s64 = ctx.r11.s64 + -24664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83120D00;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-16816
	ctx.r3.s64 = ctx.r8.s64 + -16816;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,28944
	ctx.r11.s64 = ctx.r9.s64 + 28944;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83120D30;
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

__attribute__((alias("__imp__sub_83120D48"))) PPC_WEAK_FUNC(sub_83120D48);
PPC_FUNC_IMPL(__imp__sub_83120D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-1160
	ctx.r9.s64 = ctx.r10.s64 + -1160;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,403
	ctx.r8.s64 = 403;
	// addi r6,r10,8708
	ctx.r6.s64 = ctx.r10.s64 + 8708;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8596
	ctx.r5.s64 = ctx.r10.s64 + 8596;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,8680
	ctx.r4.s64 = ctx.r10.s64 + 8680;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,25688
	ctx.r31.s64 = ctx.r10.s64 + 25688;
	// addi r10,r11,-22624
	ctx.r10.s64 = ctx.r11.s64 + -22624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83120DA0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-16736
	ctx.r3.s64 = ctx.r8.s64 + -16736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29032
	ctx.r11.s64 = ctx.r9.s64 + 29032;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83120DD0;
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

__attribute__((alias("__imp__sub_83120DE8"))) PPC_WEAK_FUNC(sub_83120DE8);
PPC_FUNC_IMPL(__imp__sub_83120DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-1408
	ctx.r9.s64 = ctx.r10.s64 + -1408;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,403
	ctx.r8.s64 = 403;
	// addi r6,r10,8708
	ctx.r6.s64 = ctx.r10.s64 + 8708;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8596
	ctx.r5.s64 = ctx.r10.s64 + 8596;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,8724
	ctx.r4.s64 = ctx.r10.s64 + 8724;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,25596
	ctx.r31.s64 = ctx.r10.s64 + 25596;
	// addi r10,r11,-20680
	ctx.r10.s64 = ctx.r11.s64 + -20680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83120E40;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-16656
	ctx.r3.s64 = ctx.r8.s64 + -16656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29120
	ctx.r11.s64 = ctx.r9.s64 + 29120;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83120E70;
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

__attribute__((alias("__imp__sub_83120E88"))) PPC_WEAK_FUNC(sub_83120E88);
PPC_FUNC_IMPL(__imp__sub_83120E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-912
	ctx.r9.s64 = ctx.r10.s64 + -912;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,403
	ctx.r8.s64 = 403;
	// addi r6,r10,8708
	ctx.r6.s64 = ctx.r10.s64 + 8708;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8596
	ctx.r5.s64 = ctx.r10.s64 + 8596;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,8756
	ctx.r4.s64 = ctx.r10.s64 + 8756;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,26424
	ctx.r31.s64 = ctx.r10.s64 + 26424;
	// addi r10,r11,-18736
	ctx.r10.s64 = ctx.r11.s64 + -18736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83120EE0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-16576
	ctx.r3.s64 = ctx.r8.s64 + -16576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29208
	ctx.r11.s64 = ctx.r9.s64 + 29208;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83120F10;
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

__attribute__((alias("__imp__sub_83120F28"))) PPC_WEAK_FUNC(sub_83120F28);
PPC_FUNC_IMPL(__imp__sub_83120F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-1160
	ctx.r9.s64 = ctx.r10.s64 + -1160;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r10,8816
	ctx.r6.s64 = ctx.r10.s64 + 8816;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8596
	ctx.r5.s64 = ctx.r10.s64 + 8596;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,8784
	ctx.r4.s64 = ctx.r10.s64 + 8784;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,26608
	ctx.r31.s64 = ctx.r10.s64 + 26608;
	// addi r10,r11,-16792
	ctx.r10.s64 = ctx.r11.s64 + -16792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83120F80;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-16496
	ctx.r3.s64 = ctx.r8.s64 + -16496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29296
	ctx.r11.s64 = ctx.r9.s64 + 29296;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83120FB0;
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

__attribute__((alias("__imp__sub_83120FC8"))) PPC_WEAK_FUNC(sub_83120FC8);
PPC_FUNC_IMPL(__imp__sub_83120FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-1408
	ctx.r9.s64 = ctx.r10.s64 + -1408;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r10,8816
	ctx.r6.s64 = ctx.r10.s64 + 8816;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8596
	ctx.r5.s64 = ctx.r10.s64 + 8596;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,8828
	ctx.r4.s64 = ctx.r10.s64 + 8828;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,25964
	ctx.r31.s64 = ctx.r10.s64 + 25964;
	// addi r10,r11,-14816
	ctx.r10.s64 = ctx.r11.s64 + -14816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121020;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-16416
	ctx.r3.s64 = ctx.r8.s64 + -16416;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29384
	ctx.r11.s64 = ctx.r9.s64 + 29384;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121050;
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

__attribute__((alias("__imp__sub_83121068"))) PPC_WEAK_FUNC(sub_83121068);
PPC_FUNC_IMPL(__imp__sub_83121068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-912
	ctx.r9.s64 = ctx.r10.s64 + -912;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r10,8816
	ctx.r6.s64 = ctx.r10.s64 + 8816;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8596
	ctx.r5.s64 = ctx.r10.s64 + 8596;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,8864
	ctx.r4.s64 = ctx.r10.s64 + 8864;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,26332
	ctx.r31.s64 = ctx.r10.s64 + 26332;
	// addi r10,r11,-12840
	ctx.r10.s64 = ctx.r11.s64 + -12840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831210C0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-16336
	ctx.r3.s64 = ctx.r8.s64 + -16336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29472
	ctx.r11.s64 = ctx.r9.s64 + 29472;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831210F0;
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

__attribute__((alias("__imp__sub_83121108"))) PPC_WEAK_FUNC(sub_83121108);
PPC_FUNC_IMPL(__imp__sub_83121108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-488
	ctx.r9.s64 = ctx.r10.s64 + -488;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8948
	ctx.r5.s64 = ctx.r10.s64 + 8948;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8896
	ctx.r4.s64 = ctx.r10.s64 + 8896;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,25780
	ctx.r31.s64 = ctx.r10.s64 + 25780;
	// addi r10,r11,-10744
	ctx.r10.s64 = ctx.r11.s64 + -10744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121160;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-16240
	ctx.r3.s64 = ctx.r8.s64 + -16240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18360
	ctx.r11.s64 = ctx.r9.s64 + 18360;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121190;
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

__attribute__((alias("__imp__sub_831211A8"))) PPC_WEAK_FUNC(sub_831211A8);
PPC_FUNC_IMPL(__imp__sub_831211A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-312
	ctx.r9.s64 = ctx.r10.s64 + -312;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9032
	ctx.r5.s64 = ctx.r10.s64 + 9032;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,8980
	ctx.r4.s64 = ctx.r10.s64 + 8980;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,26056
	ctx.r31.s64 = ctx.r10.s64 + 26056;
	// addi r10,r11,-10560
	ctx.r10.s64 = ctx.r11.s64 + -10560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121200;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-16160
	ctx.r3.s64 = ctx.r8.s64 + -16160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18448
	ctx.r11.s64 = ctx.r9.s64 + 18448;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121230;
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

__attribute__((alias("__imp__sub_83121248"))) PPC_WEAK_FUNC(sub_83121248);
PPC_FUNC_IMPL(__imp__sub_83121248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-664
	ctx.r9.s64 = ctx.r10.s64 + -664;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8948
	ctx.r5.s64 = ctx.r10.s64 + 8948;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,9064
	ctx.r4.s64 = ctx.r10.s64 + 9064;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,25872
	ctx.r31.s64 = ctx.r10.s64 + 25872;
	// addi r10,r11,-10744
	ctx.r10.s64 = ctx.r11.s64 + -10744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831212A0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-16080
	ctx.r3.s64 = ctx.r8.s64 + -16080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18360
	ctx.r11.s64 = ctx.r9.s64 + 18360;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831212D0;
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

__attribute__((alias("__imp__sub_831212E8"))) PPC_WEAK_FUNC(sub_831212E8);
PPC_FUNC_IMPL(__imp__sub_831212E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r9,r10,-14160
	ctx.r9.s64 = ctx.r10.s64 + -14160;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9032
	ctx.r5.s64 = ctx.r10.s64 + 9032;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,9116
	ctx.r4.s64 = ctx.r10.s64 + 9116;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,26700
	ctx.r31.s64 = ctx.r10.s64 + 26700;
	// addi r10,r11,-10560
	ctx.r10.s64 = ctx.r11.s64 + -10560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121340;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-16000
	ctx.r3.s64 = ctx.r8.s64 + -16000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18448
	ctx.r11.s64 = ctx.r9.s64 + 18448;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121370;
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

__attribute__((alias("__imp__sub_83121388"))) PPC_WEAK_FUNC(sub_83121388);
PPC_FUNC_IMPL(__imp__sub_83121388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-664
	ctx.r9.s64 = ctx.r10.s64 + -664;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,9208
	ctx.r6.s64 = ctx.r10.s64 + 9208;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,8948
	ctx.r5.s64 = ctx.r10.s64 + 8948;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,9168
	ctx.r4.s64 = ctx.r10.s64 + 9168;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,24924
	ctx.r31.s64 = ctx.r10.s64 + 24924;
	// addi r10,r11,-3104
	ctx.r10.s64 = ctx.r11.s64 + -3104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831213E0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-15920
	ctx.r3.s64 = ctx.r8.s64 + -15920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,26248
	ctx.r11.s64 = ctx.r9.s64 + 26248;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14248
	ctx.r11.s64 = ctx.r10.s64 + 14248;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121410;
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

__attribute__((alias("__imp__sub_83121428"))) PPC_WEAK_FUNC(sub_83121428);
PPC_FUNC_IMPL(__imp__sub_83121428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,30304
	ctx.r9.s64 = ctx.r10.s64 + 30304;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,9248
	ctx.r5.s64 = ctx.r10.s64 + 9248;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,9216
	ctx.r4.s64 = ctx.r10.s64 + 9216;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,25072
	ctx.r31.s64 = ctx.r10.s64 + 25072;
	// addi r10,r11,-29856
	ctx.r10.s64 = ctx.r11.s64 + -29856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121480;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-15840
	ctx.r3.s64 = ctx.r8.s64 + -15840;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18048
	ctx.r11.s64 = ctx.r9.s64 + 18048;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30296
	ctx.r11.s64 = ctx.r10.s64 + 30296;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831214B0;
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

__attribute__((alias("__imp__sub_831214C8"))) PPC_WEAK_FUNC(sub_831214C8);
PPC_FUNC_IMPL(__imp__sub_831214C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,30592
	ctx.r9.s64 = ctx.r10.s64 + 30592;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9308
	ctx.r5.s64 = ctx.r10.s64 + 9308;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,9276
	ctx.r4.s64 = ctx.r10.s64 + 9276;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,24816
	ctx.r31.s64 = ctx.r10.s64 + 24816;
	// addi r10,r11,-29672
	ctx.r10.s64 = ctx.r11.s64 + -29672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121520;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-15760
	ctx.r3.s64 = ctx.r8.s64 + -15760;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18136
	ctx.r11.s64 = ctx.r9.s64 + 18136;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,30584
	ctx.r11.s64 = ctx.r10.s64 + 30584;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121550;
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

__attribute__((alias("__imp__sub_83121568"))) PPC_WEAK_FUNC(sub_83121568);
PPC_FUNC_IMPL(__imp__sub_83121568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,25056
	ctx.r3.s64 = ctx.r11.s64 + 25056;
	// bl 0x82616000
	ctx.lr = 0x83121580;
	sub_82616000(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18752
	ctx.r3.s64 = ctx.r11.s64 + -18752;
	// bl 0x82e29708
	ctx.lr = 0x8312158C;
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

__attribute__((alias("__imp__sub_831215A0"))) PPC_WEAK_FUNC(sub_831215A0);
PPC_FUNC_IMPL(__imp__sub_831215A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,24908
	ctx.r3.s64 = ctx.r11.s64 + 24908;
	// bl 0x82616000
	ctx.lr = 0x831215B8;
	sub_82616000(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18736
	ctx.r3.s64 = ctx.r11.s64 + -18736;
	// bl 0x82e29708
	ctx.lr = 0x831215C4;
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

__attribute__((alias("__imp__sub_831215D8"))) PPC_WEAK_FUNC(sub_831215D8);
PPC_FUNC_IMPL(__imp__sub_831215D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,25164
	ctx.r3.s64 = ctx.r11.s64 + 25164;
	// bl 0x82616000
	ctx.lr = 0x831215F0;
	sub_82616000(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-18720
	ctx.r3.s64 = ctx.r11.s64 + -18720;
	// bl 0x82e29708
	ctx.lr = 0x831215FC;
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

__attribute__((alias("__imp__sub_83121610"))) PPC_WEAK_FUNC(sub_83121610);
PPC_FUNC_IMPL(__imp__sub_83121610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,27344
	ctx.r11.s64 = ctx.r11.s64 + 27344;
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

__attribute__((alias("__imp__sub_83121640"))) PPC_WEAK_FUNC(sub_83121640);
PPC_FUNC_IMPL(__imp__sub_83121640) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,27824
	ctx.r11.s64 = ctx.r11.s64 + 27824;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83121670"))) PPC_WEAK_FUNC(sub_83121670);
PPC_FUNC_IMPL(__imp__sub_83121670) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,27840
	ctx.r11.s64 = ctx.r11.s64 + 27840;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831216B8"))) PPC_WEAK_FUNC(sub_831216B8);
PPC_FUNC_IMPL(__imp__sub_831216B8) {
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
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,27376
	ctx.r11.s64 = ctx.r11.s64 + 27376;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83121700"))) PPC_WEAK_FUNC(sub_83121700);
PPC_FUNC_IMPL(__imp__sub_83121700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,27684
	ctx.r3.s64 = ctx.r11.s64 + 27684;
	// bl 0x82592dc8
	ctx.lr = 0x8312171C;
	sub_82592DC8(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-14624
	ctx.r3.s64 = ctx.r11.s64 + -14624;
	// bl 0x82e29708
	ctx.lr = 0x83121728;
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

__attribute__((alias("__imp__sub_83121738"))) PPC_WEAK_FUNC(sub_83121738);
PPC_FUNC_IMPL(__imp__sub_83121738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-31916
	ctx.r5.s64 = ctx.r10.s64 + -31916;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-31940
	ctx.r4.s64 = ctx.r10.s64 + -31940;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,27168
	ctx.r31.s64 = ctx.r10.s64 + 27168;
	// addi r10,r11,19048
	ctx.r10.s64 = ctx.r11.s64 + 19048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121790;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-9112
	ctx.r3.s64 = ctx.r8.s64 + -9112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-1576
	ctx.r11.s64 = ctx.r9.s64 + -1576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-15456
	ctx.r11.s64 = ctx.r10.s64 + -15456;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831217C0;
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

__attribute__((alias("__imp__sub_831217D8"))) PPC_WEAK_FUNC(sub_831217D8);
PPC_FUNC_IMPL(__imp__sub_831217D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-31868
	ctx.r5.s64 = ctx.r10.s64 + -31868;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-31892
	ctx.r4.s64 = ctx.r10.s64 + -31892;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,27484
	ctx.r31.s64 = ctx.r10.s64 + 27484;
	// addi r10,r11,-7032
	ctx.r10.s64 = ctx.r11.s64 + -7032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121830;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-14552
	ctx.r3.s64 = ctx.r8.s64 + -14552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11040
	ctx.r11.s64 = ctx.r9.s64 + 11040;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-15456
	ctx.r11.s64 = ctx.r10.s64 + -15456;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121860;
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

__attribute__((alias("__imp__sub_83121878"))) PPC_WEAK_FUNC(sub_83121878);
PPC_FUNC_IMPL(__imp__sub_83121878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-31772
	ctx.r5.s64 = ctx.r10.s64 + -31772;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-31840
	ctx.r4.s64 = ctx.r10.s64 + -31840;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,32156
	ctx.r31.s64 = ctx.r10.s64 + 32156;
	// addi r10,r11,-19592
	ctx.r10.s64 = ctx.r11.s64 + -19592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831218D0;
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
	// addi r3,r8,-14472
	ctx.r3.s64 = ctx.r8.s64 + -14472;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18344
	ctx.r11.s64 = ctx.r9.s64 + 18344;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,3984
	ctx.r11.s64 = ctx.r10.s64 + 3984;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121900;
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

__attribute__((alias("__imp__sub_83121918"))) PPC_WEAK_FUNC(sub_83121918);
PPC_FUNC_IMPL(__imp__sub_83121918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,31544
	ctx.r9.s64 = ctx.r10.s64 + 31544;
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
	// addi r5,r10,-31668
	ctx.r5.s64 = ctx.r10.s64 + -31668;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-31736
	ctx.r4.s64 = ctx.r10.s64 + -31736;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,28752
	ctx.r31.s64 = ctx.r10.s64 + 28752;
	// addi r10,r11,248
	ctx.r10.s64 = ctx.r11.s64 + 248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121970;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-14392
	ctx.r3.s64 = ctx.r8.s64 + -14392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,72
	ctx.r11.s64 = ctx.r9.s64 + 72;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,3984
	ctx.r11.s64 = ctx.r10.s64 + 3984;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831219A0;
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

__attribute__((alias("__imp__sub_831219B8"))) PPC_WEAK_FUNC(sub_831219B8);
PPC_FUNC_IMPL(__imp__sub_831219B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-31772
	ctx.r5.s64 = ctx.r10.s64 + -31772;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-31640
	ctx.r4.s64 = ctx.r10.s64 + -31640;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,29948
	ctx.r31.s64 = ctx.r10.s64 + 29948;
	// addi r10,r11,20176
	ctx.r10.s64 = ctx.r11.s64 + 20176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121A10;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-14312
	ctx.r3.s64 = ctx.r8.s64 + -14312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18256
	ctx.r11.s64 = ctx.r9.s64 + 18256;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,26336
	ctx.r11.s64 = ctx.r10.s64 + 26336;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121A40;
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

__attribute__((alias("__imp__sub_83121A58"))) PPC_WEAK_FUNC(sub_83121A58);
PPC_FUNC_IMPL(__imp__sub_83121A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,25320
	ctx.r9.s64 = ctx.r10.s64 + 25320;
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
	// addi r5,r10,-31668
	ctx.r5.s64 = ctx.r10.s64 + -31668;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-31576
	ctx.r4.s64 = ctx.r10.s64 + -31576;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,29672
	ctx.r31.s64 = ctx.r10.s64 + 29672;
	// addi r10,r11,-23280
	ctx.r10.s64 = ctx.r11.s64 + -23280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121AB0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-14232
	ctx.r3.s64 = ctx.r8.s64 + -14232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,160
	ctx.r11.s64 = ctx.r9.s64 + 160;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,26336
	ctx.r11.s64 = ctx.r10.s64 + 26336;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121AE0;
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

__attribute__((alias("__imp__sub_83121AF8"))) PPC_WEAK_FUNC(sub_83121AF8);
PPC_FUNC_IMPL(__imp__sub_83121AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-31772
	ctx.r5.s64 = ctx.r10.s64 + -31772;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-31512
	ctx.r4.s64 = ctx.r10.s64 + -31512;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-32092
	ctx.r31.s64 = ctx.r10.s64 + -32092;
	// addi r10,r11,-19592
	ctx.r10.s64 = ctx.r11.s64 + -19592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121B50;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-14152
	ctx.r3.s64 = ctx.r8.s64 + -14152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18344
	ctx.r11.s64 = ctx.r9.s64 + 18344;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,26336
	ctx.r11.s64 = ctx.r10.s64 + 26336;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121B80;
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

__attribute__((alias("__imp__sub_83121B98"))) PPC_WEAK_FUNC(sub_83121B98);
PPC_FUNC_IMPL(__imp__sub_83121B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,-31728
	ctx.r9.s64 = ctx.r10.s64 + -31728;
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
	// addi r5,r10,-31668
	ctx.r5.s64 = ctx.r10.s64 + -31668;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-31440
	ctx.r4.s64 = ctx.r10.s64 + -31440;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,29396
	ctx.r31.s64 = ctx.r10.s64 + 29396;
	// addi r10,r11,248
	ctx.r10.s64 = ctx.r11.s64 + 248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121BF0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-14072
	ctx.r3.s64 = ctx.r8.s64 + -14072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,72
	ctx.r11.s64 = ctx.r9.s64 + 72;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,26336
	ctx.r11.s64 = ctx.r10.s64 + 26336;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121C20;
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

__attribute__((alias("__imp__sub_83121C38"))) PPC_WEAK_FUNC(sub_83121C38);
PPC_FUNC_IMPL(__imp__sub_83121C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,25480
	ctx.r9.s64 = ctx.r10.s64 + 25480;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-31372
	ctx.r4.s64 = ctx.r10.s64 + -31372;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,32064
	ctx.r31.s64 = ctx.r10.s64 + 32064;
	// addi r10,r11,-29360
	ctx.r10.s64 = ctx.r11.s64 + -29360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121C90;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-9032
	ctx.r3.s64 = ctx.r8.s64 + -9032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-1688
	ctx.r11.s64 = ctx.r9.s64 + -1688;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18744
	ctx.r11.s64 = ctx.r10.s64 + 18744;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121CC0;
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

__attribute__((alias("__imp__sub_83121CD8"))) PPC_WEAK_FUNC(sub_83121CD8);
PPC_FUNC_IMPL(__imp__sub_83121CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,25568
	ctx.r9.s64 = ctx.r10.s64 + 25568;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-31288
	ctx.r4.s64 = ctx.r10.s64 + -31288;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,28292
	ctx.r31.s64 = ctx.r10.s64 + 28292;
	// addi r10,r11,320
	ctx.r10.s64 = ctx.r11.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121D30;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13992
	ctx.r3.s64 = ctx.r8.s64 + -13992;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29184
	ctx.r11.s64 = ctx.r9.s64 + -29184;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-12952
	ctx.r11.s64 = ctx.r10.s64 + -12952;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121D60;
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

__attribute__((alias("__imp__sub_83121D78"))) PPC_WEAK_FUNC(sub_83121D78);
PPC_FUNC_IMPL(__imp__sub_83121D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,25568
	ctx.r9.s64 = ctx.r10.s64 + 25568;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-31184
	ctx.r4.s64 = ctx.r10.s64 + -31184;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-31908
	ctx.r31.s64 = ctx.r10.s64 + -31908;
	// addi r10,r11,1072
	ctx.r10.s64 = ctx.r11.s64 + 1072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121DD0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13912
	ctx.r3.s64 = ctx.r8.s64 + -13912;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-27528
	ctx.r11.s64 = ctx.r9.s64 + -27528;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121E00;
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

__attribute__((alias("__imp__sub_83121E18"))) PPC_WEAK_FUNC(sub_83121E18);
PPC_FUNC_IMPL(__imp__sub_83121E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,25664
	ctx.r9.s64 = ctx.r10.s64 + 25664;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-31112
	ctx.r4.s64 = ctx.r10.s64 + -31112;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,30500
	ctx.r31.s64 = ctx.r10.s64 + 30500;
	// addi r10,r11,1824
	ctx.r10.s64 = ctx.r11.s64 + 1824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121E70;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13832
	ctx.r3.s64 = ctx.r8.s64 + -13832;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-25776
	ctx.r11.s64 = ctx.r9.s64 + -25776;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121EA0;
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

__attribute__((alias("__imp__sub_83121EB8"))) PPC_WEAK_FUNC(sub_83121EB8);
PPC_FUNC_IMPL(__imp__sub_83121EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,25664
	ctx.r9.s64 = ctx.r10.s64 + 25664;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-31040
	ctx.r4.s64 = ctx.r10.s64 + -31040;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,28660
	ctx.r31.s64 = ctx.r10.s64 + 28660;
	// addi r10,r11,2576
	ctx.r10.s64 = ctx.r11.s64 + 2576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121F10;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13752
	ctx.r3.s64 = ctx.r8.s64 + -13752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-24120
	ctx.r11.s64 = ctx.r9.s64 + -24120;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121F40;
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

__attribute__((alias("__imp__sub_83121F58"))) PPC_WEAK_FUNC(sub_83121F58);
PPC_FUNC_IMPL(__imp__sub_83121F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,25664
	ctx.r9.s64 = ctx.r10.s64 + 25664;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30960
	ctx.r4.s64 = ctx.r10.s64 + -30960;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,30960
	ctx.r31.s64 = ctx.r10.s64 + 30960;
	// addi r10,r11,3328
	ctx.r10.s64 = ctx.r11.s64 + 3328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83121FB0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13672
	ctx.r3.s64 = ctx.r8.s64 + -13672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-22432
	ctx.r11.s64 = ctx.r9.s64 + -22432;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83121FE0;
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

__attribute__((alias("__imp__sub_83121FF8"))) PPC_WEAK_FUNC(sub_83121FF8);
PPC_FUNC_IMPL(__imp__sub_83121FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,30984
	ctx.r9.s64 = ctx.r10.s64 + 30984;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30880
	ctx.r4.s64 = ctx.r10.s64 + -30880;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-32276
	ctx.r31.s64 = ctx.r10.s64 + -32276;
	// addi r10,r11,25760
	ctx.r10.s64 = ctx.r11.s64 + 25760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122050;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13592
	ctx.r3.s64 = ctx.r8.s64 + -13592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4080
	ctx.r11.s64 = ctx.r9.s64 + 4080;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122080;
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

__attribute__((alias("__imp__sub_83122098"))) PPC_WEAK_FUNC(sub_83122098);
PPC_FUNC_IMPL(__imp__sub_83122098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,31080
	ctx.r9.s64 = ctx.r10.s64 + 31080;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30760
	ctx.r4.s64 = ctx.r10.s64 + -30760;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,28476
	ctx.r31.s64 = ctx.r10.s64 + 28476;
	// addi r10,r11,25896
	ctx.r10.s64 = ctx.r11.s64 + 25896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831220F0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13512
	ctx.r3.s64 = ctx.r8.s64 + -13512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4816
	ctx.r11.s64 = ctx.r9.s64 + 4816;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122120;
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

__attribute__((alias("__imp__sub_83122138"))) PPC_WEAK_FUNC(sub_83122138);
PPC_FUNC_IMPL(__imp__sub_83122138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,31176
	ctx.r9.s64 = ctx.r10.s64 + 31176;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30680
	ctx.r4.s64 = ctx.r10.s64 + -30680;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,28568
	ctx.r31.s64 = ctx.r10.s64 + 28568;
	// addi r10,r11,26032
	ctx.r10.s64 = ctx.r11.s64 + 26032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122190;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13432
	ctx.r3.s64 = ctx.r8.s64 + -13432;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,5552
	ctx.r11.s64 = ctx.r9.s64 + 5552;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831221C0;
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

__attribute__((alias("__imp__sub_831221D8"))) PPC_WEAK_FUNC(sub_831221D8);
PPC_FUNC_IMPL(__imp__sub_831221D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,30984
	ctx.r9.s64 = ctx.r10.s64 + 30984;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30600
	ctx.r4.s64 = ctx.r10.s64 + -30600;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-31724
	ctx.r31.s64 = ctx.r10.s64 + -31724;
	// addi r10,r11,26168
	ctx.r10.s64 = ctx.r11.s64 + 26168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122230;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13352
	ctx.r3.s64 = ctx.r8.s64 + -13352;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,6288
	ctx.r11.s64 = ctx.r9.s64 + 6288;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122260;
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

__attribute__((alias("__imp__sub_83122278"))) PPC_WEAK_FUNC(sub_83122278);
PPC_FUNC_IMPL(__imp__sub_83122278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,31080
	ctx.r9.s64 = ctx.r10.s64 + 31080;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30512
	ctx.r4.s64 = ctx.r10.s64 + -30512;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,30684
	ctx.r31.s64 = ctx.r10.s64 + 30684;
	// addi r10,r11,26304
	ctx.r10.s64 = ctx.r11.s64 + 26304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831222D0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13272
	ctx.r3.s64 = ctx.r8.s64 + -13272;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,7024
	ctx.r11.s64 = ctx.r9.s64 + 7024;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122300;
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

__attribute__((alias("__imp__sub_83122318"))) PPC_WEAK_FUNC(sub_83122318);
PPC_FUNC_IMPL(__imp__sub_83122318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,31176
	ctx.r9.s64 = ctx.r10.s64 + 31176;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30424
	ctx.r4.s64 = ctx.r10.s64 + -30424;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,29488
	ctx.r31.s64 = ctx.r10.s64 + 29488;
	// addi r10,r11,26440
	ctx.r10.s64 = ctx.r11.s64 + 26440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122370;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13192
	ctx.r3.s64 = ctx.r8.s64 + -13192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,7760
	ctx.r11.s64 = ctx.r9.s64 + 7760;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831223A0;
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

__attribute__((alias("__imp__sub_831223B8"))) PPC_WEAK_FUNC(sub_831223B8);
PPC_FUNC_IMPL(__imp__sub_831223B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,31272
	ctx.r9.s64 = ctx.r10.s64 + 31272;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30336
	ctx.r4.s64 = ctx.r10.s64 + -30336;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,30316
	ctx.r31.s64 = ctx.r10.s64 + 30316;
	// addi r10,r11,26576
	ctx.r10.s64 = ctx.r11.s64 + 26576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122410;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13112
	ctx.r3.s64 = ctx.r8.s64 + -13112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,8496
	ctx.r11.s64 = ctx.r9.s64 + 8496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122440;
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

__attribute__((alias("__imp__sub_83122458"))) PPC_WEAK_FUNC(sub_83122458);
PPC_FUNC_IMPL(__imp__sub_83122458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,31368
	ctx.r9.s64 = ctx.r10.s64 + 31368;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30248
	ctx.r4.s64 = ctx.r10.s64 + -30248;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-31448
	ctx.r31.s64 = ctx.r10.s64 + -31448;
	// addi r10,r11,26712
	ctx.r10.s64 = ctx.r11.s64 + 26712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831224B0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13032
	ctx.r3.s64 = ctx.r8.s64 + -13032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,9232
	ctx.r11.s64 = ctx.r9.s64 + 9232;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831224E0;
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

__attribute__((alias("__imp__sub_831224F8"))) PPC_WEAK_FUNC(sub_831224F8);
PPC_FUNC_IMPL(__imp__sub_831224F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,31464
	ctx.r9.s64 = ctx.r10.s64 + 31464;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30160
	ctx.r4.s64 = ctx.r10.s64 + -30160;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,32432
	ctx.r31.s64 = ctx.r10.s64 + 32432;
	// addi r10,r11,26848
	ctx.r10.s64 = ctx.r11.s64 + 26848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122550;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-12952
	ctx.r3.s64 = ctx.r8.s64 + -12952;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,9968
	ctx.r11.s64 = ctx.r9.s64 + 9968;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122580;
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

__attribute__((alias("__imp__sub_83122598"))) PPC_WEAK_FUNC(sub_83122598);
PPC_FUNC_IMPL(__imp__sub_83122598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,26984
	ctx.r9.s64 = ctx.r10.s64 + 26984;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30072
	ctx.r4.s64 = ctx.r10.s64 + -30072;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-31816
	ctx.r31.s64 = ctx.r10.s64 + -31816;
	// addi r10,r11,10704
	ctx.r10.s64 = ctx.r11.s64 + 10704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831225F0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-12872
	ctx.r3.s64 = ctx.r8.s64 + -12872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-20680
	ctx.r11.s64 = ctx.r9.s64 + -20680;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122620;
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

__attribute__((alias("__imp__sub_83122638"))) PPC_WEAK_FUNC(sub_83122638);
PPC_FUNC_IMPL(__imp__sub_83122638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
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
	// addi r5,r10,-29908
	ctx.r5.s64 = ctx.r10.s64 + -29908;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-30000
	ctx.r4.s64 = ctx.r10.s64 + -30000;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,29212
	ctx.r31.s64 = ctx.r10.s64 + 29212;
	// addi r10,r11,-20568
	ctx.r10.s64 = ctx.r11.s64 + -20568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122690;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-12792
	ctx.r3.s64 = ctx.r8.s64 + -12792;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18472
	ctx.r11.s64 = ctx.r9.s64 + 18472;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831226C0;
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

__attribute__((alias("__imp__sub_831226D8"))) PPC_WEAK_FUNC(sub_831226D8);
PPC_FUNC_IMPL(__imp__sub_831226D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,10832
	ctx.r9.s64 = ctx.r10.s64 + 10832;
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
	// addi r5,r10,-29780
	ctx.r5.s64 = ctx.r10.s64 + -29780;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29872
	ctx.r4.s64 = ctx.r10.s64 + -29872;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-32000
	ctx.r31.s64 = ctx.r10.s64 + -32000;
	// addi r10,r11,27136
	ctx.r10.s64 = ctx.r11.s64 + 27136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122730;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-12712
	ctx.r3.s64 = ctx.r8.s64 + -12712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,28760
	ctx.r11.s64 = ctx.r9.s64 + 28760;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122760;
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

__attribute__((alias("__imp__sub_83122778"))) PPC_WEAK_FUNC(sub_83122778);
PPC_FUNC_IMPL(__imp__sub_83122778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,27208
	ctx.r9.s64 = ctx.r10.s64 + 27208;
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
	// addi r5,r10,-29908
	ctx.r5.s64 = ctx.r10.s64 + -29908;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29752
	ctx.r4.s64 = ctx.r10.s64 + -29752;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,29856
	ctx.r31.s64 = ctx.r10.s64 + 29856;
	// addi r10,r11,-20400
	ctx.r10.s64 = ctx.r11.s64 + -20400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831227D0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-12632
	ctx.r3.s64 = ctx.r8.s64 + -12632;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18584
	ctx.r11.s64 = ctx.r9.s64 + 18584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122800;
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

__attribute__((alias("__imp__sub_83122818"))) PPC_WEAK_FUNC(sub_83122818);
PPC_FUNC_IMPL(__imp__sub_83122818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,27568
	ctx.r9.s64 = ctx.r10.s64 + 27568;
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
	// addi r5,r10,-29780
	ctx.r5.s64 = ctx.r10.s64 + -29780;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29664
	ctx.r4.s64 = ctx.r10.s64 + -29664;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,29580
	ctx.r31.s64 = ctx.r10.s64 + 29580;
	// addi r10,r11,27408
	ctx.r10.s64 = ctx.r11.s64 + 27408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122870;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-12552
	ctx.r3.s64 = ctx.r8.s64 + -12552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,27480
	ctx.r11.s64 = ctx.r9.s64 + 27480;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831228A0;
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

__attribute__((alias("__imp__sub_831228B8"))) PPC_WEAK_FUNC(sub_831228B8);
PPC_FUNC_IMPL(__imp__sub_831228B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,27720
	ctx.r9.s64 = ctx.r10.s64 + 27720;
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
	// addi r5,r10,-29908
	ctx.r5.s64 = ctx.r10.s64 + -29908;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29576
	ctx.r4.s64 = ctx.r10.s64 + -29576;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,31788
	ctx.r31.s64 = ctx.r10.s64 + 31788;
	// addi r10,r11,-20568
	ctx.r10.s64 = ctx.r11.s64 + -20568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122910;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-12472
	ctx.r3.s64 = ctx.r8.s64 + -12472;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18472
	ctx.r11.s64 = ctx.r9.s64 + 18472;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122940;
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

__attribute__((alias("__imp__sub_83122958"))) PPC_WEAK_FUNC(sub_83122958);
PPC_FUNC_IMPL(__imp__sub_83122958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,28040
	ctx.r9.s64 = ctx.r10.s64 + 28040;
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
	// addi r5,r10,-29780
	ctx.r5.s64 = ctx.r10.s64 + -29780;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29472
	ctx.r4.s64 = ctx.r10.s64 + -29472;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,30224
	ctx.r31.s64 = ctx.r10.s64 + 30224;
	// addi r10,r11,27880
	ctx.r10.s64 = ctx.r11.s64 + 27880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831229B0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-12392
	ctx.r3.s64 = ctx.r8.s64 + -12392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,27952
	ctx.r11.s64 = ctx.r9.s64 + 27952;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831229E0;
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

__attribute__((alias("__imp__sub_831229F8"))) PPC_WEAK_FUNC(sub_831229F8);
PPC_FUNC_IMPL(__imp__sub_831229F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,28256
	ctx.r9.s64 = ctx.r10.s64 + 28256;
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
	// addi r5,r10,-29908
	ctx.r5.s64 = ctx.r10.s64 + -29908;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29368
	ctx.r4.s64 = ctx.r10.s64 + -29368;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,31972
	ctx.r31.s64 = ctx.r10.s64 + 31972;
	// addi r10,r11,-20400
	ctx.r10.s64 = ctx.r11.s64 + -20400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122A50;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-12312
	ctx.r3.s64 = ctx.r8.s64 + -12312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18584
	ctx.r11.s64 = ctx.r9.s64 + 18584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122A80;
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

__attribute__((alias("__imp__sub_83122A98"))) PPC_WEAK_FUNC(sub_83122A98);
PPC_FUNC_IMPL(__imp__sub_83122A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,28600
	ctx.r9.s64 = ctx.r10.s64 + 28600;
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
	// addi r5,r10,-29780
	ctx.r5.s64 = ctx.r10.s64 + -29780;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29264
	ctx.r4.s64 = ctx.r10.s64 + -29264;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,29120
	ctx.r31.s64 = ctx.r10.s64 + 29120;
	// addi r10,r11,28440
	ctx.r10.s64 = ctx.r11.s64 + 28440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122AF0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-12232
	ctx.r3.s64 = ctx.r8.s64 + -12232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,28512
	ctx.r11.s64 = ctx.r9.s64 + 28512;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122B20;
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

__attribute__((alias("__imp__sub_83122B38"))) PPC_WEAK_FUNC(sub_83122B38);
PPC_FUNC_IMPL(__imp__sub_83122B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
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
	// addi r5,r10,-29908
	ctx.r5.s64 = ctx.r10.s64 + -29908;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29168
	ctx.r4.s64 = ctx.r10.s64 + -29168;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,32340
	ctx.r31.s64 = ctx.r10.s64 + 32340;
	// addi r10,r11,-20232
	ctx.r10.s64 = ctx.r11.s64 + -20232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122B90;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-12152
	ctx.r3.s64 = ctx.r8.s64 + -12152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18696
	ctx.r11.s64 = ctx.r9.s64 + 18696;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122BC0;
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

__attribute__((alias("__imp__sub_83122BD8"))) PPC_WEAK_FUNC(sub_83122BD8);
PPC_FUNC_IMPL(__imp__sub_83122BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,28848
	ctx.r9.s64 = ctx.r10.s64 + 28848;
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
	// addi r5,r10,-29780
	ctx.r5.s64 = ctx.r10.s64 + -29780;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-29072
	ctx.r4.s64 = ctx.r10.s64 + -29072;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,32616
	ctx.r31.s64 = ctx.r10.s64 + 32616;
	// addi r10,r11,27136
	ctx.r10.s64 = ctx.r11.s64 + 27136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122C30;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-12072
	ctx.r3.s64 = ctx.r8.s64 + -12072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,28760
	ctx.r11.s64 = ctx.r9.s64 + 28760;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122C60;
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

__attribute__((alias("__imp__sub_83122C78"))) PPC_WEAK_FUNC(sub_83122C78);
PPC_FUNC_IMPL(__imp__sub_83122C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,29112
	ctx.r9.s64 = ctx.r10.s64 + 29112;
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
	// addi r5,r10,-29908
	ctx.r5.s64 = ctx.r10.s64 + -29908;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28976
	ctx.r4.s64 = ctx.r10.s64 + -28976;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-32460
	ctx.r31.s64 = ctx.r10.s64 + -32460;
	// addi r10,r11,-20064
	ctx.r10.s64 = ctx.r11.s64 + -20064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122CD0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-11992
	ctx.r3.s64 = ctx.r8.s64 + -11992;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18784
	ctx.r11.s64 = ctx.r9.s64 + 18784;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122D00;
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

__attribute__((alias("__imp__sub_83122D18"))) PPC_WEAK_FUNC(sub_83122D18);
PPC_FUNC_IMPL(__imp__sub_83122D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,29336
	ctx.r9.s64 = ctx.r10.s64 + 29336;
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
	// addi r5,r10,-29780
	ctx.r5.s64 = ctx.r10.s64 + -29780;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28880
	ctx.r4.s64 = ctx.r10.s64 + -28880;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-31632
	ctx.r31.s64 = ctx.r10.s64 + -31632;
	// addi r10,r11,27408
	ctx.r10.s64 = ctx.r11.s64 + 27408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122D70;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-11912
	ctx.r3.s64 = ctx.r8.s64 + -11912;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,27480
	ctx.r11.s64 = ctx.r9.s64 + 27480;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122DA0;
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

__attribute__((alias("__imp__sub_83122DB8"))) PPC_WEAK_FUNC(sub_83122DB8);
PPC_FUNC_IMPL(__imp__sub_83122DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
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
	// addi r5,r10,-29908
	ctx.r5.s64 = ctx.r10.s64 + -29908;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28784
	ctx.r4.s64 = ctx.r10.s64 + -28784;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,31696
	ctx.r31.s64 = ctx.r10.s64 + 31696;
	// addi r10,r11,-20232
	ctx.r10.s64 = ctx.r11.s64 + -20232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122E10;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-11832
	ctx.r3.s64 = ctx.r8.s64 + -11832;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18872
	ctx.r11.s64 = ctx.r9.s64 + 18872;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122E40;
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

__attribute__((alias("__imp__sub_83122E58"))) PPC_WEAK_FUNC(sub_83122E58);
PPC_FUNC_IMPL(__imp__sub_83122E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,29704
	ctx.r9.s64 = ctx.r10.s64 + 29704;
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
	// addi r5,r10,-29780
	ctx.r5.s64 = ctx.r10.s64 + -29780;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28688
	ctx.r4.s64 = ctx.r10.s64 + -28688;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,31052
	ctx.r31.s64 = ctx.r10.s64 + 31052;
	// addi r10,r11,29544
	ctx.r10.s64 = ctx.r11.s64 + 29544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122EB0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-11752
	ctx.r3.s64 = ctx.r8.s64 + -11752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,29616
	ctx.r11.s64 = ctx.r9.s64 + 29616;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122EE0;
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

__attribute__((alias("__imp__sub_83122EF8"))) PPC_WEAK_FUNC(sub_83122EF8);
PPC_FUNC_IMPL(__imp__sub_83122EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,29968
	ctx.r9.s64 = ctx.r10.s64 + 29968;
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
	// addi r5,r10,-29908
	ctx.r5.s64 = ctx.r10.s64 + -29908;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28592
	ctx.r4.s64 = ctx.r10.s64 + -28592;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,30868
	ctx.r31.s64 = ctx.r10.s64 + 30868;
	// addi r10,r11,-20064
	ctx.r10.s64 = ctx.r11.s64 + -20064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122F50;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-11672
	ctx.r3.s64 = ctx.r8.s64 + -11672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18960
	ctx.r11.s64 = ctx.r9.s64 + 18960;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83122F80;
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

__attribute__((alias("__imp__sub_83122F98"))) PPC_WEAK_FUNC(sub_83122F98);
PPC_FUNC_IMPL(__imp__sub_83122F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,30352
	ctx.r9.s64 = ctx.r10.s64 + 30352;
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
	// addi r5,r10,-29780
	ctx.r5.s64 = ctx.r10.s64 + -29780;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28496
	ctx.r4.s64 = ctx.r10.s64 + -28496;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-32644
	ctx.r31.s64 = ctx.r10.s64 + -32644;
	// addi r10,r11,30192
	ctx.r10.s64 = ctx.r11.s64 + 30192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83122FF0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-11592
	ctx.r3.s64 = ctx.r8.s64 + -11592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,30264
	ctx.r11.s64 = ctx.r9.s64 + 30264;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13872
	ctx.r11.s64 = ctx.r10.s64 + 13872;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123020;
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

__attribute__((alias("__imp__sub_83123038"))) PPC_WEAK_FUNC(sub_83123038);
PPC_FUNC_IMPL(__imp__sub_83123038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-28344
	ctx.r5.s64 = ctx.r10.s64 + -28344;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28404
	ctx.r4.s64 = ctx.r10.s64 + -28404;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,31604
	ctx.r31.s64 = ctx.r10.s64 + 31604;
	// addi r10,r11,19048
	ctx.r10.s64 = ctx.r11.s64 + 19048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123090;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-11512
	ctx.r3.s64 = ctx.r8.s64 + -11512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-1576
	ctx.r11.s64 = ctx.r9.s64 + -1576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13712
	ctx.r11.s64 = ctx.r10.s64 + -13712;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831230C0;
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

__attribute__((alias("__imp__sub_831230D8"))) PPC_WEAK_FUNC(sub_831230D8);
PPC_FUNC_IMPL(__imp__sub_831230D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-28252
	ctx.r5.s64 = ctx.r10.s64 + -28252;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,-28312
	ctx.r4.s64 = ctx.r10.s64 + -28312;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-32736
	ctx.r31.s64 = ctx.r10.s64 + -32736;
	// addi r10,r11,-7032
	ctx.r10.s64 = ctx.r11.s64 + -7032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123130;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-11432
	ctx.r3.s64 = ctx.r8.s64 + -11432;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11040
	ctx.r11.s64 = ctx.r9.s64 + 11040;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13712
	ctx.r11.s64 = ctx.r10.s64 + -13712;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123160;
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

__attribute__((alias("__imp__sub_83123178"))) PPC_WEAK_FUNC(sub_83123178);
PPC_FUNC_IMPL(__imp__sub_83123178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
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
	// addi r5,r10,-28184
	ctx.r5.s64 = ctx.r10.s64 + -28184;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28220
	ctx.r4.s64 = ctx.r10.s64 + -28220;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,27732
	ctx.r31.s64 = ctx.r10.s64 + 27732;
	// addi r10,r11,-30120
	ctx.r10.s64 = ctx.r11.s64 + -30120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831231D0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-11352
	ctx.r3.s64 = ctx.r8.s64 + -11352;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,17960
	ctx.r11.s64 = ctx.r9.s64 + 17960;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123200;
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

__attribute__((alias("__imp__sub_83123218"))) PPC_WEAK_FUNC(sub_83123218);
PPC_FUNC_IMPL(__imp__sub_83123218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
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
	// addi r5,r10,-28116
	ctx.r5.s64 = ctx.r10.s64 + -28116;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28152
	ctx.r4.s64 = ctx.r10.s64 + -28152;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,27392
	ctx.r31.s64 = ctx.r10.s64 + 27392;
	// addi r10,r11,-23128
	ctx.r10.s64 = ctx.r11.s64 + -23128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123270;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-11272
	ctx.r3.s64 = ctx.r8.s64 + -11272;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-7168
	ctx.r11.s64 = ctx.r9.s64 + -7168;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831232A0;
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

__attribute__((alias("__imp__sub_831232B8"))) PPC_WEAK_FUNC(sub_831232B8);
PPC_FUNC_IMPL(__imp__sub_831232B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,27948
	ctx.r3.s64 = ctx.r11.s64 + 27948;
	// bl 0x82616000
	ctx.lr = 0x831232D0;
	sub_82616000(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-15600
	ctx.r3.s64 = ctx.r11.s64 + -15600;
	// bl 0x82e29708
	ctx.lr = 0x831232DC;
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

__attribute__((alias("__imp__sub_831232F0"))) PPC_WEAK_FUNC(sub_831232F0);
PPC_FUNC_IMPL(__imp__sub_831232F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,27360
	ctx.r11.s64 = ctx.r11.s64 + 27360;
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

__attribute__((alias("__imp__sub_83123310"))) PPC_WEAK_FUNC(sub_83123310);
PPC_FUNC_IMPL(__imp__sub_83123310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,27964
	ctx.r11.s64 = ctx.r11.s64 + 27964;
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

__attribute__((alias("__imp__sub_83123330"))) PPC_WEAK_FUNC(sub_83123330);
PPC_FUNC_IMPL(__imp__sub_83123330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,27324
	ctx.r11.s64 = ctx.r11.s64 + 27324;
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

__attribute__((alias("__imp__sub_83123350"))) PPC_WEAK_FUNC(sub_83123350);
PPC_FUNC_IMPL(__imp__sub_83123350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28084
	ctx.r4.s64 = ctx.r10.s64 + -28084;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,31512
	ctx.r31.s64 = ctx.r10.s64 + 31512;
	// addi r10,r11,19048
	ctx.r10.s64 = ctx.r11.s64 + 19048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831233A8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-11192
	ctx.r3.s64 = ctx.r8.s64 + -11192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-1576
	ctx.r11.s64 = ctx.r9.s64 + -1576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13568
	ctx.r11.s64 = ctx.r10.s64 + -13568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831233D8;
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

__attribute__((alias("__imp__sub_831233F0"))) PPC_WEAK_FUNC(sub_831233F0);
PPC_FUNC_IMPL(__imp__sub_831233F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-28016
	ctx.r4.s64 = ctx.r10.s64 + -28016;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,30776
	ctx.r31.s64 = ctx.r10.s64 + 30776;
	// addi r10,r11,-19592
	ctx.r10.s64 = ctx.r11.s64 + -19592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123448;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-11112
	ctx.r3.s64 = ctx.r8.s64 + -11112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,19248
	ctx.r11.s64 = ctx.r9.s64 + 19248;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13704
	ctx.r11.s64 = ctx.r10.s64 + -13704;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123478;
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

__attribute__((alias("__imp__sub_83123490"))) PPC_WEAK_FUNC(sub_83123490);
PPC_FUNC_IMPL(__imp__sub_83123490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-27968
	ctx.r4.s64 = ctx.r10.s64 + -27968;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,32708
	ctx.r31.s64 = ctx.r10.s64 + 32708;
	// addi r10,r11,-19592
	ctx.r10.s64 = ctx.r11.s64 + -19592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831234E8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-11032
	ctx.r3.s64 = ctx.r8.s64 + -11032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,19336
	ctx.r11.s64 = ctx.r9.s64 + 19336;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13704
	ctx.r11.s64 = ctx.r10.s64 + -13704;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123518;
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

__attribute__((alias("__imp__sub_83123530"))) PPC_WEAK_FUNC(sub_83123530);
PPC_FUNC_IMPL(__imp__sub_83123530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,-20112
	ctx.r9.s64 = ctx.r10.s64 + -20112;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-27920
	ctx.r4.s64 = ctx.r10.s64 + -27920;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,31236
	ctx.r31.s64 = ctx.r10.s64 + 31236;
	// addi r10,r11,11240
	ctx.r10.s64 = ctx.r11.s64 + 11240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123588;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-10952
	ctx.r3.s64 = ctx.r8.s64 + -10952;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11312
	ctx.r11.s64 = ctx.r9.s64 + 11312;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13568
	ctx.r11.s64 = ctx.r10.s64 + -13568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831235B8;
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

__attribute__((alias("__imp__sub_831235D0"))) PPC_WEAK_FUNC(sub_831235D0);
PPC_FUNC_IMPL(__imp__sub_831235D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
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
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-27860
	ctx.r4.s64 = ctx.r10.s64 + -27860;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,28384
	ctx.r31.s64 = ctx.r10.s64 + 28384;
	// addi r10,r11,11240
	ctx.r10.s64 = ctx.r11.s64 + 11240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123628;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-10872
	ctx.r3.s64 = ctx.r8.s64 + -10872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11312
	ctx.r11.s64 = ctx.r9.s64 + 11312;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13704
	ctx.r11.s64 = ctx.r10.s64 + -13704;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123658;
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

__attribute__((alias("__imp__sub_83123670"))) PPC_WEAK_FUNC(sub_83123670);
PPC_FUNC_IMPL(__imp__sub_83123670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
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
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,69
	ctx.r9.s64 = 69;
	// addi r4,r10,-27816
	ctx.r4.s64 = ctx.r10.s64 + -27816;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,30592
	ctx.r31.s64 = ctx.r10.s64 + 30592;
	// addi r10,r11,11400
	ctx.r10.s64 = ctx.r11.s64 + 11400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831236C8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-10792
	ctx.r3.s64 = ctx.r8.s64 + -10792;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11472
	ctx.r11.s64 = ctx.r9.s64 + 11472;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13704
	ctx.r11.s64 = ctx.r10.s64 + -13704;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831236F8;
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

__attribute__((alias("__imp__sub_83123710"))) PPC_WEAK_FUNC(sub_83123710);
PPC_FUNC_IMPL(__imp__sub_83123710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,27720
	ctx.r9.s64 = ctx.r10.s64 + 27720;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-27768
	ctx.r4.s64 = ctx.r10.s64 + -27768;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,32248
	ctx.r31.s64 = ctx.r10.s64 + 32248;
	// addi r10,r11,19048
	ctx.r10.s64 = ctx.r11.s64 + 19048;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123768;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-10712
	ctx.r3.s64 = ctx.r8.s64 + -10712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-1576
	ctx.r11.s64 = ctx.r9.s64 + -1576;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13568
	ctx.r11.s64 = ctx.r10.s64 + -13568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123798;
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

__attribute__((alias("__imp__sub_831237B0"))) PPC_WEAK_FUNC(sub_831237B0);
PPC_FUNC_IMPL(__imp__sub_831237B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,27720
	ctx.r9.s64 = ctx.r10.s64 + 27720;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-27716
	ctx.r4.s64 = ctx.r10.s64 + -27716;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,30132
	ctx.r31.s64 = ctx.r10.s64 + 30132;
	// addi r10,r11,11560
	ctx.r10.s64 = ctx.r11.s64 + 11560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123808;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-10632
	ctx.r3.s64 = ctx.r8.s64 + -10632;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11632
	ctx.r11.s64 = ctx.r9.s64 + 11632;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13568
	ctx.r11.s64 = ctx.r10.s64 + -13568;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123838;
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

__attribute__((alias("__imp__sub_83123850"))) PPC_WEAK_FUNC(sub_83123850);
PPC_FUNC_IMPL(__imp__sub_83123850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-27664
	ctx.r4.s64 = ctx.r10.s64 + -27664;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,28844
	ctx.r31.s64 = ctx.r10.s64 + 28844;
	// addi r10,r11,-19592
	ctx.r10.s64 = ctx.r11.s64 + -19592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831238A8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-10552
	ctx.r3.s64 = ctx.r8.s64 + -10552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31456
	ctx.r11.s64 = ctx.r9.s64 + 31456;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13504
	ctx.r11.s64 = ctx.r10.s64 + -13504;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831238D8;
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

__attribute__((alias("__imp__sub_831238F0"))) PPC_WEAK_FUNC(sub_831238F0);
PPC_FUNC_IMPL(__imp__sub_831238F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
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
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27880
	ctx.r5.s64 = ctx.r10.s64 + -27880;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-27616
	ctx.r4.s64 = ctx.r10.s64 + -27616;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,31420
	ctx.r31.s64 = ctx.r10.s64 + 31420;
	// addi r10,r11,11720
	ctx.r10.s64 = ctx.r11.s64 + 11720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123948;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-10472
	ctx.r3.s64 = ctx.r8.s64 + -10472;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11792
	ctx.r11.s64 = ctx.r9.s64 + 11792;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13504
	ctx.r11.s64 = ctx.r10.s64 + -13504;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123978;
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

__attribute__((alias("__imp__sub_83123990"))) PPC_WEAK_FUNC(sub_83123990);
PPC_FUNC_IMPL(__imp__sub_83123990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-27516
	ctx.r6.s64 = ctx.r10.s64 + -27516;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-27540
	ctx.r5.s64 = ctx.r10.s64 + -27540;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-27568
	ctx.r4.s64 = ctx.r10.s64 + -27568;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,29304
	ctx.r31.s64 = ctx.r10.s64 + 29304;
	// addi r10,r11,-18848
	ctx.r10.s64 = ctx.r11.s64 + -18848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831239E8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-10392
	ctx.r3.s64 = ctx.r8.s64 + -10392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-872
	ctx.r11.s64 = ctx.r9.s64 + -872;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123A18;
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

__attribute__((alias("__imp__sub_83123A30"))) PPC_WEAK_FUNC(sub_83123A30);
PPC_FUNC_IMPL(__imp__sub_83123A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-27472
	ctx.r6.s64 = ctx.r10.s64 + -27472;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-27540
	ctx.r5.s64 = ctx.r10.s64 + -27540;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-27500
	ctx.r4.s64 = ctx.r10.s64 + -27500;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,29028
	ctx.r31.s64 = ctx.r10.s64 + 29028;
	// addi r10,r11,-18848
	ctx.r10.s64 = ctx.r11.s64 + -18848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123A88;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-10312
	ctx.r3.s64 = ctx.r8.s64 + -10312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-872
	ctx.r11.s64 = ctx.r9.s64 + -872;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123AB8;
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

__attribute__((alias("__imp__sub_83123AD0"))) PPC_WEAK_FUNC(sub_83123AD0);
PPC_FUNC_IMPL(__imp__sub_83123AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,31544
	ctx.r9.s64 = ctx.r10.s64 + 31544;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-27516
	ctx.r6.s64 = ctx.r10.s64 + -27516;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27428
	ctx.r5.s64 = ctx.r10.s64 + -27428;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-27456
	ctx.r4.s64 = ctx.r10.s64 + -27456;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,31144
	ctx.r31.s64 = ctx.r10.s64 + 31144;
	// addi r10,r11,-18680
	ctx.r10.s64 = ctx.r11.s64 + -18680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123B28;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-10232
	ctx.r3.s64 = ctx.r8.s64 + -10232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,536
	ctx.r11.s64 = ctx.r9.s64 + 536;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123B58;
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

__attribute__((alias("__imp__sub_83123B70"))) PPC_WEAK_FUNC(sub_83123B70);
PPC_FUNC_IMPL(__imp__sub_83123B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,31544
	ctx.r9.s64 = ctx.r10.s64 + 31544;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-27472
	ctx.r6.s64 = ctx.r10.s64 + -27472;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27428
	ctx.r5.s64 = ctx.r10.s64 + -27428;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,-27404
	ctx.r4.s64 = ctx.r10.s64 + -27404;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,30040
	ctx.r31.s64 = ctx.r10.s64 + 30040;
	// addi r10,r11,-18680
	ctx.r10.s64 = ctx.r11.s64 + -18680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123BC8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-10152
	ctx.r3.s64 = ctx.r8.s64 + -10152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,536
	ctx.r11.s64 = ctx.r9.s64 + 536;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123BF8;
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

__attribute__((alias("__imp__sub_83123C10"))) PPC_WEAK_FUNC(sub_83123C10);
PPC_FUNC_IMPL(__imp__sub_83123C10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-10304
	ctx.r3.s64 = ctx.r11.s64 + -10304;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x825f48b8
	ctx.lr = 0x83123C34;
	sub_825F48B8(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-14704
	ctx.r3.s64 = ctx.r11.s64 + -14704;
	// bl 0x82e29708
	ctx.lr = 0x83123C40;
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

__attribute__((alias("__imp__sub_83123C50"))) PPC_WEAK_FUNC(sub_83123C50);
PPC_FUNC_IMPL(__imp__sub_83123C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,27668
	ctx.r3.s64 = ctx.r11.s64 + 27668;
	// bl 0x82616000
	ctx.lr = 0x83123C68;
	sub_82616000(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-15584
	ctx.r3.s64 = ctx.r11.s64 + -15584;
	// bl 0x82e29708
	ctx.lr = 0x83123C74;
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

__attribute__((alias("__imp__sub_83123C88"))) PPC_WEAK_FUNC(sub_83123C88);
PPC_FUNC_IMPL(__imp__sub_83123C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r3,r11,27308
	ctx.r3.s64 = ctx.r11.s64 + 27308;
	// bl 0x82616000
	ctx.lr = 0x83123CA0;
	sub_82616000(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-15568
	ctx.r3.s64 = ctx.r11.s64 + -15568;
	// bl 0x82e29708
	ctx.lr = 0x83123CAC;
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

__attribute__((alias("__imp__sub_83123CC0"))) PPC_WEAK_FUNC(sub_83123CC0);
PPC_FUNC_IMPL(__imp__sub_83123CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-27324
	ctx.r5.s64 = ctx.r10.s64 + -27324;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,-27376
	ctx.r4.s64 = ctx.r10.s64 + -27376;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,29764
	ctx.r31.s64 = ctx.r10.s64 + 29764;
	// addi r10,r11,-17088
	ctx.r10.s64 = ctx.r11.s64 + -17088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123D18;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-10072
	ctx.r3.s64 = ctx.r8.s64 + -10072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11536
	ctx.r11.s64 = ctx.r9.s64 + 11536;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13408
	ctx.r11.s64 = ctx.r10.s64 + -13408;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123D48;
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

__attribute__((alias("__imp__sub_83123D60"))) PPC_WEAK_FUNC(sub_83123D60);
PPC_FUNC_IMPL(__imp__sub_83123D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-27228
	ctx.r6.s64 = ctx.r10.s64 + -27228;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27252
	ctx.r5.s64 = ctx.r10.s64 + -27252;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,-27300
	ctx.r4.s64 = ctx.r10.s64 + -27300;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-32552
	ctx.r31.s64 = ctx.r10.s64 + -32552;
	// addi r10,r11,11968
	ctx.r10.s64 = ctx.r11.s64 + 11968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123DB8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-9992
	ctx.r3.s64 = ctx.r8.s64 + -9992;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11880
	ctx.r11.s64 = ctx.r9.s64 + 11880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13408
	ctx.r11.s64 = ctx.r10.s64 + -13408;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123DE8;
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

__attribute__((alias("__imp__sub_83123E00"))) PPC_WEAK_FUNC(sub_83123E00);
PPC_FUNC_IMPL(__imp__sub_83123E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-27324
	ctx.r5.s64 = ctx.r10.s64 + -27324;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,-27208
	ctx.r4.s64 = ctx.r10.s64 + -27208;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,31328
	ctx.r31.s64 = ctx.r10.s64 + 31328;
	// addi r10,r11,-17088
	ctx.r10.s64 = ctx.r11.s64 + -17088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123E58;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-9912
	ctx.r3.s64 = ctx.r8.s64 + -9912;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11536
	ctx.r11.s64 = ctx.r9.s64 + 11536;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13408
	ctx.r11.s64 = ctx.r10.s64 + -13408;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123E88;
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

__attribute__((alias("__imp__sub_83123EA0"))) PPC_WEAK_FUNC(sub_83123EA0);
PPC_FUNC_IMPL(__imp__sub_83123EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-27096
	ctx.r6.s64 = ctx.r10.s64 + -27096;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27252
	ctx.r5.s64 = ctx.r10.s64 + -27252;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,-27152
	ctx.r4.s64 = ctx.r10.s64 + -27152;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-32368
	ctx.r31.s64 = ctx.r10.s64 + -32368;
	// addi r10,r11,11968
	ctx.r10.s64 = ctx.r11.s64 + 11968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123EF8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-9832
	ctx.r3.s64 = ctx.r8.s64 + -9832;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11880
	ctx.r11.s64 = ctx.r9.s64 + 11880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13408
	ctx.r11.s64 = ctx.r10.s64 + -13408;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123F28;
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

__attribute__((alias("__imp__sub_83123F40"))) PPC_WEAK_FUNC(sub_83123F40);
PPC_FUNC_IMPL(__imp__sub_83123F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-27324
	ctx.r5.s64 = ctx.r10.s64 + -27324;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,-27068
	ctx.r4.s64 = ctx.r10.s64 + -27068;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-32184
	ctx.r31.s64 = ctx.r10.s64 + -32184;
	// addi r10,r11,-17088
	ctx.r10.s64 = ctx.r11.s64 + -17088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83123F98;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-9752
	ctx.r3.s64 = ctx.r8.s64 + -9752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11536
	ctx.r11.s64 = ctx.r9.s64 + 11536;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13408
	ctx.r11.s64 = ctx.r10.s64 + -13408;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83123FC8;
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

__attribute__((alias("__imp__sub_83123FE0"))) PPC_WEAK_FUNC(sub_83123FE0);
PPC_FUNC_IMPL(__imp__sub_83123FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-26956
	ctx.r6.s64 = ctx.r10.s64 + -26956;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27252
	ctx.r5.s64 = ctx.r10.s64 + -27252;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,-27012
	ctx.r4.s64 = ctx.r10.s64 + -27012;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,28936
	ctx.r31.s64 = ctx.r10.s64 + 28936;
	// addi r10,r11,11968
	ctx.r10.s64 = ctx.r11.s64 + 11968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83124038;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-9672
	ctx.r3.s64 = ctx.r8.s64 + -9672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11880
	ctx.r11.s64 = ctx.r9.s64 + 11880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13408
	ctx.r11.s64 = ctx.r10.s64 + -13408;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83124068;
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

__attribute__((alias("__imp__sub_83124080"))) PPC_WEAK_FUNC(sub_83124080);
PPC_FUNC_IMPL(__imp__sub_83124080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-27324
	ctx.r5.s64 = ctx.r10.s64 + -27324;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,-26928
	ctx.r4.s64 = ctx.r10.s64 + -26928;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,32524
	ctx.r31.s64 = ctx.r10.s64 + 32524;
	// addi r10,r11,-17088
	ctx.r10.s64 = ctx.r11.s64 + -17088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831240D8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-9592
	ctx.r3.s64 = ctx.r8.s64 + -9592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11536
	ctx.r11.s64 = ctx.r9.s64 + 11536;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13408
	ctx.r11.s64 = ctx.r10.s64 + -13408;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83124108;
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

__attribute__((alias("__imp__sub_83124120"))) PPC_WEAK_FUNC(sub_83124120);
PPC_FUNC_IMPL(__imp__sub_83124120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-26832
	ctx.r6.s64 = ctx.r10.s64 + -26832;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27252
	ctx.r5.s64 = ctx.r10.s64 + -27252;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,-26880
	ctx.r4.s64 = ctx.r10.s64 + -26880;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,31880
	ctx.r31.s64 = ctx.r10.s64 + 31880;
	// addi r10,r11,11968
	ctx.r10.s64 = ctx.r11.s64 + 11968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83124178;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-9512
	ctx.r3.s64 = ctx.r8.s64 + -9512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11880
	ctx.r11.s64 = ctx.r9.s64 + 11880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13408
	ctx.r11.s64 = ctx.r10.s64 + -13408;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831241A8;
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

__attribute__((alias("__imp__sub_831241C0"))) PPC_WEAK_FUNC(sub_831241C0);
PPC_FUNC_IMPL(__imp__sub_831241C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-27324
	ctx.r5.s64 = ctx.r10.s64 + -27324;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,-26808
	ctx.r4.s64 = ctx.r10.s64 + -26808;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,30408
	ctx.r31.s64 = ctx.r10.s64 + 30408;
	// addi r10,r11,-17088
	ctx.r10.s64 = ctx.r11.s64 + -17088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83124218;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-9432
	ctx.r3.s64 = ctx.r8.s64 + -9432;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11536
	ctx.r11.s64 = ctx.r9.s64 + 11536;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13408
	ctx.r11.s64 = ctx.r10.s64 + -13408;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83124248;
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

__attribute__((alias("__imp__sub_83124260"))) PPC_WEAK_FUNC(sub_83124260);
PPC_FUNC_IMPL(__imp__sub_83124260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,-26716
	ctx.r6.s64 = ctx.r10.s64 + -26716;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-27252
	ctx.r5.s64 = ctx.r10.s64 + -27252;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,-26760
	ctx.r4.s64 = ctx.r10.s64 + -26760;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-31540
	ctx.r31.s64 = ctx.r10.s64 + -31540;
	// addi r10,r11,11968
	ctx.r10.s64 = ctx.r11.s64 + 11968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831242B8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-9352
	ctx.r3.s64 = ctx.r8.s64 + -9352;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11880
	ctx.r11.s64 = ctx.r9.s64 + 11880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-13408
	ctx.r11.s64 = ctx.r10.s64 + -13408;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831242E8;
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

__attribute__((alias("__imp__sub_83124300"))) PPC_WEAK_FUNC(sub_83124300);
PPC_FUNC_IMPL(__imp__sub_83124300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-26672
	ctx.r5.s64 = ctx.r10.s64 + -26672;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,-26700
	ctx.r4.s64 = ctx.r10.s64 + -26700;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,27576
	ctx.r31.s64 = ctx.r10.s64 + 27576;
	// addi r10,r11,-17088
	ctx.r10.s64 = ctx.r11.s64 + -17088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83124358;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-9272
	ctx.r3.s64 = ctx.r8.s64 + -9272;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,11536
	ctx.r11.s64 = ctx.r9.s64 + 11536;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-15480
	ctx.r11.s64 = ctx.r10.s64 + -15480;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83124388;
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

__attribute__((alias("__imp__sub_831243A0"))) PPC_WEAK_FUNC(sub_831243A0);
PPC_FUNC_IMPL(__imp__sub_831243A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,-26616
	ctx.r5.s64 = ctx.r10.s64 + -26616;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r4,r10,-26644
	ctx.r4.s64 = ctx.r10.s64 + -26644;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r10,27856
	ctx.r31.s64 = ctx.r10.s64 + 27856;
	// addi r10,r11,18808
	ctx.r10.s64 = ctx.r11.s64 + 18808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831243F8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-9192
	ctx.r3.s64 = ctx.r8.s64 + -9192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,18880
	ctx.r11.s64 = ctx.r9.s64 + 18880;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-15480
	ctx.r11.s64 = ctx.r10.s64 + -15480;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83124428;
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

__attribute__((alias("__imp__sub_83124440"))) PPC_WEAK_FUNC(sub_83124440);
PPC_FUNC_IMPL(__imp__sub_83124440) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r5,r9,-26564
	ctx.r5.s64 = ctx.r9.s64 + -26564;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,7472
	ctx.r6.s64 = ctx.r11.s64 + 7472;
	// li r8,68
	ctx.r8.s64 = 68;
	// li r7,433
	ctx.r7.s64 = 433;
	// addi r4,r9,-26588
	ctx.r4.s64 = ctx.r9.s64 + -26588;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,27260
	ctx.r3.s64 = ctx.r9.s64 + 27260;
	// addi r10,r10,18040
	ctx.r10.s64 = ctx.r10.s64 + 18040;
	// addi r9,r11,-22736
	ctx.r9.s64 = ctx.r11.s64 + -22736;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x831244A0;
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

__attribute__((alias("__imp__sub_831244B0"))) PPC_WEAK_FUNC(sub_831244B0);
PPC_FUNC_IMPL(__imp__sub_831244B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-15552
	ctx.r3.s64 = ctx.r11.s64 + -15552;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831244C0"))) PPC_WEAK_FUNC(sub_831244C0);
PPC_FUNC_IMPL(__imp__sub_831244C0) {
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
	// addi r11,r11,-30432
	ctx.r11.s64 = ctx.r11.s64 + -30432;
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

__attribute__((alias("__imp__sub_831244F0"))) PPC_WEAK_FUNC(sub_831244F0);
PPC_FUNC_IMPL(__imp__sub_831244F0) {
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
	// addi r11,r11,-30320
	ctx.r11.s64 = ctx.r11.s64 + -30320;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124520"))) PPC_WEAK_FUNC(sub_83124520);
PPC_FUNC_IMPL(__imp__sub_83124520) {
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
	// addi r11,r11,-30256
	ctx.r11.s64 = ctx.r11.s64 + -30256;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124568"))) PPC_WEAK_FUNC(sub_83124568);
PPC_FUNC_IMPL(__imp__sub_83124568) {
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
	// addi r11,r11,-30416
	ctx.r11.s64 = ctx.r11.s64 + -30416;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831245B0"))) PPC_WEAK_FUNC(sub_831245B0);
PPC_FUNC_IMPL(__imp__sub_831245B0) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r5,r9,7652
	ctx.r5.s64 = ctx.r9.s64 + 7652;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,7472
	ctx.r6.s64 = ctx.r11.s64 + 7472;
	// li r8,78
	ctx.r8.s64 = 78;
	// li r7,362
	ctx.r7.s64 = 362;
	// addi r4,r9,7628
	ctx.r4.s64 = ctx.r9.s64 + 7628;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-30544
	ctx.r3.s64 = ctx.r9.s64 + -30544;
	// addi r10,r10,-4216
	ctx.r10.s64 = ctx.r10.s64 + -4216;
	// addi r9,r11,-27648
	ctx.r9.s64 = ctx.r11.s64 + -27648;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x83124610;
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

__attribute__((alias("__imp__sub_83124620"))) PPC_WEAK_FUNC(sub_83124620);
PPC_FUNC_IMPL(__imp__sub_83124620) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r5,r9,7652
	ctx.r5.s64 = ctx.r9.s64 + 7652;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-29568
	ctx.r6.s64 = ctx.r11.s64 + -29568;
	// li r8,78
	ctx.r8.s64 = 78;
	// li r7,405
	ctx.r7.s64 = 405;
	// addi r4,r9,7676
	ctx.r4.s64 = ctx.r9.s64 + 7676;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-30400
	ctx.r3.s64 = ctx.r9.s64 + -30400;
	// addi r10,r10,-4112
	ctx.r10.s64 = ctx.r10.s64 + -4112;
	// addi r9,r11,13256
	ctx.r9.s64 = ctx.r11.s64 + 13256;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x83124680;
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

__attribute__((alias("__imp__sub_83124690"))) PPC_WEAK_FUNC(sub_83124690);
PPC_FUNC_IMPL(__imp__sub_83124690) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r5,r9,7652
	ctx.r5.s64 = ctx.r9.s64 + 7652;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-29480
	ctx.r6.s64 = ctx.r11.s64 + -29480;
	// li r8,78
	ctx.r8.s64 = 78;
	// li r7,404
	ctx.r7.s64 = 404;
	// addi r4,r9,7704
	ctx.r4.s64 = ctx.r9.s64 + 7704;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-30496
	ctx.r3.s64 = ctx.r9.s64 + -30496;
	// addi r10,r10,-3984
	ctx.r10.s64 = ctx.r10.s64 + -3984;
	// addi r9,r11,-27552
	ctx.r9.s64 = ctx.r11.s64 + -27552;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x831246F0;
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

__attribute__((alias("__imp__sub_83124700"))) PPC_WEAK_FUNC(sub_83124700);
PPC_FUNC_IMPL(__imp__sub_83124700) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r5,r9,7652
	ctx.r5.s64 = ctx.r9.s64 + 7652;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,-29392
	ctx.r6.s64 = ctx.r11.s64 + -29392;
	// li r8,78
	ctx.r8.s64 = 78;
	// li r7,404
	ctx.r7.s64 = 404;
	// addi r4,r9,7732
	ctx.r4.s64 = ctx.r9.s64 + 7732;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-30820
	ctx.r3.s64 = ctx.r9.s64 + -30820;
	// addi r10,r10,-3888
	ctx.r10.s64 = ctx.r10.s64 + -3888;
	// addi r9,r11,13352
	ctx.r9.s64 = ctx.r11.s64 + 13352;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x83124760;
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

__attribute__((alias("__imp__sub_83124770"))) PPC_WEAK_FUNC(sub_83124770);
PPC_FUNC_IMPL(__imp__sub_83124770) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-30296
	ctx.r11.s64 = ctx.r11.s64 + -30296;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x823ece50
	ctx.lr = 0x83124794;
	sub_823ECE50(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-8536
	ctx.r3.s64 = ctx.r11.s64 + -8536;
	// bl 0x82e29708
	ctx.lr = 0x831247A0;
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

__attribute__((alias("__imp__sub_831247B0"))) PPC_WEAK_FUNC(sub_831247B0);
PPC_FUNC_IMPL(__imp__sub_831247B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-10252
	ctx.r4.s64 = ctx.r11.s64 + -10252;
	// bl 0x82429b48
	ctx.lr = 0x831247CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-30894(r11)
	PPC_STORE_U8(ctx.r11.u32 + -30894, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831247E8"))) PPC_WEAK_FUNC(sub_831247E8);
PPC_FUNC_IMPL(__imp__sub_831247E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-10248
	ctx.r4.s64 = ctx.r11.s64 + -10248;
	// bl 0x82429b48
	ctx.lr = 0x83124804;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-30895(r11)
	PPC_STORE_U8(ctx.r11.u32 + -30895, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124820"))) PPC_WEAK_FUNC(sub_83124820);
PPC_FUNC_IMPL(__imp__sub_83124820) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-10244
	ctx.r4.s64 = ctx.r11.s64 + -10244;
	// bl 0x82429b48
	ctx.lr = 0x8312483C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-30896(r11)
	PPC_STORE_U8(ctx.r11.u32 + -30896, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124858"))) PPC_WEAK_FUNC(sub_83124858);
PPC_FUNC_IMPL(__imp__sub_83124858) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-10240
	ctx.r4.s64 = ctx.r11.s64 + -10240;
	// bl 0x82429b48
	ctx.lr = 0x83124874;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-30893(r11)
	PPC_STORE_U8(ctx.r11.u32 + -30893, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124890"))) PPC_WEAK_FUNC(sub_83124890);
PPC_FUNC_IMPL(__imp__sub_83124890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,7792
	ctx.r5.s64 = ctx.r10.s64 + 7792;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,7764
	ctx.r4.s64 = ctx.r10.s64 + 7764;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-30700
	ctx.r31.s64 = ctx.r10.s64 + -30700;
	// addi r10,r11,8672
	ctx.r10.s64 = ctx.r11.s64 + 8672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831248E8;
	sub_8256D760(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// addi r11,r11,3684
	ctx.r11.s64 = ctx.r11.s64 + 3684;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-8336
	ctx.r3.s64 = ctx.r8.s64 + -8336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,22176
	ctx.r11.s64 = ctx.r9.s64 + 22176;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-25104
	ctx.r11.s64 = ctx.r10.s64 + -25104;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83124918;
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

__attribute__((alias("__imp__sub_83124930"))) PPC_WEAK_FUNC(sub_83124930);
PPC_FUNC_IMPL(__imp__sub_83124930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,7848
	ctx.r5.s64 = ctx.r10.s64 + 7848;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,7820
	ctx.r4.s64 = ctx.r10.s64 + 7820;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-30224
	ctx.r31.s64 = ctx.r10.s64 + -30224;
	// addi r10,r11,8824
	ctx.r10.s64 = ctx.r11.s64 + 8824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83124988;
	sub_8256D760(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// addi r11,r11,3684
	ctx.r11.s64 = ctx.r11.s64 + 3684;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-8464
	ctx.r3.s64 = ctx.r8.s64 + -8464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,23168
	ctx.r11.s64 = ctx.r9.s64 + 23168;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-25104
	ctx.r11.s64 = ctx.r10.s64 + -25104;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831249B8;
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

__attribute__((alias("__imp__sub_831249D0"))) PPC_WEAK_FUNC(sub_831249D0);
PPC_FUNC_IMPL(__imp__sub_831249D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-9208
	ctx.r3.s64 = ctx.r11.s64 + -9208;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x825f48b8
	ctx.lr = 0x831249F4;
	sub_825F48B8(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-8616
	ctx.r3.s64 = ctx.r11.s64 + -8616;
	// bl 0x82e29708
	ctx.lr = 0x83124A00;
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

__attribute__((alias("__imp__sub_83124A10"))) PPC_WEAK_FUNC(sub_83124A10);
PPC_FUNC_IMPL(__imp__sub_83124A10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-9184
	ctx.r3.s64 = ctx.r11.s64 + -9184;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x825f48b8
	ctx.lr = 0x83124A34;
	sub_825F48B8(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-8384
	ctx.r3.s64 = ctx.r11.s64 + -8384;
	// bl 0x82e29708
	ctx.lr = 0x83124A40;
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

__attribute__((alias("__imp__sub_83124A50"))) PPC_WEAK_FUNC(sub_83124A50);
PPC_FUNC_IMPL(__imp__sub_83124A50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-9160
	ctx.r3.s64 = ctx.r11.s64 + -9160;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x825f48b8
	ctx.lr = 0x83124A74;
	sub_825F48B8(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-8360
	ctx.r3.s64 = ctx.r11.s64 + -8360;
	// bl 0x82e29708
	ctx.lr = 0x83124A80;
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

__attribute__((alias("__imp__sub_83124A90"))) PPC_WEAK_FUNC(sub_83124A90);
PPC_FUNC_IMPL(__imp__sub_83124A90) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r5,r9,7904
	ctx.r5.s64 = ctx.r9.s64 + 7904;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,7472
	ctx.r6.s64 = ctx.r11.s64 + 7472;
	// li r7,400
	ctx.r7.s64 = 400;
	// addi r4,r9,7876
	ctx.r4.s64 = ctx.r9.s64 + 7876;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-30892
	ctx.r3.s64 = ctx.r9.s64 + -30892;
	// addi r10,r10,-25072
	ctx.r10.s64 = ctx.r10.s64 + -25072;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,-24152
	ctx.r9.s64 = ctx.r11.s64 + -24152;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x83124AEC;
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

__attribute__((alias("__imp__sub_83124B00"))) PPC_WEAK_FUNC(sub_83124B00);
PPC_FUNC_IMPL(__imp__sub_83124B00) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r5,r9,7948
	ctx.r5.s64 = ctx.r9.s64 + 7948;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,7472
	ctx.r6.s64 = ctx.r11.s64 + 7472;
	// li r8,68
	ctx.r8.s64 = 68;
	// li r7,434
	ctx.r7.s64 = 434;
	// addi r4,r9,7928
	ctx.r4.s64 = ctx.r9.s64 + 7928;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-30592
	ctx.r3.s64 = ctx.r9.s64 + -30592;
	// addi r10,r10,13880
	ctx.r10.s64 = ctx.r10.s64 + 13880;
	// addi r9,r11,1096
	ctx.r9.s64 = ctx.r11.s64 + 1096;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x83124B60;
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

__attribute__((alias("__imp__sub_83124B70"))) PPC_WEAK_FUNC(sub_83124B70);
PPC_FUNC_IMPL(__imp__sub_83124B70) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r5,r9,7948
	ctx.r5.s64 = ctx.r9.s64 + 7948;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,7472
	ctx.r6.s64 = ctx.r11.s64 + 7472;
	// li r7,339
	ctx.r7.s64 = 339;
	// addi r4,r9,7968
	ctx.r4.s64 = ctx.r9.s64 + 7968;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-30764
	ctx.r3.s64 = ctx.r9.s64 + -30764;
	// addi r10,r10,-25984
	ctx.r10.s64 = ctx.r10.s64 + -25984;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,1184
	ctx.r9.s64 = ctx.r11.s64 + 1184;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x829707d0
	ctx.lr = 0x83124BCC;
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

__attribute__((alias("__imp__sub_83124BE0"))) PPC_WEAK_FUNC(sub_83124BE0);
PPC_FUNC_IMPL(__imp__sub_83124BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31016
	ctx.r11.s64 = ctx.r11.s64 + -31016;
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// addi r3,r9,-8256
	ctx.r3.s64 = ctx.r9.s64 + -8256;
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
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124C68"))) PPC_WEAK_FUNC(sub_83124C68);
PPC_FUNC_IMPL(__imp__sub_83124C68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,7996
	ctx.r4.s64 = ctx.r10.s64 + 7996;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-208
	ctx.r5.s64 = ctx.r11.s64 + -208;
	// addi r3,r10,-30716
	ctx.r3.s64 = ctx.r10.s64 + -30716;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124C88"))) PPC_WEAK_FUNC(sub_83124C88);
PPC_FUNC_IMPL(__imp__sub_83124C88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8032
	ctx.r4.s64 = ctx.r10.s64 + 8032;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-19080
	ctx.r5.s64 = ctx.r11.s64 + -19080;
	// addi r3,r10,-30828
	ctx.r3.s64 = ctx.r10.s64 + -30828;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124CA8"))) PPC_WEAK_FUNC(sub_83124CA8);
PPC_FUNC_IMPL(__imp__sub_83124CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8068
	ctx.r4.s64 = ctx.r10.s64 + 8068;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-18984
	ctx.r5.s64 = ctx.r11.s64 + -18984;
	// addi r3,r10,-30116
	ctx.r3.s64 = ctx.r10.s64 + -30116;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124CC8"))) PPC_WEAK_FUNC(sub_83124CC8);
PPC_FUNC_IMPL(__imp__sub_83124CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8108
	ctx.r4.s64 = ctx.r10.s64 + 8108;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-18888
	ctx.r5.s64 = ctx.r11.s64 + -18888;
	// addi r3,r10,-30108
	ctx.r3.s64 = ctx.r10.s64 + -30108;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124CE8"))) PPC_WEAK_FUNC(sub_83124CE8);
PPC_FUNC_IMPL(__imp__sub_83124CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8148
	ctx.r4.s64 = ctx.r10.s64 + 8148;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-18792
	ctx.r5.s64 = ctx.r11.s64 + -18792;
	// addi r3,r10,-30232
	ctx.r3.s64 = ctx.r10.s64 + -30232;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124D08"))) PPC_WEAK_FUNC(sub_83124D08);
PPC_FUNC_IMPL(__imp__sub_83124D08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8188
	ctx.r4.s64 = ctx.r10.s64 + 8188;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-18704
	ctx.r5.s64 = ctx.r11.s64 + -18704;
	// addi r3,r10,-30304
	ctx.r3.s64 = ctx.r10.s64 + -30304;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124D28"))) PPC_WEAK_FUNC(sub_83124D28);
PPC_FUNC_IMPL(__imp__sub_83124D28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8224
	ctx.r4.s64 = ctx.r10.s64 + 8224;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-18480
	ctx.r5.s64 = ctx.r11.s64 + -18480;
	// addi r3,r10,-30772
	ctx.r3.s64 = ctx.r10.s64 + -30772;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124D48"))) PPC_WEAK_FUNC(sub_83124D48);
PPC_FUNC_IMPL(__imp__sub_83124D48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8256
	ctx.r4.s64 = ctx.r10.s64 + 8256;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-18392
	ctx.r5.s64 = ctx.r11.s64 + -18392;
	// addi r3,r10,-30336
	ctx.r3.s64 = ctx.r10.s64 + -30336;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124D68"))) PPC_WEAK_FUNC(sub_83124D68);
PPC_FUNC_IMPL(__imp__sub_83124D68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8292
	ctx.r4.s64 = ctx.r10.s64 + 8292;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-18304
	ctx.r5.s64 = ctx.r11.s64 + -18304;
	// addi r3,r10,-30100
	ctx.r3.s64 = ctx.r10.s64 + -30100;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124D88"))) PPC_WEAK_FUNC(sub_83124D88);
PPC_FUNC_IMPL(__imp__sub_83124D88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8336
	ctx.r4.s64 = ctx.r10.s64 + 8336;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-18216
	ctx.r5.s64 = ctx.r11.s64 + -18216;
	// addi r3,r10,-30608
	ctx.r3.s64 = ctx.r10.s64 + -30608;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124DA8"))) PPC_WEAK_FUNC(sub_83124DA8);
PPC_FUNC_IMPL(__imp__sub_83124DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8380
	ctx.r4.s64 = ctx.r10.s64 + 8380;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-18128
	ctx.r5.s64 = ctx.r11.s64 + -18128;
	// addi r3,r10,-30440
	ctx.r3.s64 = ctx.r10.s64 + -30440;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124DC8"))) PPC_WEAK_FUNC(sub_83124DC8);
PPC_FUNC_IMPL(__imp__sub_83124DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8424
	ctx.r4.s64 = ctx.r10.s64 + 8424;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-18040
	ctx.r5.s64 = ctx.r11.s64 + -18040;
	// addi r3,r10,-30092
	ctx.r3.s64 = ctx.r10.s64 + -30092;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124DE8"))) PPC_WEAK_FUNC(sub_83124DE8);
PPC_FUNC_IMPL(__imp__sub_83124DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8476
	ctx.r4.s64 = ctx.r10.s64 + 8476;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-120
	ctx.r5.s64 = ctx.r11.s64 + -120;
	// addi r3,r10,-30844
	ctx.r3.s64 = ctx.r10.s64 + -30844;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124E08"))) PPC_WEAK_FUNC(sub_83124E08);
PPC_FUNC_IMPL(__imp__sub_83124E08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8508
	ctx.r4.s64 = ctx.r10.s64 + 8508;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,-32
	ctx.r5.s64 = ctx.r11.s64 + -32;
	// addi r3,r10,-30240
	ctx.r3.s64 = ctx.r10.s64 + -30240;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124E28"))) PPC_WEAK_FUNC(sub_83124E28);
PPC_FUNC_IMPL(__imp__sub_83124E28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8548
	ctx.r4.s64 = ctx.r10.s64 + 8548;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,56
	ctx.r5.s64 = ctx.r11.s64 + 56;
	// addi r3,r10,-30904
	ctx.r3.s64 = ctx.r10.s64 + -30904;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124E48"))) PPC_WEAK_FUNC(sub_83124E48);
PPC_FUNC_IMPL(__imp__sub_83124E48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8588
	ctx.r4.s64 = ctx.r10.s64 + 8588;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,152
	ctx.r5.s64 = ctx.r11.s64 + 152;
	// addi r3,r10,-30328
	ctx.r3.s64 = ctx.r10.s64 + -30328;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124E68"))) PPC_WEAK_FUNC(sub_83124E68);
PPC_FUNC_IMPL(__imp__sub_83124E68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8624
	ctx.r4.s64 = ctx.r10.s64 + 8624;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,240
	ctx.r5.s64 = ctx.r11.s64 + 240;
	// addi r3,r10,-30124
	ctx.r3.s64 = ctx.r10.s64 + -30124;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124E88"))) PPC_WEAK_FUNC(sub_83124E88);
PPC_FUNC_IMPL(__imp__sub_83124E88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8664
	ctx.r4.s64 = ctx.r10.s64 + 8664;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,336
	ctx.r5.s64 = ctx.r11.s64 + 336;
	// addi r3,r10,-30600
	ctx.r3.s64 = ctx.r10.s64 + -30600;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124EA8"))) PPC_WEAK_FUNC(sub_83124EA8);
PPC_FUNC_IMPL(__imp__sub_83124EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8696
	ctx.r4.s64 = ctx.r10.s64 + 8696;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,512
	ctx.r5.s64 = ctx.r11.s64 + 512;
	// addi r3,r10,-30708
	ctx.r3.s64 = ctx.r10.s64 + -30708;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124EC8"))) PPC_WEAK_FUNC(sub_83124EC8);
PPC_FUNC_IMPL(__imp__sub_83124EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8728
	ctx.r4.s64 = ctx.r10.s64 + 8728;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,608
	ctx.r5.s64 = ctx.r11.s64 + 608;
	// addi r3,r10,-30352
	ctx.r3.s64 = ctx.r10.s64 + -30352;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124EE8"))) PPC_WEAK_FUNC(sub_83124EE8);
PPC_FUNC_IMPL(__imp__sub_83124EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8760
	ctx.r4.s64 = ctx.r10.s64 + 8760;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,784
	ctx.r5.s64 = ctx.r11.s64 + 784;
	// addi r3,r10,-30836
	ctx.r3.s64 = ctx.r10.s64 + -30836;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124F08"))) PPC_WEAK_FUNC(sub_83124F08);
PPC_FUNC_IMPL(__imp__sub_83124F08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8792
	ctx.r4.s64 = ctx.r10.s64 + 8792;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,1008
	ctx.r5.s64 = ctx.r11.s64 + 1008;
	// addi r3,r10,-30132
	ctx.r3.s64 = ctx.r10.s64 + -30132;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124F28"))) PPC_WEAK_FUNC(sub_83124F28);
PPC_FUNC_IMPL(__imp__sub_83124F28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8824
	ctx.r4.s64 = ctx.r10.s64 + 8824;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,1096
	ctx.r5.s64 = ctx.r11.s64 + 1096;
	// addi r3,r10,-30448
	ctx.r3.s64 = ctx.r10.s64 + -30448;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124F48"))) PPC_WEAK_FUNC(sub_83124F48);
PPC_FUNC_IMPL(__imp__sub_83124F48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r4,r10,8856
	ctx.r4.s64 = ctx.r10.s64 + 8856;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r5,r11,1184
	ctx.r5.s64 = ctx.r11.s64 + 1184;
	// addi r3,r10,-30344
	ctx.r3.s64 = ctx.r10.s64 + -30344;
	// b 0x825b9078
	sub_825B9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83124F68"))) PPC_WEAK_FUNC(sub_83124F68);
PPC_FUNC_IMPL(__imp__sub_83124F68) {
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
	// addi r11,r11,-29648
	ctx.r11.s64 = ctx.r11.s64 + -29648;
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

__attribute__((alias("__imp__sub_83124F98"))) PPC_WEAK_FUNC(sub_83124F98);
PPC_FUNC_IMPL(__imp__sub_83124F98) {
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
	// addi r11,r11,-29616
	ctx.r11.s64 = ctx.r11.s64 + -29616;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83124FC8"))) PPC_WEAK_FUNC(sub_83124FC8);
PPC_FUNC_IMPL(__imp__sub_83124FC8) {
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
	// addi r11,r11,-29600
	ctx.r11.s64 = ctx.r11.s64 + -29600;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125010"))) PPC_WEAK_FUNC(sub_83125010);
PPC_FUNC_IMPL(__imp__sub_83125010) {
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
	// addi r11,r11,-29632
	ctx.r11.s64 = ctx.r11.s64 + -29632;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125058"))) PPC_WEAK_FUNC(sub_83125058);
PPC_FUNC_IMPL(__imp__sub_83125058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-8104
	ctx.r3.s64 = ctx.r11.s64 + -8104;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125068"))) PPC_WEAK_FUNC(sub_83125068);
PPC_FUNC_IMPL(__imp__sub_83125068) {
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
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r5,r9,21848
	ctx.r5.s64 = ctx.r9.s64 + 21848;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,4768
	ctx.r6.s64 = ctx.r11.s64 + 4768;
	// li r7,339
	ctx.r7.s64 = 339;
	// addi r4,r9,21816
	ctx.r4.s64 = ctx.r9.s64 + 21816;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-29756
	ctx.r3.s64 = ctx.r9.s64 + -29756;
	// addi r10,r10,-29264
	ctx.r10.s64 = ctx.r10.s64 + -29264;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r11,28216
	ctx.r9.s64 = ctx.r11.s64 + 28216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x831250C4;
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

__attribute__((alias("__imp__sub_831250D8"))) PPC_WEAK_FUNC(sub_831250D8);
PPC_FUNC_IMPL(__imp__sub_831250D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-8080
	ctx.r3.s64 = ctx.r11.s64 + -8080;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831250E8"))) PPC_WEAK_FUNC(sub_831250E8);
PPC_FUNC_IMPL(__imp__sub_831250E8) {
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
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r5,r9,22076
	ctx.r5.s64 = ctx.r9.s64 + 22076;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,10776
	ctx.r6.s64 = ctx.r11.s64 + 10776;
	// li r8,79
	ctx.r8.s64 = 79;
	// li r7,441
	ctx.r7.s64 = 441;
	// addi r4,r9,22048
	ctx.r4.s64 = ctx.r9.s64 + 22048;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-29840
	ctx.r3.s64 = ctx.r9.s64 + -29840;
	// addi r10,r10,-20424
	ctx.r10.s64 = ctx.r10.s64 + -20424;
	// addi r9,r11,9512
	ctx.r9.s64 = ctx.r11.s64 + 9512;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x83125148;
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

__attribute__((alias("__imp__sub_83125158"))) PPC_WEAK_FUNC(sub_83125158);
PPC_FUNC_IMPL(__imp__sub_83125158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-8056
	ctx.r3.s64 = ctx.r11.s64 + -8056;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83125168"))) PPC_WEAK_FUNC(sub_83125168);
PPC_FUNC_IMPL(__imp__sub_83125168) {
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
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r5,r9,22076
	ctx.r5.s64 = ctx.r9.s64 + 22076;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r6,r11,4768
	ctx.r6.s64 = ctx.r11.s64 + 4768;
	// li r8,79
	ctx.r8.s64 = 79;
	// li r7,441
	ctx.r7.s64 = 441;
	// addi r4,r9,22136
	ctx.r4.s64 = ctx.r9.s64 + 22136;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r3,r9,-29708
	ctx.r3.s64 = ctx.r9.s64 + -29708;
	// addi r10,r10,-17352
	ctx.r10.s64 = ctx.r10.s64 + -17352;
	// addi r9,r11,-17248
	ctx.r9.s64 = ctx.r11.s64 + -17248;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x829707d0
	ctx.lr = 0x831251C8;
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

__attribute__((alias("__imp__sub_831251D8"))) PPC_WEAK_FUNC(sub_831251D8);
PPC_FUNC_IMPL(__imp__sub_831251D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,22220
	ctx.r5.s64 = ctx.r10.s64 + 22220;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,22160
	ctx.r4.s64 = ctx.r10.s64 + 22160;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-28536
	ctx.r31.s64 = ctx.r10.s64 + -28536;
	// addi r10,r11,-19592
	ctx.r10.s64 = ctx.r11.s64 + -19592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125230;
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
	// addi r3,r8,-6496
	ctx.r3.s64 = ctx.r8.s64 + -6496;
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
	ctx.lr = 0x83125260;
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

__attribute__((alias("__imp__sub_83125278"))) PPC_WEAK_FUNC(sub_83125278);
PPC_FUNC_IMPL(__imp__sub_83125278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,31544
	ctx.r9.s64 = ctx.r10.s64 + 31544;
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
	// addi r5,r10,22304
	ctx.r5.s64 = ctx.r10.s64 + 22304;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,22244
	ctx.r4.s64 = ctx.r10.s64 + 22244;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-28076
	ctx.r31.s64 = ctx.r10.s64 + -28076;
	// addi r10,r11,248
	ctx.r10.s64 = ctx.r11.s64 + 248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831252D0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-8016
	ctx.r3.s64 = ctx.r8.s64 + -8016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23368
	ctx.r11.s64 = ctx.r9.s64 + -23368;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,3984
	ctx.r11.s64 = ctx.r10.s64 + 3984;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125300;
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

__attribute__((alias("__imp__sub_83125318"))) PPC_WEAK_FUNC(sub_83125318);
PPC_FUNC_IMPL(__imp__sub_83125318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,22220
	ctx.r5.s64 = ctx.r10.s64 + 22220;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,22328
	ctx.r4.s64 = ctx.r10.s64 + 22328;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-29456
	ctx.r31.s64 = ctx.r10.s64 + -29456;
	// addi r10,r11,20176
	ctx.r10.s64 = ctx.r11.s64 + 20176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125370;
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
	// addi r3,r8,-7936
	ctx.r3.s64 = ctx.r8.s64 + -7936;
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
	ctx.lr = 0x831253A0;
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

__attribute__((alias("__imp__sub_831253B8"))) PPC_WEAK_FUNC(sub_831253B8);
PPC_FUNC_IMPL(__imp__sub_831253B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,25320
	ctx.r9.s64 = ctx.r10.s64 + 25320;
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
	// addi r5,r10,22304
	ctx.r5.s64 = ctx.r10.s64 + 22304;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,22384
	ctx.r4.s64 = ctx.r10.s64 + 22384;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-27984
	ctx.r31.s64 = ctx.r10.s64 + -27984;
	// addi r10,r11,-23280
	ctx.r10.s64 = ctx.r11.s64 + -23280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125410;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-7856
	ctx.r3.s64 = ctx.r8.s64 + -7856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23208
	ctx.r11.s64 = ctx.r9.s64 + -23208;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,26336
	ctx.r11.s64 = ctx.r10.s64 + 26336;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125440;
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

__attribute__((alias("__imp__sub_83125458"))) PPC_WEAK_FUNC(sub_83125458);
PPC_FUNC_IMPL(__imp__sub_83125458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,22220
	ctx.r5.s64 = ctx.r10.s64 + 22220;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,22440
	ctx.r4.s64 = ctx.r10.s64 + 22440;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-29548
	ctx.r31.s64 = ctx.r10.s64 + -29548;
	// addi r10,r11,-19592
	ctx.r10.s64 = ctx.r11.s64 + -19592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831254B0;
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
	// addi r3,r8,-7776
	ctx.r3.s64 = ctx.r8.s64 + -7776;
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
	ctx.lr = 0x831254E0;
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

__attribute__((alias("__imp__sub_831254F8"))) PPC_WEAK_FUNC(sub_831254F8);
PPC_FUNC_IMPL(__imp__sub_831254F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r9,r10,-31728
	ctx.r9.s64 = ctx.r10.s64 + -31728;
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
	// addi r5,r10,22304
	ctx.r5.s64 = ctx.r10.s64 + 22304;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,22504
	ctx.r4.s64 = ctx.r10.s64 + 22504;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-27708
	ctx.r31.s64 = ctx.r10.s64 + -27708;
	// addi r10,r11,248
	ctx.r10.s64 = ctx.r11.s64 + 248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125550;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-7696
	ctx.r3.s64 = ctx.r8.s64 + -7696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-23368
	ctx.r11.s64 = ctx.r9.s64 + -23368;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,26336
	ctx.r11.s64 = ctx.r10.s64 + 26336;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125580;
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

__attribute__((alias("__imp__sub_83125598"))) PPC_WEAK_FUNC(sub_83125598);
PPC_FUNC_IMPL(__imp__sub_83125598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-16664
	ctx.r9.s64 = ctx.r10.s64 + -16664;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,22564
	ctx.r4.s64 = ctx.r10.s64 + 22564;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-28904
	ctx.r31.s64 = ctx.r10.s64 + -28904;
	// addi r10,r11,-29944
	ctx.r10.s64 = ctx.r11.s64 + -29944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831255F0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-6416
	ctx.r3.s64 = ctx.r8.s64 + -6416;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,31728
	ctx.r11.s64 = ctx.r9.s64 + 31728;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18744
	ctx.r11.s64 = ctx.r10.s64 + 18744;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125620;
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

__attribute__((alias("__imp__sub_83125638"))) PPC_WEAK_FUNC(sub_83125638);
PPC_FUNC_IMPL(__imp__sub_83125638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-16576
	ctx.r9.s64 = ctx.r10.s64 + -16576;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,22612
	ctx.r4.s64 = ctx.r10.s64 + 22612;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-27892
	ctx.r31.s64 = ctx.r10.s64 + -27892;
	// addi r10,r11,-23120
	ctx.r10.s64 = ctx.r11.s64 + -23120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125690;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-7616
	ctx.r3.s64 = ctx.r8.s64 + -7616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29760
	ctx.r11.s64 = ctx.r9.s64 + -29760;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,-12952
	ctx.r11.s64 = ctx.r10.s64 + -12952;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831256C0;
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

__attribute__((alias("__imp__sub_831256D8"))) PPC_WEAK_FUNC(sub_831256D8);
PPC_FUNC_IMPL(__imp__sub_831256D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-16576
	ctx.r9.s64 = ctx.r10.s64 + -16576;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,22680
	ctx.r4.s64 = ctx.r10.s64 + 22680;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-28812
	ctx.r31.s64 = ctx.r10.s64 + -28812;
	// addi r10,r11,-22336
	ctx.r10.s64 = ctx.r11.s64 + -22336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125730;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-7536
	ctx.r3.s64 = ctx.r8.s64 + -7536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29672
	ctx.r11.s64 = ctx.r9.s64 + -29672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125760;
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

__attribute__((alias("__imp__sub_83125778"))) PPC_WEAK_FUNC(sub_83125778);
PPC_FUNC_IMPL(__imp__sub_83125778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-16480
	ctx.r9.s64 = ctx.r10.s64 + -16480;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,22748
	ctx.r4.s64 = ctx.r10.s64 + 22748;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-29088
	ctx.r31.s64 = ctx.r10.s64 + -29088;
	// addi r10,r11,-21552
	ctx.r10.s64 = ctx.r11.s64 + -21552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831257D0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-7456
	ctx.r3.s64 = ctx.r8.s64 + -7456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29584
	ctx.r11.s64 = ctx.r9.s64 + -29584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125800;
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

__attribute__((alias("__imp__sub_83125818"))) PPC_WEAK_FUNC(sub_83125818);
PPC_FUNC_IMPL(__imp__sub_83125818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-16480
	ctx.r9.s64 = ctx.r10.s64 + -16480;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,22816
	ctx.r4.s64 = ctx.r10.s64 + 22816;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-28260
	ctx.r31.s64 = ctx.r10.s64 + -28260;
	// addi r10,r11,-20768
	ctx.r10.s64 = ctx.r11.s64 + -20768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125870;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-7376
	ctx.r3.s64 = ctx.r8.s64 + -7376;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29496
	ctx.r11.s64 = ctx.r9.s64 + -29496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831258A0;
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

__attribute__((alias("__imp__sub_831258B8"))) PPC_WEAK_FUNC(sub_831258B8);
PPC_FUNC_IMPL(__imp__sub_831258B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-16480
	ctx.r9.s64 = ctx.r10.s64 + -16480;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,22888
	ctx.r4.s64 = ctx.r10.s64 + 22888;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-27800
	ctx.r31.s64 = ctx.r10.s64 + -27800;
	// addi r10,r11,-19984
	ctx.r10.s64 = ctx.r11.s64 + -19984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125910;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-7296
	ctx.r3.s64 = ctx.r8.s64 + -7296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-29408
	ctx.r11.s64 = ctx.r9.s64 + -29408;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125940;
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

__attribute__((alias("__imp__sub_83125958"))) PPC_WEAK_FUNC(sub_83125958);
PPC_FUNC_IMPL(__imp__sub_83125958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-11248
	ctx.r9.s64 = ctx.r10.s64 + -11248;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,22960
	ctx.r4.s64 = ctx.r10.s64 + 22960;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-28352
	ctx.r31.s64 = ctx.r10.s64 + -28352;
	// addi r10,r11,-16384
	ctx.r10.s64 = ctx.r11.s64 + -16384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831259B0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-7216
	ctx.r3.s64 = ctx.r8.s64 + -7216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19200
	ctx.r11.s64 = ctx.r9.s64 + -19200;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x831259E0;
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

__attribute__((alias("__imp__sub_831259F8"))) PPC_WEAK_FUNC(sub_831259F8);
PPC_FUNC_IMPL(__imp__sub_831259F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-11440
	ctx.r9.s64 = ctx.r10.s64 + -11440;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,23032
	ctx.r4.s64 = ctx.r10.s64 + 23032;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-28720
	ctx.r31.s64 = ctx.r10.s64 + -28720;
	// addi r10,r11,-16192
	ctx.r10.s64 = ctx.r11.s64 + -16192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125A50;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-7136
	ctx.r3.s64 = ctx.r8.s64 + -7136;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19112
	ctx.r11.s64 = ctx.r9.s64 + -19112;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125A80;
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

__attribute__((alias("__imp__sub_83125A98"))) PPC_WEAK_FUNC(sub_83125A98);
PPC_FUNC_IMPL(__imp__sub_83125A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-11344
	ctx.r9.s64 = ctx.r10.s64 + -11344;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,23112
	ctx.r4.s64 = ctx.r10.s64 + 23112;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-28444
	ctx.r31.s64 = ctx.r10.s64 + -28444;
	// addi r10,r11,-16000
	ctx.r10.s64 = ctx.r11.s64 + -16000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125AF0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-7056
	ctx.r3.s64 = ctx.r8.s64 + -7056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-19024
	ctx.r11.s64 = ctx.r9.s64 + -19024;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,14960
	ctx.r11.s64 = ctx.r10.s64 + 14960;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125B20;
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

__attribute__((alias("__imp__sub_83125B38"))) PPC_WEAK_FUNC(sub_83125B38);
PPC_FUNC_IMPL(__imp__sub_83125B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-11248
	ctx.r9.s64 = ctx.r10.s64 + -11248;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,23184
	ctx.r4.s64 = ctx.r10.s64 + 23184;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-28628
	ctx.r31.s64 = ctx.r10.s64 + -28628;
	// addi r10,r11,-15808
	ctx.r10.s64 = ctx.r11.s64 + -15808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125B90;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-6976
	ctx.r3.s64 = ctx.r8.s64 + -6976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-18936
	ctx.r11.s64 = ctx.r9.s64 + -18936;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125BC0;
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

__attribute__((alias("__imp__sub_83125BD8"))) PPC_WEAK_FUNC(sub_83125BD8);
PPC_FUNC_IMPL(__imp__sub_83125BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-11440
	ctx.r9.s64 = ctx.r10.s64 + -11440;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,23264
	ctx.r4.s64 = ctx.r10.s64 + 23264;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-28996
	ctx.r31.s64 = ctx.r10.s64 + -28996;
	// addi r10,r11,-15616
	ctx.r10.s64 = ctx.r11.s64 + -15616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125C30;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-6896
	ctx.r3.s64 = ctx.r8.s64 + -6896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-18848
	ctx.r11.s64 = ctx.r9.s64 + -18848;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125C60;
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

__attribute__((alias("__imp__sub_83125C78"))) PPC_WEAK_FUNC(sub_83125C78);
PPC_FUNC_IMPL(__imp__sub_83125C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-11344
	ctx.r9.s64 = ctx.r10.s64 + -11344;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,23344
	ctx.r4.s64 = ctx.r10.s64 + 23344;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-29272
	ctx.r31.s64 = ctx.r10.s64 + -29272;
	// addi r10,r11,-15424
	ctx.r10.s64 = ctx.r11.s64 + -15424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125CD0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-6816
	ctx.r3.s64 = ctx.r8.s64 + -6816;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-18760
	ctx.r11.s64 = ctx.r9.s64 + -18760;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18432
	ctx.r11.s64 = ctx.r10.s64 + 18432;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125D00;
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

__attribute__((alias("__imp__sub_83125D18"))) PPC_WEAK_FUNC(sub_83125D18);
PPC_FUNC_IMPL(__imp__sub_83125D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-11152
	ctx.r9.s64 = ctx.r10.s64 + -11152;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,23424
	ctx.r4.s64 = ctx.r10.s64 + 23424;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-29364
	ctx.r31.s64 = ctx.r10.s64 + -29364;
	// addi r10,r11,-15232
	ctx.r10.s64 = ctx.r11.s64 + -15232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125D70;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-6736
	ctx.r3.s64 = ctx.r8.s64 + -6736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-18672
	ctx.r11.s64 = ctx.r9.s64 + -18672;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125DA0;
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

__attribute__((alias("__imp__sub_83125DB8"))) PPC_WEAK_FUNC(sub_83125DB8);
PPC_FUNC_IMPL(__imp__sub_83125DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-11056
	ctx.r9.s64 = ctx.r10.s64 + -11056;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,23504
	ctx.r4.s64 = ctx.r10.s64 + 23504;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-28168
	ctx.r31.s64 = ctx.r10.s64 + -28168;
	// addi r10,r11,-15040
	ctx.r10.s64 = ctx.r11.s64 + -15040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125E10;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-6656
	ctx.r3.s64 = ctx.r8.s64 + -6656;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-18584
	ctx.r11.s64 = ctx.r9.s64 + -18584;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125E40;
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

__attribute__((alias("__imp__sub_83125E58"))) PPC_WEAK_FUNC(sub_83125E58);
PPC_FUNC_IMPL(__imp__sub_83125E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// addi r9,r10,-10960
	ctx.r9.s64 = ctx.r10.s64 + -10960;
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r4,r10,23584
	ctx.r4.s64 = ctx.r10.s64 + 23584;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-29180
	ctx.r31.s64 = ctx.r10.s64 + -29180;
	// addi r10,r11,-14848
	ctx.r10.s64 = ctx.r11.s64 + -14848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83125EB0;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-6576
	ctx.r3.s64 = ctx.r8.s64 + -6576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-18496
	ctx.r11.s64 = ctx.r9.s64 + -18496;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,18448
	ctx.r11.s64 = ctx.r10.s64 + 18448;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83125EE0;
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

__attribute__((alias("__imp__sub_83125EF8"))) PPC_WEAK_FUNC(sub_83125EF8);
PPC_FUNC_IMPL(__imp__sub_83125EF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-9124
	ctx.r4.s64 = ctx.r11.s64 + -9124;
	// bl 0x82429b48
	ctx.lr = 0x83125F14;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-29788(r11)
	PPC_STORE_U8(ctx.r11.u32 + -29788, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125F30"))) PPC_WEAK_FUNC(sub_83125F30);
PPC_FUNC_IMPL(__imp__sub_83125F30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-9120
	ctx.r4.s64 = ctx.r11.s64 + -9120;
	// bl 0x82429b48
	ctx.lr = 0x83125F4C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-29652(r11)
	PPC_STORE_U8(ctx.r11.u32 + -29652, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125F68"))) PPC_WEAK_FUNC(sub_83125F68);
PPC_FUNC_IMPL(__imp__sub_83125F68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-9116
	ctx.r4.s64 = ctx.r11.s64 + -9116;
	// bl 0x82429b48
	ctx.lr = 0x83125F84;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-29655(r11)
	PPC_STORE_U8(ctx.r11.u32 + -29655, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125FA0"))) PPC_WEAK_FUNC(sub_83125FA0);
PPC_FUNC_IMPL(__imp__sub_83125FA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-9112
	ctx.r4.s64 = ctx.r11.s64 + -9112;
	// bl 0x82429b48
	ctx.lr = 0x83125FBC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-29653(r11)
	PPC_STORE_U8(ctx.r11.u32 + -29653, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83125FD8"))) PPC_WEAK_FUNC(sub_83125FD8);
PPC_FUNC_IMPL(__imp__sub_83125FD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-9108
	ctx.r4.s64 = ctx.r11.s64 + -9108;
	// bl 0x82429b48
	ctx.lr = 0x83125FF4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-29787(r11)
	PPC_STORE_U8(ctx.r11.u32 + -29787, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83126010"))) PPC_WEAK_FUNC(sub_83126010);
PPC_FUNC_IMPL(__imp__sub_83126010) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-9104
	ctx.r4.s64 = ctx.r11.s64 + -9104;
	// bl 0x82429b48
	ctx.lr = 0x8312602C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-29651(r11)
	PPC_STORE_U8(ctx.r11.u32 + -29651, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83126048"))) PPC_WEAK_FUNC(sub_83126048);
PPC_FUNC_IMPL(__imp__sub_83126048) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-9100
	ctx.r4.s64 = ctx.r11.s64 + -9100;
	// bl 0x82429b48
	ctx.lr = 0x83126064;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-29785(r11)
	PPC_STORE_U8(ctx.r11.u32 + -29785, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83126080"))) PPC_WEAK_FUNC(sub_83126080);
PPC_FUNC_IMPL(__imp__sub_83126080) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-9096
	ctx.r4.s64 = ctx.r11.s64 + -9096;
	// bl 0x82429b48
	ctx.lr = 0x8312609C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-29656(r11)
	PPC_STORE_U8(ctx.r11.u32 + -29656, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831260B8"))) PPC_WEAK_FUNC(sub_831260B8);
PPC_FUNC_IMPL(__imp__sub_831260B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-9092
	ctx.r4.s64 = ctx.r11.s64 + -9092;
	// bl 0x82429b48
	ctx.lr = 0x831260D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-29786(r11)
	PPC_STORE_U8(ctx.r11.u32 + -29786, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831260F0"))) PPC_WEAK_FUNC(sub_831260F0);
PPC_FUNC_IMPL(__imp__sub_831260F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-9088
	ctx.r4.s64 = ctx.r11.s64 + -9088;
	// bl 0x82429b48
	ctx.lr = 0x8312610C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-29654(r11)
	PPC_STORE_U8(ctx.r11.u32 + -29654, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83126128"))) PPC_WEAK_FUNC(sub_83126128);
PPC_FUNC_IMPL(__imp__sub_83126128) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82545f48
	ctx.lr = 0x8312613C;
	sub_82545F48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,-29784
	ctx.r11.s64 = ctx.r11.s64 + -29784;
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

__attribute__((alias("__imp__sub_83126178"))) PPC_WEAK_FUNC(sub_83126178);
PPC_FUNC_IMPL(__imp__sub_83126178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-8032
	ctx.r3.s64 = ctx.r11.s64 + -8032;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83126188"))) PPC_WEAK_FUNC(sub_83126188);
PPC_FUNC_IMPL(__imp__sub_83126188) {
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
	// addi r11,r11,-24592
	ctx.r11.s64 = ctx.r11.s64 + -24592;
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

__attribute__((alias("__imp__sub_831261B8"))) PPC_WEAK_FUNC(sub_831261B8);
PPC_FUNC_IMPL(__imp__sub_831261B8) {
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
	// addi r11,r11,-24032
	ctx.r11.s64 = ctx.r11.s64 + -24032;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831261E8"))) PPC_WEAK_FUNC(sub_831261E8);
PPC_FUNC_IMPL(__imp__sub_831261E8) {
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
	// addi r11,r11,-24016
	ctx.r11.s64 = ctx.r11.s64 + -24016;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83126230"))) PPC_WEAK_FUNC(sub_83126230);
PPC_FUNC_IMPL(__imp__sub_83126230) {
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
	// addi r11,r11,-24384
	ctx.r11.s64 = ctx.r11.s64 + -24384;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83126278"))) PPC_WEAK_FUNC(sub_83126278);
PPC_FUNC_IMPL(__imp__sub_83126278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r11,-27472
	ctx.r10.s64 = ctx.r11.s64 + -27472;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r3,r11,-25568
	ctx.r3.s64 = ctx.r11.s64 + -25568;
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
	// b 0x826304f8
	sub_826304F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831262A8"))) PPC_WEAK_FUNC(sub_831262A8);
PPC_FUNC_IMPL(__imp__sub_831262A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-6944
	ctx.r3.s64 = ctx.r11.s64 + -6944;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x825f48b8
	ctx.lr = 0x831262CC;
	sub_825F48B8(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-5008
	ctx.r3.s64 = ctx.r11.s64 + -5008;
	// bl 0x82e29708
	ctx.lr = 0x831262D8;
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

__attribute__((alias("__imp__sub_831262E8"))) PPC_WEAK_FUNC(sub_831262E8);
PPC_FUNC_IMPL(__imp__sub_831262E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-18144
	ctx.r9.s64 = ctx.r10.s64 + -18144;
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
	// addi r4,r10,28688
	ctx.r4.s64 = ctx.r10.s64 + 28688;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-21952
	ctx.r31.s64 = ctx.r10.s64 + -21952;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126340;
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
	// addi r3,r8,1192
	ctx.r3.s64 = ctx.r8.s64 + 1192;
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
	ctx.lr = 0x83126370;
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

__attribute__((alias("__imp__sub_83126388"))) PPC_WEAK_FUNC(sub_83126388);
PPC_FUNC_IMPL(__imp__sub_83126388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-17992
	ctx.r9.s64 = ctx.r10.s64 + -17992;
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
	// addi r4,r10,28732
	ctx.r4.s64 = ctx.r10.s64 + 28732;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-19376
	ctx.r31.s64 = ctx.r10.s64 + -19376;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831263E0;
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
	// addi r3,r8,-4648
	ctx.r3.s64 = ctx.r8.s64 + -4648;
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
	ctx.lr = 0x83126410;
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

__attribute__((alias("__imp__sub_83126428"))) PPC_WEAK_FUNC(sub_83126428);
PPC_FUNC_IMPL(__imp__sub_83126428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-18144
	ctx.r9.s64 = ctx.r10.s64 + -18144;
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
	// addi r4,r10,28760
	ctx.r4.s64 = ctx.r10.s64 + 28760;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-19468
	ctx.r31.s64 = ctx.r10.s64 + -19468;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126480;
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
	// addi r3,r8,-4568
	ctx.r3.s64 = ctx.r8.s64 + -4568;
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
	ctx.lr = 0x831264B0;
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

__attribute__((alias("__imp__sub_831264C8"))) PPC_WEAK_FUNC(sub_831264C8);
PPC_FUNC_IMPL(__imp__sub_831264C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-17896
	ctx.r9.s64 = ctx.r10.s64 + -17896;
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
	// addi r4,r10,28804
	ctx.r4.s64 = ctx.r10.s64 + 28804;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-21124
	ctx.r31.s64 = ctx.r10.s64 + -21124;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126520;
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
	// addi r3,r8,-4488
	ctx.r3.s64 = ctx.r8.s64 + -4488;
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
	ctx.lr = 0x83126550;
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

__attribute__((alias("__imp__sub_83126568"))) PPC_WEAK_FUNC(sub_83126568);
PPC_FUNC_IMPL(__imp__sub_83126568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-17744
	ctx.r9.s64 = ctx.r10.s64 + -17744;
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
	// addi r4,r10,28828
	ctx.r4.s64 = ctx.r10.s64 + 28828;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-20756
	ctx.r31.s64 = ctx.r10.s64 + -20756;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831265C0;
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
	// addi r3,r8,-4408
	ctx.r3.s64 = ctx.r8.s64 + -4408;
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
	ctx.lr = 0x831265F0;
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

__attribute__((alias("__imp__sub_83126608"))) PPC_WEAK_FUNC(sub_83126608);
PPC_FUNC_IMPL(__imp__sub_83126608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-17896
	ctx.r9.s64 = ctx.r10.s64 + -17896;
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
	// addi r4,r10,28856
	ctx.r4.s64 = ctx.r10.s64 + 28856;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-18180
	ctx.r31.s64 = ctx.r10.s64 + -18180;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126660;
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
	// addi r3,r8,-4328
	ctx.r3.s64 = ctx.r8.s64 + -4328;
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
	ctx.lr = 0x83126690;
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

__attribute__((alias("__imp__sub_831266A8"))) PPC_WEAK_FUNC(sub_831266A8);
PPC_FUNC_IMPL(__imp__sub_831266A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-17648
	ctx.r9.s64 = ctx.r10.s64 + -17648;
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
	// addi r4,r10,28880
	ctx.r4.s64 = ctx.r10.s64 + 28880;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-17904
	ctx.r31.s64 = ctx.r10.s64 + -17904;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126700;
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
	// addi r3,r8,-4248
	ctx.r3.s64 = ctx.r8.s64 + -4248;
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
	ctx.lr = 0x83126730;
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

__attribute__((alias("__imp__sub_83126748"))) PPC_WEAK_FUNC(sub_83126748);
PPC_FUNC_IMPL(__imp__sub_83126748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-17496
	ctx.r9.s64 = ctx.r10.s64 + -17496;
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
	// addi r4,r10,28904
	ctx.r4.s64 = ctx.r10.s64 + 28904;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-18732
	ctx.r31.s64 = ctx.r10.s64 + -18732;
	// addi r10,r11,-5392
	ctx.r10.s64 = ctx.r11.s64 + -5392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831267A0;
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
	// addi r3,r8,-4168
	ctx.r3.s64 = ctx.r8.s64 + -4168;
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
	ctx.lr = 0x831267D0;
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

__attribute__((alias("__imp__sub_831267E8"))) PPC_WEAK_FUNC(sub_831267E8);
PPC_FUNC_IMPL(__imp__sub_831267E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r9,r10,-17648
	ctx.r9.s64 = ctx.r10.s64 + -17648;
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
	// addi r4,r10,28932
	ctx.r4.s64 = ctx.r10.s64 + 28932;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-19192
	ctx.r31.s64 = ctx.r10.s64 + -19192;
	// addi r10,r11,-15720
	ctx.r10.s64 = ctx.r11.s64 + -15720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x83126840;
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
	// addi r3,r8,-4088
	ctx.r3.s64 = ctx.r8.s64 + -4088;
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
	ctx.lr = 0x83126870;
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

__attribute__((alias("__imp__sub_83126888"))) PPC_WEAK_FUNC(sub_83126888);
PPC_FUNC_IMPL(__imp__sub_83126888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,28712
	ctx.r5.s64 = ctx.r10.s64 + 28712;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,28956
	ctx.r4.s64 = ctx.r10.s64 + 28956;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-22136
	ctx.r31.s64 = ctx.r10.s64 + -22136;
	// addi r10,r11,-14664
	ctx.r10.s64 = ctx.r11.s64 + -14664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x831268E0;
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
	// addi r3,r8,-4008
	ctx.r3.s64 = ctx.r8.s64 + -4008;
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
	ctx.lr = 0x83126910;
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

