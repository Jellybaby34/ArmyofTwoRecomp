#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8312F2B0"))) PPC_WEAK_FUNC(sub_8312F2B0);
PPC_FUNC_IMPL(__imp__sub_8312F2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25664(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25664);
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
	// addi r11,r11,-13232
	ctx.r11.s64 = ctx.r11.s64 + -13232;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F2D8"))) PPC_WEAK_FUNC(sub_8312F2D8);
PPC_FUNC_IMPL(__imp__sub_8312F2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-28496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28496);
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
	// addi r11,r11,-12976
	ctx.r11.s64 = ctx.r11.s64 + -12976;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F300"))) PPC_WEAK_FUNC(sub_8312F300);
PPC_FUNC_IMPL(__imp__sub_8312F300) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-12480
	ctx.r11.s64 = ctx.r11.s64 + -12480;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F330"))) PPC_WEAK_FUNC(sub_8312F330);
PPC_FUNC_IMPL(__imp__sub_8312F330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f13,-13880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13880);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-13200
	ctx.r11.s64 = ctx.r11.s64 + -13200;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F368"))) PPC_WEAK_FUNC(sub_8312F368);
PPC_FUNC_IMPL(__imp__sub_8312F368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,-13880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13880);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-12880
	ctx.r11.s64 = ctx.r11.s64 + -12880;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F3A0"))) PPC_WEAK_FUNC(sub_8312F3A0);
PPC_FUNC_IMPL(__imp__sub_8312F3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13880);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f13,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-13184
	ctx.r11.s64 = ctx.r11.s64 + -13184;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F3D8"))) PPC_WEAK_FUNC(sub_8312F3D8);
PPC_FUNC_IMPL(__imp__sub_8312F3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25668);
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
	// addi r11,r11,-13248
	ctx.r11.s64 = ctx.r11.s64 + -13248;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F400"))) PPC_WEAK_FUNC(sub_8312F400);
PPC_FUNC_IMPL(__imp__sub_8312F400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25672);
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
	// addi r11,r11,-13168
	ctx.r11.s64 = ctx.r11.s64 + -13168;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F428"))) PPC_WEAK_FUNC(sub_8312F428);
PPC_FUNC_IMPL(__imp__sub_8312F428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25676);
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
	// addi r11,r11,-12944
	ctx.r11.s64 = ctx.r11.s64 + -12944;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F450"))) PPC_WEAK_FUNC(sub_8312F450);
PPC_FUNC_IMPL(__imp__sub_8312F450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25680);
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
	// addi r11,r11,-13264
	ctx.r11.s64 = ctx.r11.s64 + -13264;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F478"))) PPC_WEAK_FUNC(sub_8312F478);
PPC_FUNC_IMPL(__imp__sub_8312F478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25684(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25684);
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
	// addi r11,r11,-12960
	ctx.r11.s64 = ctx.r11.s64 + -12960;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F4A0"))) PPC_WEAK_FUNC(sub_8312F4A0);
PPC_FUNC_IMPL(__imp__sub_8312F4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25688);
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
	// addi r11,r11,-13152
	ctx.r11.s64 = ctx.r11.s64 + -13152;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F4C8"))) PPC_WEAK_FUNC(sub_8312F4C8);
PPC_FUNC_IMPL(__imp__sub_8312F4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25692(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25692);
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
	// addi r11,r11,-13120
	ctx.r11.s64 = ctx.r11.s64 + -13120;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F4F0"))) PPC_WEAK_FUNC(sub_8312F4F0);
PPC_FUNC_IMPL(__imp__sub_8312F4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25696(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25696);
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
	// addi r11,r11,-13216
	ctx.r11.s64 = ctx.r11.s64 + -13216;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F518"))) PPC_WEAK_FUNC(sub_8312F518);
PPC_FUNC_IMPL(__imp__sub_8312F518) {
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
	// addi r11,r11,-12544
	ctx.r11.s64 = ctx.r11.s64 + -12544;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F540"))) PPC_WEAK_FUNC(sub_8312F540);
PPC_FUNC_IMPL(__imp__sub_8312F540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25700);
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
	// addi r11,r11,-12688
	ctx.r11.s64 = ctx.r11.s64 + -12688;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F568"))) PPC_WEAK_FUNC(sub_8312F568);
PPC_FUNC_IMPL(__imp__sub_8312F568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25704);
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
	// addi r11,r11,-13296
	ctx.r11.s64 = ctx.r11.s64 + -13296;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F590"))) PPC_WEAK_FUNC(sub_8312F590);
PPC_FUNC_IMPL(__imp__sub_8312F590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25708);
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
	// addi r11,r11,-13280
	ctx.r11.s64 = ctx.r11.s64 + -13280;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F5B8"))) PPC_WEAK_FUNC(sub_8312F5B8);
PPC_FUNC_IMPL(__imp__sub_8312F5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25712);
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
	// addi r11,r11,-12928
	ctx.r11.s64 = ctx.r11.s64 + -12928;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F5E0"))) PPC_WEAK_FUNC(sub_8312F5E0);
PPC_FUNC_IMPL(__imp__sub_8312F5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,25716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25716);
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
	// addi r11,r11,-12992
	ctx.r11.s64 = ctx.r11.s64 + -12992;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F608"))) PPC_WEAK_FUNC(sub_8312F608);
PPC_FUNC_IMPL(__imp__sub_8312F608) {
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
	// addi r11,r11,-12896
	ctx.r11.s64 = ctx.r11.s64 + -12896;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F630"))) PPC_WEAK_FUNC(sub_8312F630);
PPC_FUNC_IMPL(__imp__sub_8312F630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,-13892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r9,r10,-3112
	ctx.r9.s64 = ctx.r10.s64 + -3112;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
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
	// lfs f13,-13896(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
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

__attribute__((alias("__imp__sub_8312F6B0"))) PPC_WEAK_FUNC(sub_8312F6B0);
PPC_FUNC_IMPL(__imp__sub_8312F6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,14544
	ctx.r3.s64 = ctx.r11.s64 + 14544;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F6C0"))) PPC_WEAK_FUNC(sub_8312F6C0);
PPC_FUNC_IMPL(__imp__sub_8312F6C0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,385
	ctx.r3.s64 = 385;
	// addi r4,r11,-4988
	ctx.r4.s64 = ctx.r11.s64 + -4988;
	// bl 0x82429b48
	ctx.lr = 0x8312F6DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-13553(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13553, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F6F8"))) PPC_WEAK_FUNC(sub_8312F6F8);
PPC_FUNC_IMPL(__imp__sub_8312F6F8) {
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
	// addi r31,r11,-3040
	ctx.r31.s64 = ctx.r11.s64 + -3040;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0788
	ctx.lr = 0x8312F720;
	sub_822E0788(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,5168
	ctx.r3.s64 = ctx.r10.s64 + 5168;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312F734;
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

__attribute__((alias("__imp__sub_8312F748"))) PPC_WEAK_FUNC(sub_8312F748);
PPC_FUNC_IMPL(__imp__sub_8312F748) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-4980
	ctx.r4.s64 = ctx.r11.s64 + -4980;
	// bl 0x82429b48
	ctx.lr = 0x8312F764;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-13555(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13555, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F780"))) PPC_WEAK_FUNC(sub_8312F780);
PPC_FUNC_IMPL(__imp__sub_8312F780) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-4976
	ctx.r4.s64 = ctx.r11.s64 + -4976;
	// bl 0x82429b48
	ctx.lr = 0x8312F79C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-13559(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13559, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F7B8"))) PPC_WEAK_FUNC(sub_8312F7B8);
PPC_FUNC_IMPL(__imp__sub_8312F7B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-4972
	ctx.r4.s64 = ctx.r11.s64 + -4972;
	// bl 0x82429b48
	ctx.lr = 0x8312F7D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-13556(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13556, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F7F0"))) PPC_WEAK_FUNC(sub_8312F7F0);
PPC_FUNC_IMPL(__imp__sub_8312F7F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-4968
	ctx.r4.s64 = ctx.r11.s64 + -4968;
	// bl 0x82429b48
	ctx.lr = 0x8312F80C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-13558(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13558, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F828"))) PPC_WEAK_FUNC(sub_8312F828);
PPC_FUNC_IMPL(__imp__sub_8312F828) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-4964
	ctx.r4.s64 = ctx.r11.s64 + -4964;
	// bl 0x82429b48
	ctx.lr = 0x8312F844;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-13557(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13557, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F860"))) PPC_WEAK_FUNC(sub_8312F860);
PPC_FUNC_IMPL(__imp__sub_8312F860) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-4960
	ctx.r4.s64 = ctx.r11.s64 + -4960;
	// bl 0x82429b48
	ctx.lr = 0x8312F87C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-13554(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13554, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F898"))) PPC_WEAK_FUNC(sub_8312F898);
PPC_FUNC_IMPL(__imp__sub_8312F898) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-4956
	ctx.r4.s64 = ctx.r11.s64 + -4956;
	// bl 0x82429b48
	ctx.lr = 0x8312F8B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-13560(r11)
	PPC_STORE_U8(ctx.r11.u32 + -13560, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F8D0"))) PPC_WEAK_FUNC(sub_8312F8D0);
PPC_FUNC_IMPL(__imp__sub_8312F8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,4240
	ctx.r3.s64 = ctx.r11.s64 + 4240;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F8E0"))) PPC_WEAK_FUNC(sub_8312F8E0);
PPC_FUNC_IMPL(__imp__sub_8312F8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,4288
	ctx.r3.s64 = ctx.r11.s64 + 4288;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F8F0"))) PPC_WEAK_FUNC(sub_8312F8F0);
PPC_FUNC_IMPL(__imp__sub_8312F8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,164
	ctx.r5.s64 = ctx.r10.s64 + 164;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,140
	ctx.r4.s64 = ctx.r10.s64 + 140;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-13488
	ctx.r31.s64 = ctx.r10.s64 + -13488;
	// addi r10,r11,11400
	ctx.r10.s64 = ctx.r11.s64 + 11400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312F948;
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
	// addi r3,r8,14224
	ctx.r3.s64 = ctx.r8.s64 + 14224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-26240
	ctx.r11.s64 = ctx.r9.s64 + -26240;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312F978;
	sub_82E29708(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F990"))) PPC_WEAK_FUNC(sub_8312F990);
PPC_FUNC_IMPL(__imp__sub_8312F990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,212
	ctx.r5.s64 = ctx.r10.s64 + 212;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,188
	ctx.r4.s64 = ctx.r10.s64 + 188;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-13652
	ctx.r31.s64 = ctx.r10.s64 + -13652;
	// addi r10,r11,-22416
	ctx.r10.s64 = ctx.r11.s64 + -22416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312F9E8;
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
	// addi r3,r8,14304
	ctx.r3.s64 = ctx.r8.s64 + 14304;
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
	ctx.lr = 0x8312FA18;
	sub_82E29708(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FA30"))) PPC_WEAK_FUNC(sub_8312FA30);
PPC_FUNC_IMPL(__imp__sub_8312FA30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-12788
	ctx.r3.s64 = ctx.r11.s64 + -12788;
	// bl 0x82616000
	ctx.lr = 0x8312FA48;
	sub_82616000(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,4336
	ctx.r3.s64 = ctx.r11.s64 + 4336;
	// bl 0x82e29708
	ctx.lr = 0x8312FA54;
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

__attribute__((alias("__imp__sub_8312FA68"))) PPC_WEAK_FUNC(sub_8312FA68);
PPC_FUNC_IMPL(__imp__sub_8312FA68) {
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
	// addi r11,r11,2848
	ctx.r11.s64 = ctx.r11.s64 + 2848;
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

__attribute__((alias("__imp__sub_8312FA98"))) PPC_WEAK_FUNC(sub_8312FA98);
PPC_FUNC_IMPL(__imp__sub_8312FA98) {
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
	// addi r11,r11,4112
	ctx.r11.s64 = ctx.r11.s64 + 4112;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FAC8"))) PPC_WEAK_FUNC(sub_8312FAC8);
PPC_FUNC_IMPL(__imp__sub_8312FAC8) {
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
	// addi r11,r11,4208
	ctx.r11.s64 = ctx.r11.s64 + 4208;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FB10"))) PPC_WEAK_FUNC(sub_8312FB10);
PPC_FUNC_IMPL(__imp__sub_8312FB10) {
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
	// addi r11,r11,3152
	ctx.r11.s64 = ctx.r11.s64 + 3152;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FB58"))) PPC_WEAK_FUNC(sub_8312FB58);
PPC_FUNC_IMPL(__imp__sub_8312FB58) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,466
	ctx.r3.s64 = 466;
	// addi r4,r11,-1204
	ctx.r4.s64 = ctx.r11.s64 + -1204;
	// bl 0x82429b48
	ctx.lr = 0x8312FB74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,595(r11)
	PPC_STORE_U8(ctx.r11.u32 + 595, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FB90"))) PPC_WEAK_FUNC(sub_8312FB90);
PPC_FUNC_IMPL(__imp__sub_8312FB90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1200
	ctx.r4.s64 = ctx.r11.s64 + -1200;
	// bl 0x82429b48
	ctx.lr = 0x8312FBAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1700(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1700, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FBC8"))) PPC_WEAK_FUNC(sub_8312FBC8);
PPC_FUNC_IMPL(__imp__sub_8312FBC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1196
	ctx.r4.s64 = ctx.r11.s64 + -1196;
	// bl 0x82429b48
	ctx.lr = 0x8312FBE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3640(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3640, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FC00"))) PPC_WEAK_FUNC(sub_8312FC00);
PPC_FUNC_IMPL(__imp__sub_8312FC00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1192
	ctx.r4.s64 = ctx.r11.s64 + -1192;
	// bl 0x82429b48
	ctx.lr = 0x8312FC1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8312FC38"))) PPC_WEAK_FUNC(sub_8312FC38);
PPC_FUNC_IMPL(__imp__sub_8312FC38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1188
	ctx.r4.s64 = ctx.r11.s64 + -1188;
	// bl 0x82429b48
	ctx.lr = 0x8312FC54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8312FC70"))) PPC_WEAK_FUNC(sub_8312FC70);
PPC_FUNC_IMPL(__imp__sub_8312FC70) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,465
	ctx.r3.s64 = 465;
	// addi r4,r11,-1184
	ctx.r4.s64 = ctx.r11.s64 + -1184;
	// bl 0x82429b48
	ctx.lr = 0x8312FC8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4488(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4488, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FCA8"))) PPC_WEAK_FUNC(sub_8312FCA8);
PPC_FUNC_IMPL(__imp__sub_8312FCA8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,469
	ctx.r3.s64 = 469;
	// addi r4,r11,-1180
	ctx.r4.s64 = ctx.r11.s64 + -1180;
	// bl 0x82429b48
	ctx.lr = 0x8312FCC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5210(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5210, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FCE0"))) PPC_WEAK_FUNC(sub_8312FCE0);
PPC_FUNC_IMPL(__imp__sub_8312FCE0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,464
	ctx.r3.s64 = 464;
	// addi r4,r11,-1176
	ctx.r4.s64 = ctx.r11.s64 + -1176;
	// bl 0x82429b48
	ctx.lr = 0x8312FCFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-457(r11)
	PPC_STORE_U8(ctx.r11.u32 + -457, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FD18"))) PPC_WEAK_FUNC(sub_8312FD18);
PPC_FUNC_IMPL(__imp__sub_8312FD18) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,470
	ctx.r3.s64 = 470;
	// addi r4,r11,-1172
	ctx.r4.s64 = ctx.r11.s64 + -1172;
	// bl 0x82429b48
	ctx.lr = 0x8312FD34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-650(r11)
	PPC_STORE_U8(ctx.r11.u32 + -650, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FD50"))) PPC_WEAK_FUNC(sub_8312FD50);
PPC_FUNC_IMPL(__imp__sub_8312FD50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1168
	ctx.r4.s64 = ctx.r11.s64 + -1168;
	// bl 0x82429b48
	ctx.lr = 0x8312FD6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-342(r11)
	PPC_STORE_U8(ctx.r11.u32 + -342, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FD88"))) PPC_WEAK_FUNC(sub_8312FD88);
PPC_FUNC_IMPL(__imp__sub_8312FD88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1164
	ctx.r4.s64 = ctx.r11.s64 + -1164;
	// bl 0x82429b48
	ctx.lr = 0x8312FDA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8312FDC0"))) PPC_WEAK_FUNC(sub_8312FDC0);
PPC_FUNC_IMPL(__imp__sub_8312FDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,14656
	ctx.r3.s64 = ctx.r11.s64 + 14656;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312FDD0"))) PPC_WEAK_FUNC(sub_8312FDD0);
PPC_FUNC_IMPL(__imp__sub_8312FDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,14880
	ctx.r3.s64 = ctx.r11.s64 + 14880;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312FDE0"))) PPC_WEAK_FUNC(sub_8312FDE0);
PPC_FUNC_IMPL(__imp__sub_8312FDE0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,528
	ctx.r3.s64 = 528;
	// addi r4,r11,-1044
	ctx.r4.s64 = ctx.r11.s64 + -1044;
	// bl 0x82429b48
	ctx.lr = 0x8312FDFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_8312FE18"))) PPC_WEAK_FUNC(sub_8312FE18);
PPC_FUNC_IMPL(__imp__sub_8312FE18) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,501
	ctx.r3.s64 = 501;
	// addi r4,r11,-1040
	ctx.r4.s64 = ctx.r11.s64 + -1040;
	// bl 0x82429b48
	ctx.lr = 0x8312FE34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-688(r11)
	PPC_STORE_U8(ctx.r11.u32 + -688, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FE50"))) PPC_WEAK_FUNC(sub_8312FE50);
PPC_FUNC_IMPL(__imp__sub_8312FE50) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,503
	ctx.r3.s64 = 503;
	// addi r4,r11,-1036
	ctx.r4.s64 = ctx.r11.s64 + -1036;
	// bl 0x82429b48
	ctx.lr = 0x8312FE6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-253(r11)
	PPC_STORE_U8(ctx.r11.u32 + -253, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FE88"))) PPC_WEAK_FUNC(sub_8312FE88);
PPC_FUNC_IMPL(__imp__sub_8312FE88) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,509
	ctx.r3.s64 = 509;
	// addi r4,r11,-1032
	ctx.r4.s64 = ctx.r11.s64 + -1032;
	// bl 0x82429b48
	ctx.lr = 0x8312FEA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3272(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3272, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FEC0"))) PPC_WEAK_FUNC(sub_8312FEC0);
PPC_FUNC_IMPL(__imp__sub_8312FEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,6228
	ctx.r5.s64 = ctx.r10.s64 + 6228;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,6200
	ctx.r4.s64 = ctx.r10.s64 + 6200;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,1928
	ctx.r31.s64 = ctx.r10.s64 + 1928;
	// addi r10,r11,-10560
	ctx.r10.s64 = ctx.r11.s64 + -10560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312FF18;
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
	// addi r3,r8,14800
	ctx.r3.s64 = ctx.r8.s64 + 14800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,20008
	ctx.r11.s64 = ctx.r9.s64 + 20008;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312FF48;
	sub_82E29708(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FF60"))) PPC_WEAK_FUNC(sub_8312FF60);
PPC_FUNC_IMPL(__imp__sub_8312FF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// addi r9,r10,7472
	ctx.r9.s64 = ctx.r10.s64 + 7472;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,439
	ctx.r8.s64 = 439;
	// addi r6,r10,11968
	ctx.r6.s64 = ctx.r10.s64 + 11968;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r10,6284
	ctx.r5.s64 = ctx.r10.s64 + 6284;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,67
	ctx.r9.s64 = 67;
	// addi r4,r10,6256
	ctx.r4.s64 = ctx.r10.s64 + 6256;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r31,r10,-560
	ctx.r31.s64 = ctx.r10.s64 + -560;
	// addi r10,r11,-18368
	ctx.r10.s64 = ctx.r11.s64 + -18368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256d760
	ctx.lr = 0x8312FFB8;
	sub_8256D760(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,14720
	ctx.r3.s64 = ctx.r8.s64 + 14720;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r9,-2720
	ctx.r11.s64 = ctx.r9.s64 + -2720;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r10,13880
	ctx.r11.s64 = ctx.r10.s64 + 13880;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x8312FFE8;
	sub_82E29708(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130000"))) PPC_WEAK_FUNC(sub_83130000);
PPC_FUNC_IMPL(__imp__sub_83130000) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,3028
	ctx.r3.s64 = ctx.r11.s64 + 3028;
	// bl 0x82616000
	ctx.lr = 0x83130018;
	sub_82616000(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,14616
	ctx.r3.s64 = ctx.r11.s64 + 14616;
	// bl 0x82e29708
	ctx.lr = 0x83130024;
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

__attribute__((alias("__imp__sub_83130038"))) PPC_WEAK_FUNC(sub_83130038);
PPC_FUNC_IMPL(__imp__sub_83130038) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1028
	ctx.r4.s64 = ctx.r11.s64 + -1028;
	// bl 0x82429b48
	ctx.lr = 0x83130054;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4245(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4245, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130070"))) PPC_WEAK_FUNC(sub_83130070);
PPC_FUNC_IMPL(__imp__sub_83130070) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1024
	ctx.r4.s64 = ctx.r11.s64 + -1024;
	// bl 0x82429b48
	ctx.lr = 0x8313008C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3148, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831300A8"))) PPC_WEAK_FUNC(sub_831300A8);
PPC_FUNC_IMPL(__imp__sub_831300A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1020
	ctx.r4.s64 = ctx.r11.s64 + -1020;
	// bl 0x82429b48
	ctx.lr = 0x831300C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4572(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4572, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831300E0"))) PPC_WEAK_FUNC(sub_831300E0);
PPC_FUNC_IMPL(__imp__sub_831300E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1016
	ctx.r4.s64 = ctx.r11.s64 + -1016;
	// bl 0x82429b48
	ctx.lr = 0x831300FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83130118"))) PPC_WEAK_FUNC(sub_83130118);
PPC_FUNC_IMPL(__imp__sub_83130118) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1012
	ctx.r4.s64 = ctx.r11.s64 + -1012;
	// bl 0x82429b48
	ctx.lr = 0x83130134;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3673(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3673, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130150"))) PPC_WEAK_FUNC(sub_83130150);
PPC_FUNC_IMPL(__imp__sub_83130150) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1008
	ctx.r4.s64 = ctx.r11.s64 + -1008;
	// bl 0x82429b48
	ctx.lr = 0x8313016C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2973(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2973, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130188"))) PPC_WEAK_FUNC(sub_83130188);
PPC_FUNC_IMPL(__imp__sub_83130188) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1004
	ctx.r4.s64 = ctx.r11.s64 + -1004;
	// bl 0x82429b48
	ctx.lr = 0x831301A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2772(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2772, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831301C0"))) PPC_WEAK_FUNC(sub_831301C0);
PPC_FUNC_IMPL(__imp__sub_831301C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-1000
	ctx.r4.s64 = ctx.r11.s64 + -1000;
	// bl 0x82429b48
	ctx.lr = 0x831301DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,185(r11)
	PPC_STORE_U8(ctx.r11.u32 + 185, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831301F8"))) PPC_WEAK_FUNC(sub_831301F8);
PPC_FUNC_IMPL(__imp__sub_831301F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-996
	ctx.r4.s64 = ctx.r11.s64 + -996;
	// bl 0x82429b48
	ctx.lr = 0x83130214;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4195(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4195, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130230"))) PPC_WEAK_FUNC(sub_83130230);
PPC_FUNC_IMPL(__imp__sub_83130230) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-992
	ctx.r4.s64 = ctx.r11.s64 + -992;
	// bl 0x82429b48
	ctx.lr = 0x8313024C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4879(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4879, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130268"))) PPC_WEAK_FUNC(sub_83130268);
PPC_FUNC_IMPL(__imp__sub_83130268) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-988
	ctx.r4.s64 = ctx.r11.s64 + -988;
	// bl 0x82429b48
	ctx.lr = 0x83130284;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3149(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3149, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831302A0"))) PPC_WEAK_FUNC(sub_831302A0);
PPC_FUNC_IMPL(__imp__sub_831302A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-984
	ctx.r4.s64 = ctx.r11.s64 + -984;
	// bl 0x82429b48
	ctx.lr = 0x831302BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,362(r11)
	PPC_STORE_U8(ctx.r11.u32 + 362, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831302D8"))) PPC_WEAK_FUNC(sub_831302D8);
PPC_FUNC_IMPL(__imp__sub_831302D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-980
	ctx.r4.s64 = ctx.r11.s64 + -980;
	// bl 0x82429b48
	ctx.lr = 0x831302F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,451(r11)
	PPC_STORE_U8(ctx.r11.u32 + 451, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130310"))) PPC_WEAK_FUNC(sub_83130310);
PPC_FUNC_IMPL(__imp__sub_83130310) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-976
	ctx.r4.s64 = ctx.r11.s64 + -976;
	// bl 0x82429b48
	ctx.lr = 0x8313032C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3004(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3004, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130348"))) PPC_WEAK_FUNC(sub_83130348);
PPC_FUNC_IMPL(__imp__sub_83130348) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-972
	ctx.r4.s64 = ctx.r11.s64 + -972;
	// bl 0x82429b48
	ctx.lr = 0x83130364;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4680(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4680, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130380"))) PPC_WEAK_FUNC(sub_83130380);
PPC_FUNC_IMPL(__imp__sub_83130380) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-968
	ctx.r4.s64 = ctx.r11.s64 + -968;
	// bl 0x82429b48
	ctx.lr = 0x8313039C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4355(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4355, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831303B8"))) PPC_WEAK_FUNC(sub_831303B8);
PPC_FUNC_IMPL(__imp__sub_831303B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-964
	ctx.r4.s64 = ctx.r11.s64 + -964;
	// bl 0x82429b48
	ctx.lr = 0x831303D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1637(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1637, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831303F0"))) PPC_WEAK_FUNC(sub_831303F0);
PPC_FUNC_IMPL(__imp__sub_831303F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-960
	ctx.r4.s64 = ctx.r11.s64 + -960;
	// bl 0x82429b48
	ctx.lr = 0x8313040C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,837(r11)
	PPC_STORE_U8(ctx.r11.u32 + 837, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130428"))) PPC_WEAK_FUNC(sub_83130428);
PPC_FUNC_IMPL(__imp__sub_83130428) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-956
	ctx.r4.s64 = ctx.r11.s64 + -956;
	// bl 0x82429b48
	ctx.lr = 0x83130444;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,255(r11)
	PPC_STORE_U8(ctx.r11.u32 + 255, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130460"))) PPC_WEAK_FUNC(sub_83130460);
PPC_FUNC_IMPL(__imp__sub_83130460) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-952
	ctx.r4.s64 = ctx.r11.s64 + -952;
	// bl 0x82429b48
	ctx.lr = 0x8313047C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,531(r11)
	PPC_STORE_U8(ctx.r11.u32 + 531, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130498"))) PPC_WEAK_FUNC(sub_83130498);
PPC_FUNC_IMPL(__imp__sub_83130498) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-948
	ctx.r4.s64 = ctx.r11.s64 + -948;
	// bl 0x82429b48
	ctx.lr = 0x831304B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2360(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2360, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831304D0"))) PPC_WEAK_FUNC(sub_831304D0);
PPC_FUNC_IMPL(__imp__sub_831304D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-944
	ctx.r4.s64 = ctx.r11.s64 + -944;
	// bl 0x82429b48
	ctx.lr = 0x831304EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4508, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130508"))) PPC_WEAK_FUNC(sub_83130508);
PPC_FUNC_IMPL(__imp__sub_83130508) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,321
	ctx.r3.s64 = 321;
	// addi r4,r11,-940
	ctx.r4.s64 = ctx.r11.s64 + -940;
	// bl 0x82429b48
	ctx.lr = 0x83130524;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3182(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3182, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130540"))) PPC_WEAK_FUNC(sub_83130540);
PPC_FUNC_IMPL(__imp__sub_83130540) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,312
	ctx.r3.s64 = 312;
	// addi r4,r11,-936
	ctx.r4.s64 = ctx.r11.s64 + -936;
	// bl 0x82429b48
	ctx.lr = 0x8313055C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1846(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1846, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130578"))) PPC_WEAK_FUNC(sub_83130578);
PPC_FUNC_IMPL(__imp__sub_83130578) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,311
	ctx.r3.s64 = 311;
	// addi r4,r11,-932
	ctx.r4.s64 = ctx.r11.s64 + -932;
	// bl 0x82429b48
	ctx.lr = 0x83130594;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1632(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1632, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831305B0"))) PPC_WEAK_FUNC(sub_831305B0);
PPC_FUNC_IMPL(__imp__sub_831305B0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,309
	ctx.r3.s64 = 309;
	// addi r4,r11,-928
	ctx.r4.s64 = ctx.r11.s64 + -928;
	// bl 0x82429b48
	ctx.lr = 0x831305CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4295(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4295, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831305E8"))) PPC_WEAK_FUNC(sub_831305E8);
PPC_FUNC_IMPL(__imp__sub_831305E8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,307
	ctx.r3.s64 = 307;
	// addi r4,r11,-924
	ctx.r4.s64 = ctx.r11.s64 + -924;
	// bl 0x82429b48
	ctx.lr = 0x83130604;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2525(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2525, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130620"))) PPC_WEAK_FUNC(sub_83130620);
PPC_FUNC_IMPL(__imp__sub_83130620) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,306
	ctx.r3.s64 = 306;
	// addi r4,r11,-920
	ctx.r4.s64 = ctx.r11.s64 + -920;
	// bl 0x82429b48
	ctx.lr = 0x8313063C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,605(r11)
	PPC_STORE_U8(ctx.r11.u32 + 605, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130658"))) PPC_WEAK_FUNC(sub_83130658);
PPC_FUNC_IMPL(__imp__sub_83130658) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,305
	ctx.r3.s64 = 305;
	// addi r4,r11,-916
	ctx.r4.s64 = ctx.r11.s64 + -916;
	// bl 0x82429b48
	ctx.lr = 0x83130674;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1639(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1639, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130690"))) PPC_WEAK_FUNC(sub_83130690);
PPC_FUNC_IMPL(__imp__sub_83130690) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,313
	ctx.r3.s64 = 313;
	// addi r4,r11,-912
	ctx.r4.s64 = ctx.r11.s64 + -912;
	// bl 0x82429b48
	ctx.lr = 0x831306AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_831306C8"))) PPC_WEAK_FUNC(sub_831306C8);
PPC_FUNC_IMPL(__imp__sub_831306C8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,304
	ctx.r3.s64 = 304;
	// addi r4,r11,-908
	ctx.r4.s64 = ctx.r11.s64 + -908;
	// bl 0x82429b48
	ctx.lr = 0x831306E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4964(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4964, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130700"))) PPC_WEAK_FUNC(sub_83130700);
PPC_FUNC_IMPL(__imp__sub_83130700) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,547
	ctx.r3.s64 = 547;
	// addi r4,r11,-904
	ctx.r4.s64 = ctx.r11.s64 + -904;
	// bl 0x82429b48
	ctx.lr = 0x8313071C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2515(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2515, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130738"))) PPC_WEAK_FUNC(sub_83130738);
PPC_FUNC_IMPL(__imp__sub_83130738) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-900
	ctx.r4.s64 = ctx.r11.s64 + -900;
	// bl 0x82429b48
	ctx.lr = 0x83130754;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,886(r11)
	PPC_STORE_U8(ctx.r11.u32 + 886, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130770"))) PPC_WEAK_FUNC(sub_83130770);
PPC_FUNC_IMPL(__imp__sub_83130770) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-896
	ctx.r4.s64 = ctx.r11.s64 + -896;
	// bl 0x82429b48
	ctx.lr = 0x8313078C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2571(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2571, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831307A8"))) PPC_WEAK_FUNC(sub_831307A8);
PPC_FUNC_IMPL(__imp__sub_831307A8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,532
	ctx.r3.s64 = 532;
	// addi r4,r11,-892
	ctx.r4.s64 = ctx.r11.s64 + -892;
	// bl 0x82429b48
	ctx.lr = 0x831307C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-603(r11)
	PPC_STORE_U8(ctx.r11.u32 + -603, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831307E0"))) PPC_WEAK_FUNC(sub_831307E0);
PPC_FUNC_IMPL(__imp__sub_831307E0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,512
	ctx.r3.s64 = 512;
	// addi r4,r11,-888
	ctx.r4.s64 = ctx.r11.s64 + -888;
	// bl 0x82429b48
	ctx.lr = 0x831307FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83130818"))) PPC_WEAK_FUNC(sub_83130818);
PPC_FUNC_IMPL(__imp__sub_83130818) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-884
	ctx.r4.s64 = ctx.r11.s64 + -884;
	// bl 0x82429b48
	ctx.lr = 0x83130834;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,753(r11)
	PPC_STORE_U8(ctx.r11.u32 + 753, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130850"))) PPC_WEAK_FUNC(sub_83130850);
PPC_FUNC_IMPL(__imp__sub_83130850) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-880
	ctx.r4.s64 = ctx.r11.s64 + -880;
	// bl 0x82429b48
	ctx.lr = 0x8313086C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2363(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2363, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130888"))) PPC_WEAK_FUNC(sub_83130888);
PPC_FUNC_IMPL(__imp__sub_83130888) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-876
	ctx.r4.s64 = ctx.r11.s64 + -876;
	// bl 0x82429b48
	ctx.lr = 0x831308A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3150(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3150, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831308C0"))) PPC_WEAK_FUNC(sub_831308C0);
PPC_FUNC_IMPL(__imp__sub_831308C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-872
	ctx.r4.s64 = ctx.r11.s64 + -872;
	// bl 0x82429b48
	ctx.lr = 0x831308DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2840(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2840, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831308F8"))) PPC_WEAK_FUNC(sub_831308F8);
PPC_FUNC_IMPL(__imp__sub_831308F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-868
	ctx.r4.s64 = ctx.r11.s64 + -868;
	// bl 0x82429b48
	ctx.lr = 0x83130914;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,983(r11)
	PPC_STORE_U8(ctx.r11.u32 + 983, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130930"))) PPC_WEAK_FUNC(sub_83130930);
PPC_FUNC_IMPL(__imp__sub_83130930) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-864
	ctx.r4.s64 = ctx.r11.s64 + -864;
	// bl 0x82429b48
	ctx.lr = 0x8313094C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2917(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2917, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130968"))) PPC_WEAK_FUNC(sub_83130968);
PPC_FUNC_IMPL(__imp__sub_83130968) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,280
	ctx.r3.s64 = 280;
	// addi r4,r11,-860
	ctx.r4.s64 = ctx.r11.s64 + -860;
	// bl 0x82429b48
	ctx.lr = 0x83130984;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,569(r11)
	PPC_STORE_U8(ctx.r11.u32 + 569, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831309A0"))) PPC_WEAK_FUNC(sub_831309A0);
PPC_FUNC_IMPL(__imp__sub_831309A0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,279
	ctx.r3.s64 = 279;
	// addi r4,r11,-856
	ctx.r4.s64 = ctx.r11.s64 + -856;
	// bl 0x82429b48
	ctx.lr = 0x831309BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,570(r11)
	PPC_STORE_U8(ctx.r11.u32 + 570, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831309D8"))) PPC_WEAK_FUNC(sub_831309D8);
PPC_FUNC_IMPL(__imp__sub_831309D8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,278
	ctx.r3.s64 = 278;
	// addi r4,r11,-852
	ctx.r4.s64 = ctx.r11.s64 + -852;
	// bl 0x82429b48
	ctx.lr = 0x831309F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2775(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2775, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130A10"))) PPC_WEAK_FUNC(sub_83130A10);
PPC_FUNC_IMPL(__imp__sub_83130A10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-848
	ctx.r4.s64 = ctx.r11.s64 + -848;
	// bl 0x82429b48
	ctx.lr = 0x83130A2C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4246(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4246, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130A48"))) PPC_WEAK_FUNC(sub_83130A48);
PPC_FUNC_IMPL(__imp__sub_83130A48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-844
	ctx.r4.s64 = ctx.r11.s64 + -844;
	// bl 0x82429b48
	ctx.lr = 0x83130A64;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4881(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4881, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130A80"))) PPC_WEAK_FUNC(sub_83130A80);
PPC_FUNC_IMPL(__imp__sub_83130A80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-840
	ctx.r4.s64 = ctx.r11.s64 + -840;
	// bl 0x82429b48
	ctx.lr = 0x83130A9C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-130(r11)
	PPC_STORE_U8(ctx.r11.u32 + -130, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130AB8"))) PPC_WEAK_FUNC(sub_83130AB8);
PPC_FUNC_IMPL(__imp__sub_83130AB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-836
	ctx.r4.s64 = ctx.r11.s64 + -836;
	// bl 0x82429b48
	ctx.lr = 0x83130AD4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3119(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3119, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130AF0"))) PPC_WEAK_FUNC(sub_83130AF0);
PPC_FUNC_IMPL(__imp__sub_83130AF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-832
	ctx.r4.s64 = ctx.r11.s64 + -832;
	// bl 0x82429b48
	ctx.lr = 0x83130B0C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4681(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4681, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130B28"))) PPC_WEAK_FUNC(sub_83130B28);
PPC_FUNC_IMPL(__imp__sub_83130B28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-828
	ctx.r4.s64 = ctx.r11.s64 + -828;
	// bl 0x82429b48
	ctx.lr = 0x83130B44;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5294(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5294, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130B60"))) PPC_WEAK_FUNC(sub_83130B60);
PPC_FUNC_IMPL(__imp__sub_83130B60) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,548
	ctx.r3.s64 = 548;
	// addi r4,r11,-824
	ctx.r4.s64 = ctx.r11.s64 + -824;
	// bl 0x82429b48
	ctx.lr = 0x83130B7C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2020(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2020, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130B98"))) PPC_WEAK_FUNC(sub_83130B98);
PPC_FUNC_IMPL(__imp__sub_83130B98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-820
	ctx.r4.s64 = ctx.r11.s64 + -820;
	// bl 0x82429b48
	ctx.lr = 0x83130BB4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-652(r11)
	PPC_STORE_U8(ctx.r11.u32 + -652, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130BD0"))) PPC_WEAK_FUNC(sub_83130BD0);
PPC_FUNC_IMPL(__imp__sub_83130BD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-816
	ctx.r4.s64 = ctx.r11.s64 + -816;
	// bl 0x82429b48
	ctx.lr = 0x83130BEC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1527(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1527, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130C08"))) PPC_WEAK_FUNC(sub_83130C08);
PPC_FUNC_IMPL(__imp__sub_83130C08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-812
	ctx.r4.s64 = ctx.r11.s64 + -812;
	// bl 0x82429b48
	ctx.lr = 0x83130C24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4977(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4977, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130C40"))) PPC_WEAK_FUNC(sub_83130C40);
PPC_FUNC_IMPL(__imp__sub_83130C40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-808
	ctx.r4.s64 = ctx.r11.s64 + -808;
	// bl 0x82429b48
	ctx.lr = 0x83130C5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4249(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4249, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130C78"))) PPC_WEAK_FUNC(sub_83130C78);
PPC_FUNC_IMPL(__imp__sub_83130C78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-804
	ctx.r4.s64 = ctx.r11.s64 + -804;
	// bl 0x82429b48
	ctx.lr = 0x83130C94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3441(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3441, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130CB0"))) PPC_WEAK_FUNC(sub_83130CB0);
PPC_FUNC_IMPL(__imp__sub_83130CB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-800
	ctx.r4.s64 = ctx.r11.s64 + -800;
	// bl 0x82429b48
	ctx.lr = 0x83130CCC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3276, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130CE8"))) PPC_WEAK_FUNC(sub_83130CE8);
PPC_FUNC_IMPL(__imp__sub_83130CE8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,277
	ctx.r3.s64 = 277;
	// addi r4,r11,-796
	ctx.r4.s64 = ctx.r11.s64 + -796;
	// bl 0x82429b48
	ctx.lr = 0x83130D04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83130D20"))) PPC_WEAK_FUNC(sub_83130D20);
PPC_FUNC_IMPL(__imp__sub_83130D20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-792
	ctx.r4.s64 = ctx.r11.s64 + -792;
	// bl 0x82429b48
	ctx.lr = 0x83130D3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3005(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3005, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130D58"))) PPC_WEAK_FUNC(sub_83130D58);
PPC_FUNC_IMPL(__imp__sub_83130D58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-788
	ctx.r4.s64 = ctx.r11.s64 + -788;
	// bl 0x82429b48
	ctx.lr = 0x83130D74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4364(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4364, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130D90"))) PPC_WEAK_FUNC(sub_83130D90);
PPC_FUNC_IMPL(__imp__sub_83130D90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-784
	ctx.r4.s64 = ctx.r11.s64 + -784;
	// bl 0x82429b48
	ctx.lr = 0x83130DAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4428(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4428, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130DC8"))) PPC_WEAK_FUNC(sub_83130DC8);
PPC_FUNC_IMPL(__imp__sub_83130DC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-780
	ctx.r4.s64 = ctx.r11.s64 + -780;
	// bl 0x82429b48
	ctx.lr = 0x83130DE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5124(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5124, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130E00"))) PPC_WEAK_FUNC(sub_83130E00);
PPC_FUNC_IMPL(__imp__sub_83130E00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-776
	ctx.r4.s64 = ctx.r11.s64 + -776;
	// bl 0x82429b48
	ctx.lr = 0x83130E1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,649(r11)
	PPC_STORE_U8(ctx.r11.u32 + 649, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130E38"))) PPC_WEAK_FUNC(sub_83130E38);
PPC_FUNC_IMPL(__imp__sub_83130E38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-772
	ctx.r4.s64 = ctx.r11.s64 + -772;
	// bl 0x82429b48
	ctx.lr = 0x83130E54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2887(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2887, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130E70"))) PPC_WEAK_FUNC(sub_83130E70);
PPC_FUNC_IMPL(__imp__sub_83130E70) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,3970
	ctx.r3.s64 = 3970;
	// addi r4,r11,-768
	ctx.r4.s64 = ctx.r11.s64 + -768;
	// bl 0x82429b48
	ctx.lr = 0x83130E8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3808(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3808, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130EA8"))) PPC_WEAK_FUNC(sub_83130EA8);
PPC_FUNC_IMPL(__imp__sub_83130EA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-764
	ctx.r4.s64 = ctx.r11.s64 + -764;
	// bl 0x82429b48
	ctx.lr = 0x83130EC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-564(r11)
	PPC_STORE_U8(ctx.r11.u32 + -564, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130EE0"))) PPC_WEAK_FUNC(sub_83130EE0);
PPC_FUNC_IMPL(__imp__sub_83130EE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-760
	ctx.r4.s64 = ctx.r11.s64 + -760;
	// bl 0x82429b48
	ctx.lr = 0x83130EFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2086(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2086, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130F18"))) PPC_WEAK_FUNC(sub_83130F18);
PPC_FUNC_IMPL(__imp__sub_83130F18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-756
	ctx.r4.s64 = ctx.r11.s64 + -756;
	// bl 0x82429b48
	ctx.lr = 0x83130F34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4743(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4743, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130F50"))) PPC_WEAK_FUNC(sub_83130F50);
PPC_FUNC_IMPL(__imp__sub_83130F50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-752
	ctx.r4.s64 = ctx.r11.s64 + -752;
	// bl 0x82429b48
	ctx.lr = 0x83130F6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2022(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2022, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130F88"))) PPC_WEAK_FUNC(sub_83130F88);
PPC_FUNC_IMPL(__imp__sub_83130F88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-748
	ctx.r4.s64 = ctx.r11.s64 + -748;
	// bl 0x82429b48
	ctx.lr = 0x83130FA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-132(r11)
	PPC_STORE_U8(ctx.r11.u32 + -132, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130FC0"))) PPC_WEAK_FUNC(sub_83130FC0);
PPC_FUNC_IMPL(__imp__sub_83130FC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-744
	ctx.r4.s64 = ctx.r11.s64 + -744;
	// bl 0x82429b48
	ctx.lr = 0x83130FDC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3687(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3687, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130FF8"))) PPC_WEAK_FUNC(sub_83130FF8);
PPC_FUNC_IMPL(__imp__sub_83130FF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-740
	ctx.r4.s64 = ctx.r11.s64 + -740;
	// bl 0x82429b48
	ctx.lr = 0x83131014;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2512(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2512, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131030"))) PPC_WEAK_FUNC(sub_83131030);
PPC_FUNC_IMPL(__imp__sub_83131030) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-736
	ctx.r4.s64 = ctx.r11.s64 + -736;
	// bl 0x82429b48
	ctx.lr = 0x8313104C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1800(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1800, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131068"))) PPC_WEAK_FUNC(sub_83131068);
PPC_FUNC_IMPL(__imp__sub_83131068) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-732
	ctx.r4.s64 = ctx.r11.s64 + -732;
	// bl 0x82429b48
	ctx.lr = 0x83131084;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 401, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831310A0"))) PPC_WEAK_FUNC(sub_831310A0);
PPC_FUNC_IMPL(__imp__sub_831310A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-728
	ctx.r4.s64 = ctx.r11.s64 + -728;
	// bl 0x82429b48
	ctx.lr = 0x831310BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5131(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5131, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831310D8"))) PPC_WEAK_FUNC(sub_831310D8);
PPC_FUNC_IMPL(__imp__sub_831310D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-724
	ctx.r4.s64 = ctx.r11.s64 + -724;
	// bl 0x82429b48
	ctx.lr = 0x831310F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4859(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4859, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131110"))) PPC_WEAK_FUNC(sub_83131110);
PPC_FUNC_IMPL(__imp__sub_83131110) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-720
	ctx.r4.s64 = ctx.r11.s64 + -720;
	// bl 0x82429b48
	ctx.lr = 0x8313112C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,836(r11)
	PPC_STORE_U8(ctx.r11.u32 + 836, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131148"))) PPC_WEAK_FUNC(sub_83131148);
PPC_FUNC_IMPL(__imp__sub_83131148) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-716
	ctx.r4.s64 = ctx.r11.s64 + -716;
	// bl 0x82429b48
	ctx.lr = 0x83131164;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,363(r11)
	PPC_STORE_U8(ctx.r11.u32 + 363, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131180"))) PPC_WEAK_FUNC(sub_83131180);
PPC_FUNC_IMPL(__imp__sub_83131180) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-712
	ctx.r4.s64 = ctx.r11.s64 + -712;
	// bl 0x82429b48
	ctx.lr = 0x8313119C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4970(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4970, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831311B8"))) PPC_WEAK_FUNC(sub_831311B8);
PPC_FUNC_IMPL(__imp__sub_831311B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-708
	ctx.r4.s64 = ctx.r11.s64 + -708;
	// bl 0x82429b48
	ctx.lr = 0x831311D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,484(r11)
	PPC_STORE_U8(ctx.r11.u32 + 484, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831311F0"))) PPC_WEAK_FUNC(sub_831311F0);
PPC_FUNC_IMPL(__imp__sub_831311F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-704
	ctx.r4.s64 = ctx.r11.s64 + -704;
	// bl 0x82429b48
	ctx.lr = 0x8313120C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83131228"))) PPC_WEAK_FUNC(sub_83131228);
PPC_FUNC_IMPL(__imp__sub_83131228) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-700
	ctx.r4.s64 = ctx.r11.s64 + -700;
	// bl 0x82429b48
	ctx.lr = 0x83131244;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3445(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3445, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131260"))) PPC_WEAK_FUNC(sub_83131260);
PPC_FUNC_IMPL(__imp__sub_83131260) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-696
	ctx.r4.s64 = ctx.r11.s64 + -696;
	// bl 0x82429b48
	ctx.lr = 0x8313127C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,139(r11)
	PPC_STORE_U8(ctx.r11.u32 + 139, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131298"))) PPC_WEAK_FUNC(sub_83131298);
PPC_FUNC_IMPL(__imp__sub_83131298) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-692
	ctx.r4.s64 = ctx.r11.s64 + -692;
	// bl 0x82429b48
	ctx.lr = 0x831312B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4974(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4974, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831312D0"))) PPC_WEAK_FUNC(sub_831312D0);
PPC_FUNC_IMPL(__imp__sub_831312D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-688
	ctx.r4.s64 = ctx.r11.s64 + -688;
	// bl 0x82429b48
	ctx.lr = 0x831312EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,283(r11)
	PPC_STORE_U8(ctx.r11.u32 + 283, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131308"))) PPC_WEAK_FUNC(sub_83131308);
PPC_FUNC_IMPL(__imp__sub_83131308) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-684
	ctx.r4.s64 = ctx.r11.s64 + -684;
	// bl 0x82429b48
	ctx.lr = 0x83131324;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,671(r11)
	PPC_STORE_U8(ctx.r11.u32 + 671, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131340"))) PPC_WEAK_FUNC(sub_83131340);
PPC_FUNC_IMPL(__imp__sub_83131340) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,272
	ctx.r3.s64 = 272;
	// addi r4,r11,-680
	ctx.r4.s64 = ctx.r11.s64 + -680;
	// bl 0x82429b48
	ctx.lr = 0x8313135C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4740(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4740, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131378"))) PPC_WEAK_FUNC(sub_83131378);
PPC_FUNC_IMPL(__imp__sub_83131378) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,298
	ctx.r3.s64 = 298;
	// addi r4,r11,-676
	ctx.r4.s64 = ctx.r11.s64 + -676;
	// bl 0x82429b48
	ctx.lr = 0x83131394;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5292(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5292, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831313B0"))) PPC_WEAK_FUNC(sub_831313B0);
PPC_FUNC_IMPL(__imp__sub_831313B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-672
	ctx.r4.s64 = ctx.r11.s64 + -672;
	// bl 0x82429b48
	ctx.lr = 0x831313CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3065(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3065, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831313E8"))) PPC_WEAK_FUNC(sub_831313E8);
PPC_FUNC_IMPL(__imp__sub_831313E8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,3971
	ctx.r3.s64 = 3971;
	// addi r4,r11,-668
	ctx.r4.s64 = ctx.r11.s64 + -668;
	// bl 0x82429b48
	ctx.lr = 0x83131404;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2614(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2614, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131420"))) PPC_WEAK_FUNC(sub_83131420);
PPC_FUNC_IMPL(__imp__sub_83131420) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,3969
	ctx.r3.s64 = 3969;
	// addi r4,r11,-664
	ctx.r4.s64 = ctx.r11.s64 + -664;
	// bl 0x82429b48
	ctx.lr = 0x8313143C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,187(r11)
	PPC_STORE_U8(ctx.r11.u32 + 187, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131458"))) PPC_WEAK_FUNC(sub_83131458);
PPC_FUNC_IMPL(__imp__sub_83131458) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-660
	ctx.r4.s64 = ctx.r11.s64 + -660;
	// bl 0x82429b48
	ctx.lr = 0x83131474;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3047(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3047, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131490"))) PPC_WEAK_FUNC(sub_83131490);
PPC_FUNC_IMPL(__imp__sub_83131490) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-656
	ctx.r4.s64 = ctx.r11.s64 + -656;
	// bl 0x82429b48
	ctx.lr = 0x831314AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_831314C8"))) PPC_WEAK_FUNC(sub_831314C8);
PPC_FUNC_IMPL(__imp__sub_831314C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-652
	ctx.r4.s64 = ctx.r11.s64 + -652;
	// bl 0x82429b48
	ctx.lr = 0x831314E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83131500"))) PPC_WEAK_FUNC(sub_83131500);
PPC_FUNC_IMPL(__imp__sub_83131500) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-648
	ctx.r4.s64 = ctx.r11.s64 + -648;
	// bl 0x82429b48
	ctx.lr = 0x8313151C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2256(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2256, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131538"))) PPC_WEAK_FUNC(sub_83131538);
PPC_FUNC_IMPL(__imp__sub_83131538) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-644
	ctx.r4.s64 = ctx.r11.s64 + -644;
	// bl 0x82429b48
	ctx.lr = 0x83131554;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5013(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5013, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131570"))) PPC_WEAK_FUNC(sub_83131570);
PPC_FUNC_IMPL(__imp__sub_83131570) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,299
	ctx.r3.s64 = 299;
	// addi r4,r11,-640
	ctx.r4.s64 = ctx.r11.s64 + -640;
	// bl 0x82429b48
	ctx.lr = 0x8313158C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1884(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1884, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831315A8"))) PPC_WEAK_FUNC(sub_831315A8);
PPC_FUNC_IMPL(__imp__sub_831315A8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,267
	ctx.r3.s64 = 267;
	// addi r4,r11,-636
	ctx.r4.s64 = ctx.r11.s64 + -636;
	// bl 0x82429b48
	ctx.lr = 0x831315C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5377(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5377, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831315E0"))) PPC_WEAK_FUNC(sub_831315E0);
PPC_FUNC_IMPL(__imp__sub_831315E0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,266
	ctx.r3.s64 = 266;
	// addi r4,r11,-632
	ctx.r4.s64 = ctx.r11.s64 + -632;
	// bl 0x82429b48
	ctx.lr = 0x831315FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4628(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4628, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131618"))) PPC_WEAK_FUNC(sub_83131618);
PPC_FUNC_IMPL(__imp__sub_83131618) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-628
	ctx.r4.s64 = ctx.r11.s64 + -628;
	// bl 0x82429b48
	ctx.lr = 0x83131634;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4263(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4263, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131650"))) PPC_WEAK_FUNC(sub_83131650);
PPC_FUNC_IMPL(__imp__sub_83131650) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-624
	ctx.r4.s64 = ctx.r11.s64 + -624;
	// bl 0x82429b48
	ctx.lr = 0x8313166C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,407(r11)
	PPC_STORE_U8(ctx.r11.u32 + 407, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131688"))) PPC_WEAK_FUNC(sub_83131688);
PPC_FUNC_IMPL(__imp__sub_83131688) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,283
	ctx.r3.s64 = 283;
	// addi r4,r11,-620
	ctx.r4.s64 = ctx.r11.s64 + -620;
	// bl 0x82429b48
	ctx.lr = 0x831316A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4391(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4391, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831316C0"))) PPC_WEAK_FUNC(sub_831316C0);
PPC_FUNC_IMPL(__imp__sub_831316C0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,262
	ctx.r3.s64 = 262;
	// addi r4,r11,-616
	ctx.r4.s64 = ctx.r11.s64 + -616;
	// bl 0x82429b48
	ctx.lr = 0x831316DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1015(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1015, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831316F8"))) PPC_WEAK_FUNC(sub_831316F8);
PPC_FUNC_IMPL(__imp__sub_831316F8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,261
	ctx.r3.s64 = 261;
	// addi r4,r11,-612
	ctx.r4.s64 = ctx.r11.s64 + -612;
	// bl 0x82429b48
	ctx.lr = 0x83131714;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-321(r11)
	PPC_STORE_U8(ctx.r11.u32 + -321, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131730"))) PPC_WEAK_FUNC(sub_83131730);
PPC_FUNC_IMPL(__imp__sub_83131730) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,256
	ctx.r3.s64 = 256;
	// addi r4,r11,-608
	ctx.r4.s64 = ctx.r11.s64 + -608;
	// bl 0x82429b48
	ctx.lr = 0x8313174C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5348(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5348, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131768"))) PPC_WEAK_FUNC(sub_83131768);
PPC_FUNC_IMPL(__imp__sub_83131768) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-604
	ctx.r4.s64 = ctx.r11.s64 + -604;
	// bl 0x82429b48
	ctx.lr = 0x83131784;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3552(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3552, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831317A0"))) PPC_WEAK_FUNC(sub_831317A0);
PPC_FUNC_IMPL(__imp__sub_831317A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-600
	ctx.r4.s64 = ctx.r11.s64 + -600;
	// bl 0x82429b48
	ctx.lr = 0x831317BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3314(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3314, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831317D8"))) PPC_WEAK_FUNC(sub_831317D8);
PPC_FUNC_IMPL(__imp__sub_831317D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-596
	ctx.r4.s64 = ctx.r11.s64 + -596;
	// bl 0x82429b48
	ctx.lr = 0x831317F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1813(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1813, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131810"))) PPC_WEAK_FUNC(sub_83131810);
PPC_FUNC_IMPL(__imp__sub_83131810) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-592
	ctx.r4.s64 = ctx.r11.s64 + -592;
	// bl 0x82429b48
	ctx.lr = 0x8313182C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1008(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1008, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131848"))) PPC_WEAK_FUNC(sub_83131848);
PPC_FUNC_IMPL(__imp__sub_83131848) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-588
	ctx.r4.s64 = ctx.r11.s64 + -588;
	// bl 0x82429b48
	ctx.lr = 0x83131864;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4876(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4876, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131880"))) PPC_WEAK_FUNC(sub_83131880);
PPC_FUNC_IMPL(__imp__sub_83131880) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-584
	ctx.r4.s64 = ctx.r11.s64 + -584;
	// bl 0x82429b48
	ctx.lr = 0x8313189C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2843(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2843, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831318B8"))) PPC_WEAK_FUNC(sub_831318B8);
PPC_FUNC_IMPL(__imp__sub_831318B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-580
	ctx.r4.s64 = ctx.r11.s64 + -580;
	// bl 0x82429b48
	ctx.lr = 0x831318D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1447(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1447, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831318F0"))) PPC_WEAK_FUNC(sub_831318F0);
PPC_FUNC_IMPL(__imp__sub_831318F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-576
	ctx.r4.s64 = ctx.r11.s64 + -576;
	// bl 0x82429b48
	ctx.lr = 0x8313190C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4990(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4990, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131928"))) PPC_WEAK_FUNC(sub_83131928);
PPC_FUNC_IMPL(__imp__sub_83131928) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-572
	ctx.r4.s64 = ctx.r11.s64 + -572;
	// bl 0x82429b48
	ctx.lr = 0x83131944;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4682(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4682, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131960"))) PPC_WEAK_FUNC(sub_83131960);
PPC_FUNC_IMPL(__imp__sub_83131960) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-568
	ctx.r4.s64 = ctx.r11.s64 + -568;
	// bl 0x82429b48
	ctx.lr = 0x8313197C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3750(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3750, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131998"))) PPC_WEAK_FUNC(sub_83131998);
PPC_FUNC_IMPL(__imp__sub_83131998) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-564
	ctx.r4.s64 = ctx.r11.s64 + -564;
	// bl 0x82429b48
	ctx.lr = 0x831319B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2841(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2841, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831319D0"))) PPC_WEAK_FUNC(sub_831319D0);
PPC_FUNC_IMPL(__imp__sub_831319D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-560
	ctx.r4.s64 = ctx.r11.s64 + -560;
	// bl 0x82429b48
	ctx.lr = 0x831319EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3273(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3273, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131A08"))) PPC_WEAK_FUNC(sub_83131A08);
PPC_FUNC_IMPL(__imp__sub_83131A08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-556
	ctx.r4.s64 = ctx.r11.s64 + -556;
	// bl 0x82429b48
	ctx.lr = 0x83131A24;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1780(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1780, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131A40"))) PPC_WEAK_FUNC(sub_83131A40);
PPC_FUNC_IMPL(__imp__sub_83131A40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-552
	ctx.r4.s64 = ctx.r11.s64 + -552;
	// bl 0x82429b48
	ctx.lr = 0x83131A5C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,754(r11)
	PPC_STORE_U8(ctx.r11.u32 + 754, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131A78"))) PPC_WEAK_FUNC(sub_83131A78);
PPC_FUNC_IMPL(__imp__sub_83131A78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-548
	ctx.r4.s64 = ctx.r11.s64 + -548;
	// bl 0x82429b48
	ctx.lr = 0x83131A94;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83131AB0"))) PPC_WEAK_FUNC(sub_83131AB0);
PPC_FUNC_IMPL(__imp__sub_83131AB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-544
	ctx.r4.s64 = ctx.r11.s64 + -544;
	// bl 0x82429b48
	ctx.lr = 0x83131ACC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-46(r11)
	PPC_STORE_U8(ctx.r11.u32 + -46, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131AE8"))) PPC_WEAK_FUNC(sub_83131AE8);
PPC_FUNC_IMPL(__imp__sub_83131AE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// bl 0x82429b48
	ctx.lr = 0x83131B04;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83131B20"))) PPC_WEAK_FUNC(sub_83131B20);
PPC_FUNC_IMPL(__imp__sub_83131B20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-536
	ctx.r4.s64 = ctx.r11.s64 + -536;
	// bl 0x82429b48
	ctx.lr = 0x83131B3C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3603(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3603, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131B58"))) PPC_WEAK_FUNC(sub_83131B58);
PPC_FUNC_IMPL(__imp__sub_83131B58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-532
	ctx.r4.s64 = ctx.r11.s64 + -532;
	// bl 0x82429b48
	ctx.lr = 0x83131B74;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1112(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1112, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131B90"))) PPC_WEAK_FUNC(sub_83131B90);
PPC_FUNC_IMPL(__imp__sub_83131B90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-528
	ctx.r4.s64 = ctx.r11.s64 + -528;
	// bl 0x82429b48
	ctx.lr = 0x83131BAC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,629(r11)
	PPC_STORE_U8(ctx.r11.u32 + 629, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131BC8"))) PPC_WEAK_FUNC(sub_83131BC8);
PPC_FUNC_IMPL(__imp__sub_83131BC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-524
	ctx.r4.s64 = ctx.r11.s64 + -524;
	// bl 0x82429b48
	ctx.lr = 0x83131BE4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2493(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2493, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131C00"))) PPC_WEAK_FUNC(sub_83131C00);
PPC_FUNC_IMPL(__imp__sub_83131C00) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,527
	ctx.r3.s64 = 527;
	// addi r4,r11,-520
	ctx.r4.s64 = ctx.r11.s64 + -520;
	// bl 0x82429b48
	ctx.lr = 0x83131C1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2074(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2074, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131C38"))) PPC_WEAK_FUNC(sub_83131C38);
PPC_FUNC_IMPL(__imp__sub_83131C38) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,526
	ctx.r3.s64 = 526;
	// addi r4,r11,-516
	ctx.r4.s64 = ctx.r11.s64 + -516;
	// bl 0x82429b48
	ctx.lr = 0x83131C54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2147(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2147, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131C70"))) PPC_WEAK_FUNC(sub_83131C70);
PPC_FUNC_IMPL(__imp__sub_83131C70) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,520
	ctx.r3.s64 = 520;
	// addi r4,r11,-512
	ctx.r4.s64 = ctx.r11.s64 + -512;
	// bl 0x82429b48
	ctx.lr = 0x83131C8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-131(r11)
	PPC_STORE_U8(ctx.r11.u32 + -131, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131CA8"))) PPC_WEAK_FUNC(sub_83131CA8);
PPC_FUNC_IMPL(__imp__sub_83131CA8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,521
	ctx.r3.s64 = 521;
	// addi r4,r11,-508
	ctx.r4.s64 = ctx.r11.s64 + -508;
	// bl 0x82429b48
	ctx.lr = 0x83131CC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3074(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3074, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131CE0"))) PPC_WEAK_FUNC(sub_83131CE0);
PPC_FUNC_IMPL(__imp__sub_83131CE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-504
	ctx.r4.s64 = ctx.r11.s64 + -504;
	// bl 0x82429b48
	ctx.lr = 0x83131CFC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83131D18"))) PPC_WEAK_FUNC(sub_83131D18);
PPC_FUNC_IMPL(__imp__sub_83131D18) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,525
	ctx.r3.s64 = 525;
	// addi r4,r11,-500
	ctx.r4.s64 = ctx.r11.s64 + -500;
	// bl 0x82429b48
	ctx.lr = 0x83131D34;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83131D50"))) PPC_WEAK_FUNC(sub_83131D50);
PPC_FUNC_IMPL(__imp__sub_83131D50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-496
	ctx.r4.s64 = ctx.r11.s64 + -496;
	// bl 0x82429b48
	ctx.lr = 0x83131D6C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1558(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1558, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131D88"))) PPC_WEAK_FUNC(sub_83131D88);
PPC_FUNC_IMPL(__imp__sub_83131D88) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,517
	ctx.r3.s64 = 517;
	// addi r4,r11,-492
	ctx.r4.s64 = ctx.r11.s64 + -492;
	// bl 0x82429b48
	ctx.lr = 0x83131DA4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83131DC0"))) PPC_WEAK_FUNC(sub_83131DC0);
PPC_FUNC_IMPL(__imp__sub_83131DC0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,518
	ctx.r3.s64 = 518;
	// addi r4,r11,-488
	ctx.r4.s64 = ctx.r11.s64 + -488;
	// bl 0x82429b48
	ctx.lr = 0x83131DDC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4192, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131DF8"))) PPC_WEAK_FUNC(sub_83131DF8);
PPC_FUNC_IMPL(__imp__sub_83131DF8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,508
	ctx.r3.s64 = 508;
	// addi r4,r11,-484
	ctx.r4.s64 = ctx.r11.s64 + -484;
	// bl 0x82429b48
	ctx.lr = 0x83131E14;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2677(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2677, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131E30"))) PPC_WEAK_FUNC(sub_83131E30);
PPC_FUNC_IMPL(__imp__sub_83131E30) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,502
	ctx.r3.s64 = 502;
	// addi r4,r11,-480
	ctx.r4.s64 = ctx.r11.s64 + -480;
	// bl 0x82429b48
	ctx.lr = 0x83131E4C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1634(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1634, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131E68"))) PPC_WEAK_FUNC(sub_83131E68);
PPC_FUNC_IMPL(__imp__sub_83131E68) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,500
	ctx.r3.s64 = 500;
	// addi r4,r11,-476
	ctx.r4.s64 = ctx.r11.s64 + -476;
	// bl 0x82429b48
	ctx.lr = 0x83131E84;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83131EA0"))) PPC_WEAK_FUNC(sub_83131EA0);
PPC_FUNC_IMPL(__imp__sub_83131EA0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,531
	ctx.r3.s64 = 531;
	// addi r4,r11,-472
	ctx.r4.s64 = ctx.r11.s64 + -472;
	// bl 0x82429b48
	ctx.lr = 0x83131EBC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83131ED8"))) PPC_WEAK_FUNC(sub_83131ED8);
PPC_FUNC_IMPL(__imp__sub_83131ED8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,537
	ctx.r3.s64 = 537;
	// addi r4,r11,-468
	ctx.r4.s64 = ctx.r11.s64 + -468;
	// bl 0x82429b48
	ctx.lr = 0x83131EF4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2615(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2615, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131F10"))) PPC_WEAK_FUNC(sub_83131F10);
PPC_FUNC_IMPL(__imp__sub_83131F10) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,533
	ctx.r3.s64 = 533;
	// addi r4,r11,-464
	ctx.r4.s64 = ctx.r11.s64 + -464;
	// bl 0x82429b48
	ctx.lr = 0x83131F2C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3846(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3846, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131F48"))) PPC_WEAK_FUNC(sub_83131F48);
PPC_FUNC_IMPL(__imp__sub_83131F48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-460
	ctx.r4.s64 = ctx.r11.s64 + -460;
	// bl 0x82429b48
	ctx.lr = 0x83131F64;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83131F80"))) PPC_WEAK_FUNC(sub_83131F80);
PPC_FUNC_IMPL(__imp__sub_83131F80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-456
	ctx.r4.s64 = ctx.r11.s64 + -456;
	// bl 0x82429b48
	ctx.lr = 0x83131F9C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5054(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5054, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131FB8"))) PPC_WEAK_FUNC(sub_83131FB8);
PPC_FUNC_IMPL(__imp__sub_83131FB8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,514
	ctx.r3.s64 = 514;
	// addi r4,r11,-452
	ctx.r4.s64 = ctx.r11.s64 + -452;
	// bl 0x82429b48
	ctx.lr = 0x83131FD4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83131FF0"))) PPC_WEAK_FUNC(sub_83131FF0);
PPC_FUNC_IMPL(__imp__sub_83131FF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-448
	ctx.r4.s64 = ctx.r11.s64 + -448;
	// bl 0x82429b48
	ctx.lr = 0x8313200C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1062(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1062, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132028"))) PPC_WEAK_FUNC(sub_83132028);
PPC_FUNC_IMPL(__imp__sub_83132028) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-444
	ctx.r4.s64 = ctx.r11.s64 + -444;
	// bl 0x82429b48
	ctx.lr = 0x83132044;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1009(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1009, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132060"))) PPC_WEAK_FUNC(sub_83132060);
PPC_FUNC_IMPL(__imp__sub_83132060) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-440
	ctx.r4.s64 = ctx.r11.s64 + -440;
	// bl 0x82429b48
	ctx.lr = 0x8313207C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4207(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4207, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132098"))) PPC_WEAK_FUNC(sub_83132098);
PPC_FUNC_IMPL(__imp__sub_83132098) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-436
	ctx.r4.s64 = ctx.r11.s64 + -436;
	// bl 0x82429b48
	ctx.lr = 0x831320B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3684(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3684, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831320D0"))) PPC_WEAK_FUNC(sub_831320D0);
PPC_FUNC_IMPL(__imp__sub_831320D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-432
	ctx.r4.s64 = ctx.r11.s64 + -432;
	// bl 0x82429b48
	ctx.lr = 0x831320EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2916(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2916, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132108"))) PPC_WEAK_FUNC(sub_83132108);
PPC_FUNC_IMPL(__imp__sub_83132108) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-428
	ctx.r4.s64 = ctx.r11.s64 + -428;
	// bl 0x82429b48
	ctx.lr = 0x83132124;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2526(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2526, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132140"))) PPC_WEAK_FUNC(sub_83132140);
PPC_FUNC_IMPL(__imp__sub_83132140) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-424
	ctx.r4.s64 = ctx.r11.s64 + -424;
	// bl 0x82429b48
	ctx.lr = 0x8313215C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132178"))) PPC_WEAK_FUNC(sub_83132178);
PPC_FUNC_IMPL(__imp__sub_83132178) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-420
	ctx.r4.s64 = ctx.r11.s64 + -420;
	// bl 0x82429b48
	ctx.lr = 0x83132194;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-394(r11)
	PPC_STORE_U8(ctx.r11.u32 + -394, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831321B0"))) PPC_WEAK_FUNC(sub_831321B0);
PPC_FUNC_IMPL(__imp__sub_831321B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-416
	ctx.r4.s64 = ctx.r11.s64 + -416;
	// bl 0x82429b48
	ctx.lr = 0x831321CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4683(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4683, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831321E8"))) PPC_WEAK_FUNC(sub_831321E8);
PPC_FUNC_IMPL(__imp__sub_831321E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-412
	ctx.r4.s64 = ctx.r11.s64 + -412;
	// bl 0x82429b48
	ctx.lr = 0x83132204;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2786(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2786, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132220"))) PPC_WEAK_FUNC(sub_83132220);
PPC_FUNC_IMPL(__imp__sub_83132220) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-408
	ctx.r4.s64 = ctx.r11.s64 + -408;
	// bl 0x82429b48
	ctx.lr = 0x8313223C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3817(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3817, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132258"))) PPC_WEAK_FUNC(sub_83132258);
PPC_FUNC_IMPL(__imp__sub_83132258) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-404
	ctx.r4.s64 = ctx.r11.s64 + -404;
	// bl 0x82429b48
	ctx.lr = 0x83132274;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1553(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1553, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132290"))) PPC_WEAK_FUNC(sub_83132290);
PPC_FUNC_IMPL(__imp__sub_83132290) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-400
	ctx.r4.s64 = ctx.r11.s64 + -400;
	// bl 0x82429b48
	ctx.lr = 0x831322AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,90(r11)
	PPC_STORE_U8(ctx.r11.u32 + 90, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831322C8"))) PPC_WEAK_FUNC(sub_831322C8);
PPC_FUNC_IMPL(__imp__sub_831322C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-396
	ctx.r4.s64 = ctx.r11.s64 + -396;
	// bl 0x82429b48
	ctx.lr = 0x831322E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4173(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4173, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132300"))) PPC_WEAK_FUNC(sub_83132300);
PPC_FUNC_IMPL(__imp__sub_83132300) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-392
	ctx.r4.s64 = ctx.r11.s64 + -392;
	// bl 0x82429b48
	ctx.lr = 0x8313231C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1801(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1801, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132338"))) PPC_WEAK_FUNC(sub_83132338);
PPC_FUNC_IMPL(__imp__sub_83132338) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-388
	ctx.r4.s64 = ctx.r11.s64 + -388;
	// bl 0x82429b48
	ctx.lr = 0x83132354;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4902(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4902, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132370"))) PPC_WEAK_FUNC(sub_83132370);
PPC_FUNC_IMPL(__imp__sub_83132370) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-384
	ctx.r4.s64 = ctx.r11.s64 + -384;
	// bl 0x82429b48
	ctx.lr = 0x8313238C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3688(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3688, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831323A8"))) PPC_WEAK_FUNC(sub_831323A8);
PPC_FUNC_IMPL(__imp__sub_831323A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-380
	ctx.r4.s64 = ctx.r11.s64 + -380;
	// bl 0x82429b48
	ctx.lr = 0x831323C4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,752(r11)
	PPC_STORE_U8(ctx.r11.u32 + 752, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831323E0"))) PPC_WEAK_FUNC(sub_831323E0);
PPC_FUNC_IMPL(__imp__sub_831323E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-376
	ctx.r4.s64 = ctx.r11.s64 + -376;
	// bl 0x82429b48
	ctx.lr = 0x831323FC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-613(r11)
	PPC_STORE_U8(ctx.r11.u32 + -613, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132418"))) PPC_WEAK_FUNC(sub_83132418);
PPC_FUNC_IMPL(__imp__sub_83132418) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-372
	ctx.r4.s64 = ctx.r11.s64 + -372;
	// bl 0x82429b48
	ctx.lr = 0x83132434;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,817(r11)
	PPC_STORE_U8(ctx.r11.u32 + 817, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132450"))) PPC_WEAK_FUNC(sub_83132450);
PPC_FUNC_IMPL(__imp__sub_83132450) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-368
	ctx.r4.s64 = ctx.r11.s64 + -368;
	// bl 0x82429b48
	ctx.lr = 0x8313246C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2537(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2537, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132488"))) PPC_WEAK_FUNC(sub_83132488);
PPC_FUNC_IMPL(__imp__sub_83132488) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-364
	ctx.r4.s64 = ctx.r11.s64 + -364;
	// bl 0x82429b48
	ctx.lr = 0x831324A4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,818(r11)
	PPC_STORE_U8(ctx.r11.u32 + 818, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831324C0"))) PPC_WEAK_FUNC(sub_831324C0);
PPC_FUNC_IMPL(__imp__sub_831324C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-360
	ctx.r4.s64 = ctx.r11.s64 + -360;
	// bl 0x82429b48
	ctx.lr = 0x831324DC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-90(r11)
	PPC_STORE_U8(ctx.r11.u32 + -90, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831324F8"))) PPC_WEAK_FUNC(sub_831324F8);
PPC_FUNC_IMPL(__imp__sub_831324F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-356
	ctx.r4.s64 = ctx.r11.s64 + -356;
	// bl 0x82429b48
	ctx.lr = 0x83132514;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1554(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1554, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132530"))) PPC_WEAK_FUNC(sub_83132530);
PPC_FUNC_IMPL(__imp__sub_83132530) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-352
	ctx.r4.s64 = ctx.r11.s64 + -352;
	// bl 0x82429b48
	ctx.lr = 0x8313254C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83132568"))) PPC_WEAK_FUNC(sub_83132568);
PPC_FUNC_IMPL(__imp__sub_83132568) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-348
	ctx.r4.s64 = ctx.r11.s64 + -348;
	// bl 0x82429b48
	ctx.lr = 0x83132584;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1427(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1427, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831325A0"))) PPC_WEAK_FUNC(sub_831325A0);
PPC_FUNC_IMPL(__imp__sub_831325A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-344
	ctx.r4.s64 = ctx.r11.s64 + -344;
	// bl 0x82429b48
	ctx.lr = 0x831325BC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,-178(r11)
	PPC_STORE_U8(ctx.r11.u32 + -178, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831325D8"))) PPC_WEAK_FUNC(sub_831325D8);
PPC_FUNC_IMPL(__imp__sub_831325D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-340
	ctx.r4.s64 = ctx.r11.s64 + -340;
	// bl 0x82429b48
	ctx.lr = 0x831325F4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,816(r11)
	PPC_STORE_U8(ctx.r11.u32 + 816, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132610"))) PPC_WEAK_FUNC(sub_83132610);
PPC_FUNC_IMPL(__imp__sub_83132610) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-336
	ctx.r4.s64 = ctx.r11.s64 + -336;
	// bl 0x82429b48
	ctx.lr = 0x8313262C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3600(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3600, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132648"))) PPC_WEAK_FUNC(sub_83132648);
PPC_FUNC_IMPL(__imp__sub_83132648) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-332
	ctx.r4.s64 = ctx.r11.s64 + -332;
	// bl 0x82429b48
	ctx.lr = 0x83132664;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1114(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1114, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132680"))) PPC_WEAK_FUNC(sub_83132680);
PPC_FUNC_IMPL(__imp__sub_83132680) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-328
	ctx.r4.s64 = ctx.r11.s64 + -328;
	// bl 0x82429b48
	ctx.lr = 0x8313269C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1390(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1390, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831326B8"))) PPC_WEAK_FUNC(sub_831326B8);
PPC_FUNC_IMPL(__imp__sub_831326B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-324
	ctx.r4.s64 = ctx.r11.s64 + -324;
	// bl 0x82429b48
	ctx.lr = 0x831326D4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,137(r11)
	PPC_STORE_U8(ctx.r11.u32 + 137, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831326F0"))) PPC_WEAK_FUNC(sub_831326F0);
PPC_FUNC_IMPL(__imp__sub_831326F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-320
	ctx.r4.s64 = ctx.r11.s64 + -320;
	// bl 0x82429b48
	ctx.lr = 0x8313270C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,574(r11)
	PPC_STORE_U8(ctx.r11.u32 + 574, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132728"))) PPC_WEAK_FUNC(sub_83132728);
PPC_FUNC_IMPL(__imp__sub_83132728) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-316
	ctx.r4.s64 = ctx.r11.s64 + -316;
	// bl 0x82429b48
	ctx.lr = 0x83132744;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5125(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5125, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132760"))) PPC_WEAK_FUNC(sub_83132760);
PPC_FUNC_IMPL(__imp__sub_83132760) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-312
	ctx.r4.s64 = ctx.r11.s64 + -312;
	// bl 0x82429b48
	ctx.lr = 0x8313277C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3422(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3422, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132798"))) PPC_WEAK_FUNC(sub_83132798);
PPC_FUNC_IMPL(__imp__sub_83132798) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-308
	ctx.r4.s64 = ctx.r11.s64 + -308;
	// bl 0x82429b48
	ctx.lr = 0x831327B4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831327D0"))) PPC_WEAK_FUNC(sub_831327D0);
PPC_FUNC_IMPL(__imp__sub_831327D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-304
	ctx.r4.s64 = ctx.r11.s64 + -304;
	// bl 0x82429b48
	ctx.lr = 0x831327EC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,732(r11)
	PPC_STORE_U8(ctx.r11.u32 + 732, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132808"))) PPC_WEAK_FUNC(sub_83132808);
PPC_FUNC_IMPL(__imp__sub_83132808) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-300
	ctx.r4.s64 = ctx.r11.s64 + -300;
	// bl 0x82429b48
	ctx.lr = 0x83132824;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,4573(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4573, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132840"))) PPC_WEAK_FUNC(sub_83132840);
PPC_FUNC_IMPL(__imp__sub_83132840) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-296
	ctx.r4.s64 = ctx.r11.s64 + -296;
	// bl 0x82429b48
	ctx.lr = 0x8313285C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1633(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1633, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132878"))) PPC_WEAK_FUNC(sub_83132878);
PPC_FUNC_IMPL(__imp__sub_83132878) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-292
	ctx.r4.s64 = ctx.r11.s64 + -292;
	// bl 0x82429b48
	ctx.lr = 0x83132894;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831328B0"))) PPC_WEAK_FUNC(sub_831328B0);
PPC_FUNC_IMPL(__imp__sub_831328B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-288
	ctx.r4.s64 = ctx.r11.s64 + -288;
	// bl 0x82429b48
	ctx.lr = 0x831328CC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2062(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2062, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831328E8"))) PPC_WEAK_FUNC(sub_831328E8);
PPC_FUNC_IMPL(__imp__sub_831328E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-284
	ctx.r4.s64 = ctx.r11.s64 + -284;
	// bl 0x82429b48
	ctx.lr = 0x83132904;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
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

__attribute__((alias("__imp__sub_83132920"))) PPC_WEAK_FUNC(sub_83132920);
PPC_FUNC_IMPL(__imp__sub_83132920) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-280
	ctx.r4.s64 = ctx.r11.s64 + -280;
	// bl 0x82429b48
	ctx.lr = 0x8313293C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3344(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3344, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132958"))) PPC_WEAK_FUNC(sub_83132958);
PPC_FUNC_IMPL(__imp__sub_83132958) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-276
	ctx.r4.s64 = ctx.r11.s64 + -276;
	// bl 0x82429b48
	ctx.lr = 0x83132974;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5126(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5126, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132990"))) PPC_WEAK_FUNC(sub_83132990);
PPC_FUNC_IMPL(__imp__sub_83132990) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-272
	ctx.r4.s64 = ctx.r11.s64 + -272;
	// bl 0x82429b48
	ctx.lr = 0x831329AC;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,1814(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1814, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831329C8"))) PPC_WEAK_FUNC(sub_831329C8);
PPC_FUNC_IMPL(__imp__sub_831329C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-268
	ctx.r4.s64 = ctx.r11.s64 + -268;
	// bl 0x82429b48
	ctx.lr = 0x831329E4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,2551(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2551, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132A00"))) PPC_WEAK_FUNC(sub_83132A00);
PPC_FUNC_IMPL(__imp__sub_83132A00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-264
	ctx.r4.s64 = ctx.r11.s64 + -264;
	// bl 0x82429b48
	ctx.lr = 0x83132A1C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,403(r11)
	PPC_STORE_U8(ctx.r11.u32 + 403, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132A38"))) PPC_WEAK_FUNC(sub_83132A38);
PPC_FUNC_IMPL(__imp__sub_83132A38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-260
	ctx.r4.s64 = ctx.r11.s64 + -260;
	// bl 0x82429b48
	ctx.lr = 0x83132A54;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,498(r11)
	PPC_STORE_U8(ctx.r11.u32 + 498, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132A70"))) PPC_WEAK_FUNC(sub_83132A70);
PPC_FUNC_IMPL(__imp__sub_83132A70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-256
	ctx.r4.s64 = ctx.r11.s64 + -256;
	// bl 0x82429b48
	ctx.lr = 0x83132A8C;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,3809(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3809, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132AA8"))) PPC_WEAK_FUNC(sub_83132AA8);
PPC_FUNC_IMPL(__imp__sub_83132AA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,-252
	ctx.r4.s64 = ctx.r11.s64 + -252;
	// bl 0x82429b48
	ctx.lr = 0x83132AC4;
	sub_82429B48(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stb r3,5240(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5240, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

