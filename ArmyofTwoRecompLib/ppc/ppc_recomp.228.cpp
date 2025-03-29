#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831023F0"))) PPC_WEAK_FUNC(sub_831023F0);
PPC_FUNC_IMPL(__imp__sub_831023F0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1752
	ctx.r10.s64 = ctx.r11.s64 + -1752;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// beq cr6,0x83102444
	if (ctx.cr6.eq) goto loc_83102444;
	// bl 0x831022d0
	ctx.lr = 0x83102440;
	sub_831022D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83102444:
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

__attribute__((alias("__imp__sub_83102458"))) PPC_WEAK_FUNC(sub_83102458);
PPC_FUNC_IMPL(__imp__sub_83102458) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83102460"))) PPC_WEAK_FUNC(sub_83102460);
PPC_FUNC_IMPL(__imp__sub_83102460) {
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
	// bl 0x83102198
	ctx.lr = 0x83102480;
	sub_83102198(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83102498
	if (ctx.cr6.eq) goto loc_83102498;
	// bl 0x82545ee8
	ctx.lr = 0x83102494;
	sub_82545EE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83102498:
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

__attribute__((alias("__imp__sub_831024B0"))) PPC_WEAK_FUNC(sub_831024B0);
PPC_FUNC_IMPL(__imp__sub_831024B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi r5,8
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt 0x83102508
	if (ctx.cr0.lt) goto loc_83102508;
	// li r0,7
	ctx.r0.s64 = 7;
	// rlwinm r7,r5,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// and r0,r5,r0
	ctx.r0.u64 = ctx.r5.u64 & ctx.r0.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// ld r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x831024dc
	goto loc_831024DC;
loc_831024D4:
	// ldu r6,8(r4)
	ea = 8 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// ldu r5,8(r3)
	ea = 8 + ctx.r3.u32;
	ctx.r5.u64 = PPC_LOAD_U64(ea);
	ctx.r3.u32 = ea;
loc_831024DC:
	// cmpd r5,r6
	ctx.cr0.compare<int64_t>(ctx.r5.s64, ctx.r6.s64, ctx.xer);
	// bdnzt eq,0x831024d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && ctx.cr0.eq) goto loc_831024D4;
	// beq 0x831024fc
	if (ctx.cr0.eq) goto loc_831024FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpld r5,r6
	ctx.cr0.compare<uint64_t>(ctx.r5.u64, ctx.r6.u64, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831024FC:
	// mr r5,r0
	ctx.r5.u64 = ctx.r0.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
loc_83102508:
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// beq 0x83102538
	if (ctx.cr0.eq) goto loc_83102538;
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// b 0x83102528
	goto loc_83102528;
loc_83102520:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzu r5,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
loc_83102528:
	// cmpw r5,r6
	ctx.cr0.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bdnzt eq,0x83102520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && ctx.cr0.eq) goto loc_83102520;
	// subf r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	// blr 
	return;
loc_83102538:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83102540"))) PPC_WEAK_FUNC(sub_83102540);
PPC_FUNC_IMPL(__imp__sub_83102540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// cmpwi cr1,r4,0
	ctx.cr1.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// andi. r8,r7,3
	ctx.r8.u64 = ctx.r7.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr1
	if (ctx.cr1.eq) return;
	// beq 0x83102578
	if (ctx.cr0.eq) goto loc_83102578;
loc_8310255C:
	// lbz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr1,r4,0
	ctx.cr1.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// andi. r8,r7,3
	ctx.r8.u64 = ctx.r7.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// beqlr cr1
	if (ctx.cr1.eq) return;
	// bne 0x8310255c
	if (!ctx.cr0.eq) goto loc_8310255C;
loc_83102578:
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lis r6,32639
	ctx.r6.s64 = 2139029504;
	// ori r6,r6,32639
	ctx.r6.u64 = ctx.r6.u64 | 32639;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83102588:
	// and r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 & ctx.r6.u64;
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// not. r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x831025ac
	if (!ctx.cr0.eq) goto loc_831025AC;
	// lwzu r4,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83102588
	goto loc_83102588;
loc_831025AC:
	// cntlzw r4,r8
	ctx.r4.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831025C0"))) PPC_WEAK_FUNC(sub_831025C0);
PPC_FUNC_IMPL(__imp__sub_831025C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x831025C8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stfd f31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f31.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82e35470
	ctx.lr = 0x831025E8;
	sub_82E35470(ctx, base);
	// lis r11,-16377
	ctx.r11.s64 = -1073283072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r28,r11,65279
	ctx.r28.u64 = ctx.r11.u64 | 65279;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-5296(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5296);
	// bl 0x82e35470
	ctx.lr = 0x83102604;
	sub_82E35470(ctx, base);
	// lhz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r11,r30,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x8310269c
	if (!ctx.cr6.eq) goto loc_8310269C;
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// lfd f0,-30224(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -30224);
	// stfd f0,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f0.u64);
	// bl 0x82e33a18
	ctx.lr = 0x83102628;
	sub_82E33A18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x83102674
	if (!ctx.cr0.gt) goto loc_83102674;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x83102658
	if (!ctx.cr6.gt) goto loc_83102658;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x83102674
	if (!ctx.cr6.eq) goto loc_83102674;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f31.u64);
	// li r3,28
	ctx.r3.s64 = 28;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82e351a8
	ctx.lr = 0x83102654;
	sub_82E351A8(ctx, base);
	// b 0x831026e0
	goto loc_831026E0;
loc_83102658:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f31.u64);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfd f1,-11432(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11432);
	// bl 0x82e2c108
	ctx.lr = 0x8310266C;
	sub_82E2C108(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x831026d0
	goto loc_831026D0;
loc_83102674:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,-28560(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -28560);
	// fadd f2,f31,f0
	ctx.f2.f64 = ctx.f31.f64 + ctx.f0.f64;
	// stfd f2,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f2.u64);
	// bl 0x82e352b0
	ctx.lr = 0x83102698;
	sub_82E352B0(ctx, base);
	// b 0x831026e0
	goto loc_831026E0;
loc_8310269C:
	// bl 0x82e33e30
	ctx.lr = 0x831026A0;
	sub_82E33E30(ctx, base);
	// fsub f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 - ctx.f1.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// stfd f1,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
	// lfd f0,-11432(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -11432);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x831026d0
	if (!ctx.cr6.eq) goto loc_831026D0;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r11,r30,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lfd f31,80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_831026D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e35470
	ctx.lr = 0x831026DC;
	sub_82E35470(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_831026E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831026F0"))) PPC_WEAK_FUNC(sub_831026F0);
PPC_FUNC_IMPL(__imp__sub_831026F0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_831026F4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r5
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r5.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// rldicl r3,r6,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwsync 
	// addis r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 65536;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwimi r6,r7,0,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// stdcx. r6,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r5.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne- 0x831026f4
	if (!ctx.cr0.eq) goto loc_831026F4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83102730"))) PPC_WEAK_FUNC(sub_83102730);
PPC_FUNC_IMPL(__imp__sub_83102730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e5c
	ctx.lr = 0x83102738;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x83102794
	if (ctx.cr6.eq) goto loc_83102794;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83102768:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83102768
	if (!ctx.cr6.eq) goto loc_83102768;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r30,199
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 199, ctx.xer);
	// ble cr6,0x83102798
	if (!ctx.cr6.gt) goto loc_83102798;
loc_8310278C:
	// li r31,87
	ctx.r31.s64 = 87;
	// b 0x83102888
	goto loc_83102888;
loc_83102794:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83102798:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8310278c
	if (ctx.cr6.eq) goto loc_8310278C;
	// cmplwi cr6,r28,1000
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1000, ctx.xer);
	// bgt cr6,0x8310278c
	if (ctx.cr6.gt) goto loc_8310278C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8310278c
	if (ctx.cr6.eq) goto loc_8310278C;
	// lis r6,5
	ctx.r6.s64 = 327680;
	// lis r5,5
	ctx.r5.s64 = 327680;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,212
	ctx.r7.s64 = 212;
	// ori r6,r6,32826
	ctx.r6.u64 = ctx.r6.u64 | 32826;
	// ori r5,r5,32825
	ctx.r5.u64 = ctx.r5.u64 | 32825;
	// li r4,252
	ctx.r4.s64 = 252;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x83158774
	ctx.lr = 0x831027DC;
	__imp__XamCreateEnumeratorHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83102868
	if (!ctx.cr0.eq) goto loc_83102868;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83158764
	ctx.lr = 0x831027F0;
	__imp__XamGetPrivateEnumStructureFromHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83102868
	if (!ctx.cr0.eq) goto loc_83102868;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83102808
	if (ctx.cr6.eq) goto loc_83102808;
	// mulli r11,r28,208
	ctx.r11.s64 = ctx.r28.s64 * 208;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_83102808:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// beq cr6,0x83102828
	if (ctx.cr6.eq) goto loc_83102828;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e28fd0
	ctx.lr = 0x83102828;
	sub_82E28FD0(ctx, base);
loc_83102828:
	// mulli r11,r28,215
	ctx.r11.s64 = ctx.r28.s64 * 215;
	// stbx r29,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// addi r5,r31,208
	ctx.r5.s64 = ctx.r31.s64 + 208;
	// lis r3,6144
	ctx.r3.s64 = 402653184;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// bl 0x831586f4
	ctx.lr = 0x83102848;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83102858
	if (!ctx.cr0.lt) goto loc_83102858;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x83102868
	goto loc_83102868;
loc_83102858:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_83102868:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83102878
	if (ctx.cr6.eq) goto loc_83102878;
	// bl 0x82b07040
	ctx.lr = 0x83102878;
	sub_82B07040(ctx, base);
loc_83102878:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83102888
	if (ctx.cr6.eq) goto loc_83102888;
	// bl 0x83157e84
	ctx.lr = 0x83102888;
	__imp__ObDereferenceObject(ctx, base);
loc_83102888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28eac
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83102898"))) PPC_WEAK_FUNC(sub_83102898);
PPC_FUNC_IMPL(__imp__sub_83102898) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82f663d0
	ctx.lr = 0x831028C4;
	sub_82F663D0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82c453d0
	ctx.lr = 0x831028D4;
	sub_82C453D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x831028ec
	if (!ctx.cr0.lt) goto loc_831028EC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_831028EC:
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

__attribute__((alias("__imp__sub_83102908"))) PPC_WEAK_FUNC(sub_83102908);
PPC_FUNC_IMPL(__imp__sub_83102908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16676);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c44c40
	ctx.lr = 0x8310292C;
	sub_82C44C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83102944
	if (ctx.cr0.lt) goto loc_83102944;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c4ac30
	ctx.lr = 0x83102944;
	sub_82C4AC30(ctx, base);
loc_83102944:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83102958"))) PPC_WEAK_FUNC(sub_83102958);
PPC_FUNC_IMPL(__imp__sub_83102958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r11,7312
	ctx.r11.s64 = ctx.r11.s64 + 7312;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83102970"))) PPC_WEAK_FUNC(sub_83102970);
PPC_FUNC_IMPL(__imp__sub_83102970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x83102978;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16676);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c44c18
	ctx.lr = 0x83102990;
	sub_82C44C18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83102a38
	if (ctx.cr0.lt) goto loc_83102A38;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f663d0
	ctx.lr = 0x831029A8;
	sub_82F663D0(ctx, base);
	// lis r12,-1057
	ctx.r12.s64 = -69271552;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r12,r12,221
	ctx.r12.u64 = ctx.r12.u64 | 221;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// li r6,0
	ctx.r6.s64 = 0;
	// oris r12,r12,60123
	ctx.r12.u64 = ctx.r12.u64 | 3940220928;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r12,r12,61168
	ctx.r12.u64 = ctx.r12.u64 | 61168;
	// or r4,r11,r12
	ctx.r4.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// bl 0x82c4aca8
	ctx.lr = 0x831029E4;
	sub_82C4ACA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83102a38
	if (ctx.cr0.lt) goto loc_83102A38;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_831029F8:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82c4ae48
	ctx.lr = 0x83102A14;
	sub_82C4AE48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83102a38
	if (ctx.cr0.lt) goto loc_83102A38;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x831029f8
	if (ctx.cr6.lt) goto loc_831029F8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c4abb8
	ctx.lr = 0x83102A38;
	sub_82C4ABB8(ctx, base);
loc_83102A38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83102A40"))) PPC_WEAK_FUNC(sub_83102A40);
PPC_FUNC_IMPL(__imp__sub_83102A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e6c
	ctx.lr = 0x83102A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83102b70
	goto loc_83102B70;
loc_83102A70:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83102b7c
	if (!ctx.cr6.lt) goto loc_83102B7C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83102b2c
	if (!ctx.cr6.eq) goto loc_83102B2C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 140);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83102aac
	if (ctx.cr6.eq) goto loc_83102AAC;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
loc_83102AAC:
	// lhz r11,42(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// ble cr6,0x83102ac0
	if (!ctx.cr6.gt) goto loc_83102AC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
loc_83102AC0:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lbz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r8,12,0,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xFFFFF000) | (ctx.r11.u64 & 0xFFFFFFFF00000FFF);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lhz r11,42(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// rlwimi r8,r11,1,20,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xFFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF001);
	// sth r8,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r8.u16);
	// lhz r11,42(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r11.u16);
	// lwz r11,196(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwimi r11,r10,0,16,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFE) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0001);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c4add0
	ctx.lr = 0x83102B2C;
	sub_82C4ADD0(ctx, base);
loc_83102B2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102898
	ctx.lr = 0x83102B38;
	sub_83102898(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// twllei r10,0
	// divwu r8,r9,r10
	ctx.r8.u32 = ctx.r9.u32 / ctx.r10.u32;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r11,r8,r10
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_83102B70:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// bne cr6,0x83102a70
	if (!ctx.cr6.eq) goto loc_83102A70;
loc_83102B7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28ebc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83102B88"))) PPC_WEAK_FUNC(sub_83102B88);
PPC_FUNC_IMPL(__imp__sub_83102B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e60
	ctx.lr = 0x83102B90;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// lwz r9,16676(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16676);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x82c45ac8
	ctx.lr = 0x83102BDC;
	sub_82C45AC8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83102ce4
	if (ctx.cr0.lt) goto loc_83102CE4;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x82c4afe8
	ctx.lr = 0x83102C04;
	sub_82C4AFE8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83102ce4
	if (ctx.cr0.lt) goto loc_83102CE4;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f663d0
	ctx.lr = 0x83102C1C;
	sub_82F663D0(ctx, base);
	// lis r12,-1057
	ctx.r12.s64 = -69271552;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r12,r12,221
	ctx.r12.u64 = ctx.r12.u64 | 221;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// li r6,0
	ctx.r6.s64 = 0;
	// oris r12,r12,60123
	ctx.r12.u64 = ctx.r12.u64 | 3940220928;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r12,r12,61168
	ctx.r12.u64 = ctx.r12.u64 | 61168;
	// or r4,r11,r12
	ctx.r4.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// bl 0x82c4aca8
	ctx.lr = 0x83102C58;
	sub_82C4ACA8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83102ce4
	if (ctx.cr0.lt) goto loc_83102CE4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83102C64:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82c4ae48
	ctx.lr = 0x83102C74;
	sub_82C4AE48(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83102ce4
	if (ctx.cr0.lt) goto loc_83102CE4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// blt cr6,0x83102c64
	if (ctx.cr6.lt) goto loc_83102C64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82c47020
	ctx.lr = 0x83102C94;
	sub_82C47020(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83102cdc
	if (!ctx.cr6.gt) goto loc_83102CDC;
loc_83102CA4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82c453d0
	ctx.lr = 0x83102CC4;
	sub_82C453D0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x83102cdc
	if (ctx.cr0.lt) goto loc_83102CDC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83102ca4
	if (ctx.cr6.lt) goto loc_83102CA4;
loc_83102CDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83102CE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82e28eb0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83102CF0"))) PPC_WEAK_FUNC(sub_83102CF0);
PPC_FUNC_IMPL(__imp__sub_83102CF0) {
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
	// beq cr6,0x83102d38
	if (ctx.cr6.eq) goto loc_83102D38;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82c47040
	ctx.lr = 0x83102D18;
	sub_82C47040(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82c4aa20
	ctx.lr = 0x83102D20;
	sub_82C4AA20(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82c45980
	ctx.lr = 0x83102D28;
	sub_82C45980(ctx, base);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// bl 0x82547938
	ctx.lr = 0x83102D38;
	sub_82547938(ctx, base);
loc_83102D38:
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

__attribute__((alias("__imp__sub_83102D50"))) PPC_WEAK_FUNC(sub_83102D50);
PPC_FUNC_IMPL(__imp__sub_83102D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82e28e68
	ctx.lr = 0x83102D58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82547910
	ctx.lr = 0x83102D7C;
	sub_82547910(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83102da8
	if (!ctx.cr0.eq) goto loc_83102DA8;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// bl 0x83102cf0
	ctx.lr = 0x83102D94;
	sub_83102CF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_83102D98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82e28eb8
	__restgprlr_28(ctx, base);
	return;
loc_83102DA8:
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,-5280
	ctx.r10.s64 = ctx.r10.s64 + -5280;
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// li r7,255
	ctx.r7.s64 = 255;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stb r7,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r7.u8);
	// b 0x83102d98
	goto loc_83102D98;
}

__attribute__((alias("__imp__sub_83102DD8"))) PPC_WEAK_FUNC(sub_83102DD8);
PPC_FUNC_IMPL(__imp__sub_83102DD8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83102de8
	if (!ctx.cr0.eq) goto loc_83102DE8;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x83102d50
	sub_83102D50(ctx, base);
	return;
loc_83102DE8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83102DF8"))) PPC_WEAK_FUNC(sub_83102DF8);
PPC_FUNC_IMPL(__imp__sub_83102DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r3,r11,11736
	ctx.r3.s64 = ctx.r11.s64 + 11736;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83102E08"))) PPC_WEAK_FUNC(sub_83102E08);
PPC_FUNC_IMPL(__imp__sub_83102E08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r11,28864
	ctx.r4.s64 = ctx.r11.s64 + 28864;
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-12120
	ctx.r3.s64 = ctx.r11.s64 + -12120;
	// bl 0x830df1c8
	ctx.lr = 0x83102E28;
	sub_830DF1C8(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r10,-20704
	ctx.r3.s64 = ctx.r10.s64 + -20704;
	// addi r11,r11,-22520
	ctx.r11.s64 = ctx.r11.s64 + -22520;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// stw r11,-940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -940, ctx.r11.u32);
	// bl 0x82e29708
	ctx.lr = 0x83102E44;
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

__attribute__((alias("__imp__sub_83102E58"))) PPC_WEAK_FUNC(sub_83102E58);
PPC_FUNC_IMPL(__imp__sub_83102E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20680
	ctx.r3.s64 = ctx.r11.s64 + -20680;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83102E68"))) PPC_WEAK_FUNC(sub_83102E68);
PPC_FUNC_IMPL(__imp__sub_83102E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20656
	ctx.r3.s64 = ctx.r11.s64 + -20656;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83102E78"))) PPC_WEAK_FUNC(sub_83102E78);
PPC_FUNC_IMPL(__imp__sub_83102E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20632
	ctx.r3.s64 = ctx.r11.s64 + -20632;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83102E88"))) PPC_WEAK_FUNC(sub_83102E88);
PPC_FUNC_IMPL(__imp__sub_83102E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20608
	ctx.r3.s64 = ctx.r11.s64 + -20608;
	// b 0x82e29708
	sub_82E29708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83102E98"))) PPC_WEAK_FUNC(sub_83102E98);
PPC_FUNC_IMPL(__imp__sub_83102E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-13896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r11,r11,2880
	ctx.r11.s64 = ctx.r11.s64 + 2880;
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

__attribute__((alias("__imp__sub_83102EC8"))) PPC_WEAK_FUNC(sub_83102EC8);
PPC_FUNC_IMPL(__imp__sub_83102EC8) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,4128
	ctx.r11.s64 = ctx.r11.s64 + 4128;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83102EF8"))) PPC_WEAK_FUNC(sub_83102EF8);
PPC_FUNC_IMPL(__imp__sub_83102EF8) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,4144
	ctx.r11.s64 = ctx.r11.s64 + 4144;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83102F40"))) PPC_WEAK_FUNC(sub_83102F40);
PPC_FUNC_IMPL(__imp__sub_83102F40) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83102F88"))) PPC_WEAK_FUNC(sub_83102F88);
PPC_FUNC_IMPL(__imp__sub_83102F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22492
	ctx.r4.s64 = ctx.r11.s64 + 22492;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2452
	ctx.r3.s64 = ctx.r11.s64 + 2452;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83102FA8"))) PPC_WEAK_FUNC(sub_83102FA8);
PPC_FUNC_IMPL(__imp__sub_83102FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22512
	ctx.r4.s64 = ctx.r11.s64 + 22512;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4408
	ctx.r3.s64 = ctx.r11.s64 + 4408;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83102FC8"))) PPC_WEAK_FUNC(sub_83102FC8);
PPC_FUNC_IMPL(__imp__sub_83102FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22528
	ctx.r4.s64 = ctx.r11.s64 + 22528;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1796
	ctx.r3.s64 = ctx.r11.s64 + 1796;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83102FE8"))) PPC_WEAK_FUNC(sub_83102FE8);
PPC_FUNC_IMPL(__imp__sub_83102FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22540
	ctx.r4.s64 = ctx.r11.s64 + 22540;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4800
	ctx.r3.s64 = ctx.r11.s64 + 4800;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103008"))) PPC_WEAK_FUNC(sub_83103008);
PPC_FUNC_IMPL(__imp__sub_83103008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22548
	ctx.r4.s64 = ctx.r11.s64 + 22548;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3532
	ctx.r3.s64 = ctx.r11.s64 + 3532;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103028"))) PPC_WEAK_FUNC(sub_83103028);
PPC_FUNC_IMPL(__imp__sub_83103028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22560
	ctx.r4.s64 = ctx.r11.s64 + 22560;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,388
	ctx.r3.s64 = ctx.r11.s64 + 388;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103048"))) PPC_WEAK_FUNC(sub_83103048);
PPC_FUNC_IMPL(__imp__sub_83103048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22568
	ctx.r4.s64 = ctx.r11.s64 + 22568;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3724
	ctx.r3.s64 = ctx.r11.s64 + 3724;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103068"))) PPC_WEAK_FUNC(sub_83103068);
PPC_FUNC_IMPL(__imp__sub_83103068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22592
	ctx.r4.s64 = ctx.r11.s64 + 22592;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3340
	ctx.r3.s64 = ctx.r11.s64 + 3340;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103088"))) PPC_WEAK_FUNC(sub_83103088);
PPC_FUNC_IMPL(__imp__sub_83103088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22604
	ctx.r4.s64 = ctx.r11.s64 + 22604;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831030A8"))) PPC_WEAK_FUNC(sub_831030A8);
PPC_FUNC_IMPL(__imp__sub_831030A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22608
	ctx.r4.s64 = ctx.r11.s64 + 22608;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2752
	ctx.r3.s64 = ctx.r11.s64 + 2752;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831030C8"))) PPC_WEAK_FUNC(sub_831030C8);
PPC_FUNC_IMPL(__imp__sub_831030C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22620
	ctx.r4.s64 = ctx.r11.s64 + 22620;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4352
	ctx.r3.s64 = ctx.r11.s64 + 4352;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831030E8"))) PPC_WEAK_FUNC(sub_831030E8);
PPC_FUNC_IMPL(__imp__sub_831030E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22632
	ctx.r4.s64 = ctx.r11.s64 + 22632;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2636
	ctx.r3.s64 = ctx.r11.s64 + 2636;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103108"))) PPC_WEAK_FUNC(sub_83103108);
PPC_FUNC_IMPL(__imp__sub_83103108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22644
	ctx.r4.s64 = ctx.r11.s64 + 22644;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4316
	ctx.r3.s64 = ctx.r11.s64 + 4316;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103128"))) PPC_WEAK_FUNC(sub_83103128);
PPC_FUNC_IMPL(__imp__sub_83103128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22656
	ctx.r4.s64 = ctx.r11.s64 + 22656;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103148"))) PPC_WEAK_FUNC(sub_83103148);
PPC_FUNC_IMPL(__imp__sub_83103148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22672
	ctx.r4.s64 = ctx.r11.s64 + 22672;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,372
	ctx.r3.s64 = ctx.r11.s64 + 372;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103168"))) PPC_WEAK_FUNC(sub_83103168);
PPC_FUNC_IMPL(__imp__sub_83103168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22684
	ctx.r4.s64 = ctx.r11.s64 + 22684;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2484
	ctx.r3.s64 = ctx.r11.s64 + 2484;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103188"))) PPC_WEAK_FUNC(sub_83103188);
PPC_FUNC_IMPL(__imp__sub_83103188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22696
	ctx.r4.s64 = ctx.r11.s64 + 22696;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4900
	ctx.r3.s64 = ctx.r11.s64 + 4900;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831031A8"))) PPC_WEAK_FUNC(sub_831031A8);
PPC_FUNC_IMPL(__imp__sub_831031A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22716
	ctx.r4.s64 = ctx.r11.s64 + 22716;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1764
	ctx.r3.s64 = ctx.r11.s64 + 1764;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831031C8"))) PPC_WEAK_FUNC(sub_831031C8);
PPC_FUNC_IMPL(__imp__sub_831031C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22732
	ctx.r4.s64 = ctx.r11.s64 + 22732;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831031E8"))) PPC_WEAK_FUNC(sub_831031E8);
PPC_FUNC_IMPL(__imp__sub_831031E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22748
	ctx.r4.s64 = ctx.r11.s64 + 22748;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1968
	ctx.r3.s64 = ctx.r11.s64 + 1968;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103208"))) PPC_WEAK_FUNC(sub_83103208);
PPC_FUNC_IMPL(__imp__sub_83103208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22760
	ctx.r4.s64 = ctx.r11.s64 + 22760;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3544
	ctx.r3.s64 = ctx.r11.s64 + 3544;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103228"))) PPC_WEAK_FUNC(sub_83103228);
PPC_FUNC_IMPL(__imp__sub_83103228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22772
	ctx.r4.s64 = ctx.r11.s64 + 22772;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4416
	ctx.r3.s64 = ctx.r11.s64 + 4416;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103248"))) PPC_WEAK_FUNC(sub_83103248);
PPC_FUNC_IMPL(__imp__sub_83103248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22780
	ctx.r4.s64 = ctx.r11.s64 + 22780;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3744
	ctx.r3.s64 = ctx.r11.s64 + 3744;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103268"))) PPC_WEAK_FUNC(sub_83103268);
PPC_FUNC_IMPL(__imp__sub_83103268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22792
	ctx.r4.s64 = ctx.r11.s64 + 22792;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4760
	ctx.r3.s64 = ctx.r11.s64 + 4760;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103288"))) PPC_WEAK_FUNC(sub_83103288);
PPC_FUNC_IMPL(__imp__sub_83103288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22804
	ctx.r4.s64 = ctx.r11.s64 + 22804;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2836
	ctx.r3.s64 = ctx.r11.s64 + 2836;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831032A8"))) PPC_WEAK_FUNC(sub_831032A8);
PPC_FUNC_IMPL(__imp__sub_831032A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2492
	ctx.r3.s64 = ctx.r11.s64 + 2492;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831032C8"))) PPC_WEAK_FUNC(sub_831032C8);
PPC_FUNC_IMPL(__imp__sub_831032C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22832
	ctx.r4.s64 = ctx.r11.s64 + 22832;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3008
	ctx.r3.s64 = ctx.r11.s64 + 3008;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831032E8"))) PPC_WEAK_FUNC(sub_831032E8);
PPC_FUNC_IMPL(__imp__sub_831032E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22848
	ctx.r4.s64 = ctx.r11.s64 + 22848;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1836
	ctx.r3.s64 = ctx.r11.s64 + 1836;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103308"))) PPC_WEAK_FUNC(sub_83103308);
PPC_FUNC_IMPL(__imp__sub_83103308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22868
	ctx.r4.s64 = ctx.r11.s64 + 22868;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3444
	ctx.r3.s64 = ctx.r11.s64 + 3444;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103328"))) PPC_WEAK_FUNC(sub_83103328);
PPC_FUNC_IMPL(__imp__sub_83103328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22888
	ctx.r4.s64 = ctx.r11.s64 + 22888;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4668
	ctx.r3.s64 = ctx.r11.s64 + 4668;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103348"))) PPC_WEAK_FUNC(sub_83103348);
PPC_FUNC_IMPL(__imp__sub_83103348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22908
	ctx.r4.s64 = ctx.r11.s64 + 22908;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2800
	ctx.r3.s64 = ctx.r11.s64 + 2800;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103368"))) PPC_WEAK_FUNC(sub_83103368);
PPC_FUNC_IMPL(__imp__sub_83103368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22920
	ctx.r4.s64 = ctx.r11.s64 + 22920;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2964
	ctx.r3.s64 = ctx.r11.s64 + 2964;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103388"))) PPC_WEAK_FUNC(sub_83103388);
PPC_FUNC_IMPL(__imp__sub_83103388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22928
	ctx.r4.s64 = ctx.r11.s64 + 22928;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2912
	ctx.r3.s64 = ctx.r11.s64 + 2912;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831033A8"))) PPC_WEAK_FUNC(sub_831033A8);
PPC_FUNC_IMPL(__imp__sub_831033A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22936
	ctx.r4.s64 = ctx.r11.s64 + 22936;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1020
	ctx.r3.s64 = ctx.r11.s64 + 1020;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831033C8"))) PPC_WEAK_FUNC(sub_831033C8);
PPC_FUNC_IMPL(__imp__sub_831033C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22948
	ctx.r4.s64 = ctx.r11.s64 + 22948;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831033E8"))) PPC_WEAK_FUNC(sub_831033E8);
PPC_FUNC_IMPL(__imp__sub_831033E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-25836
	ctx.r4.s64 = ctx.r11.s64 + -25836;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,656
	ctx.r3.s64 = ctx.r11.s64 + 656;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103408"))) PPC_WEAK_FUNC(sub_83103408);
PPC_FUNC_IMPL(__imp__sub_83103408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22956
	ctx.r4.s64 = ctx.r11.s64 + 22956;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3912
	ctx.r3.s64 = ctx.r11.s64 + 3912;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103428"))) PPC_WEAK_FUNC(sub_83103428);
PPC_FUNC_IMPL(__imp__sub_83103428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22972
	ctx.r4.s64 = ctx.r11.s64 + 22972;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3480
	ctx.r3.s64 = ctx.r11.s64 + 3480;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103448"))) PPC_WEAK_FUNC(sub_83103448);
PPC_FUNC_IMPL(__imp__sub_83103448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,22996
	ctx.r4.s64 = ctx.r11.s64 + 22996;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3656
	ctx.r3.s64 = ctx.r11.s64 + 3656;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103468"))) PPC_WEAK_FUNC(sub_83103468);
PPC_FUNC_IMPL(__imp__sub_83103468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23020
	ctx.r4.s64 = ctx.r11.s64 + 23020;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3348
	ctx.r3.s64 = ctx.r11.s64 + 3348;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103488"))) PPC_WEAK_FUNC(sub_83103488);
PPC_FUNC_IMPL(__imp__sub_83103488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23048
	ctx.r4.s64 = ctx.r11.s64 + 23048;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2052
	ctx.r3.s64 = ctx.r11.s64 + 2052;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831034A8"))) PPC_WEAK_FUNC(sub_831034A8);
PPC_FUNC_IMPL(__imp__sub_831034A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23068
	ctx.r4.s64 = ctx.r11.s64 + 23068;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1036
	ctx.r3.s64 = ctx.r11.s64 + 1036;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831034C8"))) PPC_WEAK_FUNC(sub_831034C8);
PPC_FUNC_IMPL(__imp__sub_831034C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23096
	ctx.r4.s64 = ctx.r11.s64 + 23096;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2696
	ctx.r3.s64 = ctx.r11.s64 + 2696;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831034E8"))) PPC_WEAK_FUNC(sub_831034E8);
PPC_FUNC_IMPL(__imp__sub_831034E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23104
	ctx.r4.s64 = ctx.r11.s64 + 23104;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3244
	ctx.r3.s64 = ctx.r11.s64 + 3244;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103508"))) PPC_WEAK_FUNC(sub_83103508);
PPC_FUNC_IMPL(__imp__sub_83103508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23116
	ctx.r4.s64 = ctx.r11.s64 + 23116;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4996
	ctx.r3.s64 = ctx.r11.s64 + 4996;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103528"))) PPC_WEAK_FUNC(sub_83103528);
PPC_FUNC_IMPL(__imp__sub_83103528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23128
	ctx.r4.s64 = ctx.r11.s64 + 23128;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1160
	ctx.r3.s64 = ctx.r11.s64 + 1160;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103548"))) PPC_WEAK_FUNC(sub_83103548);
PPC_FUNC_IMPL(__imp__sub_83103548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23148
	ctx.r4.s64 = ctx.r11.s64 + 23148;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3364
	ctx.r3.s64 = ctx.r11.s64 + 3364;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103568"))) PPC_WEAK_FUNC(sub_83103568);
PPC_FUNC_IMPL(__imp__sub_83103568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23168
	ctx.r4.s64 = ctx.r11.s64 + 23168;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4260
	ctx.r3.s64 = ctx.r11.s64 + 4260;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103588"))) PPC_WEAK_FUNC(sub_83103588);
PPC_FUNC_IMPL(__imp__sub_83103588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23188
	ctx.r4.s64 = ctx.r11.s64 + 23188;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3100
	ctx.r3.s64 = ctx.r11.s64 + 3100;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831035A8"))) PPC_WEAK_FUNC(sub_831035A8);
PPC_FUNC_IMPL(__imp__sub_831035A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23208
	ctx.r4.s64 = ctx.r11.s64 + 23208;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1272
	ctx.r3.s64 = ctx.r11.s64 + 1272;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831035C8"))) PPC_WEAK_FUNC(sub_831035C8);
PPC_FUNC_IMPL(__imp__sub_831035C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23228
	ctx.r4.s64 = ctx.r11.s64 + 23228;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1884
	ctx.r3.s64 = ctx.r11.s64 + 1884;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831035E8"))) PPC_WEAK_FUNC(sub_831035E8);
PPC_FUNC_IMPL(__imp__sub_831035E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23244
	ctx.r4.s64 = ctx.r11.s64 + 23244;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1356
	ctx.r3.s64 = ctx.r11.s64 + 1356;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103608"))) PPC_WEAK_FUNC(sub_83103608);
PPC_FUNC_IMPL(__imp__sub_83103608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23272
	ctx.r4.s64 = ctx.r11.s64 + 23272;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4676
	ctx.r3.s64 = ctx.r11.s64 + 4676;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103628"))) PPC_WEAK_FUNC(sub_83103628);
PPC_FUNC_IMPL(__imp__sub_83103628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23292
	ctx.r4.s64 = ctx.r11.s64 + 23292;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1940
	ctx.r3.s64 = ctx.r11.s64 + 1940;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103648"))) PPC_WEAK_FUNC(sub_83103648);
PPC_FUNC_IMPL(__imp__sub_83103648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23320
	ctx.r4.s64 = ctx.r11.s64 + 23320;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2680
	ctx.r3.s64 = ctx.r11.s64 + 2680;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103668"))) PPC_WEAK_FUNC(sub_83103668);
PPC_FUNC_IMPL(__imp__sub_83103668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23360
	ctx.r4.s64 = ctx.r11.s64 + 23360;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3952
	ctx.r3.s64 = ctx.r11.s64 + 3952;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103688"))) PPC_WEAK_FUNC(sub_83103688);
PPC_FUNC_IMPL(__imp__sub_83103688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23400
	ctx.r4.s64 = ctx.r11.s64 + 23400;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1480
	ctx.r3.s64 = ctx.r11.s64 + 1480;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831036A8"))) PPC_WEAK_FUNC(sub_831036A8);
PPC_FUNC_IMPL(__imp__sub_831036A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23428
	ctx.r4.s64 = ctx.r11.s64 + 23428;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,872
	ctx.r3.s64 = ctx.r11.s64 + 872;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831036C8"))) PPC_WEAK_FUNC(sub_831036C8);
PPC_FUNC_IMPL(__imp__sub_831036C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23456
	ctx.r4.s64 = ctx.r11.s64 + 23456;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4080
	ctx.r3.s64 = ctx.r11.s64 + 4080;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831036E8"))) PPC_WEAK_FUNC(sub_831036E8);
PPC_FUNC_IMPL(__imp__sub_831036E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-10684
	ctx.r4.s64 = ctx.r11.s64 + -10684;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1576
	ctx.r3.s64 = ctx.r11.s64 + 1576;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103708"))) PPC_WEAK_FUNC(sub_83103708);
PPC_FUNC_IMPL(__imp__sub_83103708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23480
	ctx.r4.s64 = ctx.r11.s64 + 23480;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3672
	ctx.r3.s64 = ctx.r11.s64 + 3672;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103728"))) PPC_WEAK_FUNC(sub_83103728);
PPC_FUNC_IMPL(__imp__sub_83103728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23492
	ctx.r4.s64 = ctx.r11.s64 + 23492;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4736
	ctx.r3.s64 = ctx.r11.s64 + 4736;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103748"))) PPC_WEAK_FUNC(sub_83103748);
PPC_FUNC_IMPL(__imp__sub_83103748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23508
	ctx.r4.s64 = ctx.r11.s64 + 23508;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2212
	ctx.r3.s64 = ctx.r11.s64 + 2212;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103768"))) PPC_WEAK_FUNC(sub_83103768);
PPC_FUNC_IMPL(__imp__sub_83103768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23520
	ctx.r4.s64 = ctx.r11.s64 + 23520;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2536
	ctx.r3.s64 = ctx.r11.s64 + 2536;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103788"))) PPC_WEAK_FUNC(sub_83103788);
PPC_FUNC_IMPL(__imp__sub_83103788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23536
	ctx.r4.s64 = ctx.r11.s64 + 23536;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2044
	ctx.r3.s64 = ctx.r11.s64 + 2044;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831037A8"))) PPC_WEAK_FUNC(sub_831037A8);
PPC_FUNC_IMPL(__imp__sub_831037A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23560
	ctx.r4.s64 = ctx.r11.s64 + 23560;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,972
	ctx.r3.s64 = ctx.r11.s64 + 972;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831037C8"))) PPC_WEAK_FUNC(sub_831037C8);
PPC_FUNC_IMPL(__imp__sub_831037C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23572
	ctx.r4.s64 = ctx.r11.s64 + 23572;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1520
	ctx.r3.s64 = ctx.r11.s64 + 1520;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831037E8"))) PPC_WEAK_FUNC(sub_831037E8);
PPC_FUNC_IMPL(__imp__sub_831037E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23588
	ctx.r4.s64 = ctx.r11.s64 + 23588;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3756
	ctx.r3.s64 = ctx.r11.s64 + 3756;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103808"))) PPC_WEAK_FUNC(sub_83103808);
PPC_FUNC_IMPL(__imp__sub_83103808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23608
	ctx.r4.s64 = ctx.r11.s64 + 23608;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,324
	ctx.r3.s64 = ctx.r11.s64 + 324;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103828"))) PPC_WEAK_FUNC(sub_83103828);
PPC_FUNC_IMPL(__imp__sub_83103828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23624
	ctx.r4.s64 = ctx.r11.s64 + 23624;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3960
	ctx.r3.s64 = ctx.r11.s64 + 3960;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103848"))) PPC_WEAK_FUNC(sub_83103848);
PPC_FUNC_IMPL(__imp__sub_83103848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23640
	ctx.r4.s64 = ctx.r11.s64 + 23640;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2860
	ctx.r3.s64 = ctx.r11.s64 + 2860;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103868"))) PPC_WEAK_FUNC(sub_83103868);
PPC_FUNC_IMPL(__imp__sub_83103868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23664
	ctx.r4.s64 = ctx.r11.s64 + 23664;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3516
	ctx.r3.s64 = ctx.r11.s64 + 3516;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103888"))) PPC_WEAK_FUNC(sub_83103888);
PPC_FUNC_IMPL(__imp__sub_83103888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23684
	ctx.r4.s64 = ctx.r11.s64 + 23684;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1512
	ctx.r3.s64 = ctx.r11.s64 + 1512;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831038A8"))) PPC_WEAK_FUNC(sub_831038A8);
PPC_FUNC_IMPL(__imp__sub_831038A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23716
	ctx.r4.s64 = ctx.r11.s64 + 23716;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831038C8"))) PPC_WEAK_FUNC(sub_831038C8);
PPC_FUNC_IMPL(__imp__sub_831038C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23728
	ctx.r4.s64 = ctx.r11.s64 + 23728;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2672
	ctx.r3.s64 = ctx.r11.s64 + 2672;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831038E8"))) PPC_WEAK_FUNC(sub_831038E8);
PPC_FUNC_IMPL(__imp__sub_831038E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23744
	ctx.r4.s64 = ctx.r11.s64 + 23744;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2076
	ctx.r3.s64 = ctx.r11.s64 + 2076;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103908"))) PPC_WEAK_FUNC(sub_83103908);
PPC_FUNC_IMPL(__imp__sub_83103908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23772
	ctx.r4.s64 = ctx.r11.s64 + 23772;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3648
	ctx.r3.s64 = ctx.r11.s64 + 3648;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103928"))) PPC_WEAK_FUNC(sub_83103928);
PPC_FUNC_IMPL(__imp__sub_83103928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23784
	ctx.r4.s64 = ctx.r11.s64 + 23784;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3816
	ctx.r3.s64 = ctx.r11.s64 + 3816;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103948"))) PPC_WEAK_FUNC(sub_83103948);
PPC_FUNC_IMPL(__imp__sub_83103948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23800
	ctx.r4.s64 = ctx.r11.s64 + 23800;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,888
	ctx.r3.s64 = ctx.r11.s64 + 888;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103968"))) PPC_WEAK_FUNC(sub_83103968);
PPC_FUNC_IMPL(__imp__sub_83103968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23816
	ctx.r4.s64 = ctx.r11.s64 + 23816;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4964
	ctx.r3.s64 = ctx.r11.s64 + 4964;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103988"))) PPC_WEAK_FUNC(sub_83103988);
PPC_FUNC_IMPL(__imp__sub_83103988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23844
	ctx.r4.s64 = ctx.r11.s64 + 23844;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2848
	ctx.r3.s64 = ctx.r11.s64 + 2848;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831039A8"))) PPC_WEAK_FUNC(sub_831039A8);
PPC_FUNC_IMPL(__imp__sub_831039A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23860
	ctx.r4.s64 = ctx.r11.s64 + 23860;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1848
	ctx.r3.s64 = ctx.r11.s64 + 1848;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831039C8"))) PPC_WEAK_FUNC(sub_831039C8);
PPC_FUNC_IMPL(__imp__sub_831039C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23876
	ctx.r4.s64 = ctx.r11.s64 + 23876;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2504
	ctx.r3.s64 = ctx.r11.s64 + 2504;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831039E8"))) PPC_WEAK_FUNC(sub_831039E8);
PPC_FUNC_IMPL(__imp__sub_831039E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23896
	ctx.r4.s64 = ctx.r11.s64 + 23896;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2628
	ctx.r3.s64 = ctx.r11.s64 + 2628;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103A08"))) PPC_WEAK_FUNC(sub_83103A08);
PPC_FUNC_IMPL(__imp__sub_83103A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23904
	ctx.r4.s64 = ctx.r11.s64 + 23904;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2772
	ctx.r3.s64 = ctx.r11.s64 + 2772;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103A28"))) PPC_WEAK_FUNC(sub_83103A28);
PPC_FUNC_IMPL(__imp__sub_83103A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23928
	ctx.r4.s64 = ctx.r11.s64 + 23928;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,296
	ctx.r3.s64 = ctx.r11.s64 + 296;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103A48"))) PPC_WEAK_FUNC(sub_83103A48);
PPC_FUNC_IMPL(__imp__sub_83103A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23960
	ctx.r4.s64 = ctx.r11.s64 + 23960;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4948
	ctx.r3.s64 = ctx.r11.s64 + 4948;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103A68"))) PPC_WEAK_FUNC(sub_83103A68);
PPC_FUNC_IMPL(__imp__sub_83103A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23980
	ctx.r4.s64 = ctx.r11.s64 + 23980;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1624
	ctx.r3.s64 = ctx.r11.s64 + 1624;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103A88"))) PPC_WEAK_FUNC(sub_83103A88);
PPC_FUNC_IMPL(__imp__sub_83103A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24008
	ctx.r4.s64 = ctx.r11.s64 + 24008;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3252
	ctx.r3.s64 = ctx.r11.s64 + 3252;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103AA8"))) PPC_WEAK_FUNC(sub_83103AA8);
PPC_FUNC_IMPL(__imp__sub_83103AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24032
	ctx.r4.s64 = ctx.r11.s64 + 24032;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1392
	ctx.r3.s64 = ctx.r11.s64 + 1392;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103AC8"))) PPC_WEAK_FUNC(sub_83103AC8);
PPC_FUNC_IMPL(__imp__sub_83103AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24056
	ctx.r4.s64 = ctx.r11.s64 + 24056;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4460
	ctx.r3.s64 = ctx.r11.s64 + 4460;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103AE8"))) PPC_WEAK_FUNC(sub_83103AE8);
PPC_FUNC_IMPL(__imp__sub_83103AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24080
	ctx.r4.s64 = ctx.r11.s64 + 24080;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4292
	ctx.r3.s64 = ctx.r11.s64 + 4292;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103B08"))) PPC_WEAK_FUNC(sub_83103B08);
PPC_FUNC_IMPL(__imp__sub_83103B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,23020
	ctx.r4.s64 = ctx.r11.s64 + 23020;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3632
	ctx.r3.s64 = ctx.r11.s64 + 3632;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103B28"))) PPC_WEAK_FUNC(sub_83103B28);
PPC_FUNC_IMPL(__imp__sub_83103B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24092
	ctx.r4.s64 = ctx.r11.s64 + 24092;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1060
	ctx.r3.s64 = ctx.r11.s64 + 1060;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103B48"))) PPC_WEAK_FUNC(sub_83103B48);
PPC_FUNC_IMPL(__imp__sub_83103B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24120
	ctx.r4.s64 = ctx.r11.s64 + 24120;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4340
	ctx.r3.s64 = ctx.r11.s64 + 4340;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103B68"))) PPC_WEAK_FUNC(sub_83103B68);
PPC_FUNC_IMPL(__imp__sub_83103B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24140
	ctx.r4.s64 = ctx.r11.s64 + 24140;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4200
	ctx.r3.s64 = ctx.r11.s64 + 4200;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103B88"))) PPC_WEAK_FUNC(sub_83103B88);
PPC_FUNC_IMPL(__imp__sub_83103B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24156
	ctx.r4.s64 = ctx.r11.s64 + 24156;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2608
	ctx.r3.s64 = ctx.r11.s64 + 2608;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103BA8"))) PPC_WEAK_FUNC(sub_83103BA8);
PPC_FUNC_IMPL(__imp__sub_83103BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24164
	ctx.r4.s64 = ctx.r11.s64 + 24164;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1544
	ctx.r3.s64 = ctx.r11.s64 + 1544;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103BC8"))) PPC_WEAK_FUNC(sub_83103BC8);
PPC_FUNC_IMPL(__imp__sub_83103BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24172
	ctx.r4.s64 = ctx.r11.s64 + 24172;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2384
	ctx.r3.s64 = ctx.r11.s64 + 2384;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103BE8"))) PPC_WEAK_FUNC(sub_83103BE8);
PPC_FUNC_IMPL(__imp__sub_83103BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,21652
	ctx.r4.s64 = ctx.r11.s64 + 21652;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4056
	ctx.r3.s64 = ctx.r11.s64 + 4056;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103C08"))) PPC_WEAK_FUNC(sub_83103C08);
PPC_FUNC_IMPL(__imp__sub_83103C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24180
	ctx.r4.s64 = ctx.r11.s64 + 24180;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1744
	ctx.r3.s64 = ctx.r11.s64 + 1744;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103C28"))) PPC_WEAK_FUNC(sub_83103C28);
PPC_FUNC_IMPL(__imp__sub_83103C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24192
	ctx.r4.s64 = ctx.r11.s64 + 24192;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4436
	ctx.r3.s64 = ctx.r11.s64 + 4436;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103C48"))) PPC_WEAK_FUNC(sub_83103C48);
PPC_FUNC_IMPL(__imp__sub_83103C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24208
	ctx.r4.s64 = ctx.r11.s64 + 24208;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4500
	ctx.r3.s64 = ctx.r11.s64 + 4500;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103C68"))) PPC_WEAK_FUNC(sub_83103C68);
PPC_FUNC_IMPL(__imp__sub_83103C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17220
	ctx.r4.s64 = ctx.r11.s64 + -17220;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3944
	ctx.r3.s64 = ctx.r11.s64 + 3944;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103C88"))) PPC_WEAK_FUNC(sub_83103C88);
PPC_FUNC_IMPL(__imp__sub_83103C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24216
	ctx.r4.s64 = ctx.r11.s64 + 24216;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2808
	ctx.r3.s64 = ctx.r11.s64 + 2808;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103CA8"))) PPC_WEAK_FUNC(sub_83103CA8);
PPC_FUNC_IMPL(__imp__sub_83103CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24224
	ctx.r4.s64 = ctx.r11.s64 + 24224;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3376
	ctx.r3.s64 = ctx.r11.s64 + 3376;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103CC8"))) PPC_WEAK_FUNC(sub_83103CC8);
PPC_FUNC_IMPL(__imp__sub_83103CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24236
	ctx.r4.s64 = ctx.r11.s64 + 24236;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4780
	ctx.r3.s64 = ctx.r11.s64 + 4780;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103CE8"))) PPC_WEAK_FUNC(sub_83103CE8);
PPC_FUNC_IMPL(__imp__sub_83103CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24252
	ctx.r4.s64 = ctx.r11.s64 + 24252;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,640
	ctx.r3.s64 = ctx.r11.s64 + 640;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103D08"))) PPC_WEAK_FUNC(sub_83103D08);
PPC_FUNC_IMPL(__imp__sub_83103D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24268
	ctx.r4.s64 = ctx.r11.s64 + 24268;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1244
	ctx.r3.s64 = ctx.r11.s64 + 1244;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103D28"))) PPC_WEAK_FUNC(sub_83103D28);
PPC_FUNC_IMPL(__imp__sub_83103D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24284
	ctx.r4.s64 = ctx.r11.s64 + 24284;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1444
	ctx.r3.s64 = ctx.r11.s64 + 1444;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103D48"))) PPC_WEAK_FUNC(sub_83103D48);
PPC_FUNC_IMPL(__imp__sub_83103D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24304
	ctx.r4.s64 = ctx.r11.s64 + 24304;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,60
	ctx.r3.s64 = ctx.r11.s64 + 60;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103D68"))) PPC_WEAK_FUNC(sub_83103D68);
PPC_FUNC_IMPL(__imp__sub_83103D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24312
	ctx.r4.s64 = ctx.r11.s64 + 24312;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4208
	ctx.r3.s64 = ctx.r11.s64 + 4208;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103D88"))) PPC_WEAK_FUNC(sub_83103D88);
PPC_FUNC_IMPL(__imp__sub_83103D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24324
	ctx.r4.s64 = ctx.r11.s64 + 24324;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1648
	ctx.r3.s64 = ctx.r11.s64 + 1648;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103DA8"))) PPC_WEAK_FUNC(sub_83103DA8);
PPC_FUNC_IMPL(__imp__sub_83103DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24336
	ctx.r4.s64 = ctx.r11.s64 + 24336;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4360
	ctx.r3.s64 = ctx.r11.s64 + 4360;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103DC8"))) PPC_WEAK_FUNC(sub_83103DC8);
PPC_FUNC_IMPL(__imp__sub_83103DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24348
	ctx.r4.s64 = ctx.r11.s64 + 24348;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103DE8"))) PPC_WEAK_FUNC(sub_83103DE8);
PPC_FUNC_IMPL(__imp__sub_83103DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24364
	ctx.r4.s64 = ctx.r11.s64 + 24364;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2516
	ctx.r3.s64 = ctx.r11.s64 + 2516;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103E08"))) PPC_WEAK_FUNC(sub_83103E08);
PPC_FUNC_IMPL(__imp__sub_83103E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24388
	ctx.r4.s64 = ctx.r11.s64 + 24388;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103E28"))) PPC_WEAK_FUNC(sub_83103E28);
PPC_FUNC_IMPL(__imp__sub_83103E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24412
	ctx.r4.s64 = ctx.r11.s64 + 24412;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1876
	ctx.r3.s64 = ctx.r11.s64 + 1876;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103E48"))) PPC_WEAK_FUNC(sub_83103E48);
PPC_FUNC_IMPL(__imp__sub_83103E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24428
	ctx.r4.s64 = ctx.r11.s64 + 24428;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1912
	ctx.r3.s64 = ctx.r11.s64 + 1912;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103E68"))) PPC_WEAK_FUNC(sub_83103E68);
PPC_FUNC_IMPL(__imp__sub_83103E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24444
	ctx.r4.s64 = ctx.r11.s64 + 24444;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3356
	ctx.r3.s64 = ctx.r11.s64 + 3356;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103E88"))) PPC_WEAK_FUNC(sub_83103E88);
PPC_FUNC_IMPL(__imp__sub_83103E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24464
	ctx.r4.s64 = ctx.r11.s64 + 24464;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3736
	ctx.r3.s64 = ctx.r11.s64 + 3736;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103EA8"))) PPC_WEAK_FUNC(sub_83103EA8);
PPC_FUNC_IMPL(__imp__sub_83103EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24484
	ctx.r4.s64 = ctx.r11.s64 + 24484;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,364
	ctx.r3.s64 = ctx.r11.s64 + 364;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103EC8"))) PPC_WEAK_FUNC(sub_83103EC8);
PPC_FUNC_IMPL(__imp__sub_83103EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24504
	ctx.r4.s64 = ctx.r11.s64 + 24504;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2660
	ctx.r3.s64 = ctx.r11.s64 + 2660;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103EE8"))) PPC_WEAK_FUNC(sub_83103EE8);
PPC_FUNC_IMPL(__imp__sub_83103EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24532
	ctx.r4.s64 = ctx.r11.s64 + 24532;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1868
	ctx.r3.s64 = ctx.r11.s64 + 1868;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103F08"))) PPC_WEAK_FUNC(sub_83103F08);
PPC_FUNC_IMPL(__imp__sub_83103F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24556
	ctx.r4.s64 = ctx.r11.s64 + 24556;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4640
	ctx.r3.s64 = ctx.r11.s64 + 4640;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103F28"))) PPC_WEAK_FUNC(sub_83103F28);
PPC_FUNC_IMPL(__imp__sub_83103F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24576
	ctx.r4.s64 = ctx.r11.s64 + 24576;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1472
	ctx.r3.s64 = ctx.r11.s64 + 1472;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103F48"))) PPC_WEAK_FUNC(sub_83103F48);
PPC_FUNC_IMPL(__imp__sub_83103F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24600
	ctx.r4.s64 = ctx.r11.s64 + 24600;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-60
	ctx.r3.s64 = ctx.r11.s64 + -60;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103F68"))) PPC_WEAK_FUNC(sub_83103F68);
PPC_FUNC_IMPL(__imp__sub_83103F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24628
	ctx.r4.s64 = ctx.r11.s64 + 24628;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3988
	ctx.r3.s64 = ctx.r11.s64 + 3988;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103F88"))) PPC_WEAK_FUNC(sub_83103F88);
PPC_FUNC_IMPL(__imp__sub_83103F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24656
	ctx.r4.s64 = ctx.r11.s64 + 24656;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3852
	ctx.r3.s64 = ctx.r11.s64 + 3852;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103FA8"))) PPC_WEAK_FUNC(sub_83103FA8);
PPC_FUNC_IMPL(__imp__sub_83103FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24672
	ctx.r4.s64 = ctx.r11.s64 + 24672;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2580
	ctx.r3.s64 = ctx.r11.s64 + 2580;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103FC8"))) PPC_WEAK_FUNC(sub_83103FC8);
PPC_FUNC_IMPL(__imp__sub_83103FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24684
	ctx.r4.s64 = ctx.r11.s64 + 24684;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1100
	ctx.r3.s64 = ctx.r11.s64 + 1100;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83103FE8"))) PPC_WEAK_FUNC(sub_83103FE8);
PPC_FUNC_IMPL(__imp__sub_83103FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24704
	ctx.r4.s64 = ctx.r11.s64 + 24704;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4468
	ctx.r3.s64 = ctx.r11.s64 + 4468;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104008"))) PPC_WEAK_FUNC(sub_83104008);
PPC_FUNC_IMPL(__imp__sub_83104008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24720
	ctx.r4.s64 = ctx.r11.s64 + 24720;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1804
	ctx.r3.s64 = ctx.r11.s64 + 1804;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104028"))) PPC_WEAK_FUNC(sub_83104028);
PPC_FUNC_IMPL(__imp__sub_83104028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24744
	ctx.r4.s64 = ctx.r11.s64 + 24744;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4540
	ctx.r3.s64 = ctx.r11.s64 + 4540;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104048"))) PPC_WEAK_FUNC(sub_83104048);
PPC_FUNC_IMPL(__imp__sub_83104048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24768
	ctx.r4.s64 = ctx.r11.s64 + 24768;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4044
	ctx.r3.s64 = ctx.r11.s64 + 4044;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104068"))) PPC_WEAK_FUNC(sub_83104068);
PPC_FUNC_IMPL(__imp__sub_83104068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24792
	ctx.r4.s64 = ctx.r11.s64 + 24792;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2992
	ctx.r3.s64 = ctx.r11.s64 + 2992;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104088"))) PPC_WEAK_FUNC(sub_83104088);
PPC_FUNC_IMPL(__imp__sub_83104088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24816
	ctx.r4.s64 = ctx.r11.s64 + 24816;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1108
	ctx.r3.s64 = ctx.r11.s64 + 1108;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831040A8"))) PPC_WEAK_FUNC(sub_831040A8);
PPC_FUNC_IMPL(__imp__sub_831040A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24840
	ctx.r4.s64 = ctx.r11.s64 + 24840;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4188
	ctx.r3.s64 = ctx.r11.s64 + 4188;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831040C8"))) PPC_WEAK_FUNC(sub_831040C8);
PPC_FUNC_IMPL(__imp__sub_831040C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24868
	ctx.r4.s64 = ctx.r11.s64 + 24868;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,332
	ctx.r3.s64 = ctx.r11.s64 + 332;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831040E8"))) PPC_WEAK_FUNC(sub_831040E8);
PPC_FUNC_IMPL(__imp__sub_831040E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24888
	ctx.r4.s64 = ctx.r11.s64 + 24888;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,980
	ctx.r3.s64 = ctx.r11.s64 + 980;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104108"))) PPC_WEAK_FUNC(sub_83104108);
PPC_FUNC_IMPL(__imp__sub_83104108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24908
	ctx.r4.s64 = ctx.r11.s64 + 24908;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4548
	ctx.r3.s64 = ctx.r11.s64 + 4548;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104128"))) PPC_WEAK_FUNC(sub_83104128);
PPC_FUNC_IMPL(__imp__sub_83104128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24932
	ctx.r4.s64 = ctx.r11.s64 + 24932;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104148"))) PPC_WEAK_FUNC(sub_83104148);
PPC_FUNC_IMPL(__imp__sub_83104148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24956
	ctx.r4.s64 = ctx.r11.s64 + 24956;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,260
	ctx.r3.s64 = ctx.r11.s64 + 260;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104168"))) PPC_WEAK_FUNC(sub_83104168);
PPC_FUNC_IMPL(__imp__sub_83104168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,24988
	ctx.r4.s64 = ctx.r11.s64 + 24988;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,396
	ctx.r3.s64 = ctx.r11.s64 + 396;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104188"))) PPC_WEAK_FUNC(sub_83104188);
PPC_FUNC_IMPL(__imp__sub_83104188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25004
	ctx.r4.s64 = ctx.r11.s64 + 25004;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2236
	ctx.r3.s64 = ctx.r11.s64 + 2236;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831041A8"))) PPC_WEAK_FUNC(sub_831041A8);
PPC_FUNC_IMPL(__imp__sub_831041A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25024
	ctx.r4.s64 = ctx.r11.s64 + 25024;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3524
	ctx.r3.s64 = ctx.r11.s64 + 3524;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831041C8"))) PPC_WEAK_FUNC(sub_831041C8);
PPC_FUNC_IMPL(__imp__sub_831041C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25036
	ctx.r4.s64 = ctx.r11.s64 + 25036;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-144
	ctx.r3.s64 = ctx.r11.s64 + -144;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831041E8"))) PPC_WEAK_FUNC(sub_831041E8);
PPC_FUNC_IMPL(__imp__sub_831041E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25064
	ctx.r4.s64 = ctx.r11.s64 + 25064;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2144
	ctx.r3.s64 = ctx.r11.s64 + 2144;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104208"))) PPC_WEAK_FUNC(sub_83104208);
PPC_FUNC_IMPL(__imp__sub_83104208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25080
	ctx.r4.s64 = ctx.r11.s64 + 25080;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3400
	ctx.r3.s64 = ctx.r11.s64 + 3400;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104228"))) PPC_WEAK_FUNC(sub_83104228);
PPC_FUNC_IMPL(__imp__sub_83104228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25096
	ctx.r4.s64 = ctx.r11.s64 + 25096;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1460
	ctx.r3.s64 = ctx.r11.s64 + 1460;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104248"))) PPC_WEAK_FUNC(sub_83104248);
PPC_FUNC_IMPL(__imp__sub_83104248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25112
	ctx.r4.s64 = ctx.r11.s64 + 25112;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,492
	ctx.r3.s64 = ctx.r11.s64 + 492;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104268"))) PPC_WEAK_FUNC(sub_83104268);
PPC_FUNC_IMPL(__imp__sub_83104268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25128
	ctx.r4.s64 = ctx.r11.s64 + 25128;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3120
	ctx.r3.s64 = ctx.r11.s64 + 3120;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104288"))) PPC_WEAK_FUNC(sub_83104288);
PPC_FUNC_IMPL(__imp__sub_83104288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25144
	ctx.r4.s64 = ctx.r11.s64 + 25144;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3192
	ctx.r3.s64 = ctx.r11.s64 + 3192;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831042A8"))) PPC_WEAK_FUNC(sub_831042A8);
PPC_FUNC_IMPL(__imp__sub_831042A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25164
	ctx.r4.s64 = ctx.r11.s64 + 25164;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2712
	ctx.r3.s64 = ctx.r11.s64 + 2712;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831042C8"))) PPC_WEAK_FUNC(sub_831042C8);
PPC_FUNC_IMPL(__imp__sub_831042C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25192
	ctx.r4.s64 = ctx.r11.s64 + 25192;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1656
	ctx.r3.s64 = ctx.r11.s64 + 1656;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831042E8"))) PPC_WEAK_FUNC(sub_831042E8);
PPC_FUNC_IMPL(__imp__sub_831042E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25220
	ctx.r4.s64 = ctx.r11.s64 + 25220;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,5108
	ctx.r3.s64 = ctx.r11.s64 + 5108;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104308"))) PPC_WEAK_FUNC(sub_83104308);
PPC_FUNC_IMPL(__imp__sub_83104308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25232
	ctx.r4.s64 = ctx.r11.s64 + 25232;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104328"))) PPC_WEAK_FUNC(sub_83104328);
PPC_FUNC_IMPL(__imp__sub_83104328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25244
	ctx.r4.s64 = ctx.r11.s64 + 25244;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2616
	ctx.r3.s64 = ctx.r11.s64 + 2616;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104348"))) PPC_WEAK_FUNC(sub_83104348);
PPC_FUNC_IMPL(__imp__sub_83104348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25256
	ctx.r4.s64 = ctx.r11.s64 + 25256;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3224
	ctx.r3.s64 = ctx.r11.s64 + 3224;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104368"))) PPC_WEAK_FUNC(sub_83104368);
PPC_FUNC_IMPL(__imp__sub_83104368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25264
	ctx.r4.s64 = ctx.r11.s64 + 25264;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1992
	ctx.r3.s64 = ctx.r11.s64 + 1992;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104388"))) PPC_WEAK_FUNC(sub_83104388);
PPC_FUNC_IMPL(__imp__sub_83104388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25276
	ctx.r4.s64 = ctx.r11.s64 + 25276;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2320
	ctx.r3.s64 = ctx.r11.s64 + 2320;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831043A8"))) PPC_WEAK_FUNC(sub_831043A8);
PPC_FUNC_IMPL(__imp__sub_831043A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25288
	ctx.r4.s64 = ctx.r11.s64 + 25288;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,116
	ctx.r3.s64 = ctx.r11.s64 + 116;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831043C8"))) PPC_WEAK_FUNC(sub_831043C8);
PPC_FUNC_IMPL(__imp__sub_831043C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25300
	ctx.r4.s64 = ctx.r11.s64 + 25300;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4608
	ctx.r3.s64 = ctx.r11.s64 + 4608;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831043E8"))) PPC_WEAK_FUNC(sub_831043E8);
PPC_FUNC_IMPL(__imp__sub_831043E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25324
	ctx.r4.s64 = ctx.r11.s64 + 25324;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1776
	ctx.r3.s64 = ctx.r11.s64 + 1776;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104408"))) PPC_WEAK_FUNC(sub_83104408);
PPC_FUNC_IMPL(__imp__sub_83104408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25348
	ctx.r4.s64 = ctx.r11.s64 + 25348;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4284
	ctx.r3.s64 = ctx.r11.s64 + 4284;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104428"))) PPC_WEAK_FUNC(sub_83104428);
PPC_FUNC_IMPL(__imp__sub_83104428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25364
	ctx.r4.s64 = ctx.r11.s64 + 25364;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1028
	ctx.r3.s64 = ctx.r11.s64 + 1028;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104448"))) PPC_WEAK_FUNC(sub_83104448);
PPC_FUNC_IMPL(__imp__sub_83104448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25388
	ctx.r4.s64 = ctx.r11.s64 + 25388;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1556
	ctx.r3.s64 = ctx.r11.s64 + 1556;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104468"))) PPC_WEAK_FUNC(sub_83104468);
PPC_FUNC_IMPL(__imp__sub_83104468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25404
	ctx.r4.s64 = ctx.r11.s64 + 25404;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,428
	ctx.r3.s64 = ctx.r11.s64 + 428;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104488"))) PPC_WEAK_FUNC(sub_83104488);
PPC_FUNC_IMPL(__imp__sub_83104488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25432
	ctx.r4.s64 = ctx.r11.s64 + 25432;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3840
	ctx.r3.s64 = ctx.r11.s64 + 3840;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831044A8"))) PPC_WEAK_FUNC(sub_831044A8);
PPC_FUNC_IMPL(__imp__sub_831044A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25460
	ctx.r4.s64 = ctx.r11.s64 + 25460;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1148
	ctx.r3.s64 = ctx.r11.s64 + 1148;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831044C8"))) PPC_WEAK_FUNC(sub_831044C8);
PPC_FUNC_IMPL(__imp__sub_831044C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25476
	ctx.r4.s64 = ctx.r11.s64 + 25476;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4556
	ctx.r3.s64 = ctx.r11.s64 + 4556;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831044E8"))) PPC_WEAK_FUNC(sub_831044E8);
PPC_FUNC_IMPL(__imp__sub_831044E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25492
	ctx.r4.s64 = ctx.r11.s64 + 25492;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2016
	ctx.r3.s64 = ctx.r11.s64 + 2016;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104508"))) PPC_WEAK_FUNC(sub_83104508);
PPC_FUNC_IMPL(__imp__sub_83104508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25500
	ctx.r4.s64 = ctx.r11.s64 + 25500;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2196
	ctx.r3.s64 = ctx.r11.s64 + 2196;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104528"))) PPC_WEAK_FUNC(sub_83104528);
PPC_FUNC_IMPL(__imp__sub_83104528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25512
	ctx.r4.s64 = ctx.r11.s64 + 25512;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2156
	ctx.r3.s64 = ctx.r11.s64 + 2156;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104548"))) PPC_WEAK_FUNC(sub_83104548);
PPC_FUNC_IMPL(__imp__sub_83104548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25524
	ctx.r4.s64 = ctx.r11.s64 + 25524;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3408
	ctx.r3.s64 = ctx.r11.s64 + 3408;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104568"))) PPC_WEAK_FUNC(sub_83104568);
PPC_FUNC_IMPL(__imp__sub_83104568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-11248
	ctx.r4.s64 = ctx.r11.s64 + -11248;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4716
	ctx.r3.s64 = ctx.r11.s64 + 4716;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104588"))) PPC_WEAK_FUNC(sub_83104588);
PPC_FUNC_IMPL(__imp__sub_83104588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25536
	ctx.r4.s64 = ctx.r11.s64 + 25536;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1184
	ctx.r3.s64 = ctx.r11.s64 + 1184;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831045A8"))) PPC_WEAK_FUNC(sub_831045A8);
PPC_FUNC_IMPL(__imp__sub_831045A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25556
	ctx.r4.s64 = ctx.r11.s64 + 25556;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,3272
	ctx.r3.s64 = ctx.r11.s64 + 3272;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831045C8"))) PPC_WEAK_FUNC(sub_831045C8);
PPC_FUNC_IMPL(__imp__sub_831045C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25568
	ctx.r4.s64 = ctx.r11.s64 + 25568;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,2400
	ctx.r3.s64 = ctx.r11.s64 + 2400;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831045E8"))) PPC_WEAK_FUNC(sub_831045E8);
PPC_FUNC_IMPL(__imp__sub_831045E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25580
	ctx.r4.s64 = ctx.r11.s64 + 25580;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1784
	ctx.r3.s64 = ctx.r11.s64 + 1784;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104608"))) PPC_WEAK_FUNC(sub_83104608);
PPC_FUNC_IMPL(__imp__sub_83104608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25600
	ctx.r4.s64 = ctx.r11.s64 + 25600;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104628"))) PPC_WEAK_FUNC(sub_83104628);
PPC_FUNC_IMPL(__imp__sub_83104628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25616
	ctx.r4.s64 = ctx.r11.s64 + 25616;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1672
	ctx.r3.s64 = ctx.r11.s64 + 1672;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104648"))) PPC_WEAK_FUNC(sub_83104648);
PPC_FUNC_IMPL(__imp__sub_83104648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,25628
	ctx.r4.s64 = ctx.r11.s64 + 25628;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,340
	ctx.r3.s64 = ctx.r11.s64 + 340;
	// b 0x8243b750
	sub_8243B750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83104668"))) PPC_WEAK_FUNC(sub_83104668);
PPC_FUNC_IMPL(__imp__sub_83104668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r11,-24624
	ctx.r3.s64 = ctx.r11.s64 + -24624;
	// bl 0x82e04108
	ctx.lr = 0x83104684;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20584
	ctx.r3.s64 = ctx.r11.s64 + -20584;
	// bl 0x82e29708
	ctx.lr = 0x83104690;
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

__attribute__((alias("__imp__sub_831046A0"))) PPC_WEAK_FUNC(sub_831046A0);
PPC_FUNC_IMPL(__imp__sub_831046A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r11,-24620
	ctx.r3.s64 = ctx.r11.s64 + -24620;
	// bl 0x82e04108
	ctx.lr = 0x831046BC;
	sub_82E04108(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r3,r11,-20504
	ctx.r3.s64 = ctx.r11.s64 + -20504;
	// bl 0x82e29708
	ctx.lr = 0x831046C8;
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

__attribute__((alias("__imp__sub_831046D8"))) PPC_WEAK_FUNC(sub_831046D8);
PPC_FUNC_IMPL(__imp__sub_831046D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,3113
	ctx.r3.s64 = 3113;
	// addi r4,r11,29604
	ctx.r4.s64 = ctx.r11.s64 + 29604;
	// bl 0x82429b48
	ctx.lr = 0x831046F4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4874(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4874, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104710"))) PPC_WEAK_FUNC(sub_83104710);
PPC_FUNC_IMPL(__imp__sub_83104710) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,1584
	ctx.r11.s64 = ctx.r11.s64 + 1584;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104740"))) PPC_WEAK_FUNC(sub_83104740);
PPC_FUNC_IMPL(__imp__sub_83104740) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,832
	ctx.r11.s64 = ctx.r11.s64 + 832;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104768"))) PPC_WEAK_FUNC(sub_83104768);
PPC_FUNC_IMPL(__imp__sub_83104768) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,2784
	ctx.r11.s64 = ctx.r11.s64 + 2784;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104790"))) PPC_WEAK_FUNC(sub_83104790);
PPC_FUNC_IMPL(__imp__sub_83104790) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,3872
	ctx.r11.s64 = ctx.r11.s64 + 3872;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831047B8"))) PPC_WEAK_FUNC(sub_831047B8);
PPC_FUNC_IMPL(__imp__sub_831047B8) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,736
	ctx.r11.s64 = ctx.r11.s64 + 736;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831047E0"))) PPC_WEAK_FUNC(sub_831047E0);
PPC_FUNC_IMPL(__imp__sub_831047E0) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,1920
	ctx.r11.s64 = ctx.r11.s64 + 1920;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104808"))) PPC_WEAK_FUNC(sub_83104808);
PPC_FUNC_IMPL(__imp__sub_83104808) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83104838"))) PPC_WEAK_FUNC(sub_83104838);
PPC_FUNC_IMPL(__imp__sub_83104838) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,768
	ctx.r11.s64 = ctx.r11.s64 + 768;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104870"))) PPC_WEAK_FUNC(sub_83104870);
PPC_FUNC_IMPL(__imp__sub_83104870) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,2368
	ctx.r11.s64 = ctx.r11.s64 + 2368;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831048A8"))) PPC_WEAK_FUNC(sub_831048A8);
PPC_FUNC_IMPL(__imp__sub_831048A8) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,784
	ctx.r11.s64 = ctx.r11.s64 + 784;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831048E0"))) PPC_WEAK_FUNC(sub_831048E0);
PPC_FUNC_IMPL(__imp__sub_831048E0) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,720
	ctx.r11.s64 = ctx.r11.s64 + 720;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104908"))) PPC_WEAK_FUNC(sub_83104908);
PPC_FUNC_IMPL(__imp__sub_83104908) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,800
	ctx.r11.s64 = ctx.r11.s64 + 800;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104930"))) PPC_WEAK_FUNC(sub_83104930);
PPC_FUNC_IMPL(__imp__sub_83104930) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,2000
	ctx.r11.s64 = ctx.r11.s64 + 2000;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104958"))) PPC_WEAK_FUNC(sub_83104958);
PPC_FUNC_IMPL(__imp__sub_83104958) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104980"))) PPC_WEAK_FUNC(sub_83104980);
PPC_FUNC_IMPL(__imp__sub_83104980) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,1952
	ctx.r11.s64 = ctx.r11.s64 + 1952;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831049A8"))) PPC_WEAK_FUNC(sub_831049A8);
PPC_FUNC_IMPL(__imp__sub_831049A8) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,816
	ctx.r11.s64 = ctx.r11.s64 + 816;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831049D0"))) PPC_WEAK_FUNC(sub_831049D0);
PPC_FUNC_IMPL(__imp__sub_831049D0) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,848
	ctx.r11.s64 = ctx.r11.s64 + 848;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831049F8"))) PPC_WEAK_FUNC(sub_831049F8);
PPC_FUNC_IMPL(__imp__sub_831049F8) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,752
	ctx.r11.s64 = ctx.r11.s64 + 752;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104A20"))) PPC_WEAK_FUNC(sub_83104A20);
PPC_FUNC_IMPL(__imp__sub_83104A20) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,3920
	ctx.r11.s64 = ctx.r11.s64 + 3920;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104A48"))) PPC_WEAK_FUNC(sub_83104A48);
PPC_FUNC_IMPL(__imp__sub_83104A48) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,3456
	ctx.r11.s64 = ctx.r11.s64 + 3456;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104A70"))) PPC_WEAK_FUNC(sub_83104A70);
PPC_FUNC_IMPL(__imp__sub_83104A70) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,672
	ctx.r11.s64 = ctx.r11.s64 + 672;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104A98"))) PPC_WEAK_FUNC(sub_83104A98);
PPC_FUNC_IMPL(__imp__sub_83104A98) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,688
	ctx.r11.s64 = ctx.r11.s64 + 688;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104AC0"))) PPC_WEAK_FUNC(sub_83104AC0);
PPC_FUNC_IMPL(__imp__sub_83104AC0) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,2096
	ctx.r11.s64 = ctx.r11.s64 + 2096;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104AE8"))) PPC_WEAK_FUNC(sub_83104AE8);
PPC_FUNC_IMPL(__imp__sub_83104AE8) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,1680
	ctx.r11.s64 = ctx.r11.s64 + 1680;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104B10"))) PPC_WEAK_FUNC(sub_83104B10);
PPC_FUNC_IMPL(__imp__sub_83104B10) {
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
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r11,r11,2336
	ctx.r11.s64 = ctx.r11.s64 + 2336;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104B38"))) PPC_WEAK_FUNC(sub_83104B38);
PPC_FUNC_IMPL(__imp__sub_83104B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29652
	ctx.r4.s64 = ctx.r11.s64 + 29652;
	// bl 0x82429b48
	ctx.lr = 0x83104B54;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1301(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1301, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104B70"))) PPC_WEAK_FUNC(sub_83104B70);
PPC_FUNC_IMPL(__imp__sub_83104B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29656
	ctx.r4.s64 = ctx.r11.s64 + 29656;
	// bl 0x82429b48
	ctx.lr = 0x83104B8C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2328(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2328, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104BA8"))) PPC_WEAK_FUNC(sub_83104BA8);
PPC_FUNC_IMPL(__imp__sub_83104BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29660
	ctx.r4.s64 = ctx.r11.s64 + 29660;
	// bl 0x82429b48
	ctx.lr = 0x83104BC4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1669(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1669, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104BE0"))) PPC_WEAK_FUNC(sub_83104BE0);
PPC_FUNC_IMPL(__imp__sub_83104BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29664
	ctx.r4.s64 = ctx.r11.s64 + 29664;
	// bl 0x82429b48
	ctx.lr = 0x83104BFC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4746(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4746, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104C18"))) PPC_WEAK_FUNC(sub_83104C18);
PPC_FUNC_IMPL(__imp__sub_83104C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29668
	ctx.r4.s64 = ctx.r11.s64 + 29668;
	// bl 0x82429b48
	ctx.lr = 0x83104C34;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83104C50"))) PPC_WEAK_FUNC(sub_83104C50);
PPC_FUNC_IMPL(__imp__sub_83104C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// bl 0x82429b48
	ctx.lr = 0x83104C6C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2908(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2908, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104C88"))) PPC_WEAK_FUNC(sub_83104C88);
PPC_FUNC_IMPL(__imp__sub_83104C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29676
	ctx.r4.s64 = ctx.r11.s64 + 29676;
	// bl 0x82429b48
	ctx.lr = 0x83104CA4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83104CC0"))) PPC_WEAK_FUNC(sub_83104CC0);
PPC_FUNC_IMPL(__imp__sub_83104CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29680
	ctx.r4.s64 = ctx.r11.s64 + 29680;
	// bl 0x82429b48
	ctx.lr = 0x83104CDC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4790(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4790, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104CF8"))) PPC_WEAK_FUNC(sub_83104CF8);
PPC_FUNC_IMPL(__imp__sub_83104CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29684
	ctx.r4.s64 = ctx.r11.s64 + 29684;
	// bl 0x82429b48
	ctx.lr = 0x83104D14;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83104D30"))) PPC_WEAK_FUNC(sub_83104D30);
PPC_FUNC_IMPL(__imp__sub_83104D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29688
	ctx.r4.s64 = ctx.r11.s64 + 29688;
	// bl 0x82429b48
	ctx.lr = 0x83104D4C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,2481(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2481, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104D68"))) PPC_WEAK_FUNC(sub_83104D68);
PPC_FUNC_IMPL(__imp__sub_83104D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29692
	ctx.r4.s64 = ctx.r11.s64 + 29692;
	// bl 0x82429b48
	ctx.lr = 0x83104D84;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
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

__attribute__((alias("__imp__sub_83104DA0"))) PPC_WEAK_FUNC(sub_83104DA0);
PPC_FUNC_IMPL(__imp__sub_83104DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29696
	ctx.r4.s64 = ctx.r11.s64 + 29696;
	// bl 0x82429b48
	ctx.lr = 0x83104DBC;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4945(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4945, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104DD8"))) PPC_WEAK_FUNC(sub_83104DD8);
PPC_FUNC_IMPL(__imp__sub_83104DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29700
	ctx.r4.s64 = ctx.r11.s64 + 29700;
	// bl 0x82429b48
	ctx.lr = 0x83104DF4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,944(r11)
	PPC_STORE_U8(ctx.r11.u32 + 944, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104E10"))) PPC_WEAK_FUNC(sub_83104E10);
PPC_FUNC_IMPL(__imp__sub_83104E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29704
	ctx.r4.s64 = ctx.r11.s64 + 29704;
	// bl 0x82429b48
	ctx.lr = 0x83104E2C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,4579(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4579, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104E48"))) PPC_WEAK_FUNC(sub_83104E48);
PPC_FUNC_IMPL(__imp__sub_83104E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29708
	ctx.r4.s64 = ctx.r11.s64 + 29708;
	// bl 0x82429b48
	ctx.lr = 0x83104E64;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1411(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1411, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104E80"))) PPC_WEAK_FUNC(sub_83104E80);
PPC_FUNC_IMPL(__imp__sub_83104E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29712
	ctx.r4.s64 = ctx.r11.s64 + 29712;
	// bl 0x82429b48
	ctx.lr = 0x83104E9C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104EB8"))) PPC_WEAK_FUNC(sub_83104EB8);
PPC_FUNC_IMPL(__imp__sub_83104EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29716
	ctx.r4.s64 = ctx.r11.s64 + 29716;
	// bl 0x82429b48
	ctx.lr = 0x83104ED4;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,1417(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1417, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83104EF0"))) PPC_WEAK_FUNC(sub_83104EF0);
PPC_FUNC_IMPL(__imp__sub_83104EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,29720
	ctx.r4.s64 = ctx.r11.s64 + 29720;
	// bl 0x82429b48
	ctx.lr = 0x83104F0C;
	sub_82429B48(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stb r3,104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 104, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

