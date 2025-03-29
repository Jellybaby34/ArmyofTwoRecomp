#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83146398"))) PPC_WEAK_FUNC(sub_83146398);
PPC_FUNC_IMPL(__imp__sub_83146398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29312
	ctx.r3.s64 = ctx.r11.s64 + -29312;
	// b 0x82463cd8
	sub_82463CD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831463A8"))) PPC_WEAK_FUNC(sub_831463A8);
PPC_FUNC_IMPL(__imp__sub_831463A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19176
	ctx.r3.s64 = ctx.r11.s64 + 19176;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831463B8"))) PPC_WEAK_FUNC(sub_831463B8);
PPC_FUNC_IMPL(__imp__sub_831463B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19216
	ctx.r3.s64 = ctx.r11.s64 + 19216;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831463C8"))) PPC_WEAK_FUNC(sub_831463C8);
PPC_FUNC_IMPL(__imp__sub_831463C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,-27296
	ctx.r11.s64 = ctx.r11.s64 + -27296;
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

__attribute__((alias("__imp__sub_831463F8"))) PPC_WEAK_FUNC(sub_831463F8);
PPC_FUNC_IMPL(__imp__sub_831463F8) {
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-27248
	ctx.r11.s64 = ctx.r11.s64 + -27248;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146428"))) PPC_WEAK_FUNC(sub_83146428);
PPC_FUNC_IMPL(__imp__sub_83146428) {
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-27232
	ctx.r11.s64 = ctx.r11.s64 + -27232;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146470"))) PPC_WEAK_FUNC(sub_83146470);
PPC_FUNC_IMPL(__imp__sub_83146470) {
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,-27280
	ctx.r11.s64 = ctx.r11.s64 + -27280;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831464B8"))) PPC_WEAK_FUNC(sub_831464B8);
PPC_FUNC_IMPL(__imp__sub_831464B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-27216
	ctx.r11.s64 = ctx.r11.s64 + -27216;
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// addi r3,r9,19248
	ctx.r3.s64 = ctx.r9.s64 + 19248;
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
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831464E8"))) PPC_WEAK_FUNC(sub_831464E8);
PPC_FUNC_IMPL(__imp__sub_831464E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19416
	ctx.r3.s64 = ctx.r11.s64 + 19416;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831464F8"))) PPC_WEAK_FUNC(sub_831464F8);
PPC_FUNC_IMPL(__imp__sub_831464F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19536
	ctx.r3.s64 = ctx.r11.s64 + 19536;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146508"))) PPC_WEAK_FUNC(sub_83146508);
PPC_FUNC_IMPL(__imp__sub_83146508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r11,30756
	ctx.r3.s64 = ctx.r11.s64 + 30756;
	// li r4,220
	ctx.r4.s64 = 220;
	// bl 0x822e0788
	ctx.lr = 0x83146528;
	sub_822E0788(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19632
	ctx.r3.s64 = ctx.r11.s64 + 19632;
	// bl 0x82e29708
	ctx.lr = 0x83146534;
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

__attribute__((alias("__imp__sub_83146548"))) PPC_WEAK_FUNC(sub_83146548);
PPC_FUNC_IMPL(__imp__sub_83146548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19400
	ctx.r3.s64 = ctx.r11.s64 + 19400;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146558"))) PPC_WEAK_FUNC(sub_83146558);
PPC_FUNC_IMPL(__imp__sub_83146558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-27128
	ctx.r3.s64 = ctx.r11.s64 + -27128;
	// bl 0x82ac8120
	ctx.lr = 0x83146570;
	sub_82AC8120(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19648
	ctx.r3.s64 = ctx.r11.s64 + 19648;
	// bl 0x82e29708
	ctx.lr = 0x8314657C;
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

__attribute__((alias("__imp__sub_83146590"))) PPC_WEAK_FUNC(sub_83146590);
PPC_FUNC_IMPL(__imp__sub_83146590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-27124
	ctx.r3.s64 = ctx.r11.s64 + -27124;
	// bl 0x82ac8120
	ctx.lr = 0x831465A8;
	sub_82AC8120(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19664
	ctx.r3.s64 = ctx.r11.s64 + 19664;
	// bl 0x82e29708
	ctx.lr = 0x831465B4;
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

__attribute__((alias("__imp__sub_831465C8"))) PPC_WEAK_FUNC(sub_831465C8);
PPC_FUNC_IMPL(__imp__sub_831465C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19680
	ctx.r3.s64 = ctx.r11.s64 + 19680;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831465D8"))) PPC_WEAK_FUNC(sub_831465D8);
PPC_FUNC_IMPL(__imp__sub_831465D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r11,-27000
	ctx.r11.s64 = ctx.r11.s64 + -27000;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_831465EC:
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
	// bge cr6,0x831465ec
	if (!ctx.cr6.lt) goto loc_831465EC;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19688
	ctx.r3.s64 = ctx.r11.s64 + 19688;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146618"))) PPC_WEAK_FUNC(sub_83146618);
PPC_FUNC_IMPL(__imp__sub_83146618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// li r10,4095
	ctx.r10.s64 = 4095;
	// addi r11,r11,-26256
	ctx.r11.s64 = ctx.r11.s64 + -26256;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83146628:
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
	// bge cr6,0x83146628
	if (!ctx.cr6.lt) goto loc_83146628;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19696
	ctx.r3.s64 = ctx.r11.s64 + 19696;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146650"))) PPC_WEAK_FUNC(sub_83146650);
PPC_FUNC_IMPL(__imp__sub_83146650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19792
	ctx.r3.s64 = ctx.r11.s64 + 19792;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146660"))) PPC_WEAK_FUNC(sub_83146660);
PPC_FUNC_IMPL(__imp__sub_83146660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,6656
	ctx.r11.s64 = ctx.r11.s64 + 6656;
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

__attribute__((alias("__imp__sub_83146690"))) PPC_WEAK_FUNC(sub_83146690);
PPC_FUNC_IMPL(__imp__sub_83146690) {
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6720
	ctx.r11.s64 = ctx.r11.s64 + 6720;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831466C0"))) PPC_WEAK_FUNC(sub_831466C0);
PPC_FUNC_IMPL(__imp__sub_831466C0) {
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6736
	ctx.r11.s64 = ctx.r11.s64 + 6736;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146708"))) PPC_WEAK_FUNC(sub_83146708);
PPC_FUNC_IMPL(__imp__sub_83146708) {
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,6672
	ctx.r11.s64 = ctx.r11.s64 + 6672;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146750"))) PPC_WEAK_FUNC(sub_83146750);
PPC_FUNC_IMPL(__imp__sub_83146750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,31752
	ctx.r3.s64 = ctx.r11.s64 + 31752;
	// bl 0x82e04108
	ctx.lr = 0x8314676C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19808
	ctx.r3.s64 = ctx.r11.s64 + 19808;
	// bl 0x82e29708
	ctx.lr = 0x83146778;
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

__attribute__((alias("__imp__sub_83146788"))) PPC_WEAK_FUNC(sub_83146788);
PPC_FUNC_IMPL(__imp__sub_83146788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30796
	ctx.r4.s64 = ctx.r11.s64 + 30796;
	// bl 0x82429b48
	ctx.lr = 0x831467A4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6719(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6719, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831467C0"))) PPC_WEAK_FUNC(sub_831467C0);
PPC_FUNC_IMPL(__imp__sub_831467C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30800
	ctx.r4.s64 = ctx.r11.s64 + 30800;
	// bl 0x82429b48
	ctx.lr = 0x831467DC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6814(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6814, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831467F8"))) PPC_WEAK_FUNC(sub_831467F8);
PPC_FUNC_IMPL(__imp__sub_831467F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30804
	ctx.r4.s64 = ctx.r11.s64 + 30804;
	// bl 0x82429b48
	ctx.lr = 0x83146814;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6651(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6651, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146830"))) PPC_WEAK_FUNC(sub_83146830);
PPC_FUNC_IMPL(__imp__sub_83146830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30808
	ctx.r4.s64 = ctx.r11.s64 + 30808;
	// bl 0x82429b48
	ctx.lr = 0x8314684C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6636(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6636, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146868"))) PPC_WEAK_FUNC(sub_83146868);
PPC_FUNC_IMPL(__imp__sub_83146868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30812
	ctx.r4.s64 = ctx.r11.s64 + 30812;
	// bl 0x82429b48
	ctx.lr = 0x83146884;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6620(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6620, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831468A0"))) PPC_WEAK_FUNC(sub_831468A0);
PPC_FUNC_IMPL(__imp__sub_831468A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30816
	ctx.r4.s64 = ctx.r11.s64 + 30816;
	// bl 0x82429b48
	ctx.lr = 0x831468BC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6815(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6815, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831468D8"))) PPC_WEAK_FUNC(sub_831468D8);
PPC_FUNC_IMPL(__imp__sub_831468D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30820
	ctx.r4.s64 = ctx.r11.s64 + 30820;
	// bl 0x82429b48
	ctx.lr = 0x831468F4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6813(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6813, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146910"))) PPC_WEAK_FUNC(sub_83146910);
PPC_FUNC_IMPL(__imp__sub_83146910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30824
	ctx.r4.s64 = ctx.r11.s64 + 30824;
	// bl 0x82429b48
	ctx.lr = 0x8314692C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6771(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6771, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146948"))) PPC_WEAK_FUNC(sub_83146948);
PPC_FUNC_IMPL(__imp__sub_83146948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30828
	ctx.r4.s64 = ctx.r11.s64 + 30828;
	// bl 0x82429b48
	ctx.lr = 0x83146964;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6691(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6691, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146980"))) PPC_WEAK_FUNC(sub_83146980);
PPC_FUNC_IMPL(__imp__sub_83146980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30832
	ctx.r4.s64 = ctx.r11.s64 + 30832;
	// bl 0x82429b48
	ctx.lr = 0x8314699C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6649(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6649, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831469B8"))) PPC_WEAK_FUNC(sub_831469B8);
PPC_FUNC_IMPL(__imp__sub_831469B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30836
	ctx.r4.s64 = ctx.r11.s64 + 30836;
	// bl 0x82429b48
	ctx.lr = 0x831469D4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6646(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6646, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831469F0"))) PPC_WEAK_FUNC(sub_831469F0);
PPC_FUNC_IMPL(__imp__sub_831469F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30840
	ctx.r4.s64 = ctx.r11.s64 + 30840;
	// bl 0x82429b48
	ctx.lr = 0x83146A0C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6644(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6644, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146A28"))) PPC_WEAK_FUNC(sub_83146A28);
PPC_FUNC_IMPL(__imp__sub_83146A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30844
	ctx.r4.s64 = ctx.r11.s64 + 30844;
	// bl 0x82429b48
	ctx.lr = 0x83146A44;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6688(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6688, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146A60"))) PPC_WEAK_FUNC(sub_83146A60);
PPC_FUNC_IMPL(__imp__sub_83146A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30848
	ctx.r4.s64 = ctx.r11.s64 + 30848;
	// bl 0x82429b48
	ctx.lr = 0x83146A7C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6617(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6617, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146A98"))) PPC_WEAK_FUNC(sub_83146A98);
PPC_FUNC_IMPL(__imp__sub_83146A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30852
	ctx.r4.s64 = ctx.r11.s64 + 30852;
	// bl 0x82429b48
	ctx.lr = 0x83146AB4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6621(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6621, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146AD0"))) PPC_WEAK_FUNC(sub_83146AD0);
PPC_FUNC_IMPL(__imp__sub_83146AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30856
	ctx.r4.s64 = ctx.r11.s64 + 30856;
	// bl 0x82429b48
	ctx.lr = 0x83146AEC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6690(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6690, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146B08"))) PPC_WEAK_FUNC(sub_83146B08);
PPC_FUNC_IMPL(__imp__sub_83146B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30860
	ctx.r4.s64 = ctx.r11.s64 + 30860;
	// bl 0x82429b48
	ctx.lr = 0x83146B24;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6635(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6635, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146B40"))) PPC_WEAK_FUNC(sub_83146B40);
PPC_FUNC_IMPL(__imp__sub_83146B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30864
	ctx.r4.s64 = ctx.r11.s64 + 30864;
	// bl 0x82429b48
	ctx.lr = 0x83146B5C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6718(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6718, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146B78"))) PPC_WEAK_FUNC(sub_83146B78);
PPC_FUNC_IMPL(__imp__sub_83146B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30868
	ctx.r4.s64 = ctx.r11.s64 + 30868;
	// bl 0x82429b48
	ctx.lr = 0x83146B94;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6648(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6648, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146BB0"))) PPC_WEAK_FUNC(sub_83146BB0);
PPC_FUNC_IMPL(__imp__sub_83146BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30872
	ctx.r4.s64 = ctx.r11.s64 + 30872;
	// bl 0x82429b48
	ctx.lr = 0x83146BCC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6634(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6634, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146BE8"))) PPC_WEAK_FUNC(sub_83146BE8);
PPC_FUNC_IMPL(__imp__sub_83146BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30876
	ctx.r4.s64 = ctx.r11.s64 + 30876;
	// bl 0x82429b48
	ctx.lr = 0x83146C04;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6647(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6647, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146C20"))) PPC_WEAK_FUNC(sub_83146C20);
PPC_FUNC_IMPL(__imp__sub_83146C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30880
	ctx.r4.s64 = ctx.r11.s64 + 30880;
	// bl 0x82429b48
	ctx.lr = 0x83146C3C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6812(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6812, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146C58"))) PPC_WEAK_FUNC(sub_83146C58);
PPC_FUNC_IMPL(__imp__sub_83146C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30884
	ctx.r4.s64 = ctx.r11.s64 + 30884;
	// bl 0x82429b48
	ctx.lr = 0x83146C74;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6640(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6640, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146C90"))) PPC_WEAK_FUNC(sub_83146C90);
PPC_FUNC_IMPL(__imp__sub_83146C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30888
	ctx.r4.s64 = ctx.r11.s64 + 30888;
	// bl 0x82429b48
	ctx.lr = 0x83146CAC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6625(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6625, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146CC8"))) PPC_WEAK_FUNC(sub_83146CC8);
PPC_FUNC_IMPL(__imp__sub_83146CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30892
	ctx.r4.s64 = ctx.r11.s64 + 30892;
	// bl 0x82429b48
	ctx.lr = 0x83146CE4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6627(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6627, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146D00"))) PPC_WEAK_FUNC(sub_83146D00);
PPC_FUNC_IMPL(__imp__sub_83146D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30896
	ctx.r4.s64 = ctx.r11.s64 + 30896;
	// bl 0x82429b48
	ctx.lr = 0x83146D1C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6770(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6770, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146D38"))) PPC_WEAK_FUNC(sub_83146D38);
PPC_FUNC_IMPL(__imp__sub_83146D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30900
	ctx.r4.s64 = ctx.r11.s64 + 30900;
	// bl 0x82429b48
	ctx.lr = 0x83146D54;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6655(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6655, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146D70"))) PPC_WEAK_FUNC(sub_83146D70);
PPC_FUNC_IMPL(__imp__sub_83146D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30904
	ctx.r4.s64 = ctx.r11.s64 + 30904;
	// bl 0x82429b48
	ctx.lr = 0x83146D8C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6623(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6623, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146DA8"))) PPC_WEAK_FUNC(sub_83146DA8);
PPC_FUNC_IMPL(__imp__sub_83146DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30908
	ctx.r4.s64 = ctx.r11.s64 + 30908;
	// bl 0x82429b48
	ctx.lr = 0x83146DC4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6650(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6650, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146DE0"))) PPC_WEAK_FUNC(sub_83146DE0);
PPC_FUNC_IMPL(__imp__sub_83146DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30912
	ctx.r4.s64 = ctx.r11.s64 + 30912;
	// bl 0x82429b48
	ctx.lr = 0x83146DFC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6624(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6624, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146E18"))) PPC_WEAK_FUNC(sub_83146E18);
PPC_FUNC_IMPL(__imp__sub_83146E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30916
	ctx.r4.s64 = ctx.r11.s64 + 30916;
	// bl 0x82429b48
	ctx.lr = 0x83146E34;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6612(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6612, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146E50"))) PPC_WEAK_FUNC(sub_83146E50);
PPC_FUNC_IMPL(__imp__sub_83146E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30920
	ctx.r4.s64 = ctx.r11.s64 + 30920;
	// bl 0x82429b48
	ctx.lr = 0x83146E6C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6816(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6816, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146E88"))) PPC_WEAK_FUNC(sub_83146E88);
PPC_FUNC_IMPL(__imp__sub_83146E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30924
	ctx.r4.s64 = ctx.r11.s64 + 30924;
	// bl 0x82429b48
	ctx.lr = 0x83146EA4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6639(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6639, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146EC0"))) PPC_WEAK_FUNC(sub_83146EC0);
PPC_FUNC_IMPL(__imp__sub_83146EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30928
	ctx.r4.s64 = ctx.r11.s64 + 30928;
	// bl 0x82429b48
	ctx.lr = 0x83146EDC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6652(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6652, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146EF8"))) PPC_WEAK_FUNC(sub_83146EF8);
PPC_FUNC_IMPL(__imp__sub_83146EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30932
	ctx.r4.s64 = ctx.r11.s64 + 30932;
	// bl 0x82429b48
	ctx.lr = 0x83146F14;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6716(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6716, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146F30"))) PPC_WEAK_FUNC(sub_83146F30);
PPC_FUNC_IMPL(__imp__sub_83146F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30936
	ctx.r4.s64 = ctx.r11.s64 + 30936;
	// bl 0x82429b48
	ctx.lr = 0x83146F4C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6614(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6614, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146F68"))) PPC_WEAK_FUNC(sub_83146F68);
PPC_FUNC_IMPL(__imp__sub_83146F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30940
	ctx.r4.s64 = ctx.r11.s64 + 30940;
	// bl 0x82429b48
	ctx.lr = 0x83146F84;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6643(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6643, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146FA0"))) PPC_WEAK_FUNC(sub_83146FA0);
PPC_FUNC_IMPL(__imp__sub_83146FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30944
	ctx.r4.s64 = ctx.r11.s64 + 30944;
	// bl 0x82429b48
	ctx.lr = 0x83146FBC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6629(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6629, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146FD8"))) PPC_WEAK_FUNC(sub_83146FD8);
PPC_FUNC_IMPL(__imp__sub_83146FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30948
	ctx.r4.s64 = ctx.r11.s64 + 30948;
	// bl 0x82429b48
	ctx.lr = 0x83146FF4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6653(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6653, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147010"))) PPC_WEAK_FUNC(sub_83147010);
PPC_FUNC_IMPL(__imp__sub_83147010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30952
	ctx.r4.s64 = ctx.r11.s64 + 30952;
	// bl 0x82429b48
	ctx.lr = 0x8314702C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6628(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6628, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147048"))) PPC_WEAK_FUNC(sub_83147048);
PPC_FUNC_IMPL(__imp__sub_83147048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30956
	ctx.r4.s64 = ctx.r11.s64 + 30956;
	// bl 0x82429b48
	ctx.lr = 0x83147064;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6637(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6637, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147080"))) PPC_WEAK_FUNC(sub_83147080);
PPC_FUNC_IMPL(__imp__sub_83147080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30960
	ctx.r4.s64 = ctx.r11.s64 + 30960;
	// bl 0x82429b48
	ctx.lr = 0x8314709C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6811(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6811, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831470B8"))) PPC_WEAK_FUNC(sub_831470B8);
PPC_FUNC_IMPL(__imp__sub_831470B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30964
	ctx.r4.s64 = ctx.r11.s64 + 30964;
	// bl 0x82429b48
	ctx.lr = 0x831470D4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6642(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6642, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831470F0"))) PPC_WEAK_FUNC(sub_831470F0);
PPC_FUNC_IMPL(__imp__sub_831470F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30968
	ctx.r4.s64 = ctx.r11.s64 + 30968;
	// bl 0x82429b48
	ctx.lr = 0x8314710C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6618(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6618, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147128"))) PPC_WEAK_FUNC(sub_83147128);
PPC_FUNC_IMPL(__imp__sub_83147128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30972
	ctx.r4.s64 = ctx.r11.s64 + 30972;
	// bl 0x82429b48
	ctx.lr = 0x83147144;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6654(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6654, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147160"))) PPC_WEAK_FUNC(sub_83147160);
PPC_FUNC_IMPL(__imp__sub_83147160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30976
	ctx.r4.s64 = ctx.r11.s64 + 30976;
	// bl 0x82429b48
	ctx.lr = 0x8314717C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6626(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6626, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147198"))) PPC_WEAK_FUNC(sub_83147198);
PPC_FUNC_IMPL(__imp__sub_83147198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30980
	ctx.r4.s64 = ctx.r11.s64 + 30980;
	// bl 0x82429b48
	ctx.lr = 0x831471B4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6619(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6619, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831471D0"))) PPC_WEAK_FUNC(sub_831471D0);
PPC_FUNC_IMPL(__imp__sub_831471D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30984
	ctx.r4.s64 = ctx.r11.s64 + 30984;
	// bl 0x82429b48
	ctx.lr = 0x831471EC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6641(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6641, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147208"))) PPC_WEAK_FUNC(sub_83147208);
PPC_FUNC_IMPL(__imp__sub_83147208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30988
	ctx.r4.s64 = ctx.r11.s64 + 30988;
	// bl 0x82429b48
	ctx.lr = 0x83147224;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6632(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6632, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147240"))) PPC_WEAK_FUNC(sub_83147240);
PPC_FUNC_IMPL(__imp__sub_83147240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30992
	ctx.r4.s64 = ctx.r11.s64 + 30992;
	// bl 0x82429b48
	ctx.lr = 0x8314725C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6809(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6809, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147278"))) PPC_WEAK_FUNC(sub_83147278);
PPC_FUNC_IMPL(__imp__sub_83147278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,30996
	ctx.r4.s64 = ctx.r11.s64 + 30996;
	// bl 0x82429b48
	ctx.lr = 0x83147294;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6613(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6613, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831472B0"))) PPC_WEAK_FUNC(sub_831472B0);
PPC_FUNC_IMPL(__imp__sub_831472B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31000
	ctx.r4.s64 = ctx.r11.s64 + 31000;
	// bl 0x82429b48
	ctx.lr = 0x831472CC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6630(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6630, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831472E8"))) PPC_WEAK_FUNC(sub_831472E8);
PPC_FUNC_IMPL(__imp__sub_831472E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31004
	ctx.r4.s64 = ctx.r11.s64 + 31004;
	// bl 0x82429b48
	ctx.lr = 0x83147304;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6769(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6769, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147320"))) PPC_WEAK_FUNC(sub_83147320);
PPC_FUNC_IMPL(__imp__sub_83147320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31008
	ctx.r4.s64 = ctx.r11.s64 + 31008;
	// bl 0x82429b48
	ctx.lr = 0x8314733C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6689(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6689, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147358"))) PPC_WEAK_FUNC(sub_83147358);
PPC_FUNC_IMPL(__imp__sub_83147358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31012
	ctx.r4.s64 = ctx.r11.s64 + 31012;
	// bl 0x82429b48
	ctx.lr = 0x83147374;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6638(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6638, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147390"))) PPC_WEAK_FUNC(sub_83147390);
PPC_FUNC_IMPL(__imp__sub_83147390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31016
	ctx.r4.s64 = ctx.r11.s64 + 31016;
	// bl 0x82429b48
	ctx.lr = 0x831473AC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6631(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6631, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831473C8"))) PPC_WEAK_FUNC(sub_831473C8);
PPC_FUNC_IMPL(__imp__sub_831473C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31020
	ctx.r4.s64 = ctx.r11.s64 + 31020;
	// bl 0x82429b48
	ctx.lr = 0x831473E4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6633(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6633, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147400"))) PPC_WEAK_FUNC(sub_83147400);
PPC_FUNC_IMPL(__imp__sub_83147400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31024
	ctx.r4.s64 = ctx.r11.s64 + 31024;
	// bl 0x82429b48
	ctx.lr = 0x8314741C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6808(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6808, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147438"))) PPC_WEAK_FUNC(sub_83147438);
PPC_FUNC_IMPL(__imp__sub_83147438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31028
	ctx.r4.s64 = ctx.r11.s64 + 31028;
	// bl 0x82429b48
	ctx.lr = 0x83147454;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6645(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6645, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147470"))) PPC_WEAK_FUNC(sub_83147470);
PPC_FUNC_IMPL(__imp__sub_83147470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31032
	ctx.r4.s64 = ctx.r11.s64 + 31032;
	// bl 0x82429b48
	ctx.lr = 0x8314748C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6616(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6616, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831474A8"))) PPC_WEAK_FUNC(sub_831474A8);
PPC_FUNC_IMPL(__imp__sub_831474A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31036
	ctx.r4.s64 = ctx.r11.s64 + 31036;
	// bl 0x82429b48
	ctx.lr = 0x831474C4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6717(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6717, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831474E0"))) PPC_WEAK_FUNC(sub_831474E0);
PPC_FUNC_IMPL(__imp__sub_831474E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31040
	ctx.r4.s64 = ctx.r11.s64 + 31040;
	// bl 0x82429b48
	ctx.lr = 0x831474FC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6810(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6810, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147518"))) PPC_WEAK_FUNC(sub_83147518);
PPC_FUNC_IMPL(__imp__sub_83147518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31044
	ctx.r4.s64 = ctx.r11.s64 + 31044;
	// bl 0x82429b48
	ctx.lr = 0x83147534;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6615(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6615, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147550"))) PPC_WEAK_FUNC(sub_83147550);
PPC_FUNC_IMPL(__imp__sub_83147550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31048
	ctx.r4.s64 = ctx.r11.s64 + 31048;
	// bl 0x82429b48
	ctx.lr = 0x8314756C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6622(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6622, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147588"))) PPC_WEAK_FUNC(sub_83147588);
PPC_FUNC_IMPL(__imp__sub_83147588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31052
	ctx.r4.s64 = ctx.r11.s64 + 31052;
	// bl 0x82429b48
	ctx.lr = 0x831475A4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6768(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6768, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831475C0"))) PPC_WEAK_FUNC(sub_831475C0);
PPC_FUNC_IMPL(__imp__sub_831475C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20080
	ctx.r3.s64 = ctx.r11.s64 + 20080;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831475D0"))) PPC_WEAK_FUNC(sub_831475D0);
PPC_FUNC_IMPL(__imp__sub_831475D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20096
	ctx.r3.s64 = ctx.r11.s64 + 20096;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831475E0"))) PPC_WEAK_FUNC(sub_831475E0);
PPC_FUNC_IMPL(__imp__sub_831475E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20112
	ctx.r3.s64 = ctx.r11.s64 + 20112;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831475F0"))) PPC_WEAK_FUNC(sub_831475F0);
PPC_FUNC_IMPL(__imp__sub_831475F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20128
	ctx.r3.s64 = ctx.r11.s64 + 20128;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147600"))) PPC_WEAK_FUNC(sub_83147600);
PPC_FUNC_IMPL(__imp__sub_83147600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20200
	ctx.r3.s64 = ctx.r11.s64 + 20200;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147610"))) PPC_WEAK_FUNC(sub_83147610);
PPC_FUNC_IMPL(__imp__sub_83147610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19888
	ctx.r3.s64 = ctx.r11.s64 + 19888;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147620"))) PPC_WEAK_FUNC(sub_83147620);
PPC_FUNC_IMPL(__imp__sub_83147620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19936
	ctx.r3.s64 = ctx.r11.s64 + 19936;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147630"))) PPC_WEAK_FUNC(sub_83147630);
PPC_FUNC_IMPL(__imp__sub_83147630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,19984
	ctx.r3.s64 = ctx.r11.s64 + 19984;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147640"))) PPC_WEAK_FUNC(sub_83147640);
PPC_FUNC_IMPL(__imp__sub_83147640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147650"))) PPC_WEAK_FUNC(sub_83147650);
PPC_FUNC_IMPL(__imp__sub_83147650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20016
	ctx.r3.s64 = ctx.r11.s64 + 20016;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147660"))) PPC_WEAK_FUNC(sub_83147660);
PPC_FUNC_IMPL(__imp__sub_83147660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20032
	ctx.r3.s64 = ctx.r11.s64 + 20032;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147670"))) PPC_WEAK_FUNC(sub_83147670);
PPC_FUNC_IMPL(__imp__sub_83147670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20048
	ctx.r3.s64 = ctx.r11.s64 + 20048;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147680"))) PPC_WEAK_FUNC(sub_83147680);
PPC_FUNC_IMPL(__imp__sub_83147680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20064
	ctx.r3.s64 = ctx.r11.s64 + 20064;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147690"))) PPC_WEAK_FUNC(sub_83147690);
PPC_FUNC_IMPL(__imp__sub_83147690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,7104
	ctx.r11.s64 = ctx.r11.s64 + 7104;
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

__attribute__((alias("__imp__sub_831476C0"))) PPC_WEAK_FUNC(sub_831476C0);
PPC_FUNC_IMPL(__imp__sub_831476C0) {
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7200
	ctx.r11.s64 = ctx.r11.s64 + 7200;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831476F0"))) PPC_WEAK_FUNC(sub_831476F0);
PPC_FUNC_IMPL(__imp__sub_831476F0) {
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7232
	ctx.r11.s64 = ctx.r11.s64 + 7232;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147738"))) PPC_WEAK_FUNC(sub_83147738);
PPC_FUNC_IMPL(__imp__sub_83147738) {
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,7152
	ctx.r11.s64 = ctx.r11.s64 + 7152;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147780"))) PPC_WEAK_FUNC(sub_83147780);
PPC_FUNC_IMPL(__imp__sub_83147780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31872
	ctx.r4.s64 = ctx.r11.s64 + 31872;
	// bl 0x82429b48
	ctx.lr = 0x8314779C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7103(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7103, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831477B8"))) PPC_WEAK_FUNC(sub_831477B8);
PPC_FUNC_IMPL(__imp__sub_831477B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31876
	ctx.r4.s64 = ctx.r11.s64 + 31876;
	// bl 0x82429b48
	ctx.lr = 0x831477D4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7224(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7224, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831477F0"))) PPC_WEAK_FUNC(sub_831477F0);
PPC_FUNC_IMPL(__imp__sub_831477F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31880
	ctx.r4.s64 = ctx.r11.s64 + 31880;
	// bl 0x82429b48
	ctx.lr = 0x8314780C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7179(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7179, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147828"))) PPC_WEAK_FUNC(sub_83147828);
PPC_FUNC_IMPL(__imp__sub_83147828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31884
	ctx.r4.s64 = ctx.r11.s64 + 31884;
	// bl 0x82429b48
	ctx.lr = 0x83147844;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7074(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7074, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147860"))) PPC_WEAK_FUNC(sub_83147860);
PPC_FUNC_IMPL(__imp__sub_83147860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31888
	ctx.r4.s64 = ctx.r11.s64 + 31888;
	// bl 0x82429b48
	ctx.lr = 0x8314787C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7098(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7098, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147898"))) PPC_WEAK_FUNC(sub_83147898);
PPC_FUNC_IMPL(__imp__sub_83147898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31892
	ctx.r4.s64 = ctx.r11.s64 + 31892;
	// bl 0x82429b48
	ctx.lr = 0x831478B4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7137(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7137, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831478D0"))) PPC_WEAK_FUNC(sub_831478D0);
PPC_FUNC_IMPL(__imp__sub_831478D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31896
	ctx.r4.s64 = ctx.r11.s64 + 31896;
	// bl 0x82429b48
	ctx.lr = 0x831478EC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7141(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7141, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147908"))) PPC_WEAK_FUNC(sub_83147908);
PPC_FUNC_IMPL(__imp__sub_83147908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31900
	ctx.r4.s64 = ctx.r11.s64 + 31900;
	// bl 0x82429b48
	ctx.lr = 0x83147924;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7068(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7068, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147940"))) PPC_WEAK_FUNC(sub_83147940);
PPC_FUNC_IMPL(__imp__sub_83147940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31904
	ctx.r4.s64 = ctx.r11.s64 + 31904;
	// bl 0x82429b48
	ctx.lr = 0x8314795C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7173(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7173, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147978"))) PPC_WEAK_FUNC(sub_83147978);
PPC_FUNC_IMPL(__imp__sub_83147978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31908
	ctx.r4.s64 = ctx.r11.s64 + 31908;
	// bl 0x82429b48
	ctx.lr = 0x83147994;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7169(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7169, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831479B0"))) PPC_WEAK_FUNC(sub_831479B0);
PPC_FUNC_IMPL(__imp__sub_831479B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31912
	ctx.r4.s64 = ctx.r11.s64 + 31912;
	// bl 0x82429b48
	ctx.lr = 0x831479CC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6947(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6947, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831479E8"))) PPC_WEAK_FUNC(sub_831479E8);
PPC_FUNC_IMPL(__imp__sub_831479E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31916
	ctx.r4.s64 = ctx.r11.s64 + 31916;
	// bl 0x82429b48
	ctx.lr = 0x83147A04;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6998(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6998, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147A20"))) PPC_WEAK_FUNC(sub_83147A20);
PPC_FUNC_IMPL(__imp__sub_83147A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31920
	ctx.r4.s64 = ctx.r11.s64 + 31920;
	// bl 0x82429b48
	ctx.lr = 0x83147A3C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7069(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7069, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147A58"))) PPC_WEAK_FUNC(sub_83147A58);
PPC_FUNC_IMPL(__imp__sub_83147A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31924
	ctx.r4.s64 = ctx.r11.s64 + 31924;
	// bl 0x82429b48
	ctx.lr = 0x83147A74;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6965(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6965, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147A90"))) PPC_WEAK_FUNC(sub_83147A90);
PPC_FUNC_IMPL(__imp__sub_83147A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31928
	ctx.r4.s64 = ctx.r11.s64 + 31928;
	// bl 0x82429b48
	ctx.lr = 0x83147AAC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7229(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7229, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147AC8"))) PPC_WEAK_FUNC(sub_83147AC8);
PPC_FUNC_IMPL(__imp__sub_83147AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31932
	ctx.r4.s64 = ctx.r11.s64 + 31932;
	// bl 0x82429b48
	ctx.lr = 0x83147AE4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6979(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6979, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147B00"))) PPC_WEAK_FUNC(sub_83147B00);
PPC_FUNC_IMPL(__imp__sub_83147B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31936
	ctx.r4.s64 = ctx.r11.s64 + 31936;
	// bl 0x82429b48
	ctx.lr = 0x83147B1C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6997(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6997, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147B38"))) PPC_WEAK_FUNC(sub_83147B38);
PPC_FUNC_IMPL(__imp__sub_83147B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31940
	ctx.r4.s64 = ctx.r11.s64 + 31940;
	// bl 0x82429b48
	ctx.lr = 0x83147B54;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7093(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7093, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147B70"))) PPC_WEAK_FUNC(sub_83147B70);
PPC_FUNC_IMPL(__imp__sub_83147B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31944
	ctx.r4.s64 = ctx.r11.s64 + 31944;
	// bl 0x82429b48
	ctx.lr = 0x83147B8C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7189(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7189, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147BA8"))) PPC_WEAK_FUNC(sub_83147BA8);
PPC_FUNC_IMPL(__imp__sub_83147BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31948
	ctx.r4.s64 = ctx.r11.s64 + 31948;
	// bl 0x82429b48
	ctx.lr = 0x83147BC4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7096(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7096, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147BE0"))) PPC_WEAK_FUNC(sub_83147BE0);
PPC_FUNC_IMPL(__imp__sub_83147BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31952
	ctx.r4.s64 = ctx.r11.s64 + 31952;
	// bl 0x82429b48
	ctx.lr = 0x83147BFC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7075(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7075, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147C18"))) PPC_WEAK_FUNC(sub_83147C18);
PPC_FUNC_IMPL(__imp__sub_83147C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// bl 0x82429b48
	ctx.lr = 0x83147C34;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6927(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6927, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147C50"))) PPC_WEAK_FUNC(sub_83147C50);
PPC_FUNC_IMPL(__imp__sub_83147C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31960
	ctx.r4.s64 = ctx.r11.s64 + 31960;
	// bl 0x82429b48
	ctx.lr = 0x83147C6C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7099(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7099, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147C88"))) PPC_WEAK_FUNC(sub_83147C88);
PPC_FUNC_IMPL(__imp__sub_83147C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31964
	ctx.r4.s64 = ctx.r11.s64 + 31964;
	// bl 0x82429b48
	ctx.lr = 0x83147CA4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7190(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7190, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147CC0"))) PPC_WEAK_FUNC(sub_83147CC0);
PPC_FUNC_IMPL(__imp__sub_83147CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31968
	ctx.r4.s64 = ctx.r11.s64 + 31968;
	// bl 0x82429b48
	ctx.lr = 0x83147CDC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6978(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6978, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147CF8"))) PPC_WEAK_FUNC(sub_83147CF8);
PPC_FUNC_IMPL(__imp__sub_83147CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31972
	ctx.r4.s64 = ctx.r11.s64 + 31972;
	// bl 0x82429b48
	ctx.lr = 0x83147D14;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6967(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6967, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147D30"))) PPC_WEAK_FUNC(sub_83147D30);
PPC_FUNC_IMPL(__imp__sub_83147D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31976
	ctx.r4.s64 = ctx.r11.s64 + 31976;
	// bl 0x82429b48
	ctx.lr = 0x83147D4C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7026(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7026, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147D68"))) PPC_WEAK_FUNC(sub_83147D68);
PPC_FUNC_IMPL(__imp__sub_83147D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31980
	ctx.r4.s64 = ctx.r11.s64 + 31980;
	// bl 0x82429b48
	ctx.lr = 0x83147D84;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6945(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6945, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147DA0"))) PPC_WEAK_FUNC(sub_83147DA0);
PPC_FUNC_IMPL(__imp__sub_83147DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31984
	ctx.r4.s64 = ctx.r11.s64 + 31984;
	// bl 0x82429b48
	ctx.lr = 0x83147DBC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6906(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6906, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147DD8"))) PPC_WEAK_FUNC(sub_83147DD8);
PPC_FUNC_IMPL(__imp__sub_83147DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31988
	ctx.r4.s64 = ctx.r11.s64 + 31988;
	// bl 0x82429b48
	ctx.lr = 0x83147DF4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6999(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6999, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E10"))) PPC_WEAK_FUNC(sub_83147E10);
PPC_FUNC_IMPL(__imp__sub_83147E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31992
	ctx.r4.s64 = ctx.r11.s64 + 31992;
	// bl 0x82429b48
	ctx.lr = 0x83147E2C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7100, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E48"))) PPC_WEAK_FUNC(sub_83147E48);
PPC_FUNC_IMPL(__imp__sub_83147E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,31996
	ctx.r4.s64 = ctx.r11.s64 + 31996;
	// bl 0x82429b48
	ctx.lr = 0x83147E64;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7231(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7231, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E80"))) PPC_WEAK_FUNC(sub_83147E80);
PPC_FUNC_IMPL(__imp__sub_83147E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32000
	ctx.r4.s64 = ctx.r11.s64 + 32000;
	// bl 0x82429b48
	ctx.lr = 0x83147E9C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6946(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6946, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EB8"))) PPC_WEAK_FUNC(sub_83147EB8);
PPC_FUNC_IMPL(__imp__sub_83147EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32004
	ctx.r4.s64 = ctx.r11.s64 + 32004;
	// bl 0x82429b48
	ctx.lr = 0x83147ED4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6976(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6976, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EF0"))) PPC_WEAK_FUNC(sub_83147EF0);
PPC_FUNC_IMPL(__imp__sub_83147EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32008
	ctx.r4.s64 = ctx.r11.s64 + 32008;
	// bl 0x82429b48
	ctx.lr = 0x83147F0C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6904(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6904, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F28"))) PPC_WEAK_FUNC(sub_83147F28);
PPC_FUNC_IMPL(__imp__sub_83147F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32012
	ctx.r4.s64 = ctx.r11.s64 + 32012;
	// bl 0x82429b48
	ctx.lr = 0x83147F44;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7027(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7027, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F60"))) PPC_WEAK_FUNC(sub_83147F60);
PPC_FUNC_IMPL(__imp__sub_83147F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32016
	ctx.r4.s64 = ctx.r11.s64 + 32016;
	// bl 0x82429b48
	ctx.lr = 0x83147F7C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7177(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7177, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F98"))) PPC_WEAK_FUNC(sub_83147F98);
PPC_FUNC_IMPL(__imp__sub_83147F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32020
	ctx.r4.s64 = ctx.r11.s64 + 32020;
	// bl 0x82429b48
	ctx.lr = 0x83147FB4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6924(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6924, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FD0"))) PPC_WEAK_FUNC(sub_83147FD0);
PPC_FUNC_IMPL(__imp__sub_83147FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32024
	ctx.r4.s64 = ctx.r11.s64 + 32024;
	// bl 0x82429b48
	ctx.lr = 0x83147FEC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7095(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7095, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148008"))) PPC_WEAK_FUNC(sub_83148008);
PPC_FUNC_IMPL(__imp__sub_83148008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32028
	ctx.r4.s64 = ctx.r11.s64 + 32028;
	// bl 0x82429b48
	ctx.lr = 0x83148024;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6944(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6944, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148040"))) PPC_WEAK_FUNC(sub_83148040);
PPC_FUNC_IMPL(__imp__sub_83148040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32032
	ctx.r4.s64 = ctx.r11.s64 + 32032;
	// bl 0x82429b48
	ctx.lr = 0x8314805C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6996(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6996, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148078"))) PPC_WEAK_FUNC(sub_83148078);
PPC_FUNC_IMPL(__imp__sub_83148078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32036
	ctx.r4.s64 = ctx.r11.s64 + 32036;
	// bl 0x82429b48
	ctx.lr = 0x83148094;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7230(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7230, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480B0"))) PPC_WEAK_FUNC(sub_831480B0);
PPC_FUNC_IMPL(__imp__sub_831480B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32040
	ctx.r4.s64 = ctx.r11.s64 + 32040;
	// bl 0x82429b48
	ctx.lr = 0x831480CC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7140, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480E8"))) PPC_WEAK_FUNC(sub_831480E8);
PPC_FUNC_IMPL(__imp__sub_831480E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32044
	ctx.r4.s64 = ctx.r11.s64 + 32044;
	// bl 0x82429b48
	ctx.lr = 0x83148104;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7178(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7178, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148120"))) PPC_WEAK_FUNC(sub_83148120);
PPC_FUNC_IMPL(__imp__sub_83148120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32048
	ctx.r4.s64 = ctx.r11.s64 + 32048;
	// bl 0x82429b48
	ctx.lr = 0x8314813C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7073(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7073, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148158"))) PPC_WEAK_FUNC(sub_83148158);
PPC_FUNC_IMPL(__imp__sub_83148158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32052
	ctx.r4.s64 = ctx.r11.s64 + 32052;
	// bl 0x82429b48
	ctx.lr = 0x83148174;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6926(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6926, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148190"))) PPC_WEAK_FUNC(sub_83148190);
PPC_FUNC_IMPL(__imp__sub_83148190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32056
	ctx.r4.s64 = ctx.r11.s64 + 32056;
	// bl 0x82429b48
	ctx.lr = 0x831481AC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6977(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6977, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831481C8"))) PPC_WEAK_FUNC(sub_831481C8);
PPC_FUNC_IMPL(__imp__sub_831481C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32060
	ctx.r4.s64 = ctx.r11.s64 + 32060;
	// bl 0x82429b48
	ctx.lr = 0x831481E4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7188(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7188, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148200"))) PPC_WEAK_FUNC(sub_83148200);
PPC_FUNC_IMPL(__imp__sub_83148200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32064
	ctx.r4.s64 = ctx.r11.s64 + 32064;
	// bl 0x82429b48
	ctx.lr = 0x8314821C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7138(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7138, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148238"))) PPC_WEAK_FUNC(sub_83148238);
PPC_FUNC_IMPL(__imp__sub_83148238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32068
	ctx.r4.s64 = ctx.r11.s64 + 32068;
	// bl 0x82429b48
	ctx.lr = 0x83148254;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7226(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7226, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148270"))) PPC_WEAK_FUNC(sub_83148270);
PPC_FUNC_IMPL(__imp__sub_83148270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32072
	ctx.r4.s64 = ctx.r11.s64 + 32072;
	// bl 0x82429b48
	ctx.lr = 0x8314828C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7097(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7097, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831482A8"))) PPC_WEAK_FUNC(sub_831482A8);
PPC_FUNC_IMPL(__imp__sub_831482A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32076
	ctx.r4.s64 = ctx.r11.s64 + 32076;
	// bl 0x82429b48
	ctx.lr = 0x831482C4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7175(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7175, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831482E0"))) PPC_WEAK_FUNC(sub_831482E0);
PPC_FUNC_IMPL(__imp__sub_831482E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32080
	ctx.r4.s64 = ctx.r11.s64 + 32080;
	// bl 0x82429b48
	ctx.lr = 0x831482FC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7025(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7025, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148318"))) PPC_WEAK_FUNC(sub_83148318);
PPC_FUNC_IMPL(__imp__sub_83148318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32084
	ctx.r4.s64 = ctx.r11.s64 + 32084;
	// bl 0x82429b48
	ctx.lr = 0x83148334;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6905(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6905, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148350"))) PPC_WEAK_FUNC(sub_83148350);
PPC_FUNC_IMPL(__imp__sub_83148350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32088
	ctx.r4.s64 = ctx.r11.s64 + 32088;
	// bl 0x82429b48
	ctx.lr = 0x8314836C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6907(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6907, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148388"))) PPC_WEAK_FUNC(sub_83148388);
PPC_FUNC_IMPL(__imp__sub_83148388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32092
	ctx.r4.s64 = ctx.r11.s64 + 32092;
	// bl 0x82429b48
	ctx.lr = 0x831483A4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7024(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7024, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831483C0"))) PPC_WEAK_FUNC(sub_831483C0);
PPC_FUNC_IMPL(__imp__sub_831483C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32096
	ctx.r4.s64 = ctx.r11.s64 + 32096;
	// bl 0x82429b48
	ctx.lr = 0x831483DC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7092(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7092, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831483F8"))) PPC_WEAK_FUNC(sub_831483F8);
PPC_FUNC_IMPL(__imp__sub_831483F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32100
	ctx.r4.s64 = ctx.r11.s64 + 32100;
	// bl 0x82429b48
	ctx.lr = 0x83148414;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6964(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6964, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148430"))) PPC_WEAK_FUNC(sub_83148430);
PPC_FUNC_IMPL(__imp__sub_83148430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32104
	ctx.r4.s64 = ctx.r11.s64 + 32104;
	// bl 0x82429b48
	ctx.lr = 0x8314844C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7191(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7191, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148468"))) PPC_WEAK_FUNC(sub_83148468);
PPC_FUNC_IMPL(__imp__sub_83148468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32108
	ctx.r4.s64 = ctx.r11.s64 + 32108;
	// bl 0x82429b48
	ctx.lr = 0x83148484;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7227(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7227, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831484A0"))) PPC_WEAK_FUNC(sub_831484A0);
PPC_FUNC_IMPL(__imp__sub_831484A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32112
	ctx.r4.s64 = ctx.r11.s64 + 32112;
	// bl 0x82429b48
	ctx.lr = 0x831484BC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7143(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7143, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831484D8"))) PPC_WEAK_FUNC(sub_831484D8);
PPC_FUNC_IMPL(__imp__sub_831484D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32116
	ctx.r4.s64 = ctx.r11.s64 + 32116;
	// bl 0x82429b48
	ctx.lr = 0x831484F4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7174(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7174, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148510"))) PPC_WEAK_FUNC(sub_83148510);
PPC_FUNC_IMPL(__imp__sub_83148510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32120
	ctx.r4.s64 = ctx.r11.s64 + 32120;
	// bl 0x82429b48
	ctx.lr = 0x8314852C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7142(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7142, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148548"))) PPC_WEAK_FUNC(sub_83148548);
PPC_FUNC_IMPL(__imp__sub_83148548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32124
	ctx.r4.s64 = ctx.r11.s64 + 32124;
	// bl 0x82429b48
	ctx.lr = 0x83148564;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7101(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7101, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148580"))) PPC_WEAK_FUNC(sub_83148580);
PPC_FUNC_IMPL(__imp__sub_83148580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32128
	ctx.r4.s64 = ctx.r11.s64 + 32128;
	// bl 0x82429b48
	ctx.lr = 0x8314859C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7170(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7170, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831485B8"))) PPC_WEAK_FUNC(sub_831485B8);
PPC_FUNC_IMPL(__imp__sub_831485B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32132
	ctx.r4.s64 = ctx.r11.s64 + 32132;
	// bl 0x82429b48
	ctx.lr = 0x831485D4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7070(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7070, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831485F0"))) PPC_WEAK_FUNC(sub_831485F0);
PPC_FUNC_IMPL(__imp__sub_831485F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32136
	ctx.r4.s64 = ctx.r11.s64 + 32136;
	// bl 0x82429b48
	ctx.lr = 0x8314860C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7072(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7072, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148628"))) PPC_WEAK_FUNC(sub_83148628);
PPC_FUNC_IMPL(__imp__sub_83148628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32140
	ctx.r4.s64 = ctx.r11.s64 + 32140;
	// bl 0x82429b48
	ctx.lr = 0x83148644;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7071(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7071, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148660"))) PPC_WEAK_FUNC(sub_83148660);
PPC_FUNC_IMPL(__imp__sub_83148660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32144
	ctx.r4.s64 = ctx.r11.s64 + 32144;
	// bl 0x82429b48
	ctx.lr = 0x8314867C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7136, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148698"))) PPC_WEAK_FUNC(sub_83148698);
PPC_FUNC_IMPL(__imp__sub_83148698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32148
	ctx.r4.s64 = ctx.r11.s64 + 32148;
	// bl 0x82429b48
	ctx.lr = 0x831486B4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7094(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7094, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831486D0"))) PPC_WEAK_FUNC(sub_831486D0);
PPC_FUNC_IMPL(__imp__sub_831486D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32152
	ctx.r4.s64 = ctx.r11.s64 + 32152;
	// bl 0x82429b48
	ctx.lr = 0x831486EC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6925(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6925, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148708"))) PPC_WEAK_FUNC(sub_83148708);
PPC_FUNC_IMPL(__imp__sub_83148708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32156
	ctx.r4.s64 = ctx.r11.s64 + 32156;
	// bl 0x82429b48
	ctx.lr = 0x83148724;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7139(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7139, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148740"))) PPC_WEAK_FUNC(sub_83148740);
PPC_FUNC_IMPL(__imp__sub_83148740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32160
	ctx.r4.s64 = ctx.r11.s64 + 32160;
	// bl 0x82429b48
	ctx.lr = 0x8314875C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7228(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7228, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148778"))) PPC_WEAK_FUNC(sub_83148778);
PPC_FUNC_IMPL(__imp__sub_83148778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32164
	ctx.r4.s64 = ctx.r11.s64 + 32164;
	// bl 0x82429b48
	ctx.lr = 0x83148794;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7102(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7102, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831487B0"))) PPC_WEAK_FUNC(sub_831487B0);
PPC_FUNC_IMPL(__imp__sub_831487B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32168
	ctx.r4.s64 = ctx.r11.s64 + 32168;
	// bl 0x82429b48
	ctx.lr = 0x831487CC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7171(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7171, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831487E8"))) PPC_WEAK_FUNC(sub_831487E8);
PPC_FUNC_IMPL(__imp__sub_831487E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32172
	ctx.r4.s64 = ctx.r11.s64 + 32172;
	// bl 0x82429b48
	ctx.lr = 0x83148804;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7225(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7225, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148820"))) PPC_WEAK_FUNC(sub_83148820);
PPC_FUNC_IMPL(__imp__sub_83148820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32176
	ctx.r4.s64 = ctx.r11.s64 + 32176;
	// bl 0x82429b48
	ctx.lr = 0x8314883C;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7172(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7172, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148858"))) PPC_WEAK_FUNC(sub_83148858);
PPC_FUNC_IMPL(__imp__sub_83148858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32180
	ctx.r4.s64 = ctx.r11.s64 + 32180;
	// bl 0x82429b48
	ctx.lr = 0x83148874;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7176, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148890"))) PPC_WEAK_FUNC(sub_83148890);
PPC_FUNC_IMPL(__imp__sub_83148890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32184
	ctx.r4.s64 = ctx.r11.s64 + 32184;
	// bl 0x82429b48
	ctx.lr = 0x831488AC;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,7168(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7168, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831488C8"))) PPC_WEAK_FUNC(sub_831488C8);
PPC_FUNC_IMPL(__imp__sub_831488C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r11,32188
	ctx.r4.s64 = ctx.r11.s64 + 32188;
	// bl 0x82429b48
	ctx.lr = 0x831488E4;
	sub_82429B48(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// stb r3,6966(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6966, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148900"))) PPC_WEAK_FUNC(sub_83148900);
PPC_FUNC_IMPL(__imp__sub_83148900) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e40
	ctx.lr = 0x83148908;
	__savegprlr_18(ctx, base);
	// lis r10,-32080
	ctx.r10.s64 = -2102394880;
	// lis r21,-32140
	ctx.r21.s64 = -2106327040;
	// addi r10,r10,7264
	ctx.r10.s64 = ctx.r10.s64 + 7264;
	// lis r22,-32080
	ctx.r22.s64 = -2102394880;
	// lis r23,-32080
	ctx.r23.s64 = -2102394880;
	// lis r24,-32080
	ctx.r24.s64 = -2102394880;
	// lis r25,-32080
	ctx.r25.s64 = -2102394880;
	// lis r26,-32080
	ctx.r26.s64 = -2102394880;
	// stw r10,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// lis r27,-32080
	ctx.r27.s64 = -2102394880;
	// lis r28,-32080
	ctx.r28.s64 = -2102394880;
	// lis r29,-32080
	ctx.r29.s64 = -2102394880;
	// lis r30,-32080
	ctx.r30.s64 = -2102394880;
	// lis r31,-32080
	ctx.r31.s64 = -2102394880;
	// lis r3,-32080
	ctx.r3.s64 = -2102394880;
	// lis r4,-32080
	ctx.r4.s64 = -2102394880;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// lis r6,-32080
	ctx.r6.s64 = -2102394880;
	// lis r7,-32080
	ctx.r7.s64 = -2102394880;
	// lis r8,-32080
	ctx.r8.s64 = -2102394880;
	// lis r9,-32080
	ctx.r9.s64 = -2102394880;
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r21,r21,-12632
	ctx.r21.s64 = ctx.r21.s64 + -12632;
	// addi r22,r22,-776
	ctx.r22.s64 = ctx.r22.s64 + -776;
	// addi r23,r23,-944
	ctx.r23.s64 = ctx.r23.s64 + -944;
	// addi r24,r24,-1248
	ctx.r24.s64 = ctx.r24.s64 + -1248;
	// addi r25,r25,-1568
	ctx.r25.s64 = ctx.r25.s64 + -1568;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// addi r26,r26,-1800
	ctx.r26.s64 = ctx.r26.s64 + -1800;
	// stw r21,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r21.u32);
	// addi r27,r27,5136
	ctx.r27.s64 = ctx.r27.s64 + 5136;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r28,r28,11416
	ctx.r28.s64 = ctx.r28.s64 + 11416;
	// stw r22,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r22.u32);
	// addi r29,r29,-1976
	ctx.r29.s64 = ctx.r29.s64 + -1976;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r30,r30,-2152
	ctx.r30.s64 = ctx.r30.s64 + -2152;
	// stw r23,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r23.u32);
	// addi r31,r31,-2384
	ctx.r31.s64 = ctx.r31.s64 + -2384;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r3,r3,-2552
	ctx.r3.s64 = ctx.r3.s64 + -2552;
	// stw r24,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r24.u32);
	// addi r4,r4,-2720
	ctx.r4.s64 = ctx.r4.s64 + -2720;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// addi r5,r5,-2944
	ctx.r5.s64 = ctx.r5.s64 + -2944;
	// stw r25,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r25.u32);
	// addi r6,r6,-3168
	ctx.r6.s64 = ctx.r6.s64 + -3168;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r7,r7,-3448
	ctx.r7.s64 = ctx.r7.s64 + -3448;
	// stw r26,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r26.u32);
	// addi r8,r8,-3624
	ctx.r8.s64 = ctx.r8.s64 + -3624;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// addi r9,r9,-3792
	ctx.r9.s64 = ctx.r9.s64 + -3792;
	// stw r27,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r27.u32);
	// addi r11,r11,-3968
	ctx.r11.s64 = ctx.r11.s64 + -3968;
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// ld r9,-280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -280);
	// lis r18,-32080
	ctx.r18.s64 = -2102394880;
	// addi r11,r11,32320
	ctx.r11.s64 = ctx.r11.s64 + 32320;
	// lis r19,-32080
	ctx.r19.s64 = -2102394880;
	// lis r20,-32080
	ctx.r20.s64 = -2102394880;
	// lis r21,-32080
	ctx.r21.s64 = -2102394880;
	// lis r22,-32080
	ctx.r22.s64 = -2102394880;
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// lis r23,-32080
	ctx.r23.s64 = -2102394880;
	// ld r9,-200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// addi r18,r18,-4136
	ctx.r18.s64 = ctx.r18.s64 + -4136;
	// addi r19,r19,-4304
	ctx.r19.s64 = ctx.r19.s64 + -4304;
	// addi r20,r20,-4480
	ctx.r20.s64 = ctx.r20.s64 + -4480;
	// addi r21,r21,-4656
	ctx.r21.s64 = ctx.r21.s64 + -4656;
	// addi r22,r22,-4832
	ctx.r22.s64 = ctx.r22.s64 + -4832;
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// addi r23,r23,12112
	ctx.r23.s64 = ctx.r23.s64 + 12112;
	// ld r9,-264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -264);
	// lis r24,-32080
	ctx.r24.s64 = -2102394880;
	// lis r25,-32080
	ctx.r25.s64 = -2102394880;
	// lis r26,-32080
	ctx.r26.s64 = -2102394880;
	// lis r27,-32080
	ctx.r27.s64 = -2102394880;
	// lis r28,-32080
	ctx.r28.s64 = -2102394880;
	// std r9,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r9.u64);
	// lis r29,-32080
	ctx.r29.s64 = -2102394880;
	// ld r9,-136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lis r30,-32080
	ctx.r30.s64 = -2102394880;
	// lis r31,-32080
	ctx.r31.s64 = -2102394880;
	// lis r3,-32080
	ctx.r3.s64 = -2102394880;
	// lis r4,-32080
	ctx.r4.s64 = -2102394880;
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// std r9,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// lis r6,-32080
	ctx.r6.s64 = -2102394880;
	// ld r9,-248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -248);
	// lis r7,-32080
	ctx.r7.s64 = -2102394880;
	// lis r8,-32080
	ctx.r8.s64 = -2102394880;
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
	// lis r9,-32080
	ctx.r9.s64 = -2102394880;
	// addi r9,r9,-7240
	ctx.r9.s64 = ctx.r9.s64 + -7240;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// addi r24,r24,-5008
	ctx.r24.s64 = ctx.r24.s64 + -5008;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// addi r25,r25,10024
	ctx.r25.s64 = ctx.r25.s64 + 10024;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r26,r26,-5320
	ctx.r26.s64 = ctx.r26.s64 + -5320;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r27,r27,-5496
	ctx.r27.s64 = ctx.r27.s64 + -5496;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stw r9,-280(r1)
	PPC_STORE_U32(ctx.r1.u32 + -280, ctx.r9.u32);
	// addi r28,r28,-5640
	ctx.r28.s64 = ctx.r28.s64 + -5640;
	// ld r9,-144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// addi r29,r29,-5784
	ctx.r29.s64 = ctx.r29.s64 + -5784;
	// stw r24,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r24.u32);
	// addi r30,r30,-5928
	ctx.r30.s64 = ctx.r30.s64 + -5928;
	// stw r25,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r25.u32);
	// addi r31,r31,-6160
	ctx.r31.s64 = ctx.r31.s64 + -6160;
	// stw r26,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r26.u32);
	// addi r3,r3,-6392
	ctx.r3.s64 = ctx.r3.s64 + -6392;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// addi r4,r4,-6568
	ctx.r4.s64 = ctx.r4.s64 + -6568;
	// std r9,244(r11)
	PPC_STORE_U64(ctx.r11.u32 + 244, ctx.r9.u64);
	// addi r5,r5,4816
	ctx.r5.s64 = ctx.r5.s64 + 4816;
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// addi r6,r6,-6888
	ctx.r6.s64 = ctx.r6.s64 + -6888;
	// stw r28,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// addi r7,r7,-7064
	ctx.r7.s64 = ctx.r7.s64 + -7064;
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
	// addi r9,r8,4544
	ctx.r9.s64 = ctx.r8.s64 + 4544;
	// lis r19,-32080
	ctx.r19.s64 = -2102394880;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// lis r20,-32080
	ctx.r20.s64 = -2102394880;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r21,-32080
	ctx.r21.s64 = -2102394880;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// lis r22,-32080
	ctx.r22.s64 = -2102394880;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r9,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r9.u32);
	// lis r23,-32080
	ctx.r23.s64 = -2102394880;
	// lis r24,-32080
	ctx.r24.s64 = -2102394880;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// lis r25,-32080
	ctx.r25.s64 = -2102394880;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// lis r26,-32080
	ctx.r26.s64 = -2102394880;
	// stw r10,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r10.u32);
	// lis r27,-32080
	ctx.r27.s64 = -2102394880;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// lis r28,-32080
	ctx.r28.s64 = -2102394880;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// lis r29,-32080
	ctx.r29.s64 = -2102394880;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// lis r30,-32080
	ctx.r30.s64 = -2102394880;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r31,-32080
	ctx.r31.s64 = -2102394880;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r3,-32080
	ctx.r3.s64 = -2102394880;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lis r4,-32080
	ctx.r4.s64 = -2102394880;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// lis r6,-32080
	ctx.r6.s64 = -2102394880;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// lis r7,-32080
	ctx.r7.s64 = -2102394880;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lis r9,-32080
	ctx.r9.s64 = -2102394880;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r19,r19,3976
	ctx.r19.s64 = ctx.r19.s64 + 3976;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r20,r20,-7472
	ctx.r20.s64 = ctx.r20.s64 + -7472;
	// stw r10,-276(r1)
	PPC_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// addi r21,r21,-7704
	ctx.r21.s64 = ctx.r21.s64 + -7704;
	// addi r22,r22,3704
	ctx.r22.s64 = ctx.r22.s64 + 3704;
	// addi r23,r23,-7872
	ctx.r23.s64 = ctx.r23.s64 + -7872;
	// addi r24,r24,-8120
	ctx.r24.s64 = ctx.r24.s64 + -8120;
	// stw r19,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r19.u32);
	// addi r25,r25,3432
	ctx.r25.s64 = ctx.r25.s64 + 3432;
	// stw r20,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r20.u32);
	// addi r26,r26,-8416
	ctx.r26.s64 = ctx.r26.s64 + -8416;
	// stw r21,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r21.u32);
	// addi r27,r27,-8544
	ctx.r27.s64 = ctx.r27.s64 + -8544;
	// stw r22,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r22.u32);
	// addi r28,r28,-8776
	ctx.r28.s64 = ctx.r28.s64 + -8776;
	// stw r23,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r23.u32);
	// addi r29,r29,-8920
	ctx.r29.s64 = ctx.r29.s64 + -8920;
	// stw r24,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r24.u32);
	// addi r30,r30,-9096
	ctx.r30.s64 = ctx.r30.s64 + -9096;
	// stw r25,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r25.u32);
	// addi r31,r31,-9328
	ctx.r31.s64 = ctx.r31.s64 + -9328;
	// stw r26,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r26.u32);
	// addi r3,r3,-9472
	ctx.r3.s64 = ctx.r3.s64 + -9472;
	// stw r27,-288(r1)
	PPC_STORE_U32(ctx.r1.u32 + -288, ctx.r27.u32);
	// addi r4,r4,-9648
	ctx.r4.s64 = ctx.r4.s64 + -9648;
	// stw r28,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// addi r5,r5,-9816
	ctx.r5.s64 = ctx.r5.s64 + -9816;
	// stw r29,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r29.u32);
	// addi r6,r6,-9960
	ctx.r6.s64 = ctx.r6.s64 + -9960;
	// stw r30,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r30.u32);
	// addi r7,r7,2872
	ctx.r7.s64 = ctx.r7.s64 + 2872;
	// stw r31,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r31.u32);
	// addi r9,r9,-10136
	ctx.r9.s64 = ctx.r9.s64 + -10136;
	// stw r3,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r3.u32);
	// lis r8,-32080
	ctx.r8.s64 = -2102394880;
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
	// lis r20,-32080
	ctx.r20.s64 = -2102394880;
	// lis r21,-32080
	ctx.r21.s64 = -2102394880;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// lis r22,-32080
	ctx.r22.s64 = -2102394880;
	// lis r23,-32080
	ctx.r23.s64 = -2102394880;
	// lis r24,-32080
	ctx.r24.s64 = -2102394880;
	// std r9,484(r11)
	PPC_STORE_U64(ctx.r11.u32 + 484, ctx.r9.u64);
	// lis r25,-32080
	ctx.r25.s64 = -2102394880;
	// ld r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// addi r20,r20,-10488
	ctx.r20.s64 = ctx.r20.s64 + -10488;
	// addi r21,r21,-10712
	ctx.r21.s64 = ctx.r21.s64 + -10712;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// addi r22,r22,-10936
	ctx.r22.s64 = ctx.r22.s64 + -10936;
	// addi r23,r23,-11160
	ctx.r23.s64 = ctx.r23.s64 + -11160;
	// addi r24,r24,-11336
	ctx.r24.s64 = ctx.r24.s64 + -11336;
	// std r9,496(r11)
	PPC_STORE_U64(ctx.r11.u32 + 496, ctx.r9.u64);
	// addi r25,r25,-11560
	ctx.r25.s64 = ctx.r25.s64 + -11560;
	// ld r9,-176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lis r26,-32080
	ctx.r26.s64 = -2102394880;
	// lis r27,-32080
	ctx.r27.s64 = -2102394880;
	// stw r20,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r20.u32);
	// lis r28,-32080
	ctx.r28.s64 = -2102394880;
	// stw r21,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r21.u32);
	// lis r29,-32080
	ctx.r29.s64 = -2102394880;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// lis r30,-32080
	ctx.r30.s64 = -2102394880;
	// std r9,508(r11)
	PPC_STORE_U64(ctx.r11.u32 + 508, ctx.r9.u64);
	// lis r31,-32080
	ctx.r31.s64 = -2102394880;
	// ld r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// lis r3,-32080
	ctx.r3.s64 = -2102394880;
	// lis r4,-32080
	ctx.r4.s64 = -2102394880;
	// stw r22,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r22.u32);
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// lis r6,-32080
	ctx.r6.s64 = -2102394880;
	// lis r7,-32080
	ctx.r7.s64 = -2102394880;
	// std r9,520(r11)
	PPC_STORE_U64(ctx.r11.u32 + 520, ctx.r9.u64);
	// addi r26,r26,2552
	ctx.r26.s64 = ctx.r26.s64 + 2552;
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
	// addi r9,r8,-10312
	ctx.r9.s64 = ctx.r8.s64 + -10312;
	// lis r8,-32080
	ctx.r8.s64 = -2102394880;
	// stw r9,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r9.u32);
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// stw r10,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r10.u32);
	// addi r27,r27,-11784
	ctx.r27.s64 = ctx.r27.s64 + -11784;
	// stw r10,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r10.u32);
	// addi r28,r28,-11960
	ctx.r28.s64 = ctx.r28.s64 + -11960;
	// stw r10,-284(r1)
	PPC_STORE_U32(ctx.r1.u32 + -284, ctx.r10.u32);
	// addi r29,r29,-12136
	ctx.r29.s64 = ctx.r29.s64 + -12136;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// addi r30,r30,-12312
	ctx.r30.s64 = ctx.r30.s64 + -12312;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// addi r31,r31,-12488
	ctx.r31.s64 = ctx.r31.s64 + -12488;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// addi r3,r3,-12664
	ctx.r3.s64 = ctx.r3.s64 + -12664;
	// stw r10,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r10.u32);
	// addi r4,r4,-12840
	ctx.r4.s64 = ctx.r4.s64 + -12840;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// addi r5,r5,2352
	ctx.r5.s64 = ctx.r5.s64 + 2352;
	// stw r10,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r10.u32);
	// addi r6,r6,-13136
	ctx.r6.s64 = ctx.r6.s64 + -13136;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r7,r7,-13312
	ctx.r7.s64 = ctx.r7.s64 + -13312;
	// stw r10,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r10.u32);
	// addi r8,r8,-13528
	ctx.r8.s64 = ctx.r8.s64 + -13528;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// addi r9,r9,29776
	ctx.r9.s64 = ctx.r9.s64 + 29776;
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
	// b 0x82e28e90
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831490A8"))) PPC_WEAK_FUNC(sub_831490A8);
PPC_FUNC_IMPL(__imp__sub_831490A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r11,r11,-16144
	ctx.r11.s64 = ctx.r11.s64 + -16144;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83157d34
	ctx.lr = 0x831490C4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20272
	ctx.r3.s64 = ctx.r11.s64 + 20272;
	// bl 0x82e29708
	ctx.lr = 0x831490D0;
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

__attribute__((alias("__imp__sub_831490E0"))) PPC_WEAK_FUNC(sub_831490E0);
PPC_FUNC_IMPL(__imp__sub_831490E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r11,r11,-16112
	ctx.r11.s64 = ctx.r11.s64 + -16112;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83157d34
	ctx.lr = 0x831490FC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20296
	ctx.r3.s64 = ctx.r11.s64 + 20296;
	// bl 0x82e29708
	ctx.lr = 0x83149108;
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

__attribute__((alias("__imp__sub_83149118"))) PPC_WEAK_FUNC(sub_83149118);
PPC_FUNC_IMPL(__imp__sub_83149118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,31568
	ctx.r3.s64 = ctx.r11.s64 + 31568;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82e29500
	sub_82E29500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83149130"))) PPC_WEAK_FUNC(sub_83149130);
PPC_FUNC_IMPL(__imp__sub_83149130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r11,r11,7184
	ctx.r11.s64 = ctx.r11.s64 + 7184;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83157d34
	ctx.lr = 0x8314914C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20320
	ctx.r3.s64 = ctx.r11.s64 + 20320;
	// bl 0x82e29708
	ctx.lr = 0x83149158;
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

__attribute__((alias("__imp__sub_83149168"))) PPC_WEAK_FUNC(sub_83149168);
PPC_FUNC_IMPL(__imp__sub_83149168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20344
	ctx.r3.s64 = ctx.r11.s64 + 20344;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83149178"))) PPC_WEAK_FUNC(sub_83149178);
PPC_FUNC_IMPL(__imp__sub_83149178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20352
	ctx.r3.s64 = ctx.r11.s64 + 20352;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83149188"))) PPC_WEAK_FUNC(sub_83149188);
PPC_FUNC_IMPL(__imp__sub_83149188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20376
	ctx.r3.s64 = ctx.r11.s64 + 20376;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83149198"))) PPC_WEAK_FUNC(sub_83149198);
PPC_FUNC_IMPL(__imp__sub_83149198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20592
	ctx.r3.s64 = ctx.r11.s64 + 20592;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831491A8"))) PPC_WEAK_FUNC(sub_831491A8);
PPC_FUNC_IMPL(__imp__sub_831491A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20696
	ctx.r3.s64 = ctx.r11.s64 + 20696;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831491B8"))) PPC_WEAK_FUNC(sub_831491B8);
PPC_FUNC_IMPL(__imp__sub_831491B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20704
	ctx.r3.s64 = ctx.r11.s64 + 20704;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831491C8"))) PPC_WEAK_FUNC(sub_831491C8);
PPC_FUNC_IMPL(__imp__sub_831491C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20712
	ctx.r3.s64 = ctx.r11.s64 + 20712;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831491D8"))) PPC_WEAK_FUNC(sub_831491D8);
PPC_FUNC_IMPL(__imp__sub_831491D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20888
	ctx.r3.s64 = ctx.r11.s64 + 20888;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831491E8"))) PPC_WEAK_FUNC(sub_831491E8);
PPC_FUNC_IMPL(__imp__sub_831491E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,22632
	ctx.r3.s64 = ctx.r11.s64 + 22632;
	// bl 0x82e04108
	ctx.lr = 0x83149204;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,20968
	ctx.r3.s64 = ctx.r11.s64 + 20968;
	// bl 0x82e29708
	ctx.lr = 0x83149210;
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

__attribute__((alias("__imp__sub_83149220"))) PPC_WEAK_FUNC(sub_83149220);
PPC_FUNC_IMPL(__imp__sub_83149220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,22672
	ctx.r3.s64 = ctx.r11.s64 + 22672;
	// bl 0x82e04108
	ctx.lr = 0x8314923C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,21048
	ctx.r3.s64 = ctx.r11.s64 + 21048;
	// bl 0x82e29708
	ctx.lr = 0x83149248;
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

__attribute__((alias("__imp__sub_83149258"))) PPC_WEAK_FUNC(sub_83149258);
PPC_FUNC_IMPL(__imp__sub_83149258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,22964
	ctx.r3.s64 = ctx.r11.s64 + 22964;
	// bl 0x82e04108
	ctx.lr = 0x83149274;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,21128
	ctx.r3.s64 = ctx.r11.s64 + 21128;
	// bl 0x82e29708
	ctx.lr = 0x83149280;
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

__attribute__((alias("__imp__sub_83149290"))) PPC_WEAK_FUNC(sub_83149290);
PPC_FUNC_IMPL(__imp__sub_83149290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x82e04108
	ctx.lr = 0x831492AC;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,21208
	ctx.r3.s64 = ctx.r11.s64 + 21208;
	// bl 0x82e29708
	ctx.lr = 0x831492B8;
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

__attribute__((alias("__imp__sub_831492C8"))) PPC_WEAK_FUNC(sub_831492C8);
PPC_FUNC_IMPL(__imp__sub_831492C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23196
	ctx.r3.s64 = ctx.r11.s64 + 23196;
	// bl 0x82e04108
	ctx.lr = 0x831492E4;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,21288
	ctx.r3.s64 = ctx.r11.s64 + 21288;
	// bl 0x82e29708
	ctx.lr = 0x831492F0;
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

__attribute__((alias("__imp__sub_83149300"))) PPC_WEAK_FUNC(sub_83149300);
PPC_FUNC_IMPL(__imp__sub_83149300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23204
	ctx.r3.s64 = ctx.r11.s64 + 23204;
	// bl 0x82e04108
	ctx.lr = 0x8314931C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,21368
	ctx.r3.s64 = ctx.r11.s64 + 21368;
	// bl 0x82e29708
	ctx.lr = 0x83149328;
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

__attribute__((alias("__imp__sub_83149338"))) PPC_WEAK_FUNC(sub_83149338);
PPC_FUNC_IMPL(__imp__sub_83149338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23324
	ctx.r3.s64 = ctx.r11.s64 + 23324;
	// bl 0x82e04108
	ctx.lr = 0x83149354;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,21448
	ctx.r3.s64 = ctx.r11.s64 + 21448;
	// bl 0x82e29708
	ctx.lr = 0x83149360;
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

__attribute__((alias("__imp__sub_83149370"))) PPC_WEAK_FUNC(sub_83149370);
PPC_FUNC_IMPL(__imp__sub_83149370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23328
	ctx.r3.s64 = ctx.r11.s64 + 23328;
	// bl 0x82e04108
	ctx.lr = 0x8314938C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,21528
	ctx.r3.s64 = ctx.r11.s64 + 21528;
	// bl 0x82e29708
	ctx.lr = 0x83149398;
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

__attribute__((alias("__imp__sub_831493A8"))) PPC_WEAK_FUNC(sub_831493A8);
PPC_FUNC_IMPL(__imp__sub_831493A8) {
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
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r31,r11,-25276
	ctx.r31.s64 = ctx.r11.s64 + -25276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e048c0
	ctx.lr = 0x831493C8;
	sub_82E048C0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r11,r11,-21540
	ctx.r11.s64 = ctx.r11.s64 + -21540;
	// addi r3,r10,21608
	ctx.r3.s64 = ctx.r10.s64 + 21608;
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
	// bl 0x82e29708
	ctx.lr = 0x83149400;
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

__attribute__((alias("__imp__sub_83149418"))) PPC_WEAK_FUNC(sub_83149418);
PPC_FUNC_IMPL(__imp__sub_83149418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,24432
	ctx.r3.s64 = ctx.r11.s64 + 24432;
	// bl 0x82e04108
	ctx.lr = 0x83149434;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,21648
	ctx.r3.s64 = ctx.r11.s64 + 21648;
	// bl 0x82e29708
	ctx.lr = 0x83149440;
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

__attribute__((alias("__imp__sub_83149450"))) PPC_WEAK_FUNC(sub_83149450);
PPC_FUNC_IMPL(__imp__sub_83149450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,24700
	ctx.r3.s64 = ctx.r11.s64 + 24700;
	// bl 0x82e04108
	ctx.lr = 0x8314946C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,21744
	ctx.r3.s64 = ctx.r11.s64 + 21744;
	// bl 0x82e29708
	ctx.lr = 0x83149478;
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

__attribute__((alias("__imp__sub_83149488"))) PPC_WEAK_FUNC(sub_83149488);
PPC_FUNC_IMPL(__imp__sub_83149488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25092
	ctx.r3.s64 = ctx.r11.s64 + 25092;
	// bl 0x82e04108
	ctx.lr = 0x831494A4;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// bl 0x82e29708
	ctx.lr = 0x831494B0;
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

__attribute__((alias("__imp__sub_831494C0"))) PPC_WEAK_FUNC(sub_831494C0);
PPC_FUNC_IMPL(__imp__sub_831494C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25096
	ctx.r3.s64 = ctx.r11.s64 + 25096;
	// bl 0x82e04108
	ctx.lr = 0x831494DC;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,21904
	ctx.r3.s64 = ctx.r11.s64 + 21904;
	// bl 0x82e29708
	ctx.lr = 0x831494E8;
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

__attribute__((alias("__imp__sub_831494F8"))) PPC_WEAK_FUNC(sub_831494F8);
PPC_FUNC_IMPL(__imp__sub_831494F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25128
	ctx.r3.s64 = ctx.r11.s64 + 25128;
	// bl 0x82e04108
	ctx.lr = 0x83149514;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,21984
	ctx.r3.s64 = ctx.r11.s64 + 21984;
	// bl 0x82e29708
	ctx.lr = 0x83149520;
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

__attribute__((alias("__imp__sub_83149530"))) PPC_WEAK_FUNC(sub_83149530);
PPC_FUNC_IMPL(__imp__sub_83149530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25132
	ctx.r3.s64 = ctx.r11.s64 + 25132;
	// bl 0x82e04108
	ctx.lr = 0x8314954C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,22064
	ctx.r3.s64 = ctx.r11.s64 + 22064;
	// bl 0x82e29708
	ctx.lr = 0x83149558;
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

__attribute__((alias("__imp__sub_83149568"))) PPC_WEAK_FUNC(sub_83149568);
PPC_FUNC_IMPL(__imp__sub_83149568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25364
	ctx.r3.s64 = ctx.r11.s64 + 25364;
	// bl 0x82e04108
	ctx.lr = 0x83149584;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,22144
	ctx.r3.s64 = ctx.r11.s64 + 22144;
	// bl 0x82e29708
	ctx.lr = 0x83149590;
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

__attribute__((alias("__imp__sub_831495A0"))) PPC_WEAK_FUNC(sub_831495A0);
PPC_FUNC_IMPL(__imp__sub_831495A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25436
	ctx.r3.s64 = ctx.r11.s64 + 25436;
	// bl 0x82e04108
	ctx.lr = 0x831495BC;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,22224
	ctx.r3.s64 = ctx.r11.s64 + 22224;
	// bl 0x82e29708
	ctx.lr = 0x831495C8;
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

__attribute__((alias("__imp__sub_831495D8"))) PPC_WEAK_FUNC(sub_831495D8);
PPC_FUNC_IMPL(__imp__sub_831495D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25476
	ctx.r3.s64 = ctx.r11.s64 + 25476;
	// bl 0x82e04108
	ctx.lr = 0x831495F4;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,22304
	ctx.r3.s64 = ctx.r11.s64 + 22304;
	// bl 0x82e29708
	ctx.lr = 0x83149600;
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

__attribute__((alias("__imp__sub_83149610"))) PPC_WEAK_FUNC(sub_83149610);
PPC_FUNC_IMPL(__imp__sub_83149610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25480
	ctx.r3.s64 = ctx.r11.s64 + 25480;
	// bl 0x82e04108
	ctx.lr = 0x8314962C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,22384
	ctx.r3.s64 = ctx.r11.s64 + 22384;
	// bl 0x82e29708
	ctx.lr = 0x83149638;
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

__attribute__((alias("__imp__sub_83149648"))) PPC_WEAK_FUNC(sub_83149648);
PPC_FUNC_IMPL(__imp__sub_83149648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25520
	ctx.r3.s64 = ctx.r11.s64 + 25520;
	// bl 0x82e04108
	ctx.lr = 0x83149664;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,22464
	ctx.r3.s64 = ctx.r11.s64 + 22464;
	// bl 0x82e29708
	ctx.lr = 0x83149670;
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

__attribute__((alias("__imp__sub_83149680"))) PPC_WEAK_FUNC(sub_83149680);
PPC_FUNC_IMPL(__imp__sub_83149680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25804
	ctx.r3.s64 = ctx.r11.s64 + 25804;
	// bl 0x82e04108
	ctx.lr = 0x8314969C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,22544
	ctx.r3.s64 = ctx.r11.s64 + 22544;
	// bl 0x82e29708
	ctx.lr = 0x831496A8;
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

__attribute__((alias("__imp__sub_831496B8"))) PPC_WEAK_FUNC(sub_831496B8);
PPC_FUNC_IMPL(__imp__sub_831496B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25844
	ctx.r3.s64 = ctx.r11.s64 + 25844;
	// bl 0x82e04108
	ctx.lr = 0x831496D4;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,22624
	ctx.r3.s64 = ctx.r11.s64 + 22624;
	// bl 0x82e29708
	ctx.lr = 0x831496E0;
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

__attribute__((alias("__imp__sub_831496F0"))) PPC_WEAK_FUNC(sub_831496F0);
PPC_FUNC_IMPL(__imp__sub_831496F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,25848
	ctx.r3.s64 = ctx.r11.s64 + 25848;
	// bl 0x82e04108
	ctx.lr = 0x8314970C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,22704
	ctx.r3.s64 = ctx.r11.s64 + 22704;
	// bl 0x82e29708
	ctx.lr = 0x83149718;
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

__attribute__((alias("__imp__sub_83149728"))) PPC_WEAK_FUNC(sub_83149728);
PPC_FUNC_IMPL(__imp__sub_83149728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26056
	ctx.r3.s64 = ctx.r11.s64 + 26056;
	// bl 0x82e04108
	ctx.lr = 0x83149744;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,22784
	ctx.r3.s64 = ctx.r11.s64 + 22784;
	// bl 0x82e29708
	ctx.lr = 0x83149750;
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

__attribute__((alias("__imp__sub_83149760"))) PPC_WEAK_FUNC(sub_83149760);
PPC_FUNC_IMPL(__imp__sub_83149760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26096
	ctx.r3.s64 = ctx.r11.s64 + 26096;
	// bl 0x82e04108
	ctx.lr = 0x8314977C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,22864
	ctx.r3.s64 = ctx.r11.s64 + 22864;
	// bl 0x82e29708
	ctx.lr = 0x83149788;
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

__attribute__((alias("__imp__sub_83149798"))) PPC_WEAK_FUNC(sub_83149798);
PPC_FUNC_IMPL(__imp__sub_83149798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26172
	ctx.r3.s64 = ctx.r11.s64 + 26172;
	// bl 0x82e04108
	ctx.lr = 0x831497B4;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,22944
	ctx.r3.s64 = ctx.r11.s64 + 22944;
	// bl 0x82e29708
	ctx.lr = 0x831497C0;
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

__attribute__((alias("__imp__sub_831497D0"))) PPC_WEAK_FUNC(sub_831497D0);
PPC_FUNC_IMPL(__imp__sub_831497D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26176
	ctx.r3.s64 = ctx.r11.s64 + 26176;
	// bl 0x82e04108
	ctx.lr = 0x831497EC;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,23024
	ctx.r3.s64 = ctx.r11.s64 + 23024;
	// bl 0x82e29708
	ctx.lr = 0x831497F8;
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

__attribute__((alias("__imp__sub_83149808"))) PPC_WEAK_FUNC(sub_83149808);
PPC_FUNC_IMPL(__imp__sub_83149808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26252
	ctx.r3.s64 = ctx.r11.s64 + 26252;
	// bl 0x82e04108
	ctx.lr = 0x83149824;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,23104
	ctx.r3.s64 = ctx.r11.s64 + 23104;
	// bl 0x82e29708
	ctx.lr = 0x83149830;
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

__attribute__((alias("__imp__sub_83149840"))) PPC_WEAK_FUNC(sub_83149840);
PPC_FUNC_IMPL(__imp__sub_83149840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26420
	ctx.r3.s64 = ctx.r11.s64 + 26420;
	// bl 0x82e04108
	ctx.lr = 0x8314985C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,23184
	ctx.r3.s64 = ctx.r11.s64 + 23184;
	// bl 0x82e29708
	ctx.lr = 0x83149868;
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

__attribute__((alias("__imp__sub_83149878"))) PPC_WEAK_FUNC(sub_83149878);
PPC_FUNC_IMPL(__imp__sub_83149878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26612
	ctx.r3.s64 = ctx.r11.s64 + 26612;
	// bl 0x82e04108
	ctx.lr = 0x83149894;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,23264
	ctx.r3.s64 = ctx.r11.s64 + 23264;
	// bl 0x82e29708
	ctx.lr = 0x831498A0;
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

__attribute__((alias("__imp__sub_831498B0"))) PPC_WEAK_FUNC(sub_831498B0);
PPC_FUNC_IMPL(__imp__sub_831498B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26812
	ctx.r3.s64 = ctx.r11.s64 + 26812;
	// bl 0x82e04108
	ctx.lr = 0x831498CC;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,23344
	ctx.r3.s64 = ctx.r11.s64 + 23344;
	// bl 0x82e29708
	ctx.lr = 0x831498D8;
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

__attribute__((alias("__imp__sub_831498E8"))) PPC_WEAK_FUNC(sub_831498E8);
PPC_FUNC_IMPL(__imp__sub_831498E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,26816
	ctx.r3.s64 = ctx.r11.s64 + 26816;
	// bl 0x82e04108
	ctx.lr = 0x83149904;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,23424
	ctx.r3.s64 = ctx.r11.s64 + 23424;
	// bl 0x82e29708
	ctx.lr = 0x83149910;
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

__attribute__((alias("__imp__sub_83149920"))) PPC_WEAK_FUNC(sub_83149920);
PPC_FUNC_IMPL(__imp__sub_83149920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27340
	ctx.r3.s64 = ctx.r11.s64 + 27340;
	// bl 0x82e04108
	ctx.lr = 0x8314993C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x82e29708
	ctx.lr = 0x83149948;
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

__attribute__((alias("__imp__sub_83149958"))) PPC_WEAK_FUNC(sub_83149958);
PPC_FUNC_IMPL(__imp__sub_83149958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27412
	ctx.r3.s64 = ctx.r11.s64 + 27412;
	// bl 0x82e04108
	ctx.lr = 0x83149974;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,23584
	ctx.r3.s64 = ctx.r11.s64 + 23584;
	// bl 0x82e29708
	ctx.lr = 0x83149980;
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

__attribute__((alias("__imp__sub_83149990"))) PPC_WEAK_FUNC(sub_83149990);
PPC_FUNC_IMPL(__imp__sub_83149990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27452
	ctx.r3.s64 = ctx.r11.s64 + 27452;
	// bl 0x82e04108
	ctx.lr = 0x831499AC;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,23664
	ctx.r3.s64 = ctx.r11.s64 + 23664;
	// bl 0x82e29708
	ctx.lr = 0x831499B8;
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

__attribute__((alias("__imp__sub_831499C8"))) PPC_WEAK_FUNC(sub_831499C8);
PPC_FUNC_IMPL(__imp__sub_831499C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27460
	ctx.r3.s64 = ctx.r11.s64 + 27460;
	// bl 0x82e04108
	ctx.lr = 0x831499E4;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,23744
	ctx.r3.s64 = ctx.r11.s64 + 23744;
	// bl 0x82e29708
	ctx.lr = 0x831499F0;
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

__attribute__((alias("__imp__sub_83149A00"))) PPC_WEAK_FUNC(sub_83149A00);
PPC_FUNC_IMPL(__imp__sub_83149A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27500
	ctx.r3.s64 = ctx.r11.s64 + 27500;
	// bl 0x82e04108
	ctx.lr = 0x83149A1C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,23824
	ctx.r3.s64 = ctx.r11.s64 + 23824;
	// bl 0x82e29708
	ctx.lr = 0x83149A28;
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

__attribute__((alias("__imp__sub_83149A38"))) PPC_WEAK_FUNC(sub_83149A38);
PPC_FUNC_IMPL(__imp__sub_83149A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27540
	ctx.r3.s64 = ctx.r11.s64 + 27540;
	// bl 0x82e04108
	ctx.lr = 0x83149A54;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,23904
	ctx.r3.s64 = ctx.r11.s64 + 23904;
	// bl 0x82e29708
	ctx.lr = 0x83149A60;
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

__attribute__((alias("__imp__sub_83149A70"))) PPC_WEAK_FUNC(sub_83149A70);
PPC_FUNC_IMPL(__imp__sub_83149A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27580
	ctx.r3.s64 = ctx.r11.s64 + 27580;
	// bl 0x82e04108
	ctx.lr = 0x83149A8C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,23984
	ctx.r3.s64 = ctx.r11.s64 + 23984;
	// bl 0x82e29708
	ctx.lr = 0x83149A98;
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

__attribute__((alias("__imp__sub_83149AA8"))) PPC_WEAK_FUNC(sub_83149AA8);
PPC_FUNC_IMPL(__imp__sub_83149AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27620
	ctx.r3.s64 = ctx.r11.s64 + 27620;
	// bl 0x82e04108
	ctx.lr = 0x83149AC4;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,24064
	ctx.r3.s64 = ctx.r11.s64 + 24064;
	// bl 0x82e29708
	ctx.lr = 0x83149AD0;
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

__attribute__((alias("__imp__sub_83149AE0"))) PPC_WEAK_FUNC(sub_83149AE0);
PPC_FUNC_IMPL(__imp__sub_83149AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27628
	ctx.r3.s64 = ctx.r11.s64 + 27628;
	// bl 0x82e04108
	ctx.lr = 0x83149AFC;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,24144
	ctx.r3.s64 = ctx.r11.s64 + 24144;
	// bl 0x82e29708
	ctx.lr = 0x83149B08;
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

__attribute__((alias("__imp__sub_83149B18"))) PPC_WEAK_FUNC(sub_83149B18);
PPC_FUNC_IMPL(__imp__sub_83149B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27636
	ctx.r3.s64 = ctx.r11.s64 + 27636;
	// bl 0x82e04108
	ctx.lr = 0x83149B34;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,24224
	ctx.r3.s64 = ctx.r11.s64 + 24224;
	// bl 0x82e29708
	ctx.lr = 0x83149B40;
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

__attribute__((alias("__imp__sub_83149B50"))) PPC_WEAK_FUNC(sub_83149B50);
PPC_FUNC_IMPL(__imp__sub_83149B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27644
	ctx.r3.s64 = ctx.r11.s64 + 27644;
	// bl 0x82e04108
	ctx.lr = 0x83149B6C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,24304
	ctx.r3.s64 = ctx.r11.s64 + 24304;
	// bl 0x82e29708
	ctx.lr = 0x83149B78;
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

__attribute__((alias("__imp__sub_83149B88"))) PPC_WEAK_FUNC(sub_83149B88);
PPC_FUNC_IMPL(__imp__sub_83149B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27652
	ctx.r3.s64 = ctx.r11.s64 + 27652;
	// bl 0x82e04108
	ctx.lr = 0x83149BA4;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,24384
	ctx.r3.s64 = ctx.r11.s64 + 24384;
	// bl 0x82e29708
	ctx.lr = 0x83149BB0;
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

__attribute__((alias("__imp__sub_83149BC0"))) PPC_WEAK_FUNC(sub_83149BC0);
PPC_FUNC_IMPL(__imp__sub_83149BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27660
	ctx.r3.s64 = ctx.r11.s64 + 27660;
	// bl 0x82e04108
	ctx.lr = 0x83149BDC;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,24464
	ctx.r3.s64 = ctx.r11.s64 + 24464;
	// bl 0x82e29708
	ctx.lr = 0x83149BE8;
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

__attribute__((alias("__imp__sub_83149BF8"))) PPC_WEAK_FUNC(sub_83149BF8);
PPC_FUNC_IMPL(__imp__sub_83149BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27740
	ctx.r3.s64 = ctx.r11.s64 + 27740;
	// bl 0x82e04108
	ctx.lr = 0x83149C14;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,24560
	ctx.r3.s64 = ctx.r11.s64 + 24560;
	// bl 0x82e29708
	ctx.lr = 0x83149C20;
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

__attribute__((alias("__imp__sub_83149C30"))) PPC_WEAK_FUNC(sub_83149C30);
PPC_FUNC_IMPL(__imp__sub_83149C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27784
	ctx.r3.s64 = ctx.r11.s64 + 27784;
	// bl 0x82e04108
	ctx.lr = 0x83149C4C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,24640
	ctx.r3.s64 = ctx.r11.s64 + 24640;
	// bl 0x82e29708
	ctx.lr = 0x83149C58;
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

__attribute__((alias("__imp__sub_83149C68"))) PPC_WEAK_FUNC(sub_83149C68);
PPC_FUNC_IMPL(__imp__sub_83149C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-25048
	ctx.r3.s64 = ctx.r11.s64 + -25048;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbfd50
	ctx.lr = 0x83149C88;
	sub_82DBFD50(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// bl 0x82e29708
	ctx.lr = 0x83149C94;
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

__attribute__((alias("__imp__sub_83149CA8"))) PPC_WEAK_FUNC(sub_83149CA8);
PPC_FUNC_IMPL(__imp__sub_83149CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27928
	ctx.r3.s64 = ctx.r11.s64 + 27928;
	// bl 0x82e04108
	ctx.lr = 0x83149CC4;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,24864
	ctx.r3.s64 = ctx.r11.s64 + 24864;
	// bl 0x82e29708
	ctx.lr = 0x83149CD0;
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

__attribute__((alias("__imp__sub_83149CE0"))) PPC_WEAK_FUNC(sub_83149CE0);
PPC_FUNC_IMPL(__imp__sub_83149CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,27948
	ctx.r3.s64 = ctx.r11.s64 + 27948;
	// bl 0x82e04108
	ctx.lr = 0x83149CFC;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,24944
	ctx.r3.s64 = ctx.r11.s64 + 24944;
	// bl 0x82e29708
	ctx.lr = 0x83149D08;
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

__attribute__((alias("__imp__sub_83149D18"))) PPC_WEAK_FUNC(sub_83149D18);
PPC_FUNC_IMPL(__imp__sub_83149D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28144
	ctx.r3.s64 = ctx.r11.s64 + 28144;
	// bl 0x82e04108
	ctx.lr = 0x83149D34;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,25024
	ctx.r3.s64 = ctx.r11.s64 + 25024;
	// bl 0x82e29708
	ctx.lr = 0x83149D40;
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

__attribute__((alias("__imp__sub_83149D50"))) PPC_WEAK_FUNC(sub_83149D50);
PPC_FUNC_IMPL(__imp__sub_83149D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28184
	ctx.r3.s64 = ctx.r11.s64 + 28184;
	// bl 0x82e04108
	ctx.lr = 0x83149D6C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,25104
	ctx.r3.s64 = ctx.r11.s64 + 25104;
	// bl 0x82e29708
	ctx.lr = 0x83149D78;
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

__attribute__((alias("__imp__sub_83149D88"))) PPC_WEAK_FUNC(sub_83149D88);
PPC_FUNC_IMPL(__imp__sub_83149D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28192
	ctx.r3.s64 = ctx.r11.s64 + 28192;
	// bl 0x82e04108
	ctx.lr = 0x83149DA4;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,25184
	ctx.r3.s64 = ctx.r11.s64 + 25184;
	// bl 0x82e29708
	ctx.lr = 0x83149DB0;
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

__attribute__((alias("__imp__sub_83149DC0"))) PPC_WEAK_FUNC(sub_83149DC0);
PPC_FUNC_IMPL(__imp__sub_83149DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28272
	ctx.r3.s64 = ctx.r11.s64 + 28272;
	// bl 0x82e04108
	ctx.lr = 0x83149DDC;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,25264
	ctx.r3.s64 = ctx.r11.s64 + 25264;
	// bl 0x82e29708
	ctx.lr = 0x83149DE8;
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

__attribute__((alias("__imp__sub_83149DF8"))) PPC_WEAK_FUNC(sub_83149DF8);
PPC_FUNC_IMPL(__imp__sub_83149DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28452
	ctx.r3.s64 = ctx.r11.s64 + 28452;
	// bl 0x82e04108
	ctx.lr = 0x83149E14;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,25344
	ctx.r3.s64 = ctx.r11.s64 + 25344;
	// bl 0x82e29708
	ctx.lr = 0x83149E20;
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

__attribute__((alias("__imp__sub_83149E30"))) PPC_WEAK_FUNC(sub_83149E30);
PPC_FUNC_IMPL(__imp__sub_83149E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28460
	ctx.r3.s64 = ctx.r11.s64 + 28460;
	// bl 0x82e04108
	ctx.lr = 0x83149E4C;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,25424
	ctx.r3.s64 = ctx.r11.s64 + 25424;
	// bl 0x82e29708
	ctx.lr = 0x83149E58;
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

__attribute__((alias("__imp__sub_83149E68"))) PPC_WEAK_FUNC(sub_83149E68);
PPC_FUNC_IMPL(__imp__sub_83149E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28464
	ctx.r3.s64 = ctx.r11.s64 + 28464;
	// bl 0x82e04108
	ctx.lr = 0x83149E84;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,25504
	ctx.r3.s64 = ctx.r11.s64 + 25504;
	// bl 0x82e29708
	ctx.lr = 0x83149E90;
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

__attribute__((alias("__imp__sub_83149EA0"))) PPC_WEAK_FUNC(sub_83149EA0);
PPC_FUNC_IMPL(__imp__sub_83149EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,28504
	ctx.r3.s64 = ctx.r11.s64 + 28504;
	// bl 0x82e04108
	ctx.lr = 0x83149EBC;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,25584
	ctx.r3.s64 = ctx.r11.s64 + 25584;
	// bl 0x82e29708
	ctx.lr = 0x83149EC8;
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

