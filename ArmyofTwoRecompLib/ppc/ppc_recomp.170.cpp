#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82CAEBF0"))) PPC_WEAK_FUNC(sub_82CAEBF0);
PPC_FUNC_IMPL(__imp__sub_82CAEBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,77
	ctx.r6.s64 = 77;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,85
	ctx.r4.s64 = 85;
	// li r3,83
	ctx.r3.s64 = 83;
	// bl 0x82ca0838
	ctx.lr = 0x82CAEC2C;
	sub_82CA0838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82caec40
	if (!ctx.cr6.eq) goto loc_82CAEC40;
loc_82CAEC38:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82caecf4
	goto loc_82CAECF4;
loc_82CAEC40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0a78
	ctx.lr = 0x82CAEC4C;
	sub_82CB0A78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caec38
	if (ctx.cr6.eq) goto loc_82CAEC38;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82c72120
	ctx.lr = 0x82CAEC6C;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,55
	ctx.r5.s64 = 55;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAEC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// beq cr6,0x82caec38
	if (ctx.cr6.eq) goto loc_82CAEC38;
	// bl 0x82c72120
	ctx.lr = 0x82CAEC94;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,55
	ctx.r5.s64 = 55;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAECAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// beq cr6,0x82caec38
	if (ctx.cr6.eq) goto loc_82CAEC38;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAECD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAECF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CAECF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAED10"))) PPC_WEAK_FUNC(sub_82CAED10);
PPC_FUNC_IMPL(__imp__sub_82CAED10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82caeb58
	ctx.lr = 0x82CAED30;
	sub_82CAEB58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caed54
	if (ctx.cr6.eq) goto loc_82CAED54;
	// bl 0x82c72120
	ctx.lr = 0x82CAED40;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAED54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CAED54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAED70"))) PPC_WEAK_FUNC(sub_82CAED70);
PPC_FUNC_IMPL(__imp__sub_82CAED70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r11,-8572
	ctx.r10.s64 = ctx.r11.s64 + -8572;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAEDD8"))) PPC_WEAK_FUNC(sub_82CAEDD8);
PPC_FUNC_IMPL(__imp__sub_82CAEDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82CAEDE0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82e28f18
	ctx.lr = 0x82CAEDE8;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// extsw r8,r6
	ctx.r8.s64 = ctx.r6.s32;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,-32640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32640);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82e27f28
	ctx.lr = 0x82CAEE6C;
	sub_82E27F28(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82e27f28
	ctx.lr = 0x82CAEE78;
	sub_82E27F28(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f30,f0,f28
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bl 0x82e27e58
	ctx.lr = 0x82CAEE8C;
	sub_82E27E58(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// bl 0x82e27e58
	ctx.lr = 0x82CAEE9C;
	sub_82E27E58(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// ble cr6,0x82caeeb8
	if (!ctx.cr6.gt) goto loc_82CAEEB8;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
loc_82CAEEB8:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82caeecc
	if (!ctx.cr6.gt) goto loc_82CAEECC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
loc_82CAEECC:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82caeee0
	if (!ctx.cr6.gt) goto loc_82CAEEE0;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
loc_82CAEEE0:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82caeef4
	if (!ctx.cr6.gt) goto loc_82CAEEF4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
loc_82CAEEF4:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82caef0c
	if (!ctx.cr6.eq) goto loc_82CAEF0C;
	// stfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82caef90
	goto loc_82CAEF90;
loc_82CAEF0C:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x82caef24
	if (!ctx.cr6.eq) goto loc_82CAEF24;
	// stfs f30,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x82caef90
	goto loc_82CAEF90;
loc_82CAEF24:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x82caef3c
	if (!ctx.cr6.eq) goto loc_82CAEF3C;
	// stfs f30,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82caef90
	goto loc_82CAEF90;
loc_82CAEF3C:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x82caef54
	if (!ctx.cr6.eq) goto loc_82CAEF54;
	// stfs f30,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x82caef90
	goto loc_82CAEF90;
loc_82CAEF54:
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// bne cr6,0x82caef6c
	if (!ctx.cr6.eq) goto loc_82CAEF6C;
	// stfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x82caef90
	goto loc_82CAEF90;
loc_82CAEF6C:
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// bne cr6,0x82caef84
	if (!ctx.cr6.eq) goto loc_82CAEF84;
	// stfs f30,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x82caef90
	goto loc_82CAEF90;
loc_82CAEF84:
	// stfs f30,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f30,0(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f30,0(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82CAEF90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r27,31,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x80000000;
	// rlwinm r9,r27,30,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x80000000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r27,29,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x80000000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82e28f64
	ctx.lr = 0x82CAEFCC;
	__restfpr_28(ctx, base);
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAEFD0"))) PPC_WEAK_FUNC(sub_82CAEFD0);
PPC_FUNC_IMPL(__imp__sub_82CAEFD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82caeff4
	if (ctx.cr6.eq) goto loc_82CAEFF4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82CAEFF4:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CAF018"))) PPC_WEAK_FUNC(sub_82CAF018);
PPC_FUNC_IMPL(__imp__sub_82CAF018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82CAF020;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf0b8
	if (ctx.cr6.eq) goto loc_82CAF0B8;
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82caf16c
	if (ctx.cr6.eq) goto loc_82CAF16C;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-13892(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13892);
	ctx.f11.f64 = double(temp.f32);
loc_82CAF060:
	// lfs f10,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bgt cr6,0x82caf0a8
	if (ctx.cr6.gt) goto loc_82CAF0A8;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82caf060
	if (!ctx.cr6.eq) goto loc_82CAF060;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
loc_82CAF0A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
loc_82CAF0B8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82caf16c
	if (!ctx.cr6.gt) goto loc_82CAF16C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
loc_82CAF0D8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82c6fc60
	ctx.lr = 0x82CAF124;
	sub_82C6FC60(ctx, base);
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f10,f11,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82caf0a8
	if (ctx.cr6.gt) goto loc_82CAF0A8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82caf0d8
	if (ctx.cr6.lt) goto loc_82CAF0D8;
loc_82CAF16C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAF180"))) PPC_WEAK_FUNC(sub_82CAF180);
PPC_FUNC_IMPL(__imp__sub_82CAF180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CAF188;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82e28f14
	ctx.lr = 0x82CAF190;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf33c
	if (ctx.cr6.eq) goto loc_82CAF33C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf33c
	if (ctx.cr6.eq) goto loc_82CAF33C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82caf2f8
	if (!ctx.cr6.gt) goto loc_82CAF2F8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-19000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19000);
	ctx.f31.f64 = double(temp.f32);
loc_82CAF1F4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ca5d20
	ctx.lr = 0x82CAF220;
	sub_82CA5D20(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf2b0
	if (ctx.cr6.eq) goto loc_82CAF2B0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f29,f13,f31
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f28,f12,f31
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_82CAF2B0:
	// fmuls f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f1.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f29,f1
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f1.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f28,f1
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// fadds f27,f1,f27
	ctx.f27.f64 = double(float(ctx.f1.f64 + ctx.f27.f64));
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82caf1f4
	if (ctx.cr6.lt) goto loc_82CAF1F4;
loc_82CAF2F8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f27.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82e28f60
	ctx.lr = 0x82CAF338;
	__restfpr_27(ctx, base);
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CAF33C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82e28f60
	ctx.lr = 0x82CAF34C;
	__restfpr_27(ctx, base);
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAF350"))) PPC_WEAK_FUNC(sub_82CAF350);
PPC_FUNC_IMPL(__imp__sub_82CAF350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CAF358;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8572
	ctx.r11.s64 = ctx.r11.s64 + -8572;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf398
	if (ctx.cr6.eq) goto loc_82CAF398;
	// bl 0x82c72120
	ctx.lr = 0x82CAF380;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_82CAF398:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf3c0
	if (ctx.cr6.eq) goto loc_82CAF3C0;
	// bl 0x82c72120
	ctx.lr = 0x82CAF3A8;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_82CAF3C0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf3e8
	if (ctx.cr6.eq) goto loc_82CAF3E8;
	// bl 0x82c72120
	ctx.lr = 0x82CAF3D0;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF3E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_82CAF3E8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf410
	if (ctx.cr6.eq) goto loc_82CAF410;
	// bl 0x82c72120
	ctx.lr = 0x82CAF3F8;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF40C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82CAF410:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf438
	if (ctx.cr6.eq) goto loc_82CAF438;
	// bl 0x82c72120
	ctx.lr = 0x82CAF420;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82CAF438:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf460
	if (ctx.cr6.eq) goto loc_82CAF460;
	// bl 0x82c72120
	ctx.lr = 0x82CAF448;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82CAF460:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf488
	if (ctx.cr6.eq) goto loc_82CAF488;
	// bl 0x82c72120
	ctx.lr = 0x82CAF470;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_82CAF488:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf4b0
	if (ctx.cr6.eq) goto loc_82CAF4B0;
	// bl 0x82c72120
	ctx.lr = 0x82CAF498;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF4AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82CAF4B0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf4d8
	if (ctx.cr6.eq) goto loc_82CAF4D8;
	// bl 0x82c72120
	ctx.lr = 0x82CAF4C0;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_82CAF4D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82caf500
	if (ctx.cr6.eq) goto loc_82CAF500;
	// bl 0x82c72120
	ctx.lr = 0x82CAF4E8;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF4FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82CAF500:
	// lwz r29,72(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82caf530
	if (ctx.cr6.eq) goto loc_82CAF530;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c6fc20
	ctx.lr = 0x82CAF514;
	sub_82C6FC20(ctx, base);
	// bl 0x82c72120
	ctx.lr = 0x82CAF518;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF52C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_82CAF530:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAF538"))) PPC_WEAK_FUNC(sub_82CAF538);
PPC_FUNC_IMPL(__imp__sub_82CAF538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82CAF540;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,86
	ctx.r4.s64 = 86;
	// li r3,67
	ctx.r3.s64 = 67;
	// bl 0x82ca0838
	ctx.lr = 0x82CAF56C;
	sub_82CA0838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82caf584
	if (!ctx.cr6.eq) goto loc_82CAF584;
loc_82CAF578:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
loc_82CAF584:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca0278
	ctx.lr = 0x82CAF590;
	sub_82CA0278(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82ca0278
	ctx.lr = 0x82CAF5A4;
	sub_82CA0278(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82ca0278
	ctx.lr = 0x82CAF5B8;
	sub_82CA0278(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x82ca0278
	ctx.lr = 0x82CAF5CC;
	sub_82CA0278(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82ca0278
	ctx.lr = 0x82CAF5E0;
	sub_82CA0278(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca0278
	ctx.lr = 0x82CAF5F0;
	sub_82CA0278(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82c72120
	ctx.lr = 0x82CAF5F8;
	sub_82C72120(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,47
	ctx.r5.s64 = 47;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF61C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bl 0x82c72120
	ctx.lr = 0x82CAF624;
	sub_82C72120(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAF648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x82c72120
	ctx.lr = 0x82CAF650;
	sub_82C72120(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAF674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bl 0x82c72120
	ctx.lr = 0x82CAF67C;
	sub_82C72120(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAF6A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e29500
	ctx.lr = 0x82CAF6BC;
	sub_82E29500(ctx, base);
	// bl 0x82c72120
	ctx.lr = 0x82CAF6C0;
	sub_82C72120(ctx, base);
	// li r5,49
	ctx.r5.s64 = 49;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bl 0x82c72120
	ctx.lr = 0x82CAF6E0;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,50
	ctx.r5.s64 = 50;
	// rlwinm r4,r27,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// bl 0x82c72120
	ctx.lr = 0x82CAF700;
	sub_82C72120(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,7
	ctx.r5.s64 = 7;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF71C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// beq cr6,0x82caf578
	if (ctx.cr6.eq) goto loc_82CAF578;
	// bl 0x82c72120
	ctx.lr = 0x82CAF72C;
	sub_82C72120(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,51
	ctx.r5.s64 = 51;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// bl 0x82c72120
	ctx.lr = 0x82CAF758;
	sub_82C72120(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,8
	ctx.r5.s64 = 8;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// beq cr6,0x82caf578
	if (ctx.cr6.eq) goto loc_82CAF578;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82e29500
	ctx.lr = 0x82CAF790;
	sub_82E29500(ctx, base);
	// bl 0x82c72120
	ctx.lr = 0x82CAF794;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAF7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// beq cr6,0x82caf578
	if (ctx.cr6.eq) goto loc_82CAF578;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ca05e0
	ctx.lr = 0x82CAF7D4;
	sub_82CA05E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca0278
	ctx.lr = 0x82CAF7E0;
	sub_82CA0278(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ca0e40
	ctx.lr = 0x82CAF7FC;
	sub_82CA0E40(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82caf81c
	if (ctx.cr6.lt) goto loc_82CAF81C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca01b0
	ctx.lr = 0x82CAF818;
	sub_82CA01B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82CAF81C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82caf898
	if (ctx.cr6.lt) goto loc_82CAF898;
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82caf898
	if (!ctx.cr6.eq) goto loc_82CAF898;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82caf920
	if (!ctx.cr6.gt) goto loc_82CAF920;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CAF848:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca01b0
	ctx.lr = 0x82CAF854;
	sub_82CA01B0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,5
	ctx.r10.s64 = 5;
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r9,r7,8
	ctx.r9.s64 = ctx.r7.s64 + 8;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// rlwinm r6,r11,21,11,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r5,r11,26,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1F;
	// rlwinm r4,r11,29,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// bl 0x82caedd8
	ctx.lr = 0x82CAF880;
	sub_82CAEDD8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82caf848
	if (ctx.cr6.lt) goto loc_82CAF848;
	// b 0x82caf920
	goto loc_82CAF920;
loc_82CAF898:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ca05e0
	ctx.lr = 0x82CAF8B4;
	sub_82CA05E0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82caf920
	if (!ctx.cr6.lt) goto loc_82CAF920;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82caf920
	if (!ctx.cr6.gt) goto loc_82CAF920;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CAF8D4:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82caf8d4
	if (ctx.cr6.lt) goto loc_82CAF8D4;
loc_82CAF920:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca0350
	ctx.lr = 0x82CAF92C;
	sub_82CA0350(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x82ca0350
	ctx.lr = 0x82CAF93C;
	sub_82CA0350(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// bl 0x82ca0350
	ctx.lr = 0x82CAF94C;
	sub_82CA0350(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CAF978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cafb40
	if (ctx.cr6.eq) goto loc_82CAFB40;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82cafb40
	if (!ctx.cr6.gt) goto loc_82CAFB40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CAF998:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82caf998
	if (ctx.cr6.lt) goto loc_82CAF998;
loc_82CAFB40:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82cafba4
	if (ctx.cr6.lt) goto loc_82CAFBA4;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82cafb80
	if (ctx.cr6.eq) goto loc_82CAFB80;
loc_82CAFB58:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAFB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stbx r3,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82cafb58
	if (ctx.cr6.lt) goto loc_82CAFB58;
loc_82CAFB80:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca0278
	ctx.lr = 0x82CAFB8C;
	sub_82CA0278(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82ca0a70
	ctx.lr = 0x82CAFBA4;
	sub_82CA0A70(ctx, base);
loc_82CAFBA4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca0278
	ctx.lr = 0x82CAFBB0;
	sub_82CA0278(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca0278
	ctx.lr = 0x82CAFBC0;
	sub_82CA0278(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82cafc24
	if (!ctx.cr6.gt) goto loc_82CAFC24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CAFBD4:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r7,r29,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r29.s64;
	// subf r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82cafbd4
	if (ctx.cr6.lt) goto loc_82CAFBD4;
loc_82CAFC24:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82cafc98
	if (ctx.cr6.lt) goto loc_82CAFC98;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82cafc98
	if (!ctx.cr6.gt) goto loc_82CAFC98;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CAFC44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAFC58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r11,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAFC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cafc44
	if (ctx.cr6.lt) goto loc_82CAFC44;
loc_82CAFC98:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82cafd14
	if (ctx.cr6.lt) goto loc_82CAFD14;
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cafd14
	if (!ctx.cr6.eq) goto loc_82CAFD14;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82cafd30
	if (!ctx.cr6.gt) goto loc_82CAFD30;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CAFCC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca01b0
	ctx.lr = 0x82CAFCD0;
	sub_82CA01B0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,5
	ctx.r10.s64 = 5;
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r9,r7,8
	ctx.r9.s64 = ctx.r7.s64 + 8;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// rlwinm r6,r11,21,11,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r5,r11,26,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1F;
	// rlwinm r4,r11,29,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// bl 0x82caedd8
	ctx.lr = 0x82CAFCFC;
	sub_82CAEDD8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cafcc4
	if (ctx.cr6.lt) goto loc_82CAFCC4;
	// b 0x82cafd30
	goto loc_82CAFD30;
loc_82CAFD14:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ca05e0
	ctx.lr = 0x82CAFD30;
	sub_82CA05E0(ctx, base);
loc_82CAFD30:
	// bl 0x82c72120
	ctx.lr = 0x82CAFD34;
	sub_82C72120(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAFD50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca0278
	ctx.lr = 0x82CAFD60;
	sub_82CA0278(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82ca0a70
	ctx.lr = 0x82CAFD78;
	sub_82CA0A70(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82cafdb4
	if (!ctx.cr6.gt) goto loc_82CAFDB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CAFD90:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sthx r8,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u16);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82cafd90
	if (ctx.cr6.lt) goto loc_82CAFD90;
loc_82CAFDB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca0278
	ctx.lr = 0x82CAFDC0;
	sub_82CA0278(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82ca0a70
	ctx.lr = 0x82CAFDD8;
	sub_82CA0A70(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82cafe18
	if (!ctx.cr6.gt) goto loc_82CAFE18;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CAFDF0:
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// sth r7,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r7.u16);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82cafdf0
	if (ctx.cr6.lt) goto loc_82CAFDF0;
loc_82CAFE18:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cafe38
	if (ctx.cr6.eq) goto loc_82CAFE38;
	// bl 0x82c72120
	ctx.lr = 0x82CAFE24;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAFE38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CAFE38:
	// bl 0x82c72120
	ctx.lr = 0x82CAFE3C;
	sub_82C72120(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAFE58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca0278
	ctx.lr = 0x82CAFE68;
	sub_82CA0278(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82ca0e40
	ctx.lr = 0x82CAFE7C;
	sub_82CA0E40(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82cafebc
	if (!ctx.cr6.gt) goto loc_82CAFEBC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CAFE94:
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82cafe94
	if (ctx.cr6.lt) goto loc_82CAFE94;
loc_82CAFEBC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cafedc
	if (ctx.cr6.eq) goto loc_82CAFEDC;
	// bl 0x82c72120
	ctx.lr = 0x82CAFEC8;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAFEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CAFEDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CAFEF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CAFF08"))) PPC_WEAK_FUNC(sub_82CAFF08);
PPC_FUNC_IMPL(__imp__sub_82CAFF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// beq cr6,0x82caff80
	if (ctx.cr6.eq) goto loc_82CAFF80;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-24
	ctx.r11.s64 = ctx.r1.s64 + -24;
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f8,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f13,f11,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f13,f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fmadds f10,f12,f7,f6
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f11,f12,f5,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f11.f64));
	// stfs f11,-24(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fmadds f13,f12,f4,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f13.f64));
	// stfs f13,-20(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// fmadds f0,f0,f3,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f10.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// b 0x82caff84
	goto loc_82CAFF84;
loc_82CAFF80:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CAFF84:
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f9,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f0.f64));
	// blt cr6,0x82cb007c
	if (ctx.cr6.lt) goto loc_82CB007C;
	// addi r8,r7,-3
	ctx.r8.s64 = ctx.r7.s64 + -3;
	// addi r10,r9,52
	ctx.r10.s64 = ctx.r9.s64 + 52;
loc_82CAFFCC:
	// lfs f10,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f11,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cafff4
	if (!ctx.cr6.gt) goto loc_82CAFFF4;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82CAFFF4:
	// lfs f10,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f11,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb001c
	if (!ctx.cr6.gt) goto loc_82CB001C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_82CB001C:
	// lfs f10,76(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f11,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb0044
	if (!ctx.cr6.gt) goto loc_82CB0044;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
loc_82CB0044:
	// lfs f10,112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f11,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb006c
	if (!ctx.cr6.gt) goto loc_82CB006C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
loc_82CB006C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82caffcc
	if (ctx.cr6.lt) goto loc_82CAFFCC;
loc_82CB007C:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_82CB0098:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb00c0
	if (!ctx.cr6.gt) goto loc_82CB00C0;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82CB00C0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82cb0098
	if (ctx.cr6.lt) goto loc_82CB0098;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB00D8"))) PPC_WEAK_FUNC(sub_82CB00D8);
PPC_FUNC_IMPL(__imp__sub_82CB00D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r30,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r30.u32);
	// beq cr6,0x82cb015c
	if (ctx.cr6.eq) goto loc_82CB015C;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-40
	ctx.r11.s64 = ctx.r1.s64 + -40;
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f8,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f13,f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f11,f12,f9,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fmadds f10,f12,f7,f6
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f13,f12,f5,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f13,-40(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// fmadds f13,f0,f4,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f13,-36(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// fmadds f0,f0,f3,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f10.f64));
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// b 0x82cb0160
	goto loc_82CB0160;
loc_82CB015C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CB0160:
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f9,f11,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f0.f64));
	// blt cr6,0x82cb0258
	if (ctx.cr6.lt) goto loc_82CB0258;
	// addi r8,r7,-3
	ctx.r8.s64 = ctx.r7.s64 + -3;
	// addi r10,r9,52
	ctx.r10.s64 = ctx.r9.s64 + 52;
loc_82CB01A8:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f13,f8,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb01d0
	if (!ctx.cr6.gt) goto loc_82CB01D0;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82CB01D0:
	// lfs f10,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f8,f11,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb01f8
	if (!ctx.cr6.gt) goto loc_82CB01F8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_82CB01F8:
	// lfs f10,72(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f8,f11,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb0220
	if (!ctx.cr6.gt) goto loc_82CB0220;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
loc_82CB0220:
	// lfs f10,108(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f8,f11,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb0248
	if (!ctx.cr6.gt) goto loc_82CB0248;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
loc_82CB0248:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82cb01a8
	if (ctx.cr6.lt) goto loc_82CB01A8;
loc_82CB0258:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82cb02ac
	if (!ctx.cr6.lt) goto loc_82CB02AC;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_82CB0274:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb029c
	if (!ctx.cr6.gt) goto loc_82CB029C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82CB029C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82cb0274
	if (ctx.cr6.lt) goto loc_82CB0274;
loc_82CB02AC:
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x82cb0384
	if (ctx.cr6.lt) goto loc_82CB0384;
	// addi r7,r4,-3
	ctx.r7.s64 = ctx.r4.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r5,16
	ctx.r10.s64 = ctx.r5.s64 + 16;
loc_82CB02D0:
	// lfs f10,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f8,f11,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb02f8
	if (!ctx.cr6.gt) goto loc_82CB02F8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82CB02F8:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f13,f8,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb0320
	if (!ctx.cr6.gt) goto loc_82CB0320;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_82CB0320:
	// lfs f10,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f8,f11,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb0348
	if (!ctx.cr6.gt) goto loc_82CB0348;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82CB0348:
	// lfs f10,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f8,f11,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb0370
	if (!ctx.cr6.gt) goto loc_82CB0370;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
loc_82CB0370:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82cb02d0
	if (ctx.cr6.lt) goto loc_82CB02D0;
loc_82CB0384:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82cb03d8
	if (!ctx.cr6.lt) goto loc_82CB03D8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82CB03A0:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f9,f12,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f13,f8,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82cb03c8
	if (!ctx.cr6.gt) goto loc_82CB03C8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82CB03C8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82cb03a0
	if (ctx.cr6.lt) goto loc_82CB03A0;
loc_82CB03D8:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82cb047c
	if (ctx.cr6.eq) goto loc_82CB047C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82cb03f0
	if (ctx.cr6.eq) goto loc_82CB03F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82CB03F0:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// rotlwi r11,r3,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f13,f9,f12,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f8,f11,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f13,f7,f11,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82cb0488
	if (!ctx.cr6.gt) goto loc_82CB0488;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82CB047C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82cb0488
	if (ctx.cr6.eq) goto loc_82CB0488;
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
loc_82CB0488:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0498"))) PPC_WEAK_FUNC(sub_82CB0498);
PPC_FUNC_IMPL(__imp__sub_82CB0498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82caf350
	ctx.lr = 0x82CB04B8;
	sub_82CAF350(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb04dc
	if (ctx.cr6.eq) goto loc_82CB04DC;
	// bl 0x82c72120
	ctx.lr = 0x82CB04C8;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB04DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CB04DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB04F8"))) PPC_WEAK_FUNC(sub_82CB04F8);
PPC_FUNC_IMPL(__imp__sub_82CB04F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0510"))) PPC_WEAK_FUNC(sub_82CB0510);
PPC_FUNC_IMPL(__imp__sub_82CB0510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb0554
	if (ctx.cr6.eq) goto loc_82CB0554;
	// bl 0x82c72120
	ctx.lr = 0x82CB053C;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB0550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82CB0554:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb057c
	if (ctx.cr6.eq) goto loc_82CB057C;
	// bl 0x82c72120
	ctx.lr = 0x82CB0564;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB0578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_82CB057C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0598"))) PPC_WEAK_FUNC(sub_82CB0598);
PPC_FUNC_IMPL(__imp__sub_82CB0598) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r11.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82CB05B8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lhz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cb05b8
	if (ctx.cr6.lt) goto loc_82CB05B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB05E8"))) PPC_WEAK_FUNC(sub_82CB05E8);
PPC_FUNC_IMPL(__imp__sub_82CB05E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cb0604
	if (ctx.cr6.eq) goto loc_82CB0604;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82CB0604:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0620"))) PPC_WEAK_FUNC(sub_82CB0620);
PPC_FUNC_IMPL(__imp__sub_82CB0620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB0628;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,69
	ctx.r6.s64 = 69;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,65
	ctx.r4.s64 = 65;
	// li r3,86
	ctx.r3.s64 = 86;
	// bl 0x82ca0838
	ctx.lr = 0x82CB0654;
	sub_82CA0838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb066c
	if (!ctx.cr6.eq) goto loc_82CB066C;
loc_82CB0660:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB066C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca0278
	ctx.lr = 0x82CB0678;
	sub_82CA0278(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ca0278
	ctx.lr = 0x82CB068C;
	sub_82CA0278(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb06bc
	if (ctx.cr6.eq) goto loc_82CB06BC;
	// bl 0x82c72120
	ctx.lr = 0x82CB06A4;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB06B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82CB06BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb06e4
	if (ctx.cr6.eq) goto loc_82CB06E4;
	// bl 0x82c72120
	ctx.lr = 0x82CB06CC;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB06E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_82CB06E4:
	// bl 0x82c72120
	ctx.lr = 0x82CB06E8;
	sub_82C72120(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,56
	ctx.r5.s64 = 56;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB0704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x82cb0660
	if (ctx.cr6.eq) goto loc_82CB0660;
	// bl 0x82c72120
	ctx.lr = 0x82CB0714;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,58
	ctx.r5.s64 = 58;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB072C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// beq cr6,0x82cb0660
	if (ctx.cr6.eq) goto loc_82CB0660;
	// bl 0x82c72120
	ctx.lr = 0x82CB073C;
	sub_82C72120(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB0758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca0278
	ctx.lr = 0x82CB0768;
	sub_82CA0278(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ca0a70
	ctx.lr = 0x82CB0780;
	sub_82CA0A70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82cb07bc
	if (!ctx.cr6.gt) goto loc_82CB07BC;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CB0798:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sthx r8,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82cb0798
	if (ctx.cr6.lt) goto loc_82CB0798;
loc_82CB07BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb07dc
	if (ctx.cr6.eq) goto loc_82CB07DC;
	// bl 0x82c72120
	ctx.lr = 0x82CB07C8;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB07DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CB07DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB07F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb0598
	ctx.lr = 0x82CB0800;
	sub_82CB0598(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB0810"))) PPC_WEAK_FUNC(sub_82CB0810);
PPC_FUNC_IMPL(__imp__sub_82CB0810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82CB0818;
	__savegprlr_27(ctx, base);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82cb0944
	if (ctx.cr6.eq) goto loc_82CB0944;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82cb0944
	if (ctx.cr6.eq) goto loc_82CB0944;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82cb0944
	if (ctx.cr6.eq) goto loc_82CB0944;
	// lwz r27,8(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82cb0944
	if (ctx.cr6.eq) goto loc_82CB0944;
	// lwz r28,12(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82cb0944
	if (ctx.cr6.eq) goto loc_82CB0944;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f0,f10,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f13.f64));
loc_82CB0894:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb0930
	if (ctx.cr6.eq) goto loc_82CB0930;
loc_82CB08B8:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82cb0924
	if (ctx.cr6.eq) goto loc_82CB0924;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f9,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82cb0924
	if (!ctx.cr6.gt) goto loc_82CB0924;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82CB0924:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb08b8
	if (!ctx.cr6.eq) goto loc_82CB08B8;
loc_82CB0930:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82cb0894
	if (!ctx.cr6.eq) goto loc_82CB0894;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
loc_82CB0944:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB0950"))) PPC_WEAK_FUNC(sub_82CB0950);
PPC_FUNC_IMPL(__imp__sub_82CB0950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-8548
	ctx.r11.s64 = ctx.r11.s64 + -8548;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0970"))) PPC_WEAK_FUNC(sub_82CB0970);
PPC_FUNC_IMPL(__imp__sub_82CB0970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-8548
	ctx.r11.s64 = ctx.r11.s64 + -8548;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0980"))) PPC_WEAK_FUNC(sub_82CB0980);
PPC_FUNC_IMPL(__imp__sub_82CB0980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cb0c48
	ctx.lr = 0x82CB09A8;
	sub_82CB0C48(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lfs f0,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-28552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28552);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctidz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f10,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f10.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fctidz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f11,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82cb0a48
	if (!ctx.cr6.gt) goto loc_82CB0A48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82CB0A48:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82cb0a54
	if (!ctx.cr6.gt) goto loc_82CB0A54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82CB0A54:
	// mullw r9,r3,r31
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0A78"))) PPC_WEAK_FUNC(sub_82CB0A78);
PPC_FUNC_IMPL(__imp__sub_82CB0A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,83
	ctx.r6.s64 = 83;
	// li r5,85
	ctx.r5.s64 = 85;
	// li r4,65
	ctx.r4.s64 = 65;
	// li r3,71
	ctx.r3.s64 = 71;
	// bl 0x82ca0838
	ctx.lr = 0x82CB0AB4;
	sub_82CA0838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb0ac8
	if (!ctx.cr6.eq) goto loc_82CB0AC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb0af4
	goto loc_82CB0AF4;
loc_82CB0AC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ca0278
	ctx.lr = 0x82CB0AD4;
	sub_82CA0278(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82ca0278
	ctx.lr = 0x82CB0AE8;
	sub_82CA0278(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82CB0AF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0B10"))) PPC_WEAK_FUNC(sub_82CB0B10);
PPC_FUNC_IMPL(__imp__sub_82CB0B10) {
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8548
	ctx.r11.s64 = ctx.r11.s64 + -8548;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82cb0b54
	if (ctx.cr6.eq) goto loc_82CB0B54;
	// bl 0x82c72120
	ctx.lr = 0x82CB0B40;
	sub_82C72120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB0B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CB0B54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82CB0B70"))) PPC_WEAK_FUNC(sub_82CB0B70);
PPC_FUNC_IMPL(__imp__sub_82CB0B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82cb0bbc
	if (ctx.cr6.eq) goto loc_82CB0BBC;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82CB0BBC:
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r11,43691
	ctx.r9.u64 = ctx.r11.u64 | 43691;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulhwu r10,r10,r9
	ctx.r10.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cb0c18
	if (ctx.cr6.eq) goto loc_82CB0C18;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f10,-28496(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28496);
	ctx.f10.f64 = double(temp.f32);
loc_82CB0BE4:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f9,f12,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82cb0c34
	if (ctx.cr6.gt) goto loc_82CB0C34;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cb0be4
	if (!ctx.cr6.eq) goto loc_82CB0BE4;
loc_82CB0C18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c91698
	ctx.lr = 0x82CB0C20;
	sub_82C91698(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CB0C34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0C48"))) PPC_WEAK_FUNC(sub_82CB0C48);
PPC_FUNC_IMPL(__imp__sub_82CB0C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82cb0c6c
	if (!ctx.cr6.gt) goto loc_82CB0C6C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82CB0C6C:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82cb0c8c
	if (!ctx.cr6.gt) goto loc_82CB0C8C;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82CB0C8C:
	// lis r7,256
	ctx.r7.s64 = 16777216;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r7,r7,513
	ctx.r7.u64 = ctx.r7.u64 | 513;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// or r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 | ctx.r9.u64;
	// srw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r8,r10,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// rlwinm r7,r10,26,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FC;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfsx f12,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-13896(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfsx f13,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0CE8"))) PPC_WEAK_FUNC(sub_82CB0CE8);
PPC_FUNC_IMPL(__imp__sub_82CB0CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,518
	ctx.r11.s64 = 33947648;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82cb0d14
	if (ctx.cr6.gt) goto loc_82CB0D14;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82cb0d24
	goto loc_82CB0D24;
loc_82CB0D14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cb0d24
	if (ctx.cr6.eq) goto loc_82CB0D24;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82CB0D24:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6d660
	ctx.lr = 0x82CB0D2C;
	sub_82F6D660(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r3,-32184(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32184, ctx.r3.u32);
	// beq cr6,0x82cb0d44
	if (ctx.cr6.eq) goto loc_82CB0D44;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82CB0D44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0D58"))) PPC_WEAK_FUNC(sub_82CB0D58);
PPC_FUNC_IMPL(__imp__sub_82CB0D58) {
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
	// lis r31,-31966
	ctx.r31.s64 = -2094923776;
	// lwz r3,-32180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cb0d80
	if (!ctx.cr6.eq) goto loc_82CB0D80;
	// bl 0x82f69fb8
	ctx.lr = 0x82CB0D7C;
	sub_82F69FB8(ctx, base);
	// stw r3,-32180(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32180, ctx.r3.u32);
loc_82CB0D80:
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

__attribute__((alias("__imp__sub_82CB0D98"))) PPC_WEAK_FUNC(sub_82CB0D98);
PPC_FUNC_IMPL(__imp__sub_82CB0D98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CB0DAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cb0dac
	if (!ctx.cr6.eq) goto loc_82CB0DAC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0DD8"))) PPC_WEAK_FUNC(sub_82CB0DD8);
PPC_FUNC_IMPL(__imp__sub_82CB0DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CB0DE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82cb0e58
	if (ctx.cr6.eq) goto loc_82CB0E58;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb0e4c
	if (!ctx.cr6.eq) goto loc_82CB0E4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb0e40
	if (ctx.cr6.eq) goto loc_82CB0E40;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CB0E18:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82cb0e18
	if (!ctx.cr6.eq) goto loc_82CB0E18;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb0e40
	if (ctx.cr6.eq) goto loc_82CB0E40;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82CB0E40:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb0e58
	if (ctx.cr6.eq) goto loc_82CB0E58;
loc_82CB0E4C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB0E54;
	sub_82CB4A50(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82CB0E58:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb0ec0
	if (ctx.cr6.eq) goto loc_82CB0EC0;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb0eb4
	if (!ctx.cr6.eq) goto loc_82CB0EB4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb0ea8
	if (ctx.cr6.eq) goto loc_82CB0EA8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CB0E80:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82cb0e80
	if (!ctx.cr6.eq) goto loc_82CB0E80;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb0ea8
	if (ctx.cr6.eq) goto loc_82CB0EA8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82CB0EA8:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb0ec0
	if (ctx.cr6.eq) goto loc_82CB0EC0;
loc_82CB0EB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB0EBC;
	sub_82CB4A50(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82CB0EC0:
	// li r11,263
	ctx.r11.s64 = 263;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB0ED8"))) PPC_WEAK_FUNC(sub_82CB0ED8);
PPC_FUNC_IMPL(__imp__sub_82CB0ED8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb0ee8
	if (ctx.cr6.eq) goto loc_82CB0EE8;
	// b 0x82cb4f80
	sub_82CB4F80(ctx, base);
	return;
loc_82CB0EE8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB0EF0"))) PPC_WEAK_FUNC(sub_82CB0EF0);
PPC_FUNC_IMPL(__imp__sub_82CB0EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82CB0EF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,-8472
	ctx.r30.s64 = ctx.r11.s64 + -8472;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82cb84c8
	ctx.lr = 0x82CB0F24;
	sub_82CB84C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb0f64
	if (ctx.cr6.eq) goto loc_82CB0F64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82cb0f50
	if (ctx.cr6.eq) goto loc_82CB0F50;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb4f80
	ctx.lr = 0x82CB0F4C;
	sub_82CB4F80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82CB0F50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb80d0
	ctx.lr = 0x82CB0F58;
	sub_82CB80D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
loc_82CB0F64:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb4d20
	ctx.lr = 0x82CB0F70;
	sub_82CB4D20(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB0F88"))) PPC_WEAK_FUNC(sub_82CB0F88);
PPC_FUNC_IMPL(__imp__sub_82CB0F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82CB0F90;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb0fec
	if (ctx.cr6.eq) goto loc_82CB0FEC;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd4580
	ctx.lr = 0x82CB0FC4;
	sub_82CD4580(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd95d8
	ctx.lr = 0x82CB0FDC;
	sub_82CD95D8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd45a0
	ctx.lr = 0x82CB0FE8;
	sub_82CD45A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CB0FEC:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB0FF4"))) PPC_WEAK_FUNC(sub_82CB0FF4);
PPC_FUNC_IMPL(__imp__sub_82CB0FF4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd45a0
	ctx.lr = 0x82CB100C;
	sub_82CD45A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1028"))) PPC_WEAK_FUNC(sub_82CB1028);
PPC_FUNC_IMPL(__imp__sub_82CB1028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb107c
	if (ctx.cr6.eq) goto loc_82CB107C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd4580
	ctx.lr = 0x82CB1058;
	sub_82CD4580(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82ccc878
	ctx.lr = 0x82CB1060;
	sub_82CCC878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB1068;
	sub_82CB4A50(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82ccc928
	ctx.lr = 0x82CB1074;
	sub_82CCC928(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd45a0
	ctx.lr = 0x82CB107C;
	sub_82CD45A0(ctx, base);
loc_82CB107C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1098"))) PPC_WEAK_FUNC(sub_82CB1098);
PPC_FUNC_IMPL(__imp__sub_82CB1098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd45a0
	ctx.lr = 0x82CB10B0;
	sub_82CD45A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB10C0"))) PPC_WEAK_FUNC(sub_82CB10C0);
PPC_FUNC_IMPL(__imp__sub_82CB10C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82ccc928
	ctx.lr = 0x82CB10D8;
	sub_82CCC928(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB10E8"))) PPC_WEAK_FUNC(sub_82CB10E8);
PPC_FUNC_IMPL(__imp__sub_82CB10E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cb1110
	if (ctx.cr6.eq) goto loc_82CB1110;
	// bl 0x82cd1e58
	ctx.lr = 0x82CB1108;
	sub_82CD1E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82545ee8
	ctx.lr = 0x82CB1110;
	sub_82545EE8(ctx, base);
loc_82CB1110:
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

__attribute__((alias("__imp__sub_82CB1128"))) PPC_WEAK_FUNC(sub_82CB1128);
PPC_FUNC_IMPL(__imp__sub_82CB1128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31966
	ctx.r30.s64 = -2094923776;
	// lwz r31,-32172(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32172);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cb115c
	if (ctx.cr6.eq) goto loc_82CB115C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd1e58
	ctx.lr = 0x82CB1154;
	sub_82CD1E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82545ee8
	ctx.lr = 0x82CB115C;
	sub_82545EE8(ctx, base);
loc_82CB115C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-32172(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32172, ctx.r11.u32);
	// bl 0x82cb4b78
	ctx.lr = 0x82CB1168;
	sub_82CB4B78(ctx, base);
	// bl 0x82cb4cb8
	ctx.lr = 0x82CB116C;
	sub_82CB4CB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1190"))) PPC_WEAK_FUNC(sub_82CB1190);
PPC_FUNC_IMPL(__imp__sub_82CB1190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB1198;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,172
	ctx.r3.s64 = 172;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82545e80
	ctx.lr = 0x82CB11B0;
	sub_82545E80(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb11c8
	if (ctx.cr6.eq) goto loc_82CB11C8;
	// bl 0x82cccc18
	ctx.lr = 0x82CB11C0;
	sub_82CCCC18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82cb11cc
	goto loc_82CB11CC;
loc_82CB11C8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CB11CC:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0dd8
	ctx.lr = 0x82CB11E0;
	sub_82CB0DD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB11EC"))) PPC_WEAK_FUNC(sub_82CB11EC);
PPC_FUNC_IMPL(__imp__sub_82CB11EC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82545ee8
	ctx.lr = 0x82CB1204;
	sub_82545EE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1220"))) PPC_WEAK_FUNC(sub_82CB1220);
PPC_FUNC_IMPL(__imp__sub_82CB1220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1250;
	sub_82CD9790(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cd9fc8
	ctx.lr = 0x82CB1260;
	sub_82CD9FC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB126C;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB128C"))) PPC_WEAK_FUNC(sub_82CB128C);
PPC_FUNC_IMPL(__imp__sub_82CB128C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB12A4;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB12C0"))) PPC_WEAK_FUNC(sub_82CB12C0);
PPC_FUNC_IMPL(__imp__sub_82CB12C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB12C8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB12E8;
	sub_82CD9790(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB12F0;
	sub_82CB4A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB12FC;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdb720
	ctx.lr = 0x82CB1310;
	sub_82CDB720(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB131C;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1328"))) PPC_WEAK_FUNC(sub_82CB1328);
PPC_FUNC_IMPL(__imp__sub_82CB1328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1340;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1358"))) PPC_WEAK_FUNC(sub_82CB1358);
PPC_FUNC_IMPL(__imp__sub_82CB1358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB1360;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1380;
	sub_82CD9790(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB1388;
	sub_82CB4A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB1394;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdcdb0
	ctx.lr = 0x82CB13A8;
	sub_82CDCDB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB13B4;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB13C0"))) PPC_WEAK_FUNC(sub_82CB13C0);
PPC_FUNC_IMPL(__imp__sub_82CB13C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB13D8;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB13F0"))) PPC_WEAK_FUNC(sub_82CB13F0);
PPC_FUNC_IMPL(__imp__sub_82CB13F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB13F8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1418;
	sub_82CD9790(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB1420;
	sub_82CB4A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB142C;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cde700
	ctx.lr = 0x82CB1440;
	sub_82CDE700(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB144C;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1458"))) PPC_WEAK_FUNC(sub_82CB1458);
PPC_FUNC_IMPL(__imp__sub_82CB1458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1470;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1480"))) PPC_WEAK_FUNC(sub_82CB1480);
PPC_FUNC_IMPL(__imp__sub_82CB1480) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1490"))) PPC_WEAK_FUNC(sub_82CB1490);
PPC_FUNC_IMPL(__imp__sub_82CB1490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB1498;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB14B8;
	sub_82CD9790(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB14C0;
	sub_82CB4A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB14CC;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdb480
	ctx.lr = 0x82CB14E0;
	sub_82CDB480(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB14EC;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB14F8"))) PPC_WEAK_FUNC(sub_82CB14F8);
PPC_FUNC_IMPL(__imp__sub_82CB14F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1510;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1528"))) PPC_WEAK_FUNC(sub_82CB1528);
PPC_FUNC_IMPL(__imp__sub_82CB1528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB1530;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1550;
	sub_82CD9790(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB1558;
	sub_82CB4A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB1564;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cda6e8
	ctx.lr = 0x82CB1578;
	sub_82CDA6E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1584;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1590"))) PPC_WEAK_FUNC(sub_82CB1590);
PPC_FUNC_IMPL(__imp__sub_82CB1590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB15A8;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB15C0"))) PPC_WEAK_FUNC(sub_82CB15C0);
PPC_FUNC_IMPL(__imp__sub_82CB15C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB15C8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB15E8;
	sub_82CD9790(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB15F0;
	sub_82CB4A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB15FC;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cda2f8
	ctx.lr = 0x82CB1610;
	sub_82CDA2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB161C;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1628"))) PPC_WEAK_FUNC(sub_82CB1628);
PPC_FUNC_IMPL(__imp__sub_82CB1628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1640;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1658"))) PPC_WEAK_FUNC(sub_82CB1658);
PPC_FUNC_IMPL(__imp__sub_82CB1658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB1660;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1680;
	sub_82CD9790(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB1688;
	sub_82CB4A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB1694;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9a78
	ctx.lr = 0x82CB16A8;
	sub_82CD9A78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB16B4;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB16C0"))) PPC_WEAK_FUNC(sub_82CB16C0);
PPC_FUNC_IMPL(__imp__sub_82CB16C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB16D8;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB16F0"))) PPC_WEAK_FUNC(sub_82CB16F0);
PPC_FUNC_IMPL(__imp__sub_82CB16F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82CB16F8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82cd9790
	ctx.lr = 0x82CB171C;
	sub_82CD9790(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB1724;
	sub_82CB4A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB1730;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9d68
	ctx.lr = 0x82CB1744;
	sub_82CD9D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb1750
	if (ctx.cr6.eq) goto loc_82CB1750;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82CB1750:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1758;
	sub_82CD9798(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1764"))) PPC_WEAK_FUNC(sub_82CB1764);
PPC_FUNC_IMPL(__imp__sub_82CB1764) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB177C;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1798"))) PPC_WEAK_FUNC(sub_82CB1798);
PPC_FUNC_IMPL(__imp__sub_82CB1798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB17A0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB17C0;
	sub_82CD9790(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB17C8;
	sub_82CB4A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB17D4;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdaff0
	ctx.lr = 0x82CB17E8;
	sub_82CDAFF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB17F4;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1800"))) PPC_WEAK_FUNC(sub_82CB1800);
PPC_FUNC_IMPL(__imp__sub_82CB1800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1818;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1830"))) PPC_WEAK_FUNC(sub_82CB1830);
PPC_FUNC_IMPL(__imp__sub_82CB1830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB1838;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1858;
	sub_82CD9790(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB1860;
	sub_82CB4A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB186C;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdecd8
	ctx.lr = 0x82CB1880;
	sub_82CDECD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB188C;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1898"))) PPC_WEAK_FUNC(sub_82CB1898);
PPC_FUNC_IMPL(__imp__sub_82CB1898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB18B0;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB18C0"))) PPC_WEAK_FUNC(sub_82CB18C0);
PPC_FUNC_IMPL(__imp__sub_82CB18C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// stw r3,-32168(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32168, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB18D0"))) PPC_WEAK_FUNC(sub_82CB18D0);
PPC_FUNC_IMPL(__imp__sub_82CB18D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82545ee8
	sub_82545EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB18E0"))) PPC_WEAK_FUNC(sub_82CB18E0);
PPC_FUNC_IMPL(__imp__sub_82CB18E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB18E8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1908;
	sub_82CD9790(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdca10
	ctx.lr = 0x82CB191C;
	sub_82CDCA10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1928;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1934"))) PPC_WEAK_FUNC(sub_82CB1934);
PPC_FUNC_IMPL(__imp__sub_82CB1934) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB194C;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1968"))) PPC_WEAK_FUNC(sub_82CB1968);
PPC_FUNC_IMPL(__imp__sub_82CB1968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB1970;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1990;
	sub_82CD9790(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdcb88
	ctx.lr = 0x82CB19A4;
	sub_82CDCB88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB19B0;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB19BC"))) PPC_WEAK_FUNC(sub_82CB19BC);
PPC_FUNC_IMPL(__imp__sub_82CB19BC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB19D4;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB19F0"))) PPC_WEAK_FUNC(sub_82CB19F0);
PPC_FUNC_IMPL(__imp__sub_82CB19F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82CB19F8;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1A24;
	sub_82CD9790(ctx, base);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdc978
	ctx.lr = 0x82CB1A44;
	sub_82CDC978(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1A50;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1A5C"))) PPC_WEAK_FUNC(sub_82CB1A5C);
PPC_FUNC_IMPL(__imp__sub_82CB1A5C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1A74;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1A90"))) PPC_WEAK_FUNC(sub_82CB1A90);
PPC_FUNC_IMPL(__imp__sub_82CB1A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CB1A98;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1AC0;
	sub_82CD9790(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cda950
	ctx.lr = 0x82CB1ADC;
	sub_82CDA950(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1AE8;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1AF4"))) PPC_WEAK_FUNC(sub_82CB1AF4);
PPC_FUNC_IMPL(__imp__sub_82CB1AF4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1B0C;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1B28"))) PPC_WEAK_FUNC(sub_82CB1B28);
PPC_FUNC_IMPL(__imp__sub_82CB1B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CB1B30;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1B58;
	sub_82CD9790(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdabd8
	ctx.lr = 0x82CB1B74;
	sub_82CDABD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1B80;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1B8C"))) PPC_WEAK_FUNC(sub_82CB1B8C);
PPC_FUNC_IMPL(__imp__sub_82CB1B8C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1BA4;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1BB8"))) PPC_WEAK_FUNC(sub_82CB1BB8);
PPC_FUNC_IMPL(__imp__sub_82CB1BB8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1BD8"))) PPC_WEAK_FUNC(sub_82CB1BD8);
PPC_FUNC_IMPL(__imp__sub_82CB1BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1BE0"))) PPC_WEAK_FUNC(sub_82CB1BE0);
PPC_FUNC_IMPL(__imp__sub_82CB1BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// stb r3,-32164(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32164, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1BF8"))) PPC_WEAK_FUNC(sub_82CB1BF8);
PPC_FUNC_IMPL(__imp__sub_82CB1BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1C20;
	sub_82CD9790(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd97a0
	ctx.lr = 0x82CB1C2C;
	sub_82CD97A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1C38;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1C54"))) PPC_WEAK_FUNC(sub_82CB1C54);
PPC_FUNC_IMPL(__imp__sub_82CB1C54) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1C6C;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1C88"))) PPC_WEAK_FUNC(sub_82CB1C88);
PPC_FUNC_IMPL(__imp__sub_82CB1C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB1C90;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1CB0;
	sub_82CD9790(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdb248
	ctx.lr = 0x82CB1CC0;
	sub_82CDB248(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb1ccc
	if (ctx.cr6.eq) goto loc_82CB1CCC;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82CB1CCC:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1CD4;
	sub_82CD9798(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1CE0"))) PPC_WEAK_FUNC(sub_82CB1CE0);
PPC_FUNC_IMPL(__imp__sub_82CB1CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1CF8;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1D08"))) PPC_WEAK_FUNC(sub_82CB1D08);
PPC_FUNC_IMPL(__imp__sub_82CB1D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// stb r3,-32175(r11)
	PPC_STORE_U8(ctx.r11.u32 + -32175, ctx.r3.u8);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r11,r11,11500
	ctx.r11.s64 = ctx.r11.s64 + 11500;
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1D28"))) PPC_WEAK_FUNC(sub_82CB1D28);
PPC_FUNC_IMPL(__imp__sub_82CB1D28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82cb1d50
	if (ctx.cr6.eq) goto loc_82CB1D50;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB1D4C;
	sub_82CB4A50(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82CB1D50:
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

__attribute__((alias("__imp__sub_82CB1D68"))) PPC_WEAK_FUNC(sub_82CB1D68);
PPC_FUNC_IMPL(__imp__sub_82CB1D68) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1D78"))) PPC_WEAK_FUNC(sub_82CB1D78);
PPC_FUNC_IMPL(__imp__sub_82CB1D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CB1D80;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1D9C;
	sub_82CD9790(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB1DA4;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9808
	ctx.lr = 0x82CB1DB4;
	sub_82CD9808(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1DBC;
	sub_82CD9798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB1DC8"))) PPC_WEAK_FUNC(sub_82CB1DC8);
PPC_FUNC_IMPL(__imp__sub_82CB1DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1DE0;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1DF0"))) PPC_WEAK_FUNC(sub_82CB1DF0);
PPC_FUNC_IMPL(__imp__sub_82CB1DF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB1E00"))) PPC_WEAK_FUNC(sub_82CB1E00);
PPC_FUNC_IMPL(__imp__sub_82CB1E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x82CB1E08;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82CB1E1C:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// bge cr6,0x82cb1e8c
	if (!ctx.cr6.lt) goto loc_82CB1E8C;
	// clrlwi r26,r27,16
	ctx.r26.u64 = ctx.r27.u32 & 0xFFFF;
loc_82CB1E2C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r5,r28,16
	ctx.r5.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB1E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb1e80
	if (!ctx.cr6.eq) goto loc_82CB1E80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9790
	ctx.lr = 0x82CB1E64;
	sub_82CD9790(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdca10
	ctx.lr = 0x82CB1E78;
	sub_82CDCA10(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1E80;
	sub_82CD9798(ctx, base);
loc_82CB1E80:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// blt cr6,0x82cb1e2c
	if (ctx.cr6.lt) goto loc_82CB1E2C;
loc_82CB1E8C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32, ctx.xer);
	// blt cr6,0x82cb1e1c
	if (ctx.cr6.lt) goto loc_82CB1E1C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB1EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb1f5c
	if (ctx.cr6.eq) goto loc_82CB1F5C;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82cb1ed0
	if (!ctx.cr6.gt) goto loc_82CB1ED0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CB1ED0:
	// bl 0x82545e80
	ctx.lr = 0x82CB1ED4;
	sub_82545E80(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB1F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb1f54
	if (ctx.cr6.eq) goto loc_82CB1F54;
	// addi r30,r24,2
	ctx.r30.s64 = ctx.r24.s64 + 2;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82CB1F10:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r27,2(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lhz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r25,-2(r30)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r30.u32 + -2);
	// bl 0x82cd9790
	ctx.lr = 0x82CB1F28;
	sub_82CD9790(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdcb88
	ctx.lr = 0x82CB1F3C;
	sub_82CDCB88(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB1F44;
	sub_82CD9798(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82cb1f10
	if (!ctx.cr6.eq) goto loc_82CB1F10;
loc_82CB1F54:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82545ee8
	ctx.lr = 0x82CB1F5C;
	sub_82545EE8(ctx, base);
loc_82CB1F5C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB1F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB1F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB1FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB1FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r28,92(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r27,96(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82cd9790
	ctx.lr = 0x82CB1FDC;
	sub_82CD9790(ctx, base);
	// addi r9,r31,112
	ctx.r9.s64 = ctx.r31.s64 + 112;
	// addi r8,r31,128
	ctx.r8.s64 = ctx.r31.s64 + 128;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdc978
	ctx.lr = 0x82CB1FFC;
	sub_82CDC978(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB2004;
	sub_82CD9798(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB200C"))) PPC_WEAK_FUNC(sub_82CB200C);
PPC_FUNC_IMPL(__imp__sub_82CB200C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB2024;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2034"))) PPC_WEAK_FUNC(sub_82CB2034);
PPC_FUNC_IMPL(__imp__sub_82CB2034) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB204C;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB205C"))) PPC_WEAK_FUNC(sub_82CB205C);
PPC_FUNC_IMPL(__imp__sub_82CB205C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-224
	ctx.r31.s64 = ctx.r12.s64 + -224;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB2074;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2090"))) PPC_WEAK_FUNC(sub_82CB2090);
PPC_FUNC_IMPL(__imp__sub_82CB2090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB2098;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82cb1bf8
	ctx.lr = 0x82CB20B0;
	sub_82CB1BF8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CB20B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB20CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82cd9790
	ctx.lr = 0x82CB20DC;
	sub_82CD9790(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cd9fc8
	ctx.lr = 0x82CB20EC;
	sub_82CD9FC8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB20F4;
	sub_82CD9798(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// blt cr6,0x82cb20b4
	if (ctx.cr6.lt) goto loc_82CB20B4;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB210C"))) PPC_WEAK_FUNC(sub_82CB210C);
PPC_FUNC_IMPL(__imp__sub_82CB210C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB2124;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2138"))) PPC_WEAK_FUNC(sub_82CB2138);
PPC_FUNC_IMPL(__imp__sub_82CB2138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82cb21d8
	if (ctx.cr6.eq) goto loc_82CB21D8;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82cb21ac
	if (ctx.cr6.eq) goto loc_82CB21AC;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x82cb2200
	if (!ctx.cr6.eq) goto loc_82CB2200;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1658
	ctx.lr = 0x82CB21A8;
	sub_82CB1658(ctx, base);
	// b 0x82cb2200
	goto loc_82CB2200;
loc_82CB21AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB21C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb15c0
	ctx.lr = 0x82CB21D4;
	sub_82CB15C0(ctx, base);
	// b 0x82cb2200
	goto loc_82CB2200;
loc_82CB21D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB21EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb1528
	ctx.lr = 0x82CB2200;
	sub_82CB1528(ctx, base);
loc_82CB2200:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82cb2230
	if (ctx.cr6.eq) goto loc_82CB2230;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb16f0
	ctx.lr = 0x82CB2230;
	sub_82CB16F0(ctx, base);
loc_82CB2230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2250"))) PPC_WEAK_FUNC(sub_82CB2250);
PPC_FUNC_IMPL(__imp__sub_82CB2250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82CB2258;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB227C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb2314
	if (ctx.cr6.eq) goto loc_82CB2314;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82CB22A4:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB22BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb2304
	if (ctx.cr6.eq) goto loc_82CB2304;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB22DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb2304
	if (ctx.cr6.eq) goto loc_82CB2304;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82CB22E8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82cb2138
	ctx.lr = 0x82CB22F4;
	sub_82CB2138(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cb22e8
	if (!ctx.cr6.eq) goto loc_82CB22E8;
loc_82CB2304:
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82cb22a4
	if (!ctx.cr6.eq) goto loc_82CB22A4;
loc_82CB2314:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB233C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb23a8
	if (ctx.cr6.eq) goto loc_82CB23A8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB235C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb23a8
	if (ctx.cr6.eq) goto loc_82CB23A8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82CB2368:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9790
	ctx.lr = 0x82CB2378;
	sub_82CD9790(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB2380;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9808
	ctx.lr = 0x82CB2390;
	sub_82CD9808(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB2398;
	sub_82CD9798(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cb2368
	if (!ctx.cr6.eq) goto loc_82CB2368;
loc_82CB23A8:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB23B0"))) PPC_WEAK_FUNC(sub_82CB23B0);
PPC_FUNC_IMPL(__imp__sub_82CB23B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB23C8;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB23E0"))) PPC_WEAK_FUNC(sub_82CB23E0);
PPC_FUNC_IMPL(__imp__sub_82CB23E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CB23E8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB240C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb2488
	if (ctx.cr6.eq) goto loc_82CB2488;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB242C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb2488
	if (ctx.cr6.eq) goto loc_82CB2488;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82CB2438:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9790
	ctx.lr = 0x82CB2448;
	sub_82CD9790(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB2450;
	sub_82CB4A50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB245C;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdb720
	ctx.lr = 0x82CB2470;
	sub_82CDB720(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB2478;
	sub_82CD9798(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cb2438
	if (!ctx.cr6.eq) goto loc_82CB2438;
loc_82CB2488:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB2490"))) PPC_WEAK_FUNC(sub_82CB2490);
PPC_FUNC_IMPL(__imp__sub_82CB2490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB24A8;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB24C0"))) PPC_WEAK_FUNC(sub_82CB24C0);
PPC_FUNC_IMPL(__imp__sub_82CB24C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CB24C8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB24EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb25b4
	if (ctx.cr6.eq) goto loc_82CB25B4;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82cb2518
	if (ctx.cr6.gt) goto loc_82CB2518;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82cb251c
	goto loc_82CB251C;
loc_82CB2518:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CB251C:
	// bl 0x82545e80
	ctx.lr = 0x82CB2520;
	sub_82545E80(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e29500
	ctx.lr = 0x82CB2538;
	sub_82E29500(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb25ac
	if (ctx.cr6.eq) goto loc_82CB25AC;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82CB2560:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9790
	ctx.lr = 0x82CB256C;
	sub_82CD9790(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB2574;
	sub_82CB4A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB2580;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdecd8
	ctx.lr = 0x82CB2594;
	sub_82CDECD8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB259C;
	sub_82CD9798(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cb2560
	if (!ctx.cr6.eq) goto loc_82CB2560;
loc_82CB25AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82545ee8
	ctx.lr = 0x82CB25B4;
	sub_82545EE8(ctx, base);
loc_82CB25B4:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB25BC"))) PPC_WEAK_FUNC(sub_82CB25BC);
PPC_FUNC_IMPL(__imp__sub_82CB25BC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB25D4;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB25F0"))) PPC_WEAK_FUNC(sub_82CB25F0);
PPC_FUNC_IMPL(__imp__sub_82CB25F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CB25F8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB261C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb2690
	if (ctx.cr6.eq) goto loc_82CB2690;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82CB2640:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9790
	ctx.lr = 0x82CB2650;
	sub_82CD9790(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB2658;
	sub_82CB4A50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB2664;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cde700
	ctx.lr = 0x82CB2678;
	sub_82CDE700(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB2680;
	sub_82CD9798(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cb2640
	if (!ctx.cr6.eq) goto loc_82CB2640;
loc_82CB2690:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB2698"))) PPC_WEAK_FUNC(sub_82CB2698);
PPC_FUNC_IMPL(__imp__sub_82CB2698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB26B0;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB26C8"))) PPC_WEAK_FUNC(sub_82CB26C8);
PPC_FUNC_IMPL(__imp__sub_82CB26C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82CB26D0;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB26F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb27b8
	if (ctx.cr6.eq) goto loc_82CB27B8;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82cb2718
	if (!ctx.cr6.gt) goto loc_82CB2718;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CB2718:
	// bl 0x82545e80
	ctx.lr = 0x82CB271C;
	sub_82545E80(ctx, base);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82e29500
	ctx.lr = 0x82CB272C;
	sub_82E29500(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb27b0
	if (ctx.cr6.eq) goto loc_82CB27B0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82CB2760:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9790
	ctx.lr = 0x82CB2770;
	sub_82CD9790(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB2778;
	sub_82CB4A50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB2784;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdb480
	ctx.lr = 0x82CB2798;
	sub_82CDB480(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB27A0;
	sub_82CD9798(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cb2760
	if (!ctx.cr6.eq) goto loc_82CB2760;
loc_82CB27B0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82545ee8
	ctx.lr = 0x82CB27B8;
	sub_82545EE8(ctx, base);
loc_82CB27B8:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB27C0"))) PPC_WEAK_FUNC(sub_82CB27C0);
PPC_FUNC_IMPL(__imp__sub_82CB27C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB27D8;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB27F0"))) PPC_WEAK_FUNC(sub_82CB27F0);
PPC_FUNC_IMPL(__imp__sub_82CB27F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CB27F8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB281C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb28c8
	if (ctx.cr6.eq) goto loc_82CB28C8;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82cb2840
	if (!ctx.cr6.gt) goto loc_82CB2840;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82CB2840:
	// bl 0x82545e80
	ctx.lr = 0x82CB2844;
	sub_82545E80(ctx, base);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82e29500
	ctx.lr = 0x82CB2854;
	sub_82E29500(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r31,84
	ctx.r6.s64 = ctx.r31.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB287C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb28c0
	if (ctx.cr6.eq) goto loc_82CB28C0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82CB2888:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9790
	ctx.lr = 0x82CB2898;
	sub_82CD9790(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdb248
	ctx.lr = 0x82CB28A8;
	sub_82CDB248(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB28B0;
	sub_82CD9798(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cb2888
	if (!ctx.cr6.eq) goto loc_82CB2888;
loc_82CB28C0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82545ee8
	ctx.lr = 0x82CB28C8;
	sub_82545EE8(ctx, base);
loc_82CB28C8:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB28D0"))) PPC_WEAK_FUNC(sub_82CB28D0);
PPC_FUNC_IMPL(__imp__sub_82CB28D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB28E8;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2900"))) PPC_WEAK_FUNC(sub_82CB2900);
PPC_FUNC_IMPL(__imp__sub_82CB2900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82CB2908;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lfs f0,-22384(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22384);
	ctx.f0.f64 = double(temp.f32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r11,68
	ctx.r11.s64 = 68;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// ori r11,r11,21844
	ctx.r11.u64 = ctx.r11.u64 | 21844;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CB29DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// bl 0x82cd9790
	ctx.lr = 0x82CB29EC;
	sub_82CD9790(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB29F4;
	sub_82CB4A50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB2A00;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cda128
	ctx.lr = 0x82CB2A14;
	sub_82CDA128(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB2A20;
	sub_82CD9798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB2A2C"))) PPC_WEAK_FUNC(sub_82CB2A2C);
PPC_FUNC_IMPL(__imp__sub_82CB2A2C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-272
	ctx.r31.s64 = ctx.r12.s64 + -272;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB2A44;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2A58"))) PPC_WEAK_FUNC(sub_82CB2A58);
PPC_FUNC_IMPL(__imp__sub_82CB2A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2A70"))) PPC_WEAK_FUNC(sub_82CB2A70);
PPC_FUNC_IMPL(__imp__sub_82CB2A70) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2AA8"))) PPC_WEAK_FUNC(sub_82CB2AA8);
PPC_FUNC_IMPL(__imp__sub_82CB2AA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2AC0"))) PPC_WEAK_FUNC(sub_82CB2AC0);
PPC_FUNC_IMPL(__imp__sub_82CB2AC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2AF8"))) PPC_WEAK_FUNC(sub_82CB2AF8);
PPC_FUNC_IMPL(__imp__sub_82CB2AF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2B30"))) PPC_WEAK_FUNC(sub_82CB2B30);
PPC_FUNC_IMPL(__imp__sub_82CB2B30) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82cb2900
	sub_82CB2900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB2B48"))) PPC_WEAK_FUNC(sub_82CB2B48);
PPC_FUNC_IMPL(__imp__sub_82CB2B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e4c
	ctx.lr = 0x82CB2B50;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82cb2cf0
	if (ctx.cr6.eq) goto loc_82CB2CF0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82cb2c7c
	if (ctx.cr6.eq) goto loc_82CB2C7C;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
loc_82CB2BB8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82cb2c64
	if (ctx.cr6.gt) goto loc_82CB2C64;
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// srawi r26,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 2;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82cb2bf8
	if (!ctx.cr6.eq) goto loc_82CB2BF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82cb2c00
	goto loc_82CB2C00;
loc_82CB2BF8:
	// subf r11,r29,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r29.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82CB2C00:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82cb2c64
	if (!ctx.cr6.lt) goto loc_82CB2C64;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e2afb0
	ctx.lr = 0x82CB2C14;
	sub_82E2AFB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82cb2c3c
	if (ctx.cr6.eq) goto loc_82CB2C3C;
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
loc_82CB2C28:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82cb2c28
	if (!ctx.cr6.eq) goto loc_82CB2C28;
loc_82CB2C3C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb2c4c
	if (ctx.cr6.eq) goto loc_82CB2C4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e2af50
	ctx.lr = 0x82CB2C4C;
	sub_82E2AF50(ctx, base);
loc_82CB2C4C:
	// add r27,r27,r28
	ctx.r27.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82CB2C64:
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// bne cr6,0x82cb2bb8
	if (!ctx.cr6.eq) goto loc_82CB2BB8;
loc_82CB2C7C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82cb2ce0
	if (ctx.cr6.eq) goto loc_82CB2CE0;
loc_82CB2C88:
	// subf r11,r30,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r30.s64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82cd9790
	ctx.lr = 0x82CB2CA4;
	sub_82CD9790(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB2CAC;
	sub_82CB4A50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB2CB8;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdcdb0
	ctx.lr = 0x82CB2CCC;
	sub_82CDCDB0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB2CD4;
	sub_82CD9798(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82cb2c88
	if (ctx.cr6.lt) goto loc_82CB2C88;
loc_82CB2CE0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb2cf0
	if (ctx.cr6.eq) goto loc_82CB2CF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e2af50
	ctx.lr = 0x82CB2CF0;
	sub_82E2AF50(ctx, base);
loc_82CB2CF0:
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x82e28e9c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB2CF8"))) PPC_WEAK_FUNC(sub_82CB2CF8);
PPC_FUNC_IMPL(__imp__sub_82CB2CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82cd4490
	ctx.lr = 0x82CB2D10;
	sub_82CD4490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2D20"))) PPC_WEAK_FUNC(sub_82CB2D20);
PPC_FUNC_IMPL(__imp__sub_82CB2D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB2D38;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2D50"))) PPC_WEAK_FUNC(sub_82CB2D50);
PPC_FUNC_IMPL(__imp__sub_82CB2D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e4c
	ctx.lr = 0x82CB2D58;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82cb2ef8
	if (ctx.cr6.eq) goto loc_82CB2EF8;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82cb2e84
	if (ctx.cr6.eq) goto loc_82CB2E84;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
loc_82CB2DC0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB2DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82cb2e6c
	if (ctx.cr6.gt) goto loc_82CB2E6C;
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// srawi r26,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 2;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82cb2e00
	if (!ctx.cr6.eq) goto loc_82CB2E00;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82cb2e08
	goto loc_82CB2E08;
loc_82CB2E00:
	// subf r11,r29,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r29.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82CB2E08:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82cb2e6c
	if (!ctx.cr6.lt) goto loc_82CB2E6C;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e2afb0
	ctx.lr = 0x82CB2E1C;
	sub_82E2AFB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82cb2e44
	if (ctx.cr6.eq) goto loc_82CB2E44;
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
loc_82CB2E30:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82cb2e30
	if (!ctx.cr6.eq) goto loc_82CB2E30;
loc_82CB2E44:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb2e54
	if (ctx.cr6.eq) goto loc_82CB2E54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e2af50
	ctx.lr = 0x82CB2E54;
	sub_82E2AF50(ctx, base);
loc_82CB2E54:
	// add r27,r27,r28
	ctx.r27.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_82CB2E6C:
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// bne cr6,0x82cb2dc0
	if (!ctx.cr6.eq) goto loc_82CB2DC0;
loc_82CB2E84:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82cb2ee8
	if (ctx.cr6.eq) goto loc_82CB2EE8;
loc_82CB2E90:
	// subf r11,r30,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r30.s64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82cd9790
	ctx.lr = 0x82CB2EAC;
	sub_82CD9790(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB2EB4;
	sub_82CB4A50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB2EC0;
	sub_82CB4A50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cdaff0
	ctx.lr = 0x82CB2ED4;
	sub_82CDAFF0(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB2EDC;
	sub_82CD9798(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82cb2e90
	if (ctx.cr6.lt) goto loc_82CB2E90;
loc_82CB2EE8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb2ef8
	if (ctx.cr6.eq) goto loc_82CB2EF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e2af50
	ctx.lr = 0x82CB2EF8;
	sub_82E2AF50(ctx, base);
loc_82CB2EF8:
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x82e28e9c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB2F00"))) PPC_WEAK_FUNC(sub_82CB2F00);
PPC_FUNC_IMPL(__imp__sub_82CB2F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82cd4490
	ctx.lr = 0x82CB2F18;
	sub_82CD4490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2F28"))) PPC_WEAK_FUNC(sub_82CB2F28);
PPC_FUNC_IMPL(__imp__sub_82CB2F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cd9798
	ctx.lr = 0x82CB2F40;
	sub_82CD9798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB2F50"))) PPC_WEAK_FUNC(sub_82CB2F50);
PPC_FUNC_IMPL(__imp__sub_82CB2F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82cb2250
	ctx.lr = 0x82CB2F70;
	sub_82CB2250(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb2900
	ctx.lr = 0x82CB2F84;
	sub_82CB2900(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb1e00
	ctx.lr = 0x82CB2F90;
	sub_82CB1E00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb26c8
	ctx.lr = 0x82CB2F9C;
	sub_82CB26C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb27f0
	ctx.lr = 0x82CB2FA8;
	sub_82CB27F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb23e0
	ctx.lr = 0x82CB2FB4;
	sub_82CB23E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb2b48
	ctx.lr = 0x82CB2FC0;
	sub_82CB2B48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb24c0
	ctx.lr = 0x82CB2FCC;
	sub_82CB24C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb25f0
	ctx.lr = 0x82CB2FD8;
	sub_82CB25F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb2d50
	ctx.lr = 0x82CB2FE4;
	sub_82CB2D50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB3008"))) PPC_WEAK_FUNC(sub_82CB3008);
PPC_FUNC_IMPL(__imp__sub_82CB3008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e30
	ctx.lr = 0x82CB3010;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82e28f0c
	ctx.lr = 0x82CB3018;
	__savefpr_25(ctx, base);
	// addi r31,r1,-880
	ctx.r31.s64 = ctx.r1.s64 + -880;
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r18,r23
	ctx.r18.u64 = ctx.r23.u64;
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// lwz r10,128(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb36f4
	if (ctx.cr6.eq) goto loc_82CB36F4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r15,r11,-8272
	ctx.r15.s64 = ctx.r11.s64 + -8272;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r9,10922
	ctx.r9.s64 = 715784192;
	// li r16,12
	ctx.r16.s64 = 12;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// ori r21,r9,43691
	ctx.r21.u64 = ctx.r9.u64 | 43691;
	// lfs f31,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
loc_82CB3078:
	// lwz r11,128(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwzx r14,r10,r11
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwz r11,232(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 232);
	// lwz r7,228(r14)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r14.u32 + 228);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb36cc
	if (ctx.cr6.eq) goto loc_82CB36CC;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
loc_82CB30A8:
	// lwz r11,228(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 228);
	// lwzx r20,r11,r10
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cb369c
	if (ctx.cr6.eq) goto loc_82CB369C;
	// lwz r11,220(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 220);
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
	// lwz r8,216(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 216);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb369c
	if (ctx.cr6.eq) goto loc_82CB369C;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
loc_82CB30DC:
	// lwz r11,216(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 216);
	// lwzx r26,r11,r19
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb3118
	if (ctx.cr6.eq) goto loc_82CB3118;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CB30F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cb30f4
	if (!ctx.cr6.eq) goto loc_82CB30F4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb3674
	if (!ctx.cr6.eq) goto loc_82CB3674;
loc_82CB3118:
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r23,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r23.u32);
	// stw r23,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r23.u32);
	// stw r23,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r23.u32);
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// addi r11,r11,-30
	ctx.r11.s64 = ctx.r11.s64 + -30;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// bgt cr6,0x82cb3458
	if (ctx.cr6.gt) goto loc_82CB3458;
	// lis r12,-32053
	ctx.r12.s64 = -2100625408;
	// addi r12,r12,12652
	ctx.r12.s64 = ctx.r12.s64 + 12652;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CB3184;
	case 1:
		goto loc_82CB3458;
	case 2:
		goto loc_82CB3264;
	case 3:
		goto loc_82CB3308;
	case 4:
		goto loc_82CB3458;
	case 5:
		goto loc_82CB33C8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,12676(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12676);
	// lwz r22,13400(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13400);
	// lwz r22,12900(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12900);
	// lwz r22,13064(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13064);
	// lwz r22,13400(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13400);
	// lwz r22,13256(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13256);
loc_82CB3184:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r10,96(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb322c
	if (ctx.cr6.eq) goto loc_82CB322C;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82CB31A8:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// bne cr6,0x82cb31fc
	if (!ctx.cr6.eq) goto loc_82CB31FC;
	// lfs f0,108(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82cb31ec
	if (!ctx.cr6.eq) goto loc_82CB31EC;
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82cb31ec
	if (!ctx.cr6.eq) goto loc_82CB31EC;
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,116(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82cb31f0
	if (ctx.cr6.eq) goto loc_82CB31F0;
loc_82CB31EC:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82CB31F0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cb3220
	if (!ctx.cr6.eq) goto loc_82CB3220;
loc_82CB31FC:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,96(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cb31a8
	if (ctx.cr6.lt) goto loc_82CB31A8;
	// b 0x82cb322c
	goto loc_82CB322C;
loc_82CB3220:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
loc_82CB322C:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb3458
	if (!ctx.cr6.eq) goto loc_82CB3458;
	// addi r30,r26,108
	ctx.r30.s64 = ctx.r26.s64 + 108;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cdf040
	ctx.lr = 0x82CB3254;
	sub_82CDF040(ctx, base);
	// lfs f29,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// b 0x82cb3458
	goto loc_82CB3458;
loc_82CB3264:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r9,96(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb32d8
	if (ctx.cr6.eq) goto loc_82CB32D8;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82CB3288:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// bne cr6,0x82cb32a8
	if (!ctx.cr6.eq) goto loc_82CB32A8;
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82cb32cc
	if (ctx.cr6.eq) goto loc_82CB32CC;
loc_82CB32A8:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,96(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cb3288
	if (ctx.cr6.lt) goto loc_82CB3288;
	// b 0x82cb32d8
	goto loc_82CB32D8;
loc_82CB32CC:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
loc_82CB32D8:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb3458
	if (!ctx.cr6.eq) goto loc_82CB3458;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lfs f1,108(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82cdf990
	ctx.lr = 0x82CB3300;
	sub_82CDF990(ctx, base);
	// lfs f30,108(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82cb3458
	goto loc_82CB3458;
loc_82CB3308:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r9,96(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb338c
	if (ctx.cr6.eq) goto loc_82CB338C;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82CB332C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// bne cr6,0x82cb335c
	if (!ctx.cr6.eq) goto loc_82CB335C;
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82cb335c
	if (!ctx.cr6.eq) goto loc_82CB335C;
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82cb3380
	if (ctx.cr6.eq) goto loc_82CB3380;
loc_82CB335C:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,96(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cb332c
	if (ctx.cr6.lt) goto loc_82CB332C;
	// b 0x82cb338c
	goto loc_82CB338C;
loc_82CB3380:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
loc_82CB338C:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb3458
	if (!ctx.cr6.eq) goto loc_82CB3458;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lfs f2,112(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// lfs f1,108(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82cdf9f8
	ctx.lr = 0x82CB33BC;
	sub_82CDF9F8(ctx, base);
	// lfs f30,108(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	ctx.f30.f64 = double(temp.f32);
	// lfs f26,112(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	ctx.f26.f64 = double(temp.f32);
	// b 0x82cb3458
	goto loc_82CB3458;
loc_82CB33C8:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r25,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r25.u32);
	// stw r23,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r23.u32);
	// lwz r4,108(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// bl 0x82ce0140
	ctx.lr = 0x82CB33DC;
	sub_82CE0140(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82cb3458
	if (ctx.cr6.eq) goto loc_82CB3458;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulhw r11,r11,r21
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82cb3458
	if (ctx.cr0.eq) goto loc_82CB3458;
	// lwz r11,68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb3424
	if (ctx.cr6.eq) goto loc_82CB3424;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
	// b 0x82cb3458
	goto loc_82CB3458;
loc_82CB3424:
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulhw r11,r11,r21
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82cdf710
	ctx.lr = 0x82CB3458;
	sub_82CDF710(ctx, base);
loc_82CB3458:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb3644
	if (!ctx.cr6.eq) goto loc_82CB3644;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb3644
	if (ctx.cr6.eq) goto loc_82CB3644;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r16,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r16.u32);
	// stw r16,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r16.u32);
	// stw r23,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r23.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// bl 0x82545e80
	ctx.lr = 0x82CB34A0;
	sub_82545E80(ctx, base);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb34b8
	if (ctx.cr6.eq) goto loc_82CB34B8;
	// bl 0x82cc8518
	ctx.lr = 0x82CB34B0;
	sub_82CC8518(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82cb34bc
	goto loc_82CB34BC;
loc_82CB34B8:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82CB34BC:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82e2b400
	ctx.lr = 0x82CB34CC;
	sub_82E2B400(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB34D4;
	sub_82CB4A50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,120
	ctx.r5.s64 = ctx.r31.s64 + 120;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// stw r11,64(r26)
	PPC_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
	// stw r25,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r25.u32);
	// stw r23,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r23.u32);
	// bl 0x82cc03b0
	ctx.lr = 0x82CB34F8;
	sub_82CC03B0(ctx, base);
	// addi r30,r25,96
	ctx.r30.s64 = ctx.r25.s64 + 96;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82cb35b4
	if (ctx.cr6.gt) goto loc_82CB35B4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82cb3530
	if (!ctx.cr6.eq) goto loc_82CB3530;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// b 0x82cb3538
	goto loc_82CB3538;
loc_82CB3530:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82CB3538:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82cb35b4
	if (!ctx.cr6.lt) goto loc_82CB35B4;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e2afb0
	ctx.lr = 0x82CB354C;
	sub_82E2AFB0(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82cb357c
	if (ctx.cr6.eq) goto loc_82CB357C;
loc_82CB3564:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x82cb3564
	if (!ctx.cr6.eq) goto loc_82CB3564;
loc_82CB357C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb358c
	if (ctx.cr6.eq) goto loc_82CB358C;
	// bl 0x82e2af50
	ctx.lr = 0x82CB358C;
	sub_82E2AF50(ctx, base);
loc_82CB358C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r27,r29
	ctx.r10.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82CB35B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// stw r11,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r11.u32);
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// addi r11,r11,-30
	ctx.r11.s64 = ctx.r11.s64 + -30;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82cb3640
	if (ctx.cr6.gt) goto loc_82CB3640;
	// lis r12,-32053
	ctx.r12.s64 = -2100625408;
	// addi r12,r12,13816
	ctx.r12.s64 = ctx.r12.s64 + 13816;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CB3610;
	case 1:
		goto loc_82CB3640;
	case 2:
		goto loc_82CB3620;
	case 3:
		goto loc_82CB3628;
	case 4:
		goto loc_82CB3640;
	case 5:
		goto loc_82CB3634;
	default:
		__builtin_unreachable();
	}
	// lwz r22,13840(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13840);
	// lwz r22,13888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13888);
	// lwz r22,13856(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13856);
	// lwz r22,13864(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13864);
	// lwz r22,13888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13888);
	// lwz r22,13876(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13876);
loc_82CB3610:
	// stfs f29,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r28.u32 + 56, temp.u32);
	// stfs f28,60(r28)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r28.u32 + 60, temp.u32);
	// stfs f27,64(r28)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r28.u32 + 64, temp.u32);
	// b 0x82cb3640
	goto loc_82CB3640;
loc_82CB3620:
	// stfs f30,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 68, temp.u32);
	// b 0x82cb3640
	goto loc_82CB3640;
loc_82CB3628:
	// stfs f30,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 68, temp.u32);
	// stfs f26,72(r28)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r28.u32 + 72, temp.u32);
	// b 0x82cb3640
	goto loc_82CB3640;
loc_82CB3634:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82cb3640
	if (ctx.cr6.eq) goto loc_82CB3640;
	// stw r28,68(r24)
	PPC_STORE_U32(ctx.r24.u32 + 68, ctx.r28.u32);
loc_82CB3640:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
loc_82CB3644:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb3654
	if (ctx.cr6.eq) goto loc_82CB3654;
	// bl 0x82545ee8
	ctx.lr = 0x82CB3654;
	sub_82545EE8(ctx, base);
loc_82CB3654:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb3664
	if (ctx.cr6.eq) goto loc_82CB3664;
	// bl 0x82545ee8
	ctx.lr = 0x82CB3664;
	sub_82545EE8(ctx, base);
loc_82CB3664:
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r23,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r23.u32);
	// stw r23,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r23.u32);
	// stw r23,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r23.u32);
loc_82CB3674:
	// lwz r11,220(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 220);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// lwz r10,216(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 216);
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cb30dc
	if (ctx.cr6.lt) goto loc_82CB30DC;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
loc_82CB369C:
	// lwz r11,232(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 232);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,228(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 228);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cb30a8
	if (ctx.cr6.lt) goto loc_82CB30A8;
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
loc_82CB36CC:
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r9,128(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cb3078
	if (ctx.cr6.lt) goto loc_82CB3078;
loc_82CB36F4:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r1,r31,880
	ctx.r1.s64 = ctx.r31.s64 + 880;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82e28f58
	ctx.lr = 0x82CB3704;
	__restfpr_25(ctx, base);
	// b 0x82e28e80
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB3708"))) PPC_WEAK_FUNC(sub_82CB3708);
PPC_FUNC_IMPL(__imp__sub_82CB3708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-880
	ctx.r31.s64 = ctx.r12.s64 + -880;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82cb49f0
	ctx.lr = 0x82CB3720;
	sub_82CB49F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB3730"))) PPC_WEAK_FUNC(sub_82CB3730);
PPC_FUNC_IMPL(__imp__sub_82CB3730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-880
	ctx.r31.s64 = ctx.r12.s64 + -880;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x82545ee8
	ctx.lr = 0x82CB3748;
	sub_82545EE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB3760"))) PPC_WEAK_FUNC(sub_82CB3760);
PPC_FUNC_IMPL(__imp__sub_82CB3760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e30
	ctx.lr = 0x82CB3768;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82e28f04
	ctx.lr = 0x82CB3770;
	__savefpr_23(ctx, base);
	// addi r31,r1,-1520
	ctx.r31.s64 = ctx.r1.s64 + -1520;
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31966
	ctx.r25.s64 = -2094923776;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r5.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-8248
	ctx.r11.s64 = ctx.r11.s64 + -8248;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bne cr6,0x82cb37b8
	if (!ctx.cr6.eq) goto loc_82CB37B8;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb1190
	ctx.lr = 0x82CB37B4;
	sub_82CB1190(ctx, base);
	// stw r3,-32172(r25)
	PPC_STORE_U32(ctx.r25.u32 + -32172, ctx.r3.u32);
loc_82CB37B8:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB37CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb41b4
	if (ctx.cr6.eq) goto loc_82CB41B4;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB37EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb41b4
	if (ctx.cr6.eq) goto loc_82CB41B4;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB380C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb41b4
	if (ctx.cr6.eq) goto loc_82CB41B4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r19,r11,9288
	ctx.r19.s64 = ctx.r11.s64 + 9288;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r18,r11,9264
	ctx.r18.s64 = ctx.r11.s64 + 9264;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r17,r11,-21020
	ctx.r17.s64 = ctx.r11.s64 + -21020;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-22380
	ctx.r11.s64 = ctx.r11.s64 + -22380;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f29,-13880(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -13880);
	ctx.f29.f64 = double(temp.f32);
	// li r23,8
	ctx.r23.s64 = 8;
	// li r21,1
	ctx.r21.s64 = 1;
	// lfs f30,-13896(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13896);
	ctx.f30.f64 = double(temp.f32);
	// li r14,5
	ctx.r14.s64 = 5;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f31,-13892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// addi r16,r11,-21032
	ctx.r16.s64 = ctx.r11.s64 + -21032;
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// ori r15,r11,43691
	ctx.r15.u64 = ctx.r11.u64 | 43691;
loc_82CB387C:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cb419c
	if (!ctx.cr6.eq) goto loc_82CB419C;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f31.f64;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// li r24,93
	ctx.r24.s64 = 93;
	// fmr f24,f31
	ctx.f24.f64 = ctx.f31.f64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB38E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82cb3f2c
	if (ctx.cr6.gt) goto loc_82CB3F2C;
	// lis r12,-32053
	ctx.r12.s64 = -2100625408;
	// addi r12,r12,14596
	ctx.r12.s64 = ctx.r12.s64 + 14596;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CB3AA8;
	case 1:
		goto loc_82CB3918;
	case 2:
		goto loc_82CB3BF4;
	case 3:
		goto loc_82CB3F2C;
	case 4:
		goto loc_82CB3D68;
	default:
		__builtin_unreachable();
	}
	// lwz r22,15016(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15016);
	// lwz r22,14616(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14616);
	// lwz r22,15348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15348);
	// lwz r22,16172(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16172);
	// lwz r22,15720(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15720);
loc_82CB3918:
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f31,156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// li r24,30
	ctx.r24.s64 = 30;
	// stfs f31,160(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r16,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r16.u32);
	// stfs f30,168(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stw r23,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r23.u32);
	// stfs f31,172(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stfs f31,176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// sth r30,204(r31)
	PPC_STORE_U16(ctx.r31.u32 + 204, ctx.r30.u16);
	// stfs f31,180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// sth r30,206(r31)
	PPC_STORE_U16(ctx.r31.u32 + 206, ctx.r30.u16);
	// stfs f30,184(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stfs f31,196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stfs f31,192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stfs f31,188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stfs f29,220(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stfs f30,212(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stfs f29,216(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stfs f31,256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f31,252(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f31,248(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB39B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cb3a6c
	if (ctx.cr6.eq) goto loc_82CB3A6C;
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lfs f13,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
loc_82CB39E4:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// bne cr6,0x82cb3a2c
	if (!ctx.cr6.eq) goto loc_82CB3A2C;
	// lfs f11,56(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82cb3a1c
	if (!ctx.cr6.eq) goto loc_82CB3A1C;
	// lfs f11,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bne cr6,0x82cb3a1c
	if (!ctx.cr6.eq) goto loc_82CB3A1C;
	// lfs f11,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x82cb3a20
	if (ctx.cr6.eq) goto loc_82CB3A20;
loc_82CB3A1C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82CB3A20:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cb3a50
	if (!ctx.cr6.eq) goto loc_82CB3A50;
loc_82CB3A2C:
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82cb39e4
	if (ctx.cr6.lt) goto loc_82CB39E4;
	// b 0x82cb3a6c
	goto loc_82CB3A6C;
loc_82CB3A50:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_82CB3A6C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb3a9c
	if (!ctx.cr6.eq) goto loc_82CB3A9C;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// lwz r7,1556(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// bl 0x82cdf040
	ctx.lr = 0x82CB3A90;
	sub_82CDF040(ctx, base);
	// lfs f26,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f24.f64 = double(temp.f32);
loc_82CB3A9C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// b 0x82cb3f2c
	goto loc_82CB3F2C;
loc_82CB3AA8:
	// stfs f30,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// li r24,32
	ctx.r24.s64 = 32;
	// stfs f31,476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stfs f31,480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stw r21,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r21.u32);
	// stfs f31,484(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stw r17,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r17.u32);
	// stfs f30,488(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stw r23,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r23.u32);
	// stfs f31,492(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// sth r30,524(r31)
	PPC_STORE_U16(ctx.r31.u32 + 524, ctx.r30.u16);
	// stfs f31,496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// sth r30,526(r31)
	PPC_STORE_U16(ctx.r31.u32 + 526, ctx.r30.u16);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stfs f30,504(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stfs f31,516(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stfs f31,512(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stfs f31,508(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// stfs f29,540(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stfs f30,532(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stfs f29,536(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stfs f30,568(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,464
	ctx.r4.s64 = ctx.r31.s64 + 464;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82cb3bbc
	if (ctx.cr6.eq) goto loc_82CB3BBC;
	// lfs f0,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_82CB3B60:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// bne cr6,0x82cb3b7c
	if (!ctx.cr6.eq) goto loc_82CB3B7C;
	// lfs f13,68(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cb3ba0
	if (ctx.cr6.eq) goto loc_82CB3BA0;
loc_82CB3B7C:
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82cb3b60
	if (ctx.cr6.lt) goto loc_82CB3B60;
	// b 0x82cb3bbc
	goto loc_82CB3BBC;
loc_82CB3BA0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_82CB3BBC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb3be8
	if (!ctx.cr6.eq) goto loc_82CB3BE8;
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// lwz r8,1556(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f1.f64 = double(temp.f32);
	// li r4,16
	ctx.r4.s64 = 16;
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// bl 0x82cdf990
	ctx.lr = 0x82CB3BE4;
	sub_82CDF990(ctx, base);
	// lfs f28,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f28.f64 = double(temp.f32);
loc_82CB3BE8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// b 0x82cb3f2c
	goto loc_82CB3F2C;
loc_82CB3BF4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f30,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f31,284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// li r24,33
	ctx.r24.s64 = 33;
	// stfs f31,288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stfs f31,292(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stw r18,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r18.u32);
	// stfs f30,296(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stw r23,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r23.u32);
	// stfs f31,300(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stfs f31,304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// sth r30,332(r31)
	PPC_STORE_U16(ctx.r31.u32 + 332, ctx.r30.u16);
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// sth r30,334(r31)
	PPC_STORE_U16(ctx.r31.u32 + 334, ctx.r30.u16);
	// stfs f30,312(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stfs f31,324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stfs f31,320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stfs f31,316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stfs f29,348(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stfs f30,340(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stfs f29,344(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stfs f30,376(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stfs f30,380(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82cb3d24
	if (ctx.cr6.eq) goto loc_82CB3D24;
	// lfs f0,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lfs f13,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f13.f64 = double(temp.f32);
loc_82CB3CBC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// bne cr6,0x82cb3ce4
	if (!ctx.cr6.eq) goto loc_82CB3CE4;
	// lfs f12,68(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82cb3ce4
	if (!ctx.cr6.eq) goto loc_82CB3CE4;
	// lfs f12,72(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82cb3d08
	if (ctx.cr6.eq) goto loc_82CB3D08;
loc_82CB3CE4:
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82cb3cbc
	if (ctx.cr6.lt) goto loc_82CB3CBC;
	// b 0x82cb3d24
	goto loc_82CB3D24;
loc_82CB3D08:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_82CB3D24:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb3d5c
	if (!ctx.cr6.eq) goto loc_82CB3D5C;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// lwz r10,1556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f2.f64 = double(temp.f32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lfs f1,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// bl 0x82cdf9f8
	ctx.lr = 0x82CB3D54;
	sub_82CDF9F8(ctx, base);
	// lfs f28,376(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f27.f64 = double(temp.f32);
loc_82CB3D5C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// b 0x82cb3f2c
	goto loc_82CB3F2C;
loc_82CB3D68:
	// stfs f30,584(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// li r24,35
	ctx.r24.s64 = 35;
	// stfs f31,588(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stw r14,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r14.u32);
	// stfs f31,592(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stw r19,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r19.u32);
	// stfs f31,596(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stw r23,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r23.u32);
	// stfs f30,600(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// sth r30,636(r31)
	PPC_STORE_U16(ctx.r31.u32 + 636, ctx.r30.u16);
	// stfs f31,604(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// sth r30,638(r31)
	PPC_STORE_U16(ctx.r31.u32 + 638, ctx.r30.u16);
	// stfs f31,608(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// stfs f31,612(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// stfs f30,616(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// stfs f31,628(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// stfs f31,624(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// stfs f31,620(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// stfs f29,652(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 652, temp.u32);
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// stfs f30,644(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// stfs f29,648(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,576
	ctx.r4.s64 = ctx.r31.s64 + 576;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// lwz r7,680(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82cb3e84
	if (ctx.cr6.eq) goto loc_82CB3E84;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_82CB3E24:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,52(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r6,35
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 35, ctx.xer);
	// bne cr6,0x82cb3e40
	if (!ctx.cr6.eq) goto loc_82CB3E40;
	// lwz r6,76(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82cb3e64
	if (ctx.cr6.eq) goto loc_82CB3E64;
loc_82CB3E40:
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82cb3e24
	if (ctx.cr6.lt) goto loc_82CB3E24;
	// b 0x82cb3e84
	goto loc_82CB3E84;
loc_82CB3E64:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_82CB3E84:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cb3f24
	if (!ctx.cr6.eq) goto loc_82CB3F24;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x82cc7d48
	ctx.lr = 0x82CB3EA0;
	sub_82CC7D48(ctx, base);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r31,136
	ctx.r5.s64 = ctx.r31.s64 + 136;
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82cc0220
	ctx.lr = 0x82CB3EE4;
	sub_82CC0220(ctx, base);
	// lwz r4,712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mulhw r11,r11,r15
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb3f1c
	if (ctx.cr6.eq) goto loc_82CB3F1C;
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// lwz r8,1556(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82cdf710
	ctx.lr = 0x82CB3F1C;
	sub_82CDF710(ctx, base);
loc_82CB3F1C:
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82cc7d90
	ctx.lr = 0x82CB3F24;
	sub_82CC7D90(ctx, base);
loc_82CB3F24:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
loc_82CB3F2C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb4164
	if (!ctx.cr6.eq) goto loc_82CB4164;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb4164
	if (ctx.cr6.eq) goto loc_82CB4164;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// bl 0x82545e80
	ctx.lr = 0x82CB3F78;
	sub_82545E80(ctx, base);
	// stw r3,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb3f90
	if (ctx.cr6.eq) goto loc_82CB3F90;
	// bl 0x82cc8518
	ctx.lr = 0x82CB3F88;
	sub_82CC8518(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82cb3f94
	goto loc_82CB3F94;
loc_82CB3F90:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82CB3F94:
	// clrlwi r5,r26,24
	ctx.r5.u64 = ctx.r26.u32 & 0xFF;
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82e2b400
	ctx.lr = 0x82CB3FA4;
	sub_82E2B400(ctx, base);
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB3FAC;
	sub_82CB4A50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r4,r31,432
	ctx.r4.s64 = ctx.r31.s64 + 432;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82cc03b0
	ctx.lr = 0x82CB3FD0;
	sub_82CC03B0(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3FE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,432
	ctx.r4.s64 = ctx.r31.s64 + 432;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB4008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r4,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r4.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB4024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// addi r29,r11,96
	ctx.r29.s64 = ctx.r11.s64 + 96;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82cb40e4
	if (ctx.cr6.gt) goto loc_82CB40E4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82cb4060
	if (!ctx.cr6.eq) goto loc_82CB4060;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82cb4068
	goto loc_82CB4068;
loc_82CB4060:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82CB4068:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82cb40e4
	if (!ctx.cr6.lt) goto loc_82CB40E4;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e2afb0
	ctx.lr = 0x82CB407C;
	sub_82E2AFB0(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82cb40ac
	if (ctx.cr6.eq) goto loc_82CB40AC;
loc_82CB4094:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x82cb4094
	if (!ctx.cr6.eq) goto loc_82CB4094;
loc_82CB40AC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb40bc
	if (ctx.cr6.eq) goto loc_82CB40BC;
	// bl 0x82e2af50
	ctx.lr = 0x82CB40BC;
	sub_82E2AF50(ctx, base);
loc_82CB40BC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_82CB40E4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r24,-30
	ctx.r11.s64 = ctx.r24.s64 + -30;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r24,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r24.u32);
	// bgt cr6,0x82cb4160
	if (ctx.cr6.gt) goto loc_82CB4160;
	// lis r12,-32053
	ctx.r12.s64 = -2100625408;
	// addi r12,r12,16672
	ctx.r12.s64 = ctx.r12.s64 + 16672;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CB4138;
	case 1:
		goto loc_82CB4160;
	case 2:
		goto loc_82CB4148;
	case 3:
		goto loc_82CB4150;
	case 4:
		goto loc_82CB4160;
	case 5:
		goto loc_82CB415C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,16696(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16696);
	// lwz r22,16736(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16736);
	// lwz r22,16712(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16712);
	// lwz r22,16720(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16720);
	// lwz r22,16736(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16736);
	// lwz r22,16732(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16732);
loc_82CB4138:
	// stfs f26,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r28.u32 + 56, temp.u32);
	// stfs f25,60(r28)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r28.u32 + 60, temp.u32);
	// stfs f24,64(r28)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r28.u32 + 64, temp.u32);
	// b 0x82cb4160
	goto loc_82CB4160;
loc_82CB4148:
	// stfs f28,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r28.u32 + 68, temp.u32);
	// b 0x82cb4160
	goto loc_82CB4160;
loc_82CB4150:
	// stfs f28,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r28.u32 + 68, temp.u32);
	// stfs f27,72(r28)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r28.u32 + 72, temp.u32);
	// b 0x82cb4160
	goto loc_82CB4160;
loc_82CB415C:
	// stw r22,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r22.u32);
loc_82CB4160:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_82CB4164:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb4174
	if (ctx.cr6.eq) goto loc_82CB4174;
	// bl 0x82545ee8
	ctx.lr = 0x82CB4174;
	sub_82545EE8(ctx, base);
loc_82CB4174:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb4184
	if (ctx.cr6.eq) goto loc_82CB4184;
	// bl 0x82545ee8
	ctx.lr = 0x82CB4184;
	sub_82545EE8(ctx, base);
loc_82CB4184:
	// lwz r28,116(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r27,112(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
loc_82CB419C:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// bne cr6,0x82cb387c
	if (!ctx.cr6.eq) goto loc_82CB387C;
loc_82CB41B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r31,1520
	ctx.r1.s64 = ctx.r31.s64 + 1520;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82e28f50
	ctx.lr = 0x82CB41C4;
	__restfpr_23(ctx, base);
	// b 0x82e28e80
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB3768"))) PPC_WEAK_FUNC(sub_82CB3768);
PPC_FUNC_IMPL(__imp__sub_82CB3768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82e28f04
	ctx.lr = 0x82CB3770;
	__savefpr_23(ctx, base);
	// addi r31,r1,-1520
	ctx.r31.s64 = ctx.r1.s64 + -1520;
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31966
	ctx.r25.s64 = -2094923776;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r5.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,-8248
	ctx.r11.s64 = ctx.r11.s64 + -8248;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// bne cr6,0x82cb37b8
	if (!ctx.cr6.eq) goto loc_82CB37B8;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb1190
	ctx.lr = 0x82CB37B4;
	sub_82CB1190(ctx, base);
	// stw r3,-32172(r25)
	PPC_STORE_U32(ctx.r25.u32 + -32172, ctx.r3.u32);
loc_82CB37B8:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB37CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb41b4
	if (ctx.cr6.eq) goto loc_82CB41B4;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB37EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb41b4
	if (ctx.cr6.eq) goto loc_82CB41B4;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB380C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb41b4
	if (ctx.cr6.eq) goto loc_82CB41B4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r19,r11,9288
	ctx.r19.s64 = ctx.r11.s64 + 9288;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r18,r11,9264
	ctx.r18.s64 = ctx.r11.s64 + 9264;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r17,r11,-21020
	ctx.r17.s64 = ctx.r11.s64 + -21020;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-22380
	ctx.r11.s64 = ctx.r11.s64 + -22380;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f29,-13880(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -13880);
	ctx.f29.f64 = double(temp.f32);
	// li r23,8
	ctx.r23.s64 = 8;
	// li r21,1
	ctx.r21.s64 = 1;
	// lfs f30,-13896(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13896);
	ctx.f30.f64 = double(temp.f32);
	// li r14,5
	ctx.r14.s64 = 5;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f31,-13892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// addi r16,r11,-21032
	ctx.r16.s64 = ctx.r11.s64 + -21032;
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// ori r15,r11,43691
	ctx.r15.u64 = ctx.r11.u64 | 43691;
loc_82CB387C:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cb419c
	if (!ctx.cr6.eq) goto loc_82CB419C;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f31.f64;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// li r24,93
	ctx.r24.s64 = 93;
	// fmr f24,f31
	ctx.f24.f64 = ctx.f31.f64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB38E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82cb3f2c
	if (ctx.cr6.gt) goto loc_82CB3F2C;
	// lis r12,-32053
	ctx.r12.s64 = -2100625408;
	// addi r12,r12,14596
	ctx.r12.s64 = ctx.r12.s64 + 14596;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CB3AA8;
	case 1:
		goto loc_82CB3918;
	case 2:
		goto loc_82CB3BF4;
	case 3:
		goto loc_82CB3F2C;
	case 4:
		goto loc_82CB3D68;
	default:
		__builtin_unreachable();
	}
	// lwz r22,15016(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15016);
	// lwz r22,14616(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14616);
	// lwz r22,15348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15348);
	// lwz r22,16172(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16172);
	// lwz r22,15720(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15720);
loc_82CB3918:
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f30,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f31,156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// li r24,30
	ctx.r24.s64 = 30;
	// stfs f31,160(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stfs f31,164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r16,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r16.u32);
	// stfs f30,168(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stw r23,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r23.u32);
	// stfs f31,172(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stfs f31,176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// sth r30,204(r31)
	PPC_STORE_U16(ctx.r31.u32 + 204, ctx.r30.u16);
	// stfs f31,180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// sth r30,206(r31)
	PPC_STORE_U16(ctx.r31.u32 + 206, ctx.r30.u16);
	// stfs f30,184(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stfs f31,196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stfs f31,192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stfs f31,188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stfs f29,220(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stfs f30,212(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stfs f29,216(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stfs f31,256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stfs f31,252(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f31,248(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB39B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cb3a6c
	if (ctx.cr6.eq) goto loc_82CB3A6C;
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lfs f13,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
loc_82CB39E4:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// bne cr6,0x82cb3a2c
	if (!ctx.cr6.eq) goto loc_82CB3A2C;
	// lfs f11,56(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82cb3a1c
	if (!ctx.cr6.eq) goto loc_82CB3A1C;
	// lfs f11,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bne cr6,0x82cb3a1c
	if (!ctx.cr6.eq) goto loc_82CB3A1C;
	// lfs f11,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x82cb3a20
	if (ctx.cr6.eq) goto loc_82CB3A20;
loc_82CB3A1C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82CB3A20:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cb3a50
	if (!ctx.cr6.eq) goto loc_82CB3A50;
loc_82CB3A2C:
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82cb39e4
	if (ctx.cr6.lt) goto loc_82CB39E4;
	// b 0x82cb3a6c
	goto loc_82CB3A6C;
loc_82CB3A50:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_82CB3A6C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb3a9c
	if (!ctx.cr6.eq) goto loc_82CB3A9C;
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// lwz r7,1556(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// bl 0x82cdf040
	ctx.lr = 0x82CB3A90;
	sub_82CDF040(ctx, base);
	// lfs f26,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f24.f64 = double(temp.f32);
loc_82CB3A9C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// b 0x82cb3f2c
	goto loc_82CB3F2C;
loc_82CB3AA8:
	// stfs f30,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// li r24,32
	ctx.r24.s64 = 32;
	// stfs f31,476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stfs f31,480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stw r21,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r21.u32);
	// stfs f31,484(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stw r17,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r17.u32);
	// stfs f30,488(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stw r23,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r23.u32);
	// stfs f31,492(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// sth r30,524(r31)
	PPC_STORE_U16(ctx.r31.u32 + 524, ctx.r30.u16);
	// stfs f31,496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// sth r30,526(r31)
	PPC_STORE_U16(ctx.r31.u32 + 526, ctx.r30.u16);
	// stfs f31,500(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stfs f30,504(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stfs f31,516(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stfs f31,512(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stfs f31,508(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// stfs f29,540(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stfs f30,532(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stfs f29,536(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stfs f30,568(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,464
	ctx.r4.s64 = ctx.r31.s64 + 464;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82cb3bbc
	if (ctx.cr6.eq) goto loc_82CB3BBC;
	// lfs f0,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_82CB3B60:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// bne cr6,0x82cb3b7c
	if (!ctx.cr6.eq) goto loc_82CB3B7C;
	// lfs f13,68(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82cb3ba0
	if (ctx.cr6.eq) goto loc_82CB3BA0;
loc_82CB3B7C:
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82cb3b60
	if (ctx.cr6.lt) goto loc_82CB3B60;
	// b 0x82cb3bbc
	goto loc_82CB3BBC;
loc_82CB3BA0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_82CB3BBC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb3be8
	if (!ctx.cr6.eq) goto loc_82CB3BE8;
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// lwz r8,1556(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f1.f64 = double(temp.f32);
	// li r4,16
	ctx.r4.s64 = 16;
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// bl 0x82cdf990
	ctx.lr = 0x82CB3BE4;
	sub_82CDF990(ctx, base);
	// lfs f28,568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f28.f64 = double(temp.f32);
loc_82CB3BE8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// b 0x82cb3f2c
	goto loc_82CB3F2C;
loc_82CB3BF4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f30,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f31,284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// li r24,33
	ctx.r24.s64 = 33;
	// stfs f31,288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stfs f31,292(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stw r18,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r18.u32);
	// stfs f30,296(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stw r23,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r23.u32);
	// stfs f31,300(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stfs f31,304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// sth r30,332(r31)
	PPC_STORE_U16(ctx.r31.u32 + 332, ctx.r30.u16);
	// stfs f31,308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// sth r30,334(r31)
	PPC_STORE_U16(ctx.r31.u32 + 334, ctx.r30.u16);
	// stfs f30,312(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stfs f31,324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stfs f31,320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stfs f31,316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stfs f29,348(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stfs f30,340(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stfs f29,344(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stfs f30,376(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stfs f30,380(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82cb3d24
	if (ctx.cr6.eq) goto loc_82CB3D24;
	// lfs f0,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lfs f13,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f13.f64 = double(temp.f32);
loc_82CB3CBC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// bne cr6,0x82cb3ce4
	if (!ctx.cr6.eq) goto loc_82CB3CE4;
	// lfs f12,68(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82cb3ce4
	if (!ctx.cr6.eq) goto loc_82CB3CE4;
	// lfs f12,72(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82cb3d08
	if (ctx.cr6.eq) goto loc_82CB3D08;
loc_82CB3CE4:
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82cb3cbc
	if (ctx.cr6.lt) goto loc_82CB3CBC;
	// b 0x82cb3d24
	goto loc_82CB3D24;
loc_82CB3D08:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_82CB3D24:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb3d5c
	if (!ctx.cr6.eq) goto loc_82CB3D5C;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// lwz r10,1556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f2.f64 = double(temp.f32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lfs f1,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// bl 0x82cdf9f8
	ctx.lr = 0x82CB3D54;
	sub_82CDF9F8(ctx, base);
	// lfs f28,376(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f27.f64 = double(temp.f32);
loc_82CB3D5C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// b 0x82cb3f2c
	goto loc_82CB3F2C;
loc_82CB3D68:
	// stfs f30,584(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// li r24,35
	ctx.r24.s64 = 35;
	// stfs f31,588(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stw r14,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r14.u32);
	// stfs f31,592(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stw r19,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r19.u32);
	// stfs f31,596(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stw r23,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r23.u32);
	// stfs f30,600(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// sth r30,636(r31)
	PPC_STORE_U16(ctx.r31.u32 + 636, ctx.r30.u16);
	// stfs f31,604(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// sth r30,638(r31)
	PPC_STORE_U16(ctx.r31.u32 + 638, ctx.r30.u16);
	// stfs f31,608(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// stfs f31,612(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// stfs f30,616(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// stfs f31,628(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// stfs f31,624(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// stfs f31,620(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// stfs f29,652(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 652, temp.u32);
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// stfs f30,644(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// stfs f29,648(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,576
	ctx.r4.s64 = ctx.r31.s64 + 576;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// lwz r7,680(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82cb3e84
	if (ctx.cr6.eq) goto loc_82CB3E84;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_82CB3E24:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,52(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r6,35
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 35, ctx.xer);
	// bne cr6,0x82cb3e40
	if (!ctx.cr6.eq) goto loc_82CB3E40;
	// lwz r6,76(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82cb3e64
	if (ctx.cr6.eq) goto loc_82CB3E64;
loc_82CB3E40:
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82cb3e24
	if (ctx.cr6.lt) goto loc_82CB3E24;
	// b 0x82cb3e84
	goto loc_82CB3E84;
loc_82CB3E64:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_82CB3E84:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82cb3f24
	if (!ctx.cr6.eq) goto loc_82CB3F24;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x82cc7d48
	ctx.lr = 0x82CB3EA0;
	sub_82CC7D48(ctx, base);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r31,136
	ctx.r5.s64 = ctx.r31.s64 + 136;
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82cc0220
	ctx.lr = 0x82CB3EE4;
	sub_82CC0220(ctx, base);
	// lwz r4,712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mulhw r11,r11,r15
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb3f1c
	if (ctx.cr6.eq) goto loc_82CB3F1C;
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// lwz r8,1556(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82cdf710
	ctx.lr = 0x82CB3F1C;
	sub_82CDF710(ctx, base);
loc_82CB3F1C:
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82cc7d90
	ctx.lr = 0x82CB3F24;
	sub_82CC7D90(ctx, base);
loc_82CB3F24:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
loc_82CB3F2C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb4164
	if (!ctx.cr6.eq) goto loc_82CB4164;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb4164
	if (ctx.cr6.eq) goto loc_82CB4164;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// bl 0x82545e80
	ctx.lr = 0x82CB3F78;
	sub_82545E80(ctx, base);
	// stw r3,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb3f90
	if (ctx.cr6.eq) goto loc_82CB3F90;
	// bl 0x82cc8518
	ctx.lr = 0x82CB3F88;
	sub_82CC8518(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82cb3f94
	goto loc_82CB3F94;
loc_82CB3F90:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82CB3F94:
	// clrlwi r5,r26,24
	ctx.r5.u64 = ctx.r26.u32 & 0xFF;
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82e2b400
	ctx.lr = 0x82CB3FA4;
	sub_82E2B400(ctx, base);
	// addi r3,r31,784
	ctx.r3.s64 = ctx.r31.s64 + 784;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB3FAC;
	sub_82CB4A50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r4,r31,432
	ctx.r4.s64 = ctx.r31.s64 + 432;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82cc03b0
	ctx.lr = 0x82CB3FD0;
	sub_82CC03B0(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3FE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB3FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,432
	ctx.r4.s64 = ctx.r31.s64 + 432;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB4008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r4,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r4.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB4024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32172);
	// addi r29,r11,96
	ctx.r29.s64 = ctx.r11.s64 + 96;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82cb40e4
	if (ctx.cr6.gt) goto loc_82CB40E4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82cb4060
	if (!ctx.cr6.eq) goto loc_82CB4060;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82cb4068
	goto loc_82CB4068;
loc_82CB4060:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82CB4068:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82cb40e4
	if (!ctx.cr6.lt) goto loc_82CB40E4;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e2afb0
	ctx.lr = 0x82CB407C;
	sub_82E2AFB0(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82cb40ac
	if (ctx.cr6.eq) goto loc_82CB40AC;
loc_82CB4094:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x82cb4094
	if (!ctx.cr6.eq) goto loc_82CB4094;
loc_82CB40AC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb40bc
	if (ctx.cr6.eq) goto loc_82CB40BC;
	// bl 0x82e2af50
	ctx.lr = 0x82CB40BC;
	sub_82E2AF50(ctx, base);
loc_82CB40BC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_82CB40E4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r24,-30
	ctx.r11.s64 = ctx.r24.s64 + -30;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r24,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r24.u32);
	// bgt cr6,0x82cb4160
	if (ctx.cr6.gt) goto loc_82CB4160;
	// lis r12,-32053
	ctx.r12.s64 = -2100625408;
	// addi r12,r12,16672
	ctx.r12.s64 = ctx.r12.s64 + 16672;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CB4138;
	case 1:
		goto loc_82CB4160;
	case 2:
		goto loc_82CB4148;
	case 3:
		goto loc_82CB4150;
	case 4:
		goto loc_82CB4160;
	case 5:
		goto loc_82CB415C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,16696(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16696);
	// lwz r22,16736(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16736);
	// lwz r22,16712(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16712);
	// lwz r22,16720(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16720);
	// lwz r22,16736(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16736);
	// lwz r22,16732(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16732);
loc_82CB4138:
	// stfs f26,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r28.u32 + 56, temp.u32);
	// stfs f25,60(r28)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r28.u32 + 60, temp.u32);
	// stfs f24,64(r28)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r28.u32 + 64, temp.u32);
	// b 0x82cb4160
	goto loc_82CB4160;
loc_82CB4148:
	// stfs f28,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r28.u32 + 68, temp.u32);
	// b 0x82cb4160
	goto loc_82CB4160;
loc_82CB4150:
	// stfs f28,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r28.u32 + 68, temp.u32);
	// stfs f27,72(r28)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r28.u32 + 72, temp.u32);
	// b 0x82cb4160
	goto loc_82CB4160;
loc_82CB415C:
	// stw r22,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r22.u32);
loc_82CB4160:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_82CB4164:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb4174
	if (ctx.cr6.eq) goto loc_82CB4174;
	// bl 0x82545ee8
	ctx.lr = 0x82CB4174;
	sub_82545EE8(ctx, base);
loc_82CB4174:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb4184
	if (ctx.cr6.eq) goto loc_82CB4184;
	// bl 0x82545ee8
	ctx.lr = 0x82CB4184;
	sub_82545EE8(ctx, base);
loc_82CB4184:
	// lwz r28,116(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r27,112(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
loc_82CB419C:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// bne cr6,0x82cb387c
	if (!ctx.cr6.eq) goto loc_82CB387C;
loc_82CB41B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r31,1520
	ctx.r1.s64 = ctx.r31.s64 + 1520;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82e28f50
	ctx.lr = 0x82CB41C4;
	__restfpr_23(ctx, base);
	// b 0x82e28e80
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB41C8"))) PPC_WEAK_FUNC(sub_82CB41C8);
PPC_FUNC_IMPL(__imp__sub_82CB41C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82cb49f0
	ctx.lr = 0x82CB41E0;
	sub_82CB49F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB41F0"))) PPC_WEAK_FUNC(sub_82CB41F0);
PPC_FUNC_IMPL(__imp__sub_82CB41F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82884e70
	ctx.lr = 0x82CB4208;
	sub_82884E70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4218"))) PPC_WEAK_FUNC(sub_82CB4218);
PPC_FUNC_IMPL(__imp__sub_82CB4218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// bl 0x82884e70
	ctx.lr = 0x82CB4230;
	sub_82884E70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4240"))) PPC_WEAK_FUNC(sub_82CB4240);
PPC_FUNC_IMPL(__imp__sub_82CB4240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x82884e70
	ctx.lr = 0x82CB4258;
	sub_82884E70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4268"))) PPC_WEAK_FUNC(sub_82CB4268);
PPC_FUNC_IMPL(__imp__sub_82CB4268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x82884e70
	ctx.lr = 0x82CB4280;
	sub_82884E70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4290"))) PPC_WEAK_FUNC(sub_82CB4290);
PPC_FUNC_IMPL(__imp__sub_82CB4290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,704
	ctx.r3.s64 = ctx.r31.s64 + 704;
	// bl 0x82cc7d90
	ctx.lr = 0x82CB42A8;
	sub_82CC7D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB42B8"))) PPC_WEAK_FUNC(sub_82CB42B8);
PPC_FUNC_IMPL(__imp__sub_82CB42B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1520
	ctx.r31.s64 = ctx.r12.s64 + -1520;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// bl 0x82545ee8
	ctx.lr = 0x82CB42D0;
	sub_82545EE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB42E8"))) PPC_WEAK_FUNC(sub_82CB42E8);
PPC_FUNC_IMPL(__imp__sub_82CB42E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82CB42F0;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-896
	ctx.r31.s64 = ctx.r1.s64 + -896;
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r27,r11,-8360
	ctx.r27.s64 = ctx.r11.s64 + -8360;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82cb84c8
	ctx.lr = 0x82CB431C;
	sub_82CB84C8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb4418
	if (ctx.cr6.eq) goto loc_82CB4418;
	// bl 0x82cb80d0
	ctx.lr = 0x82CB4328;
	sub_82CB80D0(ctx, base);
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x82cb4344
	if (!ctx.cr6.eq) goto loc_82CB4344;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cec180
	ctx.lr = 0x82CB4340;
	sub_82CEC180(ctx, base);
	// b 0x82cb4428
	goto loc_82CB4428;
loc_82CB4344:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// addi r6,r27,-36
	ctx.r6.s64 = ctx.r27.s64 + -36;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82ce58d0
	ctx.lr = 0x82CB4368;
	sub_82CE58D0(ctx, base);
	// lbz r11,254(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 254);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb440c
	if (ctx.cr6.eq) goto loc_82CB440C;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x82545e80
	ctx.lr = 0x82CB437C;
	sub_82545E80(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb4394
	if (ctx.cr6.eq) goto loc_82CB4394;
	// bl 0x82cccc18
	ctx.lr = 0x82CB438C;
	sub_82CCCC18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82cb4398
	goto loc_82CB4398;
loc_82CB4394:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CB4398:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// bl 0x82cd28e8
	ctx.lr = 0x82CB43AC;
	sub_82CD28E8(ctx, base);
	// lbz r11,254(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 254);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb43e4
	if (!ctx.cr6.eq) goto loc_82CB43E4;
	// addi r3,r27,-32
	ctx.r3.s64 = ctx.r27.s64 + -32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cb4d20
	ctx.lr = 0x82CB43C4;
	sub_82CB4D20(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb43dc
	if (ctx.cr6.eq) goto loc_82CB43DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd1e58
	ctx.lr = 0x82CB43D4;
	sub_82CD1E58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82545ee8
	ctx.lr = 0x82CB43DC;
	sub_82545EE8(ctx, base);
loc_82CB43DC:
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82cb440c
	goto loc_82CB440C;
loc_82CB43E4:
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lbz r11,-32175(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32175);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb440c
	if (ctx.cr6.eq) goto loc_82CB440C;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,11500
	ctx.r11.s64 = ctx.r11.s64 + 11500;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb3008
	ctx.lr = 0x82CB440C;
	sub_82CB3008(ctx, base);
loc_82CB440C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82ce5e90
	ctx.lr = 0x82CB4414;
	sub_82CE5E90(ctx, base);
	// b 0x82cb4424
	goto loc_82CB4424;
loc_82CB4418:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb4d20
	ctx.lr = 0x82CB4424;
	sub_82CB4D20(ctx, base);
loc_82CB4424:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82CB4428:
	// addi r1,r31,896
	ctx.r1.s64 = ctx.r31.s64 + 896;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB4430"))) PPC_WEAK_FUNC(sub_82CB4430);
PPC_FUNC_IMPL(__imp__sub_82CB4430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-896
	ctx.r31.s64 = ctx.r12.s64 + -896;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82ce5e90
	ctx.lr = 0x82CB4448;
	sub_82CE5E90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4458"))) PPC_WEAK_FUNC(sub_82CB4458);
PPC_FUNC_IMPL(__imp__sub_82CB4458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-896
	ctx.r31.s64 = ctx.r12.s64 + -896;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82545ee8
	ctx.lr = 0x82CB4470;
	sub_82545EE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4488"))) PPC_WEAK_FUNC(sub_82CB4488);
PPC_FUNC_IMPL(__imp__sub_82CB4488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82CB4490;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-1616
	ctx.r31.s64 = ctx.r1.s64 + -1616;
	// stwu r1,-1616(r1)
	ea = -1616 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb45cc
	if (ctx.cr6.eq) goto loc_82CB45CC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb4514
	if (ctx.cr6.eq) goto loc_82CB4514;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb44fc
	if (ctx.cr6.eq) goto loc_82CB44FC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CB44D4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82cb44d4
	if (!ctx.cr6.eq) goto loc_82CB44D4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb44fc
	if (ctx.cr6.eq) goto loc_82CB44FC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82CB44FC:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb4514
	if (ctx.cr6.eq) goto loc_82CB4514;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB4510;
	sub_82CB4A50(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82CB4514:
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r10,263
	ctx.r10.s64 = 263;
	// li r9,100
	ctx.r9.s64 = 100;
	// lbz r11,-32175(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32175);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82cb454c
	if (ctx.cr6.eq) goto loc_82CB454C;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,11500
	ctx.r11.s64 = ctx.r11.s64 + 11500;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb3008
	ctx.lr = 0x82CB454C;
	sub_82CB3008(ctx, base);
loc_82CB454C:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r27,11508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11508, ctx.r27.u8);
	// stb r26,-32176(r10)
	PPC_STORE_U8(ctx.r10.u32 + -32176, ctx.r26.u8);
	// bne cr6,0x82cb4574
	if (!ctx.cr6.eq) goto loc_82CB4574;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb0ef0
	ctx.lr = 0x82CB4570;
	sub_82CB0EF0(ctx, base);
	// b 0x82cb45d0
	goto loc_82CB45D0;
loc_82CB4574:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bne cr6,0x82cb45d8
	if (!ctx.cr6.eq) goto loc_82CB45D8;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,-8300
	ctx.r10.s64 = ctx.r10.s64 + -8300;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,11508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11508, ctx.r10.u8);
	// bl 0x82ce58d0
	ctx.lr = 0x82CB45A4;
	sub_82CE58D0(ctx, base);
	// lbz r11,238(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 238);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb45c4
	if (ctx.cr6.eq) goto loc_82CB45C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd24d0
	ctx.lr = 0x82CB45C0;
	sub_82CD24D0(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82CB45C4:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82ce5e90
	ctx.lr = 0x82CB45CC;
	sub_82CE5E90(ctx, base);
loc_82CB45CC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82CB45D0:
	// addi r1,r31,1616
	ctx.r1.s64 = ctx.r31.s64 + 1616;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
loc_82CB45D8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-8300
	ctx.r6.s64 = ctx.r11.s64 + -8300;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82ce58d0
	ctx.lr = 0x82CB45EC;
	sub_82CE58D0(ctx, base);
	// lbz r11,974(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 974);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb4608
	if (ctx.cr6.eq) goto loc_82CB4608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd24d0
	ctx.lr = 0x82CB4608;
	sub_82CD24D0(ctx, base);
loc_82CB4608:
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82ce5e90
	ctx.lr = 0x82CB4614;
	sub_82CE5E90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82cb45d0
	goto loc_82CB45D0;
}

__attribute__((alias("__imp__sub_82CB461C"))) PPC_WEAK_FUNC(sub_82CB461C);
PPC_FUNC_IMPL(__imp__sub_82CB461C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1616
	ctx.r31.s64 = ctx.r12.s64 + -1616;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82ce5e90
	ctx.lr = 0x82CB4634;
	sub_82CE5E90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4644"))) PPC_WEAK_FUNC(sub_82CB4644);
PPC_FUNC_IMPL(__imp__sub_82CB4644) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1616
	ctx.r31.s64 = ctx.r12.s64 + -1616;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82ce5e90
	ctx.lr = 0x82CB465C;
	sub_82CE5E90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4670"))) PPC_WEAK_FUNC(sub_82CB4670);
PPC_FUNC_IMPL(__imp__sub_82CB4670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB4678;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb1190
	ctx.lr = 0x82CB468C;
	sub_82CB1190(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82cb2090
	ctx.lr = 0x82CB4698;
	sub_82CB2090(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB46AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82cb46f4
	if (ctx.cr6.eq) goto loc_82CB46F4;
loc_82CB46BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB46D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb2f50
	ctx.lr = 0x82CB46E8;
	sub_82CB2F50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82cb46bc
	if (ctx.cr6.lt) goto loc_82CB46BC;
loc_82CB46F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB4700"))) PPC_WEAK_FUNC(sub_82CB4700);
PPC_FUNC_IMPL(__imp__sub_82CB4700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CB4708;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82cb1190
	ctx.lr = 0x82CB4720;
	sub_82CB1190(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cb4748
	if (ctx.cr6.eq) goto loc_82CB4748;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb4748
	if (ctx.cr6.eq) goto loc_82CB4748;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb2f50
	ctx.lr = 0x82CB4744;
	sub_82CB2F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CB4748:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB4758"))) PPC_WEAK_FUNC(sub_82CB4758);
PPC_FUNC_IMPL(__imp__sub_82CB4758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e50
	ctx.lr = 0x82CB4760;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-1632
	ctx.r31.s64 = ctx.r1.s64 + -1632;
	// stwu r1,-1632(r1)
	ea = -1632 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82cb4918
	if (ctx.cr6.eq) goto loc_82CB4918;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb47a8
	if (ctx.cr6.eq) goto loc_82CB47A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB47A4;
	sub_82CB4A50(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_82CB47A8:
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r10,263
	ctx.r10.s64 = 263;
	// li r9,100
	ctx.r9.s64 = 100;
	// lbz r11,-32175(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32175);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// beq cr6,0x82cb47e0
	if (ctx.cr6.eq) goto loc_82CB47E0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,11500
	ctx.r11.s64 = ctx.r11.s64 + 11500;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb3008
	ctx.lr = 0x82CB47E0;
	sub_82CB3008(ctx, base);
loc_82CB47E0:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// stb r25,11508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11508, ctx.r25.u8);
	// stb r24,-32176(r10)
	PPC_STORE_U8(ctx.r10.u32 + -32176, ctx.r24.u8);
	// bne cr6,0x82cb4850
	if (!ctx.cr6.eq) goto loc_82CB4850;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r11,r11,-8280
	ctx.r11.s64 = ctx.r11.s64 + -8280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb84c8
	ctx.lr = 0x82CB4814;
	sub_82CB84C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82cb4918
	if (ctx.cr6.eq) goto loc_82CB4918;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb4f80
	ctx.lr = 0x82CB4830;
	sub_82CB4F80(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb8490
	ctx.lr = 0x82CB483C;
	sub_82CB8490(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb80d0
	ctx.lr = 0x82CB4848;
	sub_82CB80D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82cb491c
	goto loc_82CB491C;
loc_82CB4850:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x82cb48c4
	if (!ctx.cr6.eq) goto loc_82CB48C4;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,-8280
	ctx.r10.s64 = ctx.r10.s64 + -8280;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r6,r10,-8
	ctx.r6.s64 = ctx.r10.s64 + -8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,11508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11508, ctx.r10.u8);
	// bl 0x82ce58d0
	ctx.lr = 0x82CB4884;
	sub_82CE58D0(ctx, base);
	// lbz r11,238(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 238);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb48bc
	if (ctx.cr6.eq) goto loc_82CB48BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cd24d0
	ctx.lr = 0x82CB48A0;
	sub_82CD24D0(ctx, base);
	// lbz r11,238(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 238);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb48bc
	if (ctx.cr6.eq) goto loc_82CB48BC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82ce5f30
	ctx.lr = 0x82CB48B8;
	sub_82CE5F30(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82CB48BC:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// b 0x82cb4914
	goto loc_82CB4914;
loc_82CB48C4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-8280
	ctx.r6.s64 = ctx.r11.s64 + -8280;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82ce58d0
	ctx.lr = 0x82CB48D8;
	sub_82CE58D0(ctx, base);
	// lbz r11,974(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 974);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb4910
	if (ctx.cr6.eq) goto loc_82CB4910;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cd24d0
	ctx.lr = 0x82CB48F4;
	sub_82CD24D0(ctx, base);
	// lbz r11,974(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 974);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb4910
	if (ctx.cr6.eq) goto loc_82CB4910;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82ce5f30
	ctx.lr = 0x82CB490C;
	sub_82CE5F30(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_82CB4910:
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
loc_82CB4914:
	// bl 0x82ce5e90
	ctx.lr = 0x82CB4918;
	sub_82CE5E90(ctx, base);
loc_82CB4918:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82CB491C:
	// addi r1,r31,1632
	ctx.r1.s64 = ctx.r31.s64 + 1632;
	// b 0x82e28ea0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB4924"))) PPC_WEAK_FUNC(sub_82CB4924);
PPC_FUNC_IMPL(__imp__sub_82CB4924) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1632
	ctx.r31.s64 = ctx.r12.s64 + -1632;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82ce5e90
	ctx.lr = 0x82CB493C;
	sub_82CE5E90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB494C"))) PPC_WEAK_FUNC(sub_82CB494C);
PPC_FUNC_IMPL(__imp__sub_82CB494C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-1632
	ctx.r31.s64 = ctx.r12.s64 + -1632;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,816
	ctx.r3.s64 = ctx.r31.s64 + 816;
	// bl 0x82ce5e90
	ctx.lr = 0x82CB4964;
	sub_82CE5E90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4978"))) PPC_WEAK_FUNC(sub_82CB4978);
PPC_FUNC_IMPL(__imp__sub_82CB4978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CB4980;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82cb4670
	ctx.lr = 0x82CB49A0;
	sub_82CB4670(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cb49e0
	if (ctx.cr6.eq) goto loc_82CB49E0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb4488
	ctx.lr = 0x82CB49C0;
	sub_82CB4488(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd1e58
	ctx.lr = 0x82CB49CC;
	sub_82CD1E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82545ee8
	ctx.lr = 0x82CB49D4;
	sub_82545EE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
loc_82CB49E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB49F0"))) PPC_WEAK_FUNC(sub_82CB49F0);
PPC_FUNC_IMPL(__imp__sub_82CB49F0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb4a14
	if (ctx.cr6.eq) goto loc_82CB4A14;
	// bl 0x82545ee8
	ctx.lr = 0x82CB4A14;
	sub_82545EE8(ctx, base);
loc_82CB4A14:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb4a24
	if (ctx.cr6.eq) goto loc_82CB4A24;
	// bl 0x82545ee8
	ctx.lr = 0x82CB4A24;
	sub_82545EE8(ctx, base);
loc_82CB4A24:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82CB4A50"))) PPC_WEAK_FUNC(sub_82CB4A50);
PPC_FUNC_IMPL(__imp__sub_82CB4A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cb4a78
	if (!ctx.cr6.eq) goto loc_82CB4A78;
loc_82CB4A70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb4b54
	goto loc_82CB4B54;
loc_82CB4A78:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CB4A80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cb4a80
	if (!ctx.cr6.eq) goto loc_82CB4A80;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82cb4a70
	if (ctx.cr6.eq) goto loc_82CB4A70;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r31,r11,-32152
	ctx.r31.s64 = ctx.r11.s64 + -32152;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb4afc
	if (ctx.cr6.eq) goto loc_82CB4AFC;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82CB4ABC:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82CB4AC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82cb4ae8
	if (ctx.cr6.eq) goto loc_82CB4AE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82cb4ac4
	if (ctx.cr6.eq) goto loc_82CB4AC4;
loc_82CB4AE8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82cb4b6c
	if (ctx.cr6.eq) goto loc_82CB4B6C;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82cb4abc
	if (!ctx.cr6.eq) goto loc_82CB4ABC;
loc_82CB4AFC:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r6,9
	ctx.r3.s64 = ctx.r6.s64 + 9;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82545e80
	ctx.lr = 0x82CB4B1C;
	sub_82545E80(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_82CB4B40:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82cb4b40
	if (!ctx.cr6.eq) goto loc_82CB4B40;
loc_82CB4B54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82CB4B6C:
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82cb4b54
	goto loc_82CB4B54;
}

__attribute__((alias("__imp__sub_82CB4B78"))) PPC_WEAK_FUNC(sub_82CB4B78);
PPC_FUNC_IMPL(__imp__sub_82CB4B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r31,r11,-32152
	ctx.r31.s64 = ctx.r11.s64 + -32152;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb4bb4
	if (ctx.cr6.eq) goto loc_82CB4BB4;
loc_82CB4BA0:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82545ee8
	ctx.lr = 0x82CB4BA8;
	sub_82545EE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cb4ba0
	if (!ctx.cr6.eq) goto loc_82CB4BA0;
loc_82CB4BB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4BE0"))) PPC_WEAK_FUNC(sub_82CB4BE0);
PPC_FUNC_IMPL(__imp__sub_82CB4BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,-32148(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32148);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82CB4BF8:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82CB4C00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82cb4c24
	if (ctx.cr6.eq) goto loc_82CB4C24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82cb4c00
	if (ctx.cr6.eq) goto loc_82CB4C00;
loc_82CB4C24:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82cb4c3c
	if (ctx.cr6.eq) goto loc_82CB4C3C;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82cb4bf8
	if (!ctx.cr6.eq) goto loc_82CB4BF8;
	// blr 
	return;
loc_82CB4C3C:
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4C48"))) PPC_WEAK_FUNC(sub_82CB4C48);
PPC_FUNC_IMPL(__imp__sub_82CB4C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CB4C50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82cb4be0
	ctx.lr = 0x82CB4C60;
	sub_82CB4BE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82cb4cb0
	if (!ctx.cr6.eq) goto loc_82CB4CB0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82cb4a50
	ctx.lr = 0x82CB4C70;
	sub_82CB4A50(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-32148
	ctx.r31.s64 = ctx.r11.s64 + -32148;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82545e80
	ctx.lr = 0x82CB4C9C;
	sub_82545E80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82CB4CB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB4CB8"))) PPC_WEAK_FUNC(sub_82CB4CB8);
PPC_FUNC_IMPL(__imp__sub_82CB4CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r31,r11,-32140
	ctx.r31.s64 = ctx.r11.s64 + -32140;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb4cf4
	if (ctx.cr6.eq) goto loc_82CB4CF4;
loc_82CB4CE0:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82545ee8
	ctx.lr = 0x82CB4CE8;
	sub_82545EE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82cb4ce0
	if (!ctx.cr6.eq) goto loc_82CB4CE0;
loc_82CB4CF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4D20"))) PPC_WEAK_FUNC(sub_82CB4D20);
PPC_FUNC_IMPL(__imp__sub_82CB4D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31966
	ctx.r31.s64 = -2094923776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-32168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32168);
	// stw r4,2164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2164, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb4d8c
	if (ctx.cr6.eq) goto loc_82CB4D8C;
	// addi r5,r1,2168
	ctx.r5.s64 = ctx.r1.s64 + 2168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e30e98
	ctx.lr = 0x82CB4D70;
	sub_82E30E98(ctx, base);
	// lwz r3,-32168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32168);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB4D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CB4D8C:
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4DA0"))) PPC_WEAK_FUNC(sub_82CB4DA0);
PPC_FUNC_IMPL(__imp__sub_82CB4DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31966
	ctx.r31.s64 = -2094923776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-32168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32168);
	// stw r4,2164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2164, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb4e0c
	if (ctx.cr6.eq) goto loc_82CB4E0C;
	// addi r5,r1,2168
	ctx.r5.s64 = ctx.r1.s64 + 2168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e30e98
	ctx.lr = 0x82CB4DF0;
	sub_82E30E98(ctx, base);
	// lwz r3,-32168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32168);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CB4E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82CB4E0C:
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4E20"))) PPC_WEAK_FUNC(sub_82CB4E20);
PPC_FUNC_IMPL(__imp__sub_82CB4E20) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-30
	ctx.r11.s64 = ctx.r3.s64 + -30;
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32053
	ctx.r12.s64 = -2100625408;
	// addi r12,r12,20040
	ctx.r12.s64 = ctx.r12.s64 + 20040;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CB4E7C;
	case 1:
		goto loc_82CB4E6C;
	case 2:
		goto loc_82CB4E74;
	case 3:
		goto loc_82CB4E84;
	case 4:
		goto loc_82CB4EA8;
	case 5:
		goto loc_82CB4E94;
	case 6:
		goto loc_82CB4E9C;
	case 7:
		goto loc_82CB4E8C;
	case 8:
		goto loc_82CB4EA4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,20092(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20092);
	// lwz r22,20076(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20076);
	// lwz r22,20084(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20084);
	// lwz r22,20100(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20100);
	// lwz r22,20136(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20136);
	// lwz r22,20116(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20116);
	// lwz r22,20124(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20124);
	// lwz r22,20108(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20108);
	// lwz r22,20132(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20132);
loc_82CB4E6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CB4E74:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82CB4E7C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82CB4E84:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82CB4E8C:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82CB4E94:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82CB4E9C:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82CB4EA4:
	// li r3,7
	ctx.r3.s64 = 7;
loc_82CB4EA8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4EB0"))) PPC_WEAK_FUNC(sub_82CB4EB0);
PPC_FUNC_IMPL(__imp__sub_82CB4EB0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-43
	ctx.r11.s64 = ctx.r3.s64 + -43;
	// li r3,8
	ctx.r3.s64 = 8;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32053
	ctx.r12.s64 = -2100625408;
	// addi r12,r12,20184
	ctx.r12.s64 = ctx.r12.s64 + 20184;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CB4F38;
	case 1:
		goto loc_82CB4F7C;
	case 2:
		goto loc_82CB4F7C;
	case 3:
		goto loc_82CB4F7C;
	case 4:
		goto loc_82CB4F7C;
	case 5:
		goto loc_82CB4F7C;
	case 6:
		goto loc_82CB4F30;
	case 7:
		goto loc_82CB4F7C;
	case 8:
		goto loc_82CB4F40;
	case 9:
		goto loc_82CB4F48;
	case 10:
		goto loc_82CB4F50;
	case 11:
		goto loc_82CB4F58;
	case 12:
		goto loc_82CB4F60;
	case 13:
		goto loc_82CB4F7C;
	case 14:
		goto loc_82CB4F7C;
	case 15:
		goto loc_82CB4F7C;
	case 16:
		goto loc_82CB4F7C;
	case 17:
		goto loc_82CB4F68;
	case 18:
		goto loc_82CB4F7C;
	case 19:
		goto loc_82CB4F70;
	case 20:
		goto loc_82CB4F7C;
	case 21:
		goto loc_82CB4F78;
	default:
		__builtin_unreachable();
	}
	// lwz r22,20280(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20280);
	// lwz r22,20348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20348);
	// lwz r22,20348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20348);
	// lwz r22,20348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20348);
	// lwz r22,20348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20348);
	// lwz r22,20348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20348);
	// lwz r22,20272(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20272);
	// lwz r22,20348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20348);
	// lwz r22,20288(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20288);
	// lwz r22,20296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20296);
	// lwz r22,20304(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20304);
	// lwz r22,20312(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20312);
	// lwz r22,20320(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20320);
	// lwz r22,20348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20348);
	// lwz r22,20348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20348);
	// lwz r22,20348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20348);
	// lwz r22,20348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20348);
	// lwz r22,20328(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20328);
	// lwz r22,20348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20348);
	// lwz r22,20336(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20336);
	// lwz r22,20348(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20348);
	// lwz r22,20344(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20344);
loc_82CB4F30:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_82CB4F38:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82CB4F40:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82CB4F48:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82CB4F50:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82CB4F58:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82CB4F60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CB4F68:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82CB4F70:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82CB4F78:
	// li r3,7
	ctx.r3.s64 = 7;
loc_82CB4F7C:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4F80"))) PPC_WEAK_FUNC(sub_82CB4F80);
PPC_FUNC_IMPL(__imp__sub_82CB4F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cb7488
	ctx.lr = 0x82CB4FA0;
	sub_82CB7488(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB4FB0"))) PPC_WEAK_FUNC(sub_82CB4FB0);
PPC_FUNC_IMPL(__imp__sub_82CB4FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CB4FB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// bne cr6,0x82cb4fe4
	if (!ctx.cr6.eq) goto loc_82CB4FE4;
loc_82CB4FD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
loc_82CB4FE4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CB4FEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cb4fec
	if (!ctx.cr6.eq) goto loc_82CB4FEC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82cb4fd8
	if (ctx.cr6.eq) goto loc_82CB4FD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb5060
	if (ctx.cr6.eq) goto loc_82CB5060;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82CB5020:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82CB5028:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82cb504c
	if (ctx.cr6.eq) goto loc_82CB504C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82cb5028
	if (ctx.cr6.eq) goto loc_82CB5028;
loc_82CB504C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82cb50c8
	if (ctx.cr6.eq) goto loc_82CB50C8;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82cb5020
	if (!ctx.cr6.eq) goto loc_82CB5020;
loc_82CB5060:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r6,9
	ctx.r3.s64 = ctx.r6.s64 + 9;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82545e80
	ctx.lr = 0x82CB5080;
	sub_82545E80(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82CB50A4:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82cb50a4
	if (!ctx.cr6.eq) goto loc_82CB50A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
loc_82CB50C8:
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB50D8"))) PPC_WEAK_FUNC(sub_82CB50D8);
PPC_FUNC_IMPL(__imp__sub_82CB50D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb5110
	if (ctx.cr6.eq) goto loc_82CB5110;
loc_82CB50FC:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82545ee8
	ctx.lr = 0x82CB5104;
	sub_82545EE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cb50fc
	if (!ctx.cr6.eq) goto loc_82CB50FC;
loc_82CB5110:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB5138"))) PPC_WEAK_FUNC(sub_82CB5138);
PPC_FUNC_IMPL(__imp__sub_82CB5138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r9,r11,-32128
	ctx.r9.s64 = ctx.r11.s64 + -32128;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r10,-32136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32136);
	// rlwinm r8,r10,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stw r10,-32136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32136, ctx.r10.u32);
	// bne cr6,0x82cb5168
	if (!ctx.cr6.eq) goto loc_82CB5168;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-32136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32136, ctx.r10.u32);
loc_82CB5168:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb51a0
	if (ctx.cr6.eq) goto loc_82CB51A0;
loc_82CB5178:
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bne cr6,0x82cb518c
	if (!ctx.cr6.eq) goto loc_82CB518C;
	// li r11,95
	ctx.r11.s64 = 95;
loc_82CB518C:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb5178
	if (!ctx.cr6.eq) goto loc_82CB5178;
loc_82CB51A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB51B0"))) PPC_WEAK_FUNC(sub_82CB51B0);
PPC_FUNC_IMPL(__imp__sub_82CB51B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-30072
	ctx.r9.s64 = ctx.r11.s64 + -30072;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// lwz r10,-30080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30080);
	// rlwinm r8,r10,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// stw r10,-30080(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30080, ctx.r10.u32);
	// bne cr6,0x82cb51f8
	if (!ctx.cr6.eq) goto loc_82CB51F8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r10,-30080(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30080, ctx.r10.u32);
loc_82CB51F8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,13844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82cb5214
	if (!ctx.cr6.eq) goto loc_82CB5214;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-5136
	ctx.r3.s64 = ctx.r11.s64 + -5136;
	// b 0x82cb5338
	goto loc_82CB5338;
loc_82CB5214:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-18528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18528);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82cb5230
	if (!ctx.cr6.eq) goto loc_82CB5230;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,-5140
	ctx.r3.s64 = ctx.r11.s64 + -5140;
	// b 0x82cb5338
	goto loc_82CB5338;
loc_82CB5230:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82cb5250
	if (!ctx.cr6.eq) goto loc_82CB5250;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lhz r11,21084(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 21084);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x82cb5334
	goto loc_82CB5334;
loc_82CB5250:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82cb5270
	if (!ctx.cr6.eq) goto loc_82CB5270;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lhz r11,21076(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 21076);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x82cb5334
	goto loc_82CB5334;
loc_82CB5270:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13880);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82cb52a4
	if (!ctx.cr6.eq) goto loc_82CB52A4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,29308
	ctx.r11.s64 = ctx.r11.s64 + 29308;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// b 0x82cb5334
	goto loc_82CB5334;
loc_82CB52A4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,-5148
	ctx.r4.s64 = ctx.r11.s64 + -5148;
	// bl 0x82e2b400
	ctx.lr = 0x82CB52BC;
	sub_82E2B400(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27240
	ctx.r4.s64 = ctx.r11.s64 + -27240;
	// bl 0x82e2c390
	ctx.lr = 0x82CB52CC;
	sub_82E2C390(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb5334
	if (ctx.cr6.eq) goto loc_82CB5334;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CB52DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cb52dc
	if (!ctx.cr6.eq) goto loc_82CB52DC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x82cb531c
	if (!ctx.cr6.eq) goto loc_82CB531C;
loc_82CB530C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x82cb530c
	if (ctx.cr6.eq) goto loc_82CB530C;
loc_82CB531C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x82cb5330
	if (!ctx.cr6.eq) goto loc_82CB5330;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// b 0x82cb5334
	goto loc_82CB5334;
loc_82CB5330:
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
loc_82CB5334:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CB5338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB5350"))) PPC_WEAK_FUNC(sub_82CB5350);
PPC_FUNC_IMPL(__imp__sub_82CB5350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82CB5358;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,236(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cb5138
	ctx.lr = 0x82CB5374;
	sub_82CB5138(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb5138
	ctx.lr = 0x82CB5384;
	sub_82CB5138(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-4936
	ctx.r4.s64 = ctx.r11.s64 + -4936;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB539C;
	sub_82CB8190(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cb5458
	if (ctx.cr6.eq) goto loc_82CB5458;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-4964
	ctx.r4.s64 = ctx.r11.s64 + -4964;
	// bl 0x82cb8190
	ctx.lr = 0x82CB53B8;
	sub_82CB8190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB53C4;
	sub_82CB51B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB53D4;
	sub_82CB51B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,140(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB53E4;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-5020
	ctx.r4.s64 = ctx.r11.s64 + -5020;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5400;
	sub_82CB8190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,136(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB540C;
	sub_82CB51B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB541C;
	sub_82CB51B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB542C;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-5060
	ctx.r4.s64 = ctx.r11.s64 + -5060;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5448;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-5088
	ctx.r4.s64 = ctx.r11.s64 + -5088;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5458;
	sub_82CB8190(ctx, base);
loc_82CB5458:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-5120
	ctx.r4.s64 = ctx.r11.s64 + -5120;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5468;
	sub_82CB8190(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB5470"))) PPC_WEAK_FUNC(sub_82CB5470);
PPC_FUNC_IMPL(__imp__sub_82CB5470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82CB5478;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82e28f0c
	ctx.lr = 0x82CB5480;
	__savefpr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f12,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f25,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f25.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f30,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f30.f64 = double(temp.f32);
	// fadds f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f25
	ctx.cr6.compare(ctx.f11.f64, ctx.f25.f64);
	// blt cr6,0x82cb550c
	if (ctx.cr6.lt) goto loc_82CB550C;
	// fadds f0,f11,f30
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f13,-28552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28552);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f29,f10,f0
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// b 0x82cb564c
	goto loc_82CB564C;
loc_82CB550C:
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82cb551c
	if (!ctx.cr6.gt) goto loc_82CB551C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CB551C:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f11,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82cb5530
	if (!ctx.cr6.gt) goto loc_82CB5530;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82CB5530:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82cb55ec
	if (ctx.cr6.lt) goto loc_82CB55EC;
	// beq cr6,0x82cb5598
	if (ctx.cr6.eq) goto loc_82CB5598;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82cb563c
	if (!ctx.cr6.lt) goto loc_82CB563C;
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f13,-28552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28552);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f27,f11,f0
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f28,f10,f0
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f31,f9,f0
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// b 0x82cb564c
	goto loc_82CB564C;
loc_82CB5598:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,-28552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28552);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f27,f11,f0
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// b 0x82cb564c
	goto loc_82CB564C;
loc_82CB55EC:
	// fsubs f0,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f13,-28552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28552);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f28,f12,f0
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// b 0x82cb564c
	goto loc_82CB564C;
loc_82CB563C:
	// lfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
loc_82CB564C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x82cb565c
	if (ctx.cr6.lt) goto loc_82CB565C;
	// fmr f13,f25
	ctx.f13.f64 = ctx.f25.f64;
	// b 0x82cb5684
	goto loc_82CB5684;
loc_82CB565C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13880);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82cb5678
	if (ctx.cr6.gt) goto loc_82CB5678;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lfs f13,-5160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5160);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82cb5684
	goto loc_82CB5684;
loc_82CB5678:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82e27e10
	ctx.lr = 0x82CB5680;
	sub_82E27E10(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
loc_82CB5684:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13884(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13884);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fnmsubs f0,f31,f31,f30
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f31.f64 - ctx.f30.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// beq cr6,0x82cb57dc
	if (ctx.cr6.eq) goto loc_82CB57DC;
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-18464(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18464);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f26,f26,f13
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmuls f31,f0,f27
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f28,f0,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fcmpu cr6,f31,f25
	ctx.cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// bne cr6,0x82cb56d8
	if (!ctx.cr6.eq) goto loc_82CB56D8;
	// fcmpu cr6,f28,f25
	ctx.cr6.compare(ctx.f28.f64, ctx.f25.f64);
	// bne cr6,0x82cb56d8
	if (!ctx.cr6.eq) goto loc_82CB56D8;
	// fcmpu cr6,f29,f25
	ctx.cr6.compare(ctx.f29.f64, ctx.f25.f64);
	// bne cr6,0x82cb56d8
	if (!ctx.cr6.eq) goto loc_82CB56D8;
loc_82CB56D4:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_82CB56D8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r11,-4740
	ctx.r26.s64 = ctx.r11.s64 + -4740;
	// ble cr6,0x82cb5704
	if (!ctx.cr6.gt) goto loc_82CB5704;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82CB56EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB56F8;
	sub_82CB8190(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82cb56ec
	if (!ctx.cr6.eq) goto loc_82CB56EC;
loc_82CB5704:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5710;
	sub_82CB51B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5720;
	sub_82CB51B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5730;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-4764
	ctx.r4.s64 = ctx.r11.s64 + -4764;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB574C;
	sub_82CB8190(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82cb5770
	if (!ctx.cr6.gt) goto loc_82CB5770;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82CB5758:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5764;
	sub_82CB8190(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cb5758
	if (!ctx.cr6.eq) goto loc_82CB5758;
loc_82CB5770:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB577C;
	sub_82CB51B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB578C;
	sub_82CB51B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB579C;
	sub_82CB51B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB57AC;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-4796
	ctx.r4.s64 = ctx.r11.s64 + -4796;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB57CC;
	sub_82CB8190(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82e28f58
	ctx.lr = 0x82CB57D8;
	__restfpr_25(ctx, base);
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
loc_82CB57DC:
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f25.f64;
	// fmr f29,f25
	ctx.f29.f64 = ctx.f25.f64;
	// b 0x82cb56d4
	goto loc_82CB56D4;
}

__attribute__((alias("__imp__sub_82CB57E8"))) PPC_WEAK_FUNC(sub_82CB57E8);
PPC_FUNC_IMPL(__imp__sub_82CB57E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CB57F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x82cb4e20
	ctx.lr = 0x82CB580C;
	sub_82CB4E20(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r11,-3896
	ctx.r4.s64 = ctx.r11.s64 + -3896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5820;
	sub_82CB8190(ctx, base);
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb5470
	ctx.lr = 0x82CB5834;
	sub_82CB5470(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lhz r5,62(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 62);
	// addi r4,r11,-3968
	ctx.r4.s64 = ctx.r11.s64 + -3968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB584C;
	sub_82CB8190(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82cb5874
	if (!ctx.cr6.gt) goto loc_82CB5874;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5868;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-3992
	ctx.r4.s64 = ctx.r11.s64 + -3992;
	// b 0x82cb5884
	goto loc_82CB5884;
loc_82CB5874:
	// lfs f1,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB587C;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-4024
	ctx.r4.s64 = ctx.r11.s64 + -4024;
loc_82CB5884:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5890;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4040
	ctx.r4.s64 = ctx.r11.s64 + -4040;
	// bl 0x82cb8190
	ctx.lr = 0x82CB58A0;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4080
	ctx.r4.s64 = ctx.r11.s64 + -4080;
	// bl 0x82cb8190
	ctx.lr = 0x82CB58B0;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 60);
	// addi r4,r11,-4108
	ctx.r4.s64 = ctx.r11.s64 + -4108;
	// bl 0x82cb8190
	ctx.lr = 0x82CB58C4;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB58D0;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-4144
	ctx.r4.s64 = ctx.r11.s64 + -4144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB58E4;
	sub_82CB8190(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cb5900
	if (ctx.cr6.eq) goto loc_82CB5900;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27152
	ctx.r5.s64 = ctx.r11.s64 + -27152;
	// b 0x82cb5908
	goto loc_82CB5908;
loc_82CB5900:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r11,2824
	ctx.r5.s64 = ctx.r11.s64 + 2824;
loc_82CB5908:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4196
	ctx.r4.s64 = ctx.r11.s64 + -4196;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5918;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4220
	ctx.r4.s64 = ctx.r11.s64 + -4220;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5928;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4240
	ctx.r4.s64 = ctx.r11.s64 + -4240;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5938;
	sub_82CB8190(ctx, base);
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// bgt cr6,0x82cb5b60
	if (ctx.cr6.gt) goto loc_82CB5B60;
	// lis r12,-32053
	ctx.r12.s64 = -2100625408;
	// addi r12,r12,22872
	ctx.r12.s64 = ctx.r12.s64 + 22872;
	// rlwinm r0,r27,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r27.u64) {
	case 0:
		goto loc_82CB59D4;
	case 1:
		goto loc_82CB5A4C;
	case 2:
		goto loc_82CB5A88;
	case 3:
		goto loc_82CB5AEC;
	case 4:
		goto loc_82CB5B60;
	case 5:
		goto loc_82CB5974;
	case 6:
		goto loc_82CB59A4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,22996(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22996);
	// lwz r22,23116(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23116);
	// lwz r22,23176(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23176);
	// lwz r22,23276(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23276);
	// lwz r22,23392(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23392);
	// lwz r22,22900(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22900);
	// lwz r22,22948(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22948);
loc_82CB5974:
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82ce33a8
	ctx.lr = 0x82CB5980;
	sub_82CE33A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb5b60
	if (ctx.cr6.eq) goto loc_82CB5B60;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-4284
	ctx.r4.s64 = ctx.r10.s64 + -4284;
	// bl 0x82cb8190
	ctx.lr = 0x82CB59A0;
	sub_82CB8190(ctx, base);
	// b 0x82cb5b60
	goto loc_82CB5B60;
loc_82CB59A4:
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82ce3448
	ctx.lr = 0x82CB59B0;
	sub_82CE3448(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb5b60
	if (ctx.cr6.eq) goto loc_82CB5B60;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-4284
	ctx.r4.s64 = ctx.r10.s64 + -4284;
	// bl 0x82cb8190
	ctx.lr = 0x82CB59D0;
	sub_82CB8190(ctx, base);
	// b 0x82cb5b60
	goto loc_82CB5B60;
loc_82CB59D4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4300
	ctx.r4.s64 = ctx.r11.s64 + -4300;
	// bl 0x82cb8190
	ctx.lr = 0x82CB59E4;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB59F0;
	sub_82CB51B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5A00;
	sub_82CB51B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5A10;
	sub_82CB51B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5A20;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-4344
	ctx.r4.s64 = ctx.r11.s64 + -4344;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5A40;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-4364
	ctx.r4.s64 = ctx.r11.s64 + -4364;
	// b 0x82cb5b58
	goto loc_82CB5B58;
loc_82CB5A4C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4384
	ctx.r4.s64 = ctx.r11.s64 + -4384;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5A5C;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5A68;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-4416
	ctx.r4.s64 = ctx.r11.s64 + -4416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5A7C;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-4436
	ctx.r4.s64 = ctx.r11.s64 + -4436;
	// b 0x82cb5b58
	goto loc_82CB5B58;
loc_82CB5A88:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4452
	ctx.r4.s64 = ctx.r11.s64 + -4452;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5A98;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5AA4;
	sub_82CB51B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5AB4;
	sub_82CB51B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5AC4;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-4500
	ctx.r4.s64 = ctx.r11.s64 + -4500;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5AE0;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-4516
	ctx.r4.s64 = ctx.r11.s64 + -4516;
	// b 0x82cb5b58
	goto loc_82CB5B58;
loc_82CB5AEC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4536
	ctx.r4.s64 = ctx.r11.s64 + -4536;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5AFC;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5B08;
	sub_82CB51B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5B18;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-4568
	ctx.r4.s64 = ctx.r11.s64 + -4568;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5B30;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5B3C;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-4600
	ctx.r4.s64 = ctx.r11.s64 + -4600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5B50;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-4620
	ctx.r4.s64 = ctx.r11.s64 + -4620;
loc_82CB5B58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5B60;
	sub_82CB8190(ctx, base);
loc_82CB5B60:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4640
	ctx.r4.s64 = ctx.r11.s64 + -4640;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5B70;
	sub_82CB8190(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB5B78"))) PPC_WEAK_FUNC(sub_82CB5B78);
PPC_FUNC_IMPL(__imp__sub_82CB5B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CB5B80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,-3588
	ctx.r4.s64 = ctx.r11.s64 + -3588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5BA0;
	sub_82CB8190(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// addi r5,r11,20688
	ctx.r5.s64 = ctx.r11.s64 + 20688;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82cb5bdc
	if (ctx.cr6.eq) goto loc_82CB5BDC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82cb5bd0
	if (ctx.cr6.eq) goto loc_82CB5BD0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82cb5be4
	if (!ctx.cr6.eq) goto loc_82CB5BE4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r11,-3824
	ctx.r5.s64 = ctx.r11.s64 + -3824;
	// b 0x82cb5be4
	goto loc_82CB5BE4;
loc_82CB5BD0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r11,-3852
	ctx.r5.s64 = ctx.r11.s64 + -3852;
	// b 0x82cb5be4
	goto loc_82CB5BE4;
loc_82CB5BDC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r5,r11,-3880
	ctx.r5.s64 = ctx.r11.s64 + -3880;
loc_82CB5BE4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3648
	ctx.r4.s64 = ctx.r11.s64 + -3648;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5BF4;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5C00;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-3676
	ctx.r4.s64 = ctx.r11.s64 + -3676;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5C14;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5C20;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-3708
	ctx.r4.s64 = ctx.r11.s64 + -3708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5C34;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB5C40;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-3744
	ctx.r4.s64 = ctx.r11.s64 + -3744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5C54;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3772
	ctx.r4.s64 = ctx.r11.s64 + -3772;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5C64;
	sub_82CB8190(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB5C70"))) PPC_WEAK_FUNC(sub_82CB5C70);
PPC_FUNC_IMPL(__imp__sub_82CB5C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82cb5cd8
	if (ctx.cr6.lt) goto loc_82CB5CD8;
	// beq cr6,0x82cb5ca0
	if (ctx.cr6.eq) goto loc_82CB5CA0;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,13844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13844);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,-18528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_82CB5CA0:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f2,0(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-5152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_82CB5CD8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB5CF0"))) PPC_WEAK_FUNC(sub_82CB5CF0);
PPC_FUNC_IMPL(__imp__sub_82CB5CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e58
	ctx.lr = 0x82CB5CF8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82e28f10
	ctx.lr = 0x82CB5D00;
	__savefpr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r4,144(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// bl 0x82cb5138
	ctx.lr = 0x82CB5D1C;
	sub_82CB5138(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2116
	ctx.r4.s64 = ctx.r11.s64 + -2116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5D34;
	sub_82CB8190(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82ce3588
	ctx.lr = 0x82CB5D40;
	sub_82CE3588(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82ce3588
	ctx.lr = 0x82CB5D50;
	sub_82CE3588(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb5d84
	if (ctx.cr6.eq) goto loc_82CB5D84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,236(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// bl 0x82cb5138
	ctx.lr = 0x82CB5D68;
	sub_82CB5138(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r11,-2176
	ctx.r4.s64 = ctx.r11.s64 + -2176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5D80;
	sub_82CB8190(ctx, base);
	// b 0x82cb5d94
	goto loc_82CB5D94;
loc_82CB5D84:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2216
	ctx.r4.s64 = ctx.r11.s64 + -2216;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5D94;
	sub_82CB8190(ctx, base);
loc_82CB5D94:
	// lfs f0,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f10,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// li r4,10
	ctx.r4.s64 = 10;
	// lfs f0,72(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f11,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,76(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfs f9,44(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f13,48(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// lfs f12,52(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f8,164(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmsubs f0,f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmsubs f0,f10,f12,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmsubs f0,f9,f11,f6
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82cb5470
	ctx.lr = 0x82CB5E2C;
	sub_82CB5470(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2240
	ctx.r4.s64 = ctx.r11.s64 + -2240;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5E3C;
	sub_82CB8190(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82cb5e6c
	if (ctx.cr6.eq) goto loc_82CB5E6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,236(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 236);
	// bl 0x82cb5138
	ctx.lr = 0x82CB5E50;
	sub_82CB5138(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,12(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r4,r11,-2296
	ctx.r4.s64 = ctx.r11.s64 + -2296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5E68;
	sub_82CB8190(ctx, base);
	// b 0x82cb5e7c
	goto loc_82CB5E7C;
loc_82CB5E6C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2332
	ctx.r4.s64 = ctx.r11.s64 + -2332;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5E7C;
	sub_82CB8190(ctx, base);
loc_82CB5E7C:
	// lfs f0,80(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f10,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// li r4,10
	ctx.r4.s64 = 10;
	// lfs f0,84(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f11,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,88(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfs f9,56(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f13,60(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// lfs f12,64(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f8,164(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmsubs f0,f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmsubs f0,f10,f12,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmsubs f0,f9,f11,f6
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82cb5470
	ctx.lr = 0x82CB5F14;
	sub_82CB5470(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2352
	ctx.r4.s64 = ctx.r11.s64 + -2352;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5F24;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2380
	ctx.r4.s64 = ctx.r11.s64 + -2380;
	// bl 0x82cb8190
	ctx.lr = 0x82CB5F34;
	sub_82CB8190(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,100(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r27,r11,-27152
	ctx.r27.s64 = ctx.r11.s64 + -27152;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cb5f54
	if (ctx.cr6.eq) goto loc_82CB5F54;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r27,r11,2824
	ctx.r27.s64 = ctx.r11.s64 + 2824;
loc_82CB5F54:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,140(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// lfs f28,-13896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f28.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82cb4eb0
	ctx.lr = 0x82CB5FB4;
	sub_82CB4EB0(ctx, base);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x82cb60d4
	if (!ctx.cr6.eq) goto loc_82CB60D4;
	// lfs f2,172(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,148(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x82cb5c70
	ctx.lr = 0x82CB5FE0;
	sub_82CB5C70(ctx, base);
	// lfs f2,172(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,152(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb5c70
	ctx.lr = 0x82CB6000;
	sub_82CB5C70(ctx, base);
	// lfs f2,172(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,156(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb5c70
	ctx.lr = 0x82CB6020;
	sub_82CB5C70(ctx, base);
	// lwz r25,160(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// lfs f2,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	ctx.f2.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82cb5c70
	ctx.lr = 0x82CB6044;
	sub_82CB5C70(ctx, base);
	// lwz r26,164(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// lfs f2,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	ctx.f2.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cb5c70
	ctx.lr = 0x82CB6068;
	sub_82CB5C70(ctx, base);
	// lwz r24,168(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f2,252(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// lfs f1,232(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82cb5c70
	ctx.lr = 0x82CB608C;
	sub_82CB5C70(ctx, base);
	// lfs f28,180(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,184(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	ctx.f27.f64 = double(temp.f32);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// lfs f26,172(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	ctx.f26.f64 = double(temp.f32);
	// bne cr6,0x82cb60ac
	if (!ctx.cr6.eq) goto loc_82CB60AC;
	// lfs f31,220(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,224(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,216(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	ctx.f29.f64 = double(temp.f32);
loc_82CB60AC:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x82cb60c0
	if (!ctx.cr6.eq) goto loc_82CB60C0;
	// lfs f31,200(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,204(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,196(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	ctx.f29.f64 = double(temp.f32);
loc_82CB60C0:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82cb60d4
	if (!ctx.cr6.eq) goto loc_82CB60D4;
	// lfs f31,240(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,244(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,236(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	ctx.f29.f64 = double(temp.f32);
loc_82CB60D4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2408
	ctx.r4.s64 = ctx.r11.s64 + -2408;
	// bl 0x82cb8190
	ctx.lr = 0x82CB60E4;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-2452
	ctx.r4.s64 = ctx.r11.s64 + -2452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB60F8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2468
	ctx.r4.s64 = ctx.r11.s64 + -2468;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6108;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,-2488
	ctx.r28.s64 = ctx.r11.s64 + -2488;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB611C;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6128;
	sub_82CB51B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6138;
	sub_82CB51B0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6148;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r27,r11,-2520
	ctx.r27.s64 = ctx.r11.s64 + -2520;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6168;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6174;
	sub_82CB51B0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6184;
	sub_82CB51B0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6194;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r26,r11,-2552
	ctx.r26.s64 = ctx.r11.s64 + -2552;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB61B4;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2572
	ctx.r4.s64 = ctx.r11.s64 + -2572;
	// bl 0x82cb8190
	ctx.lr = 0x82CB61C4;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2604
	ctx.r4.s64 = ctx.r11.s64 + -2604;
	// bl 0x82cb8190
	ctx.lr = 0x82CB61D4;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB61E0;
	sub_82CB51B0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB61F0;
	sub_82CB51B0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6200;
	sub_82CB51B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6218;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6224;
	sub_82CB51B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6234;
	sub_82CB51B0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6244;
	sub_82CB51B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB625C;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2636
	ctx.r4.s64 = ctx.r11.s64 + -2636;
	// bl 0x82cb8190
	ctx.lr = 0x82CB626C;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2656
	ctx.r4.s64 = ctx.r11.s64 + -2656;
	// bl 0x82cb8190
	ctx.lr = 0x82CB627C;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2672
	ctx.r4.s64 = ctx.r11.s64 + -2672;
	// bl 0x82cb8190
	ctx.lr = 0x82CB628C;
	sub_82CB8190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6298;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB62A4;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r28,r11,-2708
	ctx.r28.s64 = ctx.r11.s64 + -2708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB62BC;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB62C8;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r27,r11,-2740
	ctx.r27.s64 = ctx.r11.s64 + -2740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB62E0;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB62EC;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r26,r11,-2784
	ctx.r26.s64 = ctx.r11.s64 + -2784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6304;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2804
	ctx.r4.s64 = ctx.r11.s64 + -2804;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6314;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2824
	ctx.r4.s64 = ctx.r11.s64 + -2824;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6324;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6330;
	sub_82CB51B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6340;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB634C;
	sub_82CB51B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB635C;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6368;
	sub_82CB51B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6378;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2844
	ctx.r4.s64 = ctx.r11.s64 + -2844;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6388;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2864
	ctx.r4.s64 = ctx.r11.s64 + -2864;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6398;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2892
	ctx.r4.s64 = ctx.r11.s64 + -2892;
	// bl 0x82cb8190
	ctx.lr = 0x82CB63A8;
	sub_82CB8190(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb663c
	if (ctx.cr6.eq) goto loc_82CB663C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2908
	ctx.r4.s64 = ctx.r11.s64 + -2908;
	// bl 0x82cb8190
	ctx.lr = 0x82CB63C0;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2944
	ctx.r4.s64 = ctx.r11.s64 + -2944;
	// bl 0x82cb8190
	ctx.lr = 0x82CB63D0;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r29,276
	ctx.r6.s64 = ctx.r29.s64 + 276;
	// addi r5,r11,-2952
	ctx.r5.s64 = ctx.r11.s64 + -2952;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb5b78
	ctx.lr = 0x82CB63E8;
	sub_82CB5B78(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r29,296
	ctx.r6.s64 = ctx.r29.s64 + 296;
	// addi r5,r11,-2960
	ctx.r5.s64 = ctx.r11.s64 + -2960;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb5b78
	ctx.lr = 0x82CB6400;
	sub_82CB5B78(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r29,316
	ctx.r6.s64 = ctx.r29.s64 + 316;
	// addi r5,r11,-2968
	ctx.r5.s64 = ctx.r11.s64 + -2968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb5b78
	ctx.lr = 0x82CB6418;
	sub_82CB5B78(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r29,336
	ctx.r6.s64 = ctx.r29.s64 + 336;
	// addi r5,r11,-2980
	ctx.r5.s64 = ctx.r11.s64 + -2980;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb5b78
	ctx.lr = 0x82CB6430;
	sub_82CB5B78(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r29,356
	ctx.r6.s64 = ctx.r29.s64 + 356;
	// addi r5,r11,-2992
	ctx.r5.s64 = ctx.r11.s64 + -2992;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb5b78
	ctx.lr = 0x82CB6448;
	sub_82CB5B78(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r29,376
	ctx.r6.s64 = ctx.r29.s64 + 376;
	// addi r5,r11,-3004
	ctx.r5.s64 = ctx.r11.s64 + -3004;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb5b78
	ctx.lr = 0x82CB6460;
	sub_82CB5B78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,404(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB646C;
	sub_82CB51B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,400(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB647C;
	sub_82CB51B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,396(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB648C;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-3052
	ctx.r4.s64 = ctx.r11.s64 + -3052;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB64A8;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,420(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB64B4;
	sub_82CB51B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,416(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB64C4;
	sub_82CB51B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,412(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB64D4;
	sub_82CB51B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,408(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB64E4;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r4,r11,-3108
	ctx.r4.s64 = ctx.r11.s64 + -3108;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6504;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,432(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6510;
	sub_82CB51B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,428(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6520;
	sub_82CB51B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,424(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 424);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6530;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-3168
	ctx.r4.s64 = ctx.r11.s64 + -3168;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB654C;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,444(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 444);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6558;
	sub_82CB51B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,440(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6568;
	sub_82CB51B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,436(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 436);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6578;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-3232
	ctx.r4.s64 = ctx.r11.s64 + -3232;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6594;
	sub_82CB8190(ctx, base);
	// lwz r11,448(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82cb65b0
	if (!ctx.cr6.eq) goto loc_82CB65B0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-3296
	ctx.r4.s64 = ctx.r11.s64 + -3296;
	// b 0x82cb65b8
	goto loc_82CB65B8;
loc_82CB65B0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-3352
	ctx.r4.s64 = ctx.r11.s64 + -3352;
loc_82CB65B8:
	// bl 0x82cb8190
	ctx.lr = 0x82CB65BC;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,452(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 452);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB65C8;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-3404
	ctx.r4.s64 = ctx.r11.s64 + -3404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB65DC;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,456(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 456);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB65E8;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-3452
	ctx.r4.s64 = ctx.r11.s64 + -3452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB65FC;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,460(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 460);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6608;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-3488
	ctx.r4.s64 = ctx.r11.s64 + -3488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB661C;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3508
	ctx.r4.s64 = ctx.r11.s64 + -3508;
	// bl 0x82cb8190
	ctx.lr = 0x82CB662C;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3524
	ctx.r4.s64 = ctx.r11.s64 + -3524;
	// bl 0x82cb8190
	ctx.lr = 0x82CB663C;
	sub_82CB8190(ctx, base);
loc_82CB663C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3552
	ctx.r4.s64 = ctx.r11.s64 + -3552;
	// bl 0x82cb8190
	ctx.lr = 0x82CB664C;
	sub_82CB8190(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82e28f5c
	ctx.lr = 0x82CB6658;
	__restfpr_26(ctx, base);
	// b 0x82e28ea8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB6660"))) PPC_WEAK_FUNC(sub_82CB6660);
PPC_FUNC_IMPL(__imp__sub_82CB6660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x82CB6668;
	__savegprlr_29(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r11,-1808
	ctx.r4.s64 = ctx.r11.s64 + -1808;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e2b400
	ctx.lr = 0x82CB668C;
	sub_82E2B400(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1852
	ctx.r4.s64 = ctx.r11.s64 + -1852;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB66A4;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1876
	ctx.r4.s64 = ctx.r11.s64 + -1876;
	// bl 0x82cb8190
	ctx.lr = 0x82CB66B4;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB66C0;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-1924
	ctx.r4.s64 = ctx.r11.s64 + -1924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB66D4;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB66E0;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-1960
	ctx.r4.s64 = ctx.r11.s64 + -1960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB66F4;
	sub_82CB8190(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6700;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2004
	ctx.r4.s64 = ctx.r11.s64 + -2004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6714;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2032
	ctx.r4.s64 = ctx.r11.s64 + -2032;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6724;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2056
	ctx.r4.s64 = ctx.r11.s64 + -2056;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6734;
	sub_82CB8190(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB6740"))) PPC_WEAK_FUNC(sub_82CB6740);
PPC_FUNC_IMPL(__imp__sub_82CB6740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-724
	ctx.r4.s64 = ctx.r11.s64 + -724;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6768;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-772
	ctx.r4.s64 = ctx.r11.s64 + -772;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6778;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-836
	ctx.r4.s64 = ctx.r11.s64 + -836;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6788;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-856
	ctx.r4.s64 = ctx.r11.s64 + -856;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6798;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-884
	ctx.r4.s64 = ctx.r11.s64 + -884;
	// bl 0x82cb8190
	ctx.lr = 0x82CB67A8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-908
	ctx.r4.s64 = ctx.r11.s64 + -908;
	// bl 0x82cb8190
	ctx.lr = 0x82CB67B8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-956
	ctx.r4.s64 = ctx.r11.s64 + -956;
	// bl 0x82cb8190
	ctx.lr = 0x82CB67C8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-980
	ctx.r4.s64 = ctx.r11.s64 + -980;
	// bl 0x82cb8190
	ctx.lr = 0x82CB67D8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1040
	ctx.r4.s64 = ctx.r11.s64 + -1040;
	// bl 0x82cb8190
	ctx.lr = 0x82CB67E8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1060
	ctx.r4.s64 = ctx.r11.s64 + -1060;
	// bl 0x82cb8190
	ctx.lr = 0x82CB67F8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1084
	ctx.r4.s64 = ctx.r11.s64 + -1084;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6808;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-1140
	ctx.r30.s64 = ctx.r11.s64 + -1140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB681C;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1164
	ctx.r4.s64 = ctx.r11.s64 + -1164;
	// bl 0x82cb8190
	ctx.lr = 0x82CB682C;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1188
	ctx.r4.s64 = ctx.r11.s64 + -1188;
	// bl 0x82cb8190
	ctx.lr = 0x82CB683C;
	sub_82CB8190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6848;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1212
	ctx.r4.s64 = ctx.r11.s64 + -1212;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6858;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1236
	ctx.r4.s64 = ctx.r11.s64 + -1236;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6868;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1296
	ctx.r4.s64 = ctx.r11.s64 + -1296;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6878;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1320
	ctx.r4.s64 = ctx.r11.s64 + -1320;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6888;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1344
	ctx.r4.s64 = ctx.r11.s64 + -1344;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6898;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1376
	ctx.r4.s64 = ctx.r11.s64 + -1376;
	// bl 0x82cb8190
	ctx.lr = 0x82CB68A8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1400
	ctx.r4.s64 = ctx.r11.s64 + -1400;
	// bl 0x82cb8190
	ctx.lr = 0x82CB68B8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1424
	ctx.r4.s64 = ctx.r11.s64 + -1424;
	// bl 0x82cb8190
	ctx.lr = 0x82CB68C8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1460
	ctx.r4.s64 = ctx.r11.s64 + -1460;
	// bl 0x82cb8190
	ctx.lr = 0x82CB68D8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1488
	ctx.r4.s64 = ctx.r11.s64 + -1488;
	// bl 0x82cb8190
	ctx.lr = 0x82CB68E8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1516
	ctx.r4.s64 = ctx.r11.s64 + -1516;
	// bl 0x82cb8190
	ctx.lr = 0x82CB68F8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1552
	ctx.r4.s64 = ctx.r11.s64 + -1552;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6908;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1580
	ctx.r4.s64 = ctx.r11.s64 + -1580;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6918;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1608
	ctx.r4.s64 = ctx.r11.s64 + -1608;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6928;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1640
	ctx.r4.s64 = ctx.r11.s64 + -1640;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6938;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1668
	ctx.r4.s64 = ctx.r11.s64 + -1668;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6948;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1688
	ctx.r4.s64 = ctx.r11.s64 + -1688;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6958;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1712
	ctx.r4.s64 = ctx.r11.s64 + -1712;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6968;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1740
	ctx.r4.s64 = ctx.r11.s64 + -1740;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6978;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1756
	ctx.r4.s64 = ctx.r11.s64 + -1756;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6988;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1780
	ctx.r4.s64 = ctx.r11.s64 + -1780;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6998;
	sub_82CB8190(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB69B0"))) PPC_WEAK_FUNC(sub_82CB69B0);
PPC_FUNC_IMPL(__imp__sub_82CB69B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB69B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,236(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82cb5138
	ctx.lr = 0x82CB69D4;
	sub_82CB5138(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-624
	ctx.r4.s64 = ctx.r11.s64 + -624;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB69EC;
	sub_82CB8190(ctx, base);
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cb5470
	ctx.lr = 0x82CB6A00;
	sub_82CB5470(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82cb6a54
	if (!ctx.cr6.eq) goto loc_82CB6A54;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,104(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// bl 0x82cb4e20
	ctx.lr = 0x82CB6A28;
	sub_82CB4E20(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82cb6a48
	if (ctx.cr6.eq) goto loc_82CB6A48;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x82cb6a54
	if (!ctx.cr6.eq) goto loc_82CB6A54;
	// lwz r4,108(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ce3448
	ctx.lr = 0x82CB6A44;
	sub_82CE3448(ctx, base);
	// b 0x82cb6a54
	goto loc_82CB6A54;
loc_82CB6A48:
	// lwz r4,108(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ce33a8
	ctx.lr = 0x82CB6A54;
	sub_82CE33A8(ctx, base);
loc_82CB6A54:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-700
	ctx.r4.s64 = ctx.r11.s64 + -700;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6A64;
	sub_82CB8190(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB6A70"))) PPC_WEAK_FUNC(sub_82CB6A70);
PPC_FUNC_IMPL(__imp__sub_82CB6A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e54
	ctx.lr = 0x82CB6A78;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r4,r11,-372
	ctx.r4.s64 = ctx.r11.s64 + -372;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6AA0;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-432
	ctx.r4.s64 = ctx.r11.s64 + -432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6AB4;
	sub_82CB8190(ctx, base);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82cb6af4
	if (!ctx.cr6.gt) goto loc_82CB6AF4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82CB6AD0:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r5,r28,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82cb5350
	ctx.lr = 0x82CB6AE4;
	sub_82CB5350(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82cb6ad0
	if (!ctx.cr6.eq) goto loc_82CB6AD0;
loc_82CB6AF4:
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82cb6b4c
	if (!ctx.cr6.gt) goto loc_82CB6B4C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r11,-4864
	ctx.r26.s64 = ctx.r11.s64 + -4864;
loc_82CB6B18:
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r4,144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// bl 0x82cb5138
	ctx.lr = 0x82CB6B2C;
	sub_82CB5138(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6B3C;
	sub_82CB8190(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82cb6b18
	if (!ctx.cr6.eq) goto loc_82CB6B18;
loc_82CB6B4C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-448
	ctx.r4.s64 = ctx.r11.s64 + -448;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6B5C;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-484
	ctx.r4.s64 = ctx.r11.s64 + -484;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6B6C;
	sub_82CB8190(ctx, base);
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82cb6c10
	if (ctx.cr6.eq) goto loc_82CB6C10;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r24,r11,-4728
	ctx.r24.s64 = ctx.r11.s64 + -4728;
loc_82CB6B94:
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r28,r25,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82ce3588
	ctx.lr = 0x82CB6BA8;
	sub_82CE3588(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ce3588
	ctx.lr = 0x82CB6BB8;
	sub_82CE3588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82cb6c00
	if (ctx.cr6.eq) goto loc_82CB6C00;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb6c00
	if (ctx.cr6.eq) goto loc_82CB6C00;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// bl 0x82cb5138
	ctx.lr = 0x82CB6BD8;
	sub_82CB5138(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,236(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	// bl 0x82cb5138
	ctx.lr = 0x82CB6BE8;
	sub_82CB5138(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6C00;
	sub_82CB8190(ctx, base);
loc_82CB6C00:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82cb6b94
	if (ctx.cr6.lt) goto loc_82CB6B94;
loc_82CB6C10:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-504
	ctx.r4.s64 = ctx.r11.s64 + -504;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6C20;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-520
	ctx.r4.s64 = ctx.r11.s64 + -520;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6C30;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-552
	ctx.r4.s64 = ctx.r11.s64 + -552;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6C40;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-576
	ctx.r4.s64 = ctx.r11.s64 + -576;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6C50;
	sub_82CB8190(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28ea4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB6C60"))) PPC_WEAK_FUNC(sub_82CB6C60);
PPC_FUNC_IMPL(__imp__sub_82CB6C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82CB6C68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r4,r11,-296
	ctx.r4.s64 = ctx.r11.s64 + -296;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6C8C;
	sub_82CB8190(ctx, base);
	// lwz r11,232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// lwz r10,228(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82cb6ccc
	if (!ctx.cr6.gt) goto loc_82CB6CCC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CB6CA8:
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82cb69b0
	ctx.lr = 0x82CB6CBC;
	sub_82CB69B0(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cb6ca8
	if (!ctx.cr6.eq) goto loc_82CB6CA8;
loc_82CB6CCC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-320
	ctx.r4.s64 = ctx.r11.s64 + -320;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6CDC;
	sub_82CB8190(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB6CE8"))) PPC_WEAK_FUNC(sub_82CB6CE8);
PPC_FUNC_IMPL(__imp__sub_82CB6CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CB6CF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r4,236(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// bl 0x82cb5138
	ctx.lr = 0x82CB6D0C;
	sub_82CB5138(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,736
	ctx.r4.s64 = ctx.r11.s64 + 736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6D24;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2380
	ctx.r4.s64 = ctx.r11.s64 + -2380;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6D34;
	sub_82CB8190(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cb6d6c
	if (ctx.cr6.eq) goto loc_82CB6D6C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r10,664
	ctx.r4.s64 = ctx.r10.s64 + 664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r5,62(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// bl 0x82cb8190
	ctx.lr = 0x82CB6D6C;
	sub_82CB8190(ctx, base);
loc_82CB6D6C:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82cb6db0
	if (!ctx.cr6.gt) goto loc_82CB6DB0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82CB6D88:
	// lwz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r5,r27,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x82cb57e8
	ctx.lr = 0x82CB6DA0;
	sub_82CB57E8(ctx, base);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82cb6d88
	if (!ctx.cr6.eq) goto loc_82CB6D88;
loc_82CB6DB0:
	// lwz r26,8(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82cb6e90
	if (ctx.cr6.eq) goto loc_82CB6E90;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,632
	ctx.r4.s64 = ctx.r11.s64 + 632;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6DCC;
	sub_82CB8190(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f1,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,-13892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82cb6df4
	if (!ctx.cr6.gt) goto loc_82CB6DF4;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6DE8;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-3992
	ctx.r4.s64 = ctx.r11.s64 + -3992;
	// b 0x82cb6e04
	goto loc_82CB6E04;
loc_82CB6DF4:
	// lfs f1,200(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6DFC;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,-4024
	ctx.r4.s64 = ctx.r11.s64 + -4024;
loc_82CB6E04:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6E10;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,608
	ctx.r4.s64 = ctx.r11.s64 + 608;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6E20;
	sub_82CB8190(ctx, base);
	// addi r6,r30,64
	ctx.r6.s64 = ctx.r30.s64 + 64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cb5470
	ctx.lr = 0x82CB6E34;
	sub_82CB5470(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,584
	ctx.r4.s64 = ctx.r11.s64 + 584;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6E44;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6E50;
	sub_82CB51B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6E60;
	sub_82CB51B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6E70;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,548
	ctx.r4.s64 = ctx.r11.s64 + 548;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6E8C;
	sub_82CB8190(ctx, base);
	// b 0x82cb6eac
	goto loc_82CB6EAC;
loc_82CB6E90:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,516
	ctx.r4.s64 = ctx.r11.s64 + 516;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6E9C;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,492
	ctx.r4.s64 = ctx.r11.s64 + 492;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6EAC;
	sub_82CB8190(ctx, base);
loc_82CB6EAC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5088
	ctx.r4.s64 = ctx.r11.s64 + -5088;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6EBC;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-448
	ctx.r4.s64 = ctx.r11.s64 + -448;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6ECC;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-484
	ctx.r4.s64 = ctx.r11.s64 + -484;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6EDC;
	sub_82CB8190(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r11,2824
	ctx.r28.s64 = ctx.r11.s64 + 2824;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r27,r11,-27152
	ctx.r27.s64 = ctx.r11.s64 + -27152;
	// beq cr6,0x82cb7068
	if (ctx.cr6.eq) goto loc_82CB7068;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,152(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6F00;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,448
	ctx.r4.s64 = ctx.r11.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6F14;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6F20;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,404
	ctx.r4.s64 = ctx.r11.s64 + 404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6F34;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6F40;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,360
	ctx.r4.s64 = ctx.r11.s64 + 360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6F54;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6F60;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,308
	ctx.r4.s64 = ctx.r11.s64 + 308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6F74;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6F80;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,252
	ctx.r4.s64 = ctx.r11.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6F94;
	sub_82CB8190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,180(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB6FA0;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6FB4;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,184(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r4,r11,140
	ctx.r4.s64 = ctx.r11.s64 + 140;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6FC8;
	sub_82CB8190(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cb6fe0
	if (!ctx.cr6.eq) goto loc_82CB6FE0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82CB6FE0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,92
	ctx.r4.s64 = ctx.r11.s64 + 92;
	// bl 0x82cb8190
	ctx.lr = 0x82CB6FF0;
	sub_82CB8190(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cb7008
	if (!ctx.cr6.eq) goto loc_82CB7008;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82CB7008:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7018;
	sub_82CB8190(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cb7030
	if (!ctx.cr6.eq) goto loc_82CB7030;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82CB7030:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7040;
	sub_82CB8190(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cb7058
	if (!ctx.cr6.eq) goto loc_82CB7058;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82CB7058:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7068;
	sub_82CB8190(ctx, base);
loc_82CB7068:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lhz r5,208(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x82cb8190
	ctx.lr = 0x82CB707C;
	sub_82CB8190(ctx, base);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cb7094
	if (!ctx.cr6.eq) goto loc_82CB7094;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82CB7094:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-132
	ctx.r4.s64 = ctx.r11.s64 + -132;
	// bl 0x82cb8190
	ctx.lr = 0x82CB70A4;
	sub_82CB8190(ctx, base);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cb70bc
	if (!ctx.cr6.eq) goto loc_82CB70BC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82CB70BC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// bl 0x82cb8190
	ctx.lr = 0x82CB70CC;
	sub_82CB8190(ctx, base);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82cb70e4
	if (!ctx.cr6.eq) goto loc_82CB70E4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82CB70E4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-212
	ctx.r4.s64 = ctx.r11.s64 + -212;
	// bl 0x82cb8190
	ctx.lr = 0x82CB70F4;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-504
	ctx.r4.s64 = ctx.r11.s64 + -504;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7104;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-520
	ctx.r4.s64 = ctx.r11.s64 + -520;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7114;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-232
	ctx.r4.s64 = ctx.r11.s64 + -232;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7124;
	sub_82CB8190(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB7130"))) PPC_WEAK_FUNC(sub_82CB7130);
PPC_FUNC_IMPL(__imp__sub_82CB7130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e3c
	ctx.lr = 0x82CB7138;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r28,0(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// ori r11,r11,43691
	ctx.r11.u64 = ctx.r11.u64 | 43691;
	// lwz r18,0(r7)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// subf r11,r28,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r28.s64;
	// subf r10,r18,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r18.s64;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mulhw r10,r10,r6
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32)) >> 32;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82cb7480
	if (ctx.cr6.eq) goto loc_82CB7480;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82cb7480
	if (ctx.cr6.eq) goto loc_82CB7480;
	// clrlwi r17,r8,24
	ctx.r17.u64 = ctx.r8.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82cb71bc
	if (ctx.cr6.eq) goto loc_82CB71BC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,1520
	ctx.r4.s64 = ctx.r11.s64 + 1520;
	// b 0x82cb71c4
	goto loc_82CB71C4;
loc_82CB71BC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,1508
	ctx.r4.s64 = ctx.r11.s64 + 1508;
loc_82CB71C4:
	// bl 0x82cb8190
	ctx.lr = 0x82CB71C8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,1476
	ctx.r4.s64 = ctx.r11.s64 + 1476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB71DC;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,1420
	ctx.r4.s64 = ctx.r11.s64 + 1420;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB71F8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r20,r11,1412
	ctx.r20.s64 = ctx.r11.s64 + 1412;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB720C;
	sub_82CB8190(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r22,r11,-5704
	ctx.r22.s64 = ctx.r11.s64 + -5704;
	// beq cr6,0x82cb72b4
	if (ctx.cr6.eq) goto loc_82CB72B4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// mr r19,r29
	ctx.r19.u64 = ctx.r29.u64;
	// addi r21,r11,1400
	ctx.r21.s64 = ctx.r11.s64 + 1400;
loc_82CB7230:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB723C;
	sub_82CB51B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB724C;
	sub_82CB51B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f1,-4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb51b0
	ctx.lr = 0x82CB725C;
	sub_82CB51B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7274;
	sub_82CB8190(ctx, base);
	// clrlwi r11,r25,30
	ctx.r11.u64 = ctx.r25.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb72a0
	if (!ctx.cr6.eq) goto loc_82CB72A0;
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82cb72a0
	if (!ctx.cr6.lt) goto loc_82CB72A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7294;
	sub_82CB8190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB72A0;
	sub_82CB8190(ctx, base);
loc_82CB72A0:
	// addi r19,r19,-1
	ctx.r19.s64 = ctx.r19.s64 + -1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82cb7230
	if (!ctx.cr6.eq) goto loc_82CB7230;
loc_82CB72B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB72C0;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1376
	ctx.r4.s64 = ctx.r11.s64 + 1376;
	// bl 0x82cb8190
	ctx.lr = 0x82CB72D0;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4964
	ctx.r4.s64 = ctx.r11.s64 + -4964;
	// bl 0x82cb8190
	ctx.lr = 0x82CB72E0;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,1304
	ctx.r4.s64 = ctx.r11.s64 + 1304;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB72F8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1260
	ctx.r4.s64 = ctx.r11.s64 + 1260;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7308;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1220
	ctx.r4.s64 = ctx.r11.s64 + 1220;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7318;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1180
	ctx.r4.s64 = ctx.r11.s64 + 1180;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7328;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1160
	ctx.r4.s64 = ctx.r11.s64 + 1160;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7338;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1132
	ctx.r4.s64 = ctx.r11.s64 + 1132;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7348;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1112
	ctx.r4.s64 = ctx.r11.s64 + 1112;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7358;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,1080
	ctx.r4.s64 = ctx.r11.s64 + 1080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB736C;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,1020
	ctx.r4.s64 = ctx.r11.s64 + 1020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7380;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1000
	ctx.r4.s64 = ctx.r11.s64 + 1000;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7390;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r11,948
	ctx.r4.s64 = ctx.r11.s64 + 948;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB73A4;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,880
	ctx.r4.s64 = ctx.r11.s64 + 880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB73B8;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,868
	ctx.r4.s64 = ctx.r11.s64 + 868;
	// bl 0x82cb8190
	ctx.lr = 0x82CB73C8;
	sub_82CB8190(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82cb7434
	if (ctx.cr6.eq) goto loc_82CB7434;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r29,r18,4
	ctx.r29.s64 = ctx.r18.s64 + 4;
	// addi r27,r11,860
	ctx.r27.s64 = ctx.r11.s64 + 860;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r28,r11,848
	ctx.r28.s64 = ctx.r11.s64 + 848;
loc_82CB73E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x82cb8190
	ctx.lr = 0x82CB7400;
	sub_82CB8190(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb7428
	if (!ctx.cr6.eq) goto loc_82CB7428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB741C;
	sub_82CB8190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7428;
	sub_82CB8190(ctx, base);
loc_82CB7428:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82cb73e8
	if (ctx.cr6.lt) goto loc_82CB73E8;
loc_82CB7434:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,840
	ctx.r4.s64 = ctx.r11.s64 + 840;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7444;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,820
	ctx.r4.s64 = ctx.r11.s64 + 820;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7454;
	sub_82CB8190(ctx, base);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82cb7474
	if (ctx.cr6.eq) goto loc_82CB7474;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,800
	ctx.r4.s64 = ctx.r11.s64 + 800;
	// bl 0x82cb8190
	ctx.lr = 0x82CB746C;
	sub_82CB8190(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82e28e8c
	__restgprlr_17(ctx, base);
	return;
loc_82CB7474:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,784
	ctx.r4.s64 = ctx.r11.s64 + 784;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7480;
	sub_82CB8190(ctx, base);
loc_82CB7480:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82e28e8c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB7488"))) PPC_WEAK_FUNC(sub_82CB7488);
PPC_FUNC_IMPL(__imp__sub_82CB7488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e34
	ctx.lr = 0x82CB7490;
	__savegprlr_15(ctx, base);
	// stfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f29.u64);
	// stfd f30,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f30.u64);
	// stfd f31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2860
	ctx.r4.s64 = ctx.r11.s64 + 2860;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r18,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r18.u32);
	// bl 0x82cb8190
	ctx.lr = 0x82CB74C4;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2776
	ctx.r4.s64 = ctx.r11.s64 + 2776;
	// bl 0x82cb8190
	ctx.lr = 0x82CB74D4;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82cb8190
	ctx.lr = 0x82CB74E4;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82cb8190
	ctx.lr = 0x82CB74F4;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2672
	ctx.r4.s64 = ctx.r11.s64 + 2672;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7504;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2584
	ctx.r4.s64 = ctx.r11.s64 + 2584;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7514;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2520
	ctx.r4.s64 = ctx.r11.s64 + 2520;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7524;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,2484
	ctx.r4.s64 = ctx.r11.s64 + 2484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7538;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2464
	ctx.r4.s64 = ctx.r11.s64 + 2464;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7548;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2428
	ctx.r4.s64 = ctx.r11.s64 + 2428;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7558;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2400
	ctx.r4.s64 = ctx.r11.s64 + 2400;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7568;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2388
	ctx.r4.s64 = ctx.r11.s64 + 2388;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7578;
	sub_82CB8190(ctx, base);
	// addi r17,r18,128
	ctx.r17.s64 = ctx.r18.s64 + 128;
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r22,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r22.s64 = ctx.r11.s32 >> 2;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r15,r11,-29048
	ctx.r15.s64 = ctx.r11.s64 + -29048;
	// ble cr6,0x82cb76cc
	if (!ctx.cr6.gt) goto loc_82CB76CC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r19,r11,-31708
	ctx.r19.s64 = ctx.r11.s64 + -31708;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r23,r11,-5128
	ctx.r23.s64 = ctx.r11.s64 + -5128;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r21,r11,2380
	ctx.r21.s64 = ctx.r11.s64 + 2380;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r20,r11,14048
	ctx.r20.s64 = ctx.r11.s64 + 14048;
loc_82CB75C4:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwzx r25,r10,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,232(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// lwz r10,228(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r26,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82cb7648
	if (!ctx.cr6.gt) goto loc_82CB7648;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_82CB75F0:
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r27,r28,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// beq cr6,0x82cb7618
	if (ctx.cr6.eq) goto loc_82CB7618;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82cb7620
	goto loc_82CB7620;
loc_82CB7618:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_82CB7620:
	// bl 0x82e2b400
	ctx.lr = 0x82CB7624;
	sub_82E2B400(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82cb4fb0
	ctx.lr = 0x82CB7634;
	sub_82CB4FB0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r3,236(r27)
	PPC_STORE_U32(ctx.r27.u32 + 236, ctx.r3.u32);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82cb75f0
	if (ctx.cr6.lt) goto loc_82CB75F0;
loc_82CB7648:
	// lwz r11,248(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 248);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwz r10,244(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r26,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82cb76c0
	if (!ctx.cr6.gt) goto loc_82CB76C0;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_82CB7668:
	// lwz r11,244(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r27,r28,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// beq cr6,0x82cb7690
	if (ctx.cr6.eq) goto loc_82CB7690;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82cb7698
	goto loc_82CB7698;
loc_82CB7690:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_82CB7698:
	// bl 0x82e2b400
	ctx.lr = 0x82CB769C;
	sub_82E2B400(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82cb4fb0
	ctx.lr = 0x82CB76AC;
	sub_82CB4FB0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r3,144(r27)
	PPC_STORE_U32(ctx.r27.u32 + 144, ctx.r3.u32);
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82cb7668
	if (ctx.cr6.lt) goto loc_82CB7668;
loc_82CB76C0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82cb75c4
	if (ctx.cr6.lt) goto loc_82CB75C4;
loc_82CB76CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82cb6740
	ctx.lr = 0x82CB76D8;
	sub_82CB6740(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2356
	ctx.r4.s64 = ctx.r11.s64 + 2356;
	// bl 0x82cb8190
	ctx.lr = 0x82CB76E8;
	sub_82CB8190(ctx, base);
	// addi r29,r18,48
	ctx.r29.s64 = ctx.r18.s64 + 48;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r26,r11,1540
	ctx.r26.s64 = ctx.r11.s64 + 1540;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r25,r11,1556
	ctx.r25.s64 = ctx.r11.s64 + 1556;
	// beq cr6,0x82cb7780
	if (ctx.cr6.eq) goto loc_82CB7780;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
loc_82CB771C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r30,r27,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7738;
	sub_82CB8190(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r30,24
	ctx.r7.s64 = ctx.r30.s64 + 24;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82cb7130
	ctx.lr = 0x82CB7754;
	sub_82CB7130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7760;
	sub_82CB8190(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cb771c
	if (ctx.cr6.lt) goto loc_82CB771C;
loc_82CB7780:
	// addi r29,r18,64
	ctx.r29.s64 = ctx.r18.s64 + 64;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb7808
	if (ctx.cr6.eq) goto loc_82CB7808;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
loc_82CB77A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r30,r27,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB77C0;
	sub_82CB8190(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82cb7130
	ctx.lr = 0x82CB77DC;
	sub_82CB7130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB77E8;
	sub_82CB8190(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cb77a4
	if (ctx.cr6.lt) goto loc_82CB77A4;
loc_82CB7808:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2328
	ctx.r4.s64 = ctx.r11.s64 + 2328;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7818;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = ctx.r11.s64 + 2300;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7828;
	sub_82CB8190(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82cb7870
	if (!ctx.cr6.gt) goto loc_82CB7870;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_82CB7848:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82cb6c60
	ctx.lr = 0x82CB7860;
	sub_82CB6C60(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82cb7848
	if (ctx.cr6.lt) goto loc_82CB7848;
loc_82CB7870:
	// addi r21,r18,144
	ctx.r21.s64 = ctx.r18.s64 + 144;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cb7938
	if (ctx.cr6.eq) goto loc_82CB7938;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2236
	ctx.r4.s64 = ctx.r11.s64 + 2236;
	// bl 0x82cb8190
	ctx.lr = 0x82CB789C;
	sub_82CB8190(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb7928
	if (ctx.cr6.eq) goto loc_82CB7928;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// addi r27,r11,-700
	ctx.r27.s64 = ctx.r11.s64 + -700;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r26,r11,-684
	ctx.r26.s64 = ctx.r11.s64 + -684;
loc_82CB78CC:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82cb8190
	ctx.lr = 0x82CB78E8;
	sub_82CB8190(ctx, base);
	// addi r6,r29,12
	ctx.r6.s64 = ctx.r29.s64 + 12;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82cb5470
	ctx.lr = 0x82CB78FC;
	sub_82CB5470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7908;
	sub_82CB8190(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cb78cc
	if (ctx.cr6.lt) goto loc_82CB78CC;
loc_82CB7928:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-320
	ctx.r4.s64 = ctx.r11.s64 + -320;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7938;
	sub_82CB8190(ctx, base);
loc_82CB7938:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2208
	ctx.r4.s64 = ctx.r11.s64 + 2208;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7948;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2176
	ctx.r4.s64 = ctx.r11.s64 + 2176;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7958;
	sub_82CB8190(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82cb79dc
	if (!ctx.cr6.gt) goto loc_82CB79DC;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
loc_82CB7978:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwzx r28,r25,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwz r11,216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// lwz r10,212(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82cb79cc
	if (!ctx.cr6.gt) goto loc_82CB79CC;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_82CB79A0:
	// lwz r11,212(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82cb6660
	ctx.lr = 0x82CB79BC;
	sub_82CB6660(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82cb79a0
	if (ctx.cr6.lt) goto loc_82CB79A0;
loc_82CB79CC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82cb7978
	if (ctx.cr6.lt) goto loc_82CB7978;
loc_82CB79DC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2144
	ctx.r4.s64 = ctx.r11.s64 + 2144;
	// bl 0x82cb8190
	ctx.lr = 0x82CB79EC;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2116
	ctx.r4.s64 = ctx.r11.s64 + 2116;
	// bl 0x82cb8190
	ctx.lr = 0x82CB79FC;
	sub_82CB8190(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82cb7aec
	if (!ctx.cr6.gt) goto loc_82CB7AEC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// addi r22,r11,-576
	ctx.r22.s64 = ctx.r11.s64 + -576;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r25,r11,2068
	ctx.r25.s64 = ctx.r11.s64 + 2068;
loc_82CB7A2C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7A3C;
	sub_82CB8190(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwzx r30,r26,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82cb7a88
	if (!ctx.cr6.gt) goto loc_82CB7A88;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_82CB7A60:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r5,r28,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82cb6ce8
	ctx.lr = 0x82CB7A78;
	sub_82CB6CE8(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82cb7a60
	if (!ctx.cr6.eq) goto loc_82CB7A60;
loc_82CB7A88:
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82cb7ad0
	if (!ctx.cr6.gt) goto loc_82CB7AD0;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_82CB7AA4:
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r5,r28,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82cb5cf0
	ctx.lr = 0x82CB7AC0;
	sub_82CB5CF0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82cb7aa4
	if (!ctx.cr6.eq) goto loc_82CB7AA4;
loc_82CB7AD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7ADC;
	sub_82CB8190(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82cb7a2c
	if (ctx.cr6.lt) goto loc_82CB7A2C;
loc_82CB7AEC:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82cb7b34
	if (!ctx.cr6.gt) goto loc_82CB7B34;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_82CB7B0C:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82cb6a70
	ctx.lr = 0x82CB7B24;
	sub_82CB6A70(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82cb7b0c
	if (ctx.cr6.lt) goto loc_82CB7B0C;
loc_82CB7B34:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2036
	ctx.r4.s64 = ctx.r11.s64 + 2036;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7B44;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2008
	ctx.r4.s64 = ctx.r11.s64 + 2008;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7B54;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1960
	ctx.r4.s64 = ctx.r11.s64 + 1960;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7B64;
	sub_82CB8190(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cb7bfc
	if (ctx.cr6.eq) goto loc_82CB7BFC;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb7c48
	if (ctx.cr6.eq) goto loc_82CB7C48;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// addi r28,r11,1864
	ctx.r28.s64 = ctx.r11.s64 + 1864;
loc_82CB7BA4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82ce32f0
	ctx.lr = 0x82CB7BBC;
	sub_82CE32F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb7bd8
	if (ctx.cr6.eq) goto loc_82CB7BD8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7BD8;
	sub_82CB8190(ctx, base);
loc_82CB7BD8:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cb7ba4
	if (ctx.cr6.lt) goto loc_82CB7BA4;
	// b 0x82cb7c48
	goto loc_82CB7C48;
loc_82CB7BFC:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb7c48
	if (ctx.cr6.eq) goto loc_82CB7C48;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r29,r11,1796
	ctx.r29.s64 = ctx.r11.s64 + 1796;
loc_82CB7C1C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7C2C;
	sub_82CB8190(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82cb7c1c
	if (ctx.cr6.lt) goto loc_82CB7C1C;
loc_82CB7C48:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lfs f31,-13892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13892);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// lfs f30,1792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1792);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82cb7c88
	if (ctx.cr6.eq) goto loc_82CB7C88;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f31,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
loc_82CB7C88:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1876
	ctx.r4.s64 = ctx.r11.s64 + -1876;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7C98;
	sub_82CB8190(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB7CA4;
	sub_82CB51B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB7CB4;
	sub_82CB51B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82cb51b0
	ctx.lr = 0x82CB7CC4;
	sub_82CB51B0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,1756
	ctx.r4.s64 = ctx.r11.s64 + 1756;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7CE0;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2032
	ctx.r4.s64 = ctx.r11.s64 + -2032;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7CF0;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1732
	ctx.r4.s64 = ctx.r11.s64 + 1732;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7D00;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1700
	ctx.r4.s64 = ctx.r11.s64 + 1700;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7D10;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1688
	ctx.r4.s64 = ctx.r11.s64 + 1688;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7D20;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1628
	ctx.r4.s64 = ctx.r11.s64 + 1628;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7D30;
	sub_82CB8190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1616
	ctx.r4.s64 = ctx.r11.s64 + 1616;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7D40;
	sub_82CB8190(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82cb7db4
	if (!ctx.cr6.gt) goto loc_82CB7DB4;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82CB7D60:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r11,232(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 232);
	// lwz r10,228(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82cb7da4
	if (!ctx.cr6.gt) goto loc_82CB7DA4;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_82CB7D84:
	// lwz r9,228(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r16,236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 236, ctx.r16.u32);
	// bne cr6,0x82cb7d84
	if (!ctx.cr6.eq) goto loc_82CB7D84;
loc_82CB7DA4:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82cb7d60
	if (!ctx.cr6.eq) goto loc_82CB7D60;
loc_82CB7DB4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1600
	ctx.r4.s64 = ctx.r11.s64 + 1600;
	// bl 0x82cb8190
	ctx.lr = 0x82CB7DC4;
	sub_82CB8190(ctx, base);
	// lwz r3,0(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb7de4
	if (ctx.cr6.eq) goto loc_82CB7DE4;
loc_82CB7DD0:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82545ee8
	ctx.lr = 0x82CB7DD8;
	sub_82545EE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82cb7dd0
	if (!ctx.cr6.eq) goto loc_82CB7DD0;
loc_82CB7DE4:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// stw r11,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r11.u32);
	// stw r11,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r11.u32);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// lfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f30,-160(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82e28e84
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB7E10"))) PPC_WEAK_FUNC(sub_82CB7E10);
PPC_FUNC_IMPL(__imp__sub_82CB7E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x82CB7E18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stb r30,529(r31)
	PPC_STORE_U8(ctx.r31.u32 + 529, ctx.r30.u8);
	// stb r26,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r26.u8);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// beq cr6,0x82cb7ea0
	if (ctx.cr6.eq) goto loc_82CB7EA0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,2904
	ctx.r4.s64 = ctx.r11.s64 + 2904;
	// bl 0x82e2e820
	ctx.lr = 0x82CB7E68;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb7ea0
	if (!ctx.cr6.eq) goto loc_82CB7EA0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// beq cr6,0x82cb7e84
	if (ctx.cr6.eq) goto loc_82CB7E84;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82cb7ea0
	if (!ctx.cr6.eq) goto loc_82CB7EA0;
loc_82CB7E84:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r30,r11,16960
	ctx.r30.u64 = ctx.r11.u64 | 16960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82545e80
	ctx.lr = 0x82CB7E94;
	sub_82545E80(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r26,529(r31)
	PPC_STORE_U8(ctx.r31.u32 + 529, ctx.r26.u8);
loc_82CB7EA0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb7ebc
	if (!ctx.cr6.eq) goto loc_82CB7EBC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e2c5f8
	ctx.lr = 0x82CB7EB8;
	sub_82E2C5F8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82CB7EBC:
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,17
	ctx.r3.s64 = ctx.r31.s64 + 17;
	// bl 0x82e2ab28
	ctx.lr = 0x82CB7ECC;
	sub_82E2AB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB7ED8"))) PPC_WEAK_FUNC(sub_82CB7ED8);
PPC_FUNC_IMPL(__imp__sub_82CB7ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CB7EE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82cb7f54
	if (ctx.cr6.lt) goto loc_82CB7F54;
	// lbz r10,529(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 529);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cb7f54
	if (ctx.cr6.eq) goto loc_82CB7F54;
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// ori r10,r10,33920
	ctx.r10.u64 = ctx.r10.u64 | 33920;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82cb7f2c
	if (!ctx.cr6.gt) goto loc_82CB7F2C;
	// add r29,r30,r10
	ctx.r29.u64 = ctx.r30.u64 + ctx.r10.u64;
loc_82CB7F2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82545e80
	ctx.lr = 0x82CB7F34;
	sub_82545E80(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x82CB7F44;
	sub_82E28FD0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82545ee8
	ctx.lr = 0x82CB7F4C;
	sub_82545EE8(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82CB7F54:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82cb7f94
	if (ctx.cr6.gt) goto loc_82CB7F94;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x82CB7F7C;
	sub_82E28FD0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
loc_82CB7F94:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB7FA0"))) PPC_WEAK_FUNC(sub_82CB7FA0);
PPC_FUNC_IMPL(__imp__sub_82CB7FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CB7FA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82cb7fe0
	if (ctx.cr6.eq) goto loc_82CB7FE0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2cba8
	ctx.lr = 0x82CB7FD8;
	sub_82E2CBA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
loc_82CB7FE0:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82cb8038
	if (!ctx.cr6.gt) goto loc_82CB8038;
loc_82CB7FF0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82cb8038
	if (ctx.cr6.gt) goto loc_82CB8038;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x82CB8018;
	sub_82E28FD0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r28,r28,r30
	ctx.r28.u64 = ctx.r28.u64 + ctx.r30.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// blt cr6,0x82cb7ff0
	if (ctx.cr6.lt) goto loc_82CB7FF0;
loc_82CB8038:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB8048"))) PPC_WEAK_FUNC(sub_82CB8048);
PPC_FUNC_IMPL(__imp__sub_82CB8048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x82CB8050;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82cb8088
	if (ctx.cr6.eq) goto loc_82CB8088;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82e2ce38
	ctx.lr = 0x82CB8080;
	sub_82E2CE38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
loc_82CB8088:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82cb80c4
	if (!ctx.cr6.gt) goto loc_82CB80C4;
loc_82CB8098:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82cb7ed8
	ctx.lr = 0x82CB80A8;
	sub_82CB7ED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82cb80c4
	if (ctx.cr6.eq) goto loc_82CB80C4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82cb8098
	if (ctx.cr6.lt) goto loc_82CB8098;
loc_82CB80C4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB80D0"))) PPC_WEAK_FUNC(sub_82CB80D0);
PPC_FUNC_IMPL(__imp__sub_82CB80D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cb8118
	if (ctx.cr6.eq) goto loc_82CB8118;
	// lbz r11,529(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 529);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb8100
	if (ctx.cr6.eq) goto loc_82CB8100;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82545ee8
	ctx.lr = 0x82CB8100;
	sub_82545EE8(ctx, base);
loc_82CB8100:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb8110
	if (ctx.cr6.eq) goto loc_82CB8110;
	// bl 0x82e2c6c0
	ctx.lr = 0x82CB8110;
	sub_82E2C6C0(ctx, base);
loc_82CB8110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82545ee8
	ctx.lr = 0x82CB8118;
	sub_82545EE8(ctx, base);
loc_82CB8118:
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

__attribute__((alias("__imp__sub_82CB8130"))) PPC_WEAK_FUNC(sub_82CB8130);
PPC_FUNC_IMPL(__imp__sub_82CB8130) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82cb7fa0
	sub_82CB7FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB8158"))) PPC_WEAK_FUNC(sub_82CB8158);
PPC_FUNC_IMPL(__imp__sub_82CB8158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB8160"))) PPC_WEAK_FUNC(sub_82CB8160);
PPC_FUNC_IMPL(__imp__sub_82CB8160) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82cb8048
	sub_82CB8048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB8188"))) PPC_WEAK_FUNC(sub_82CB8188);
PPC_FUNC_IMPL(__imp__sub_82CB8188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB8190"))) PPC_WEAK_FUNC(sub_82CB8190);
PPC_FUNC_IMPL(__imp__sub_82CB8190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2208
	ctx.r10.s64 = ctx.r1.s64 + 2208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e30e98
	ctx.lr = 0x82CB81DC;
	sub_82E30E98(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cb821c
	if (ctx.cr6.eq) goto loc_82CB821C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82CB81EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82cb81ec
	if (!ctx.cr6.eq) goto loc_82CB81EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cb8048
	ctx.lr = 0x82CB8218;
	sub_82CB8048(ctx, base);
	// b 0x82cb8220
	goto loc_82CB8220;
loc_82CB821C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CB8220:
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB8238"))) PPC_WEAK_FUNC(sub_82CB8238);
PPC_FUNC_IMPL(__imp__sub_82CB8238) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82e2bee0
	sub_82E2BEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB825C"))) PPC_WEAK_FUNC(sub_82CB825C);
PPC_FUNC_IMPL(__imp__sub_82CB825C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB8260"))) PPC_WEAK_FUNC(sub_82CB8260);
PPC_FUNC_IMPL(__imp__sub_82CB8260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb82dc
	if (ctx.cr6.eq) goto loc_82CB82DC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cb82a0
	if (ctx.cr6.eq) goto loc_82CB82A0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82e2d650
	ctx.lr = 0x82CB8290;
	sub_82E2D650(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CB82A0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82cb82cc
	if (!ctx.cr6.eq) goto loc_82CB82CC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82cb82dc
	if (ctx.cr6.gt) goto loc_82CB82DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CB82CC:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82cb82dc
	if (!ctx.cr6.eq) goto loc_82CB82DC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82CB82DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB82F0"))) PPC_WEAK_FUNC(sub_82CB82F0);
PPC_FUNC_IMPL(__imp__sub_82CB82F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb8330
	if (ctx.cr6.eq) goto loc_82CB8330;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb832c
	if (ctx.cr6.eq) goto loc_82CB832C;
	// bl 0x82e2d478
	ctx.lr = 0x82CB831C;
	sub_82E2D478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CB832C:
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82CB8330:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB8340"))) PPC_WEAK_FUNC(sub_82CB8340);
PPC_FUNC_IMPL(__imp__sub_82CB8340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb8398
	if (ctx.cr6.eq) goto loc_82CB8398;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82cb8388
	if (ctx.cr6.eq) goto loc_82CB8388;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x82e2db90
	ctx.lr = 0x82CB8378;
	sub_82E2DB90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CB8388:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82cb7ed8
	ctx.lr = 0x82CB8398;
	sub_82CB7ED8(ctx, base);
loc_82CB8398:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB83A8"))) PPC_WEAK_FUNC(sub_82CB83A8);
PPC_FUNC_IMPL(__imp__sub_82CB83A8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82CB83CC:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82cb83cc
	if (!ctx.cr6.eq) goto loc_82CB83CC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x82cb8048
	sub_82CB8048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB83F8"))) PPC_WEAK_FUNC(sub_82CB83F8);
PPC_FUNC_IMPL(__imp__sub_82CB83F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB8400"))) PPC_WEAK_FUNC(sub_82CB8400);
PPC_FUNC_IMPL(__imp__sub_82CB8400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb8454
	if (ctx.cr6.eq) goto loc_82CB8454;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82cb8440
	if (ctx.cr6.eq) goto loc_82CB8440;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82e30ea8
	ctx.lr = 0x82CB8430;
	sub_82E30EA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82CB8440:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82cb8454
	if (ctx.cr6.lt) goto loc_82CB8454;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CB8454:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB8468"))) PPC_WEAK_FUNC(sub_82CB8468);
PPC_FUNC_IMPL(__imp__sub_82CB8468) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82e30f08
	sub_82E30F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB848C"))) PPC_WEAK_FUNC(sub_82CB848C);
PPC_FUNC_IMPL(__imp__sub_82CB848C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB8490"))) PPC_WEAK_FUNC(sub_82CB8490);
PPC_FUNC_IMPL(__imp__sub_82CB8490) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stb r10,529(r11)
	PPC_STORE_U8(ctx.r11.u32 + 529, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB84C8"))) PPC_WEAK_FUNC(sub_82CB84C8);
PPC_FUNC_IMPL(__imp__sub_82CB84C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e64
	ctx.lr = 0x82CB84D0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,532
	ctx.r3.s64 = 532;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82545e80
	ctx.lr = 0x82CB84F0;
	sub_82545E80(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb8518
	if (ctx.cr6.eq) goto loc_82CB8518;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cb7e10
	ctx.lr = 0x82CB8510;
	sub_82CB7E10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82cb851c
	goto loc_82CB851C;
loc_82CB8518:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82CB851C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82cb8570
	if (!ctx.cr6.eq) goto loc_82CB8570;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb8570
	if (!ctx.cr6.eq) goto loc_82CB8570;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82cb8570
	if (!ctx.cr6.eq) goto loc_82CB8570;
	// lbz r11,529(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 529);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82cb8550
	if (ctx.cr6.eq) goto loc_82CB8550;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82545ee8
	ctx.lr = 0x82CB8550;
	sub_82545EE8(ctx, base);
loc_82CB8550:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82cb8560
	if (ctx.cr6.eq) goto loc_82CB8560;
	// bl 0x82e2c6c0
	ctx.lr = 0x82CB8560;
	sub_82E2C6C0(ctx, base);
loc_82CB8560:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82545ee8
	ctx.lr = 0x82CB8568;
	sub_82545EE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cb8574
	goto loc_82CB8574;
loc_82CB8570:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CB8574:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82e28eb4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB857C"))) PPC_WEAK_FUNC(sub_82CB857C);
PPC_FUNC_IMPL(__imp__sub_82CB857C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82545ee8
	ctx.lr = 0x82CB8594;
	sub_82545EE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB85A8"))) PPC_WEAK_FUNC(sub_82CB85A8);
PPC_FUNC_IMPL(__imp__sub_82CB85A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,32332
	ctx.r11.s64 = ctx.r11.s64 + 32332;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB85B8"))) PPC_WEAK_FUNC(sub_82CB85B8);
PPC_FUNC_IMPL(__imp__sub_82CB85B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lfs f13,-13896(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13892(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
loc_82CB85DC:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// stfs f0,-28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// stfs f0,-24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne cr6,0x82cb85dc
	if (!ctx.cr6.eq) goto loc_82CB85DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// lfs f0,-18528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18528);
	ctx.f0.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB8638"))) PPC_WEAK_FUNC(sub_82CB8638);
PPC_FUNC_IMPL(__imp__sub_82CB8638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lfs f13,-13896(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13892(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
loc_82CB865C:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// stfs f0,-28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// stfs f0,-24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne cr6,0x82cb865c
	if (!ctx.cr6.eq) goto loc_82CB865C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// lfs f12,-18528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18528);
	ctx.f12.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f12,92(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f13,156(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stw r10,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB8700"))) PPC_WEAK_FUNC(sub_82CB8700);
PPC_FUNC_IMPL(__imp__sub_82CB8700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,-22380
	ctx.r11.s64 = ctx.r11.s64 + -22380;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB8710"))) PPC_WEAK_FUNC(sub_82CB8710);
PPC_FUNC_IMPL(__imp__sub_82CB8710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r8,8
	ctx.r8.s64 = 8;
	// lfs f13,-13896(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f12,-13880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13880);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-13892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// sth r10,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r10.u16);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// sth r10,62(r3)
	PPC_STORE_U16(ctx.r3.u32 + 62, ctx.r10.u16);
	// stfs f12,72(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB87B0"))) PPC_WEAK_FUNC(sub_82CB87B0);
PPC_FUNC_IMPL(__imp__sub_82CB87B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// lfs f0,-13892(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13892);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stfs f0,-84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// stfs f0,-100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// stfs f0,-52(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f12,-120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f12,-104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f13,-13896(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13896);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lfs f12,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r10,64
	ctx.r11.s64 = ctx.r10.s64 + 64;
	// lfs f0,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-68(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
loc_82CB88B4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82cb88d4
	if (!ctx.cr0.eq) goto loc_82CB88D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82cb88b4
	if (!ctx.cr6.eq) goto loc_82CB88B4;
loc_82CB88D4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB88E8"))) PPC_WEAK_FUNC(sub_82CB88E8);
PPC_FUNC_IMPL(__imp__sub_82CB88E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB8938"))) PPC_WEAK_FUNC(sub_82CB8938);
PPC_FUNC_IMPL(__imp__sub_82CB8938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82cb8974
	if (!ctx.cr6.eq) goto loc_82CB8974;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82cb8974
	if (!ctx.cr6.eq) goto loc_82CB8974;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82cb8978
	if (ctx.cr6.eq) goto loc_82CB8978;
loc_82CB8974:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CB8978:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82cb89b8
	if (!ctx.cr6.eq) goto loc_82CB89B8;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82cb89b8
	if (!ctx.cr6.eq) goto loc_82CB89B8;
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82cb89bc
	if (ctx.cr6.eq) goto loc_82CB89BC;
loc_82CB89B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CB89BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB89D0"))) PPC_WEAK_FUNC(sub_82CB89D0);
PPC_FUNC_IMPL(__imp__sub_82CB89D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// bgt cr6,0x82cb9000
	if (ctx.cr6.gt) goto loc_82CB9000;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-30220
	ctx.r12.s64 = ctx.r12.s64 + -30220;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82CB8AF8;
	case 1:
		goto loc_82CB8B0C;
	case 2:
		goto loc_82CB8B20;
	case 3:
		goto loc_82CB8B34;
	case 4:
		goto loc_82CB8B48;
	case 5:
		goto loc_82CB8B5C;
	case 6:
		goto loc_82CB8B70;
	case 7:
		goto loc_82CB8B84;
	case 8:
		goto loc_82CB8B98;
	case 9:
		goto loc_82CB8BAC;
	case 10:
		goto loc_82CB8BC0;
	case 11:
		goto loc_82CB8BD4;
	case 12:
		goto loc_82CB8BE8;
	case 13:
		goto loc_82CB8BFC;
	case 14:
		goto loc_82CB8C10;
	case 15:
		goto loc_82CB8C24;
	case 16:
		goto loc_82CB8C38;
	case 17:
		goto loc_82CB8C4C;
	case 18:
		goto loc_82CB8C60;
	case 19:
		goto loc_82CB8C74;
	case 20:
		goto loc_82CB8C88;
	case 21:
		goto loc_82CB8C9C;
	case 22:
		goto loc_82CB8CB0;
	case 23:
		goto loc_82CB8CC4;
	case 24:
		goto loc_82CB8CD8;
	case 25:
		goto loc_82CB8CEC;
	case 26:
		goto loc_82CB8D00;
	case 27:
		goto loc_82CB8D14;
	case 28:
		goto loc_82CB8D28;
	case 29:
		goto loc_82CB8D3C;
	case 30:
		goto loc_82CB8D50;
	case 31:
		goto loc_82CB8D64;
	case 32:
		goto loc_82CB8D78;
	case 33:
		goto loc_82CB8D8C;
	case 34:
		goto loc_82CB8DA0;
	case 35:
		goto loc_82CB8DB4;
	case 36:
		goto loc_82CB8DC8;
	case 37:
		goto loc_82CB8DDC;
	case 38:
		goto loc_82CB8DF0;
	case 39:
		goto loc_82CB8E04;
	case 40:
		goto loc_82CB8E18;
	case 41:
		goto loc_82CB8E2C;
	case 42:
		goto loc_82CB8E40;
	case 43:
		goto loc_82CB8E54;
	case 44:
		goto loc_82CB8E68;
	case 45:
		goto loc_82CB8E7C;
	case 46:
		goto loc_82CB8E90;
	case 47:
		goto loc_82CB8EA4;
	case 48:
		goto loc_82CB8EB8;
	case 49:
		goto loc_82CB8ECC;
	case 50:
		goto loc_82CB8EE0;
	case 51:
		goto loc_82CB8EF4;
	case 52:
		goto loc_82CB8F08;
	case 53:
		goto loc_82CB8F1C;
	case 54:
		goto loc_82CB8F30;
	case 55:
		goto loc_82CB8F44;
	case 56:
		goto loc_82CB8F58;
	case 57:
		goto loc_82CB8F6C;
	case 58:
		goto loc_82CB8F80;
	case 59:
		goto loc_82CB8F94;
	case 60:
		goto loc_82CB8FA8;
	case 61:
		goto loc_82CB8FBC;
	case 62:
		goto loc_82CB8FD0;
	case 63:
		goto loc_82CB8FE4;
	case 64:
		goto loc_82CB8FF8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-29960(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29960);
	// lwz r22,-29940(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29940);
	// lwz r22,-29920(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29920);
	// lwz r22,-29900(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29900);
	// lwz r22,-29880(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29880);
	// lwz r22,-29860(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29860);
	// lwz r22,-29840(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29840);
	// lwz r22,-29820(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29820);
	// lwz r22,-29800(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29800);
	// lwz r22,-29780(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29780);
	// lwz r22,-29760(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29760);
	// lwz r22,-29740(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29740);
	// lwz r22,-29720(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29720);
	// lwz r22,-29700(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29700);
	// lwz r22,-29680(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29680);
	// lwz r22,-29660(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29660);
	// lwz r22,-29640(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29640);
	// lwz r22,-29620(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29620);
	// lwz r22,-29600(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29600);
	// lwz r22,-29580(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29580);
	// lwz r22,-29560(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29560);
	// lwz r22,-29540(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29540);
	// lwz r22,-29520(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29520);
	// lwz r22,-29500(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29500);
	// lwz r22,-29480(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29480);
	// lwz r22,-29460(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29460);
	// lwz r22,-29440(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29440);
	// lwz r22,-29420(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29420);
	// lwz r22,-29400(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29400);
	// lwz r22,-29380(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29380);
	// lwz r22,-29360(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29360);
	// lwz r22,-29340(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29340);
	// lwz r22,-29320(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29320);
	// lwz r22,-29300(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29300);
	// lwz r22,-29280(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29280);
	// lwz r22,-29260(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29260);
	// lwz r22,-29240(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29240);
	// lwz r22,-29220(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29220);
	// lwz r22,-29200(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29200);
	// lwz r22,-29180(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29180);
	// lwz r22,-29160(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29160);
	// lwz r22,-29140(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29140);
	// lwz r22,-29120(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29120);
	// lwz r22,-29100(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29100);
	// lwz r22,-29080(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29080);
	// lwz r22,-29060(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29060);
	// lwz r22,-29040(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29040);
	// lwz r22,-29020(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29020);
	// lwz r22,-29000(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29000);
	// lwz r22,-28980(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28980);
	// lwz r22,-28960(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28960);
	// lwz r22,-28940(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28940);
	// lwz r22,-28920(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28920);
	// lwz r22,-28900(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28900);
	// lwz r22,-28880(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28880);
	// lwz r22,-28860(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28860);
	// lwz r22,-28840(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28840);
	// lwz r22,-28820(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28820);
	// lwz r22,-28800(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28800);
	// lwz r22,-28780(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28780);
	// lwz r22,-28760(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28760);
	// lwz r22,-28740(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28740);
	// lwz r22,-28720(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28720);
	// lwz r22,-28700(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28700);
	// lwz r22,-28680(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28680);
loc_82CB8AF8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1824
	ctx.r11.s64 = ctx.r11.s64 + -1824;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8B0C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1804
	ctx.r11.s64 = ctx.r11.s64 + -1804;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8B20:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1788
	ctx.r11.s64 = ctx.r11.s64 + -1788;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8B34:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1752
	ctx.r11.s64 = ctx.r11.s64 + -1752;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8B48:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1716
	ctx.r11.s64 = ctx.r11.s64 + -1716;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8B5C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1696
	ctx.r11.s64 = ctx.r11.s64 + -1696;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8B70:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1672
	ctx.r11.s64 = ctx.r11.s64 + -1672;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8B84:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1648
	ctx.r11.s64 = ctx.r11.s64 + -1648;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8B98:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1624
	ctx.r11.s64 = ctx.r11.s64 + -1624;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8BAC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1604
	ctx.r11.s64 = ctx.r11.s64 + -1604;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8BC0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1580
	ctx.r11.s64 = ctx.r11.s64 + -1580;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8BD4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1556
	ctx.r11.s64 = ctx.r11.s64 + -1556;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8BE8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1532
	ctx.r11.s64 = ctx.r11.s64 + -1532;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8BFC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1504
	ctx.r11.s64 = ctx.r11.s64 + -1504;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8C10:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1472
	ctx.r11.s64 = ctx.r11.s64 + -1472;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8C24:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1440
	ctx.r11.s64 = ctx.r11.s64 + -1440;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8C38:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8C4C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1376
	ctx.r11.s64 = ctx.r11.s64 + -1376;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8C60:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1344
	ctx.r11.s64 = ctx.r11.s64 + -1344;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8C74:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1316
	ctx.r11.s64 = ctx.r11.s64 + -1316;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8C88:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1288
	ctx.r11.s64 = ctx.r11.s64 + -1288;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8C9C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1260
	ctx.r11.s64 = ctx.r11.s64 + -1260;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8CB0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1232
	ctx.r11.s64 = ctx.r11.s64 + -1232;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8CC4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1204
	ctx.r11.s64 = ctx.r11.s64 + -1204;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8CD8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1180
	ctx.r11.s64 = ctx.r11.s64 + -1180;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8CEC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1148
	ctx.r11.s64 = ctx.r11.s64 + -1148;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8D00:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1116
	ctx.r11.s64 = ctx.r11.s64 + -1116;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8D14:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1088
	ctx.r11.s64 = ctx.r11.s64 + -1088;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8D28:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1052
	ctx.r11.s64 = ctx.r11.s64 + -1052;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8D3C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-1020
	ctx.r11.s64 = ctx.r11.s64 + -1020;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8D50:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-988
	ctx.r11.s64 = ctx.r11.s64 + -988;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8D64:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-956
	ctx.r11.s64 = ctx.r11.s64 + -956;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8D78:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-924
	ctx.r11.s64 = ctx.r11.s64 + -924;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8D8C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-896
	ctx.r11.s64 = ctx.r11.s64 + -896;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8DA0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-864
	ctx.r11.s64 = ctx.r11.s64 + -864;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8DB4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-832
	ctx.r11.s64 = ctx.r11.s64 + -832;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8DC8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-804
	ctx.r11.s64 = ctx.r11.s64 + -804;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8DDC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-776
	ctx.r11.s64 = ctx.r11.s64 + -776;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8DF0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-740
	ctx.r11.s64 = ctx.r11.s64 + -740;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8E04:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-712
	ctx.r11.s64 = ctx.r11.s64 + -712;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8E18:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-684
	ctx.r11.s64 = ctx.r11.s64 + -684;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8E2C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-656
	ctx.r11.s64 = ctx.r11.s64 + -656;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8E40:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-620
	ctx.r11.s64 = ctx.r11.s64 + -620;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8E54:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-592
	ctx.r11.s64 = ctx.r11.s64 + -592;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8E68:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-564
	ctx.r11.s64 = ctx.r11.s64 + -564;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8E7C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-532
	ctx.r11.s64 = ctx.r11.s64 + -532;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8E90:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-496
	ctx.r11.s64 = ctx.r11.s64 + -496;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8EA4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-460
	ctx.r11.s64 = ctx.r11.s64 + -460;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8EB8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-428
	ctx.r11.s64 = ctx.r11.s64 + -428;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8ECC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-400
	ctx.r11.s64 = ctx.r11.s64 + -400;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8EE0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-376
	ctx.r11.s64 = ctx.r11.s64 + -376;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8EF4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-344
	ctx.r11.s64 = ctx.r11.s64 + -344;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8F08:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-308
	ctx.r11.s64 = ctx.r11.s64 + -308;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8F1C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-276
	ctx.r11.s64 = ctx.r11.s64 + -276;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8F30:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-248
	ctx.r11.s64 = ctx.r11.s64 + -248;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8F44:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-228
	ctx.r11.s64 = ctx.r11.s64 + -228;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8F58:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-204
	ctx.r11.s64 = ctx.r11.s64 + -204;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8F6C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-176
	ctx.r11.s64 = ctx.r11.s64 + -176;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8F80:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-156
	ctx.r11.s64 = ctx.r11.s64 + -156;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8F94:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-124
	ctx.r11.s64 = ctx.r11.s64 + -124;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8FA8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-108
	ctx.r11.s64 = ctx.r11.s64 + -108;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8FBC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8FD0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8FE4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB8FF8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,4832
	ctx.r11.s64 = ctx.r11.s64 + 4832;
loc_82CB9000:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB9008"))) PPC_WEAK_FUNC(sub_82CB9008);
PPC_FUNC_IMPL(__imp__sub_82CB9008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB9010;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cb9b48
	if (ctx.cr6.eq) goto loc_82CB9B48;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,6680
	ctx.r30.s64 = ctx.r11.s64 + 6680;
	// addi r4,r30,-1824
	ctx.r4.s64 = ctx.r30.s64 + -1824;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9038;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9058
	if (!ctx.cr6.eq) goto loc_82CB9058;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9058:
	// addi r4,r30,-1804
	ctx.r4.s64 = ctx.r30.s64 + -1804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9064;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9080
	if (!ctx.cr6.eq) goto loc_82CB9080;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9080:
	// addi r4,r30,-1788
	ctx.r4.s64 = ctx.r30.s64 + -1788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB908C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb90ac
	if (!ctx.cr6.eq) goto loc_82CB90AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB90AC:
	// addi r4,r30,-1752
	ctx.r4.s64 = ctx.r30.s64 + -1752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB90B8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb90d8
	if (!ctx.cr6.eq) goto loc_82CB90D8;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB90D8:
	// addi r4,r30,-1716
	ctx.r4.s64 = ctx.r30.s64 + -1716;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB90E4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9104
	if (!ctx.cr6.eq) goto loc_82CB9104;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9104:
	// addi r4,r30,-1696
	ctx.r4.s64 = ctx.r30.s64 + -1696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9110;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9130
	if (!ctx.cr6.eq) goto loc_82CB9130;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9130:
	// addi r4,r30,-1672
	ctx.r4.s64 = ctx.r30.s64 + -1672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB913C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb915c
	if (!ctx.cr6.eq) goto loc_82CB915C;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB915C:
	// addi r4,r30,-1648
	ctx.r4.s64 = ctx.r30.s64 + -1648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9168;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9188
	if (!ctx.cr6.eq) goto loc_82CB9188;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9188:
	// addi r4,r30,-1624
	ctx.r4.s64 = ctx.r30.s64 + -1624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9194;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb91b4
	if (!ctx.cr6.eq) goto loc_82CB91B4;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB91B4:
	// addi r4,r30,-1604
	ctx.r4.s64 = ctx.r30.s64 + -1604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB91C0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb91e0
	if (!ctx.cr6.eq) goto loc_82CB91E0;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB91E0:
	// addi r4,r30,-1580
	ctx.r4.s64 = ctx.r30.s64 + -1580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB91EC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb920c
	if (!ctx.cr6.eq) goto loc_82CB920C;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB920C:
	// addi r4,r30,-1556
	ctx.r4.s64 = ctx.r30.s64 + -1556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9218;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9238
	if (!ctx.cr6.eq) goto loc_82CB9238;
	// li r11,11
	ctx.r11.s64 = 11;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9238:
	// addi r4,r30,-1532
	ctx.r4.s64 = ctx.r30.s64 + -1532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9244;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9264
	if (!ctx.cr6.eq) goto loc_82CB9264;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9264:
	// addi r4,r30,-1504
	ctx.r4.s64 = ctx.r30.s64 + -1504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9270;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9290
	if (!ctx.cr6.eq) goto loc_82CB9290;
	// li r11,13
	ctx.r11.s64 = 13;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9290:
	// addi r4,r30,-1472
	ctx.r4.s64 = ctx.r30.s64 + -1472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB929C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb92bc
	if (!ctx.cr6.eq) goto loc_82CB92BC;
	// li r11,14
	ctx.r11.s64 = 14;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB92BC:
	// addi r4,r30,-1440
	ctx.r4.s64 = ctx.r30.s64 + -1440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB92C8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb92e8
	if (!ctx.cr6.eq) goto loc_82CB92E8;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB92E8:
	// addi r4,r30,-1408
	ctx.r4.s64 = ctx.r30.s64 + -1408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB92F4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9314
	if (!ctx.cr6.eq) goto loc_82CB9314;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9314:
	// addi r4,r30,-1376
	ctx.r4.s64 = ctx.r30.s64 + -1376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9320;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9340
	if (!ctx.cr6.eq) goto loc_82CB9340;
	// li r11,17
	ctx.r11.s64 = 17;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9340:
	// addi r4,r30,-1344
	ctx.r4.s64 = ctx.r30.s64 + -1344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB934C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb936c
	if (!ctx.cr6.eq) goto loc_82CB936C;
	// li r11,18
	ctx.r11.s64 = 18;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB936C:
	// addi r4,r30,-1316
	ctx.r4.s64 = ctx.r30.s64 + -1316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9378;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9398
	if (!ctx.cr6.eq) goto loc_82CB9398;
	// li r11,19
	ctx.r11.s64 = 19;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9398:
	// addi r4,r30,-1288
	ctx.r4.s64 = ctx.r30.s64 + -1288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB93A4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb93c4
	if (!ctx.cr6.eq) goto loc_82CB93C4;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB93C4:
	// addi r4,r30,-1260
	ctx.r4.s64 = ctx.r30.s64 + -1260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB93D0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb93f0
	if (!ctx.cr6.eq) goto loc_82CB93F0;
	// li r11,21
	ctx.r11.s64 = 21;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB93F0:
	// addi r4,r30,-1232
	ctx.r4.s64 = ctx.r30.s64 + -1232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB93FC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb941c
	if (!ctx.cr6.eq) goto loc_82CB941C;
	// li r11,22
	ctx.r11.s64 = 22;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB941C:
	// addi r4,r30,-1204
	ctx.r4.s64 = ctx.r30.s64 + -1204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9428;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9448
	if (!ctx.cr6.eq) goto loc_82CB9448;
	// li r11,23
	ctx.r11.s64 = 23;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9448:
	// addi r4,r30,-1180
	ctx.r4.s64 = ctx.r30.s64 + -1180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9454;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9474
	if (!ctx.cr6.eq) goto loc_82CB9474;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9474:
	// addi r4,r30,-1148
	ctx.r4.s64 = ctx.r30.s64 + -1148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9480;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb94a0
	if (!ctx.cr6.eq) goto loc_82CB94A0;
	// li r11,25
	ctx.r11.s64 = 25;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB94A0:
	// addi r4,r30,-1116
	ctx.r4.s64 = ctx.r30.s64 + -1116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB94AC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb94cc
	if (!ctx.cr6.eq) goto loc_82CB94CC;
	// li r11,26
	ctx.r11.s64 = 26;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB94CC:
	// addi r4,r30,-1088
	ctx.r4.s64 = ctx.r30.s64 + -1088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB94D8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb94f8
	if (!ctx.cr6.eq) goto loc_82CB94F8;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB94F8:
	// addi r4,r30,-1052
	ctx.r4.s64 = ctx.r30.s64 + -1052;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9504;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9524
	if (!ctx.cr6.eq) goto loc_82CB9524;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9524:
	// addi r4,r30,-1020
	ctx.r4.s64 = ctx.r30.s64 + -1020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9530;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9550
	if (!ctx.cr6.eq) goto loc_82CB9550;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9550:
	// addi r4,r30,-988
	ctx.r4.s64 = ctx.r30.s64 + -988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB955C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb957c
	if (!ctx.cr6.eq) goto loc_82CB957C;
	// li r11,30
	ctx.r11.s64 = 30;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB957C:
	// addi r4,r30,-956
	ctx.r4.s64 = ctx.r30.s64 + -956;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9588;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb95a8
	if (!ctx.cr6.eq) goto loc_82CB95A8;
	// li r11,31
	ctx.r11.s64 = 31;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB95A8:
	// addi r4,r30,-924
	ctx.r4.s64 = ctx.r30.s64 + -924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB95B4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb95d4
	if (!ctx.cr6.eq) goto loc_82CB95D4;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB95D4:
	// addi r4,r30,-896
	ctx.r4.s64 = ctx.r30.s64 + -896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB95E0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9600
	if (!ctx.cr6.eq) goto loc_82CB9600;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9600:
	// addi r4,r30,-864
	ctx.r4.s64 = ctx.r30.s64 + -864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB960C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb962c
	if (!ctx.cr6.eq) goto loc_82CB962C;
	// li r11,34
	ctx.r11.s64 = 34;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB962C:
	// addi r4,r30,-832
	ctx.r4.s64 = ctx.r30.s64 + -832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9638;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9658
	if (!ctx.cr6.eq) goto loc_82CB9658;
	// li r11,35
	ctx.r11.s64 = 35;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9658:
	// addi r4,r30,-804
	ctx.r4.s64 = ctx.r30.s64 + -804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9664;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9684
	if (!ctx.cr6.eq) goto loc_82CB9684;
	// li r11,36
	ctx.r11.s64 = 36;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9684:
	// addi r4,r30,-776
	ctx.r4.s64 = ctx.r30.s64 + -776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9690;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb96b0
	if (!ctx.cr6.eq) goto loc_82CB96B0;
	// li r11,37
	ctx.r11.s64 = 37;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB96B0:
	// addi r4,r30,-740
	ctx.r4.s64 = ctx.r30.s64 + -740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB96BC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb96dc
	if (!ctx.cr6.eq) goto loc_82CB96DC;
	// li r11,38
	ctx.r11.s64 = 38;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB96DC:
	// addi r4,r30,-712
	ctx.r4.s64 = ctx.r30.s64 + -712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB96E8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9708
	if (!ctx.cr6.eq) goto loc_82CB9708;
	// li r11,39
	ctx.r11.s64 = 39;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9708:
	// addi r4,r30,-684
	ctx.r4.s64 = ctx.r30.s64 + -684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9714;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9734
	if (!ctx.cr6.eq) goto loc_82CB9734;
	// li r11,40
	ctx.r11.s64 = 40;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9734:
	// addi r4,r30,-656
	ctx.r4.s64 = ctx.r30.s64 + -656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9740;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9760
	if (!ctx.cr6.eq) goto loc_82CB9760;
	// li r11,41
	ctx.r11.s64 = 41;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9760:
	// addi r4,r30,-620
	ctx.r4.s64 = ctx.r30.s64 + -620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB976C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb978c
	if (!ctx.cr6.eq) goto loc_82CB978C;
	// li r11,42
	ctx.r11.s64 = 42;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB978C:
	// addi r4,r30,-592
	ctx.r4.s64 = ctx.r30.s64 + -592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9798;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb97b8
	if (!ctx.cr6.eq) goto loc_82CB97B8;
	// li r11,43
	ctx.r11.s64 = 43;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB97B8:
	// addi r4,r30,-564
	ctx.r4.s64 = ctx.r30.s64 + -564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB97C4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb97e4
	if (!ctx.cr6.eq) goto loc_82CB97E4;
	// li r11,44
	ctx.r11.s64 = 44;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB97E4:
	// addi r4,r30,-532
	ctx.r4.s64 = ctx.r30.s64 + -532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB97F0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9810
	if (!ctx.cr6.eq) goto loc_82CB9810;
	// li r11,45
	ctx.r11.s64 = 45;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9810:
	// addi r4,r30,-496
	ctx.r4.s64 = ctx.r30.s64 + -496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB981C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb983c
	if (!ctx.cr6.eq) goto loc_82CB983C;
	// li r11,46
	ctx.r11.s64 = 46;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB983C:
	// addi r4,r30,-460
	ctx.r4.s64 = ctx.r30.s64 + -460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9848;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9868
	if (!ctx.cr6.eq) goto loc_82CB9868;
	// li r11,47
	ctx.r11.s64 = 47;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9868:
	// addi r4,r30,-428
	ctx.r4.s64 = ctx.r30.s64 + -428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9874;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9894
	if (!ctx.cr6.eq) goto loc_82CB9894;
	// li r11,48
	ctx.r11.s64 = 48;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9894:
	// addi r4,r30,-400
	ctx.r4.s64 = ctx.r30.s64 + -400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB98A0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb98c0
	if (!ctx.cr6.eq) goto loc_82CB98C0;
	// li r11,49
	ctx.r11.s64 = 49;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB98C0:
	// addi r4,r30,-376
	ctx.r4.s64 = ctx.r30.s64 + -376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB98CC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb98ec
	if (!ctx.cr6.eq) goto loc_82CB98EC;
	// li r11,50
	ctx.r11.s64 = 50;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB98EC:
	// addi r4,r30,-344
	ctx.r4.s64 = ctx.r30.s64 + -344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB98F8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9918
	if (!ctx.cr6.eq) goto loc_82CB9918;
	// li r11,51
	ctx.r11.s64 = 51;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9918:
	// addi r4,r30,-308
	ctx.r4.s64 = ctx.r30.s64 + -308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9924;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9944
	if (!ctx.cr6.eq) goto loc_82CB9944;
	// li r11,52
	ctx.r11.s64 = 52;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9944:
	// addi r4,r30,-276
	ctx.r4.s64 = ctx.r30.s64 + -276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9950;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9970
	if (!ctx.cr6.eq) goto loc_82CB9970;
	// li r11,53
	ctx.r11.s64 = 53;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9970:
	// addi r4,r30,-248
	ctx.r4.s64 = ctx.r30.s64 + -248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB997C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb999c
	if (!ctx.cr6.eq) goto loc_82CB999C;
	// li r11,54
	ctx.r11.s64 = 54;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB999C:
	// addi r4,r30,-228
	ctx.r4.s64 = ctx.r30.s64 + -228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB99A8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb99c8
	if (!ctx.cr6.eq) goto loc_82CB99C8;
	// li r11,55
	ctx.r11.s64 = 55;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB99C8:
	// addi r4,r30,-204
	ctx.r4.s64 = ctx.r30.s64 + -204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB99D4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb99f4
	if (!ctx.cr6.eq) goto loc_82CB99F4;
	// li r11,56
	ctx.r11.s64 = 56;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB99F4:
	// addi r4,r30,-176
	ctx.r4.s64 = ctx.r30.s64 + -176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9A00;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9a20
	if (!ctx.cr6.eq) goto loc_82CB9A20;
	// li r11,57
	ctx.r11.s64 = 57;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9A20:
	// addi r4,r30,-156
	ctx.r4.s64 = ctx.r30.s64 + -156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9A2C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9a4c
	if (!ctx.cr6.eq) goto loc_82CB9A4C;
	// li r11,58
	ctx.r11.s64 = 58;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9A4C:
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9A58;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9a78
	if (!ctx.cr6.eq) goto loc_82CB9A78;
	// li r11,59
	ctx.r11.s64 = 59;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9A78:
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9A84;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9aa4
	if (!ctx.cr6.eq) goto loc_82CB9AA4;
	// li r11,60
	ctx.r11.s64 = 60;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9AA4:
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9AB0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9ad0
	if (!ctx.cr6.eq) goto loc_82CB9AD0;
	// li r11,61
	ctx.r11.s64 = 61;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9AD0:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9ADC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9afc
	if (!ctx.cr6.eq) goto loc_82CB9AFC;
	// li r11,62
	ctx.r11.s64 = 62;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9AFC:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9B08;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9b28
	if (!ctx.cr6.eq) goto loc_82CB9B28;
	// li r11,63
	ctx.r11.s64 = 63;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9B28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9B34;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9b48
	if (!ctx.cr6.eq) goto loc_82CB9B48;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CB9B48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB9B58"))) PPC_WEAK_FUNC(sub_82CB9B58);
PPC_FUNC_IMPL(__imp__sub_82CB9B58) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82cb9b90
	if (ctx.cr6.lt) goto loc_82CB9B90;
	// beq cr6,0x82cb9b80
	if (ctx.cr6.eq) goto loc_82CB9B80;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,6740
	ctx.r3.s64 = ctx.r11.s64 + 6740;
	// blr 
	return;
loc_82CB9B80:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,6740
	ctx.r11.s64 = ctx.r11.s64 + 6740;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// blr 
	return;
loc_82CB9B90:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,6740
	ctx.r11.s64 = ctx.r11.s64 + 6740;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB9BA0"))) PPC_WEAK_FUNC(sub_82CB9BA0);
PPC_FUNC_IMPL(__imp__sub_82CB9BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB9BA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cb9c34
	if (ctx.cr6.eq) goto loc_82CB9C34;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9BD0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9be8
	if (!ctx.cr6.eq) goto loc_82CB9BE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9BE8:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9BF4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9c0c
	if (!ctx.cr6.eq) goto loc_82CB9C0C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9C0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9C18;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9c34
	if (!ctx.cr6.eq) goto loc_82CB9C34;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9C34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB9C40"))) PPC_WEAK_FUNC(sub_82CB9C40);
PPC_FUNC_IMPL(__imp__sub_82CB9C40) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bgt cr6,0x82cb9cd0
	if (ctx.cr6.gt) goto loc_82CB9CD0;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-25500
	ctx.r12.s64 = ctx.r12.s64 + -25500;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82CB9C78;
	case 1:
		goto loc_82CB9C8C;
	case 2:
		goto loc_82CB9CA0;
	case 3:
		goto loc_82CB9CB4;
	case 4:
		goto loc_82CB9CC8;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-25480(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25480);
	// lwz r22,-25460(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25460);
	// lwz r22,-25440(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25440);
	// lwz r22,-25420(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25420);
	// lwz r22,-25400(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25400);
loc_82CB9C78:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,6896
	ctx.r11.s64 = ctx.r11.s64 + 6896;
	// addi r11,r11,-88
	ctx.r11.s64 = ctx.r11.s64 + -88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB9C8C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,6896
	ctx.r11.s64 = ctx.r11.s64 + 6896;
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB9CA0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,6896
	ctx.r11.s64 = ctx.r11.s64 + 6896;
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB9CB4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,6896
	ctx.r11.s64 = ctx.r11.s64 + 6896;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CB9CC8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,6896
	ctx.r11.s64 = ctx.r11.s64 + 6896;
loc_82CB9CD0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB9CD8"))) PPC_WEAK_FUNC(sub_82CB9CD8);
PPC_FUNC_IMPL(__imp__sub_82CB9CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB9CE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cb9dbc
	if (ctx.cr6.eq) goto loc_82CB9DBC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,7012
	ctx.r30.s64 = ctx.r11.s64 + 7012;
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9D08;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9d20
	if (!ctx.cr6.eq) goto loc_82CB9D20;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9D20:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9D2C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9d44
	if (!ctx.cr6.eq) goto loc_82CB9D44;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9D44:
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9D50;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9d6c
	if (!ctx.cr6.eq) goto loc_82CB9D6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9D6C:
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9D78;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9d94
	if (!ctx.cr6.eq) goto loc_82CB9D94;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9D94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9DA0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9dbc
	if (!ctx.cr6.eq) goto loc_82CB9DBC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9DBC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB9DC8"))) PPC_WEAK_FUNC(sub_82CB9DC8);
PPC_FUNC_IMPL(__imp__sub_82CB9DC8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-25104
	ctx.r12.s64 = ctx.r12.s64 + -25104;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CB9E70;
	case 1:
		goto loc_82CB9E80;
	case 2:
		goto loc_82CB9EC8;
	case 3:
		goto loc_82CB9E90;
	case 4:
		goto loc_82CB9EC8;
	case 5:
		goto loc_82CB9EC8;
	case 6:
		goto loc_82CB9EC8;
	case 7:
		goto loc_82CB9EA0;
	case 8:
		goto loc_82CB9EC8;
	case 9:
		goto loc_82CB9EC8;
	case 10:
		goto loc_82CB9EC8;
	case 11:
		goto loc_82CB9EC8;
	case 12:
		goto loc_82CB9EC8;
	case 13:
		goto loc_82CB9EC8;
	case 14:
		goto loc_82CB9EC8;
	case 15:
		goto loc_82CB9EB0;
	case 16:
		goto loc_82CB9EC8;
	case 17:
		goto loc_82CB9EC8;
	case 18:
		goto loc_82CB9EC8;
	case 19:
		goto loc_82CB9EC8;
	case 20:
		goto loc_82CB9EC8;
	case 21:
		goto loc_82CB9EC8;
	case 22:
		goto loc_82CB9EC8;
	case 23:
		goto loc_82CB9EC8;
	case 24:
		goto loc_82CB9EC8;
	case 25:
		goto loc_82CB9EC8;
	case 26:
		goto loc_82CB9EC8;
	case 27:
		goto loc_82CB9EC8;
	case 28:
		goto loc_82CB9EC8;
	case 29:
		goto loc_82CB9EC8;
	case 30:
		goto loc_82CB9EC8;
	case 31:
		goto loc_82CB9EC0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-24976(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24976);
	// lwz r22,-24960(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24960);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24944(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24944);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24928(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24928);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24912(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	// lwz r22,-24896(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24896);
loc_82CB9E70:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7156
	ctx.r11.s64 = ctx.r11.s64 + 7156;
	// addi r3,r11,-116
	ctx.r3.s64 = ctx.r11.s64 + -116;
	// blr 
	return;
loc_82CB9E80:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7156
	ctx.r11.s64 = ctx.r11.s64 + 7156;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// blr 
	return;
loc_82CB9E90:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7156
	ctx.r11.s64 = ctx.r11.s64 + 7156;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// blr 
	return;
loc_82CB9EA0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7156
	ctx.r11.s64 = ctx.r11.s64 + 7156;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
loc_82CB9EB0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7156
	ctx.r11.s64 = ctx.r11.s64 + 7156;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82CB9EC0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7156
	ctx.r3.s64 = ctx.r11.s64 + 7156;
loc_82CB9EC8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CB9ED0"))) PPC_WEAK_FUNC(sub_82CB9ED0);
PPC_FUNC_IMPL(__imp__sub_82CB9ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CB9ED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,7304
	ctx.r30.s64 = ctx.r11.s64 + 7304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9EF8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9f10
	if (!ctx.cr6.eq) goto loc_82CB9F10;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9F10:
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9F1C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9f38
	if (!ctx.cr6.eq) goto loc_82CB9F38;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9F38:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9F44;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9f60
	if (!ctx.cr6.eq) goto loc_82CB9F60;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9F60:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9F6C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9f88
	if (!ctx.cr6.eq) goto loc_82CB9F88;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9F88:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9F94;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9fb0
	if (!ctx.cr6.eq) goto loc_82CB9FB0;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9FB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CB9FBC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cb9fd8
	if (!ctx.cr6.eq) goto loc_82CB9FD8;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CB9FD8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CB9FE8"))) PPC_WEAK_FUNC(sub_82CB9FE8);
PPC_FUNC_IMPL(__imp__sub_82CB9FE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82cba020
	if (ctx.cr6.lt) goto loc_82CBA020;
	// beq cr6,0x82cba010
	if (ctx.cr6.eq) goto loc_82CBA010;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7352
	ctx.r3.s64 = ctx.r11.s64 + 7352;
	// blr 
	return;
loc_82CBA010:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7352
	ctx.r11.s64 = ctx.r11.s64 + 7352;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// blr 
	return;
loc_82CBA020:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7352
	ctx.r11.s64 = ctx.r11.s64 + 7352;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBA030"))) PPC_WEAK_FUNC(sub_82CBA030);
PPC_FUNC_IMPL(__imp__sub_82CBA030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBA038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cba0c4
	if (ctx.cr6.eq) goto loc_82CBA0C4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,7376
	ctx.r30.s64 = ctx.r11.s64 + 7376;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA060;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba078
	if (!ctx.cr6.eq) goto loc_82CBA078;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA078:
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA084;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba09c
	if (!ctx.cr6.eq) goto loc_82CBA09C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA09C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA0A8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba0c4
	if (!ctx.cr6.eq) goto loc_82CBA0C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA0C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBA0D0"))) PPC_WEAK_FUNC(sub_82CBA0D0);
PPC_FUNC_IMPL(__imp__sub_82CBA0D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cba10c
	if (ctx.cr6.eq) goto loc_82CBA10C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82cba0fc
	if (ctx.cr6.eq) goto loc_82CBA0FC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7428
	ctx.r3.s64 = ctx.r11.s64 + 7428;
	// blr 
	return;
loc_82CBA0FC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7428
	ctx.r11.s64 = ctx.r11.s64 + 7428;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82CBA10C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7428
	ctx.r11.s64 = ctx.r11.s64 + 7428;
	// addi r3,r11,-44
	ctx.r3.s64 = ctx.r11.s64 + -44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBA120"))) PPC_WEAK_FUNC(sub_82CBA120);
PPC_FUNC_IMPL(__imp__sub_82CBA120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBA128;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,7492
	ctx.r30.s64 = ctx.r11.s64 + 7492;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA148;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba160
	if (!ctx.cr6.eq) goto loc_82CBA160;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA160:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA16C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba188
	if (!ctx.cr6.eq) goto loc_82CBA188;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA188:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA194;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba1b0
	if (!ctx.cr6.eq) goto loc_82CBA1B0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA1B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBA1C0"))) PPC_WEAK_FUNC(sub_82CBA1C0);
PPC_FUNC_IMPL(__imp__sub_82CBA1C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7512
	ctx.r3.s64 = ctx.r11.s64 + 7512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBA1E0"))) PPC_WEAK_FUNC(sub_82CBA1E0);
PPC_FUNC_IMPL(__imp__sub_82CBA1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,7536
	ctx.r4.s64 = ctx.r11.s64 + 7536;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA208;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba21c
	if (!ctx.cr6.eq) goto loc_82CBA21C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82cba220
	goto loc_82CBA220;
loc_82CBA21C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CBA220:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBA238"))) PPC_WEAK_FUNC(sub_82CBA238);
PPC_FUNC_IMPL(__imp__sub_82CBA238) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82cba258
	if (ctx.cr6.lt) goto loc_82CBA258;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7584
	ctx.r3.s64 = ctx.r11.s64 + 7584;
	// blr 
	return;
loc_82CBA258:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7584
	ctx.r11.s64 = ctx.r11.s64 + 7584;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBA268"))) PPC_WEAK_FUNC(sub_82CBA268);
PPC_FUNC_IMPL(__imp__sub_82CBA268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBA270;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cba2d4
	if (ctx.cr6.eq) goto loc_82CBA2D4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,7636
	ctx.r30.s64 = ctx.r11.s64 + 7636;
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA298;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba2b0
	if (!ctx.cr6.eq) goto loc_82CBA2B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA2B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA2BC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba2d4
	if (!ctx.cr6.eq) goto loc_82CBA2D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA2D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBA2E0"))) PPC_WEAK_FUNC(sub_82CBA2E0);
PPC_FUNC_IMPL(__imp__sub_82CBA2E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bgt cr6,0x82cba398
	if (ctx.cr6.gt) goto loc_82CBA398;
	// beq cr6,0x82cba384
	if (ctx.cr6.eq) goto loc_82CBA384;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bgt cr6,0x82cba784
	if (ctx.cr6.gt) goto loc_82CBA784;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-23788
	ctx.r12.s64 = ctx.r12.s64 + -23788;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82CBA334;
	case 1:
		goto loc_82CBA348;
	case 2:
		goto loc_82CBA784;
	case 3:
		goto loc_82CBA35C;
	case 4:
		goto loc_82CBA784;
	case 5:
		goto loc_82CBA784;
	case 6:
		goto loc_82CBA784;
	case 7:
		goto loc_82CBA370;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-23756(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23756);
	// lwz r22,-23736(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23736);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-23716(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23716);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-23696(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23696);
loc_82CBA334:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
	// addi r11,r11,-192
	ctx.r11.s64 = ctx.r11.s64 + -192;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBA348:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
	// addi r11,r11,-168
	ctx.r11.s64 = ctx.r11.s64 + -168;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBA35C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBA370:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
	// addi r11,r11,-120
	ctx.r11.s64 = ctx.r11.s64 + -120;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBA384:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBA398:
	// addi r10,r3,-32
	ctx.r10.s64 = ctx.r3.s64 + -32;
	// cmplwi cr6,r10,224
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 224, ctx.xer);
	// bgt cr6,0x82cba784
	if (ctx.cr6.gt) goto loc_82CBA784;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-23620
	ctx.r12.s64 = ctx.r12.s64 + -23620;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82CBA740;
	case 1:
		goto loc_82CBA784;
	case 2:
		goto loc_82CBA784;
	case 3:
		goto loc_82CBA784;
	case 4:
		goto loc_82CBA784;
	case 5:
		goto loc_82CBA784;
	case 6:
		goto loc_82CBA784;
	case 7:
		goto loc_82CBA784;
	case 8:
		goto loc_82CBA784;
	case 9:
		goto loc_82CBA784;
	case 10:
		goto loc_82CBA784;
	case 11:
		goto loc_82CBA784;
	case 12:
		goto loc_82CBA784;
	case 13:
		goto loc_82CBA784;
	case 14:
		goto loc_82CBA784;
	case 15:
		goto loc_82CBA784;
	case 16:
		goto loc_82CBA784;
	case 17:
		goto loc_82CBA784;
	case 18:
		goto loc_82CBA784;
	case 19:
		goto loc_82CBA784;
	case 20:
		goto loc_82CBA784;
	case 21:
		goto loc_82CBA784;
	case 22:
		goto loc_82CBA784;
	case 23:
		goto loc_82CBA784;
	case 24:
		goto loc_82CBA784;
	case 25:
		goto loc_82CBA784;
	case 26:
		goto loc_82CBA784;
	case 27:
		goto loc_82CBA784;
	case 28:
		goto loc_82CBA784;
	case 29:
		goto loc_82CBA784;
	case 30:
		goto loc_82CBA784;
	case 31:
		goto loc_82CBA784;
	case 32:
		goto loc_82CBA754;
	case 33:
		goto loc_82CBA784;
	case 34:
		goto loc_82CBA784;
	case 35:
		goto loc_82CBA784;
	case 36:
		goto loc_82CBA784;
	case 37:
		goto loc_82CBA784;
	case 38:
		goto loc_82CBA784;
	case 39:
		goto loc_82CBA784;
	case 40:
		goto loc_82CBA784;
	case 41:
		goto loc_82CBA784;
	case 42:
		goto loc_82CBA784;
	case 43:
		goto loc_82CBA784;
	case 44:
		goto loc_82CBA784;
	case 45:
		goto loc_82CBA784;
	case 46:
		goto loc_82CBA784;
	case 47:
		goto loc_82CBA784;
	case 48:
		goto loc_82CBA784;
	case 49:
		goto loc_82CBA784;
	case 50:
		goto loc_82CBA784;
	case 51:
		goto loc_82CBA784;
	case 52:
		goto loc_82CBA784;
	case 53:
		goto loc_82CBA784;
	case 54:
		goto loc_82CBA784;
	case 55:
		goto loc_82CBA784;
	case 56:
		goto loc_82CBA784;
	case 57:
		goto loc_82CBA784;
	case 58:
		goto loc_82CBA784;
	case 59:
		goto loc_82CBA784;
	case 60:
		goto loc_82CBA784;
	case 61:
		goto loc_82CBA784;
	case 62:
		goto loc_82CBA784;
	case 63:
		goto loc_82CBA784;
	case 64:
		goto loc_82CBA784;
	case 65:
		goto loc_82CBA784;
	case 66:
		goto loc_82CBA784;
	case 67:
		goto loc_82CBA784;
	case 68:
		goto loc_82CBA784;
	case 69:
		goto loc_82CBA784;
	case 70:
		goto loc_82CBA784;
	case 71:
		goto loc_82CBA784;
	case 72:
		goto loc_82CBA784;
	case 73:
		goto loc_82CBA784;
	case 74:
		goto loc_82CBA784;
	case 75:
		goto loc_82CBA784;
	case 76:
		goto loc_82CBA784;
	case 77:
		goto loc_82CBA784;
	case 78:
		goto loc_82CBA784;
	case 79:
		goto loc_82CBA784;
	case 80:
		goto loc_82CBA784;
	case 81:
		goto loc_82CBA784;
	case 82:
		goto loc_82CBA784;
	case 83:
		goto loc_82CBA784;
	case 84:
		goto loc_82CBA784;
	case 85:
		goto loc_82CBA784;
	case 86:
		goto loc_82CBA784;
	case 87:
		goto loc_82CBA784;
	case 88:
		goto loc_82CBA784;
	case 89:
		goto loc_82CBA784;
	case 90:
		goto loc_82CBA784;
	case 91:
		goto loc_82CBA784;
	case 92:
		goto loc_82CBA784;
	case 93:
		goto loc_82CBA784;
	case 94:
		goto loc_82CBA784;
	case 95:
		goto loc_82CBA784;
	case 96:
		goto loc_82CBA768;
	case 97:
		goto loc_82CBA784;
	case 98:
		goto loc_82CBA784;
	case 99:
		goto loc_82CBA784;
	case 100:
		goto loc_82CBA784;
	case 101:
		goto loc_82CBA784;
	case 102:
		goto loc_82CBA784;
	case 103:
		goto loc_82CBA784;
	case 104:
		goto loc_82CBA784;
	case 105:
		goto loc_82CBA784;
	case 106:
		goto loc_82CBA784;
	case 107:
		goto loc_82CBA784;
	case 108:
		goto loc_82CBA784;
	case 109:
		goto loc_82CBA784;
	case 110:
		goto loc_82CBA784;
	case 111:
		goto loc_82CBA784;
	case 112:
		goto loc_82CBA784;
	case 113:
		goto loc_82CBA784;
	case 114:
		goto loc_82CBA784;
	case 115:
		goto loc_82CBA784;
	case 116:
		goto loc_82CBA784;
	case 117:
		goto loc_82CBA784;
	case 118:
		goto loc_82CBA784;
	case 119:
		goto loc_82CBA784;
	case 120:
		goto loc_82CBA784;
	case 121:
		goto loc_82CBA784;
	case 122:
		goto loc_82CBA784;
	case 123:
		goto loc_82CBA784;
	case 124:
		goto loc_82CBA784;
	case 125:
		goto loc_82CBA784;
	case 126:
		goto loc_82CBA784;
	case 127:
		goto loc_82CBA784;
	case 128:
		goto loc_82CBA784;
	case 129:
		goto loc_82CBA784;
	case 130:
		goto loc_82CBA784;
	case 131:
		goto loc_82CBA784;
	case 132:
		goto loc_82CBA784;
	case 133:
		goto loc_82CBA784;
	case 134:
		goto loc_82CBA784;
	case 135:
		goto loc_82CBA784;
	case 136:
		goto loc_82CBA784;
	case 137:
		goto loc_82CBA784;
	case 138:
		goto loc_82CBA784;
	case 139:
		goto loc_82CBA784;
	case 140:
		goto loc_82CBA784;
	case 141:
		goto loc_82CBA784;
	case 142:
		goto loc_82CBA784;
	case 143:
		goto loc_82CBA784;
	case 144:
		goto loc_82CBA784;
	case 145:
		goto loc_82CBA784;
	case 146:
		goto loc_82CBA784;
	case 147:
		goto loc_82CBA784;
	case 148:
		goto loc_82CBA784;
	case 149:
		goto loc_82CBA784;
	case 150:
		goto loc_82CBA784;
	case 151:
		goto loc_82CBA784;
	case 152:
		goto loc_82CBA784;
	case 153:
		goto loc_82CBA784;
	case 154:
		goto loc_82CBA784;
	case 155:
		goto loc_82CBA784;
	case 156:
		goto loc_82CBA784;
	case 157:
		goto loc_82CBA784;
	case 158:
		goto loc_82CBA784;
	case 159:
		goto loc_82CBA784;
	case 160:
		goto loc_82CBA784;
	case 161:
		goto loc_82CBA784;
	case 162:
		goto loc_82CBA784;
	case 163:
		goto loc_82CBA784;
	case 164:
		goto loc_82CBA784;
	case 165:
		goto loc_82CBA784;
	case 166:
		goto loc_82CBA784;
	case 167:
		goto loc_82CBA784;
	case 168:
		goto loc_82CBA784;
	case 169:
		goto loc_82CBA784;
	case 170:
		goto loc_82CBA784;
	case 171:
		goto loc_82CBA784;
	case 172:
		goto loc_82CBA784;
	case 173:
		goto loc_82CBA784;
	case 174:
		goto loc_82CBA784;
	case 175:
		goto loc_82CBA784;
	case 176:
		goto loc_82CBA784;
	case 177:
		goto loc_82CBA784;
	case 178:
		goto loc_82CBA784;
	case 179:
		goto loc_82CBA784;
	case 180:
		goto loc_82CBA784;
	case 181:
		goto loc_82CBA784;
	case 182:
		goto loc_82CBA784;
	case 183:
		goto loc_82CBA784;
	case 184:
		goto loc_82CBA784;
	case 185:
		goto loc_82CBA784;
	case 186:
		goto loc_82CBA784;
	case 187:
		goto loc_82CBA784;
	case 188:
		goto loc_82CBA784;
	case 189:
		goto loc_82CBA784;
	case 190:
		goto loc_82CBA784;
	case 191:
		goto loc_82CBA784;
	case 192:
		goto loc_82CBA784;
	case 193:
		goto loc_82CBA784;
	case 194:
		goto loc_82CBA784;
	case 195:
		goto loc_82CBA784;
	case 196:
		goto loc_82CBA784;
	case 197:
		goto loc_82CBA784;
	case 198:
		goto loc_82CBA784;
	case 199:
		goto loc_82CBA784;
	case 200:
		goto loc_82CBA784;
	case 201:
		goto loc_82CBA784;
	case 202:
		goto loc_82CBA784;
	case 203:
		goto loc_82CBA784;
	case 204:
		goto loc_82CBA784;
	case 205:
		goto loc_82CBA784;
	case 206:
		goto loc_82CBA784;
	case 207:
		goto loc_82CBA784;
	case 208:
		goto loc_82CBA784;
	case 209:
		goto loc_82CBA784;
	case 210:
		goto loc_82CBA784;
	case 211:
		goto loc_82CBA784;
	case 212:
		goto loc_82CBA784;
	case 213:
		goto loc_82CBA784;
	case 214:
		goto loc_82CBA784;
	case 215:
		goto loc_82CBA784;
	case 216:
		goto loc_82CBA784;
	case 217:
		goto loc_82CBA784;
	case 218:
		goto loc_82CBA784;
	case 219:
		goto loc_82CBA784;
	case 220:
		goto loc_82CBA784;
	case 221:
		goto loc_82CBA784;
	case 222:
		goto loc_82CBA784;
	case 223:
		goto loc_82CBA784;
	case 224:
		goto loc_82CBA77C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-22720(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22720);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22700(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22700);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22680(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22680);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22652(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22652);
	// lwz r22,-22660(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22660);
loc_82CBA740:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBA754:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBA768:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBA77C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,7856
	ctx.r11.s64 = ctx.r11.s64 + 7856;
loc_82CBA784:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBA790"))) PPC_WEAK_FUNC(sub_82CBA790);
PPC_FUNC_IMPL(__imp__sub_82CBA790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBA798;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,8072
	ctx.r30.s64 = ctx.r11.s64 + 8072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA7B8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba7d4
	if (!ctx.cr6.eq) goto loc_82CBA7D4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA7D4:
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA7E0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba800
	if (!ctx.cr6.eq) goto loc_82CBA800;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA800:
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA80C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba82c
	if (!ctx.cr6.eq) goto loc_82CBA82C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA82C:
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA838;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba858
	if (!ctx.cr6.eq) goto loc_82CBA858;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA858:
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA864;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba884
	if (!ctx.cr6.eq) goto loc_82CBA884;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA884:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA890;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba8b0
	if (!ctx.cr6.eq) goto loc_82CBA8B0;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA8B0:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA8BC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba8dc
	if (!ctx.cr6.eq) goto loc_82CBA8DC;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA8DC:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA8E8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba908
	if (!ctx.cr6.eq) goto loc_82CBA908;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBA908:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBA914;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cba928
	if (!ctx.cr6.eq) goto loc_82CBA928;
	// li r11,256
	ctx.r11.s64 = 256;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CBA928:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBA938"))) PPC_WEAK_FUNC(sub_82CBA938);
PPC_FUNC_IMPL(__imp__sub_82CBA938) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-22176
	ctx.r12.s64 = ctx.r12.s64 + -22176;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CBAB60;
	case 1:
		goto loc_82CBAB70;
	case 2:
		goto loc_82CBABD8;
	case 3:
		goto loc_82CBAB80;
	case 4:
		goto loc_82CBABD8;
	case 5:
		goto loc_82CBABD8;
	case 6:
		goto loc_82CBABD8;
	case 7:
		goto loc_82CBAB90;
	case 8:
		goto loc_82CBABD8;
	case 9:
		goto loc_82CBABD8;
	case 10:
		goto loc_82CBABD8;
	case 11:
		goto loc_82CBABD8;
	case 12:
		goto loc_82CBABD8;
	case 13:
		goto loc_82CBABD8;
	case 14:
		goto loc_82CBABD8;
	case 15:
		goto loc_82CBABA0;
	case 16:
		goto loc_82CBABD8;
	case 17:
		goto loc_82CBABD8;
	case 18:
		goto loc_82CBABD8;
	case 19:
		goto loc_82CBABD8;
	case 20:
		goto loc_82CBABD8;
	case 21:
		goto loc_82CBABD8;
	case 22:
		goto loc_82CBABD8;
	case 23:
		goto loc_82CBABD8;
	case 24:
		goto loc_82CBABD8;
	case 25:
		goto loc_82CBABD8;
	case 26:
		goto loc_82CBABD8;
	case 27:
		goto loc_82CBABD8;
	case 28:
		goto loc_82CBABD8;
	case 29:
		goto loc_82CBABD8;
	case 30:
		goto loc_82CBABD8;
	case 31:
		goto loc_82CBABB0;
	case 32:
		goto loc_82CBABD8;
	case 33:
		goto loc_82CBABD8;
	case 34:
		goto loc_82CBABD8;
	case 35:
		goto loc_82CBABD8;
	case 36:
		goto loc_82CBABD8;
	case 37:
		goto loc_82CBABD8;
	case 38:
		goto loc_82CBABD8;
	case 39:
		goto loc_82CBABD8;
	case 40:
		goto loc_82CBABD8;
	case 41:
		goto loc_82CBABD8;
	case 42:
		goto loc_82CBABD8;
	case 43:
		goto loc_82CBABD8;
	case 44:
		goto loc_82CBABD8;
	case 45:
		goto loc_82CBABD8;
	case 46:
		goto loc_82CBABD8;
	case 47:
		goto loc_82CBABD8;
	case 48:
		goto loc_82CBABD8;
	case 49:
		goto loc_82CBABD8;
	case 50:
		goto loc_82CBABD8;
	case 51:
		goto loc_82CBABD8;
	case 52:
		goto loc_82CBABD8;
	case 53:
		goto loc_82CBABD8;
	case 54:
		goto loc_82CBABD8;
	case 55:
		goto loc_82CBABD8;
	case 56:
		goto loc_82CBABD8;
	case 57:
		goto loc_82CBABD8;
	case 58:
		goto loc_82CBABD8;
	case 59:
		goto loc_82CBABD8;
	case 60:
		goto loc_82CBABD8;
	case 61:
		goto loc_82CBABD8;
	case 62:
		goto loc_82CBABD8;
	case 63:
		goto loc_82CBABC0;
	case 64:
		goto loc_82CBABD8;
	case 65:
		goto loc_82CBABD8;
	case 66:
		goto loc_82CBABD8;
	case 67:
		goto loc_82CBABD8;
	case 68:
		goto loc_82CBABD8;
	case 69:
		goto loc_82CBABD8;
	case 70:
		goto loc_82CBABD8;
	case 71:
		goto loc_82CBABD8;
	case 72:
		goto loc_82CBABD8;
	case 73:
		goto loc_82CBABD8;
	case 74:
		goto loc_82CBABD8;
	case 75:
		goto loc_82CBABD8;
	case 76:
		goto loc_82CBABD8;
	case 77:
		goto loc_82CBABD8;
	case 78:
		goto loc_82CBABD8;
	case 79:
		goto loc_82CBABD8;
	case 80:
		goto loc_82CBABD8;
	case 81:
		goto loc_82CBABD8;
	case 82:
		goto loc_82CBABD8;
	case 83:
		goto loc_82CBABD8;
	case 84:
		goto loc_82CBABD8;
	case 85:
		goto loc_82CBABD8;
	case 86:
		goto loc_82CBABD8;
	case 87:
		goto loc_82CBABD8;
	case 88:
		goto loc_82CBABD8;
	case 89:
		goto loc_82CBABD8;
	case 90:
		goto loc_82CBABD8;
	case 91:
		goto loc_82CBABD8;
	case 92:
		goto loc_82CBABD8;
	case 93:
		goto loc_82CBABD8;
	case 94:
		goto loc_82CBABD8;
	case 95:
		goto loc_82CBABD8;
	case 96:
		goto loc_82CBABD8;
	case 97:
		goto loc_82CBABD8;
	case 98:
		goto loc_82CBABD8;
	case 99:
		goto loc_82CBABD8;
	case 100:
		goto loc_82CBABD8;
	case 101:
		goto loc_82CBABD8;
	case 102:
		goto loc_82CBABD8;
	case 103:
		goto loc_82CBABD8;
	case 104:
		goto loc_82CBABD8;
	case 105:
		goto loc_82CBABD8;
	case 106:
		goto loc_82CBABD8;
	case 107:
		goto loc_82CBABD8;
	case 108:
		goto loc_82CBABD8;
	case 109:
		goto loc_82CBABD8;
	case 110:
		goto loc_82CBABD8;
	case 111:
		goto loc_82CBABD8;
	case 112:
		goto loc_82CBABD8;
	case 113:
		goto loc_82CBABD8;
	case 114:
		goto loc_82CBABD8;
	case 115:
		goto loc_82CBABD8;
	case 116:
		goto loc_82CBABD8;
	case 117:
		goto loc_82CBABD8;
	case 118:
		goto loc_82CBABD8;
	case 119:
		goto loc_82CBABD8;
	case 120:
		goto loc_82CBABD8;
	case 121:
		goto loc_82CBABD8;
	case 122:
		goto loc_82CBABD8;
	case 123:
		goto loc_82CBABD8;
	case 124:
		goto loc_82CBABD8;
	case 125:
		goto loc_82CBABD8;
	case 126:
		goto loc_82CBABD8;
	case 127:
		goto loc_82CBABD0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-21664(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21664);
	// lwz r22,-21648(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21648);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21632(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21632);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21616(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21616);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21600(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21600);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21584(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21584);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21568(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21568);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21544);
	// lwz r22,-21552(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21552);
loc_82CBAB60:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8264
	ctx.r11.s64 = ctx.r11.s64 + 8264;
	// addi r3,r11,-168
	ctx.r3.s64 = ctx.r11.s64 + -168;
	// blr 
	return;
loc_82CBAB70:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8264
	ctx.r11.s64 = ctx.r11.s64 + 8264;
	// addi r3,r11,-144
	ctx.r3.s64 = ctx.r11.s64 + -144;
	// blr 
	return;
loc_82CBAB80:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8264
	ctx.r11.s64 = ctx.r11.s64 + 8264;
	// addi r3,r11,-120
	ctx.r3.s64 = ctx.r11.s64 + -120;
	// blr 
	return;
loc_82CBAB90:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8264
	ctx.r11.s64 = ctx.r11.s64 + 8264;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// blr 
	return;
loc_82CBABA0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8264
	ctx.r11.s64 = ctx.r11.s64 + 8264;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// blr 
	return;
loc_82CBABB0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8264
	ctx.r11.s64 = ctx.r11.s64 + 8264;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
loc_82CBABC0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8264
	ctx.r11.s64 = ctx.r11.s64 + 8264;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82CBABD0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8264
	ctx.r3.s64 = ctx.r11.s64 + 8264;
loc_82CBABD8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBABE0"))) PPC_WEAK_FUNC(sub_82CBABE0);
PPC_FUNC_IMPL(__imp__sub_82CBABE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBABE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,8460
	ctx.r30.s64 = ctx.r11.s64 + 8460;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAC08;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbac24
	if (!ctx.cr6.eq) goto loc_82CBAC24;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBAC24:
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAC30;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbac50
	if (!ctx.cr6.eq) goto loc_82CBAC50;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBAC50:
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAC5C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbac7c
	if (!ctx.cr6.eq) goto loc_82CBAC7C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBAC7C:
	// addi r4,r30,-96
	ctx.r4.s64 = ctx.r30.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAC88;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbaca8
	if (!ctx.cr6.eq) goto loc_82CBACA8;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBACA8:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBACB4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbacd4
	if (!ctx.cr6.eq) goto loc_82CBACD4;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBACD4:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBACE0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbad00
	if (!ctx.cr6.eq) goto loc_82CBAD00;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBAD00:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAD0C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbad2c
	if (!ctx.cr6.eq) goto loc_82CBAD2C;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBAD2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAD38;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbad4c
	if (!ctx.cr6.eq) goto loc_82CBAD4C;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CBAD4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBAD58"))) PPC_WEAK_FUNC(sub_82CBAD58);
PPC_FUNC_IMPL(__imp__sub_82CBAD58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bgt cr6,0x82cbae18
	if (ctx.cr6.gt) goto loc_82CBAE18;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-21124
	ctx.r12.s64 = ctx.r12.s64 + -21124;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82CBAD98;
	case 1:
		goto loc_82CBADAC;
	case 2:
		goto loc_82CBADC0;
	case 3:
		goto loc_82CBADD4;
	case 4:
		goto loc_82CBADE8;
	case 5:
		goto loc_82CBADFC;
	case 6:
		goto loc_82CBAE10;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-21096(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21096);
	// lwz r22,-21076(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21076);
	// lwz r22,-21056(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21056);
	// lwz r22,-21036(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21036);
	// lwz r22,-21016(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21016);
	// lwz r22,-20996(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20996);
	// lwz r22,-20976(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20976);
loc_82CBAD98:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8592
	ctx.r11.s64 = ctx.r11.s64 + 8592;
	// addi r11,r11,-104
	ctx.r11.s64 = ctx.r11.s64 + -104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBADAC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8592
	ctx.r11.s64 = ctx.r11.s64 + 8592;
	// addi r11,r11,-88
	ctx.r11.s64 = ctx.r11.s64 + -88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBADC0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8592
	ctx.r11.s64 = ctx.r11.s64 + 8592;
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBADD4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8592
	ctx.r11.s64 = ctx.r11.s64 + 8592;
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBADE8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8592
	ctx.r11.s64 = ctx.r11.s64 + 8592;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBADFC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8592
	ctx.r11.s64 = ctx.r11.s64 + 8592;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBAE10:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8592
	ctx.r11.s64 = ctx.r11.s64 + 8592;
loc_82CBAE18:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBAE20"))) PPC_WEAK_FUNC(sub_82CBAE20);
PPC_FUNC_IMPL(__imp__sub_82CBAE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBAE28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cbaf68
	if (ctx.cr6.eq) goto loc_82CBAF68;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,8720
	ctx.r30.s64 = ctx.r11.s64 + 8720;
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAE50;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbae70
	if (!ctx.cr6.eq) goto loc_82CBAE70;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBAE70:
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAE7C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbae98
	if (!ctx.cr6.eq) goto loc_82CBAE98;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBAE98:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAEA4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbaec4
	if (!ctx.cr6.eq) goto loc_82CBAEC4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBAEC4:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAED0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbaef0
	if (!ctx.cr6.eq) goto loc_82CBAEF0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBAEF0:
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAEFC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbaf1c
	if (!ctx.cr6.eq) goto loc_82CBAF1C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBAF1C:
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAF28;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbaf48
	if (!ctx.cr6.eq) goto loc_82CBAF48;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBAF48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAF54;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbaf68
	if (!ctx.cr6.eq) goto loc_82CBAF68;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CBAF68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBAF78"))) PPC_WEAK_FUNC(sub_82CBAF78);
PPC_FUNC_IMPL(__imp__sub_82CBAF78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82cbaf98
	if (ctx.cr6.lt) goto loc_82CBAF98;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8764
	ctx.r3.s64 = ctx.r11.s64 + 8764;
	// blr 
	return;
loc_82CBAF98:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8764
	ctx.r11.s64 = ctx.r11.s64 + 8764;
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBAFA8"))) PPC_WEAK_FUNC(sub_82CBAFA8);
PPC_FUNC_IMPL(__imp__sub_82CBAFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBAFB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cbb014
	if (ctx.cr6.eq) goto loc_82CBB014;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,8808
	ctx.r30.s64 = ctx.r11.s64 + 8808;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAFD8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbaff0
	if (!ctx.cr6.eq) goto loc_82CBAFF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBAFF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBAFFC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb014
	if (!ctx.cr6.eq) goto loc_82CBB014;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB014:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBB020"))) PPC_WEAK_FUNC(sub_82CBB020);
PPC_FUNC_IMPL(__imp__sub_82CBB020) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82cbb040
	if (ctx.cr6.lt) goto loc_82CBB040;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8852
	ctx.r3.s64 = ctx.r11.s64 + 8852;
	// blr 
	return;
loc_82CBB040:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8852
	ctx.r11.s64 = ctx.r11.s64 + 8852;
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBB050"))) PPC_WEAK_FUNC(sub_82CBB050);
PPC_FUNC_IMPL(__imp__sub_82CBB050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBB058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cbb0bc
	if (ctx.cr6.eq) goto loc_82CBB0BC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,8892
	ctx.r30.s64 = ctx.r11.s64 + 8892;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB080;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb098
	if (!ctx.cr6.eq) goto loc_82CBB098;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB098:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB0A4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb0bc
	if (!ctx.cr6.eq) goto loc_82CBB0BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB0BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBB0C8"))) PPC_WEAK_FUNC(sub_82CBB0C8);
PPC_FUNC_IMPL(__imp__sub_82CBB0C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82cbb100
	if (ctx.cr6.lt) goto loc_82CBB100;
	// beq cr6,0x82cbb0f0
	if (ctx.cr6.eq) goto loc_82CBB0F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,8940
	ctx.r3.s64 = ctx.r11.s64 + 8940;
	// blr 
	return;
loc_82CBB0F0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8940
	ctx.r11.s64 = ctx.r11.s64 + 8940;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// blr 
	return;
loc_82CBB100:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,8940
	ctx.r11.s64 = ctx.r11.s64 + 8940;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBB110"))) PPC_WEAK_FUNC(sub_82CBB110);
PPC_FUNC_IMPL(__imp__sub_82CBB110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBB118;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cbb1a4
	if (ctx.cr6.eq) goto loc_82CBB1A4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,8980
	ctx.r30.s64 = ctx.r11.s64 + 8980;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB140;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb158
	if (!ctx.cr6.eq) goto loc_82CBB158;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB158:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB164;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb17c
	if (!ctx.cr6.eq) goto loc_82CBB17C;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB17C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB188;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb1a4
	if (!ctx.cr6.eq) goto loc_82CBB1A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB1A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBB1B0"))) PPC_WEAK_FUNC(sub_82CBB1B0);
PPC_FUNC_IMPL(__imp__sub_82CBB1B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-20008
	ctx.r12.s64 = ctx.r12.s64 + -20008;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CBB3D8;
	case 1:
		goto loc_82CBB3E8;
	case 2:
		goto loc_82CBB450;
	case 3:
		goto loc_82CBB3F8;
	case 4:
		goto loc_82CBB450;
	case 5:
		goto loc_82CBB450;
	case 6:
		goto loc_82CBB450;
	case 7:
		goto loc_82CBB408;
	case 8:
		goto loc_82CBB450;
	case 9:
		goto loc_82CBB450;
	case 10:
		goto loc_82CBB450;
	case 11:
		goto loc_82CBB450;
	case 12:
		goto loc_82CBB450;
	case 13:
		goto loc_82CBB450;
	case 14:
		goto loc_82CBB450;
	case 15:
		goto loc_82CBB418;
	case 16:
		goto loc_82CBB450;
	case 17:
		goto loc_82CBB450;
	case 18:
		goto loc_82CBB450;
	case 19:
		goto loc_82CBB450;
	case 20:
		goto loc_82CBB450;
	case 21:
		goto loc_82CBB450;
	case 22:
		goto loc_82CBB450;
	case 23:
		goto loc_82CBB450;
	case 24:
		goto loc_82CBB450;
	case 25:
		goto loc_82CBB450;
	case 26:
		goto loc_82CBB450;
	case 27:
		goto loc_82CBB450;
	case 28:
		goto loc_82CBB450;
	case 29:
		goto loc_82CBB450;
	case 30:
		goto loc_82CBB450;
	case 31:
		goto loc_82CBB428;
	case 32:
		goto loc_82CBB450;
	case 33:
		goto loc_82CBB450;
	case 34:
		goto loc_82CBB450;
	case 35:
		goto loc_82CBB450;
	case 36:
		goto loc_82CBB450;
	case 37:
		goto loc_82CBB450;
	case 38:
		goto loc_82CBB450;
	case 39:
		goto loc_82CBB450;
	case 40:
		goto loc_82CBB450;
	case 41:
		goto loc_82CBB450;
	case 42:
		goto loc_82CBB450;
	case 43:
		goto loc_82CBB450;
	case 44:
		goto loc_82CBB450;
	case 45:
		goto loc_82CBB450;
	case 46:
		goto loc_82CBB450;
	case 47:
		goto loc_82CBB450;
	case 48:
		goto loc_82CBB450;
	case 49:
		goto loc_82CBB450;
	case 50:
		goto loc_82CBB450;
	case 51:
		goto loc_82CBB450;
	case 52:
		goto loc_82CBB450;
	case 53:
		goto loc_82CBB450;
	case 54:
		goto loc_82CBB450;
	case 55:
		goto loc_82CBB450;
	case 56:
		goto loc_82CBB450;
	case 57:
		goto loc_82CBB450;
	case 58:
		goto loc_82CBB450;
	case 59:
		goto loc_82CBB450;
	case 60:
		goto loc_82CBB450;
	case 61:
		goto loc_82CBB450;
	case 62:
		goto loc_82CBB450;
	case 63:
		goto loc_82CBB438;
	case 64:
		goto loc_82CBB450;
	case 65:
		goto loc_82CBB450;
	case 66:
		goto loc_82CBB450;
	case 67:
		goto loc_82CBB450;
	case 68:
		goto loc_82CBB450;
	case 69:
		goto loc_82CBB450;
	case 70:
		goto loc_82CBB450;
	case 71:
		goto loc_82CBB450;
	case 72:
		goto loc_82CBB450;
	case 73:
		goto loc_82CBB450;
	case 74:
		goto loc_82CBB450;
	case 75:
		goto loc_82CBB450;
	case 76:
		goto loc_82CBB450;
	case 77:
		goto loc_82CBB450;
	case 78:
		goto loc_82CBB450;
	case 79:
		goto loc_82CBB450;
	case 80:
		goto loc_82CBB450;
	case 81:
		goto loc_82CBB450;
	case 82:
		goto loc_82CBB450;
	case 83:
		goto loc_82CBB450;
	case 84:
		goto loc_82CBB450;
	case 85:
		goto loc_82CBB450;
	case 86:
		goto loc_82CBB450;
	case 87:
		goto loc_82CBB450;
	case 88:
		goto loc_82CBB450;
	case 89:
		goto loc_82CBB450;
	case 90:
		goto loc_82CBB450;
	case 91:
		goto loc_82CBB450;
	case 92:
		goto loc_82CBB450;
	case 93:
		goto loc_82CBB450;
	case 94:
		goto loc_82CBB450;
	case 95:
		goto loc_82CBB450;
	case 96:
		goto loc_82CBB450;
	case 97:
		goto loc_82CBB450;
	case 98:
		goto loc_82CBB450;
	case 99:
		goto loc_82CBB450;
	case 100:
		goto loc_82CBB450;
	case 101:
		goto loc_82CBB450;
	case 102:
		goto loc_82CBB450;
	case 103:
		goto loc_82CBB450;
	case 104:
		goto loc_82CBB450;
	case 105:
		goto loc_82CBB450;
	case 106:
		goto loc_82CBB450;
	case 107:
		goto loc_82CBB450;
	case 108:
		goto loc_82CBB450;
	case 109:
		goto loc_82CBB450;
	case 110:
		goto loc_82CBB450;
	case 111:
		goto loc_82CBB450;
	case 112:
		goto loc_82CBB450;
	case 113:
		goto loc_82CBB450;
	case 114:
		goto loc_82CBB450;
	case 115:
		goto loc_82CBB450;
	case 116:
		goto loc_82CBB450;
	case 117:
		goto loc_82CBB450;
	case 118:
		goto loc_82CBB450;
	case 119:
		goto loc_82CBB450;
	case 120:
		goto loc_82CBB450;
	case 121:
		goto loc_82CBB450;
	case 122:
		goto loc_82CBB450;
	case 123:
		goto loc_82CBB450;
	case 124:
		goto loc_82CBB450;
	case 125:
		goto loc_82CBB450;
	case 126:
		goto loc_82CBB450;
	case 127:
		goto loc_82CBB448;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-19496(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19496);
	// lwz r22,-19480(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19480);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19464(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19464);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19448(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19448);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19432(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19432);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19416(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19416);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19400(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19400);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19376(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19376);
	// lwz r22,-19384(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19384);
loc_82CBB3D8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9184
	ctx.r11.s64 = ctx.r11.s64 + 9184;
	// addi r3,r11,-192
	ctx.r3.s64 = ctx.r11.s64 + -192;
	// blr 
	return;
loc_82CBB3E8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9184
	ctx.r11.s64 = ctx.r11.s64 + 9184;
	// addi r3,r11,-172
	ctx.r3.s64 = ctx.r11.s64 + -172;
	// blr 
	return;
loc_82CBB3F8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9184
	ctx.r11.s64 = ctx.r11.s64 + 9184;
	// addi r3,r11,-144
	ctx.r3.s64 = ctx.r11.s64 + -144;
	// blr 
	return;
loc_82CBB408:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9184
	ctx.r11.s64 = ctx.r11.s64 + 9184;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// blr 
	return;
loc_82CBB418:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9184
	ctx.r11.s64 = ctx.r11.s64 + 9184;
	// addi r3,r11,-84
	ctx.r3.s64 = ctx.r11.s64 + -84;
	// blr 
	return;
loc_82CBB428:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9184
	ctx.r11.s64 = ctx.r11.s64 + 9184;
	// addi r3,r11,-52
	ctx.r3.s64 = ctx.r11.s64 + -52;
	// blr 
	return;
loc_82CBB438:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9184
	ctx.r11.s64 = ctx.r11.s64 + 9184;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
loc_82CBB448:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,9184
	ctx.r3.s64 = ctx.r11.s64 + 9184;
loc_82CBB450:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBB458"))) PPC_WEAK_FUNC(sub_82CBB458);
PPC_FUNC_IMPL(__imp__sub_82CBB458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBB460;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,9404
	ctx.r30.s64 = ctx.r11.s64 + 9404;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB480;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb49c
	if (!ctx.cr6.eq) goto loc_82CBB49C;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB49C:
	// addi r4,r30,-172
	ctx.r4.s64 = ctx.r30.s64 + -172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB4A8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb4c8
	if (!ctx.cr6.eq) goto loc_82CBB4C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB4C8:
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB4D4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb4f4
	if (!ctx.cr6.eq) goto loc_82CBB4F4;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB4F4:
	// addi r4,r30,-112
	ctx.r4.s64 = ctx.r30.s64 + -112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB500;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb520
	if (!ctx.cr6.eq) goto loc_82CBB520;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB520:
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB52C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb54c
	if (!ctx.cr6.eq) goto loc_82CBB54C;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB54C:
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB558;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb578
	if (!ctx.cr6.eq) goto loc_82CBB578;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB578:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB584;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb5a4
	if (!ctx.cr6.eq) goto loc_82CBB5A4;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB5A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB5B0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb5c4
	if (!ctx.cr6.eq) goto loc_82CBB5C4;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CBB5C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBB5D0"))) PPC_WEAK_FUNC(sub_82CBB5D0);
PPC_FUNC_IMPL(__imp__sub_82CBB5D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x82cbb648
	if (ctx.cr6.gt) goto loc_82CBB648;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-18956
	ctx.r12.s64 = ctx.r12.s64 + -18956;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82CBB604;
	case 1:
		goto loc_82CBB618;
	case 2:
		goto loc_82CBB62C;
	case 3:
		goto loc_82CBB640;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-18940(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18940);
	// lwz r22,-18920(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18920);
	// lwz r22,-18900(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18900);
	// lwz r22,-18880(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18880);
loc_82CBB604:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9476
	ctx.r11.s64 = ctx.r11.s64 + 9476;
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBB618:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9476
	ctx.r11.s64 = ctx.r11.s64 + 9476;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBB62C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9476
	ctx.r11.s64 = ctx.r11.s64 + 9476;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBB640:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9476
	ctx.r11.s64 = ctx.r11.s64 + 9476;
loc_82CBB648:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBB650"))) PPC_WEAK_FUNC(sub_82CBB650);
PPC_FUNC_IMPL(__imp__sub_82CBB650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBB658;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cbb70c
	if (ctx.cr6.eq) goto loc_82CBB70C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,9532
	ctx.r30.s64 = ctx.r11.s64 + 9532;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB680;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb698
	if (!ctx.cr6.eq) goto loc_82CBB698;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB698:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB6A4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb6bc
	if (!ctx.cr6.eq) goto loc_82CBB6BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB6BC:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB6C8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb6e4
	if (!ctx.cr6.eq) goto loc_82CBB6E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB6E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB6F0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb70c
	if (!ctx.cr6.eq) goto loc_82CBB70C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB70C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBB718"))) PPC_WEAK_FUNC(sub_82CBB718);
PPC_FUNC_IMPL(__imp__sub_82CBB718) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-18624
	ctx.r12.s64 = ctx.r12.s64 + -18624;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CBB7C0;
	case 1:
		goto loc_82CBB7D0;
	case 2:
		goto loc_82CBB818;
	case 3:
		goto loc_82CBB7E0;
	case 4:
		goto loc_82CBB818;
	case 5:
		goto loc_82CBB818;
	case 6:
		goto loc_82CBB818;
	case 7:
		goto loc_82CBB7F0;
	case 8:
		goto loc_82CBB818;
	case 9:
		goto loc_82CBB818;
	case 10:
		goto loc_82CBB818;
	case 11:
		goto loc_82CBB818;
	case 12:
		goto loc_82CBB818;
	case 13:
		goto loc_82CBB818;
	case 14:
		goto loc_82CBB818;
	case 15:
		goto loc_82CBB800;
	case 16:
		goto loc_82CBB818;
	case 17:
		goto loc_82CBB818;
	case 18:
		goto loc_82CBB818;
	case 19:
		goto loc_82CBB818;
	case 20:
		goto loc_82CBB818;
	case 21:
		goto loc_82CBB818;
	case 22:
		goto loc_82CBB818;
	case 23:
		goto loc_82CBB818;
	case 24:
		goto loc_82CBB818;
	case 25:
		goto loc_82CBB818;
	case 26:
		goto loc_82CBB818;
	case 27:
		goto loc_82CBB818;
	case 28:
		goto loc_82CBB818;
	case 29:
		goto loc_82CBB818;
	case 30:
		goto loc_82CBB818;
	case 31:
		goto loc_82CBB810;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-18496(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18496);
	// lwz r22,-18480(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18480);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18464(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18464);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18448(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18448);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18432(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18432);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18408);
	// lwz r22,-18416(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18416);
loc_82CBB7C0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9636
	ctx.r11.s64 = ctx.r11.s64 + 9636;
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// blr 
	return;
loc_82CBB7D0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9636
	ctx.r11.s64 = ctx.r11.s64 + 9636;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// blr 
	return;
loc_82CBB7E0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9636
	ctx.r11.s64 = ctx.r11.s64 + 9636;
	// addi r3,r11,-56
	ctx.r3.s64 = ctx.r11.s64 + -56;
	// blr 
	return;
loc_82CBB7F0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9636
	ctx.r11.s64 = ctx.r11.s64 + 9636;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// blr 
	return;
loc_82CBB800:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,9636
	ctx.r11.s64 = ctx.r11.s64 + 9636;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82CBB810:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,9636
	ctx.r3.s64 = ctx.r11.s64 + 9636;
loc_82CBB818:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBB820"))) PPC_WEAK_FUNC(sub_82CBB820);
PPC_FUNC_IMPL(__imp__sub_82CBB820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBB828;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,9760
	ctx.r30.s64 = ctx.r11.s64 + 9760;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB848;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb860
	if (!ctx.cr6.eq) goto loc_82CBB860;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB860:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB86C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb888
	if (!ctx.cr6.eq) goto loc_82CBB888;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB888:
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB894;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb8b0
	if (!ctx.cr6.eq) goto loc_82CBB8B0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB8B0:
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB8BC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb8d8
	if (!ctx.cr6.eq) goto loc_82CBB8D8;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB8D8:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB8E4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb900
	if (!ctx.cr6.eq) goto loc_82CBB900;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB900:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBB90C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbb928
	if (!ctx.cr6.eq) goto loc_82CBB928;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBB928:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBB938"))) PPC_WEAK_FUNC(sub_82CBB938);
PPC_FUNC_IMPL(__imp__sub_82CBB938) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// bgt cr6,0x82cbba78
	if (ctx.cr6.gt) goto loc_82CBBA78;
	// beq cr6,0x82cbba64
	if (ctx.cr6.eq) goto loc_82CBBA64;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bgt cr6,0x82cbbafc
	if (ctx.cr6.gt) goto loc_82CBBAFC;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-18068
	ctx.r12.s64 = ctx.r12.s64 + -18068;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82CBB9EC;
	case 1:
		goto loc_82CBBA00;
	case 2:
		goto loc_82CBBAFC;
	case 3:
		goto loc_82CBBA14;
	case 4:
		goto loc_82CBBAFC;
	case 5:
		goto loc_82CBBAFC;
	case 6:
		goto loc_82CBBAFC;
	case 7:
		goto loc_82CBBA28;
	case 8:
		goto loc_82CBBAFC;
	case 9:
		goto loc_82CBBAFC;
	case 10:
		goto loc_82CBBAFC;
	case 11:
		goto loc_82CBBAFC;
	case 12:
		goto loc_82CBBAFC;
	case 13:
		goto loc_82CBBAFC;
	case 14:
		goto loc_82CBBAFC;
	case 15:
		goto loc_82CBBA3C;
	case 16:
		goto loc_82CBBAFC;
	case 17:
		goto loc_82CBBAFC;
	case 18:
		goto loc_82CBBAFC;
	case 19:
		goto loc_82CBBAFC;
	case 20:
		goto loc_82CBBAFC;
	case 21:
		goto loc_82CBBAFC;
	case 22:
		goto loc_82CBBAFC;
	case 23:
		goto loc_82CBBAFC;
	case 24:
		goto loc_82CBBAFC;
	case 25:
		goto loc_82CBBAFC;
	case 26:
		goto loc_82CBBAFC;
	case 27:
		goto loc_82CBBAFC;
	case 28:
		goto loc_82CBBAFC;
	case 29:
		goto loc_82CBBAFC;
	case 30:
		goto loc_82CBBAFC;
	case 31:
		goto loc_82CBBA50;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-17940(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17940);
	// lwz r22,-17920(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17920);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17900(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17900);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17880(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17880);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17860(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17860);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17668(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17668);
	// lwz r22,-17840(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17840);
loc_82CBB9EC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10020
	ctx.r11.s64 = ctx.r11.s64 + 10020;
	// addi r11,r11,-228
	ctx.r11.s64 = ctx.r11.s64 + -228;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBA00:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10020
	ctx.r11.s64 = ctx.r11.s64 + 10020;
	// addi r11,r11,-204
	ctx.r11.s64 = ctx.r11.s64 + -204;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBA14:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10020
	ctx.r11.s64 = ctx.r11.s64 + 10020;
	// addi r11,r11,-184
	ctx.r11.s64 = ctx.r11.s64 + -184;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBA28:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10020
	ctx.r11.s64 = ctx.r11.s64 + 10020;
	// addi r11,r11,-164
	ctx.r11.s64 = ctx.r11.s64 + -164;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBA3C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10020
	ctx.r11.s64 = ctx.r11.s64 + 10020;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBA50:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10020
	ctx.r11.s64 = ctx.r11.s64 + 10020;
	// addi r11,r11,-124
	ctx.r11.s64 = ctx.r11.s64 + -124;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBA64:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10020
	ctx.r11.s64 = ctx.r11.s64 + 10020;
	// addi r11,r11,-104
	ctx.r11.s64 = ctx.r11.s64 + -104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBA78:
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bgt cr6,0x82cbbad0
	if (ctx.cr6.gt) goto loc_82CBBAD0;
	// beq cr6,0x82cbbabc
	if (ctx.cr6.eq) goto loc_82CBBABC;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// beq cr6,0x82cbbaa8
	if (ctx.cr6.eq) goto loc_82CBBAA8;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bne cr6,0x82cbbafc
	if (!ctx.cr6.eq) goto loc_82CBBAFC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10020
	ctx.r11.s64 = ctx.r11.s64 + 10020;
	// addi r11,r11,-68
	ctx.r11.s64 = ctx.r11.s64 + -68;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBAA8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10020
	ctx.r11.s64 = ctx.r11.s64 + 10020;
	// addi r11,r11,-84
	ctx.r11.s64 = ctx.r11.s64 + -84;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBABC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10020
	ctx.r11.s64 = ctx.r11.s64 + 10020;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBAD0:
	// cmpwi cr6,r3,1024
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1024, ctx.xer);
	// beq cr6,0x82cbbaf0
	if (ctx.cr6.eq) goto loc_82CBBAF0;
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// bne cr6,0x82cbbafc
	if (!ctx.cr6.eq) goto loc_82CBBAFC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10020
	ctx.r11.s64 = ctx.r11.s64 + 10020;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBAF0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10020
	ctx.r11.s64 = ctx.r11.s64 + 10020;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
loc_82CBBAFC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBBB08"))) PPC_WEAK_FUNC(sub_82CBBB08);
PPC_FUNC_IMPL(__imp__sub_82CBBB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBBB10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,10272
	ctx.r30.s64 = ctx.r11.s64 + 10272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-228
	ctx.r4.s64 = ctx.r30.s64 + -228;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBB30;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbb4c
	if (!ctx.cr6.eq) goto loc_82CBBB4C;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBB4C:
	// addi r4,r30,-204
	ctx.r4.s64 = ctx.r30.s64 + -204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBB58;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbb78
	if (!ctx.cr6.eq) goto loc_82CBBB78;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBB78:
	// addi r4,r30,-184
	ctx.r4.s64 = ctx.r30.s64 + -184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBB84;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbba4
	if (!ctx.cr6.eq) goto loc_82CBBBA4;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBBA4:
	// addi r4,r30,-164
	ctx.r4.s64 = ctx.r30.s64 + -164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBBB0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbbd0
	if (!ctx.cr6.eq) goto loc_82CBBBD0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBBD0:
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBBDC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbbfc
	if (!ctx.cr6.eq) goto loc_82CBBBFC;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBBFC:
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBC08;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbc28
	if (!ctx.cr6.eq) goto loc_82CBBC28;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBC28:
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBC34;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbc54
	if (!ctx.cr6.eq) goto loc_82CBBC54;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBC54:
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBC60;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbc80
	if (!ctx.cr6.eq) goto loc_82CBBC80;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBC80:
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBC8C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbcac
	if (!ctx.cr6.eq) goto loc_82CBBCAC;
	// li r11,256
	ctx.r11.s64 = 256;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBCAC:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBCB8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbcd8
	if (!ctx.cr6.eq) goto loc_82CBBCD8;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBCD8:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBCE4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbd04
	if (!ctx.cr6.eq) goto loc_82CBBD04;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBD04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBD10;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbd24
	if (!ctx.cr6.eq) goto loc_82CBBD24;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CBBD24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBBD30"))) PPC_WEAK_FUNC(sub_82CBBD30);
PPC_FUNC_IMPL(__imp__sub_82CBBD30) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-17064
	ctx.r12.s64 = ctx.r12.s64 + -17064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CBBDD8;
	case 1:
		goto loc_82CBBDE8;
	case 2:
		goto loc_82CBBE30;
	case 3:
		goto loc_82CBBDF8;
	case 4:
		goto loc_82CBBE30;
	case 5:
		goto loc_82CBBE30;
	case 6:
		goto loc_82CBBE30;
	case 7:
		goto loc_82CBBE08;
	case 8:
		goto loc_82CBBE30;
	case 9:
		goto loc_82CBBE30;
	case 10:
		goto loc_82CBBE30;
	case 11:
		goto loc_82CBBE30;
	case 12:
		goto loc_82CBBE30;
	case 13:
		goto loc_82CBBE30;
	case 14:
		goto loc_82CBBE30;
	case 15:
		goto loc_82CBBE18;
	case 16:
		goto loc_82CBBE30;
	case 17:
		goto loc_82CBBE30;
	case 18:
		goto loc_82CBBE30;
	case 19:
		goto loc_82CBBE30;
	case 20:
		goto loc_82CBBE30;
	case 21:
		goto loc_82CBBE30;
	case 22:
		goto loc_82CBBE30;
	case 23:
		goto loc_82CBBE30;
	case 24:
		goto loc_82CBBE30;
	case 25:
		goto loc_82CBBE30;
	case 26:
		goto loc_82CBBE30;
	case 27:
		goto loc_82CBBE30;
	case 28:
		goto loc_82CBBE30;
	case 29:
		goto loc_82CBBE30;
	case 30:
		goto loc_82CBBE30;
	case 31:
		goto loc_82CBBE28;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-16936(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16936);
	// lwz r22,-16920(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16920);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16904(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16904);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16888(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16888);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16872(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16872);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16848(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16848);
	// lwz r22,-16856(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16856);
loc_82CBBDD8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10420
	ctx.r11.s64 = ctx.r11.s64 + 10420;
	// addi r3,r11,-124
	ctx.r3.s64 = ctx.r11.s64 + -124;
	// blr 
	return;
loc_82CBBDE8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10420
	ctx.r11.s64 = ctx.r11.s64 + 10420;
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// blr 
	return;
loc_82CBBDF8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10420
	ctx.r11.s64 = ctx.r11.s64 + 10420;
	// addi r3,r11,-76
	ctx.r3.s64 = ctx.r11.s64 + -76;
	// blr 
	return;
loc_82CBBE08:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10420
	ctx.r11.s64 = ctx.r11.s64 + 10420;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// blr 
	return;
loc_82CBBE18:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10420
	ctx.r11.s64 = ctx.r11.s64 + 10420;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
loc_82CBBE28:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,10420
	ctx.r3.s64 = ctx.r11.s64 + 10420;
loc_82CBBE30:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBBE38"))) PPC_WEAK_FUNC(sub_82CBBE38);
PPC_FUNC_IMPL(__imp__sub_82CBBE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBBE40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,10572
	ctx.r30.s64 = ctx.r11.s64 + 10572;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBE60;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbe78
	if (!ctx.cr6.eq) goto loc_82CBBE78;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBE78:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBE84;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbea0
	if (!ctx.cr6.eq) goto loc_82CBBEA0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBEA0:
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBEAC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbec8
	if (!ctx.cr6.eq) goto loc_82CBBEC8;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBEC8:
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBED4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbef0
	if (!ctx.cr6.eq) goto loc_82CBBEF0;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBEF0:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBEFC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbf18
	if (!ctx.cr6.eq) goto loc_82CBBF18;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBF18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBBF24;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbbf40
	if (!ctx.cr6.eq) goto loc_82CBBF40;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBBF40:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBBF50"))) PPC_WEAK_FUNC(sub_82CBBF50);
PPC_FUNC_IMPL(__imp__sub_82CBBF50) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// bgt cr6,0x82cbc028
	if (ctx.cr6.gt) goto loc_82CBC028;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-16524
	ctx.r12.s64 = ctx.r12.s64 + -16524;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82CBBF94;
	case 1:
		goto loc_82CBBFA8;
	case 2:
		goto loc_82CBBFBC;
	case 3:
		goto loc_82CBBFD0;
	case 4:
		goto loc_82CBBFE4;
	case 5:
		goto loc_82CBBFF8;
	case 6:
		goto loc_82CBC00C;
	case 7:
		goto loc_82CBC020;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-16492(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16492);
	// lwz r22,-16472(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16472);
	// lwz r22,-16452(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16452);
	// lwz r22,-16432(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16432);
	// lwz r22,-16412(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16412);
	// lwz r22,-16392(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16392);
	// lwz r22,-16372(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16372);
	// lwz r22,-16352(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16352);
loc_82CBBF94:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10716
	ctx.r11.s64 = ctx.r11.s64 + 10716;
	// addi r11,r11,-116
	ctx.r11.s64 = ctx.r11.s64 + -116;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBFA8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10716
	ctx.r11.s64 = ctx.r11.s64 + 10716;
	// addi r11,r11,-100
	ctx.r11.s64 = ctx.r11.s64 + -100;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBFBC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10716
	ctx.r11.s64 = ctx.r11.s64 + 10716;
	// addi r11,r11,-84
	ctx.r11.s64 = ctx.r11.s64 + -84;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBFD0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10716
	ctx.r11.s64 = ctx.r11.s64 + 10716;
	// addi r11,r11,-68
	ctx.r11.s64 = ctx.r11.s64 + -68;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBFE4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10716
	ctx.r11.s64 = ctx.r11.s64 + 10716;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBBFF8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10716
	ctx.r11.s64 = ctx.r11.s64 + 10716;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC00C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10716
	ctx.r11.s64 = ctx.r11.s64 + 10716;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC020:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,10716
	ctx.r11.s64 = ctx.r11.s64 + 10716;
loc_82CBC028:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC030"))) PPC_WEAK_FUNC(sub_82CBC030);
PPC_FUNC_IMPL(__imp__sub_82CBC030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBC038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cbc1a4
	if (ctx.cr6.eq) goto loc_82CBC1A4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,10856
	ctx.r30.s64 = ctx.r11.s64 + 10856;
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC060;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc080
	if (!ctx.cr6.eq) goto loc_82CBC080;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC080:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC08C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc0a8
	if (!ctx.cr6.eq) goto loc_82CBC0A8;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC0A8:
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC0B4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc0d4
	if (!ctx.cr6.eq) goto loc_82CBC0D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC0D4:
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC0E0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc100
	if (!ctx.cr6.eq) goto loc_82CBC100;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC100:
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC10C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc12c
	if (!ctx.cr6.eq) goto loc_82CBC12C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC12C:
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC138;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc158
	if (!ctx.cr6.eq) goto loc_82CBC158;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC158:
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC164;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc184
	if (!ctx.cr6.eq) goto loc_82CBC184;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC190;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc1a4
	if (!ctx.cr6.eq) goto loc_82CBC1A4;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CBC1A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBC1B0"))) PPC_WEAK_FUNC(sub_82CBC1B0);
PPC_FUNC_IMPL(__imp__sub_82CBC1B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// bgt cr6,0x82cbc384
	if (ctx.cr6.gt) goto loc_82CBC384;
	// beq cr6,0x82cbc370
	if (ctx.cr6.eq) goto loc_82CBC370;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bgt cr6,0x82cbc440
	if (ctx.cr6.gt) goto loc_82CBC440;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-15900
	ctx.r12.s64 = ctx.r12.s64 + -15900;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82CBC2E4;
	case 1:
		goto loc_82CBC2F8;
	case 2:
		goto loc_82CBC440;
	case 3:
		goto loc_82CBC30C;
	case 4:
		goto loc_82CBC440;
	case 5:
		goto loc_82CBC440;
	case 6:
		goto loc_82CBC440;
	case 7:
		goto loc_82CBC320;
	case 8:
		goto loc_82CBC440;
	case 9:
		goto loc_82CBC440;
	case 10:
		goto loc_82CBC440;
	case 11:
		goto loc_82CBC440;
	case 12:
		goto loc_82CBC440;
	case 13:
		goto loc_82CBC440;
	case 14:
		goto loc_82CBC440;
	case 15:
		goto loc_82CBC334;
	case 16:
		goto loc_82CBC440;
	case 17:
		goto loc_82CBC440;
	case 18:
		goto loc_82CBC440;
	case 19:
		goto loc_82CBC440;
	case 20:
		goto loc_82CBC440;
	case 21:
		goto loc_82CBC440;
	case 22:
		goto loc_82CBC440;
	case 23:
		goto loc_82CBC440;
	case 24:
		goto loc_82CBC440;
	case 25:
		goto loc_82CBC440;
	case 26:
		goto loc_82CBC440;
	case 27:
		goto loc_82CBC440;
	case 28:
		goto loc_82CBC440;
	case 29:
		goto loc_82CBC440;
	case 30:
		goto loc_82CBC440;
	case 31:
		goto loc_82CBC348;
	case 32:
		goto loc_82CBC440;
	case 33:
		goto loc_82CBC440;
	case 34:
		goto loc_82CBC440;
	case 35:
		goto loc_82CBC440;
	case 36:
		goto loc_82CBC440;
	case 37:
		goto loc_82CBC440;
	case 38:
		goto loc_82CBC440;
	case 39:
		goto loc_82CBC440;
	case 40:
		goto loc_82CBC440;
	case 41:
		goto loc_82CBC440;
	case 42:
		goto loc_82CBC440;
	case 43:
		goto loc_82CBC440;
	case 44:
		goto loc_82CBC440;
	case 45:
		goto loc_82CBC440;
	case 46:
		goto loc_82CBC440;
	case 47:
		goto loc_82CBC440;
	case 48:
		goto loc_82CBC440;
	case 49:
		goto loc_82CBC440;
	case 50:
		goto loc_82CBC440;
	case 51:
		goto loc_82CBC440;
	case 52:
		goto loc_82CBC440;
	case 53:
		goto loc_82CBC440;
	case 54:
		goto loc_82CBC440;
	case 55:
		goto loc_82CBC440;
	case 56:
		goto loc_82CBC440;
	case 57:
		goto loc_82CBC440;
	case 58:
		goto loc_82CBC440;
	case 59:
		goto loc_82CBC440;
	case 60:
		goto loc_82CBC440;
	case 61:
		goto loc_82CBC440;
	case 62:
		goto loc_82CBC440;
	case 63:
		goto loc_82CBC35C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-15644(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15644);
	// lwz r22,-15624(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15624);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15604(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15604);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15584(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15584);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15564(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15564);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15544(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15544);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15296);
	// lwz r22,-15524(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15524);
loc_82CBC2E4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-328
	ctx.r11.s64 = ctx.r11.s64 + -328;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC2F8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-308
	ctx.r11.s64 = ctx.r11.s64 + -308;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC30C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-288
	ctx.r11.s64 = ctx.r11.s64 + -288;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC320:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-268
	ctx.r11.s64 = ctx.r11.s64 + -268;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC334:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-248
	ctx.r11.s64 = ctx.r11.s64 + -248;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC348:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-224
	ctx.r11.s64 = ctx.r11.s64 + -224;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC35C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-200
	ctx.r11.s64 = ctx.r11.s64 + -200;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC370:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-172
	ctx.r11.s64 = ctx.r11.s64 + -172;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC384:
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// bgt cr6,0x82cbc3f8
	if (ctx.cr6.gt) goto loc_82CBC3F8;
	// beq cr6,0x82cbc3e4
	if (ctx.cr6.eq) goto loc_82CBC3E4;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// beq cr6,0x82cbc3d0
	if (ctx.cr6.eq) goto loc_82CBC3D0;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x82cbc3bc
	if (ctx.cr6.eq) goto loc_82CBC3BC;
	// cmpwi cr6,r3,1024
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1024, ctx.xer);
	// bne cr6,0x82cbc440
	if (!ctx.cr6.eq) goto loc_82CBC440;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-104
	ctx.r11.s64 = ctx.r11.s64 + -104;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC3BC:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-124
	ctx.r11.s64 = ctx.r11.s64 + -124;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC3D0:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC3E4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC3F8:
	// cmpwi cr6,r3,4096
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4096, ctx.xer);
	// beq cr6,0x82cbc434
	if (ctx.cr6.eq) goto loc_82CBC434;
	// cmpwi cr6,r3,8192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8192, ctx.xer);
	// beq cr6,0x82cbc420
	if (ctx.cr6.eq) goto loc_82CBC420;
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// bne cr6,0x82cbc440
	if (!ctx.cr6.eq) goto loc_82CBC440;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC420:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82CBC434:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11208
	ctx.r11.s64 = ctx.r11.s64 + 11208;
	// addi r11,r11,-52
	ctx.r11.s64 = ctx.r11.s64 + -52;
loc_82CBC440:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC448"))) PPC_WEAK_FUNC(sub_82CBC448);
PPC_FUNC_IMPL(__imp__sub_82CBC448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBC450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,11564
	ctx.r30.s64 = ctx.r11.s64 + 11564;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-328
	ctx.r4.s64 = ctx.r30.s64 + -328;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC470;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc48c
	if (!ctx.cr6.eq) goto loc_82CBC48C;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC48C:
	// addi r4,r30,-308
	ctx.r4.s64 = ctx.r30.s64 + -308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC498;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc4b8
	if (!ctx.cr6.eq) goto loc_82CBC4B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC4B8:
	// addi r4,r30,-288
	ctx.r4.s64 = ctx.r30.s64 + -288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC4C4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc4e4
	if (!ctx.cr6.eq) goto loc_82CBC4E4;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC4E4:
	// addi r4,r30,-268
	ctx.r4.s64 = ctx.r30.s64 + -268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC4F0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc510
	if (!ctx.cr6.eq) goto loc_82CBC510;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC510:
	// addi r4,r30,-248
	ctx.r4.s64 = ctx.r30.s64 + -248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC51C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc53c
	if (!ctx.cr6.eq) goto loc_82CBC53C;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC53C:
	// addi r4,r30,-224
	ctx.r4.s64 = ctx.r30.s64 + -224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC548;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc568
	if (!ctx.cr6.eq) goto loc_82CBC568;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC568:
	// addi r4,r30,-200
	ctx.r4.s64 = ctx.r30.s64 + -200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC574;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc594
	if (!ctx.cr6.eq) goto loc_82CBC594;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC594:
	// addi r4,r30,-172
	ctx.r4.s64 = ctx.r30.s64 + -172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC5A0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc5c0
	if (!ctx.cr6.eq) goto loc_82CBC5C0;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC5C0:
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC5CC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc5ec
	if (!ctx.cr6.eq) goto loc_82CBC5EC;
	// li r11,256
	ctx.r11.s64 = 256;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC5EC:
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC5F8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc618
	if (!ctx.cr6.eq) goto loc_82CBC618;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC618:
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC624;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc644
	if (!ctx.cr6.eq) goto loc_82CBC644;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC644:
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC650;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc670
	if (!ctx.cr6.eq) goto loc_82CBC670;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC670:
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC67C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc69c
	if (!ctx.cr6.eq) goto loc_82CBC69C;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC69C:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC6A8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc6c8
	if (!ctx.cr6.eq) goto loc_82CBC6C8;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC6C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC6D4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc6e8
	if (!ctx.cr6.eq) goto loc_82CBC6E8;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82CBC6E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBC6F8"))) PPC_WEAK_FUNC(sub_82CBC6F8);
PPC_FUNC_IMPL(__imp__sub_82CBC6F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,11592
	ctx.r3.s64 = ctx.r11.s64 + 11592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC718"))) PPC_WEAK_FUNC(sub_82CBC718);
PPC_FUNC_IMPL(__imp__sub_82CBC718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,11608
	ctx.r4.s64 = ctx.r11.s64 + 11608;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC740;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc754
	if (!ctx.cr6.eq) goto loc_82CBC754;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82cbc758
	goto loc_82CBC758;
loc_82CBC754:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82CBC758:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC770"))) PPC_WEAK_FUNC(sub_82CBC770);
PPC_FUNC_IMPL(__imp__sub_82CBC770) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32052
	ctx.r12.s64 = -2100559872;
	// addi r12,r12,-14440
	ctx.r12.s64 = ctx.r12.s64 + -14440;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82CBC818;
	case 1:
		goto loc_82CBC828;
	case 2:
		goto loc_82CBC870;
	case 3:
		goto loc_82CBC838;
	case 4:
		goto loc_82CBC870;
	case 5:
		goto loc_82CBC870;
	case 6:
		goto loc_82CBC870;
	case 7:
		goto loc_82CBC848;
	case 8:
		goto loc_82CBC870;
	case 9:
		goto loc_82CBC870;
	case 10:
		goto loc_82CBC870;
	case 11:
		goto loc_82CBC870;
	case 12:
		goto loc_82CBC870;
	case 13:
		goto loc_82CBC870;
	case 14:
		goto loc_82CBC870;
	case 15:
		goto loc_82CBC858;
	case 16:
		goto loc_82CBC870;
	case 17:
		goto loc_82CBC870;
	case 18:
		goto loc_82CBC870;
	case 19:
		goto loc_82CBC870;
	case 20:
		goto loc_82CBC870;
	case 21:
		goto loc_82CBC870;
	case 22:
		goto loc_82CBC870;
	case 23:
		goto loc_82CBC870;
	case 24:
		goto loc_82CBC870;
	case 25:
		goto loc_82CBC870;
	case 26:
		goto loc_82CBC870;
	case 27:
		goto loc_82CBC870;
	case 28:
		goto loc_82CBC870;
	case 29:
		goto loc_82CBC870;
	case 30:
		goto loc_82CBC870;
	case 31:
		goto loc_82CBC868;
	default:
		__builtin_unreachable();
	}
	// lwz r22,-14312(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14312);
	// lwz r22,-14296(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14296);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14280(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14280);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14264(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14264);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14248(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14248);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14224(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14224);
	// lwz r22,-14232(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14232);
loc_82CBC818:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11780
	ctx.r11.s64 = ctx.r11.s64 + 11780;
	// addi r3,r11,-156
	ctx.r3.s64 = ctx.r11.s64 + -156;
	// blr 
	return;
loc_82CBC828:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11780
	ctx.r11.s64 = ctx.r11.s64 + 11780;
	// addi r3,r11,-124
	ctx.r3.s64 = ctx.r11.s64 + -124;
	// blr 
	return;
loc_82CBC838:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11780
	ctx.r11.s64 = ctx.r11.s64 + 11780;
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// blr 
	return;
loc_82CBC848:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11780
	ctx.r11.s64 = ctx.r11.s64 + 11780;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// blr 
	return;
loc_82CBC858:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,11780
	ctx.r11.s64 = ctx.r11.s64 + 11780;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
loc_82CBC868:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,11780
	ctx.r3.s64 = ctx.r11.s64 + 11780;
loc_82CBC870:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC878"))) PPC_WEAK_FUNC(sub_82CBC878);
PPC_FUNC_IMPL(__imp__sub_82CBC878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBC880;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,11964
	ctx.r30.s64 = ctx.r11.s64 + 11964;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-156
	ctx.r4.s64 = ctx.r30.s64 + -156;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC8A0;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc8b8
	if (!ctx.cr6.eq) goto loc_82CBC8B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC8B8:
	// addi r4,r30,-124
	ctx.r4.s64 = ctx.r30.s64 + -124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC8C4;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc8e0
	if (!ctx.cr6.eq) goto loc_82CBC8E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC8E0:
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC8EC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc908
	if (!ctx.cr6.eq) goto loc_82CBC908;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC908:
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC914;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc930
	if (!ctx.cr6.eq) goto loc_82CBC930;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC930:
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC93C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc958
	if (!ctx.cr6.eq) goto loc_82CBC958;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC958:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBC964;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbc980
	if (!ctx.cr6.eq) goto loc_82CBC980;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBC980:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBC990"))) PPC_WEAK_FUNC(sub_82CBC990);
PPC_FUNC_IMPL(__imp__sub_82CBC990) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82cbc9c8
	if (ctx.cr6.lt) goto loc_82CBC9C8;
	// beq cr6,0x82cbc9b8
	if (ctx.cr6.eq) goto loc_82CBC9B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,12040
	ctx.r3.s64 = ctx.r11.s64 + 12040;
	// blr 
	return;
loc_82CBC9B8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12040
	ctx.r11.s64 = ctx.r11.s64 + 12040;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
loc_82CBC9C8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12040
	ctx.r11.s64 = ctx.r11.s64 + 12040;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBC9D8"))) PPC_WEAK_FUNC(sub_82CBC9D8);
PPC_FUNC_IMPL(__imp__sub_82CBC9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBC9E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82cbca6c
	if (ctx.cr6.eq) goto loc_82CBCA6C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,12108
	ctx.r30.s64 = ctx.r11.s64 + 12108;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCA08;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbca20
	if (!ctx.cr6.eq) goto loc_82CBCA20;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCA20:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCA2C;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbca44
	if (!ctx.cr6.eq) goto loc_82CBCA44;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCA44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCA50;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbca6c
	if (!ctx.cr6.eq) goto loc_82CBCA6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCA6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CBCA78"))) PPC_WEAK_FUNC(sub_82CBCA78);
PPC_FUNC_IMPL(__imp__sub_82CBCA78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82cbca9c
	if (ctx.cr6.eq) goto loc_82CBCA9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,12164
	ctx.r3.s64 = ctx.r11.s64 + 12164;
	// blr 
	return;
loc_82CBCA9C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,12164
	ctx.r11.s64 = ctx.r11.s64 + 12164;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CBCAB0"))) PPC_WEAK_FUNC(sub_82CBCAB0);
PPC_FUNC_IMPL(__imp__sub_82CBCAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x82CBCAB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,12224
	ctx.r30.s64 = ctx.r11.s64 + 12224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCAD8;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbcaf0
	if (!ctx.cr6.eq) goto loc_82CBCAF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCAF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e2e820
	ctx.lr = 0x82CBCAFC;
	sub_82E2E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82cbcb18
	if (!ctx.cr6.eq) goto loc_82CBCB18;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_82CBCB18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

