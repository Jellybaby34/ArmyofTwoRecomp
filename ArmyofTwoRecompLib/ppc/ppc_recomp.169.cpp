#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BF3CD0"))) PPC_WEAK_FUNC(sub_82BF3CD0);
PPC_FUNC_IMPL(__imp__sub_82BF3CD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x82c15518
	sub_82C15518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF3CF0"))) PPC_WEAK_FUNC(sub_82BF3CF0);
PPC_FUNC_IMPL(__imp__sub_82BF3CF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// b 0x82c13850
	sub_82C13850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF3D08"))) PPC_WEAK_FUNC(sub_82BF3D08);
PPC_FUNC_IMPL(__imp__sub_82BF3D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF3D10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF3D28;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf3d7c
	if (ctx.cr6.eq) goto loc_82BF3D7C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,-9884
	ctx.r29.s64 = ctx.r11.s64 + -9884;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// addi r5,r29,-4
	ctx.r5.s64 = ctx.r29.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF3D50;
	sub_82C170A0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF3D64;
	sub_82C170A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf3b78
	ctx.lr = 0x82BF3D74;
	sub_82BF3B78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF3D7C;
	sub_82C16F48(ctx, base);
loc_82BF3D7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF3D88"))) PPC_WEAK_FUNC(sub_82BF3D88);
PPC_FUNC_IMPL(__imp__sub_82BF3D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF3D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF3DA8;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf3ee4
	if (ctx.cr6.eq) goto loc_82BF3EE4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,-9424
	ctx.r29.s64 = ctx.r11.s64 + -9424;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// addi r5,r29,-192
	ctx.r5.s64 = ctx.r29.s64 + -192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF3DD0;
	sub_82C170A0(ctx, base);
	// addi r5,r29,-188
	ctx.r5.s64 = ctx.r29.s64 + -188;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF3DE4;
	sub_82C170A0(ctx, base);
	// addi r5,r29,-172
	ctx.r5.s64 = ctx.r29.s64 + -172;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c17378
	ctx.lr = 0x82BF3DF8;
	sub_82C17378(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82bf3e24
	if (ctx.cr6.eq) goto loc_82BF3E24;
	// addi r5,r29,-152
	ctx.r5.s64 = ctx.r29.s64 + -152;
	// bl 0x82c164c8
	ctx.lr = 0x82BF3E18;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// b 0x82bf3e40
	goto loc_82BF3E40;
loc_82BF3E24:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r29,-128
	ctx.r5.s64 = ctx.r29.s64 + -128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c170a0
	ctx.lr = 0x82BF3E34;
	sub_82C170A0(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82bed950
	ctx.lr = 0x82BF3E40;
	sub_82BED950(ctx, base);
loc_82BF3E40:
	// addi r5,r29,-104
	ctx.r5.s64 = ctx.r29.s64 + -104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF3E54;
	sub_82C16570(ctx, base);
	// addi r5,r29,-76
	ctx.r5.s64 = ctx.r29.s64 + -76;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF3E68;
	sub_82C164C8(ctx, base);
	// addi r5,r29,-64
	ctx.r5.s64 = ctx.r29.s64 + -64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF3E7C;
	sub_82C164C8(ctx, base);
	// addi r5,r29,-48
	ctx.r5.s64 = ctx.r29.s64 + -48;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c17758
	ctx.lr = 0x82BF3E90;
	sub_82C17758(ctx, base);
	// addi r5,r29,-36
	ctx.r5.s64 = ctx.r29.s64 + -36;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF3EA4;
	sub_82C16570(ctx, base);
	// addi r5,r29,-16
	ctx.r5.s64 = ctx.r29.s64 + -16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF3EB8;
	sub_82C164C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c17758
	ctx.lr = 0x82BF3ECC;
	sub_82C17758(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf3b78
	ctx.lr = 0x82BF3EDC;
	sub_82BF3B78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF3EE4;
	sub_82C16F48(ctx, base);
loc_82BF3EE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF3EF0"))) PPC_WEAK_FUNC(sub_82BF3EF0);
PPC_FUNC_IMPL(__imp__sub_82BF3EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF3EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// bl 0x82c15490
	ctx.lr = 0x82BF3F30;
	sub_82C15490(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82c15518
	ctx.lr = 0x82BF3F48;
	sub_82C15518(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF3F50"))) PPC_WEAK_FUNC(sub_82BF3F50);
PPC_FUNC_IMPL(__imp__sub_82BF3F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF3F58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// bl 0x82c13410
	ctx.lr = 0x82BF3F8C;
	sub_82C13410(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x82c13850
	ctx.lr = 0x82BF3FA4;
	sub_82C13850(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF3FB0"))) PPC_WEAK_FUNC(sub_82BF3FB0);
PPC_FUNC_IMPL(__imp__sub_82BF3FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BF3FB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF3FD0;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf413c
	if (ctx.cr6.eq) goto loc_82BF413C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,-22232
	ctx.r30.s64 = ctx.r11.s64 + -22232;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,12936
	ctx.r5.s64 = ctx.r30.s64 + 12936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF3FF8;
	sub_82C170A0(ctx, base);
	// addi r5,r30,12940
	ctx.r5.s64 = ctx.r30.s64 + 12940;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF400C;
	sub_82C170A0(ctx, base);
	// addi r5,r30,12956
	ctx.r5.s64 = ctx.r30.s64 + 12956;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4020;
	sub_82C164C8(ctx, base);
	// addi r5,r30,12964
	ctx.r5.s64 = ctx.r30.s64 + 12964;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4034;
	sub_82C164C8(ctx, base);
	// addi r5,r30,12976
	ctx.r5.s64 = ctx.r30.s64 + 12976;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c17378
	ctx.lr = 0x82BF4048;
	sub_82C17378(ctx, base);
	// addi r5,r30,12988
	ctx.r5.s64 = ctx.r30.s64 + 12988;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF405C;
	sub_82C16570(ctx, base);
	// addi r5,r30,13004
	ctx.r5.s64 = ctx.r30.s64 + 13004;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF4070;
	sub_82C16570(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf40a8
	if (ctx.cr6.eq) goto loc_82BF40A8;
	// addi r5,r30,13024
	ctx.r5.s64 = ctx.r30.s64 + 13024;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4090;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// bl 0x82c16f48
	ctx.lr = 0x82BF40A0;
	sub_82C16F48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
loc_82BF40A8:
	// addi r5,r30,13032
	ctx.r5.s64 = ctx.r30.s64 + 13032;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82c18020
	ctx.lr = 0x82BF40B4;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf4134
	if (ctx.cr6.eq) goto loc_82BF4134;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r27,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r27.u32);
loc_82BF40D0:
	// slw r11,r26,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r28.u8 & 0x3F));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82bf412c
	if (!ctx.cr6.eq) goto loc_82BF412C;
	// addi r4,r30,13040
	ctx.r4.s64 = ctx.r30.s64 + 13040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF40E8;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf4120
	if (!ctx.cr6.eq) goto loc_82BF4120;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF4108;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf4120
	if (ctx.cr6.eq) goto loc_82BF4120;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
loc_82BF4120:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// blt cr6,0x82bf40d0
	if (ctx.cr6.lt) goto loc_82BF40D0;
loc_82BF412C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF4134;
	sub_82C16F48(ctx, base);
loc_82BF4134:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF413C;
	sub_82C16F48(ctx, base);
loc_82BF413C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4148"))) PPC_WEAK_FUNC(sub_82BF4148);
PPC_FUNC_IMPL(__imp__sub_82BF4148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// b 0x82c15590
	sub_82C15590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4188"))) PPC_WEAK_FUNC(sub_82BF4188);
PPC_FUNC_IMPL(__imp__sub_82BF4188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// b 0x82c138d8
	sub_82C138D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF41C0"))) PPC_WEAK_FUNC(sub_82BF41C0);
PPC_FUNC_IMPL(__imp__sub_82BF41C0) {
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF41E0"))) PPC_WEAK_FUNC(sub_82BF41E0);
PPC_FUNC_IMPL(__imp__sub_82BF41E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF41E8"))) PPC_WEAK_FUNC(sub_82BF41E8);
PPC_FUNC_IMPL(__imp__sub_82BF41E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF41F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF4210;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r29,r11,-9136
	ctx.r29.s64 = ctx.r11.s64 + -9136;
	// beq cr6,0x82bf4248
	if (ctx.cr6.eq) goto loc_82BF4248;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf4248
	if (!ctx.cr6.eq) goto loc_82BF4248;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF4234;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-48
	ctx.r5.s64 = ctx.r29.s64 + -48;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF4248;
	sub_82C186D0(ctx, base);
loc_82BF4248:
	// lis r28,-31988
	ctx.r28.s64 = -2096365568;
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf4264
	if (!ctx.cr6.eq) goto loc_82BF4264;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf427c
	if (ctx.cr6.eq) goto loc_82BF427C;
loc_82BF4264:
	// addi r5,r29,-44
	ctx.r5.s64 = ctx.r29.s64 + -44;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF4278;
	sub_82C186D0(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF427C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf4294
	if (!ctx.cr6.eq) goto loc_82BF4294;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf42ac
	if (ctx.cr6.eq) goto loc_82BF42AC;
loc_82BF4294:
	// addi r5,r29,-28
	ctx.r5.s64 = ctx.r29.s64 + -28;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF42A8;
	sub_82C18570(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF42AC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf42c4
	if (!ctx.cr6.eq) goto loc_82BF42C4;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bf42dc
	if (ctx.cr6.eq) goto loc_82BF42DC;
loc_82BF42C4:
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BF42D8;
	sub_82C184C0(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF42DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf42f4
	if (!ctx.cr6.eq) goto loc_82BF42F4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf4308
	if (ctx.cr6.eq) goto loc_82BF4308;
loc_82BF42F4:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BF4308;
	sub_82C184C0(ctx, base);
loc_82BF4308:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF4310;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4318"))) PPC_WEAK_FUNC(sub_82BF4318);
PPC_FUNC_IMPL(__imp__sub_82BF4318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF4320;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF4338;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf43a4
	if (ctx.cr6.eq) goto loc_82BF43A4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,-9080
	ctx.r30.s64 = ctx.r11.s64 + -9080;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF4360;
	sub_82C170A0(ctx, base);
	// addi r5,r30,-28
	ctx.r5.s64 = ctx.r30.s64 + -28;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4374;
	sub_82C164C8(ctx, base);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF4388;
	sub_82C16378(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF439C;
	sub_82C16378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF43A4;
	sub_82C16F48(ctx, base);
loc_82BF43A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF43B0"))) PPC_WEAK_FUNC(sub_82BF43B0);
PPC_FUNC_IMPL(__imp__sub_82BF43B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF43B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF43D0;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf4494
	if (ctx.cr6.eq) goto loc_82BF4494;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,-8940
	ctx.r29.s64 = ctx.r11.s64 + -8940;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// addi r5,r29,-60
	ctx.r5.s64 = ctx.r29.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF43F8;
	sub_82C170A0(ctx, base);
	// addi r5,r29,-56
	ctx.r5.s64 = ctx.r29.s64 + -56;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF440C;
	sub_82C170A0(ctx, base);
	// addi r5,r29,-40
	ctx.r5.s64 = ctx.r29.s64 + -40;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c17378
	ctx.lr = 0x82BF4420;
	sub_82C17378(ctx, base);
	// addi r5,r29,-24
	ctx.r5.s64 = ctx.r29.s64 + -24;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c17378
	ctx.lr = 0x82BF4434;
	sub_82C17378(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82bf4460
	if (ctx.cr6.eq) goto loc_82BF4460;
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4454;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// b 0x82bf447c
	goto loc_82BF447C;
loc_82BF4460:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c170a0
	ctx.lr = 0x82BF4470;
	sub_82C170A0(ctx, base);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82bedb88
	ctx.lr = 0x82BF447C;
	sub_82BEDB88(ctx, base);
loc_82BF447C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf3b78
	ctx.lr = 0x82BF448C;
	sub_82BF3B78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF4494;
	sub_82C16F48(ctx, base);
loc_82BF4494:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF44A0"))) PPC_WEAK_FUNC(sub_82BF44A0);
PPC_FUNC_IMPL(__imp__sub_82BF44A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF44A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82c155c0
	ctx.lr = 0x82BF44D0;
	sub_82C155C0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82c15518
	ctx.lr = 0x82BF44E8;
	sub_82C15518(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF44F0"))) PPC_WEAK_FUNC(sub_82BF44F0);
PPC_FUNC_IMPL(__imp__sub_82BF44F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF44F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// bl 0x82c13908
	ctx.lr = 0x82BF451C;
	sub_82C13908(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x82c13850
	ctx.lr = 0x82BF4534;
	sub_82C13850(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4540"))) PPC_WEAK_FUNC(sub_82BF4540);
PPC_FUNC_IMPL(__imp__sub_82BF4540) {
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF4560"))) PPC_WEAK_FUNC(sub_82BF4560);
PPC_FUNC_IMPL(__imp__sub_82BF4560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF4568"))) PPC_WEAK_FUNC(sub_82BF4568);
PPC_FUNC_IMPL(__imp__sub_82BF4568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF4570;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF4590;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r29,r11,-8904
	ctx.r29.s64 = ctx.r11.s64 + -8904;
	// beq cr6,0x82bf45c8
	if (ctx.cr6.eq) goto loc_82BF45C8;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf45c8
	if (!ctx.cr6.eq) goto loc_82BF45C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF45B4;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-28
	ctx.r5.s64 = ctx.r29.s64 + -28;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF45C8;
	sub_82C186D0(ctx, base);
loc_82BF45C8:
	// lis r28,-31988
	ctx.r28.s64 = -2096365568;
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf45e4
	if (!ctx.cr6.eq) goto loc_82BF45E4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf45fc
	if (ctx.cr6.eq) goto loc_82BF45FC;
loc_82BF45E4:
	// addi r5,r29,-24
	ctx.r5.s64 = ctx.r29.s64 + -24;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF45F8;
	sub_82C18570(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF45FC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf4614
	if (!ctx.cr6.eq) goto loc_82BF4614;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf462c
	if (ctx.cr6.eq) goto loc_82BF462C;
loc_82BF4614:
	// addi r5,r29,-16
	ctx.r5.s64 = ctx.r29.s64 + -16;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF4628;
	sub_82C18570(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF462C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf4644
	if (!ctx.cr6.eq) goto loc_82BF4644;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf465c
	if (ctx.cr6.eq) goto loc_82BF465C;
loc_82BF4644:
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF4658;
	sub_82C18570(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF465C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf4674
	if (!ctx.cr6.eq) goto loc_82BF4674;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf4688
	if (ctx.cr6.eq) goto loc_82BF4688;
loc_82BF4674:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF4688;
	sub_82C18570(ctx, base);
loc_82BF4688:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF4690;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4698"))) PPC_WEAK_FUNC(sub_82BF4698);
PPC_FUNC_IMPL(__imp__sub_82BF4698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF46A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF46B8;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf4724
	if (ctx.cr6.eq) goto loc_82BF4724;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,-8872
	ctx.r30.s64 = ctx.r11.s64 + -8872;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF46E0;
	sub_82C164C8(ctx, base);
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF46F4;
	sub_82C164C8(ctx, base);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4708;
	sub_82C164C8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF471C;
	sub_82C164C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF4724;
	sub_82C16F48(ctx, base);
loc_82BF4724:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4730"))) PPC_WEAK_FUNC(sub_82BF4730);
PPC_FUNC_IMPL(__imp__sub_82BF4730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF4758"))) PPC_WEAK_FUNC(sub_82BF4758);
PPC_FUNC_IMPL(__imp__sub_82BF4758) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF4780"))) PPC_WEAK_FUNC(sub_82BF4780);
PPC_FUNC_IMPL(__imp__sub_82BF4780) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF4798"))) PPC_WEAK_FUNC(sub_82BF4798);
PPC_FUNC_IMPL(__imp__sub_82BF4798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF47A0"))) PPC_WEAK_FUNC(sub_82BF47A0);
PPC_FUNC_IMPL(__imp__sub_82BF47A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82BF47A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF47C8;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-8824
	ctx.r28.s64 = ctx.r11.s64 + -8824;
	// beq cr6,0x82bf4800
	if (ctx.cr6.eq) goto loc_82BF4800;
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf4800
	if (!ctx.cr6.eq) goto loc_82BF4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF47EC;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,-40
	ctx.r5.s64 = ctx.r28.s64 + -40;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF4800;
	sub_82C186D0(ctx, base);
loc_82BF4800:
	// lis r31,-31988
	ctx.r31.s64 = -2096365568;
	// lbz r11,9732(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf481c
	if (!ctx.cr6.eq) goto loc_82BF481C;
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf4834
	if (ctx.cr6.eq) goto loc_82BF4834;
loc_82BF481C:
	// addi r5,r28,-36
	ctx.r5.s64 = ctx.r28.s64 + -36;
	// lhz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c19078
	ctx.lr = 0x82BF4830;
	sub_82C19078(ctx, base);
	// lbz r11,9732(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9732);
loc_82BF4834:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf484c
	if (!ctx.cr6.eq) goto loc_82BF484C;
	// lhz r10,2(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf4864
	if (ctx.cr6.eq) goto loc_82BF4864;
loc_82BF484C:
	// addi r5,r28,-28
	ctx.r5.s64 = ctx.r28.s64 + -28;
	// lhz r4,2(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c19078
	ctx.lr = 0x82BF4860;
	sub_82C19078(ctx, base);
	// lbz r11,9732(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9732);
loc_82BF4864:
	// lbz r10,156(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf4894
	if (ctx.cr6.eq) goto loc_82BF4894;
	// addi r5,r28,-20
	ctx.r5.s64 = ctx.r28.s64 + -20;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF4884;
	sub_82C18570(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF488C;
	sub_82C16F48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
loc_82BF4894:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf48b0
	if (!ctx.cr6.eq) goto loc_82BF48B0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bf4940
	if (ctx.cr6.eq) goto loc_82BF4940;
loc_82BF48B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF48C0;
	sub_82C18020(ctx, base);
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF48D4;
	sub_82C186D0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82BF48DC:
	// slw r31,r25,r27
	ctx.r31.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r27.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf0f48
	ctx.lr = 0x82BF48E8;
	sub_82BF0F48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bf4938
	if (ctx.cr6.eq) goto loc_82BF4938;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF48FC;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf492c
	if (!ctx.cr6.eq) goto loc_82BF492C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf491c
	if (ctx.cr6.eq) goto loc_82BF491C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BF491C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BF492C;
	sub_82C184C0(ctx, base);
loc_82BF492C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x82bf48dc
	if (ctx.cr6.lt) goto loc_82BF48DC;
loc_82BF4938:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF4940;
	sub_82C16F48(ctx, base);
loc_82BF4940:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF4948;
	sub_82C16F48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4950"))) PPC_WEAK_FUNC(sub_82BF4950);
PPC_FUNC_IMPL(__imp__sub_82BF4950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF4958;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF4970;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf4a80
	if (ctx.cr6.eq) goto loc_82BF4A80;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r26,r11,-8784
	ctx.r26.s64 = ctx.r11.s64 + -8784;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r26,-32
	ctx.r5.s64 = ctx.r26.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16420
	ctx.lr = 0x82BF4998;
	sub_82C16420(ctx, base);
	// addi r5,r26,-24
	ctx.r5.s64 = ctx.r26.s64 + -24;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r27,2
	ctx.r4.s64 = ctx.r27.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16420
	ctx.lr = 0x82BF49AC;
	sub_82C16420(ctx, base);
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf49e4
	if (ctx.cr6.eq) goto loc_82BF49E4;
	// addi r5,r26,-16
	ctx.r5.s64 = ctx.r26.s64 + -16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF49CC;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// bl 0x82c16f48
	ctx.lr = 0x82BF49DC;
	sub_82C16F48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
loc_82BF49E4:
	// addi r5,r26,-8
	ctx.r5.s64 = ctx.r26.s64 + -8;
	// li r4,65
	ctx.r4.s64 = 65;
	// bl 0x82c18020
	ctx.lr = 0x82BF49F0;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf4a78
	if (ctx.cr6.eq) goto loc_82BF4A78;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// stw r24,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r24.u32);
loc_82BF4A0C:
	// slw r29,r25,r28
	ctx.r29.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r28.u8 & 0x3F));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf0f48
	ctx.lr = 0x82BF4A18;
	sub_82BF0F48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bf4a70
	if (ctx.cr6.eq) goto loc_82BF4A70;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF4A2C;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf4a64
	if (!ctx.cr6.eq) goto loc_82BF4A64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF4A4C;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf4a64
	if (ctx.cr6.eq) goto loc_82BF4A64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// or r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 | ctx.r11.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_82BF4A64:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// blt cr6,0x82bf4a0c
	if (ctx.cr6.lt) goto loc_82BF4A0C;
loc_82BF4A70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF4A78;
	sub_82C16F48(ctx, base);
loc_82BF4A78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF4A80;
	sub_82C16F48(ctx, base);
loc_82BF4A80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4A88"))) PPC_WEAK_FUNC(sub_82BF4A88);
PPC_FUNC_IMPL(__imp__sub_82BF4A88) {
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF4AA8"))) PPC_WEAK_FUNC(sub_82BF4AA8);
PPC_FUNC_IMPL(__imp__sub_82BF4AA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF4AB0"))) PPC_WEAK_FUNC(sub_82BF4AB0);
PPC_FUNC_IMPL(__imp__sub_82BF4AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF4AB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF4AD8;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r29,r11,-8708
	ctx.r29.s64 = ctx.r11.s64 + -8708;
	// beq cr6,0x82bf4b10
	if (ctx.cr6.eq) goto loc_82BF4B10;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf4b10
	if (!ctx.cr6.eq) goto loc_82BF4B10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF4AFC;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-68
	ctx.r5.s64 = ctx.r29.s64 + -68;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF4B10;
	sub_82C186D0(ctx, base);
loc_82BF4B10:
	// lis r28,-31988
	ctx.r28.s64 = -2096365568;
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf4b2c
	if (!ctx.cr6.eq) goto loc_82BF4B2C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf4b44
	if (ctx.cr6.eq) goto loc_82BF4B44;
loc_82BF4B2C:
	// addi r5,r29,-64
	ctx.r5.s64 = ctx.r29.s64 + -64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF4B40;
	sub_82C18570(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF4B44:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf4b5c
	if (!ctx.cr6.eq) goto loc_82BF4B5C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf4b74
	if (ctx.cr6.eq) goto loc_82BF4B74;
loc_82BF4B5C:
	// addi r5,r29,-52
	ctx.r5.s64 = ctx.r29.s64 + -52;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF4B70;
	sub_82C18570(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF4B74:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf4b8c
	if (!ctx.cr6.eq) goto loc_82BF4B8C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf4ba4
	if (ctx.cr6.eq) goto loc_82BF4BA4;
loc_82BF4B8C:
	// addi r5,r29,-40
	ctx.r5.s64 = ctx.r29.s64 + -40;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF4BA0;
	sub_82C18570(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF4BA4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf4bbc
	if (!ctx.cr6.eq) goto loc_82BF4BBC;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf4bd4
	if (ctx.cr6.eq) goto loc_82BF4BD4;
loc_82BF4BBC:
	// addi r5,r29,-20
	ctx.r5.s64 = ctx.r29.s64 + -20;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF4BD0;
	sub_82C18570(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF4BD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf4bec
	if (!ctx.cr6.eq) goto loc_82BF4BEC;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf4c00
	if (ctx.cr6.eq) goto loc_82BF4C00;
loc_82BF4BEC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF4C00;
	sub_82C18570(ctx, base);
loc_82BF4C00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF4C08;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4C10"))) PPC_WEAK_FUNC(sub_82BF4C10);
PPC_FUNC_IMPL(__imp__sub_82BF4C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF4C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF4C30;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf4cb0
	if (ctx.cr6.eq) goto loc_82BF4CB0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,-8632
	ctx.r30.s64 = ctx.r11.s64 + -8632;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-64
	ctx.r5.s64 = ctx.r30.s64 + -64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4C58;
	sub_82C164C8(ctx, base);
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4C6C;
	sub_82C164C8(ctx, base);
	// addi r5,r30,-40
	ctx.r5.s64 = ctx.r30.s64 + -40;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4C80;
	sub_82C164C8(ctx, base);
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4C94;
	sub_82C164C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4CA8;
	sub_82C164C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF4CB0;
	sub_82C16F48(ctx, base);
loc_82BF4CB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4CB8"))) PPC_WEAK_FUNC(sub_82BF4CB8);
PPC_FUNC_IMPL(__imp__sub_82BF4CB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF4CE8"))) PPC_WEAK_FUNC(sub_82BF4CE8);
PPC_FUNC_IMPL(__imp__sub_82BF4CE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF4D18"))) PPC_WEAK_FUNC(sub_82BF4D18);
PPC_FUNC_IMPL(__imp__sub_82BF4D18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF4D20"))) PPC_WEAK_FUNC(sub_82BF4D20);
PPC_FUNC_IMPL(__imp__sub_82BF4D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF4D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF4D40;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf4d98
	if (ctx.cr6.eq) goto loc_82BF4D98;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,-8572
	ctx.r30.s64 = ctx.r11.s64 + -8572;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF4D68;
	sub_82C16570(ctx, base);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF4D7C;
	sub_82C16570(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF4D90;
	sub_82C16570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF4D98;
	sub_82C16F48(ctx, base);
loc_82BF4D98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF4DA0"))) PPC_WEAK_FUNC(sub_82BF4DA0);
PPC_FUNC_IMPL(__imp__sub_82BF4DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF4DC0"))) PPC_WEAK_FUNC(sub_82BF4DC0);
PPC_FUNC_IMPL(__imp__sub_82BF4DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF4DE0"))) PPC_WEAK_FUNC(sub_82BF4DE0);
PPC_FUNC_IMPL(__imp__sub_82BF4DE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF4DE8"))) PPC_WEAK_FUNC(sub_82BF4DE8);
PPC_FUNC_IMPL(__imp__sub_82BF4DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82BF4DF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF4E08;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf5054
	if (ctx.cr6.eq) goto loc_82BF5054;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,-8036
	ctx.r29.s64 = ctx.r11.s64 + -8036;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r29,-256
	ctx.r5.s64 = ctx.r29.s64 + -256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF4E30;
	sub_82C170A0(ctx, base);
	// addi r5,r29,-252
	ctx.r5.s64 = ctx.r29.s64 + -252;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF4E44;
	sub_82C170A0(ctx, base);
	// addi r23,r30,8
	ctx.r23.s64 = ctx.r30.s64 + 8;
	// addi r5,r29,-236
	ctx.r5.s64 = ctx.r29.s64 + -236;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF4E5C;
	sub_82C16378(ctx, base);
	// addi r5,r29,-224
	ctx.r5.s64 = ctx.r29.s64 + -224;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16420
	ctx.lr = 0x82BF4E70;
	sub_82C16420(ctx, base);
	// addi r5,r29,-208
	ctx.r5.s64 = ctx.r29.s64 + -208;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF4E84;
	sub_82C16570(ctx, base);
	// addi r5,r29,-192
	ctx.r5.s64 = ctx.r29.s64 + -192;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF4E98;
	sub_82C16570(ctx, base);
	// addi r5,r29,-176
	ctx.r5.s64 = ctx.r29.s64 + -176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF4EAC;
	sub_82C16570(ctx, base);
	// addi r5,r29,-164
	ctx.r5.s64 = ctx.r29.s64 + -164;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF4EC0;
	sub_82C16570(ctx, base);
	// addi r5,r29,-144
	ctx.r5.s64 = ctx.r29.s64 + -144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF4ED4;
	sub_82C16570(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82bf4f04
	if (ctx.cr6.eq) goto loc_82BF4F04;
	// addi r5,r29,-128
	ctx.r5.s64 = ctx.r29.s64 + -128;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4EF8;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// b 0x82bf4f1c
	goto loc_82BF4F1C;
loc_82BF4F04:
	// addi r5,r29,-108
	ctx.r5.s64 = ctx.r29.s64 + -108;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bl 0x82c170a0
	ctx.lr = 0x82BF4F10;
	sub_82C170A0(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82beef70
	ctx.lr = 0x82BF4F1C;
	sub_82BEEF70(ctx, base);
loc_82BF4F1C:
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82bf4f48
	if (ctx.cr6.eq) goto loc_82BF4F48;
	// addi r5,r29,-88
	ctx.r5.s64 = ctx.r29.s64 + -88;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4F3C;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x82bf4f60
	goto loc_82BF4F60;
loc_82BF4F48:
	// addi r5,r29,-64
	ctx.r5.s64 = ctx.r29.s64 + -64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bl 0x82c170a0
	ctx.lr = 0x82BF4F54;
	sub_82C170A0(ctx, base);
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82beef70
	ctx.lr = 0x82BF4F60;
	sub_82BEEF70(ctx, base);
loc_82BF4F60:
	// addi r5,r29,-40
	ctx.r5.s64 = ctx.r29.s64 + -40;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16618
	ctx.lr = 0x82BF4F74;
	sub_82C16618(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf4fa0
	if (ctx.cr6.eq) goto loc_82BF4FA0;
	// addi r5,r29,-24
	ctx.r5.s64 = ctx.r29.s64 + -24;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF4F94;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// b 0x82bf5030
	goto loc_82BF5030;
loc_82BF4FA0:
	// addi r5,r29,-16
	ctx.r5.s64 = ctx.r29.s64 + -16;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82c18020
	ctx.lr = 0x82BF4FAC;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf5030
	if (ctx.cr6.eq) goto loc_82BF5030;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r24.u32);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82BF4FC4:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bef038
	ctx.lr = 0x82BF4FD0;
	sub_82BEF038(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bf5028
	if (ctx.cr6.eq) goto loc_82BF5028;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF4FE4;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf501c
	if (!ctx.cr6.eq) goto loc_82BF501C;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF5004;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf501c
	if (ctx.cr6.eq) goto loc_82BF501C;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// or r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 | ctx.r11.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_82BF501C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bf4fc4
	if (ctx.cr6.lt) goto loc_82BF4FC4;
loc_82BF5028:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF5030;
	sub_82C16F48(ctx, base);
loc_82BF5030:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf504c
	if (ctx.cr6.eq) goto loc_82BF504C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82bf4d20
	ctx.lr = 0x82BF504C;
	sub_82BF4D20(ctx, base);
loc_82BF504C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF5054;
	sub_82C16F48(ctx, base);
loc_82BF5054:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5060"))) PPC_WEAK_FUNC(sub_82BF5060);
PPC_FUNC_IMPL(__imp__sub_82BF5060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f0,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// b 0x82c13418
	sub_82C13418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF50D0"))) PPC_WEAK_FUNC(sub_82BF50D0);
PPC_FUNC_IMPL(__imp__sub_82BF50D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r10.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// b 0x82c13448
	sub_82C13448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5138"))) PPC_WEAK_FUNC(sub_82BF5138);
PPC_FUNC_IMPL(__imp__sub_82BF5138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5140"))) PPC_WEAK_FUNC(sub_82BF5140);
PPC_FUNC_IMPL(__imp__sub_82BF5140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF5148;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF5160;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf5368
	if (ctx.cr6.eq) goto loc_82BF5368;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,-7444
	ctx.r29.s64 = ctx.r11.s64 + -7444;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r29,-280
	ctx.r5.s64 = ctx.r29.s64 + -280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16798
	ctx.lr = 0x82BF5188;
	sub_82C16798(ctx, base);
	// addi r5,r29,-264
	ctx.r5.s64 = ctx.r29.s64 + -264;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16618
	ctx.lr = 0x82BF519C;
	sub_82C16618(ctx, base);
	// addi r5,r29,-244
	ctx.r5.s64 = ctx.r29.s64 + -244;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF51B0;
	sub_82C16570(ctx, base);
	// addi r5,r29,-236
	ctx.r5.s64 = ctx.r29.s64 + -236;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16618
	ctx.lr = 0x82BF51C4;
	sub_82C16618(ctx, base);
	// addi r5,r29,-220
	ctx.r5.s64 = ctx.r29.s64 + -220;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16618
	ctx.lr = 0x82BF51D8;
	sub_82C16618(ctx, base);
	// addi r5,r29,-204
	ctx.r5.s64 = ctx.r29.s64 + -204;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF51EC;
	sub_82C16570(ctx, base);
	// addi r5,r29,-188
	ctx.r5.s64 = ctx.r29.s64 + -188;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF5200;
	sub_82C16570(ctx, base);
	// addi r5,r29,-172
	ctx.r5.s64 = ctx.r29.s64 + -172;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF5214;
	sub_82C16570(ctx, base);
	// addi r5,r29,-156
	ctx.r5.s64 = ctx.r29.s64 + -156;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF5228;
	sub_82C16570(ctx, base);
	// addi r5,r29,-136
	ctx.r5.s64 = ctx.r29.s64 + -136;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF523C;
	sub_82C16570(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf5268
	if (ctx.cr6.eq) goto loc_82BF5268;
	// addi r5,r29,-116
	ctx.r5.s64 = ctx.r29.s64 + -116;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF525C;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// b 0x82bf52fc
	goto loc_82BF52FC;
loc_82BF5268:
	// addi r5,r29,-108
	ctx.r5.s64 = ctx.r29.s64 + -108;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x82c18020
	ctx.lr = 0x82BF5274;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf52fc
	if (ctx.cr6.eq) goto loc_82BF52FC;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r24.u32);
loc_82BF5290:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bef258
	ctx.lr = 0x82BF529C;
	sub_82BEF258(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bf52f4
	if (ctx.cr6.eq) goto loc_82BF52F4;
	// addi r4,r29,-100
	ctx.r4.s64 = ctx.r29.s64 + -100;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF52B0;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf52e8
	if (!ctx.cr6.eq) goto loc_82BF52E8;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF52D0;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf52e8
	if (ctx.cr6.eq) goto loc_82BF52E8;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// or r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 | ctx.r11.u64;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
loc_82BF52E8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bf5290
	if (ctx.cr6.lt) goto loc_82BF5290;
loc_82BF52F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF52FC;
	sub_82C16F48(ctx, base);
loc_82BF52FC:
	// addi r5,r29,-92
	ctx.r5.s64 = ctx.r29.s64 + -92;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF5310;
	sub_82C16570(ctx, base);
	// addi r5,r29,-72
	ctx.r5.s64 = ctx.r29.s64 + -72;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,116
	ctx.r4.s64 = ctx.r30.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF5324;
	sub_82C16570(ctx, base);
	// addi r5,r29,-48
	ctx.r5.s64 = ctx.r29.s64 + -48;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF5338;
	sub_82C164C8(ctx, base);
	// addi r5,r29,-24
	ctx.r5.s64 = ctx.r29.s64 + -24;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF534C;
	sub_82C16570(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF5360;
	sub_82C16570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF5368;
	sub_82C16F48(ctx, base);
loc_82BF5368:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5370"))) PPC_WEAK_FUNC(sub_82BF5370);
PPC_FUNC_IMPL(__imp__sub_82BF5370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BF5380:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82bf5380
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BF5380;
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f0,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f0,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f0,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f0,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f0,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f0,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f0,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f0,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lwz r11,108(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lwz r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// lfs f0,124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f0,128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5458"))) PPC_WEAK_FUNC(sub_82BF5458);
PPC_FUNC_IMPL(__imp__sub_82BF5458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BF5468:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82bf5468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BF5468;
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f0,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// lfs f0,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lfs f0,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lfs f0,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lfs f0,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// lfs f0,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lfs f0,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// lfs f0,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// lfs f0,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stw r11,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r11.u32);
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// stw r11,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, ctx.r11.u32);
	// lfs f0,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 124, temp.u32);
	// lfs f0,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 128, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5540"))) PPC_WEAK_FUNC(sub_82BF5540);
PPC_FUNC_IMPL(__imp__sub_82BF5540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5548"))) PPC_WEAK_FUNC(sub_82BF5548);
PPC_FUNC_IMPL(__imp__sub_82BF5548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF5550;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF5568;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf55e8
	if (ctx.cr6.eq) goto loc_82BF55E8;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,-7280
	ctx.r30.s64 = ctx.r11.s64 + -7280;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-64
	ctx.r5.s64 = ctx.r30.s64 + -64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF5590;
	sub_82C16570(ctx, base);
	// addi r5,r30,-48
	ctx.r5.s64 = ctx.r30.s64 + -48;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF55A4;
	sub_82C16570(ctx, base);
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF55B8;
	sub_82C16570(ctx, base);
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF55CC;
	sub_82C16570(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF55E0;
	sub_82C16570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF55E8;
	sub_82C16F48(ctx, base);
loc_82BF55E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF55F0"))) PPC_WEAK_FUNC(sub_82BF55F0);
PPC_FUNC_IMPL(__imp__sub_82BF55F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5620"))) PPC_WEAK_FUNC(sub_82BF5620);
PPC_FUNC_IMPL(__imp__sub_82BF5620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5650"))) PPC_WEAK_FUNC(sub_82BF5650);
PPC_FUNC_IMPL(__imp__sub_82BF5650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5658"))) PPC_WEAK_FUNC(sub_82BF5658);
PPC_FUNC_IMPL(__imp__sub_82BF5658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF5660;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c16148
	ctx.lr = 0x82BF567C;
	sub_82C16148(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF568C;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf582c
	if (ctx.cr6.eq) goto loc_82BF582C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r28,r11,-6948
	ctx.r28.s64 = ctx.r11.s64 + -6948;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r28,-148
	ctx.r5.s64 = ctx.r28.s64 + -148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF56B4;
	sub_82C170A0(ctx, base);
	// addi r5,r28,-132
	ctx.r5.s64 = ctx.r28.s64 + -132;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF56C8;
	sub_82C170A0(ctx, base);
	// addi r5,r28,-124
	ctx.r5.s64 = ctx.r28.s64 + -124;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16798
	ctx.lr = 0x82BF56DC;
	sub_82C16798(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf5708
	if (ctx.cr6.eq) goto loc_82BF5708;
	// addi r5,r28,-112
	ctx.r5.s64 = ctx.r28.s64 + -112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF56FC;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// b 0x82bf579c
	goto loc_82BF579C;
loc_82BF5708:
	// addi r5,r28,-100
	ctx.r5.s64 = ctx.r28.s64 + -100;
	// li r4,25
	ctx.r4.s64 = 25;
	// bl 0x82c18020
	ctx.lr = 0x82BF5714;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf579c
	if (ctx.cr6.eq) goto loc_82BF579C;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r24.u32);
loc_82BF5730:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82befad0
	ctx.lr = 0x82BF573C;
	sub_82BEFAD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bf5794
	if (ctx.cr6.eq) goto loc_82BF5794;
	// addi r4,r28,-88
	ctx.r4.s64 = ctx.r28.s64 + -88;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF5750;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf5788
	if (!ctx.cr6.eq) goto loc_82BF5788;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF5770;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf5788
	if (ctx.cr6.eq) goto loc_82BF5788;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_82BF5788:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bf5730
	if (ctx.cr6.lt) goto loc_82BF5730;
loc_82BF5794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF579C;
	sub_82C16F48(ctx, base);
loc_82BF579C:
	// addi r5,r28,-80
	ctx.r5.s64 = ctx.r28.s64 + -80;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16420
	ctx.lr = 0x82BF57B0;
	sub_82C16420(ctx, base);
	// addi r5,r28,-72
	ctx.r5.s64 = ctx.r28.s64 + -72;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,62
	ctx.r4.s64 = ctx.r30.s64 + 62;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16420
	ctx.lr = 0x82BF57C4;
	sub_82C16420(ctx, base);
	// addi r5,r28,-56
	ctx.r5.s64 = ctx.r28.s64 + -56;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF57D8;
	sub_82C170A0(ctx, base);
	// addi r5,r28,-40
	ctx.r5.s64 = ctx.r28.s64 + -40;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF57EC;
	sub_82C16570(ctx, base);
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF5800;
	sub_82C16570(ctx, base);
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF5814;
	sub_82C16570(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x82bf4698
	ctx.lr = 0x82BF5824;
	sub_82BF4698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF582C;
	sub_82C16F48(ctx, base);
loc_82BF582C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5838"))) PPC_WEAK_FUNC(sub_82BF5838);
PPC_FUNC_IMPL(__imp__sub_82BF5838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r7,84(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82BF5864:
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x82bf5864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BF5864;
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stfs f0,36(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lfs f0,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// lfs f0,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// lhz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 60);
	// sth r9,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r9.u16);
	// lhz r9,62(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 62);
	// sth r9,62(r11)
	PPC_STORE_U16(ctx.r11.u32 + 62, ctx.r9.u16);
	// lfs f0,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// b 0x82c14288
	sub_82C14288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF58E0"))) PPC_WEAK_FUNC(sub_82BF58E0);
PPC_FUNC_IMPL(__imp__sub_82BF58E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r8,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r8.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82BF5908:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82bf5908
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BF5908;
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stfs f0,36(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// lfs f0,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r10.u32);
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// sth r10,60(r4)
	PPC_STORE_U16(ctx.r4.u32 + 60, ctx.r10.u16);
	// lhz r10,62(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// sth r10,62(r4)
	PPC_STORE_U16(ctx.r4.u32 + 62, ctx.r10.u16);
	// lfs f0,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r10.u32);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r10.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r10.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r11,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r11.u32);
	// b 0x82c142c8
	sub_82C142C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5980"))) PPC_WEAK_FUNC(sub_82BF5980);
PPC_FUNC_IMPL(__imp__sub_82BF5980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5988"))) PPC_WEAK_FUNC(sub_82BF5988);
PPC_FUNC_IMPL(__imp__sub_82BF5988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF5990;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c16148
	ctx.lr = 0x82BF59AC;
	sub_82C16148(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF59BC;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf59f8
	if (ctx.cr6.eq) goto loc_82BF59F8;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-6920
	ctx.r5.s64 = ctx.r11.s64 + -6920;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16618
	ctx.lr = 0x82BF59E0;
	sub_82C16618(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf5658
	ctx.lr = 0x82BF59F0;
	sub_82BF5658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF59F8;
	sub_82C16F48(ctx, base);
loc_82BF59F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5A00"))) PPC_WEAK_FUNC(sub_82BF5A00);
PPC_FUNC_IMPL(__imp__sub_82BF5A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,104(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// b 0x82bf5838
	sub_82BF5838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5A20"))) PPC_WEAK_FUNC(sub_82BF5A20);
PPC_FUNC_IMPL(__imp__sub_82BF5A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// b 0x82bf58e0
	sub_82BF58E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5A40"))) PPC_WEAK_FUNC(sub_82BF5A40);
PPC_FUNC_IMPL(__imp__sub_82BF5A40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5A48"))) PPC_WEAK_FUNC(sub_82BF5A48);
PPC_FUNC_IMPL(__imp__sub_82BF5A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF5A50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c16148
	ctx.lr = 0x82BF5A6C;
	sub_82C16148(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF5A7C;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf5ad0
	if (ctx.cr6.eq) goto loc_82BF5AD0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,-6884
	ctx.r29.s64 = ctx.r11.s64 + -6884;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16618
	ctx.lr = 0x82BF5AA4;
	sub_82C16618(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF5AB8;
	sub_82C16570(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf5658
	ctx.lr = 0x82BF5AC8;
	sub_82BF5658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF5AD0;
	sub_82C16F48(ctx, base);
loc_82BF5AD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5AD8"))) PPC_WEAK_FUNC(sub_82BF5AD8);
PPC_FUNC_IMPL(__imp__sub_82BF5AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,104(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f0,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// b 0x82bf5838
	sub_82BF5838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5B00"))) PPC_WEAK_FUNC(sub_82BF5B00);
PPC_FUNC_IMPL(__imp__sub_82BF5B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// b 0x82bf58e0
	sub_82BF58E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5B28"))) PPC_WEAK_FUNC(sub_82BF5B28);
PPC_FUNC_IMPL(__imp__sub_82BF5B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5B30"))) PPC_WEAK_FUNC(sub_82BF5B30);
PPC_FUNC_IMPL(__imp__sub_82BF5B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF5B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c16148
	ctx.lr = 0x82BF5B54;
	sub_82C16148(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF5B64;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf5ba0
	if (ctx.cr6.eq) goto loc_82BF5BA0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-6868
	ctx.r5.s64 = ctx.r11.s64 + -6868;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF5B88;
	sub_82C16570(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf5658
	ctx.lr = 0x82BF5B98;
	sub_82BF5658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF5BA0;
	sub_82C16F48(ctx, base);
loc_82BF5BA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5BA8"))) PPC_WEAK_FUNC(sub_82BF5BA8);
PPC_FUNC_IMPL(__imp__sub_82BF5BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,104(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// b 0x82bf5838
	sub_82BF5838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5BB8"))) PPC_WEAK_FUNC(sub_82BF5BB8);
PPC_FUNC_IMPL(__imp__sub_82BF5BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// b 0x82bf58e0
	sub_82BF58E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5BC8"))) PPC_WEAK_FUNC(sub_82BF5BC8);
PPC_FUNC_IMPL(__imp__sub_82BF5BC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5BD0"))) PPC_WEAK_FUNC(sub_82BF5BD0);
PPC_FUNC_IMPL(__imp__sub_82BF5BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BF5BD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82c16148
	ctx.lr = 0x82BF5BF4;
	sub_82C16148(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF5C04;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf5d10
	if (ctx.cr6.eq) goto loc_82BF5D10;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,-18152
	ctx.r30.s64 = ctx.r11.s64 + -18152;
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// addi r5,r30,11340
	ctx.r5.s64 = ctx.r30.s64 + 11340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF5C2C;
	sub_82C16570(ctx, base);
	// addi r5,r30,11348
	ctx.r5.s64 = ctx.r30.s64 + 11348;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF5C40;
	sub_82C16570(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf5c6c
	if (ctx.cr6.eq) goto loc_82BF5C6C;
	// addi r5,r30,11356
	ctx.r5.s64 = ctx.r30.s64 + 11356;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF5C60;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r11.u32);
	// b 0x82bf5cf8
	goto loc_82BF5CF8;
loc_82BF5C6C:
	// addi r5,r30,11364
	ctx.r5.s64 = ctx.r30.s64 + 11364;
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x82c18020
	ctx.lr = 0x82BF5C78;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf5cf8
	if (ctx.cr6.eq) goto loc_82BF5CF8;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r27,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r27.u32);
loc_82BF5C94:
	// slw r11,r26,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r28.u8 & 0x3F));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82bf5cf0
	if (!ctx.cr6.eq) goto loc_82BF5CF0;
	// addi r4,r30,11372
	ctx.r4.s64 = ctx.r30.s64 + 11372;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF5CAC;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf5ce4
	if (!ctx.cr6.eq) goto loc_82BF5CE4;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF5CCC;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf5ce4
	if (ctx.cr6.eq) goto loc_82BF5CE4;
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r11.u32);
loc_82BF5CE4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// blt cr6,0x82bf5c94
	if (ctx.cr6.lt) goto loc_82BF5C94;
loc_82BF5CF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF5CF8;
	sub_82C16F48(ctx, base);
loc_82BF5CF8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf5658
	ctx.lr = 0x82BF5D08;
	sub_82BF5658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF5D10;
	sub_82C16F48(ctx, base);
loc_82BF5D10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5D18"))) PPC_WEAK_FUNC(sub_82BF5D18);
PPC_FUNC_IMPL(__imp__sub_82BF5D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,104(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lwz r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// b 0x82bf5838
	sub_82BF5838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5D38"))) PPC_WEAK_FUNC(sub_82BF5D38);
PPC_FUNC_IMPL(__imp__sub_82BF5D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// stw r11,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// b 0x82bf58e0
	sub_82BF58E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5D58"))) PPC_WEAK_FUNC(sub_82BF5D58);
PPC_FUNC_IMPL(__imp__sub_82BF5D58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5D60"))) PPC_WEAK_FUNC(sub_82BF5D60);
PPC_FUNC_IMPL(__imp__sub_82BF5D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF5D68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c16148
	ctx.lr = 0x82BF5D84;
	sub_82C16148(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF5D94;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf5ea0
	if (ctx.cr6.eq) goto loc_82BF5EA0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,-17580
	ctx.r29.s64 = ctx.r11.s64 + -17580;
	// addi r4,r27,108
	ctx.r4.s64 = ctx.r27.s64 + 108;
	// addi r5,r29,10860
	ctx.r5.s64 = ctx.r29.s64 + 10860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF5DBC;
	sub_82C170A0(ctx, base);
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf5de8
	if (ctx.cr6.eq) goto loc_82BF5DE8;
	// addi r5,r29,10872
	ctx.r5.s64 = ctx.r29.s64 + 10872;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF5DDC;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r11.u32);
	// b 0x82bf5e88
	goto loc_82BF5E88;
loc_82BF5DE8:
	// addi r5,r29,10884
	ctx.r5.s64 = ctx.r29.s64 + 10884;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x82c18020
	ctx.lr = 0x82BF5DF4;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf5e88
	if (ctx.cr6.eq) goto loc_82BF5E88;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r25.u32);
loc_82BF5E10:
	// slw r28,r24,r26
	ctx.r28.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r26.u8 & 0x3F));
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82bf5e2c
	if (ctx.cr6.eq) goto loc_82BF5E2C;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x82bf5e80
	if (!ctx.cr6.eq) goto loc_82BF5E80;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82bf5e30
	goto loc_82BF5E30;
loc_82BF5E2C:
	// addi r31,r29,-36
	ctx.r31.s64 = ctx.r29.s64 + -36;
loc_82BF5E30:
	// addi r4,r29,10896
	ctx.r4.s64 = ctx.r29.s64 + 10896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF5E3C;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf5e74
	if (!ctx.cr6.eq) goto loc_82BF5E74;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF5E5C;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf5e74
	if (ctx.cr6.eq) goto loc_82BF5E74;
	// lwz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// or r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 | ctx.r11.u64;
	// stw r11,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r11.u32);
loc_82BF5E74:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bf5e10
	if (ctx.cr6.lt) goto loc_82BF5E10;
loc_82BF5E80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF5E88;
	sub_82C16F48(ctx, base);
loc_82BF5E88:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bf5658
	ctx.lr = 0x82BF5E98;
	sub_82BF5658(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF5EA0;
	sub_82C16F48(ctx, base);
loc_82BF5EA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5EA8"))) PPC_WEAK_FUNC(sub_82BF5EA8);
PPC_FUNC_IMPL(__imp__sub_82BF5EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF5EB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x82c144b8
	ctx.lr = 0x82BF5ED8;
	sub_82C144B8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf5838
	ctx.lr = 0x82BF5EE8;
	sub_82BF5838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5EF0"))) PPC_WEAK_FUNC(sub_82BF5EF0);
PPC_FUNC_IMPL(__imp__sub_82BF5EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF5EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// bl 0x82c144e8
	ctx.lr = 0x82BF5F1C;
	sub_82C144E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf58e0
	ctx.lr = 0x82BF5F2C;
	sub_82BF58E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF5F38"))) PPC_WEAK_FUNC(sub_82BF5F38);
PPC_FUNC_IMPL(__imp__sub_82BF5F38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF5F40"))) PPC_WEAK_FUNC(sub_82BF5F40);
PPC_FUNC_IMPL(__imp__sub_82BF5F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF5F48;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c16148
	ctx.lr = 0x82BF5F64;
	sub_82C16148(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF5F74;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf60c4
	if (ctx.cr6.eq) goto loc_82BF60C4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r11,-17580
	ctx.r29.s64 = ctx.r11.s64 + -17580;
	// addi r4,r28,108
	ctx.r4.s64 = ctx.r28.s64 + 108;
	// addi r5,r29,10988
	ctx.r5.s64 = ctx.r29.s64 + 10988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF5F9C;
	sub_82C170A0(ctx, base);
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82bf5fcc
	if (ctx.cr6.eq) goto loc_82BF5FCC;
	// addi r5,r29,11000
	ctx.r5.s64 = ctx.r29.s64 + 11000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF5FC0;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r11.u32);
	// b 0x82bf6068
	goto loc_82BF6068;
loc_82BF5FCC:
	// addi r5,r29,11012
	ctx.r5.s64 = ctx.r29.s64 + 11012;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x82c18020
	ctx.lr = 0x82BF5FD8;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf6068
	if (ctx.cr6.eq) goto loc_82BF6068;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r24.u32);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82BF5FF0:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82bf600c
	if (ctx.cr6.eq) goto loc_82BF600C;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x82bf6060
	if (!ctx.cr6.eq) goto loc_82BF6060;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82bf6010
	goto loc_82BF6010;
loc_82BF600C:
	// addi r31,r29,-36
	ctx.r31.s64 = ctx.r29.s64 + -36;
loc_82BF6010:
	// addi r4,r29,11024
	ctx.r4.s64 = ctx.r29.s64 + 11024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF601C;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf6054
	if (!ctx.cr6.eq) goto loc_82BF6054;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF603C;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf6054
	if (ctx.cr6.eq) goto loc_82BF6054;
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// or r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 | ctx.r11.u64;
	// stw r11,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r11.u32);
loc_82BF6054:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bf5ff0
	if (ctx.cr6.lt) goto loc_82BF5FF0;
loc_82BF6060:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF6068;
	sub_82C16F48(ctx, base);
loc_82BF6068:
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82bf6094
	if (ctx.cr6.eq) goto loc_82BF6094;
	// addi r5,r29,11032
	ctx.r5.s64 = ctx.r29.s64 + 11032;
	// bl 0x82c164c8
	ctx.lr = 0x82BF6088;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 116, ctx.r11.u32);
	// b 0x82bf60ac
	goto loc_82BF60AC;
loc_82BF6094:
	// addi r5,r29,11048
	ctx.r5.s64 = ctx.r29.s64 + 11048;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bl 0x82c170a0
	ctx.lr = 0x82BF60A0;
	sub_82C170A0(ctx, base);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82bf02f8
	ctx.lr = 0x82BF60AC;
	sub_82BF02F8(ctx, base);
loc_82BF60AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bf5658
	ctx.lr = 0x82BF60BC;
	sub_82BF5658(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF60C4;
	sub_82C16F48(ctx, base);
loc_82BF60C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF60D0"))) PPC_WEAK_FUNC(sub_82BF60D0);
PPC_FUNC_IMPL(__imp__sub_82BF60D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF60D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x82c14520
	ctx.lr = 0x82BF6108;
	sub_82C14520(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf5838
	ctx.lr = 0x82BF6118;
	sub_82BF5838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6120"))) PPC_WEAK_FUNC(sub_82BF6120);
PPC_FUNC_IMPL(__imp__sub_82BF6120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF6128;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// bl 0x82c14550
	ctx.lr = 0x82BF6154;
	sub_82C14550(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf58e0
	ctx.lr = 0x82BF6164;
	sub_82BF58E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6170"))) PPC_WEAK_FUNC(sub_82BF6170);
PPC_FUNC_IMPL(__imp__sub_82BF6170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF6178"))) PPC_WEAK_FUNC(sub_82BF6178);
PPC_FUNC_IMPL(__imp__sub_82BF6178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF6180;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c16148
	ctx.lr = 0x82BF619C;
	sub_82C16148(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF61AC;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf6340
	if (ctx.cr6.eq) goto loc_82BF6340;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,-6152
	ctx.r28.s64 = ctx.r11.s64 + -6152;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// addi r5,r28,-172
	ctx.r5.s64 = ctx.r28.s64 + -172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF61D4;
	sub_82C16570(ctx, base);
	// addi r5,r28,-164
	ctx.r5.s64 = ctx.r28.s64 + -164;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF61E8;
	sub_82C16570(ctx, base);
	// addi r5,r28,-144
	ctx.r5.s64 = ctx.r28.s64 + -144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x82bf4d20
	ctx.lr = 0x82BF61F8;
	sub_82BF4D20(ctx, base);
	// addi r5,r28,-132
	ctx.r5.s64 = ctx.r28.s64 + -132;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,132
	ctx.r3.s64 = ctx.r30.s64 + 132;
	// bl 0x82bf5548
	ctx.lr = 0x82BF6208;
	sub_82BF5548(ctx, base);
	// addi r5,r28,-104
	ctx.r5.s64 = ctx.r28.s64 + -104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,156
	ctx.r3.s64 = ctx.r30.s64 + 156;
	// bl 0x82bf5548
	ctx.lr = 0x82BF6218;
	sub_82BF5548(ctx, base);
	// addi r5,r28,-76
	ctx.r5.s64 = ctx.r28.s64 + -76;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF622C;
	sub_82C16570(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf6258
	if (ctx.cr6.eq) goto loc_82BF6258;
	// addi r5,r28,-56
	ctx.r5.s64 = ctx.r28.s64 + -56;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF624C;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r11.u32);
	// b 0x82bf62ec
	goto loc_82BF62EC;
loc_82BF6258:
	// addi r5,r28,-44
	ctx.r5.s64 = ctx.r28.s64 + -44;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82c18020
	ctx.lr = 0x82BF6264;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf62ec
	if (ctx.cr6.eq) goto loc_82BF62EC;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r24.u32);
loc_82BF6280:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bf0090
	ctx.lr = 0x82BF628C;
	sub_82BF0090(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bf62e4
	if (ctx.cr6.eq) goto loc_82BF62E4;
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF62A0;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf62d8
	if (!ctx.cr6.eq) goto loc_82BF62D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF62C0;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf62d8
	if (ctx.cr6.eq) goto loc_82BF62D8;
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stw r11,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r11.u32);
loc_82BF62D8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bf6280
	if (ctx.cr6.lt) goto loc_82BF6280;
loc_82BF62E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF62EC;
	sub_82C16F48(ctx, base);
loc_82BF62EC:
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,188
	ctx.r4.s64 = ctx.r30.s64 + 188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF6300;
	sub_82C16570(ctx, base);
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF6314;
	sub_82C16570(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r30,196
	ctx.r4.s64 = ctx.r30.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF6328;
	sub_82C16570(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf5658
	ctx.lr = 0x82BF6338;
	sub_82BF5658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF6340;
	sub_82C16F48(ctx, base);
loc_82BF6340:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6348"))) PPC_WEAK_FUNC(sub_82BF6348);
PPC_FUNC_IMPL(__imp__sub_82BF6348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,104(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f0,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// lfs f0,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f0,128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// lfs f0,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lfs f0,136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// lfs f0,140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lfs f0,144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lfs f0,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lfs f0,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f0,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lfs f0,164(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lfs f0,168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f0,172(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lwz r11,176(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// lfs f0,180(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lfs f0,184(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lfs f0,188(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// b 0x82bf5838
	sub_82BF5838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF63F0"))) PPC_WEAK_FUNC(sub_82BF63F0);
PPC_FUNC_IMPL(__imp__sub_82BF63F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lfs f0,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 120, temp.u32);
	// lfs f0,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 128, temp.u32);
	// lfs f0,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 132, temp.u32);
	// lfs f0,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 136, temp.u32);
	// lfs f0,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 140, temp.u32);
	// lfs f0,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 144, temp.u32);
	// lfs f0,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 152, temp.u32);
	// lfs f0,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 156, temp.u32);
	// lfs f0,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 160, temp.u32);
	// lfs f0,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 164, temp.u32);
	// lfs f0,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 168, temp.u32);
	// lfs f0,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 172, temp.u32);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stw r11,176(r4)
	PPC_STORE_U32(ctx.r4.u32 + 176, ctx.r11.u32);
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 180, temp.u32);
	// lfs f0,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 184, temp.u32);
	// lfs f0,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 188, temp.u32);
	// b 0x82bf58e0
	sub_82BF58E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6498"))) PPC_WEAK_FUNC(sub_82BF6498);
PPC_FUNC_IMPL(__imp__sub_82BF6498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF64A0"))) PPC_WEAK_FUNC(sub_82BF64A0);
PPC_FUNC_IMPL(__imp__sub_82BF64A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF64A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82c16148
	ctx.lr = 0x82BF64C4;
	sub_82C16148(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF64D4;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf6644
	if (ctx.cr6.eq) goto loc_82BF6644;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,-17580
	ctx.r30.s64 = ctx.r11.s64 + -17580;
	// addi r4,r28,108
	ctx.r4.s64 = ctx.r28.s64 + 108;
	// addi r5,r30,11572
	ctx.r5.s64 = ctx.r30.s64 + 11572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF64FC;
	sub_82C170A0(ctx, base);
	// addi r5,r30,11588
	ctx.r5.s64 = ctx.r30.s64 + 11588;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,112
	ctx.r4.s64 = ctx.r28.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF6510;
	sub_82C16570(ctx, base);
	// addi r5,r30,11600
	ctx.r5.s64 = ctx.r30.s64 + 11600;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF6524;
	sub_82C16570(ctx, base);
	// addi r5,r30,11612
	ctx.r5.s64 = ctx.r30.s64 + 11612;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,120
	ctx.r4.s64 = ctx.r28.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF6538;
	sub_82C16570(ctx, base);
	// addi r5,r30,11624
	ctx.r5.s64 = ctx.r30.s64 + 11624;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,124
	ctx.r4.s64 = ctx.r28.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16420
	ctx.lr = 0x82BF654C;
	sub_82C16420(ctx, base);
	// addi r5,r30,11648
	ctx.r5.s64 = ctx.r30.s64 + 11648;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,126
	ctx.r4.s64 = ctx.r28.s64 + 126;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16420
	ctx.lr = 0x82BF6560;
	sub_82C16420(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf658c
	if (ctx.cr6.eq) goto loc_82BF658C;
	// addi r5,r30,11664
	ctx.r5.s64 = ctx.r30.s64 + 11664;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF6580;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r11.u32);
	// b 0x82bf662c
	goto loc_82BF662C;
loc_82BF658C:
	// addi r5,r30,11676
	ctx.r5.s64 = ctx.r30.s64 + 11676;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x82c18020
	ctx.lr = 0x82BF6598;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf662c
	if (ctx.cr6.eq) goto loc_82BF662C;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r25.u32);
loc_82BF65B4:
	// slw r27,r24,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r26.u8 & 0x3F));
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82bf65d0
	if (ctx.cr6.eq) goto loc_82BF65D0;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x82bf6624
	if (!ctx.cr6.eq) goto loc_82BF6624;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x82bf65d4
	goto loc_82BF65D4;
loc_82BF65D0:
	// addi r29,r30,-36
	ctx.r29.s64 = ctx.r30.s64 + -36;
loc_82BF65D4:
	// addi r4,r30,11688
	ctx.r4.s64 = ctx.r30.s64 + 11688;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF65E0;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf6618
	if (!ctx.cr6.eq) goto loc_82BF6618;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF6600;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf6618
	if (ctx.cr6.eq) goto loc_82BF6618;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stw r11,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r11.u32);
loc_82BF6618:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bf65b4
	if (ctx.cr6.lt) goto loc_82BF65B4;
loc_82BF6624:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF662C;
	sub_82C16F48(ctx, base);
loc_82BF662C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bf5658
	ctx.lr = 0x82BF663C;
	sub_82BF5658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF6644;
	sub_82C16F48(ctx, base);
loc_82BF6644:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6650"))) PPC_WEAK_FUNC(sub_82BF6650);
PPC_FUNC_IMPL(__imp__sub_82BF6650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF6658;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f0,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f0,116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lhz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 120);
	// sth r11,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r11.u16);
	// lhz r11,122(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 122);
	// sth r11,126(r31)
	PPC_STORE_U16(ctx.r31.u32 + 126, ctx.r11.u16);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82c14588
	ctx.lr = 0x82BF66A8;
	sub_82C14588(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf5838
	ctx.lr = 0x82BF66B8;
	sub_82BF5838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF66C0"))) PPC_WEAK_FUNC(sub_82BF66C0);
PPC_FUNC_IMPL(__imp__sub_82BF66C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF66C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// lfs f0,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// lfs f0,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// lhz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// sth r11,120(r30)
	PPC_STORE_U16(ctx.r30.u32 + 120, ctx.r11.u16);
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// sth r11,122(r30)
	PPC_STORE_U16(ctx.r30.u32 + 122, ctx.r11.u16);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// bl 0x82c145b8
	ctx.lr = 0x82BF6714;
	sub_82C145B8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf58e0
	ctx.lr = 0x82BF6724;
	sub_82BF58E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6730"))) PPC_WEAK_FUNC(sub_82BF6730);
PPC_FUNC_IMPL(__imp__sub_82BF6730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r7,68(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82BF6758:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82bf6758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BF6758;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stfs f0,36(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r9,204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 204, ctx.r9.u32);
	// lhz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// sth r11,208(r10)
	PPC_STORE_U16(ctx.r10.u32 + 208, ctx.r11.u16);
	// b 0x82c158c0
	sub_82C158C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF67A8"))) PPC_WEAK_FUNC(sub_82BF67A8);
PPC_FUNC_IMPL(__imp__sub_82BF67A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r9.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82BF67CC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82bf67cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BF67CC;
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f0,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f0,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// stw r10,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r10.u32);
	// lhz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 208);
	// sth r11,60(r4)
	PPC_STORE_U16(ctx.r4.u32 + 60, ctx.r11.u16);
	// b 0x82c14320
	sub_82C14320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6818"))) PPC_WEAK_FUNC(sub_82BF6818);
PPC_FUNC_IMPL(__imp__sub_82BF6818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF6840"))) PPC_WEAK_FUNC(sub_82BF6840);
PPC_FUNC_IMPL(__imp__sub_82BF6840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF6848"))) PPC_WEAK_FUNC(sub_82BF6848);
PPC_FUNC_IMPL(__imp__sub_82BF6848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF6850;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF6874;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-5628
	ctx.r28.s64 = ctx.r11.s64 + -5628;
	// beq cr6,0x82bf68ac
	if (ctx.cr6.eq) goto loc_82BF68AC;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf68ac
	if (!ctx.cr6.eq) goto loc_82BF68AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF6898;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,-20
	ctx.r5.s64 = ctx.r28.s64 + -20;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF68AC;
	sub_82C186D0(ctx, base);
loc_82BF68AC:
	// lis r30,-31988
	ctx.r30.s64 = -2096365568;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// lfs f31,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf68fc
	if (!ctx.cr6.eq) goto loc_82BF68FC;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82bf68ec
	if (!ctx.cr6.eq) goto loc_82BF68EC;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82bf68ec
	if (!ctx.cr6.eq) goto loc_82BF68EC;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bf68f0
	if (ctx.cr6.eq) goto loc_82BF68F0;
loc_82BF68EC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82BF68F0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf6914
	if (ctx.cr6.eq) goto loc_82BF6914;
loc_82BF68FC:
	// addi r5,r28,-16
	ctx.r5.s64 = ctx.r28.s64 + -16;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BF6910;
	sub_82C18B38(ctx, base);
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
loc_82BF6914:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf692c
	if (!ctx.cr6.eq) goto loc_82BF692C;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bf6940
	if (ctx.cr6.eq) goto loc_82BF6940;
loc_82BF692C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF6940;
	sub_82C18620(ctx, base);
loc_82BF6940:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF6948;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6958"))) PPC_WEAK_FUNC(sub_82BF6958);
PPC_FUNC_IMPL(__imp__sub_82BF6958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF6960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF6978;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf69bc
	if (ctx.cr6.eq) goto loc_82BF69BC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,-5604
	ctx.r30.s64 = ctx.r11.s64 + -5604;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16618
	ctx.lr = 0x82BF69A0;
	sub_82C16618(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF69B4;
	sub_82C16570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF69BC;
	sub_82C16F48(ctx, base);
loc_82BF69BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF69C8"))) PPC_WEAK_FUNC(sub_82BF69C8);
PPC_FUNC_IMPL(__imp__sub_82BF69C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f0,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f0,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f0,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f0,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f0,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f0,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f0,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f0,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f0,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// b 0x82c14358
	sub_82C14358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6A90"))) PPC_WEAK_FUNC(sub_82BF6A90);
PPC_FUNC_IMPL(__imp__sub_82BF6A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r10.u32);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// lfs f0,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lfs f0,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lfs f0,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lfs f0,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r11,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r11.u32);
	// b 0x82c143a8
	sub_82C143A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6B50"))) PPC_WEAK_FUNC(sub_82BF6B50);
PPC_FUNC_IMPL(__imp__sub_82BF6B50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf69c8
	sub_82BF69C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6B58"))) PPC_WEAK_FUNC(sub_82BF6B58);
PPC_FUNC_IMPL(__imp__sub_82BF6B58) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf6a90
	sub_82BF6A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6B60"))) PPC_WEAK_FUNC(sub_82BF6B60);
PPC_FUNC_IMPL(__imp__sub_82BF6B60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF6B68"))) PPC_WEAK_FUNC(sub_82BF6B68);
PPC_FUNC_IMPL(__imp__sub_82BF6B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF6B70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF6B88;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf6bf4
	if (ctx.cr6.eq) goto loc_82BF6BF4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,-5080
	ctx.r30.s64 = ctx.r11.s64 + -5080;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-28
	ctx.r5.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF6BB0;
	sub_82C16570(ctx, base);
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF6BC4;
	sub_82C16570(ctx, base);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF6BD8;
	sub_82C16570(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF6BEC;
	sub_82C16570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF6BF4;
	sub_82C16F48(ctx, base);
loc_82BF6BF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6C00"))) PPC_WEAK_FUNC(sub_82BF6C00);
PPC_FUNC_IMPL(__imp__sub_82BF6C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF6C28"))) PPC_WEAK_FUNC(sub_82BF6C28);
PPC_FUNC_IMPL(__imp__sub_82BF6C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF6C50"))) PPC_WEAK_FUNC(sub_82BF6C50);
PPC_FUNC_IMPL(__imp__sub_82BF6C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF6C58"))) PPC_WEAK_FUNC(sub_82BF6C58);
PPC_FUNC_IMPL(__imp__sub_82BF6C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF6C60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF6C78;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf6cb4
	if (ctx.cr6.eq) goto loc_82BF6CB4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,-5052
	ctx.r30.s64 = ctx.r11.s64 + -5052;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// bl 0x82bf6b68
	ctx.lr = 0x82BF6C9C;
	sub_82BF6B68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x82bf6b68
	ctx.lr = 0x82BF6CAC;
	sub_82BF6B68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF6CB4;
	sub_82C16F48(ctx, base);
loc_82BF6CB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6CC0"))) PPC_WEAK_FUNC(sub_82BF6CC0);
PPC_FUNC_IMPL(__imp__sub_82BF6CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF6D08"))) PPC_WEAK_FUNC(sub_82BF6D08);
PPC_FUNC_IMPL(__imp__sub_82BF6D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF6D50"))) PPC_WEAK_FUNC(sub_82BF6D50);
PPC_FUNC_IMPL(__imp__sub_82BF6D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lfs f13,-18944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18944);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF6D80"))) PPC_WEAK_FUNC(sub_82BF6D80);
PPC_FUNC_IMPL(__imp__sub_82BF6D80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF6D88"))) PPC_WEAK_FUNC(sub_82BF6D88);
PPC_FUNC_IMPL(__imp__sub_82BF6D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF6D90;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF6DB4;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-16828
	ctx.r28.s64 = ctx.r11.s64 + -16828;
	// beq cr6,0x82bf6dec
	if (ctx.cr6.eq) goto loc_82BF6DEC;
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf6dec
	if (!ctx.cr6.eq) goto loc_82BF6DEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF6DD8;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,11784
	ctx.r5.s64 = ctx.r28.s64 + 11784;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF6DEC;
	sub_82C186D0(ctx, base);
loc_82BF6DEC:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// lis r24,-31988
	ctx.r24.s64 = -2096365568;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf6e14
	if (ctx.cr6.eq) goto loc_82BF6E14;
	// addi r5,r28,11788
	ctx.r5.s64 = ctx.r28.s64 + 11788;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF6E10;
	sub_82C18570(ctx, base);
	// b 0x82bf6ec8
	goto loc_82BF6EC8;
loc_82BF6E14:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf6e2c
	if (!ctx.cr6.eq) goto loc_82BF6E2C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf6ec8
	if (ctx.cr6.eq) goto loc_82BF6EC8;
loc_82BF6E2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF6E3C;
	sub_82C18020(ctx, base);
	// addi r5,r28,11800
	ctx.r5.s64 = ctx.r28.s64 + 11800;
	// addi r4,r28,11804
	ctx.r4.s64 = ctx.r28.s64 + 11804;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF6E50;
	sub_82C186D0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82BF6E58:
	// slw r31,r25,r27
	ctx.r31.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r27.u8 & 0x3F));
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82bf6e74
	if (ctx.cr6.eq) goto loc_82BF6E74;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82bf6ec0
	if (!ctx.cr6.eq) goto loc_82BF6EC0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82bf6e78
	goto loc_82BF6E78;
loc_82BF6E74:
	// addi r30,r28,-28
	ctx.r30.s64 = ctx.r28.s64 + -28;
loc_82BF6E78:
	// addi r4,r28,11816
	ctx.r4.s64 = ctx.r28.s64 + 11816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF6E84;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf6eb4
	if (!ctx.cr6.eq) goto loc_82BF6EB4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf6ea4
	if (ctx.cr6.eq) goto loc_82BF6EA4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BF6EA4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BF6EB4;
	sub_82C184C0(ctx, base);
loc_82BF6EB4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x82bf6e58
	if (ctx.cr6.lt) goto loc_82BF6E58;
loc_82BF6EC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF6EC8;
	sub_82C16F48(ctx, base);
loc_82BF6EC8:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f31,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82bf6ee8
	if (!ctx.cr6.eq) goto loc_82BF6EE8;
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bf6efc
	if (ctx.cr6.eq) goto loc_82BF6EFC;
loc_82BF6EE8:
	// addi r5,r28,11824
	ctx.r5.s64 = ctx.r28.s64 + 11824;
	// lfs f1,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF6EFC;
	sub_82C18620(ctx, base);
loc_82BF6EFC:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf6f14
	if (!ctx.cr6.eq) goto loc_82BF6F14;
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bf6f28
	if (ctx.cr6.eq) goto loc_82BF6F28;
loc_82BF6F14:
	// addi r5,r28,11832
	ctx.r5.s64 = ctx.r28.s64 + 11832;
	// lfs f1,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF6F28;
	sub_82C18620(ctx, base);
loc_82BF6F28:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf6f48
	if (!ctx.cr6.eq) goto loc_82BF6F48;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18944);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf6f5c
	if (ctx.cr6.eq) goto loc_82BF6F5C;
loc_82BF6F48:
	// addi r5,r28,11840
	ctx.r5.s64 = ctx.r28.s64 + 11840;
	// lfs f1,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF6F5C;
	sub_82C18620(ctx, base);
loc_82BF6F5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF6F64;
	sub_82C16F48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF6F70"))) PPC_WEAK_FUNC(sub_82BF6F70);
PPC_FUNC_IMPL(__imp__sub_82BF6F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF6F78;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF6F90;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf70b4
	if (ctx.cr6.eq) goto loc_82BF70B4;
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r30,r11,-16828
	ctx.r30.s64 = ctx.r11.s64 + -16828;
	// beq cr6,0x82bf6fd0
	if (ctx.cr6.eq) goto loc_82BF6FD0;
	// addi r5,r30,11852
	ctx.r5.s64 = ctx.r30.s64 + 11852;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF6FC4;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82bf7070
	goto loc_82BF7070;
loc_82BF6FD0:
	// addi r5,r30,11864
	ctx.r5.s64 = ctx.r30.s64 + 11864;
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x82c18020
	ctx.lr = 0x82BF6FDC;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf7070
	if (ctx.cr6.eq) goto loc_82BF7070;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_82BF6FF8:
	// slw r28,r24,r26
	ctx.r28.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r26.u8 & 0x3F));
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82bf7014
	if (ctx.cr6.eq) goto loc_82BF7014;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x82bf7068
	if (!ctx.cr6.eq) goto loc_82BF7068;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x82bf7018
	goto loc_82BF7018;
loc_82BF7014:
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
loc_82BF7018:
	// addi r4,r30,11876
	ctx.r4.s64 = ctx.r30.s64 + 11876;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF7024;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf705c
	if (!ctx.cr6.eq) goto loc_82BF705C;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF7044;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf705c
	if (ctx.cr6.eq) goto loc_82BF705C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82BF705C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bf6ff8
	if (ctx.cr6.lt) goto loc_82BF6FF8;
loc_82BF7068:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF7070;
	sub_82C16F48(ctx, base);
loc_82BF7070:
	// addi r5,r30,11884
	ctx.r5.s64 = ctx.r30.s64 + 11884;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF7084;
	sub_82C16570(ctx, base);
	// addi r5,r30,11892
	ctx.r5.s64 = ctx.r30.s64 + 11892;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF7098;
	sub_82C16570(ctx, base);
	// addi r5,r30,11900
	ctx.r5.s64 = ctx.r30.s64 + 11900;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,12
	ctx.r4.s64 = ctx.r27.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF70AC;
	sub_82C16570(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF70B4;
	sub_82C16F48(ctx, base);
loc_82BF70B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF70C0"))) PPC_WEAK_FUNC(sub_82BF70C0);
PPC_FUNC_IMPL(__imp__sub_82BF70C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF70E8"))) PPC_WEAK_FUNC(sub_82BF70E8);
PPC_FUNC_IMPL(__imp__sub_82BF70E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF7110"))) PPC_WEAK_FUNC(sub_82BF7110);
PPC_FUNC_IMPL(__imp__sub_82BF7110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,108(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// addi r11,r4,180
	ctx.r11.s64 = ctx.r4.s64 + 180;
	// addi r10,r3,232
	ctx.r10.s64 = ctx.r3.s64 + 232;
	// stw r9,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r9.u32);
	// lwz r9,112(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r9,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// lwz r9,116(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r9,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r9.u32);
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r9,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r9.u32);
	// lwz r9,124(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r9,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r9.u32);
	// lwz r9,128(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r9,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r9.u32);
	// lfs f0,132(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f0,136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f0,140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lfs f0,144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lfs f0,148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lfs f0,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// lfs f0,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lfs f0,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lfs f0,164(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lfs f0,168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// lfs f0,172(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// lfs f0,176(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r11,212(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// lfs f0,216(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// lfs f0,220(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// lfs f0,224(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// lwz r11,228(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// lfs f0,232(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// lfs f0,236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// lfs f0,240(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,308(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// lwz r11,244(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// lfs f0,248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,320(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// lfs f0,252(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// lfs f0,256(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,328(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// lwz r11,260(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// lfs f0,264(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,340(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// lfs f0,268(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,344(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 344, temp.u32);
	// lfs f0,272(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// lwz r11,276(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 276);
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r11.u32);
	// lfs f0,280(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,360(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 360, temp.u32);
	// lfs f0,284(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,364(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// lfs f0,288(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// lwz r11,292(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 292);
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r11.u32);
	// lfs f0,296(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,380(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 380, temp.u32);
	// lfs f0,300(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,384(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 384, temp.u32);
	// lfs f0,304(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,388(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 388, temp.u32);
	// lfs f0,308(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// lfs f0,312(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,400(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// lfs f0,316(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,404(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// lfs f0,320(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,408(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 408, temp.u32);
	// lfs f0,324(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,412(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// lfs f0,328(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,416(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// lfs f0,332(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// lfs f0,336(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// lfs f0,340(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,428(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 428, temp.u32);
	// lfs f0,344(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,432(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 432, temp.u32);
	// lfs f0,348(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,436(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 436, temp.u32);
	// lfs f0,352(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,440(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 440, temp.u32);
	// lfs f0,356(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,444(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 444, temp.u32);
	// lwz r11,360(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 360);
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// lfs f0,364(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,452(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 452, temp.u32);
	// lfs f0,368(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,456(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// lfs f0,372(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,460(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// lwz r11,376(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 376);
	// stw r11,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// b 0x82bf69c8
	sub_82BF69C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7340"))) PPC_WEAK_FUNC(sub_82BF7340);
PPC_FUNC_IMPL(__imp__sub_82BF7340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addi r11,r3,232
	ctx.r11.s64 = ctx.r3.s64 + 232;
	// addi r10,r4,180
	ctx.r10.s64 = ctx.r4.s64 + 180;
	// stw r9,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r9.u32);
	// lwz r9,152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r9,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r9.u32);
	// lwz r9,156(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// stw r9,116(r4)
	PPC_STORE_U32(ctx.r4.u32 + 116, ctx.r9.u32);
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stw r9,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, ctx.r9.u32);
	// lwz r9,164(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// stw r9,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r9.u32);
	// lwz r9,168(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// stw r9,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r9.u32);
	// lfs f0,172(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 132, temp.u32);
	// lfs f0,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 136, temp.u32);
	// lfs f0,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 140, temp.u32);
	// lfs f0,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 144, temp.u32);
	// lfs f0,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 148, temp.u32);
	// lfs f0,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 152, temp.u32);
	// lfs f0,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 156, temp.u32);
	// lfs f0,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 160, temp.u32);
	// lfs f0,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 164, temp.u32);
	// lfs f0,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 168, temp.u32);
	// lfs f0,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 172, temp.u32);
	// lfs f0,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 176, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// stw r11,212(r4)
	PPC_STORE_U32(ctx.r4.u32 + 212, ctx.r11.u32);
	// lfs f0,280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 216, temp.u32);
	// lfs f0,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 220, temp.u32);
	// lfs f0,288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 224, temp.u32);
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// stw r11,228(r4)
	PPC_STORE_U32(ctx.r4.u32 + 228, ctx.r11.u32);
	// lfs f0,300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 232, temp.u32);
	// lfs f0,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 236, temp.u32);
	// lfs f0,308(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 240, temp.u32);
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// stw r11,244(r4)
	PPC_STORE_U32(ctx.r4.u32 + 244, ctx.r11.u32);
	// lfs f0,320(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 248, temp.u32);
	// lfs f0,324(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 252, temp.u32);
	// lfs f0,328(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 256, temp.u32);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// stw r11,260(r4)
	PPC_STORE_U32(ctx.r4.u32 + 260, ctx.r11.u32);
	// lfs f0,340(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,264(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 264, temp.u32);
	// lfs f0,344(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,268(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 268, temp.u32);
	// lfs f0,348(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 272, temp.u32);
	// lwz r11,356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// stw r11,276(r4)
	PPC_STORE_U32(ctx.r4.u32 + 276, ctx.r11.u32);
	// lfs f0,360(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 280, temp.u32);
	// lfs f0,364(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,284(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 284, temp.u32);
	// lfs f0,368(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 288, temp.u32);
	// lwz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// stw r11,292(r4)
	PPC_STORE_U32(ctx.r4.u32 + 292, ctx.r11.u32);
	// lfs f0,380(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,296(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 296, temp.u32);
	// lfs f0,384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,300(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 300, temp.u32);
	// lfs f0,388(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,304(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 304, temp.u32);
	// lfs f0,396(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,308(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 308, temp.u32);
	// lfs f0,400(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,312(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 312, temp.u32);
	// lfs f0,404(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,316(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 316, temp.u32);
	// lfs f0,408(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,320(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 320, temp.u32);
	// lfs f0,412(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 324, temp.u32);
	// lfs f0,416(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,328(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 328, temp.u32);
	// lfs f0,420(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,332(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 332, temp.u32);
	// lfs f0,424(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,336(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 336, temp.u32);
	// lfs f0,428(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,340(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 340, temp.u32);
	// lfs f0,432(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,344(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 344, temp.u32);
	// lfs f0,436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 348, temp.u32);
	// lfs f0,440(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,352(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 352, temp.u32);
	// lfs f0,444(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,356(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 356, temp.u32);
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// stw r11,360(r4)
	PPC_STORE_U32(ctx.r4.u32 + 360, ctx.r11.u32);
	// lfs f0,452(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,364(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 364, temp.u32);
	// lfs f0,456(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 368, temp.u32);
	// lfs f0,460(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,372(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 372, temp.u32);
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// stw r11,376(r4)
	PPC_STORE_U32(ctx.r4.u32 + 376, ctx.r11.u32);
	// b 0x82bf6a90
	sub_82BF6A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7570"))) PPC_WEAK_FUNC(sub_82BF7570);
PPC_FUNC_IMPL(__imp__sub_82BF7570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lfs f0,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lfs f0,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f0,124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// b 0x82bf69c8
	sub_82BF69C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF75A8"))) PPC_WEAK_FUNC(sub_82BF75A8);
PPC_FUNC_IMPL(__imp__sub_82BF75A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f0,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lfs f0,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 120, temp.u32);
	// lfs f0,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 124, temp.u32);
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// stw r11,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r11.u32);
	// b 0x82bf6a90
	sub_82BF6A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF75E0"))) PPC_WEAK_FUNC(sub_82BF75E0);
PPC_FUNC_IMPL(__imp__sub_82BF75E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf69c8
	sub_82BF69C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF75E8"))) PPC_WEAK_FUNC(sub_82BF75E8);
PPC_FUNC_IMPL(__imp__sub_82BF75E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf6a90
	sub_82BF6A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF75F0"))) PPC_WEAK_FUNC(sub_82BF75F0);
PPC_FUNC_IMPL(__imp__sub_82BF75F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf69c8
	sub_82BF69C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF75F8"))) PPC_WEAK_FUNC(sub_82BF75F8);
PPC_FUNC_IMPL(__imp__sub_82BF75F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf6a90
	sub_82BF6A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7600"))) PPC_WEAK_FUNC(sub_82BF7600);
PPC_FUNC_IMPL(__imp__sub_82BF7600) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf69c8
	sub_82BF69C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7608"))) PPC_WEAK_FUNC(sub_82BF7608);
PPC_FUNC_IMPL(__imp__sub_82BF7608) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf6a90
	sub_82BF6A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7610"))) PPC_WEAK_FUNC(sub_82BF7610);
PPC_FUNC_IMPL(__imp__sub_82BF7610) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf69c8
	sub_82BF69C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7618"))) PPC_WEAK_FUNC(sub_82BF7618);
PPC_FUNC_IMPL(__imp__sub_82BF7618) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf6a90
	sub_82BF6A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7620"))) PPC_WEAK_FUNC(sub_82BF7620);
PPC_FUNC_IMPL(__imp__sub_82BF7620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF7628"))) PPC_WEAK_FUNC(sub_82BF7628);
PPC_FUNC_IMPL(__imp__sub_82BF7628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF7630;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF7648;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf76a0
	if (ctx.cr6.eq) goto loc_82BF76A0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,-3860
	ctx.r30.s64 = ctx.r11.s64 + -3860;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF7670;
	sub_82C16570(ctx, base);
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF7684;
	sub_82C16570(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF7698;
	sub_82C16570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF76A0;
	sub_82C16F48(ctx, base);
loc_82BF76A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF76A8"))) PPC_WEAK_FUNC(sub_82BF76A8);
PPC_FUNC_IMPL(__imp__sub_82BF76A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF76C8"))) PPC_WEAK_FUNC(sub_82BF76C8);
PPC_FUNC_IMPL(__imp__sub_82BF76C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF76E8"))) PPC_WEAK_FUNC(sub_82BF76E8);
PPC_FUNC_IMPL(__imp__sub_82BF76E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF76F0"))) PPC_WEAK_FUNC(sub_82BF76F0);
PPC_FUNC_IMPL(__imp__sub_82BF76F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF76F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF7710;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf774c
	if (ctx.cr6.eq) goto loc_82BF774C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,-3828
	ctx.r30.s64 = ctx.r11.s64 + -3828;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// bl 0x82bf7628
	ctx.lr = 0x82BF7734;
	sub_82BF7628(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x82bf7628
	ctx.lr = 0x82BF7744;
	sub_82BF7628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF774C;
	sub_82C16F48(ctx, base);
loc_82BF774C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7758"))) PPC_WEAK_FUNC(sub_82BF7758);
PPC_FUNC_IMPL(__imp__sub_82BF7758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF7790"))) PPC_WEAK_FUNC(sub_82BF7790);
PPC_FUNC_IMPL(__imp__sub_82BF7790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF77C8"))) PPC_WEAK_FUNC(sub_82BF77C8);
PPC_FUNC_IMPL(__imp__sub_82BF77C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF77D0"))) PPC_WEAK_FUNC(sub_82BF77D0);
PPC_FUNC_IMPL(__imp__sub_82BF77D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF77D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF77F0;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf7848
	if (ctx.cr6.eq) goto loc_82BF7848;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,-3756
	ctx.r30.s64 = ctx.r11.s64 + -3756;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF7818;
	sub_82C16570(ctx, base);
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF782C;
	sub_82C16570(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF7840;
	sub_82C16378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF7848;
	sub_82C16F48(ctx, base);
loc_82BF7848:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7850"))) PPC_WEAK_FUNC(sub_82BF7850);
PPC_FUNC_IMPL(__imp__sub_82BF7850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF7870"))) PPC_WEAK_FUNC(sub_82BF7870);
PPC_FUNC_IMPL(__imp__sub_82BF7870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF7890"))) PPC_WEAK_FUNC(sub_82BF7890);
PPC_FUNC_IMPL(__imp__sub_82BF7890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 + 108;
	// addi r10,r3,148
	ctx.r10.s64 = ctx.r3.s64 + 148;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lfs f0,136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// lfs f0,144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lfs f0,148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lfs f0,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lfs f0,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// lfs f0,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// lwz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// lwz r11,168(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// b 0x82bf69c8
	sub_82BF69C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7920"))) PPC_WEAK_FUNC(sub_82BF7920);
PPC_FUNC_IMPL(__imp__sub_82BF7920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,148
	ctx.r11.s64 = ctx.r3.s64 + 148;
	// addi r10,r4,108
	ctx.r10.s64 = ctx.r4.s64 + 108;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 132, temp.u32);
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 136, temp.u32);
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// stw r11,140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 140, ctx.r11.u32);
	// lfs f0,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 144, temp.u32);
	// lfs f0,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 148, temp.u32);
	// lfs f0,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 152, temp.u32);
	// lfs f0,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 156, temp.u32);
	// lfs f0,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 160, temp.u32);
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// stw r11,164(r4)
	PPC_STORE_U32(ctx.r4.u32 + 164, ctx.r11.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// stw r11,168(r4)
	PPC_STORE_U32(ctx.r4.u32 + 168, ctx.r11.u32);
	// b 0x82bf6a90
	sub_82BF6A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF79B0"))) PPC_WEAK_FUNC(sub_82BF79B0);
PPC_FUNC_IMPL(__imp__sub_82BF79B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,124
	ctx.r11.s64 = ctx.r4.s64 + 124;
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// addi r10,r3,164
	ctx.r10.s64 = ctx.r3.s64 + 164;
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lfs f0,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lfs f0,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lfs f0,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lfs f0,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lfs f0,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// lfs f0,164(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// lfs f0,168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lfs f0,172(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// lfs f0,176(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lfs f0,180(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lfs f0,184(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// lfs f0,188(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// lfs f0,192(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// lwz r11,196(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// lwz r11,200(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// b 0x82bf69c8
	sub_82BF69C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7A80"))) PPC_WEAK_FUNC(sub_82BF7A80);
PPC_FUNC_IMPL(__imp__sub_82BF7A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,164
	ctx.r11.s64 = ctx.r3.s64 + 164;
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// addi r10,r4,124
	ctx.r10.s64 = ctx.r4.s64 + 124;
	// lfs f0,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lfs f0,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 120, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 148, temp.u32);
	// lfs f0,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 152, temp.u32);
	// lfs f0,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 156, temp.u32);
	// lfs f0,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 160, temp.u32);
	// lfs f0,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 164, temp.u32);
	// lfs f0,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 168, temp.u32);
	// lfs f0,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 172, temp.u32);
	// lfs f0,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 176, temp.u32);
	// lfs f0,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 180, temp.u32);
	// lfs f0,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 184, temp.u32);
	// lfs f0,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 188, temp.u32);
	// lfs f0,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 192, temp.u32);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// stw r11,196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 196, ctx.r11.u32);
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// stw r11,200(r4)
	PPC_STORE_U32(ctx.r4.u32 + 200, ctx.r11.u32);
	// b 0x82bf6a90
	sub_82BF6A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7B50"))) PPC_WEAK_FUNC(sub_82BF7B50);
PPC_FUNC_IMPL(__imp__sub_82BF7B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lfs f0,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lfs f0,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lfs f0,120(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f0,124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lfs f0,128(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lfs f0,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f0,136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f0,140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lwz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// lfs f0,148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lfs f0,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lwz r11,156(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// b 0x82bf69c8
	sub_82BF69C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7BC0"))) PPC_WEAK_FUNC(sub_82BF7BC0);
PPC_FUNC_IMPL(__imp__sub_82BF7BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f0,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lfs f0,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 120, temp.u32);
	// lfs f0,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 124, temp.u32);
	// lfs f0,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 128, temp.u32);
	// lfs f0,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 132, temp.u32);
	// lfs f0,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 136, temp.u32);
	// lfs f0,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 140, temp.u32);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stw r11,144(r4)
	PPC_STORE_U32(ctx.r4.u32 + 144, ctx.r11.u32);
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 148, temp.u32);
	// lfs f0,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 152, temp.u32);
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// stw r11,156(r4)
	PPC_STORE_U32(ctx.r4.u32 + 156, ctx.r11.u32);
	// b 0x82bf6a90
	sub_82BF6A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7C30"))) PPC_WEAK_FUNC(sub_82BF7C30);
PPC_FUNC_IMPL(__imp__sub_82BF7C30) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF7C60"))) PPC_WEAK_FUNC(sub_82BF7C60);
PPC_FUNC_IMPL(__imp__sub_82BF7C60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF7C68"))) PPC_WEAK_FUNC(sub_82BF7C68);
PPC_FUNC_IMPL(__imp__sub_82BF7C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF7C70;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,66
	ctx.r4.s64 = 66;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF7C8C;
	sub_82C18020(ctx, base);
	// lis r24,-31988
	ctx.r24.s64 = -2096365568;
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r26,r11,-2936
	ctx.r26.s64 = ctx.r11.s64 + -2936;
	// bne cr6,0x82bf7cb0
	if (!ctx.cr6.eq) goto loc_82BF7CB0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf7cc4
	if (ctx.cr6.eq) goto loc_82BF7CC4;
loc_82BF7CB0:
	// addi r5,r26,-96
	ctx.r5.s64 = ctx.r26.s64 + -96;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF7CC4;
	sub_82C186D0(ctx, base);
loc_82BF7CC4:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf7cdc
	if (!ctx.cr6.eq) goto loc_82BF7CDC;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf7cf0
	if (ctx.cr6.eq) goto loc_82BF7CF0;
loc_82BF7CDC:
	// addi r5,r26,-92
	ctx.r5.s64 = ctx.r26.s64 + -92;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF7CF0;
	sub_82C186D0(ctx, base);
loc_82BF7CF0:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf7d08
	if (!ctx.cr6.eq) goto loc_82BF7D08;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf7d1c
	if (ctx.cr6.eq) goto loc_82BF7D1C;
loc_82BF7D08:
	// addi r5,r26,-76
	ctx.r5.s64 = ctx.r26.s64 + -76;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BF7D1C;
	sub_82C184C0(ctx, base);
loc_82BF7D1C:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf7d40
	if (ctx.cr6.eq) goto loc_82BF7D40;
	// addi r5,r26,-60
	ctx.r5.s64 = ctx.r26.s64 + -60;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF7D3C;
	sub_82C18570(ctx, base);
	// b 0x82bf7de8
	goto loc_82BF7DE8;
loc_82BF7D40:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf7d58
	if (!ctx.cr6.eq) goto loc_82BF7D58;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82bf7de8
	if (ctx.cr6.eq) goto loc_82BF7DE8;
loc_82BF7D58:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF7D68;
	sub_82C18020(ctx, base);
	// addi r5,r26,-52
	ctx.r5.s64 = ctx.r26.s64 + -52;
	// addi r4,r26,-48
	ctx.r4.s64 = ctx.r26.s64 + -48;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF7D7C;
	sub_82C186D0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82BF7D84:
	// slw r31,r25,r27
	ctx.r31.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r27.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf0f48
	ctx.lr = 0x82BF7D90;
	sub_82BF0F48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bf7de0
	if (ctx.cr6.eq) goto loc_82BF7DE0;
	// addi r4,r26,-40
	ctx.r4.s64 = ctx.r26.s64 + -40;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF7DA4;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf7dd4
	if (!ctx.cr6.eq) goto loc_82BF7DD4;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf7dc4
	if (ctx.cr6.eq) goto loc_82BF7DC4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BF7DC4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BF7DD4;
	sub_82C184C0(ctx, base);
loc_82BF7DD4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x82bf7d84
	if (ctx.cr6.lt) goto loc_82BF7D84;
loc_82BF7DE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF7DE8;
	sub_82C16F48(ctx, base);
loc_82BF7DE8:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf7e00
	if (!ctx.cr6.eq) goto loc_82BF7E00;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf7e14
	if (ctx.cr6.eq) goto loc_82BF7E14;
loc_82BF7E00:
	// addi r5,r26,-32
	ctx.r5.s64 = ctx.r26.s64 + -32;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF7E14;
	sub_82C186D0(ctx, base);
loc_82BF7E14:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf7e2c
	if (!ctx.cr6.eq) goto loc_82BF7E2C;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf7e40
	if (ctx.cr6.eq) goto loc_82BF7E40;
loc_82BF7E2C:
	// addi r5,r26,-24
	ctx.r5.s64 = ctx.r26.s64 + -24;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF7E40;
	sub_82C18570(ctx, base);
loc_82BF7E40:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf7e58
	if (!ctx.cr6.eq) goto loc_82BF7E58;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf7e6c
	if (ctx.cr6.eq) goto loc_82BF7E6C;
loc_82BF7E58:
	// addi r5,r26,-8
	ctx.r5.s64 = ctx.r26.s64 + -8;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF7E6C;
	sub_82C186D0(ctx, base);
loc_82BF7E6C:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf7e84
	if (!ctx.cr6.eq) goto loc_82BF7E84;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf7e98
	if (ctx.cr6.eq) goto loc_82BF7E98;
loc_82BF7E84:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF7E98;
	sub_82C18570(ctx, base);
loc_82BF7E98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF7EA0;
	sub_82C16F48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF7EA8"))) PPC_WEAK_FUNC(sub_82BF7EA8);
PPC_FUNC_IMPL(__imp__sub_82BF7EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF7EB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,66
	ctx.r4.s64 = 66;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF7EC8;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf8030
	if (ctx.cr6.eq) goto loc_82BF8030;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r28,r11,-2828
	ctx.r28.s64 = ctx.r11.s64 + -2828;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r28,-92
	ctx.r5.s64 = ctx.r28.s64 + -92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF7EF0;
	sub_82C170A0(ctx, base);
	// addi r5,r28,-88
	ctx.r5.s64 = ctx.r28.s64 + -88;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF7F04;
	sub_82C170A0(ctx, base);
	// addi r5,r28,-72
	ctx.r5.s64 = ctx.r28.s64 + -72;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF7F18;
	sub_82C16378(ctx, base);
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf7f44
	if (ctx.cr6.eq) goto loc_82BF7F44;
	// addi r5,r28,-56
	ctx.r5.s64 = ctx.r28.s64 + -56;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c164c8
	ctx.lr = 0x82BF7F38;
	sub_82C164C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// b 0x82bf7fd8
	goto loc_82BF7FD8;
loc_82BF7F44:
	// addi r5,r28,-48
	ctx.r5.s64 = ctx.r28.s64 + -48;
	// li r4,65
	ctx.r4.s64 = 65;
	// bl 0x82c18020
	ctx.lr = 0x82BF7F50;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf7fd8
	if (ctx.cr6.eq) goto loc_82BF7FD8;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r24.u32);
loc_82BF7F6C:
	// slw r27,r25,r26
	ctx.r27.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bf0f48
	ctx.lr = 0x82BF7F78;
	sub_82BF0F48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bf7fd0
	if (ctx.cr6.eq) goto loc_82BF7FD0;
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF7F8C;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf7fc4
	if (!ctx.cr6.eq) goto loc_82BF7FC4;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF7FAC;
	sub_82C16378(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf7fc4
	if (ctx.cr6.eq) goto loc_82BF7FC4;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_82BF7FC4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bf7f6c
	if (ctx.cr6.lt) goto loc_82BF7F6C;
loc_82BF7FD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF7FD8;
	sub_82C16F48(ctx, base);
loc_82BF7FD8:
	// addi r5,r28,-32
	ctx.r5.s64 = ctx.r28.s64 + -32;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF7FEC;
	sub_82C170A0(ctx, base);
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF8000;
	sub_82C164C8(ctx, base);
	// addi r5,r28,-8
	ctx.r5.s64 = ctx.r28.s64 + -8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF8014;
	sub_82C170A0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF8028;
	sub_82C164C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF8030;
	sub_82C16F48(ctx, base);
loc_82BF8030:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8038"))) PPC_WEAK_FUNC(sub_82BF8038);
PPC_FUNC_IMPL(__imp__sub_82BF8038) {
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

__attribute__((alias("__imp__sub_82BF8050"))) PPC_WEAK_FUNC(sub_82BF8050);
PPC_FUNC_IMPL(__imp__sub_82BF8050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF8058"))) PPC_WEAK_FUNC(sub_82BF8058);
PPC_FUNC_IMPL(__imp__sub_82BF8058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF8060;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF8080;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,-2768
	ctx.r30.s64 = ctx.r11.s64 + -2768;
	// beq cr6,0x82bf80b8
	if (ctx.cr6.eq) goto loc_82BF80B8;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf80b8
	if (!ctx.cr6.eq) goto loc_82BF80B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF80A4;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF80B8;
	sub_82C186D0(ctx, base);
loc_82BF80B8:
	// lis r29,-31988
	ctx.r29.s64 = -2096365568;
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf80d4
	if (!ctx.cr6.eq) goto loc_82BF80D4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf80ec
	if (ctx.cr6.eq) goto loc_82BF80EC;
loc_82BF80D4:
	// addi r5,r30,-40
	ctx.r5.s64 = ctx.r30.s64 + -40;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF80E8;
	sub_82C18570(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BF80EC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf8104
	if (!ctx.cr6.eq) goto loc_82BF8104;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf811c
	if (ctx.cr6.eq) goto loc_82BF811C;
loc_82BF8104:
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF8118;
	sub_82C18570(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BF811C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8134
	if (!ctx.cr6.eq) goto loc_82BF8134;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf8148
	if (ctx.cr6.eq) goto loc_82BF8148;
loc_82BF8134:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BF8148;
	sub_82C184C0(ctx, base);
loc_82BF8148:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF8150;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8158"))) PPC_WEAK_FUNC(sub_82BF8158);
PPC_FUNC_IMPL(__imp__sub_82BF8158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF8160;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF8178;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf81d0
	if (ctx.cr6.eq) goto loc_82BF81D0;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,-2720
	ctx.r30.s64 = ctx.r11.s64 + -2720;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-40
	ctx.r5.s64 = ctx.r30.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF81A0;
	sub_82C164C8(ctx, base);
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF81B4;
	sub_82C164C8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16378
	ctx.lr = 0x82BF81C8;
	sub_82C16378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF81D0;
	sub_82C16F48(ctx, base);
loc_82BF81D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF81D8"))) PPC_WEAK_FUNC(sub_82BF81D8);
PPC_FUNC_IMPL(__imp__sub_82BF81D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r7,240(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82BF8204:
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x82bf8204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BF8204;
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stfs f0,36(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lfs f0,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// lfs f0,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f0,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f0,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f0,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f0,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f0,80(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f0,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfs f0,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f0,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// lfs f0,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// lfs f0,104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// lfs f0,108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lfs f0,112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// lfs f0,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// lhz r9,188(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 188);
	// sth r9,132(r11)
	PPC_STORE_U16(ctx.r11.u32 + 132, ctx.r9.u16);
	// lwz r9,192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// stw r9,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r9.u32);
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// lwz r9,200(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// lwz r9,204(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// lwz r10,232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// b 0x82c15920
	sub_82C15920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF82F8"))) PPC_WEAK_FUNC(sub_82BF82F8);
PPC_FUNC_IMPL(__imp__sub_82BF82F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r8,240(r4)
	PPC_STORE_U32(ctx.r4.u32 + 240, ctx.r8.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82BF8320:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82bf8320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BF8320;
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stfs f0,36(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// lfs f0,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f0,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// lfs f0,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// lfs f0,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lfs f0,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lfs f0,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// lfs f0,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r10,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r10.u32);
	// lfs f0,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// lfs f0,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lfs f0,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f0,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lhz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 132);
	// sth r10,188(r4)
	PPC_STORE_U16(ctx.r4.u32 + 188, ctx.r10.u16);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// stw r10,192(r4)
	PPC_STORE_U32(ctx.r4.u32 + 192, ctx.r10.u32);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// stw r10,196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 196, ctx.r10.u32);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// stw r10,200(r4)
	PPC_STORE_U32(ctx.r4.u32 + 200, ctx.r10.u32);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r10,204(r4)
	PPC_STORE_U32(ctx.r4.u32 + 204, ctx.r10.u32);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r11,232(r4)
	PPC_STORE_U32(ctx.r4.u32 + 232, ctx.r11.u32);
	// b 0x82c143e8
	sub_82C143E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8410"))) PPC_WEAK_FUNC(sub_82BF8410);
PPC_FUNC_IMPL(__imp__sub_82BF8410) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF8418"))) PPC_WEAK_FUNC(sub_82BF8418);
PPC_FUNC_IMPL(__imp__sub_82BF8418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF8420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF8438;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf8580
	if (ctx.cr6.eq) goto loc_82BF8580;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,-1332
	ctx.r30.s64 = ctx.r11.s64 + -1332;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-256
	ctx.r5.s64 = ctx.r30.s64 + -256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF8460;
	sub_82C170A0(ctx, base);
	// addi r5,r30,-252
	ctx.r5.s64 = ctx.r30.s64 + -252;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF8474;
	sub_82C170A0(ctx, base);
	// addi r5,r30,-236
	ctx.r5.s64 = ctx.r30.s64 + -236;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF8488;
	sub_82C170A0(ctx, base);
	// addi r5,r30,-228
	ctx.r5.s64 = ctx.r30.s64 + -228;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c170a0
	ctx.lr = 0x82BF849C;
	sub_82C170A0(ctx, base);
	// addi r5,r30,-220
	ctx.r5.s64 = ctx.r30.s64 + -220;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16618
	ctx.lr = 0x82BF84B0;
	sub_82C16618(ctx, base);
	// addi r5,r30,-212
	ctx.r5.s64 = ctx.r30.s64 + -212;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16618
	ctx.lr = 0x82BF84C4;
	sub_82C16618(ctx, base);
	// addi r5,r30,-204
	ctx.r5.s64 = ctx.r30.s64 + -204;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF84D8;
	sub_82C16570(ctx, base);
	// addi r5,r30,-176
	ctx.r5.s64 = ctx.r30.s64 + -176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF84EC;
	sub_82C16570(ctx, base);
	// addi r5,r30,-156
	ctx.r5.s64 = ctx.r30.s64 + -156;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF8500;
	sub_82C16570(ctx, base);
	// addi r5,r30,-128
	ctx.r5.s64 = ctx.r30.s64 + -128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF8514;
	sub_82C16570(ctx, base);
	// addi r5,r30,-104
	ctx.r5.s64 = ctx.r30.s64 + -104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF8528;
	sub_82C16570(ctx, base);
	// addi r5,r30,-80
	ctx.r5.s64 = ctx.r30.s64 + -80;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF853C;
	sub_82C16570(ctx, base);
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF8550;
	sub_82C16570(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF8564;
	sub_82C16570(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,72
	ctx.r4.s64 = ctx.r29.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16570
	ctx.lr = 0x82BF8578;
	sub_82C16570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF8580;
	sub_82C16F48(ctx, base);
loc_82BF8580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8588"))) PPC_WEAK_FUNC(sub_82BF8588);
PPC_FUNC_IMPL(__imp__sub_82BF8588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f0,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f0,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f0,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// b 0x82c14428
	sub_82C14428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8618"))) PPC_WEAK_FUNC(sub_82BF8618);
PPC_FUNC_IMPL(__imp__sub_82BF8618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// b 0x82c14478
	sub_82C14478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF86A0"))) PPC_WEAK_FUNC(sub_82BF86A0);
PPC_FUNC_IMPL(__imp__sub_82BF86A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r9,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r9,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r9.u32);
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stw r9,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r9.u32);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stw r9,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r9.u32);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r9,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r9.u32);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// stw r9,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r9.u32);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// stw r9,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r9.u32);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r9.u32);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r9,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r9.u32);
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// stw r9,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r9.u32);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r9,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r9.u32);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// stw r9,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r9.u32);
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// stw r10,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
	// b 0x82c13520
	sub_82C13520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8768"))) PPC_WEAK_FUNC(sub_82BF8768);
PPC_FUNC_IMPL(__imp__sub_82BF8768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lfs f0,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r10,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r10.u32);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r10,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r10.u32);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// stw r10,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r10.u32);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r10,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r10.u32);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// stw r10,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r10.u32);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// stw r10,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r10.u32);
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// stw r10,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r10.u32);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// stw r10,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r10.u32);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// stw r10,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r10.u32);
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// stw r10,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r10.u32);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r10,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r10.u32);
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// stw r10,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r10.u32);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stw r10,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r10.u32);
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// stw r10,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r10.u32);
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r10,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r10.u32);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// stw r10,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r10.u32);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// stw r11,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// b 0x82c13460
	sub_82C13460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8828"))) PPC_WEAK_FUNC(sub_82BF8828);
PPC_FUNC_IMPL(__imp__sub_82BF8828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,2048
	ctx.r9.s64 = 2048;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF8850"))) PPC_WEAK_FUNC(sub_82BF8850);
PPC_FUNC_IMPL(__imp__sub_82BF8850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF8858"))) PPC_WEAK_FUNC(sub_82BF8858);
PPC_FUNC_IMPL(__imp__sub_82BF8858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF8860;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF8880;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,140
	ctx.r30.s64 = ctx.r11.s64 + 140;
	// beq cr6,0x82bf88b8
	if (ctx.cr6.eq) goto loc_82BF88B8;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf88b8
	if (!ctx.cr6.eq) goto loc_82BF88B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF88A4;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r30,-28
	ctx.r5.s64 = ctx.r30.s64 + -28;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF88B8;
	sub_82C186D0(ctx, base);
loc_82BF88B8:
	// lis r29,-31988
	ctx.r29.s64 = -2096365568;
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf88d8
	if (!ctx.cr6.eq) goto loc_82BF88D8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bf88f0
	if (ctx.cr6.eq) goto loc_82BF88F0;
loc_82BF88D8:
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF88EC;
	sub_82C18570(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BF88F0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf8908
	if (!ctx.cr6.eq) goto loc_82BF8908;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// beq cr6,0x82bf8920
	if (ctx.cr6.eq) goto loc_82BF8920;
loc_82BF8908:
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF891C;
	sub_82C18570(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BF8920:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8938
	if (!ctx.cr6.eq) goto loc_82BF8938;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// beq cr6,0x82bf894c
	if (ctx.cr6.eq) goto loc_82BF894C;
loc_82BF8938:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF894C;
	sub_82C18570(ctx, base);
loc_82BF894C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF8954;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8960"))) PPC_WEAK_FUNC(sub_82BF8960);
PPC_FUNC_IMPL(__imp__sub_82BF8960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BF8968;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF8980;
	sub_82C18020(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf89d8
	if (ctx.cr6.eq) goto loc_82BF89D8;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,176
	ctx.r30.s64 = ctx.r11.s64 + 176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF89A8;
	sub_82C164C8(ctx, base);
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF89BC;
	sub_82C164C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c164c8
	ctx.lr = 0x82BF89D0;
	sub_82C164C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF89D8;
	sub_82C16F48(ctx, base);
loc_82BF89D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF89E0"))) PPC_WEAK_FUNC(sub_82BF89E0);
PPC_FUNC_IMPL(__imp__sub_82BF89E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF8A00"))) PPC_WEAK_FUNC(sub_82BF8A00);
PPC_FUNC_IMPL(__imp__sub_82BF8A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF8A20"))) PPC_WEAK_FUNC(sub_82BF8A20);
PPC_FUNC_IMPL(__imp__sub_82BF8A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF8A40"))) PPC_WEAK_FUNC(sub_82BF8A40);
PPC_FUNC_IMPL(__imp__sub_82BF8A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF8A48;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF8A6C;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-8600
	ctx.r29.s64 = ctx.r11.s64 + -8600;
	// beq cr6,0x82bf8aa4
	if (ctx.cr6.eq) goto loc_82BF8AA4;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8aa4
	if (!ctx.cr6.eq) goto loc_82BF8AA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF8A90;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-20
	ctx.r5.s64 = ctx.r29.s64 + -20;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF8AA4;
	sub_82C186D0(ctx, base);
loc_82BF8AA4:
	// lis r30,-31988
	ctx.r30.s64 = -2096365568;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// lfs f31,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8ac8
	if (!ctx.cr6.eq) goto loc_82BF8AC8;
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bf8ae0
	if (ctx.cr6.eq) goto loc_82BF8AE0;
loc_82BF8AC8:
	// addi r5,r29,-16
	ctx.r5.s64 = ctx.r29.s64 + -16;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF8ADC;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
loc_82BF8AE0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf8af8
	if (!ctx.cr6.eq) goto loc_82BF8AF8;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bf8b10
	if (ctx.cr6.eq) goto loc_82BF8B10;
loc_82BF8AF8:
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// lfs f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF8B0C;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
loc_82BF8B10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8b28
	if (!ctx.cr6.eq) goto loc_82BF8B28;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bf8b3c
	if (ctx.cr6.eq) goto loc_82BF8B3C;
loc_82BF8B28:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF8B3C;
	sub_82C18620(ctx, base);
loc_82BF8B3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF8B44;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8B50"))) PPC_WEAK_FUNC(sub_82BF8B50);
PPC_FUNC_IMPL(__imp__sub_82BF8B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f13,21344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// sth r11,76(r3)
	PPC_STORE_U16(ctx.r3.u32 + 76, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF8BB8"))) PPC_WEAK_FUNC(sub_82BF8BB8);
PPC_FUNC_IMPL(__imp__sub_82BF8BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82BF8BC0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF8BE0;
	sub_82C18020(ctx, base);
	// lis r30,-31988
	ctx.r30.s64 = -2096365568;
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r27,r11,-8300
	ctx.r27.s64 = ctx.r11.s64 + -8300;
	// bne cr6,0x82bf8c04
	if (!ctx.cr6.eq) goto loc_82BF8C04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf8c18
	if (ctx.cr6.eq) goto loc_82BF8C18;
loc_82BF8C04:
	// addi r5,r27,-260
	ctx.r5.s64 = ctx.r27.s64 + -260;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF8C18;
	sub_82C186D0(ctx, base);
loc_82BF8C18:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8c30
	if (!ctx.cr6.eq) goto loc_82BF8C30;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf8c44
	if (ctx.cr6.eq) goto loc_82BF8C44;
loc_82BF8C30:
	// addi r5,r27,-256
	ctx.r5.s64 = ctx.r27.s64 + -256;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF8C44;
	sub_82C186D0(ctx, base);
loc_82BF8C44:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8c5c
	if (!ctx.cr6.eq) goto loc_82BF8C5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf8c70
	if (ctx.cr6.eq) goto loc_82BF8C70;
loc_82BF8C5C:
	// addi r5,r27,-240
	ctx.r5.s64 = ctx.r27.s64 + -240;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BF8C70;
	sub_82C184C0(ctx, base);
loc_82BF8C70:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8c88
	if (!ctx.cr6.eq) goto loc_82BF8C88;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf8c9c
	if (ctx.cr6.eq) goto loc_82BF8C9C;
loc_82BF8C88:
	// addi r5,r27,-228
	ctx.r5.s64 = ctx.r27.s64 + -228;
	// lhz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c19078
	ctx.lr = 0x82BF8C9C;
	sub_82C19078(ctx, base);
loc_82BF8C9C:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f31,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82bf8cbc
	if (!ctx.cr6.eq) goto loc_82BF8CBC;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bf8cd0
	if (ctx.cr6.eq) goto loc_82BF8CD0;
loc_82BF8CBC:
	// addi r5,r27,-212
	ctx.r5.s64 = ctx.r27.s64 + -212;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF8CD0;
	sub_82C18620(ctx, base);
loc_82BF8CD0:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8ce8
	if (!ctx.cr6.eq) goto loc_82BF8CE8;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bf8cfc
	if (ctx.cr6.eq) goto loc_82BF8CFC;
loc_82BF8CE8:
	// addi r5,r27,-196
	ctx.r5.s64 = ctx.r27.s64 + -196;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF8CFC;
	sub_82C18620(ctx, base);
loc_82BF8CFC:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8d14
	if (!ctx.cr6.eq) goto loc_82BF8D14;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bf8d28
	if (ctx.cr6.eq) goto loc_82BF8D28;
loc_82BF8D14:
	// addi r5,r27,-180
	ctx.r5.s64 = ctx.r27.s64 + -180;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF8D28;
	sub_82C18620(ctx, base);
loc_82BF8D28:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8d40
	if (!ctx.cr6.eq) goto loc_82BF8D40;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bf8d54
	if (ctx.cr6.eq) goto loc_82BF8D54;
loc_82BF8D40:
	// addi r5,r27,-168
	ctx.r5.s64 = ctx.r27.s64 + -168;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF8D54;
	sub_82C18620(ctx, base);
loc_82BF8D54:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8d6c
	if (!ctx.cr6.eq) goto loc_82BF8D6C;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bf8d80
	if (ctx.cr6.eq) goto loc_82BF8D80;
loc_82BF8D6C:
	// addi r5,r27,-148
	ctx.r5.s64 = ctx.r27.s64 + -148;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF8D80;
	sub_82C18620(ctx, base);
loc_82BF8D80:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf8da4
	if (ctx.cr6.eq) goto loc_82BF8DA4;
	// addi r5,r27,-132
	ctx.r5.s64 = ctx.r27.s64 + -132;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF8DA0;
	sub_82C18570(ctx, base);
	// b 0x82bf8dd8
	goto loc_82BF8DD8;
loc_82BF8DA4:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8dbc
	if (!ctx.cr6.eq) goto loc_82BF8DBC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf8dd8
	if (ctx.cr6.eq) goto loc_82BF8DD8;
loc_82BF8DBC:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82beeef0
	ctx.lr = 0x82BF8DC4;
	sub_82BEEEF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r27,-112
	ctx.r5.s64 = ctx.r27.s64 + -112;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF8DD8;
	sub_82C186D0(ctx, base);
loc_82BF8DD8:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf8dfc
	if (ctx.cr6.eq) goto loc_82BF8DFC;
	// addi r5,r27,-92
	ctx.r5.s64 = ctx.r27.s64 + -92;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF8DF8;
	sub_82C18570(ctx, base);
	// b 0x82bf8e30
	goto loc_82BF8E30;
loc_82BF8DFC:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8e14
	if (!ctx.cr6.eq) goto loc_82BF8E14;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf8e30
	if (ctx.cr6.eq) goto loc_82BF8E30;
loc_82BF8E14:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82beeef0
	ctx.lr = 0x82BF8E1C;
	sub_82BEEEF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r27,-68
	ctx.r5.s64 = ctx.r27.s64 + -68;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF8E30;
	sub_82C186D0(ctx, base);
loc_82BF8E30:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8e80
	if (!ctx.cr6.eq) goto loc_82BF8E80;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bf8e70
	if (!ctx.cr6.eq) goto loc_82BF8E70;
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82bf8e70
	if (!ctx.cr6.eq) goto loc_82BF8E70;
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bf8e74
	if (ctx.cr6.eq) goto loc_82BF8E74;
loc_82BF8E70:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82BF8E74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf8e94
	if (ctx.cr6.eq) goto loc_82BF8E94;
loc_82BF8E80:
	// addi r5,r27,-44
	ctx.r5.s64 = ctx.r27.s64 + -44;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BF8E94;
	sub_82C18B38(ctx, base);
loc_82BF8E94:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf8eb8
	if (ctx.cr6.eq) goto loc_82BF8EB8;
	// addi r5,r27,-28
	ctx.r5.s64 = ctx.r27.s64 + -28;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF8EB4;
	sub_82C18570(ctx, base);
	// b 0x82bf8f5c
	goto loc_82BF8F5C;
loc_82BF8EB8:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf8ed0
	if (!ctx.cr6.eq) goto loc_82BF8ED0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf8f5c
	if (ctx.cr6.eq) goto loc_82BF8F5C;
loc_82BF8ED0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF8EE0;
	sub_82C18020(ctx, base);
	// addi r5,r27,-20
	ctx.r5.s64 = ctx.r27.s64 + -20;
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF8EF4;
	sub_82C186D0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
loc_82BF8EF8:
	// slw r30,r25,r26
	ctx.r30.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bef038
	ctx.lr = 0x82BF8F04;
	sub_82BEF038(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bf8f54
	if (ctx.cr6.eq) goto loc_82BF8F54;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF8F18;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf8f48
	if (!ctx.cr6.eq) goto loc_82BF8F48;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf8f38
	if (ctx.cr6.eq) goto loc_82BF8F38;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BF8F38:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BF8F48;
	sub_82C184C0(ctx, base);
loc_82BF8F48:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bf8ef8
	if (ctx.cr6.lt) goto loc_82BF8EF8;
loc_82BF8F54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF8F5C;
	sub_82C16F48(ctx, base);
loc_82BF8F5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf8f78
	if (ctx.cr6.eq) goto loc_82BF8F78;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82bf8a40
	ctx.lr = 0x82BF8F78;
	sub_82BF8A40(ctx, base);
loc_82BF8F78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF8F80;
	sub_82C16F48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF8F90"))) PPC_WEAK_FUNC(sub_82BF8F90);
PPC_FUNC_IMPL(__imp__sub_82BF8F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// lfs f13,21344(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,-144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// stfs f13,-128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// stfs f0,-124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// stfs f13,-112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BF9004:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82bf9004
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BF9004;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// li r10,2304
	ctx.r10.s64 = 2304;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f12,-3560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3560);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f11,-3204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3204);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lfs f13,21360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21360);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r8,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r8.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f11,96(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f13,124(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF90A8"))) PPC_WEAK_FUNC(sub_82BF90A8);
PPC_FUNC_IMPL(__imp__sub_82BF90A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF90B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82bf8f90
	ctx.lr = 0x82BF90C8;
	sub_82BF8F90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF90D8;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r26,r11,-7740
	ctx.r26.s64 = ctx.r11.s64 + -7740;
	// beq cr6,0x82bf9110
	if (ctx.cr6.eq) goto loc_82BF9110;
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9110
	if (!ctx.cr6.eq) goto loc_82BF9110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF90FC;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r26,-288
	ctx.r5.s64 = ctx.r26.s64 + -288;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF9110;
	sub_82C186D0(ctx, base);
loc_82BF9110:
	// lis r24,-31988
	ctx.r24.s64 = -2096365568;
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9138
	if (!ctx.cr6.eq) goto loc_82BF9138;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bec0d0
	ctx.lr = 0x82BF912C;
	sub_82BEC0D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf914c
	if (!ctx.cr6.eq) goto loc_82BF914C;
loc_82BF9138:
	// addi r5,r26,-284
	ctx.r5.s64 = ctx.r26.s64 + -284;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18ca8
	ctx.lr = 0x82BF914C;
	sub_82C18CA8(ctx, base);
loc_82BF914C:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf919c
	if (!ctx.cr6.eq) goto loc_82BF919C;
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bf918c
	if (!ctx.cr6.eq) goto loc_82BF918C;
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bf918c
	if (!ctx.cr6.eq) goto loc_82BF918C;
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9190
	if (ctx.cr6.eq) goto loc_82BF9190;
loc_82BF918C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82BF9190:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf91b0
	if (ctx.cr6.eq) goto loc_82BF91B0;
loc_82BF919C:
	// addi r5,r26,-268
	ctx.r5.s64 = ctx.r26.s64 + -268;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BF91B0;
	sub_82C18B38(ctx, base);
loc_82BF91B0:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf91cc
	if (!ctx.cr6.eq) goto loc_82BF91CC;
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf91e0
	if (ctx.cr6.eq) goto loc_82BF91E0;
loc_82BF91CC:
	// addi r5,r26,-248
	ctx.r5.s64 = ctx.r26.s64 + -248;
	// lfs f1,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF91E0;
	sub_82C18620(ctx, base);
loc_82BF91E0:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf922c
	if (!ctx.cr6.eq) goto loc_82BF922C;
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bf921c
	if (!ctx.cr6.eq) goto loc_82BF921C;
	// lfs f0,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bf921c
	if (!ctx.cr6.eq) goto loc_82BF921C;
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9220
	if (ctx.cr6.eq) goto loc_82BF9220;
loc_82BF921C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82BF9220:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf9240
	if (ctx.cr6.eq) goto loc_82BF9240;
loc_82BF922C:
	// addi r5,r26,-240
	ctx.r5.s64 = ctx.r26.s64 + -240;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BF9240;
	sub_82C18B38(ctx, base);
loc_82BF9240:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf928c
	if (!ctx.cr6.eq) goto loc_82BF928C;
	// lfs f0,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bf927c
	if (!ctx.cr6.eq) goto loc_82BF927C;
	// lfs f0,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bf927c
	if (!ctx.cr6.eq) goto loc_82BF927C;
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9280
	if (ctx.cr6.eq) goto loc_82BF9280;
loc_82BF927C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82BF9280:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf92a0
	if (ctx.cr6.eq) goto loc_82BF92A0;
loc_82BF928C:
	// addi r5,r26,-224
	ctx.r5.s64 = ctx.r26.s64 + -224;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BF92A0;
	sub_82C18B38(ctx, base);
loc_82BF92A0:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf92bc
	if (!ctx.cr6.eq) goto loc_82BF92BC;
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf92d0
	if (ctx.cr6.eq) goto loc_82BF92D0;
loc_82BF92BC:
	// addi r5,r26,-208
	ctx.r5.s64 = ctx.r26.s64 + -208;
	// lfs f1,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF92D0;
	sub_82C18620(ctx, base);
loc_82BF92D0:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf92ec
	if (!ctx.cr6.eq) goto loc_82BF92EC;
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9300
	if (ctx.cr6.eq) goto loc_82BF9300;
loc_82BF92EC:
	// addi r5,r26,-192
	ctx.r5.s64 = ctx.r26.s64 + -192;
	// lfs f1,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF9300;
	sub_82C18620(ctx, base);
loc_82BF9300:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf931c
	if (!ctx.cr6.eq) goto loc_82BF931C;
	// lfs f0,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9330
	if (ctx.cr6.eq) goto loc_82BF9330;
loc_82BF931C:
	// addi r5,r26,-176
	ctx.r5.s64 = ctx.r26.s64 + -176;
	// lfs f1,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF9330;
	sub_82C18620(ctx, base);
loc_82BF9330:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf934c
	if (!ctx.cr6.eq) goto loc_82BF934C;
	// lfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9360
	if (ctx.cr6.eq) goto loc_82BF9360;
loc_82BF934C:
	// addi r5,r26,-160
	ctx.r5.s64 = ctx.r26.s64 + -160;
	// lfs f1,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF9360;
	sub_82C18620(ctx, base);
loc_82BF9360:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf937c
	if (!ctx.cr6.eq) goto loc_82BF937C;
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9390
	if (ctx.cr6.eq) goto loc_82BF9390;
loc_82BF937C:
	// addi r5,r26,-140
	ctx.r5.s64 = ctx.r26.s64 + -140;
	// lfs f1,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF9390;
	sub_82C18620(ctx, base);
loc_82BF9390:
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf93b4
	if (ctx.cr6.eq) goto loc_82BF93B4;
	// addi r5,r26,-120
	ctx.r5.s64 = ctx.r26.s64 + -120;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF93B0;
	sub_82C18570(ctx, base);
	// b 0x82bf945c
	goto loc_82BF945C;
loc_82BF93B4:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf93d0
	if (!ctx.cr6.eq) goto loc_82BF93D0;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bf945c
	if (ctx.cr6.eq) goto loc_82BF945C;
loc_82BF93D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF93E0;
	sub_82C18020(ctx, base);
	// addi r5,r26,-112
	ctx.r5.s64 = ctx.r26.s64 + -112;
	// addi r4,r26,-108
	ctx.r4.s64 = ctx.r26.s64 + -108;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF93F4;
	sub_82C186D0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
loc_82BF93F8:
	// slw r31,r25,r27
	ctx.r31.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r27.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bef258
	ctx.lr = 0x82BF9404;
	sub_82BEF258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bf9454
	if (ctx.cr6.eq) goto loc_82BF9454;
	// addi r4,r26,-100
	ctx.r4.s64 = ctx.r26.s64 + -100;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF9418;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf9448
	if (!ctx.cr6.eq) goto loc_82BF9448;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf9438
	if (ctx.cr6.eq) goto loc_82BF9438;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BF9438:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BF9448;
	sub_82C184C0(ctx, base);
loc_82BF9448:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x82bf93f8
	if (ctx.cr6.lt) goto loc_82BF93F8;
loc_82BF9454:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF945C;
	sub_82C16F48(ctx, base);
loc_82BF945C:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9478
	if (!ctx.cr6.eq) goto loc_82BF9478;
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf948c
	if (ctx.cr6.eq) goto loc_82BF948C;
loc_82BF9478:
	// addi r5,r26,-92
	ctx.r5.s64 = ctx.r26.s64 + -92;
	// lfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF948C;
	sub_82C18620(ctx, base);
loc_82BF948C:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf94a8
	if (!ctx.cr6.eq) goto loc_82BF94A8;
	// lfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf94bc
	if (ctx.cr6.eq) goto loc_82BF94BC;
loc_82BF94A8:
	// addi r5,r26,-72
	ctx.r5.s64 = ctx.r26.s64 + -72;
	// lfs f1,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF94BC;
	sub_82C18620(ctx, base);
loc_82BF94BC:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf94d8
	if (!ctx.cr6.eq) goto loc_82BF94D8;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf94ec
	if (ctx.cr6.eq) goto loc_82BF94EC;
loc_82BF94D8:
	// addi r5,r26,-48
	ctx.r5.s64 = ctx.r26.s64 + -48;
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF94EC;
	sub_82C18570(ctx, base);
loc_82BF94EC:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9508
	if (!ctx.cr6.eq) goto loc_82BF9508;
	// lfs f0,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf951c
	if (ctx.cr6.eq) goto loc_82BF951C;
loc_82BF9508:
	// addi r5,r26,-24
	ctx.r5.s64 = ctx.r26.s64 + -24;
	// lfs f1,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF951C;
	sub_82C18620(ctx, base);
loc_82BF951C:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9538
	if (!ctx.cr6.eq) goto loc_82BF9538;
	// lfs f0,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf954c
	if (ctx.cr6.eq) goto loc_82BF954C;
loc_82BF9538:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF954C;
	sub_82C18620(ctx, base);
loc_82BF954C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF9554;
	sub_82C16F48(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF9560"))) PPC_WEAK_FUNC(sub_82BF9560);
PPC_FUNC_IMPL(__imp__sub_82BF9560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lfs f13,15080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15080);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,21356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21356);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,-11912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11912);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,28256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF95A8"))) PPC_WEAK_FUNC(sub_82BF95A8);
PPC_FUNC_IMPL(__imp__sub_82BF95A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF95B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF95D0;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r29,r11,-7360
	ctx.r29.s64 = ctx.r11.s64 + -7360;
	// beq cr6,0x82bf9608
	if (ctx.cr6.eq) goto loc_82BF9608;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9608
	if (!ctx.cr6.eq) goto loc_82BF9608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF95F4;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-68
	ctx.r5.s64 = ctx.r29.s64 + -68;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF9608;
	sub_82C186D0(ctx, base);
loc_82BF9608:
	// lis r28,-31988
	ctx.r28.s64 = -2096365568;
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf962c
	if (!ctx.cr6.eq) goto loc_82BF962C;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9644
	if (ctx.cr6.eq) goto loc_82BF9644;
loc_82BF962C:
	// addi r5,r29,-64
	ctx.r5.s64 = ctx.r29.s64 + -64;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF9640;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF9644:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf9664
	if (!ctx.cr6.eq) goto loc_82BF9664;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,15080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15080);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf967c
	if (ctx.cr6.eq) goto loc_82BF967C;
loc_82BF9664:
	// addi r5,r29,-48
	ctx.r5.s64 = ctx.r29.s64 + -48;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF9678;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF967C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf969c
	if (!ctx.cr6.eq) goto loc_82BF969C;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21356);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf96b4
	if (ctx.cr6.eq) goto loc_82BF96B4;
loc_82BF969C:
	// addi r5,r29,-32
	ctx.r5.s64 = ctx.r29.s64 + -32;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF96B0;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF96B4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf96d4
	if (!ctx.cr6.eq) goto loc_82BF96D4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11912);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf96ec
	if (ctx.cr6.eq) goto loc_82BF96EC;
loc_82BF96D4:
	// addi r5,r29,-16
	ctx.r5.s64 = ctx.r29.s64 + -16;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF96E8;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BF96EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf970c
	if (!ctx.cr6.eq) goto loc_82BF970C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9720
	if (ctx.cr6.eq) goto loc_82BF9720;
loc_82BF970C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF9720;
	sub_82C18620(ctx, base);
loc_82BF9720:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF9728;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF9730"))) PPC_WEAK_FUNC(sub_82BF9730);
PPC_FUNC_IMPL(__imp__sub_82BF9730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r7,9
	ctx.r7.s64 = 9;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lfs f0,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f13,21344(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-120
	ctx.r9.s64 = ctx.r1.s64 + -120;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stfs f13,-120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stfs f0,-108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f13,-104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,-100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f0,-92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f13,-88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82BF97C8:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82bf97c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BF97C8;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// sth r10,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r10.u16);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// sth r10,62(r3)
	PPC_STORE_U16(ctx.r3.u32 + 62, ctx.r10.u16);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lfs f12,21360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21360);
	ctx.f12.f64 = double(temp.f32);
	// li r9,93
	ctx.r9.s64 = 93;
	// stfs f12,72(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF9820"))) PPC_WEAK_FUNC(sub_82BF9820);
PPC_FUNC_IMPL(__imp__sub_82BF9820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BF9828;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82bf9730
	ctx.lr = 0x82BF9840;
	sub_82BF9730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF9850;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,-7108
	ctx.r27.s64 = ctx.r11.s64 + -7108;
	// beq cr6,0x82bf9888
	if (ctx.cr6.eq) goto loc_82BF9888;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9888
	if (!ctx.cr6.eq) goto loc_82BF9888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF9874;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r27,-156
	ctx.r5.s64 = ctx.r27.s64 + -156;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF9888;
	sub_82C186D0(ctx, base);
loc_82BF9888:
	// lis r24,-31988
	ctx.r24.s64 = -2096365568;
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf98a8
	if (!ctx.cr6.eq) goto loc_82BF98A8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf98bc
	if (ctx.cr6.eq) goto loc_82BF98BC;
loc_82BF98A8:
	// addi r5,r27,-152
	ctx.r5.s64 = ctx.r27.s64 + -152;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF98BC;
	sub_82C186D0(ctx, base);
loc_82BF98BC:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf98d8
	if (!ctx.cr6.eq) goto loc_82BF98D8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf98ec
	if (ctx.cr6.eq) goto loc_82BF98EC;
loc_82BF98D8:
	// addi r5,r27,-136
	ctx.r5.s64 = ctx.r27.s64 + -136;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF98EC;
	sub_82C186D0(ctx, base);
loc_82BF98EC:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9910
	if (!ctx.cr6.eq) goto loc_82BF9910;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bec0d0
	ctx.lr = 0x82BF9904;
	sub_82BEC0D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9924
	if (!ctx.cr6.eq) goto loc_82BF9924;
loc_82BF9910:
	// addi r5,r27,-128
	ctx.r5.s64 = ctx.r27.s64 + -128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18ca8
	ctx.lr = 0x82BF9924;
	sub_82C18CA8(ctx, base);
loc_82BF9924:
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf9948
	if (ctx.cr6.eq) goto loc_82BF9948;
	// addi r5,r27,-116
	ctx.r5.s64 = ctx.r27.s64 + -116;
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BF9944;
	sub_82C18570(ctx, base);
	// b 0x82bf99f4
	goto loc_82BF99F4;
loc_82BF9948:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9964
	if (!ctx.cr6.eq) goto loc_82BF9964;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bf99f4
	if (ctx.cr6.eq) goto loc_82BF99F4;
loc_82BF9964:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BF9974;
	sub_82C18020(ctx, base);
	// addi r5,r27,-104
	ctx.r5.s64 = ctx.r27.s64 + -104;
	// addi r4,r27,-100
	ctx.r4.s64 = ctx.r27.s64 + -100;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF9988;
	sub_82C186D0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82BF9990:
	// slw r31,r25,r26
	ctx.r31.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82befad0
	ctx.lr = 0x82BF999C;
	sub_82BEFAD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bf99ec
	if (ctx.cr6.eq) goto loc_82BF99EC;
	// addi r4,r27,-88
	ctx.r4.s64 = ctx.r27.s64 + -88;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BF99B0;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf99e0
	if (!ctx.cr6.eq) goto loc_82BF99E0;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bf99d0
	if (ctx.cr6.eq) goto loc_82BF99D0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BF99D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BF99E0;
	sub_82C184C0(ctx, base);
loc_82BF99E0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bf9990
	if (ctx.cr6.lt) goto loc_82BF9990;
loc_82BF99EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF99F4;
	sub_82C16F48(ctx, base);
loc_82BF99F4:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9a10
	if (!ctx.cr6.eq) goto loc_82BF9A10;
	// lhz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 60);
	// lhz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf9a24
	if (ctx.cr6.eq) goto loc_82BF9A24;
loc_82BF9A10:
	// addi r5,r27,-80
	ctx.r5.s64 = ctx.r27.s64 + -80;
	// lhz r4,60(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 60);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c19078
	ctx.lr = 0x82BF9A24;
	sub_82C19078(ctx, base);
loc_82BF9A24:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9a40
	if (!ctx.cr6.eq) goto loc_82BF9A40;
	// lhz r11,62(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 62);
	// lhz r10,142(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 142);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf9a54
	if (ctx.cr6.eq) goto loc_82BF9A54;
loc_82BF9A40:
	// addi r5,r27,-72
	ctx.r5.s64 = ctx.r27.s64 + -72;
	// lhz r4,62(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 62);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c19078
	ctx.lr = 0x82BF9A54;
	sub_82C19078(ctx, base);
loc_82BF9A54:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9a70
	if (!ctx.cr6.eq) goto loc_82BF9A70;
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bf9a84
	if (ctx.cr6.eq) goto loc_82BF9A84;
loc_82BF9A70:
	// addi r5,r27,-56
	ctx.r5.s64 = ctx.r27.s64 + -56;
	// lwz r4,64(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF9A84;
	sub_82C186D0(ctx, base);
loc_82BF9A84:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9aa0
	if (!ctx.cr6.eq) goto loc_82BF9AA0;
	// lfs f0,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9ab4
	if (ctx.cr6.eq) goto loc_82BF9AB4;
loc_82BF9AA0:
	// addi r5,r27,-40
	ctx.r5.s64 = ctx.r27.s64 + -40;
	// lfs f1,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF9AB4;
	sub_82C18620(ctx, base);
loc_82BF9AB4:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9ad0
	if (!ctx.cr6.eq) goto loc_82BF9AD0;
	// lfs f0,72(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9ae4
	if (ctx.cr6.eq) goto loc_82BF9AE4;
loc_82BF9AD0:
	// addi r5,r27,-24
	ctx.r5.s64 = ctx.r27.s64 + -24;
	// lfs f1,72(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF9AE4;
	sub_82C18620(ctx, base);
loc_82BF9AE4:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9b00
	if (!ctx.cr6.eq) goto loc_82BF9B00;
	// lfs f0,76(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9b14
	if (ctx.cr6.eq) goto loc_82BF9B14;
loc_82BF9B00:
	// addi r5,r27,-12
	ctx.r5.s64 = ctx.r27.s64 + -12;
	// lfs f1,76(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF9B14;
	sub_82C18620(ctx, base);
loc_82BF9B14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x82bf4568
	ctx.lr = 0x82BF9B24;
	sub_82BF4568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF9B2C;
	sub_82C16F48(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF9B38"))) PPC_WEAK_FUNC(sub_82BF9B38);
PPC_FUNC_IMPL(__imp__sub_82BF9B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bf9730
	ctx.lr = 0x82BF9B48;
	sub_82BF9730(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,30
	ctx.r10.s64 = 30;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF9B80"))) PPC_WEAK_FUNC(sub_82BF9B80);
PPC_FUNC_IMPL(__imp__sub_82BF9B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF9B88;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82bf9730
	ctx.lr = 0x82BF9BA0;
	sub_82BF9730(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r11,30
	ctx.r11.s64 = 30;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// bl 0x82c18020
	ctx.lr = 0x82BF9BD4;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-6932
	ctx.r28.s64 = ctx.r11.s64 + -6932;
	// beq cr6,0x82bf9c0c
	if (ctx.cr6.eq) goto loc_82BF9C0C;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9c0c
	if (!ctx.cr6.eq) goto loc_82BF9C0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF9BF8;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,-4
	ctx.r5.s64 = ctx.r28.s64 + -4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF9C0C;
	sub_82C186D0(ctx, base);
loc_82BF9C0C:
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// lbz r11,9732(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9c5c
	if (!ctx.cr6.eq) goto loc_82BF9C5C;
	// lfs f0,108(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bf9c4c
	if (!ctx.cr6.eq) goto loc_82BF9C4C;
	// lfs f0,112(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bf9c4c
	if (!ctx.cr6.eq) goto loc_82BF9C4C;
	// lfs f0,116(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9c50
	if (ctx.cr6.eq) goto loc_82BF9C50;
loc_82BF9C4C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BF9C50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf9c70
	if (ctx.cr6.eq) goto loc_82BF9C70;
loc_82BF9C5C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BF9C70;
	sub_82C18B38(ctx, base);
loc_82BF9C70:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf9820
	ctx.lr = 0x82BF9C80;
	sub_82BF9820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF9C88;
	sub_82C16F48(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF9C90"))) PPC_WEAK_FUNC(sub_82BF9C90);
PPC_FUNC_IMPL(__imp__sub_82BF9C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bf9730
	ctx.lr = 0x82BF9CA0;
	sub_82BF9730(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lfs f13,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF9CE0"))) PPC_WEAK_FUNC(sub_82BF9CE0);
PPC_FUNC_IMPL(__imp__sub_82BF9CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF9CE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82bf9730
	ctx.lr = 0x82BF9D00;
	sub_82BF9730(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f13,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// li r11,31
	ctx.r11.s64 = 31;
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// bl 0x82c18020
	ctx.lr = 0x82BF9D40;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-6896
	ctx.r28.s64 = ctx.r11.s64 + -6896;
	// beq cr6,0x82bf9d78
	if (ctx.cr6.eq) goto loc_82BF9D78;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9d78
	if (!ctx.cr6.eq) goto loc_82BF9D78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF9D64;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF9D78;
	sub_82C186D0(ctx, base);
loc_82BF9D78:
	// lis r30,-31988
	ctx.r30.s64 = -2096365568;
	// lbz r10,9732(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf9dcc
	if (!ctx.cr6.eq) goto loc_82BF9DCC;
	// lfs f0,108(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bf9dbc
	if (!ctx.cr6.eq) goto loc_82BF9DBC;
	// lfs f0,112(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bf9dbc
	if (!ctx.cr6.eq) goto loc_82BF9DBC;
	// lfs f0,116(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9dc0
	if (ctx.cr6.eq) goto loc_82BF9DC0;
loc_82BF9DBC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BF9DC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf9de4
	if (ctx.cr6.eq) goto loc_82BF9DE4;
loc_82BF9DCC:
	// addi r5,r28,-8
	ctx.r5.s64 = ctx.r28.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BF9DE0;
	sub_82C18B38(ctx, base);
	// lbz r10,9732(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
loc_82BF9DE4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9e00
	if (!ctx.cr6.eq) goto loc_82BF9E00;
	// lfs f0,120(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9e14
	if (ctx.cr6.eq) goto loc_82BF9E14;
loc_82BF9E00:
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,120(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF9E14;
	sub_82C18620(ctx, base);
loc_82BF9E14:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bf9820
	ctx.lr = 0x82BF9E24;
	sub_82BF9820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF9E2C;
	sub_82C16F48(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF9E38"))) PPC_WEAK_FUNC(sub_82BF9E38);
PPC_FUNC_IMPL(__imp__sub_82BF9E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bf9730
	ctx.lr = 0x82BF9E48;
	sub_82BF9730(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF9E78"))) PPC_WEAK_FUNC(sub_82BF9E78);
PPC_FUNC_IMPL(__imp__sub_82BF9E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BF9E80;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82bf9730
	ctx.lr = 0x82BF9E98;
	sub_82BF9730(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x82c18020
	ctx.lr = 0x82BF9EC4;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-6876
	ctx.r29.s64 = ctx.r11.s64 + -6876;
	// beq cr6,0x82bf9efc
	if (ctx.cr6.eq) goto loc_82BF9EFC;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9efc
	if (!ctx.cr6.eq) goto loc_82BF9EFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BF9EE8;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-4
	ctx.r5.s64 = ctx.r29.s64 + -4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BF9EFC;
	sub_82C186D0(ctx, base);
loc_82BF9EFC:
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// lbz r11,9732(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bf9f1c
	if (!ctx.cr6.eq) goto loc_82BF9F1C;
	// lfs f0,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bf9f30
	if (ctx.cr6.eq) goto loc_82BF9F30;
loc_82BF9F1C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BF9F30;
	sub_82C18620(ctx, base);
loc_82BF9F30:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bf9820
	ctx.lr = 0x82BF9F40;
	sub_82BF9820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BF9F48;
	sub_82C16F48(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF9F50"))) PPC_WEAK_FUNC(sub_82BF9F50);
PPC_FUNC_IMPL(__imp__sub_82BF9F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bf9730
	ctx.lr = 0x82BF9F60;
	sub_82BF9730(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,33
	ctx.r9.s64 = 33;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF9F98"))) PPC_WEAK_FUNC(sub_82BF9F98);
PPC_FUNC_IMPL(__imp__sub_82BF9F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BF9FA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82bf9730
	ctx.lr = 0x82BF9FB8;
	sub_82BF9730(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// li r11,33
	ctx.r11.s64 = 33;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bl 0x82c18020
	ctx.lr = 0x82BF9FEC;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-18152
	ctx.r29.s64 = ctx.r11.s64 + -18152;
	// beq cr6,0x82bfa024
	if (ctx.cr6.eq) goto loc_82BFA024;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa024
	if (!ctx.cr6.eq) goto loc_82BFA024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFA010;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,11292
	ctx.r5.s64 = ctx.r29.s64 + 11292;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFA024;
	sub_82C186D0(ctx, base);
loc_82BFA024:
	// lis r30,-31988
	ctx.r30.s64 = -2096365568;
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa044
	if (!ctx.cr6.eq) goto loc_82BFA044;
	// lfs f0,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfa05c
	if (ctx.cr6.eq) goto loc_82BFA05C;
loc_82BFA044:
	// addi r5,r29,11296
	ctx.r5.s64 = ctx.r29.s64 + 11296;
	// lfs f1,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFA058;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
loc_82BFA05C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfa078
	if (!ctx.cr6.eq) goto loc_82BFA078;
	// lfs f0,112(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfa090
	if (ctx.cr6.eq) goto loc_82BFA090;
loc_82BFA078:
	// addi r5,r29,11304
	ctx.r5.s64 = ctx.r29.s64 + 11304;
	// lfs f1,112(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFA08C;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
loc_82BFA090:
	// lbz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfa0b4
	if (ctx.cr6.eq) goto loc_82BFA0B4;
	// addi r5,r29,11312
	ctx.r5.s64 = ctx.r29.s64 + 11312;
	// lwz r4,116(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFA0B0;
	sub_82C18570(ctx, base);
	// b 0x82bfa158
	goto loc_82BFA158;
loc_82BFA0B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa0d0
	if (!ctx.cr6.eq) goto loc_82BFA0D0;
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfa158
	if (ctx.cr6.eq) goto loc_82BFA158;
loc_82BFA0D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFA0E0;
	sub_82C18020(ctx, base);
	// addi r5,r29,11320
	ctx.r5.s64 = ctx.r29.s64 + 11320;
	// addi r4,r29,11324
	ctx.r4.s64 = ctx.r29.s64 + 11324;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFA0F4;
	sub_82C186D0(ctx, base);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82BFA0FC:
	// slw r11,r27,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82bfa150
	if (!ctx.cr6.eq) goto loc_82BFA150;
	// addi r4,r29,11332
	ctx.r4.s64 = ctx.r29.s64 + 11332;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BFA114;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfa144
	if (!ctx.cr6.eq) goto loc_82BFA144;
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfa134
	if (ctx.cr6.eq) goto loc_82BFA134;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82BFA134:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BFA144;
	sub_82C184C0(ctx, base);
loc_82BFA144:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x82bfa0fc
	if (ctx.cr6.lt) goto loc_82BFA0FC;
loc_82BFA150:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFA158;
	sub_82C16F48(ctx, base);
loc_82BFA158:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bf9820
	ctx.lr = 0x82BFA168;
	sub_82BF9820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFA170;
	sub_82C16F48(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFA178"))) PPC_WEAK_FUNC(sub_82BFA178);
PPC_FUNC_IMPL(__imp__sub_82BFA178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bf9730
	ctx.lr = 0x82BFA188;
	sub_82BF9730(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,35
	ctx.r9.s64 = 35;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFA1B8"))) PPC_WEAK_FUNC(sub_82BFA1B8);
PPC_FUNC_IMPL(__imp__sub_82BFA1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BFA1C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82bf9730
	ctx.lr = 0x82BFA1D8;
	sub_82BF9730(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r11,35
	ctx.r11.s64 = 35;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// stw r25,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r25.u32);
	// bl 0x82c18020
	ctx.lr = 0x82BFA204;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,-17580
	ctx.r28.s64 = ctx.r11.s64 + -17580;
	// beq cr6,0x82bfa23c
	if (ctx.cr6.eq) goto loc_82BFA23C;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa23c
	if (!ctx.cr6.eq) goto loc_82BFA23C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFA228;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,10808
	ctx.r5.s64 = ctx.r28.s64 + 10808;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFA23C;
	sub_82C186D0(ctx, base);
loc_82BFA23C:
	// lis r31,-31988
	ctx.r31.s64 = -2096365568;
	// lbz r11,9732(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa25c
	if (!ctx.cr6.eq) goto loc_82BFA25C;
	// lwz r10,108(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bfa274
	if (ctx.cr6.eq) goto loc_82BFA274;
loc_82BFA25C:
	// addi r5,r28,10812
	ctx.r5.s64 = ctx.r28.s64 + 10812;
	// lwz r4,108(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFA270;
	sub_82C186D0(ctx, base);
	// lbz r11,9732(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9732);
loc_82BFA274:
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfa298
	if (ctx.cr6.eq) goto loc_82BFA298;
	// addi r5,r28,10824
	ctx.r5.s64 = ctx.r28.s64 + 10824;
	// lwz r4,112(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFA294;
	sub_82C18570(ctx, base);
	// b 0x82bfa34c
	goto loc_82BFA34C;
loc_82BFA298:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa2b4
	if (!ctx.cr6.eq) goto loc_82BFA2B4;
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfa34c
	if (ctx.cr6.eq) goto loc_82BFA34C;
loc_82BFA2B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFA2C4;
	sub_82C18020(ctx, base);
	// addi r5,r28,10836
	ctx.r5.s64 = ctx.r28.s64 + 10836;
	// addi r4,r28,10840
	ctx.r4.s64 = ctx.r28.s64 + 10840;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFA2D8;
	sub_82C186D0(ctx, base);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82BFA2DC:
	// slw r31,r24,r27
	ctx.r31.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r27.u8 & 0x3F));
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82bfa2f8
	if (ctx.cr6.eq) goto loc_82BFA2F8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82bfa344
	if (!ctx.cr6.eq) goto loc_82BFA344;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x82bfa2fc
	goto loc_82BFA2FC;
loc_82BFA2F8:
	// addi r29,r28,-36
	ctx.r29.s64 = ctx.r28.s64 + -36;
loc_82BFA2FC:
	// addi r4,r28,10852
	ctx.r4.s64 = ctx.r28.s64 + 10852;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BFA308;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfa338
	if (!ctx.cr6.eq) goto loc_82BFA338;
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfa328
	if (ctx.cr6.eq) goto loc_82BFA328;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82BFA328:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BFA338;
	sub_82C184C0(ctx, base);
loc_82BFA338:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x82bfa2dc
	if (ctx.cr6.lt) goto loc_82BFA2DC;
loc_82BFA344:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFA34C;
	sub_82C16F48(ctx, base);
loc_82BFA34C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bf9820
	ctx.lr = 0x82BFA35C;
	sub_82BF9820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFA364;
	sub_82C16F48(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFA370"))) PPC_WEAK_FUNC(sub_82BFA370);
PPC_FUNC_IMPL(__imp__sub_82BFA370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bf9730
	ctx.lr = 0x82BFA380;
	sub_82BF9730(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFA3B0"))) PPC_WEAK_FUNC(sub_82BFA3B0);
PPC_FUNC_IMPL(__imp__sub_82BFA3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82BFA3B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82bf9730
	ctx.lr = 0x82BFA3D0;
	sub_82BF9730(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r11,36
	ctx.r11.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r24,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r24.u32);
	// bl 0x82c18020
	ctx.lr = 0x82BFA3FC;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-17704
	ctx.r29.s64 = ctx.r11.s64 + -17704;
	// beq cr6,0x82bfa434
	if (ctx.cr6.eq) goto loc_82BFA434;
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa434
	if (!ctx.cr6.eq) goto loc_82BFA434;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFA420;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,11028
	ctx.r5.s64 = ctx.r29.s64 + 11028;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFA434;
	sub_82C186D0(ctx, base);
loc_82BFA434:
	// lis r23,-31988
	ctx.r23.s64 = -2096365568;
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa454
	if (!ctx.cr6.eq) goto loc_82BFA454;
	// lwz r11,108(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bfa468
	if (ctx.cr6.eq) goto loc_82BFA468;
loc_82BFA454:
	// addi r5,r29,11032
	ctx.r5.s64 = ctx.r29.s64 + 11032;
	// lwz r4,108(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFA468;
	sub_82C186D0(ctx, base);
loc_82BFA468:
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfa48c
	if (ctx.cr6.eq) goto loc_82BFA48C;
	// addi r5,r29,11044
	ctx.r5.s64 = ctx.r29.s64 + 11044;
	// lwz r4,112(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFA488;
	sub_82C18570(ctx, base);
	// b 0x82bfa544
	goto loc_82BFA544;
loc_82BFA48C:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa4a8
	if (!ctx.cr6.eq) goto loc_82BFA4A8;
	// lwz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfa544
	if (ctx.cr6.eq) goto loc_82BFA544;
loc_82BFA4A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFA4B8;
	sub_82C18020(ctx, base);
	// addi r5,r29,11056
	ctx.r5.s64 = ctx.r29.s64 + 11056;
	// addi r4,r29,11060
	ctx.r4.s64 = ctx.r29.s64 + 11060;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFA4CC;
	sub_82C186D0(ctx, base);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82BFA4D4:
	// slw r31,r26,r27
	ctx.r31.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r27.u8 & 0x3F));
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82bfa4f0
	if (ctx.cr6.eq) goto loc_82BFA4F0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82bfa53c
	if (!ctx.cr6.eq) goto loc_82BFA53C;
	// addi r30,r29,124
	ctx.r30.s64 = ctx.r29.s64 + 124;
	// b 0x82bfa4f4
	goto loc_82BFA4F4;
loc_82BFA4F0:
	// addi r30,r29,88
	ctx.r30.s64 = ctx.r29.s64 + 88;
loc_82BFA4F4:
	// addi r4,r29,11072
	ctx.r4.s64 = ctx.r29.s64 + 11072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BFA500;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfa530
	if (!ctx.cr6.eq) goto loc_82BFA530;
	// lwz r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 112);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfa520
	if (ctx.cr6.eq) goto loc_82BFA520;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82BFA520:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BFA530;
	sub_82C184C0(ctx, base);
loc_82BFA530:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x82bfa4d4
	if (ctx.cr6.lt) goto loc_82BFA4D4;
loc_82BFA53C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFA544;
	sub_82C16F48(ctx, base);
loc_82BFA544:
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfa568
	if (ctx.cr6.eq) goto loc_82BFA568;
	// addi r5,r29,11080
	ctx.r5.s64 = ctx.r29.s64 + 11080;
	// lwz r4,116(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFA564;
	sub_82C18570(ctx, base);
	// b 0x82bfa5c4
	goto loc_82BFA5C4;
loc_82BFA568:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa584
	if (!ctx.cr6.eq) goto loc_82BFA584;
	// lwz r11,116(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfa5c4
	if (ctx.cr6.eq) goto loc_82BFA5C4;
loc_82BFA584:
	// lwz r11,116(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bfa5b0
	if (ctx.cr6.lt) goto loc_82BFA5B0;
	// beq cr6,0x82bfa5a8
	if (ctx.cr6.eq) goto loc_82BFA5A8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82bfa5b4
	if (!ctx.cr6.lt) goto loc_82BFA5B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82bfa5b4
	goto loc_82BFA5B4;
loc_82BFA5A8:
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// b 0x82bfa5b4
	goto loc_82BFA5B4;
loc_82BFA5B0:
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
loc_82BFA5B4:
	// addi r5,r29,11096
	ctx.r5.s64 = ctx.r29.s64 + 11096;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFA5C4;
	sub_82C186D0(ctx, base);
loc_82BFA5C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bf9820
	ctx.lr = 0x82BFA5D4;
	sub_82BF9820(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFA5DC;
	sub_82C16F48(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFA5F0"))) PPC_WEAK_FUNC(sub_82BFA5F0);
PPC_FUNC_IMPL(__imp__sub_82BFA5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-304
	ctx.r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bf9730
	ctx.lr = 0x82BFA608;
	sub_82BF9730(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,21344(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// lfs f12,15080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15080);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f12,136(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// lfs f11,21356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21356);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f11,140(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// lfs f10,-11912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11912);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f10,144(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lfs f9,28256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28256);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,148(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stfs f13,156(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f12,160(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f11,164(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f10,168(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f9,172(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// li r10,37
	ctx.r10.s64 = 37;
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stfs f13,180(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// addi r1,r31,304
	ctx.r1.s64 = ctx.r31.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFA6B8"))) PPC_WEAK_FUNC(sub_82BFA6B8);
PPC_FUNC_IMPL(__imp__sub_82BFA6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
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
	// bl 0x82706bf0
	ctx.lr = 0x82BFA6D0;
	sub_82706BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFA6E0"))) PPC_WEAK_FUNC(sub_82BFA6E0);
PPC_FUNC_IMPL(__imp__sub_82BFA6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r3,r11,124
	ctx.r3.s64 = ctx.r11.s64 + 124;
	// bl 0x823b6df0
	ctx.lr = 0x82BFA6FC;
	sub_823B6DF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFA70C"))) PPC_WEAK_FUNC(sub_82BFA70C);
PPC_FUNC_IMPL(__imp__sub_82BFA70C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r3,r11,148
	ctx.r3.s64 = ctx.r11.s64 + 148;
	// bl 0x823b6df0
	ctx.lr = 0x82BFA728;
	sub_823B6DF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFA738"))) PPC_WEAK_FUNC(sub_82BFA738);
PPC_FUNC_IMPL(__imp__sub_82BFA738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BFA740;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82bfa5f0
	ctx.lr = 0x82BFA758;
	sub_82BFA5F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFA768;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r27,r11,-6336
	ctx.r27.s64 = ctx.r11.s64 + -6336;
	// beq cr6,0x82bfa7a0
	if (ctx.cr6.eq) goto loc_82BFA7A0;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa7a0
	if (!ctx.cr6.eq) goto loc_82BFA7A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFA78C;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r27,-180
	ctx.r5.s64 = ctx.r27.s64 + -180;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFA7A0;
	sub_82C186D0(ctx, base);
loc_82BFA7A0:
	// lis r24,-31988
	ctx.r24.s64 = -2096365568;
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa7c0
	if (!ctx.cr6.eq) goto loc_82BFA7C0;
	// lfs f0,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfa7d8
	if (ctx.cr6.eq) goto loc_82BFA7D8;
loc_82BFA7C0:
	// addi r5,r27,-176
	ctx.r5.s64 = ctx.r27.s64 + -176;
	// lfs f1,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFA7D4;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
loc_82BFA7D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa7f4
	if (!ctx.cr6.eq) goto loc_82BFA7F4;
	// lfs f0,112(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfa808
	if (ctx.cr6.eq) goto loc_82BFA808;
loc_82BFA7F4:
	// addi r5,r27,-168
	ctx.r5.s64 = ctx.r27.s64 + -168;
	// lfs f1,112(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFA808;
	sub_82C18620(ctx, base);
loc_82BFA808:
	// addi r5,r27,-148
	ctx.r5.s64 = ctx.r27.s64 + -148;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// bl 0x82bf8a40
	ctx.lr = 0x82BFA818;
	sub_82BF8A40(ctx, base);
	// addi r5,r27,-136
	ctx.r5.s64 = ctx.r27.s64 + -136;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,132
	ctx.r3.s64 = ctx.r28.s64 + 132;
	// bl 0x82bf95a8
	ctx.lr = 0x82BFA828;
	sub_82BF95A8(ctx, base);
	// addi r5,r27,-108
	ctx.r5.s64 = ctx.r27.s64 + -108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,156
	ctx.r3.s64 = ctx.r28.s64 + 156;
	// bl 0x82bf95a8
	ctx.lr = 0x82BFA838;
	sub_82BF95A8(ctx, base);
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa854
	if (!ctx.cr6.eq) goto loc_82BFA854;
	// lfs f0,180(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfa868
	if (ctx.cr6.eq) goto loc_82BFA868;
loc_82BFA854:
	// addi r5,r27,-80
	ctx.r5.s64 = ctx.r27.s64 + -80;
	// lfs f1,180(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFA868;
	sub_82C18620(ctx, base);
loc_82BFA868:
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfa88c
	if (ctx.cr6.eq) goto loc_82BFA88C;
	// addi r5,r27,-60
	ctx.r5.s64 = ctx.r27.s64 + -60;
	// lwz r4,184(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFA888;
	sub_82C18570(ctx, base);
	// b 0x82bfa938
	goto loc_82BFA938;
loc_82BFA88C:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa8a8
	if (!ctx.cr6.eq) goto loc_82BFA8A8;
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// lwz r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfa938
	if (ctx.cr6.eq) goto loc_82BFA938;
loc_82BFA8A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFA8B8;
	sub_82C18020(ctx, base);
	// addi r5,r27,-48
	ctx.r5.s64 = ctx.r27.s64 + -48;
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFA8CC;
	sub_82C186D0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82BFA8D4:
	// slw r30,r25,r26
	ctx.r30.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf0090
	ctx.lr = 0x82BFA8E0;
	sub_82BF0090(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bfa930
	if (ctx.cr6.eq) goto loc_82BFA930;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BFA8F4;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfa924
	if (!ctx.cr6.eq) goto loc_82BFA924;
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfa914
	if (ctx.cr6.eq) goto loc_82BFA914;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BFA914:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BFA924;
	sub_82C184C0(ctx, base);
loc_82BFA924:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bfa8d4
	if (ctx.cr6.lt) goto loc_82BFA8D4;
loc_82BFA930:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFA938;
	sub_82C16F48(ctx, base);
loc_82BFA938:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa954
	if (!ctx.cr6.eq) goto loc_82BFA954;
	// lfs f0,188(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfa968
	if (ctx.cr6.eq) goto loc_82BFA968;
loc_82BFA954:
	// addi r5,r27,-24
	ctx.r5.s64 = ctx.r27.s64 + -24;
	// lfs f1,188(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFA968;
	sub_82C18620(ctx, base);
loc_82BFA968:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa984
	if (!ctx.cr6.eq) goto loc_82BFA984;
	// lfs f0,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfa998
	if (ctx.cr6.eq) goto loc_82BFA998;
loc_82BFA984:
	// addi r5,r27,-12
	ctx.r5.s64 = ctx.r27.s64 + -12;
	// lfs f1,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFA998;
	sub_82C18620(ctx, base);
loc_82BFA998:
	// lbz r11,9732(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfa9b4
	if (!ctx.cr6.eq) goto loc_82BFA9B4;
	// lfs f0,196(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfa9c8
	if (ctx.cr6.eq) goto loc_82BFA9C8;
loc_82BFA9B4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,196(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFA9C8;
	sub_82C18620(ctx, base);
loc_82BFA9C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bf9820
	ctx.lr = 0x82BFA9D8;
	sub_82BF9820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFA9E0;
	sub_82C16F48(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFA9E8"))) PPC_WEAK_FUNC(sub_82BFA9E8);
PPC_FUNC_IMPL(__imp__sub_82BFA9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bf9730
	ctx.lr = 0x82BFA9F8;
	sub_82BF9730(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,21344(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// li r10,38
	ctx.r10.s64 = 38;
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// sth r11,124(r3)
	PPC_STORE_U16(ctx.r3.u32 + 124, ctx.r11.u16);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// sth r11,126(r3)
	PPC_STORE_U16(ctx.r3.u32 + 126, ctx.r11.u16);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFAA40"))) PPC_WEAK_FUNC(sub_82BFAA40);
PPC_FUNC_IMPL(__imp__sub_82BFAA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BFAA48;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82bf9730
	ctx.lr = 0x82BFAA60;
	sub_82BF9730(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,21344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// li r11,38
	ctx.r11.s64 = 38;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// sth r24,204(r1)
	PPC_STORE_U16(ctx.r1.u32 + 204, ctx.r24.u16);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// sth r24,206(r1)
	PPC_STORE_U16(ctx.r1.u32 + 206, ctx.r24.u16);
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r24,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r24.u32);
	// bl 0x82c18020
	ctx.lr = 0x82BFAAA4;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-17580
	ctx.r29.s64 = ctx.r11.s64 + -17580;
	// beq cr6,0x82bfaadc
	if (ctx.cr6.eq) goto loc_82BFAADC;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfaadc
	if (!ctx.cr6.eq) goto loc_82BFAADC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFAAC8;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,11440
	ctx.r5.s64 = ctx.r29.s64 + 11440;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFAADC;
	sub_82C186D0(ctx, base);
loc_82BFAADC:
	// lis r31,-31988
	ctx.r31.s64 = -2096365568;
	// lbz r11,9732(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfaafc
	if (!ctx.cr6.eq) goto loc_82BFAAFC;
	// lwz r10,108(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bfab14
	if (ctx.cr6.eq) goto loc_82BFAB14;
loc_82BFAAFC:
	// addi r5,r29,11444
	ctx.r5.s64 = ctx.r29.s64 + 11444;
	// lwz r4,108(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFAB10;
	sub_82C186D0(ctx, base);
	// lbz r11,9732(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9732);
loc_82BFAB14:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfab30
	if (!ctx.cr6.eq) goto loc_82BFAB30;
	// lfs f0,112(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfab48
	if (ctx.cr6.eq) goto loc_82BFAB48;
loc_82BFAB30:
	// addi r5,r29,11460
	ctx.r5.s64 = ctx.r29.s64 + 11460;
	// lfs f1,112(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFAB44;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9732);
loc_82BFAB48:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfab64
	if (!ctx.cr6.eq) goto loc_82BFAB64;
	// lfs f0,116(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfab7c
	if (ctx.cr6.eq) goto loc_82BFAB7C;
loc_82BFAB64:
	// addi r5,r29,11472
	ctx.r5.s64 = ctx.r29.s64 + 11472;
	// lfs f1,116(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFAB78;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9732);
loc_82BFAB7C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfab98
	if (!ctx.cr6.eq) goto loc_82BFAB98;
	// lfs f0,120(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfabb0
	if (ctx.cr6.eq) goto loc_82BFABB0;
loc_82BFAB98:
	// addi r5,r29,11484
	ctx.r5.s64 = ctx.r29.s64 + 11484;
	// lfs f1,120(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFABAC;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9732);
loc_82BFABB0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfabcc
	if (!ctx.cr6.eq) goto loc_82BFABCC;
	// lhz r10,124(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 124);
	// lhz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 204);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bfabe4
	if (ctx.cr6.eq) goto loc_82BFABE4;
loc_82BFABCC:
	// addi r5,r29,11496
	ctx.r5.s64 = ctx.r29.s64 + 11496;
	// lhz r4,124(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 124);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c19078
	ctx.lr = 0x82BFABE0;
	sub_82C19078(ctx, base);
	// lbz r11,9732(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9732);
loc_82BFABE4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfac00
	if (!ctx.cr6.eq) goto loc_82BFAC00;
	// lhz r10,126(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// lhz r9,206(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 206);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bfac18
	if (ctx.cr6.eq) goto loc_82BFAC18;
loc_82BFAC00:
	// addi r5,r29,11520
	ctx.r5.s64 = ctx.r29.s64 + 11520;
	// lhz r4,126(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c19078
	ctx.lr = 0x82BFAC14;
	sub_82C19078(ctx, base);
	// lbz r11,9732(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9732);
loc_82BFAC18:
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfac3c
	if (ctx.cr6.eq) goto loc_82BFAC3C;
	// addi r5,r29,11536
	ctx.r5.s64 = ctx.r29.s64 + 11536;
	// lwz r4,128(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFAC38;
	sub_82C18570(ctx, base);
	// b 0x82bfacf4
	goto loc_82BFACF4;
loc_82BFAC3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfac58
	if (!ctx.cr6.eq) goto loc_82BFAC58;
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfacf4
	if (ctx.cr6.eq) goto loc_82BFACF4;
loc_82BFAC58:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFAC68;
	sub_82C18020(ctx, base);
	// addi r5,r29,11548
	ctx.r5.s64 = ctx.r29.s64 + 11548;
	// addi r4,r29,11552
	ctx.r4.s64 = ctx.r29.s64 + 11552;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFAC7C;
	sub_82C186D0(ctx, base);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82BFAC84:
	// slw r31,r25,r26
	ctx.r31.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r26.u8 & 0x3F));
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82bfaca0
	if (ctx.cr6.eq) goto loc_82BFACA0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82bfacec
	if (!ctx.cr6.eq) goto loc_82BFACEC;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82bfaca4
	goto loc_82BFACA4;
loc_82BFACA0:
	// addi r28,r29,-36
	ctx.r28.s64 = ctx.r29.s64 + -36;
loc_82BFACA4:
	// addi r4,r29,11564
	ctx.r4.s64 = ctx.r29.s64 + 11564;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BFACB0;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bface0
	if (!ctx.cr6.eq) goto loc_82BFACE0;
	// lwz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfacd0
	if (ctx.cr6.eq) goto loc_82BFACD0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BFACD0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BFACE0;
	sub_82C184C0(ctx, base);
loc_82BFACE0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,32
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 32, ctx.xer);
	// blt cr6,0x82bfac84
	if (ctx.cr6.lt) goto loc_82BFAC84;
loc_82BFACEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFACF4;
	sub_82C16F48(ctx, base);
loc_82BFACF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bf9820
	ctx.lr = 0x82BFAD04;
	sub_82BF9820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFAD0C;
	sub_82C16F48(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFAD18"))) PPC_WEAK_FUNC(sub_82BFAD18);
PPC_FUNC_IMPL(__imp__sub_82BFAD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFAD40"))) PPC_WEAK_FUNC(sub_82BFAD40);
PPC_FUNC_IMPL(__imp__sub_82BFAD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BFAD48;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFAD6C;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r29,r11,-5116
	ctx.r29.s64 = ctx.r11.s64 + -5116;
	// beq cr6,0x82bfada4
	if (ctx.cr6.eq) goto loc_82BFADA4;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfada4
	if (!ctx.cr6.eq) goto loc_82BFADA4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFAD90;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,-32
	ctx.r5.s64 = ctx.r29.s64 + -32;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFADA4;
	sub_82C186D0(ctx, base);
loc_82BFADA4:
	// lis r28,-31988
	ctx.r28.s64 = -2096365568;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
	// lfs f31,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfadc8
	if (!ctx.cr6.eq) goto loc_82BFADC8;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfade0
	if (ctx.cr6.eq) goto loc_82BFADE0;
loc_82BFADC8:
	// addi r5,r29,-28
	ctx.r5.s64 = ctx.r29.s64 + -28;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFADDC;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BFADE0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfadf8
	if (!ctx.cr6.eq) goto loc_82BFADF8;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfae10
	if (ctx.cr6.eq) goto loc_82BFAE10;
loc_82BFADF8:
	// addi r5,r29,-20
	ctx.r5.s64 = ctx.r29.s64 + -20;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFAE0C;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BFAE10:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfae28
	if (!ctx.cr6.eq) goto loc_82BFAE28;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfae40
	if (ctx.cr6.eq) goto loc_82BFAE40;
loc_82BFAE28:
	// addi r5,r29,-8
	ctx.r5.s64 = ctx.r29.s64 + -8;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFAE3C;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BFAE40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfae58
	if (!ctx.cr6.eq) goto loc_82BFAE58;
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfae6c
	if (ctx.cr6.eq) goto loc_82BFAE6C;
loc_82BFAE58:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFAE6C;
	sub_82C18620(ctx, base);
loc_82BFAE6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFAE74;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFAE80"))) PPC_WEAK_FUNC(sub_82BFAE80);
PPC_FUNC_IMPL(__imp__sub_82BFAE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFAEC0"))) PPC_WEAK_FUNC(sub_82BFAEC0);
PPC_FUNC_IMPL(__imp__sub_82BFAEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BFAEC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFAEE8;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,-5064
	ctx.r30.s64 = ctx.r11.s64 + -5064;
	// beq cr6,0x82bfaf20
	if (ctx.cr6.eq) goto loc_82BFAF20;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfaf20
	if (!ctx.cr6.eq) goto loc_82BFAF20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFAF0C;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFAF20;
	sub_82C186D0(ctx, base);
loc_82BFAF20:
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bfad40
	ctx.lr = 0x82BFAF30;
	sub_82BFAD40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// bl 0x82bfad40
	ctx.lr = 0x82BFAF40;
	sub_82BFAD40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFAF48;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFAF50"))) PPC_WEAK_FUNC(sub_82BFAF50);
PPC_FUNC_IMPL(__imp__sub_82BFAF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFAF78"))) PPC_WEAK_FUNC(sub_82BFAF78);
PPC_FUNC_IMPL(__imp__sub_82BFAF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BFAF80;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFAFA4;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-3892
	ctx.r28.s64 = ctx.r11.s64 + -3892;
	// beq cr6,0x82bfafdc
	if (ctx.cr6.eq) goto loc_82BFAFDC;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfafdc
	if (!ctx.cr6.eq) goto loc_82BFAFDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFAFC8;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFAFDC;
	sub_82C186D0(ctx, base);
loc_82BFAFDC:
	// lis r30,-31988
	ctx.r30.s64 = -2096365568;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// lfs f31,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfb000
	if (!ctx.cr6.eq) goto loc_82BFB000;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfb018
	if (ctx.cr6.eq) goto loc_82BFB018;
loc_82BFB000:
	// addi r5,r28,-20
	ctx.r5.s64 = ctx.r28.s64 + -20;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB014;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
loc_82BFB018:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb030
	if (!ctx.cr6.eq) goto loc_82BFB030;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfb048
	if (ctx.cr6.eq) goto loc_82BFB048;
loc_82BFB030:
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB044;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
loc_82BFB048:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfb068
	if (!ctx.cr6.eq) goto loc_82BFB068;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfb07c
	if (ctx.cr6.eq) goto loc_82BFB07C;
loc_82BFB068:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB07C;
	sub_82C18620(ctx, base);
loc_82BFB07C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFB084;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFB090"))) PPC_WEAK_FUNC(sub_82BFB090);
PPC_FUNC_IMPL(__imp__sub_82BFB090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,21344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB0D0"))) PPC_WEAK_FUNC(sub_82BFB0D0);
PPC_FUNC_IMPL(__imp__sub_82BFB0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BFB0D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFB0F8;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,-3840
	ctx.r30.s64 = ctx.r11.s64 + -3840;
	// beq cr6,0x82bfb130
	if (ctx.cr6.eq) goto loc_82BFB130;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfb130
	if (!ctx.cr6.eq) goto loc_82BFB130;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFB11C;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFB130;
	sub_82C186D0(ctx, base);
loc_82BFB130:
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bfaf78
	ctx.lr = 0x82BFB140;
	sub_82BFAF78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x82bfaf78
	ctx.lr = 0x82BFB150;
	sub_82BFAF78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFB158;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFB160"))) PPC_WEAK_FUNC(sub_82BFB160);
PPC_FUNC_IMPL(__imp__sub_82BFB160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-18944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18944);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lfs f13,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB188"))) PPC_WEAK_FUNC(sub_82BFB188);
PPC_FUNC_IMPL(__imp__sub_82BFB188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BFB190;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFB1B0;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r28,r11,-3792
	ctx.r28.s64 = ctx.r11.s64 + -3792;
	// beq cr6,0x82bfb1e8
	if (ctx.cr6.eq) goto loc_82BFB1E8;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfb1e8
	if (!ctx.cr6.eq) goto loc_82BFB1E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFB1D4;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,-28
	ctx.r5.s64 = ctx.r28.s64 + -28;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFB1E8;
	sub_82C186D0(ctx, base);
loc_82BFB1E8:
	// lis r29,-31988
	ctx.r29.s64 = -2096365568;
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfb20c
	if (!ctx.cr6.eq) goto loc_82BFB20C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-18944(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18944);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfb224
	if (ctx.cr6.eq) goto loc_82BFB224;
loc_82BFB20C:
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB220;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB224:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb244
	if (!ctx.cr6.eq) goto loc_82BFB244;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfb25c
	if (ctx.cr6.eq) goto loc_82BFB25C;
loc_82BFB244:
	// addi r5,r28,-12
	ctx.r5.s64 = ctx.r28.s64 + -12;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB258;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB25C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfb274
	if (!ctx.cr6.eq) goto loc_82BFB274;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfb288
	if (ctx.cr6.eq) goto loc_82BFB288;
loc_82BFB274:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BFB288;
	sub_82C184C0(ctx, base);
loc_82BFB288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFB290;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFB298"))) PPC_WEAK_FUNC(sub_82BFB298);
PPC_FUNC_IMPL(__imp__sub_82BFB298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
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
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB2F8"))) PPC_WEAK_FUNC(sub_82BFB2F8);
PPC_FUNC_IMPL(__imp__sub_82BFB2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BFB300;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFB320;
	sub_82C18020(ctx, base);
	// lis r29,-31988
	ctx.r29.s64 = -2096365568;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r28,r10,-1612
	ctx.r28.s64 = ctx.r10.s64 + -1612;
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfb344
	if (!ctx.cr6.eq) goto loc_82BFB344;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfb35c
	if (ctx.cr6.eq) goto loc_82BFB35C;
loc_82BFB344:
	// addi r5,r28,-256
	ctx.r5.s64 = ctx.r28.s64 + -256;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFB358;
	sub_82C186D0(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB35C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb374
	if (!ctx.cr6.eq) goto loc_82BFB374;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfb38c
	if (ctx.cr6.eq) goto loc_82BFB38C;
loc_82BFB374:
	// addi r5,r28,-252
	ctx.r5.s64 = ctx.r28.s64 + -252;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFB388;
	sub_82C186D0(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB38C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb3a4
	if (!ctx.cr6.eq) goto loc_82BFB3A4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfb3bc
	if (ctx.cr6.eq) goto loc_82BFB3BC;
loc_82BFB3A4:
	// addi r5,r28,-236
	ctx.r5.s64 = ctx.r28.s64 + -236;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFB3B8;
	sub_82C186D0(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB3BC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb3d4
	if (!ctx.cr6.eq) goto loc_82BFB3D4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfb3ec
	if (ctx.cr6.eq) goto loc_82BFB3EC;
loc_82BFB3D4:
	// addi r5,r28,-228
	ctx.r5.s64 = ctx.r28.s64 + -228;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFB3E8;
	sub_82C186D0(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB3EC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfs f31,21348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82bfb438
	if (!ctx.cr6.eq) goto loc_82BFB438;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82bfb428
	if (!ctx.cr6.eq) goto loc_82BFB428;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82bfb428
	if (!ctx.cr6.eq) goto loc_82BFB428;
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfb42c
	if (ctx.cr6.eq) goto loc_82BFB42C;
loc_82BFB428:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82BFB42C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfb450
	if (ctx.cr6.eq) goto loc_82BFB450;
loc_82BFB438:
	// addi r5,r28,-220
	ctx.r5.s64 = ctx.r28.s64 + -220;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BFB44C;
	sub_82C18B38(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB450:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb490
	if (!ctx.cr6.eq) goto loc_82BFB490;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82bfb480
	if (!ctx.cr6.eq) goto loc_82BFB480;
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82bfb480
	if (!ctx.cr6.eq) goto loc_82BFB480;
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfb484
	if (ctx.cr6.eq) goto loc_82BFB484;
loc_82BFB480:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82BFB484:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfb4a8
	if (ctx.cr6.eq) goto loc_82BFB4A8;
loc_82BFB490:
	// addi r5,r28,-212
	ctx.r5.s64 = ctx.r28.s64 + -212;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BFB4A4;
	sub_82C18B38(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB4A8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb4c0
	if (!ctx.cr6.eq) goto loc_82BFB4C0;
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfb4d8
	if (ctx.cr6.eq) goto loc_82BFB4D8;
loc_82BFB4C0:
	// addi r5,r28,-204
	ctx.r5.s64 = ctx.r28.s64 + -204;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB4D4;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB4D8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb4f0
	if (!ctx.cr6.eq) goto loc_82BFB4F0;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfb508
	if (ctx.cr6.eq) goto loc_82BFB508;
loc_82BFB4F0:
	// addi r5,r28,-176
	ctx.r5.s64 = ctx.r28.s64 + -176;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB504;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB508:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb520
	if (!ctx.cr6.eq) goto loc_82BFB520;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfb538
	if (ctx.cr6.eq) goto loc_82BFB538;
loc_82BFB520:
	// addi r5,r28,-156
	ctx.r5.s64 = ctx.r28.s64 + -156;
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB534;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB538:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb550
	if (!ctx.cr6.eq) goto loc_82BFB550;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfb568
	if (ctx.cr6.eq) goto loc_82BFB568;
loc_82BFB550:
	// addi r5,r28,-128
	ctx.r5.s64 = ctx.r28.s64 + -128;
	// lfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB564;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB568:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb580
	if (!ctx.cr6.eq) goto loc_82BFB580;
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfb598
	if (ctx.cr6.eq) goto loc_82BFB598;
loc_82BFB580:
	// addi r5,r28,-104
	ctx.r5.s64 = ctx.r28.s64 + -104;
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB594;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB598:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb5b0
	if (!ctx.cr6.eq) goto loc_82BFB5B0;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfb5c8
	if (ctx.cr6.eq) goto loc_82BFB5C8;
loc_82BFB5B0:
	// addi r5,r28,-80
	ctx.r5.s64 = ctx.r28.s64 + -80;
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB5C4;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB5C8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb5e0
	if (!ctx.cr6.eq) goto loc_82BFB5E0;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfb5f8
	if (ctx.cr6.eq) goto loc_82BFB5F8;
loc_82BFB5E0:
	// addi r5,r28,-52
	ctx.r5.s64 = ctx.r28.s64 + -52;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB5F4;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB5F8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfb610
	if (!ctx.cr6.eq) goto loc_82BFB610;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfb628
	if (ctx.cr6.eq) goto loc_82BFB628;
loc_82BFB610:
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB624;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
loc_82BFB628:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfb640
	if (!ctx.cr6.eq) goto loc_82BFB640;
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfb654
	if (ctx.cr6.eq) goto loc_82BFB654;
loc_82BFB640:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFB654;
	sub_82C18620(ctx, base);
loc_82BFB654:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFB65C;
	sub_82C16F48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFB668"))) PPC_WEAK_FUNC(sub_82BFB668);
PPC_FUNC_IMPL(__imp__sub_82BFB668) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFB6B0"))) PPC_WEAK_FUNC(sub_82BFB6B0);
PPC_FUNC_IMPL(__imp__sub_82BFB6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BFB6B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r28,48
	ctx.r29.s64 = ctx.r28.s64 + 48;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfb6d4
	if (ctx.cr6.eq) goto loc_82BFB6D4;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFB6D4;
	sub_82D5E5B0(ctx, base);
loc_82BFB6D4:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r28,24
	ctx.r30.s64 = ctx.r28.s64 + 24;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfb6f8
	if (ctx.cr6.eq) goto loc_82BFB6F8;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFB6F8;
	sub_82D5E5B0(ctx, base);
loc_82BFB6F8:
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfb718
	if (ctx.cr6.eq) goto loc_82BFB718;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFB718;
	sub_82D5E5B0(ctx, base);
loc_82BFB718:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFB738"))) PPC_WEAK_FUNC(sub_82BFB738);
PPC_FUNC_IMPL(__imp__sub_82BFB738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4ac
	ctx.lr = 0x82BFB740;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-304
	ctx.r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFB7A0;
	sub_82C18020(ctx, base);
	// lis r22,-31988
	ctx.r22.s64 = -2096365568;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r26,r10,-10128
	ctx.r26.s64 = ctx.r10.s64 + -10128;
	// lbz r11,9732(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfb7c4
	if (!ctx.cr6.eq) goto loc_82BFB7C4;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfb7dc
	if (ctx.cr6.eq) goto loc_82BFB7DC;
loc_82BFB7C4:
	// addi r5,r26,-132
	ctx.r5.s64 = ctx.r26.s64 + -132;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFB7D8;
	sub_82C186D0(ctx, base);
	// lbz r11,9732(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 9732);
loc_82BFB7DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfb7f4
	if (!ctx.cr6.eq) goto loc_82BFB7F4;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfb808
	if (ctx.cr6.eq) goto loc_82BFB808;
loc_82BFB7F4:
	// addi r5,r26,-128
	ctx.r5.s64 = ctx.r26.s64 + -128;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFB808;
	sub_82C186D0(ctx, base);
loc_82BFB808:
	// lis r21,-31980
	ctx.r21.s64 = -2095841280;
	// lbz r11,31440(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 31440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfb858
	if (ctx.cr6.eq) goto loc_82BFB858;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r5,r26,-112
	ctx.r5.s64 = ctx.r26.s64 + -112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18dd0
	ctx.lr = 0x82BFB838;
	sub_82C18DD0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfb848
	if (ctx.cr6.eq) goto loc_82BFB848;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFB848;
	sub_82D5E5B0(ctx, base);
loc_82BFB848:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// b 0x82bfb86c
	goto loc_82BFB86C;
loc_82BFB858:
	// addi r5,r26,-104
	ctx.r5.s64 = ctx.r26.s64 + -104;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r24,8
	ctx.r4.s64 = ctx.r24.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18dd0
	ctx.lr = 0x82BFB86C;
	sub_82C18DD0(ctx, base);
loc_82BFB86C:
	// lbz r11,31440(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 31440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfb8b8
	if (ctx.cr6.eq) goto loc_82BFB8B8;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r5,r26,-96
	ctx.r5.s64 = ctx.r26.s64 + -96;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18ec0
	ctx.lr = 0x82BFB898;
	sub_82C18EC0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfb8a8
	if (ctx.cr6.eq) goto loc_82BFB8A8;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFB8A8;
	sub_82D5E5B0(ctx, base);
loc_82BFB8A8:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x82bfb8cc
	goto loc_82BFB8CC;
loc_82BFB8B8:
	// addi r5,r26,-84
	ctx.r5.s64 = ctx.r26.s64 + -84;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r24,24
	ctx.r4.s64 = ctx.r24.s64 + 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18ec0
	ctx.lr = 0x82BFB8CC;
	sub_82C18EC0(ctx, base);
loc_82BFB8CC:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfb8f0
	if (ctx.cr6.eq) goto loc_82BFB8F0;
	// addi r5,r26,-72
	ctx.r5.s64 = ctx.r26.s64 + -72;
	// lwz r4,40(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFB8EC;
	sub_82C18570(ctx, base);
	// b 0x82bfb998
	goto loc_82BFB998;
loc_82BFB8F0:
	// lbz r11,9732(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfb908
	if (!ctx.cr6.eq) goto loc_82BFB908;
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfb998
	if (ctx.cr6.eq) goto loc_82BFB998;
loc_82BFB908:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFB918;
	sub_82C18020(ctx, base);
	// addi r5,r26,-64
	ctx.r5.s64 = ctx.r26.s64 + -64;
	// addi r4,r26,-60
	ctx.r4.s64 = ctx.r26.s64 + -60;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFB92C;
	sub_82C186D0(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// li r23,1
	ctx.r23.s64 = 1;
loc_82BFB934:
	// slw r28,r23,r25
	ctx.r28.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r25.u8 & 0x3F));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bed6e8
	ctx.lr = 0x82BFB940;
	sub_82BED6E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82bfb990
	if (ctx.cr6.eq) goto loc_82BFB990;
	// addi r4,r26,-52
	ctx.r4.s64 = ctx.r26.s64 + -52;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BFB954;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfb984
	if (!ctx.cr6.eq) goto loc_82BFB984;
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfb974
	if (ctx.cr6.eq) goto loc_82BFB974;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82BFB974:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BFB984;
	sub_82C184C0(ctx, base);
loc_82BFB984:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,32
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 32, ctx.xer);
	// blt cr6,0x82bfb934
	if (ctx.cr6.lt) goto loc_82BFB934;
loc_82BFB990:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFB998;
	sub_82C16F48(ctx, base);
loc_82BFB998:
	// lbz r11,31440(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 31440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfb9b0
	if (!ctx.cr6.eq) goto loc_82BFB9B0;
	// addi r5,r26,-44
	ctx.r5.s64 = ctx.r26.s64 + -44;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bfb9d0
	goto loc_82BFB9D0;
loc_82BFB9B0:
	// lbz r11,9732(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfb9c8
	if (!ctx.cr6.eq) goto loc_82BFB9C8;
	// lwz r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfb9dc
	if (ctx.cr6.eq) goto loc_82BFB9DC;
loc_82BFB9C8:
	// lwz r4,44(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// addi r5,r26,-28
	ctx.r5.s64 = ctx.r26.s64 + -28;
loc_82BFB9D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFB9DC;
	sub_82C18570(ctx, base);
loc_82BFB9DC:
	// lbz r11,31440(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 31440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfba28
	if (!ctx.cr6.eq) goto loc_82BFBA28;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r5,r26,-12
	ctx.r5.s64 = ctx.r26.s64 + -12;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18990
	ctx.lr = 0x82BFBA08;
	sub_82C18990(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfba18
	if (ctx.cr6.eq) goto loc_82BFBA18;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFBA18;
	sub_82D5E5B0(ctx, base);
loc_82BFBA18:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// b 0x82bfba3c
	goto loc_82BFBA3C;
loc_82BFBA28:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r24,48
	ctx.r4.s64 = ctx.r24.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18990
	ctx.lr = 0x82BFBA3C;
	sub_82C18990(ctx, base);
loc_82BFBA3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFBA44;
	sub_82C16F48(ctx, base);
	// addi r1,r31,304
	ctx.r1.s64 = ctx.r31.s64 + 304;
	// b 0x82d5c4fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFBA4C"))) PPC_WEAK_FUNC(sub_82BFBA4C);
PPC_FUNC_IMPL(__imp__sub_82BFBA4C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82bfb6b0
	ctx.lr = 0x82BFBA64;
	sub_82BFB6B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFBA74"))) PPC_WEAK_FUNC(sub_82BFBA74);
PPC_FUNC_IMPL(__imp__sub_82BFBA74) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
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
	// bl 0x82c07db0
	ctx.lr = 0x82BFBA8C;
	sub_82C07DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFBA9C"))) PPC_WEAK_FUNC(sub_82BFBA9C);
PPC_FUNC_IMPL(__imp__sub_82BFBA9C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
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
	// bl 0x82c07db0
	ctx.lr = 0x82BFBAB4;
	sub_82C07DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFBAC4"))) PPC_WEAK_FUNC(sub_82BFBAC4);
PPC_FUNC_IMPL(__imp__sub_82BFBAC4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-304
	ctx.r31.s64 = ctx.r12.s64 + -304;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82c07db0
	ctx.lr = 0x82BFBADC;
	sub_82C07DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFBAF0"))) PPC_WEAK_FUNC(sub_82BFBAF0);
PPC_FUNC_IMPL(__imp__sub_82BFBAF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFBB18"))) PPC_WEAK_FUNC(sub_82BFBB18);
PPC_FUNC_IMPL(__imp__sub_82BFBB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BFBB20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfbb3c
	if (ctx.cr6.eq) goto loc_82BFBB3C;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFBB3C;
	sub_82D5E5B0(ctx, base);
loc_82BFBB3C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfbb5c
	if (ctx.cr6.eq) goto loc_82BFBB5C;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFBB5C;
	sub_82D5E5B0(ctx, base);
loc_82BFBB5C:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFBB78"))) PPC_WEAK_FUNC(sub_82BFBB78);
PPC_FUNC_IMPL(__imp__sub_82BFBB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82BFBB80;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFBBC8;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r28,r11,-22316
	ctx.r28.s64 = ctx.r11.s64 + -22316;
	// beq cr6,0x82bfbc00
	if (ctx.cr6.eq) goto loc_82BFBC00;
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfbc00
	if (!ctx.cr6.eq) goto loc_82BFBC00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFBBEC;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,12292
	ctx.r5.s64 = ctx.r28.s64 + 12292;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFBC00;
	sub_82C186D0(ctx, base);
loc_82BFBC00:
	// lis r29,-31980
	ctx.r29.s64 = -2095841280;
	// lbz r11,31440(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 31440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfbc50
	if (ctx.cr6.eq) goto loc_82BFBC50;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r5,r28,12296
	ctx.r5.s64 = ctx.r28.s64 + 12296;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18dd0
	ctx.lr = 0x82BFBC30;
	sub_82C18DD0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfbc40
	if (ctx.cr6.eq) goto loc_82BFBC40;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFBC40;
	sub_82D5E5B0(ctx, base);
loc_82BFBC40:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// b 0x82bfbc64
	goto loc_82BFBC64;
loc_82BFBC50:
	// addi r5,r28,12304
	ctx.r5.s64 = ctx.r28.s64 + 12304;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18dd0
	ctx.lr = 0x82BFBC64;
	sub_82C18DD0(ctx, base);
loc_82BFBC64:
	// lbz r11,31440(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 31440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfbcb0
	if (ctx.cr6.eq) goto loc_82BFBCB0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r5,r28,12312
	ctx.r5.s64 = ctx.r28.s64 + 12312;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18ec0
	ctx.lr = 0x82BFBC90;
	sub_82C18EC0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfbca0
	if (ctx.cr6.eq) goto loc_82BFBCA0;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFBCA0;
	sub_82D5E5B0(ctx, base);
loc_82BFBCA0:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x82bfbcc4
	goto loc_82BFBCC4;
loc_82BFBCB0:
	// addi r5,r28,12324
	ctx.r5.s64 = ctx.r28.s64 + 12324;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r23,16
	ctx.r4.s64 = ctx.r23.s64 + 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18ec0
	ctx.lr = 0x82BFBCC4;
	sub_82C18EC0(ctx, base);
loc_82BFBCC4:
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfbce8
	if (ctx.cr6.eq) goto loc_82BFBCE8;
	// addi r5,r28,12336
	ctx.r5.s64 = ctx.r28.s64 + 12336;
	// lwz r4,32(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFBCE4;
	sub_82C18570(ctx, base);
	// b 0x82bfbdb0
	goto loc_82BFBDB0;
loc_82BFBCE8:
	// lis r11,-31988
	ctx.r11.s64 = -2096365568;
	// lbz r11,9732(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfbd04
	if (!ctx.cr6.eq) goto loc_82BFBD04;
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfbdb0
	if (ctx.cr6.eq) goto loc_82BFBDB0;
loc_82BFBD04:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFBD14;
	sub_82C18020(ctx, base);
	// addi r5,r28,12344
	ctx.r5.s64 = ctx.r28.s64 + 12344;
	// addi r4,r28,12348
	ctx.r4.s64 = ctx.r28.s64 + 12348;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFBD28;
	sub_82C186D0(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82BFBD30:
	// slw r27,r24,r25
	ctx.r27.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r25.u8 & 0x3F));
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82bfbd5c
	if (ctx.cr6.eq) goto loc_82BFBD5C;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82bfbd54
	if (ctx.cr6.eq) goto loc_82BFBD54;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x82bfbda8
	if (!ctx.cr6.eq) goto loc_82BFBDA8;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x82bfbd60
	goto loc_82BFBD60;
loc_82BFBD54:
	// addi r29,r28,-24
	ctx.r29.s64 = ctx.r28.s64 + -24;
	// b 0x82bfbd60
	goto loc_82BFBD60;
loc_82BFBD5C:
	// addi r29,r28,-44
	ctx.r29.s64 = ctx.r28.s64 + -44;
loc_82BFBD60:
	// addi r4,r28,12356
	ctx.r4.s64 = ctx.r28.s64 + 12356;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BFBD6C;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfbd9c
	if (!ctx.cr6.eq) goto loc_82BFBD9C;
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfbd8c
	if (ctx.cr6.eq) goto loc_82BFBD8C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82BFBD8C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BFBD9C;
	sub_82C184C0(ctx, base);
loc_82BFBD9C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,32
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 32, ctx.xer);
	// blt cr6,0x82bfbd30
	if (ctx.cr6.lt) goto loc_82BFBD30;
loc_82BFBDA8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFBDB0;
	sub_82C16F48(ctx, base);
loc_82BFBDB0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFBDB8;
	sub_82C16F48(ctx, base);
	// addi r1,r31,240
	ctx.r1.s64 = ctx.r31.s64 + 240;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFBDC0"))) PPC_WEAK_FUNC(sub_82BFBDC0);
PPC_FUNC_IMPL(__imp__sub_82BFBDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82bfbb18
	ctx.lr = 0x82BFBDD8;
	sub_82BFBB18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFBDE8"))) PPC_WEAK_FUNC(sub_82BFBDE8);
PPC_FUNC_IMPL(__imp__sub_82BFBDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
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
	// bl 0x82c07db0
	ctx.lr = 0x82BFBE00;
	sub_82C07DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFBE10"))) PPC_WEAK_FUNC(sub_82BFBE10);
PPC_FUNC_IMPL(__imp__sub_82BFBE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-240
	ctx.r31.s64 = ctx.r12.s64 + -240;
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
	// bl 0x82c07db0
	ctx.lr = 0x82BFBE28;
	sub_82C07DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFBE38"))) PPC_WEAK_FUNC(sub_82BFBE38);
PPC_FUNC_IMPL(__imp__sub_82BFBE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,93
	ctx.r10.s64 = 93;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFBE98"))) PPC_WEAK_FUNC(sub_82BFBE98);
PPC_FUNC_IMPL(__imp__sub_82BFBE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x82BFBEA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfbebc
	if (ctx.cr6.eq) goto loc_82BFBEBC;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFBEBC;
	sub_82D5E5B0(ctx, base);
loc_82BFBEBC:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfbedc
	if (ctx.cr6.eq) goto loc_82BFBEDC;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFBEDC;
	sub_82D5E5B0(ctx, base);
loc_82BFBEDC:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFBEF8"))) PPC_WEAK_FUNC(sub_82BFBEF8);
PPC_FUNC_IMPL(__imp__sub_82BFBEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BFBF00;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r11,93
	ctx.r11.s64 = 93;
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFBF78;
	sub_82C18020(ctx, base);
	// lis r27,-31988
	ctx.r27.s64 = -2096365568;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r26,r10,-9904
	ctx.r26.s64 = ctx.r10.s64 + -9904;
	// lbz r11,9732(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfbf9c
	if (!ctx.cr6.eq) goto loc_82BFBF9C;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfbfb4
	if (ctx.cr6.eq) goto loc_82BFBFB4;
loc_82BFBF9C:
	// addi r5,r26,-4
	ctx.r5.s64 = ctx.r26.s64 + -4;
	// lwz r4,40(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFBFB0;
	sub_82C186D0(ctx, base);
	// lbz r11,9732(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 9732);
loc_82BFBFB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfbfcc
	if (!ctx.cr6.eq) goto loc_82BFBFCC;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfbfe0
	if (ctx.cr6.eq) goto loc_82BFBFE0;
loc_82BFBFCC:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFBFE0;
	sub_82C186D0(ctx, base);
loc_82BFBFE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lis r28,-31980
	ctx.r28.s64 = -2095841280;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r27,31440(r28)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r28.u32 + 31440);
	// stb r30,31440(r28)
	PPC_STORE_U8(ctx.r28.u32 + 31440, ctx.r30.u8);
	// bl 0x82bfbb78
	ctx.lr = 0x82BFBFFC;
	sub_82BFBB78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r27,31440(r28)
	PPC_STORE_U8(ctx.r28.u32 + 31440, ctx.r27.u8);
	// bl 0x82c16f48
	ctx.lr = 0x82BFC008;
	sub_82C16F48(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC010"))) PPC_WEAK_FUNC(sub_82BFC010);
PPC_FUNC_IMPL(__imp__sub_82BFC010) {
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
	// bl 0x82bfbe98
	ctx.lr = 0x82BFC028;
	sub_82BFBE98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC038"))) PPC_WEAK_FUNC(sub_82BFC038);
PPC_FUNC_IMPL(__imp__sub_82BFC038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r10,255
	ctx.r10.s64 = 255;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-28044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28044);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f13,96(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC0C0"))) PPC_WEAK_FUNC(sub_82BFC0C0);
PPC_FUNC_IMPL(__imp__sub_82BFC0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BFC0C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r30,104
	ctx.r29.s64 = ctx.r30.s64 + 104;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc0e4
	if (ctx.cr6.eq) goto loc_82BFC0E4;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFC0E4;
	sub_82D5E5B0(ctx, base);
loc_82BFC0E4:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r30,80
	ctx.r28.s64 = ctx.r30.s64 + 80;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc108
	if (ctx.cr6.eq) goto loc_82BFC108;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFC108;
	sub_82D5E5B0(ctx, base);
loc_82BFC108:
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc128
	if (ctx.cr6.eq) goto loc_82BFC128;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFC128;
	sub_82D5E5B0(ctx, base);
loc_82BFC128:
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc148
	if (ctx.cr6.eq) goto loc_82BFC148;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFC148;
	sub_82D5E5B0(ctx, base);
loc_82BFC148:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc164
	if (ctx.cr6.eq) goto loc_82BFC164;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFC164;
	sub_82D5E5B0(ctx, base);
loc_82BFC164:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC180"))) PPC_WEAK_FUNC(sub_82BFC180);
PPC_FUNC_IMPL(__imp__sub_82BFC180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82BFC188;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f31,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// lfs f30,-28044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28044);
	ctx.f30.f64 = double(temp.f32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stfs f30,208(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFC230;
	sub_82C18020(ctx, base);
	// lis r26,-31988
	ctx.r26.s64 = -2096365568;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r28,r10,-22392
	ctx.r28.s64 = ctx.r10.s64 + -22392;
	// lbz r11,9732(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfc254
	if (!ctx.cr6.eq) goto loc_82BFC254;
	// lwz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfc26c
	if (ctx.cr6.eq) goto loc_82BFC26C;
loc_82BFC254:
	// addi r5,r28,12524
	ctx.r5.s64 = ctx.r28.s64 + 12524;
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFC268;
	sub_82C186D0(ctx, base);
	// lbz r11,9732(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9732);
loc_82BFC26C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfc284
	if (!ctx.cr6.eq) goto loc_82BFC284;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfc298
	if (ctx.cr6.eq) goto loc_82BFC298;
loc_82BFC284:
	// addi r5,r28,12528
	ctx.r5.s64 = ctx.r28.s64 + 12528;
	// lwz r4,44(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFC298;
	sub_82C186D0(ctx, base);
loc_82BFC298:
	// lis r25,-31980
	ctx.r25.s64 = -2095841280;
	// lbz r11,31440(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 31440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfc2e8
	if (ctx.cr6.eq) goto loc_82BFC2E8;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r5,r28,12544
	ctx.r5.s64 = ctx.r28.s64 + 12544;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c188b8
	ctx.lr = 0x82BFC2C8;
	sub_82C188B8(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc2d8
	if (ctx.cr6.eq) goto loc_82BFC2D8;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFC2D8;
	sub_82D5E5B0(ctx, base);
loc_82BFC2D8:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// b 0x82bfc2fc
	goto loc_82BFC2FC;
loc_82BFC2E8:
	// addi r5,r28,12564
	ctx.r5.s64 = ctx.r28.s64 + 12564;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,48
	ctx.r4.s64 = ctx.r27.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c188b8
	ctx.lr = 0x82BFC2FC;
	sub_82C188B8(ctx, base);
loc_82BFC2FC:
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfc320
	if (ctx.cr6.eq) goto loc_82BFC320;
	// addi r5,r28,12584
	ctx.r5.s64 = ctx.r28.s64 + 12584;
	// lwz r4,64(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFC31C;
	sub_82C18570(ctx, base);
	// b 0x82bfc378
	goto loc_82BFC378;
loc_82BFC320:
	// lbz r11,9732(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfc338
	if (!ctx.cr6.eq) goto loc_82BFC338;
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x82bfc378
	if (ctx.cr6.eq) goto loc_82BFC378;
loc_82BFC338:
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bfc364
	if (ctx.cr6.lt) goto loc_82BFC364;
	// beq cr6,0x82bfc35c
	if (ctx.cr6.eq) goto loc_82BFC35C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82bfc368
	if (!ctx.cr6.lt) goto loc_82BFC368;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82bfc368
	goto loc_82BFC368;
loc_82BFC35C:
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// b 0x82bfc368
	goto loc_82BFC368;
loc_82BFC364:
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
loc_82BFC368:
	// addi r5,r28,12608
	ctx.r5.s64 = ctx.r28.s64 + 12608;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFC378;
	sub_82C186D0(ctx, base);
loc_82BFC378:
	// lbz r11,9732(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfc390
	if (!ctx.cr6.eq) goto loc_82BFC390;
	// lfs f0,68(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfc3a4
	if (ctx.cr6.eq) goto loc_82BFC3A4;
loc_82BFC390:
	// addi r5,r28,12632
	ctx.r5.s64 = ctx.r28.s64 + 12632;
	// lfs f1,68(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFC3A4;
	sub_82C18620(ctx, base);
loc_82BFC3A4:
	// lbz r11,9732(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfc3bc
	if (!ctx.cr6.eq) goto loc_82BFC3BC;
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfc3d0
	if (ctx.cr6.eq) goto loc_82BFC3D0;
loc_82BFC3BC:
	// addi r5,r28,12660
	ctx.r5.s64 = ctx.r28.s64 + 12660;
	// lwz r4,72(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFC3D0;
	sub_82C18570(ctx, base);
loc_82BFC3D0:
	// lbz r11,9732(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfc3e8
	if (!ctx.cr6.eq) goto loc_82BFC3E8;
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfc3fc
	if (ctx.cr6.eq) goto loc_82BFC3FC;
loc_82BFC3E8:
	// addi r5,r28,12672
	ctx.r5.s64 = ctx.r28.s64 + 12672;
	// lwz r4,76(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFC3FC;
	sub_82C18570(ctx, base);
loc_82BFC3FC:
	// addi r5,r28,12688
	ctx.r5.s64 = ctx.r28.s64 + 12688;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,80
	ctx.r4.s64 = ctx.r27.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18990
	ctx.lr = 0x82BFC410;
	sub_82C18990(ctx, base);
	// lbz r11,9732(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfc428
	if (!ctx.cr6.eq) goto loc_82BFC428;
	// lfs f0,96(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82bfc440
	if (ctx.cr6.eq) goto loc_82BFC440;
loc_82BFC428:
	// addi r5,r28,12700
	ctx.r5.s64 = ctx.r28.s64 + 12700;
	// lfs f1,96(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFC43C;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9732);
loc_82BFC440:
	// lbz r10,31440(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 31440);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfc458
	if (!ctx.cr6.eq) goto loc_82BFC458;
	// addi r5,r28,12720
	ctx.r5.s64 = ctx.r28.s64 + 12720;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bfc478
	goto loc_82BFC478;
loc_82BFC458:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfc470
	if (!ctx.cr6.eq) goto loc_82BFC470;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfc484
	if (ctx.cr6.eq) goto loc_82BFC484;
loc_82BFC470:
	// lwz r4,100(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r5,r28,12736
	ctx.r5.s64 = ctx.r28.s64 + 12736;
loc_82BFC478:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFC484;
	sub_82C18570(ctx, base);
loc_82BFC484:
	// lbz r11,31440(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 31440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfc4d0
	if (!ctx.cr6.eq) goto loc_82BFC4D0;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r5,r28,12752
	ctx.r5.s64 = ctx.r28.s64 + 12752;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18990
	ctx.lr = 0x82BFC4B0;
	sub_82C18990(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc4c0
	if (ctx.cr6.eq) goto loc_82BFC4C0;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFC4C0;
	sub_82D5E5B0(ctx, base);
loc_82BFC4C0:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// b 0x82bfc4e4
	goto loc_82BFC4E4;
loc_82BFC4D0:
	// addi r5,r28,12764
	ctx.r5.s64 = ctx.r28.s64 + 12764;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,104
	ctx.r4.s64 = ctx.r27.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18990
	ctx.lr = 0x82BFC4E4;
	sub_82C18990(ctx, base);
loc_82BFC4E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bfbb78
	ctx.lr = 0x82BFC4F4;
	sub_82BFBB78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFC4FC;
	sub_82C16F48(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82bfc0c0
	ctx.lr = 0x82BFC504;
	sub_82BFC0C0(ctx, base);
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC514"))) PPC_WEAK_FUNC(sub_82BFC514);
PPC_FUNC_IMPL(__imp__sub_82BFC514) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82bfc0c0
	ctx.lr = 0x82BFC52C;
	sub_82BFC0C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC53C"))) PPC_WEAK_FUNC(sub_82BFC53C);
PPC_FUNC_IMPL(__imp__sub_82BFC53C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
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
	// bl 0x82c07db0
	ctx.lr = 0x82BFC554;
	sub_82C07DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC564"))) PPC_WEAK_FUNC(sub_82BFC564);
PPC_FUNC_IMPL(__imp__sub_82BFC564) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
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
	// bl 0x82c07db0
	ctx.lr = 0x82BFC57C;
	sub_82C07DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC590"))) PPC_WEAK_FUNC(sub_82BFC590);
PPC_FUNC_IMPL(__imp__sub_82BFC590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC5D0"))) PPC_WEAK_FUNC(sub_82BFC5D0);
PPC_FUNC_IMPL(__imp__sub_82BFC5D0) {
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
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc5f4
	if (ctx.cr6.eq) goto loc_82BFC5F4;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFC5F4;
	sub_82D5E5B0(ctx, base);
loc_82BFC5F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BFC620"))) PPC_WEAK_FUNC(sub_82BFC620);
PPC_FUNC_IMPL(__imp__sub_82BFC620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x82BFC628;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f31,21348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stw r26,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r26.u32);
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stw r26,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r26.u32);
	// stw r26,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r26.u32);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// stw r26,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r26.u32);
	// stw r26,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFC684;
	sub_82C18020(ctx, base);
	// lis r28,-31988
	ctx.r28.s64 = -2096365568;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r29,r10,-22232
	ctx.r29.s64 = ctx.r10.s64 + -22232;
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfc6a8
	if (!ctx.cr6.eq) goto loc_82BFC6A8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfc6c0
	if (ctx.cr6.eq) goto loc_82BFC6C0;
loc_82BFC6A8:
	// addi r5,r29,12820
	ctx.r5.s64 = ctx.r29.s64 + 12820;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFC6BC;
	sub_82C186D0(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BFC6C0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfc6d8
	if (!ctx.cr6.eq) goto loc_82BFC6D8;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfc6f0
	if (ctx.cr6.eq) goto loc_82BFC6F0;
loc_82BFC6D8:
	// addi r5,r29,12824
	ctx.r5.s64 = ctx.r29.s64 + 12824;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFC6EC;
	sub_82C186D0(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BFC6F0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfc708
	if (!ctx.cr6.eq) goto loc_82BFC708;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfc720
	if (ctx.cr6.eq) goto loc_82BFC720;
loc_82BFC708:
	// addi r5,r29,12840
	ctx.r5.s64 = ctx.r29.s64 + 12840;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFC71C;
	sub_82C18570(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BFC720:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfc738
	if (!ctx.cr6.eq) goto loc_82BFC738;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfc74c
	if (ctx.cr6.eq) goto loc_82BFC74C;
loc_82BFC738:
	// addi r5,r29,12848
	ctx.r5.s64 = ctx.r29.s64 + 12848;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFC74C;
	sub_82C18570(ctx, base);
loc_82BFC74C:
	// addi r5,r29,12860
	ctx.r5.s64 = ctx.r29.s64 + 12860;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c188b8
	ctx.lr = 0x82BFC760;
	sub_82C188B8(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfc778
	if (!ctx.cr6.eq) goto loc_82BFC778;
	// lfs f0,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfc790
	if (ctx.cr6.eq) goto loc_82BFC790;
loc_82BFC778:
	// addi r5,r29,12872
	ctx.r5.s64 = ctx.r29.s64 + 12872;
	// lfs f1,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFC78C;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BFC790:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfc7a8
	if (!ctx.cr6.eq) goto loc_82BFC7A8;
	// lfs f0,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82bfc7c0
	if (ctx.cr6.eq) goto loc_82BFC7C0;
loc_82BFC7A8:
	// addi r5,r29,12888
	ctx.r5.s64 = ctx.r29.s64 + 12888;
	// lfs f1,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFC7BC;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 9732);
loc_82BFC7C0:
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfc7e4
	if (ctx.cr6.eq) goto loc_82BFC7E4;
	// addi r5,r29,12908
	ctx.r5.s64 = ctx.r29.s64 + 12908;
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFC7E0;
	sub_82C18570(ctx, base);
	// b 0x82bfc884
	goto loc_82BFC884;
loc_82BFC7E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfc7fc
	if (!ctx.cr6.eq) goto loc_82BFC7FC;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfc884
	if (ctx.cr6.eq) goto loc_82BFC884;
loc_82BFC7FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFC80C;
	sub_82C18020(ctx, base);
	// addi r5,r29,12916
	ctx.r5.s64 = ctx.r29.s64 + 12916;
	// addi r4,r29,12920
	ctx.r4.s64 = ctx.r29.s64 + 12920;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFC820;
	sub_82C186D0(ctx, base);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82BFC828:
	// slw r11,r25,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r28.u8 & 0x3F));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82bfc87c
	if (!ctx.cr6.eq) goto loc_82BFC87C;
	// addi r4,r29,12928
	ctx.r4.s64 = ctx.r29.s64 + 12928;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BFC840;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfc870
	if (!ctx.cr6.eq) goto loc_82BFC870;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfc860
	if (ctx.cr6.eq) goto loc_82BFC860;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BFC860:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BFC870;
	sub_82C184C0(ctx, base);
loc_82BFC870:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// blt cr6,0x82bfc828
	if (ctx.cr6.lt) goto loc_82BFC828;
loc_82BFC87C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFC884;
	sub_82C16F48(ctx, base);
loc_82BFC884:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFC88C;
	sub_82C16F48(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC898"))) PPC_WEAK_FUNC(sub_82BFC898);
PPC_FUNC_IMPL(__imp__sub_82BFC898) {
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
	// bl 0x82bfc5d0
	ctx.lr = 0x82BFC8B0;
	sub_82BFC5D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC8C0"))) PPC_WEAK_FUNC(sub_82BFC8C0);
PPC_FUNC_IMPL(__imp__sub_82BFC8C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC910"))) PPC_WEAK_FUNC(sub_82BFC910);
PPC_FUNC_IMPL(__imp__sub_82BFC910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BFC918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r29,64
	ctx.r28.s64 = ctx.r29.s64 + 64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc934
	if (ctx.cr6.eq) goto loc_82BFC934;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFC934;
	sub_82D5E5B0(ctx, base);
loc_82BFC934:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,48
	ctx.r30.s64 = ctx.r29.s64 + 48;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc958
	if (ctx.cr6.eq) goto loc_82BFC958;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFC958;
	sub_82D5E5B0(ctx, base);
loc_82BFC958:
	// addi r28,r29,16
	ctx.r28.s64 = ctx.r29.s64 + 16;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc978
	if (ctx.cr6.eq) goto loc_82BFC978;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFC978;
	sub_82D5E5B0(ctx, base);
loc_82BFC978:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc994
	if (ctx.cr6.eq) goto loc_82BFC994;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFC994;
	sub_82D5E5B0(ctx, base);
loc_82BFC994:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC9B0"))) PPC_WEAK_FUNC(sub_82BFC9B0);
PPC_FUNC_IMPL(__imp__sub_82BFC9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x82BFC9B8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-224
	ctx.r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFCA24;
	sub_82C18020(ctx, base);
	// lis r26,-31988
	ctx.r26.s64 = -2096365568;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r27,r10,-22160
	ctx.r27.s64 = ctx.r10.s64 + -22160;
	// lbz r11,9732(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfca48
	if (!ctx.cr6.eq) goto loc_82BFCA48;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfca60
	if (ctx.cr6.eq) goto loc_82BFCA60;
loc_82BFCA48:
	// addi r5,r27,13092
	ctx.r5.s64 = ctx.r27.s64 + 13092;
	// lwz r4,40(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFCA5C;
	sub_82C186D0(ctx, base);
	// lbz r11,9732(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9732);
loc_82BFCA60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfca78
	if (!ctx.cr6.eq) goto loc_82BFCA78;
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfca8c
	if (ctx.cr6.eq) goto loc_82BFCA8C;
loc_82BFCA78:
	// addi r5,r27,13096
	ctx.r5.s64 = ctx.r27.s64 + 13096;
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFCA8C;
	sub_82C186D0(ctx, base);
loc_82BFCA8C:
	// addi r5,r27,13112
	ctx.r5.s64 = ctx.r27.s64 + 13112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,48
	ctx.r4.s64 = ctx.r28.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c188b8
	ctx.lr = 0x82BFCAA0;
	sub_82C188B8(ctx, base);
	// addi r5,r27,13128
	ctx.r5.s64 = ctx.r27.s64 + 13128;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,64
	ctx.r4.s64 = ctx.r28.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c188b8
	ctx.lr = 0x82BFCAB4;
	sub_82C188B8(ctx, base);
	// lbz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfcad8
	if (ctx.cr6.eq) goto loc_82BFCAD8;
	// addi r5,r27,13144
	ctx.r5.s64 = ctx.r27.s64 + 13144;
	// lwz r4,80(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFCAD4;
	sub_82C18570(ctx, base);
	// b 0x82bfcb20
	goto loc_82BFCB20;
loc_82BFCAD8:
	// lbz r11,9732(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfcaf0
	if (!ctx.cr6.eq) goto loc_82BFCAF0;
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfcb20
	if (ctx.cr6.eq) goto loc_82BFCB20;
loc_82BFCAF0:
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bfcb0c
	if (ctx.cr6.lt) goto loc_82BFCB0C;
	// bne cr6,0x82bfcb10
	if (!ctx.cr6.eq) goto loc_82BFCB10;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x82bfcb10
	goto loc_82BFCB10;
loc_82BFCB0C:
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
loc_82BFCB10:
	// addi r5,r27,13152
	ctx.r5.s64 = ctx.r27.s64 + 13152;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFCB20;
	sub_82C186D0(ctx, base);
loc_82BFCB20:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bfbb78
	ctx.lr = 0x82BFCB30;
	sub_82BFBB78(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFCB38;
	sub_82C16F48(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82bfc910
	ctx.lr = 0x82BFCB40;
	sub_82BFC910(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = ctx.r31.s64 + 224;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCB48"))) PPC_WEAK_FUNC(sub_82BFCB48);
PPC_FUNC_IMPL(__imp__sub_82BFCB48) {
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
	// bl 0x82bfc910
	ctx.lr = 0x82BFCB60;
	sub_82BFC910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFCB78"))) PPC_WEAK_FUNC(sub_82BFCB78);
PPC_FUNC_IMPL(__imp__sub_82BFCB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82BFCB80;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// addi r30,r3,216
	ctx.r30.s64 = ctx.r3.s64 + 216;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfcbe8
	if (ctx.cr6.eq) goto loc_82BFCBE8;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82BFCBB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfcbc8
	if (ctx.cr6.eq) goto loc_82BFCBC8;
	// bl 0x8247d948
	ctx.lr = 0x82BFCBC8;
	sub_8247D948(ctx, base);
loc_82BFCBC8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bfcbb4
	if (ctx.cr6.lt) goto loc_82BFCBB4;
loc_82BFCBE8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfcbf8
	if (ctx.cr6.eq) goto loc_82BFCBF8;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFCBF8;
	sub_82D5E5B0(ctx, base);
loc_82BFCBF8:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCC0C"))) PPC_WEAK_FUNC(sub_82BFCC0C);
PPC_FUNC_IMPL(__imp__sub_82BFCC0C) {
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
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,216
	ctx.r3.s64 = ctx.r11.s64 + 216;
	// bl 0x82c07db0
	ctx.lr = 0x82BFCC28;
	sub_82C07DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFCC38"))) PPC_WEAK_FUNC(sub_82BFCC38);
PPC_FUNC_IMPL(__imp__sub_82BFCC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82d5c570
	ctx.lr = 0x82BFCC48;
	__savefpr_26(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// addi r8,r1,-168
	ctx.r8.s64 = ctx.r1.s64 + -168;
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// lfs f13,21344(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lfs f0,21348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
loc_82BFCC74:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
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
	// bne cr6,0x82bfcc74
	if (!ctx.cr6.eq) goto loc_82BFCC74;
	// addi r8,r1,-168
	ctx.r8.s64 = ctx.r1.s64 + -168;
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// li r9,2
	ctx.r9.s64 = 2;
loc_82BFCCBC:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
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
	// bne cr6,0x82bfccbc
	if (!ctx.cr6.eq) goto loc_82BFCCBC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lfs f12,-160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lfs f11,-156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lfs f10,-152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,-18944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18944);
	ctx.f13.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// li r9,93
	ctx.r9.s64 = 93;
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f9,-148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	ctx.f7.f64 = double(temp.f32);
	// stfs f9,32(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f8,36(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f7,40(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f6,-136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -132);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f4.f64 = double(temp.f32);
	// stfs f6,44(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f5,48(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f4,52(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f3,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -116);
	ctx.f1.f64 = double(temp.f32);
	// stfs f3,56(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f2,60(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f1,64(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f31,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f29.f64 = double(temp.f32);
	// stfs f31,68(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f30,72(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f29,76(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f28,-100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,-96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,-92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	ctx.f26.f64 = double(temp.f32);
	// stfs f28,80(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f27,84(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f26,88(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f13,96(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// stw r10,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// stw r9,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r9.u32);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82d5c5bc
	ctx.lr = 0x82BFCDDC;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFCDF0"))) PPC_WEAK_FUNC(sub_82BFCDF0);
PPC_FUNC_IMPL(__imp__sub_82BFCDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x82BFCDF8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfce60
	if (ctx.cr6.eq) goto loc_82BFCE60;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82BFCE2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfce40
	if (ctx.cr6.eq) goto loc_82BFCE40;
	// bl 0x8247d948
	ctx.lr = 0x82BFCE40;
	sub_8247D948(ctx, base);
loc_82BFCE40:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bfce2c
	if (ctx.cr6.lt) goto loc_82BFCE2C;
loc_82BFCE60:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfce70
	if (ctx.cr6.eq) goto loc_82BFCE70;
	// bl 0x82d5e5b0
	ctx.lr = 0x82BFCE70;
	sub_82D5E5B0(ctx, base);
loc_82BFCE70:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCE84"))) PPC_WEAK_FUNC(sub_82BFCE84);
PPC_FUNC_IMPL(__imp__sub_82BFCE84) {
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
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// bl 0x82c07db0
	ctx.lr = 0x82BFCEA0;
	sub_82C07DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFCEB8"))) PPC_WEAK_FUNC(sub_82BFCEB8);
PPC_FUNC_IMPL(__imp__sub_82BFCEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x82BFCEC0;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82bfcc38
	ctx.lr = 0x82BFCED8;
	sub_82BFCC38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFCEE8;
	sub_82C18020(ctx, base);
	// lis r23,-31988
	ctx.r23.s64 = -2096365568;
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r26,r11,-17080
	ctx.r26.s64 = ctx.r11.s64 + -17080;
	// bne cr6,0x82bfcf10
	if (!ctx.cr6.eq) goto loc_82BFCF10;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bfcf24
	if (ctx.cr6.eq) goto loc_82BFCF24;
loc_82BFCF10:
	// addi r5,r26,11484
	ctx.r5.s64 = ctx.r26.s64 + 11484;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFCF24;
	sub_82C186D0(ctx, base);
loc_82BFCF24:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfcf40
	if (!ctx.cr6.eq) goto loc_82BFCF40;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bfcf54
	if (ctx.cr6.eq) goto loc_82BFCF54;
loc_82BFCF40:
	// addi r5,r26,11488
	ctx.r5.s64 = ctx.r26.s64 + 11488;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFCF54;
	sub_82C186D0(ctx, base);
loc_82BFCF54:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfcf70
	if (!ctx.cr6.eq) goto loc_82BFCF70;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bfcf84
	if (ctx.cr6.eq) goto loc_82BFCF84;
loc_82BFCF70:
	// addi r5,r26,11504
	ctx.r5.s64 = ctx.r26.s64 + 11504;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFCF84;
	sub_82C186D0(ctx, base);
loc_82BFCF84:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfcfa0
	if (!ctx.cr6.eq) goto loc_82BFCFA0;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bfcfb4
	if (ctx.cr6.eq) goto loc_82BFCFB4;
loc_82BFCFA0:
	// addi r5,r26,11512
	ctx.r5.s64 = ctx.r26.s64 + 11512;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFCFB4;
	sub_82C186D0(ctx, base);
loc_82BFCFB4:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfcfd0
	if (!ctx.cr6.eq) goto loc_82BFCFD0;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bfcfe4
	if (ctx.cr6.eq) goto loc_82BFCFE4;
loc_82BFCFD0:
	// addi r5,r26,11520
	ctx.r5.s64 = ctx.r26.s64 + 11520;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFCFE4;
	sub_82C186D0(ctx, base);
loc_82BFCFE4:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd034
	if (!ctx.cr6.eq) goto loc_82BFD034;
	// lfs f0,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd024
	if (!ctx.cr6.eq) goto loc_82BFD024;
	// lfs f0,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd024
	if (!ctx.cr6.eq) goto loc_82BFD024;
	// lfs f0,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfd028
	if (ctx.cr6.eq) goto loc_82BFD028;
loc_82BFD024:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BFD028:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd048
	if (ctx.cr6.eq) goto loc_82BFD048;
loc_82BFD034:
	// addi r5,r26,11528
	ctx.r5.s64 = ctx.r26.s64 + 11528;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BFD048;
	sub_82C18B38(ctx, base);
loc_82BFD048:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd094
	if (!ctx.cr6.eq) goto loc_82BFD094;
	// lfs f0,32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd084
	if (!ctx.cr6.eq) goto loc_82BFD084;
	// lfs f0,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd084
	if (!ctx.cr6.eq) goto loc_82BFD084;
	// lfs f0,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfd088
	if (ctx.cr6.eq) goto loc_82BFD088;
loc_82BFD084:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BFD088:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd0a8
	if (ctx.cr6.eq) goto loc_82BFD0A8;
loc_82BFD094:
	// addi r5,r26,11544
	ctx.r5.s64 = ctx.r26.s64 + 11544;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,32
	ctx.r4.s64 = ctx.r28.s64 + 32;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BFD0A8;
	sub_82C18B38(ctx, base);
loc_82BFD0A8:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd0f4
	if (!ctx.cr6.eq) goto loc_82BFD0F4;
	// lfs f0,44(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd0e4
	if (!ctx.cr6.eq) goto loc_82BFD0E4;
	// lfs f0,48(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd0e4
	if (!ctx.cr6.eq) goto loc_82BFD0E4;
	// lfs f0,52(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfd0e8
	if (ctx.cr6.eq) goto loc_82BFD0E8;
loc_82BFD0E4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BFD0E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd108
	if (ctx.cr6.eq) goto loc_82BFD108;
loc_82BFD0F4:
	// addi r5,r26,11560
	ctx.r5.s64 = ctx.r26.s64 + 11560;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,44
	ctx.r4.s64 = ctx.r28.s64 + 44;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BFD108;
	sub_82C18B38(ctx, base);
loc_82BFD108:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd154
	if (!ctx.cr6.eq) goto loc_82BFD154;
	// lfs f0,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd144
	if (!ctx.cr6.eq) goto loc_82BFD144;
	// lfs f0,60(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd144
	if (!ctx.cr6.eq) goto loc_82BFD144;
	// lfs f0,64(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfd148
	if (ctx.cr6.eq) goto loc_82BFD148;
loc_82BFD144:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BFD148:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd168
	if (ctx.cr6.eq) goto loc_82BFD168;
loc_82BFD154:
	// addi r5,r26,11572
	ctx.r5.s64 = ctx.r26.s64 + 11572;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BFD168;
	sub_82C18B38(ctx, base);
loc_82BFD168:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd1b4
	if (!ctx.cr6.eq) goto loc_82BFD1B4;
	// lfs f0,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd1a4
	if (!ctx.cr6.eq) goto loc_82BFD1A4;
	// lfs f0,72(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd1a4
	if (!ctx.cr6.eq) goto loc_82BFD1A4;
	// lfs f0,76(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfd1a8
	if (ctx.cr6.eq) goto loc_82BFD1A8;
loc_82BFD1A4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BFD1A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd1c8
	if (ctx.cr6.eq) goto loc_82BFD1C8;
loc_82BFD1B4:
	// addi r5,r26,11584
	ctx.r5.s64 = ctx.r26.s64 + 11584;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,68
	ctx.r4.s64 = ctx.r28.s64 + 68;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BFD1C8;
	sub_82C18B38(ctx, base);
loc_82BFD1C8:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd214
	if (!ctx.cr6.eq) goto loc_82BFD214;
	// lfs f0,80(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd204
	if (!ctx.cr6.eq) goto loc_82BFD204;
	// lfs f0,84(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd204
	if (!ctx.cr6.eq) goto loc_82BFD204;
	// lfs f0,88(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfd208
	if (ctx.cr6.eq) goto loc_82BFD208;
loc_82BFD204:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BFD208:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd228
	if (ctx.cr6.eq) goto loc_82BFD228;
loc_82BFD214:
	// addi r5,r26,11600
	ctx.r5.s64 = ctx.r26.s64 + 11600;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,80
	ctx.r4.s64 = ctx.r28.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BFD228;
	sub_82C18B38(ctx, base);
loc_82BFD228:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd244
	if (!ctx.cr6.eq) goto loc_82BFD244;
	// lfs f0,92(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfd258
	if (ctx.cr6.eq) goto loc_82BFD258;
loc_82BFD244:
	// addi r5,r26,11616
	ctx.r5.s64 = ctx.r26.s64 + 11616;
	// lfs f1,92(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFD258;
	sub_82C18620(ctx, base);
loc_82BFD258:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd274
	if (!ctx.cr6.eq) goto loc_82BFD274;
	// lfs f0,96(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfd288
	if (ctx.cr6.eq) goto loc_82BFD288;
loc_82BFD274:
	// addi r5,r26,11628
	ctx.r5.s64 = ctx.r26.s64 + 11628;
	// lfs f1,96(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFD288;
	sub_82C18620(ctx, base);
loc_82BFD288:
	// lbz r11,156(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd2ac
	if (ctx.cr6.eq) goto loc_82BFD2AC;
	// addi r5,r26,11640
	ctx.r5.s64 = ctx.r26.s64 + 11640;
	// lwz r4,100(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFD2A8;
	sub_82C18570(ctx, base);
	// b 0x82bfd360
	goto loc_82BFD360;
loc_82BFD2AC:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd2c8
	if (!ctx.cr6.eq) goto loc_82BFD2C8;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfd360
	if (ctx.cr6.eq) goto loc_82BFD360;
loc_82BFD2C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFD2D8;
	sub_82C18020(ctx, base);
	// addi r5,r26,11652
	ctx.r5.s64 = ctx.r26.s64 + 11652;
	// addi r4,r26,11656
	ctx.r4.s64 = ctx.r26.s64 + 11656;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFD2EC;
	sub_82C186D0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
loc_82BFD2F0:
	// slw r29,r24,r27
	ctx.r29.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r27.u8 & 0x3F));
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82bfd30c
	if (ctx.cr6.eq) goto loc_82BFD30C;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82bfd358
	if (!ctx.cr6.eq) goto loc_82BFD358;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x82bfd310
	goto loc_82BFD310;
loc_82BFD30C:
	// addi r30,r26,-24
	ctx.r30.s64 = ctx.r26.s64 + -24;
loc_82BFD310:
	// addi r4,r26,11668
	ctx.r4.s64 = ctx.r26.s64 + 11668;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BFD31C;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfd34c
	if (!ctx.cr6.eq) goto loc_82BFD34C;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfd33c
	if (ctx.cr6.eq) goto loc_82BFD33C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82BFD33C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BFD34C;
	sub_82C184C0(ctx, base);
loc_82BFD34C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// blt cr6,0x82bfd2f0
	if (ctx.cr6.lt) goto loc_82BFD2F0;
loc_82BFD358:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFD360;
	sub_82C16F48(ctx, base);
loc_82BFD360:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd3ac
	if (!ctx.cr6.eq) goto loc_82BFD3AC;
	// lfs f0,104(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd39c
	if (!ctx.cr6.eq) goto loc_82BFD39C;
	// lfs f0,108(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfd39c
	if (!ctx.cr6.eq) goto loc_82BFD39C;
	// lfs f0,112(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfd3a0
	if (ctx.cr6.eq) goto loc_82BFD3A0;
loc_82BFD39C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BFD3A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd3c0
	if (ctx.cr6.eq) goto loc_82BFD3C0;
loc_82BFD3AC:
	// addi r5,r26,11676
	ctx.r5.s64 = ctx.r26.s64 + 11676;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r28,104
	ctx.r4.s64 = ctx.r28.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BFD3C0;
	sub_82C18B38(ctx, base);
loc_82BFD3C0:
	// lbz r11,9732(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd3dc
	if (!ctx.cr6.eq) goto loc_82BFD3DC;
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfd3f0
	if (ctx.cr6.eq) goto loc_82BFD3F0;
loc_82BFD3DC:
	// addi r5,r26,11696
	ctx.r5.s64 = ctx.r26.s64 + 11696;
	// lwz r4,116(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BFD3F0;
	sub_82C184C0(ctx, base);
loc_82BFD3F0:
	// addi r30,r28,120
	ctx.r30.s64 = ctx.r28.s64 + 120;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd448
	if (ctx.cr6.eq) goto loc_82BFD448;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82BFD414:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82bf6848
	ctx.lr = 0x82BFD428;
	sub_82BF6848(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bfd414
	if (ctx.cr6.lt) goto loc_82BFD414;
loc_82BFD448:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFD450;
	sub_82C16F48(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82bfcdf0
	ctx.lr = 0x82BFD458;
	sub_82BFCDF0(ctx, base);
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFD460"))) PPC_WEAK_FUNC(sub_82BFD460);
PPC_FUNC_IMPL(__imp__sub_82BFD460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
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
	// bl 0x82bfcdf0
	ctx.lr = 0x82BFD478;
	sub_82BFCDF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFD488"))) PPC_WEAK_FUNC(sub_82BFD488);
PPC_FUNC_IMPL(__imp__sub_82BFD488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bfcc38
	ctx.lr = 0x82BFD498;
	sub_82BFCC38(ctx, base);
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f13,21344(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,21348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
loc_82BFD4B8:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
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
	// bne cr6,0x82bfd4b8
	if (!ctx.cr6.eq) goto loc_82BFD4B8;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82BFD500:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
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
	// bne cr6,0x82bfd500
	if (!ctx.cr6.eq) goto loc_82BFD500;
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r8,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r8.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFD558"))) PPC_WEAK_FUNC(sub_82BFD558);
PPC_FUNC_IMPL(__imp__sub_82BFD558) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bfcdf0
	sub_82BFCDF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFD568"))) PPC_WEAK_FUNC(sub_82BFD568);
PPC_FUNC_IMPL(__imp__sub_82BFD568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BFD570;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82bfd488
	ctx.lr = 0x82BFD58C;
	sub_82BFD488(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFD59C;
	sub_82C18020(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bfd5d0
	if (ctx.cr6.eq) goto loc_82BFD5D0;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd5d0
	if (!ctx.cr6.eq) goto loc_82BFD5D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFD5B8;
	sub_82C15D08(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-5152
	ctx.r5.s64 = ctx.r11.s64 + -5152;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFD5D0;
	sub_82C186D0(ctx, base);
loc_82BFD5D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bfceb8
	ctx.lr = 0x82BFD5E0;
	sub_82BFCEB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFD5E8;
	sub_82C16F48(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82bfcdf0
	ctx.lr = 0x82BFD5F0;
	sub_82BFCDF0(ctx, base);
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFD5F8"))) PPC_WEAK_FUNC(sub_82BFD5F8);
PPC_FUNC_IMPL(__imp__sub_82BFD5F8) {
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
	// bl 0x82bfd558
	ctx.lr = 0x82BFD610;
	sub_82BFD558(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFD620"))) PPC_WEAK_FUNC(sub_82BFD620);
PPC_FUNC_IMPL(__imp__sub_82BFD620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bfcc38
	ctx.lr = 0x82BFD630;
	sub_82BFCC38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r3,232
	ctx.r10.s64 = ctx.r3.s64 + 232;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// li r7,2
	ctx.r7.s64 = 2;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lfs f13,-18944(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18944);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stfs f13,288(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// stfs f0,280(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f0,284(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// stfs f13,308(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stfs f0,304(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stfs f13,328(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// stfs f0,320(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// stfs f0,324(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stfs f13,348(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// stw r11,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r11.u32);
	// stfs f0,340(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// stfs f0,344(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 344, temp.u32);
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r11.u32);
	// stfs f13,368(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// stfs f0,360(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 360, temp.u32);
	// stfs f0,364(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r11.u32);
	// stfs f13,388(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 388, temp.u32);
	// stw r11,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r11.u32);
	// lfs f13,21344(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,380(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 380, temp.u32);
	// stfs f0,384(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 384, temp.u32);
loc_82BFD740:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stfs f13,-32(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -32, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f0,-28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -28, temp.u32);
	// stfs f0,-24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne cr6,0x82bfd740
	if (!ctx.cr6.eq) goto loc_82BFD740;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82BFD788:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stfs f13,-32(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -32, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f0,-28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -28, temp.u32);
	// stfs f0,-24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne cr6,0x82bfd788
	if (!ctx.cr6.eq) goto loc_82BFD788;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r7,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r7.u32);
	// li r9,49
	ctx.r9.s64 = 49;
	// stw r7,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r7.u32);
	// stw r7,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r7.u32);
	// stw r7,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r7.u32);
	// stw r7,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r7.u32);
	// lfs f12,-28016(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28016);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r7,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r7.u32);
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// stfs f0,400(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// stfs f0,404(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// stfs f0,408(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 408, temp.u32);
	// stfs f0,412(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// stfs f0,416(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// stfs f13,420(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// stfs f0,424(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// stfs f0,428(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 428, temp.u32);
	// stfs f0,432(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 432, temp.u32);
	// stfs f0,436(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 436, temp.u32);
	// stfs f0,440(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 440, temp.u32);
	// stfs f0,444(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 444, temp.u32);
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// lfs f11,28240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28240);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// stfs f12,452(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 452, temp.u32);
	// stw r9,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r9.u32);
	// stfs f11,456(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// stw r11,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r11.u32);
	// stfs f13,460(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFD850"))) PPC_WEAK_FUNC(sub_82BFD850);
PPC_FUNC_IMPL(__imp__sub_82BFD850) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bfcdf0
	sub_82BFCDF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFD860"))) PPC_WEAK_FUNC(sub_82BFD860);
PPC_FUNC_IMPL(__imp__sub_82BFD860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BFD868;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-624
	ctx.r31.s64 = ctx.r1.s64 + -624;
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82bfd620
	ctx.lr = 0x82BFD884;
	sub_82BFD620(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFD894;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,-16600
	ctx.r30.s64 = ctx.r11.s64 + -16600;
	// beq cr6,0x82bfd8cc
	if (ctx.cr6.eq) goto loc_82BFD8CC;
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd8cc
	if (!ctx.cr6.eq) goto loc_82BFD8CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFD8B8;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r30,11684
	ctx.r5.s64 = ctx.r30.s64 + 11684;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFD8CC;
	sub_82C186D0(ctx, base);
loc_82BFD8CC:
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// lis r29,-31988
	ctx.r29.s64 = -2096365568;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd8f4
	if (ctx.cr6.eq) goto loc_82BFD8F4;
	// addi r5,r30,11688
	ctx.r5.s64 = ctx.r30.s64 + 11688;
	// lwz r4,148(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFD8F0;
	sub_82C18570(ctx, base);
	// b 0x82bfd950
	goto loc_82BFD950;
loc_82BFD8F4:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd910
	if (!ctx.cr6.eq) goto loc_82BFD910;
	// lwz r11,148(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfd950
	if (ctx.cr6.eq) goto loc_82BFD950;
loc_82BFD910:
	// lwz r11,148(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bfd93c
	if (ctx.cr6.lt) goto loc_82BFD93C;
	// beq cr6,0x82bfd934
	if (ctx.cr6.eq) goto loc_82BFD934;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82bfd940
	if (!ctx.cr6.lt) goto loc_82BFD940;
	// addi r4,r30,-360
	ctx.r4.s64 = ctx.r30.s64 + -360;
	// b 0x82bfd940
	goto loc_82BFD940;
loc_82BFD934:
	// addi r4,r30,-388
	ctx.r4.s64 = ctx.r30.s64 + -388;
	// b 0x82bfd940
	goto loc_82BFD940;
loc_82BFD93C:
	// addi r4,r30,-416
	ctx.r4.s64 = ctx.r30.s64 + -416;
loc_82BFD940:
	// addi r5,r30,11696
	ctx.r5.s64 = ctx.r30.s64 + 11696;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFD950;
	sub_82C186D0(ctx, base);
loc_82BFD950:
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd974
	if (ctx.cr6.eq) goto loc_82BFD974;
	// addi r5,r30,11704
	ctx.r5.s64 = ctx.r30.s64 + 11704;
	// lwz r4,152(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFD970;
	sub_82C18570(ctx, base);
	// b 0x82bfd9d0
	goto loc_82BFD9D0;
loc_82BFD974:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd990
	if (!ctx.cr6.eq) goto loc_82BFD990;
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfd9d0
	if (ctx.cr6.eq) goto loc_82BFD9D0;
loc_82BFD990:
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bfd9bc
	if (ctx.cr6.lt) goto loc_82BFD9BC;
	// beq cr6,0x82bfd9b4
	if (ctx.cr6.eq) goto loc_82BFD9B4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82bfd9c0
	if (!ctx.cr6.lt) goto loc_82BFD9C0;
	// addi r4,r30,-360
	ctx.r4.s64 = ctx.r30.s64 + -360;
	// b 0x82bfd9c0
	goto loc_82BFD9C0;
loc_82BFD9B4:
	// addi r4,r30,-388
	ctx.r4.s64 = ctx.r30.s64 + -388;
	// b 0x82bfd9c0
	goto loc_82BFD9C0;
loc_82BFD9BC:
	// addi r4,r30,-416
	ctx.r4.s64 = ctx.r30.s64 + -416;
loc_82BFD9C0:
	// addi r5,r30,11712
	ctx.r5.s64 = ctx.r30.s64 + 11712;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFD9D0;
	sub_82C186D0(ctx, base);
loc_82BFD9D0:
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd9f4
	if (ctx.cr6.eq) goto loc_82BFD9F4;
	// addi r5,r30,11720
	ctx.r5.s64 = ctx.r30.s64 + 11720;
	// lwz r4,156(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFD9F0;
	sub_82C18570(ctx, base);
	// b 0x82bfda50
	goto loc_82BFDA50;
loc_82BFD9F4:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfda10
	if (!ctx.cr6.eq) goto loc_82BFDA10;
	// lwz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfda50
	if (ctx.cr6.eq) goto loc_82BFDA50;
loc_82BFDA10:
	// lwz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bfda3c
	if (ctx.cr6.lt) goto loc_82BFDA3C;
	// beq cr6,0x82bfda34
	if (ctx.cr6.eq) goto loc_82BFDA34;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82bfda40
	if (!ctx.cr6.lt) goto loc_82BFDA40;
	// addi r4,r30,-360
	ctx.r4.s64 = ctx.r30.s64 + -360;
	// b 0x82bfda40
	goto loc_82BFDA40;
loc_82BFDA34:
	// addi r4,r30,-388
	ctx.r4.s64 = ctx.r30.s64 + -388;
	// b 0x82bfda40
	goto loc_82BFDA40;
loc_82BFDA3C:
	// addi r4,r30,-416
	ctx.r4.s64 = ctx.r30.s64 + -416;
loc_82BFDA40:
	// addi r5,r30,11728
	ctx.r5.s64 = ctx.r30.s64 + 11728;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFDA50;
	sub_82C186D0(ctx, base);
loc_82BFDA50:
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfda74
	if (ctx.cr6.eq) goto loc_82BFDA74;
	// addi r5,r30,11736
	ctx.r5.s64 = ctx.r30.s64 + 11736;
	// lwz r4,160(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFDA70;
	sub_82C18570(ctx, base);
	// b 0x82bfdad0
	goto loc_82BFDAD0;
loc_82BFDA74:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfda90
	if (!ctx.cr6.eq) goto loc_82BFDA90;
	// lwz r11,160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfdad0
	if (ctx.cr6.eq) goto loc_82BFDAD0;
loc_82BFDA90:
	// lwz r11,160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bfdabc
	if (ctx.cr6.lt) goto loc_82BFDABC;
	// beq cr6,0x82bfdab4
	if (ctx.cr6.eq) goto loc_82BFDAB4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82bfdac0
	if (!ctx.cr6.lt) goto loc_82BFDAC0;
	// addi r4,r30,-360
	ctx.r4.s64 = ctx.r30.s64 + -360;
	// b 0x82bfdac0
	goto loc_82BFDAC0;
loc_82BFDAB4:
	// addi r4,r30,-388
	ctx.r4.s64 = ctx.r30.s64 + -388;
	// b 0x82bfdac0
	goto loc_82BFDAC0;
loc_82BFDABC:
	// addi r4,r30,-416
	ctx.r4.s64 = ctx.r30.s64 + -416;
loc_82BFDAC0:
	// addi r5,r30,11752
	ctx.r5.s64 = ctx.r30.s64 + 11752;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFDAD0;
	sub_82C186D0(ctx, base);
loc_82BFDAD0:
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfdaf4
	if (ctx.cr6.eq) goto loc_82BFDAF4;
	// addi r5,r30,11768
	ctx.r5.s64 = ctx.r30.s64 + 11768;
	// lwz r4,164(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFDAF0;
	sub_82C18570(ctx, base);
	// b 0x82bfdb50
	goto loc_82BFDB50;
loc_82BFDAF4:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfdb10
	if (!ctx.cr6.eq) goto loc_82BFDB10;
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfdb50
	if (ctx.cr6.eq) goto loc_82BFDB50;
loc_82BFDB10:
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bfdb3c
	if (ctx.cr6.lt) goto loc_82BFDB3C;
	// beq cr6,0x82bfdb34
	if (ctx.cr6.eq) goto loc_82BFDB34;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82bfdb40
	if (!ctx.cr6.lt) goto loc_82BFDB40;
	// addi r4,r30,-360
	ctx.r4.s64 = ctx.r30.s64 + -360;
	// b 0x82bfdb40
	goto loc_82BFDB40;
loc_82BFDB34:
	// addi r4,r30,-388
	ctx.r4.s64 = ctx.r30.s64 + -388;
	// b 0x82bfdb40
	goto loc_82BFDB40;
loc_82BFDB3C:
	// addi r4,r30,-416
	ctx.r4.s64 = ctx.r30.s64 + -416;
loc_82BFDB40:
	// addi r5,r30,11784
	ctx.r5.s64 = ctx.r30.s64 + 11784;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFDB50;
	sub_82C186D0(ctx, base);
loc_82BFDB50:
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfdb74
	if (ctx.cr6.eq) goto loc_82BFDB74;
	// addi r5,r30,11800
	ctx.r5.s64 = ctx.r30.s64 + 11800;
	// lwz r4,168(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFDB70;
	sub_82C18570(ctx, base);
	// b 0x82bfdbd0
	goto loc_82BFDBD0;
loc_82BFDB74:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfdb90
	if (!ctx.cr6.eq) goto loc_82BFDB90;
	// lwz r11,168(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfdbd0
	if (ctx.cr6.eq) goto loc_82BFDBD0;
loc_82BFDB90:
	// lwz r11,168(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bfdbbc
	if (ctx.cr6.lt) goto loc_82BFDBBC;
	// beq cr6,0x82bfdbb4
	if (ctx.cr6.eq) goto loc_82BFDBB4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82bfdbc0
	if (!ctx.cr6.lt) goto loc_82BFDBC0;
	// addi r4,r30,-360
	ctx.r4.s64 = ctx.r30.s64 + -360;
	// b 0x82bfdbc0
	goto loc_82BFDBC0;
loc_82BFDBB4:
	// addi r4,r30,-388
	ctx.r4.s64 = ctx.r30.s64 + -388;
	// b 0x82bfdbc0
	goto loc_82BFDBC0;
loc_82BFDBBC:
	// addi r4,r30,-416
	ctx.r4.s64 = ctx.r30.s64 + -416;
loc_82BFDBC0:
	// addi r5,r30,11812
	ctx.r5.s64 = ctx.r30.s64 + 11812;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFDBD0;
	sub_82C186D0(ctx, base);
loc_82BFDBD0:
	// addi r5,r30,11824
	ctx.r5.s64 = ctx.r30.s64 + 11824;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,172
	ctx.r3.s64 = ctx.r27.s64 + 172;
	// bl 0x82bfad40
	ctx.lr = 0x82BFDBE0;
	sub_82BFAD40(ctx, base);
	// addi r5,r30,11836
	ctx.r5.s64 = ctx.r30.s64 + 11836;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,192
	ctx.r3.s64 = ctx.r27.s64 + 192;
	// bl 0x82bfad40
	ctx.lr = 0x82BFDBF0;
	sub_82BFAD40(ctx, base);
	// addi r5,r30,11848
	ctx.r5.s64 = ctx.r30.s64 + 11848;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,212
	ctx.r3.s64 = ctx.r27.s64 + 212;
	// bl 0x82bfad40
	ctx.lr = 0x82BFDC00;
	sub_82BFAD40(ctx, base);
	// addi r5,r30,11860
	ctx.r5.s64 = ctx.r30.s64 + 11860;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,232
	ctx.r3.s64 = ctx.r27.s64 + 232;
	// bl 0x82bfaec0
	ctx.lr = 0x82BFDC10;
	sub_82BFAEC0(ctx, base);
	// addi r5,r30,11872
	ctx.r5.s64 = ctx.r30.s64 + 11872;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,276
	ctx.r3.s64 = ctx.r27.s64 + 276;
	// bl 0x82bf6d88
	ctx.lr = 0x82BFDC20;
	sub_82BF6D88(ctx, base);
	// addi r5,r30,11880
	ctx.r5.s64 = ctx.r30.s64 + 11880;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,296
	ctx.r3.s64 = ctx.r27.s64 + 296;
	// bl 0x82bf6d88
	ctx.lr = 0x82BFDC30;
	sub_82BF6D88(ctx, base);
	// addi r5,r30,11888
	ctx.r5.s64 = ctx.r30.s64 + 11888;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,316
	ctx.r3.s64 = ctx.r27.s64 + 316;
	// bl 0x82bf6d88
	ctx.lr = 0x82BFDC40;
	sub_82BF6D88(ctx, base);
	// addi r5,r30,11896
	ctx.r5.s64 = ctx.r30.s64 + 11896;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,336
	ctx.r3.s64 = ctx.r27.s64 + 336;
	// bl 0x82bf6d88
	ctx.lr = 0x82BFDC50;
	sub_82BF6D88(ctx, base);
	// addi r5,r30,11908
	ctx.r5.s64 = ctx.r30.s64 + 11908;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,356
	ctx.r3.s64 = ctx.r27.s64 + 356;
	// bl 0x82bf6d88
	ctx.lr = 0x82BFDC60;
	sub_82BF6D88(ctx, base);
	// addi r5,r30,11920
	ctx.r5.s64 = ctx.r30.s64 + 11920;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r27,376
	ctx.r3.s64 = ctx.r27.s64 + 376;
	// bl 0x82bf6d88
	ctx.lr = 0x82BFDC70;
	sub_82BF6D88(ctx, base);
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfdcc0
	if (!ctx.cr6.eq) goto loc_82BFDCC0;
	// lfs f0,396(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfdcb0
	if (!ctx.cr6.eq) goto loc_82BFDCB0;
	// lfs f0,400(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfdcb0
	if (!ctx.cr6.eq) goto loc_82BFDCB0;
	// lfs f0,404(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,484(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfdcb4
	if (ctx.cr6.eq) goto loc_82BFDCB4;
loc_82BFDCB0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BFDCB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfdcd4
	if (ctx.cr6.eq) goto loc_82BFDCD4;
loc_82BFDCC0:
	// addi r5,r30,11932
	ctx.r5.s64 = ctx.r30.s64 + 11932;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,396
	ctx.r4.s64 = ctx.r27.s64 + 396;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BFDCD4;
	sub_82C18B38(ctx, base);
loc_82BFDCD4:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfdd30
	if (!ctx.cr6.eq) goto loc_82BFDD30;
	// lfs f0,408(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 408);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,412(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 412);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// lfs f12,416(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 416);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,420(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 420);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x82bfdd24
	if (!ctx.cr6.eq) goto loc_82BFDD24;
	// lfs f0,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82bfdd24
	if (!ctx.cr6.eq) goto loc_82BFDD24;
	// lfs f0,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x82bfdd24
	if (!ctx.cr6.eq) goto loc_82BFDD24;
	// lfs f0,500(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x82bfdd24
	if (!ctx.cr6.eq) goto loc_82BFDD24;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BFDD24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfdd44
	if (!ctx.cr6.eq) goto loc_82BFDD44;
loc_82BFDD30:
	// addi r5,r30,11948
	ctx.r5.s64 = ctx.r30.s64 + 11948;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,408
	ctx.r4.s64 = ctx.r27.s64 + 408;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18be0
	ctx.lr = 0x82BFDD44;
	sub_82C18BE0(ctx, base);
loc_82BFDD44:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfdd90
	if (!ctx.cr6.eq) goto loc_82BFDD90;
	// lfs f0,424(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfdd80
	if (!ctx.cr6.eq) goto loc_82BFDD80;
	// lfs f0,428(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfdd80
	if (!ctx.cr6.eq) goto loc_82BFDD80;
	// lfs f0,432(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfdd84
	if (ctx.cr6.eq) goto loc_82BFDD84;
loc_82BFDD80:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BFDD84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfdda4
	if (ctx.cr6.eq) goto loc_82BFDDA4;
loc_82BFDD90:
	// addi r5,r30,11968
	ctx.r5.s64 = ctx.r30.s64 + 11968;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,424
	ctx.r4.s64 = ctx.r27.s64 + 424;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BFDDA4;
	sub_82C18B38(ctx, base);
loc_82BFDDA4:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfddf0
	if (!ctx.cr6.eq) goto loc_82BFDDF0;
	// lfs f0,436(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,516(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfdde0
	if (!ctx.cr6.eq) goto loc_82BFDDE0;
	// lfs f0,440(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 440);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,520(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bfdde0
	if (!ctx.cr6.eq) goto loc_82BFDDE0;
	// lfs f0,444(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 444);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfdde4
	if (ctx.cr6.eq) goto loc_82BFDDE4;
loc_82BFDDE0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82BFDDE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfde04
	if (ctx.cr6.eq) goto loc_82BFDE04;
loc_82BFDDF0:
	// addi r5,r30,11988
	ctx.r5.s64 = ctx.r30.s64 + 11988;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r27,436
	ctx.r4.s64 = ctx.r27.s64 + 436;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18b38
	ctx.lr = 0x82BFDE04;
	sub_82C18B38(ctx, base);
loc_82BFDE04:
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfde28
	if (ctx.cr6.eq) goto loc_82BFDE28;
	// addi r5,r30,12012
	ctx.r5.s64 = ctx.r30.s64 + 12012;
	// lwz r4,448(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 448);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFDE24;
	sub_82C18570(ctx, base);
	// b 0x82bfde84
	goto loc_82BFDE84;
loc_82BFDE28:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfde44
	if (!ctx.cr6.eq) goto loc_82BFDE44;
	// lwz r11,448(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 448);
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfde84
	if (ctx.cr6.eq) goto loc_82BFDE84;
loc_82BFDE44:
	// lwz r11,448(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 448);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bfde70
	if (ctx.cr6.lt) goto loc_82BFDE70;
	// beq cr6,0x82bfde68
	if (ctx.cr6.eq) goto loc_82BFDE68;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82bfde74
	if (!ctx.cr6.lt) goto loc_82BFDE74;
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// b 0x82bfde74
	goto loc_82BFDE74;
loc_82BFDE68:
	// addi r4,r30,-132
	ctx.r4.s64 = ctx.r30.s64 + -132;
	// b 0x82bfde74
	goto loc_82BFDE74;
loc_82BFDE70:
	// addi r4,r30,-144
	ctx.r4.s64 = ctx.r30.s64 + -144;
loc_82BFDE74:
	// addi r5,r30,12028
	ctx.r5.s64 = ctx.r30.s64 + 12028;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFDE84;
	sub_82C186D0(ctx, base);
loc_82BFDE84:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfdea0
	if (!ctx.cr6.eq) goto loc_82BFDEA0;
	// lfs f0,452(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 452);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfdeb4
	if (ctx.cr6.eq) goto loc_82BFDEB4;
loc_82BFDEA0:
	// addi r5,r30,12044
	ctx.r5.s64 = ctx.r30.s64 + 12044;
	// lfs f1,452(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 452);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFDEB4;
	sub_82C18620(ctx, base);
loc_82BFDEB4:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfded0
	if (!ctx.cr6.eq) goto loc_82BFDED0;
	// lfs f0,456(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,536(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfdee4
	if (ctx.cr6.eq) goto loc_82BFDEE4;
loc_82BFDED0:
	// addi r5,r30,12064
	ctx.r5.s64 = ctx.r30.s64 + 12064;
	// lfs f1,456(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 456);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFDEE4;
	sub_82C18620(ctx, base);
loc_82BFDEE4:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfdf00
	if (!ctx.cr6.eq) goto loc_82BFDF00;
	// lfs f0,460(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 460);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfdf14
	if (ctx.cr6.eq) goto loc_82BFDF14;
loc_82BFDF00:
	// addi r5,r30,12080
	ctx.r5.s64 = ctx.r30.s64 + 12080;
	// lfs f1,460(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 460);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFDF14;
	sub_82C18620(ctx, base);
loc_82BFDF14:
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfdf38
	if (ctx.cr6.eq) goto loc_82BFDF38;
	// addi r5,r30,12092
	ctx.r5.s64 = ctx.r30.s64 + 12092;
	// lwz r4,464(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 464);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFDF34;
	sub_82C18570(ctx, base);
	// b 0x82bfdfec
	goto loc_82BFDFEC;
loc_82BFDF38:
	// lbz r11,9732(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfdf54
	if (!ctx.cr6.eq) goto loc_82BFDF54;
	// lwz r11,464(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 464);
	// lwz r10,544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfdfec
	if (ctx.cr6.eq) goto loc_82BFDFEC;
loc_82BFDF54:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFDF64;
	sub_82C18020(ctx, base);
	// addi r5,r30,12100
	ctx.r5.s64 = ctx.r30.s64 + 12100;
	// addi r4,r30,12104
	ctx.r4.s64 = ctx.r30.s64 + 12104;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFDF78;
	sub_82C186D0(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
loc_82BFDF7C:
	// slw r28,r24,r25
	ctx.r28.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r25.u8 & 0x3F));
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82bfdf98
	if (ctx.cr6.eq) goto loc_82BFDF98;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x82bfdfe4
	if (!ctx.cr6.eq) goto loc_82BFDFE4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x82bfdf9c
	goto loc_82BFDF9C;
loc_82BFDF98:
	// addi r29,r30,-24
	ctx.r29.s64 = ctx.r30.s64 + -24;
loc_82BFDF9C:
	// addi r4,r30,12112
	ctx.r4.s64 = ctx.r30.s64 + 12112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BFDFA8;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfdfd8
	if (!ctx.cr6.eq) goto loc_82BFDFD8;
	// lwz r11,464(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 464);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfdfc8
	if (ctx.cr6.eq) goto loc_82BFDFC8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82BFDFC8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BFDFD8;
	sub_82C184C0(ctx, base);
loc_82BFDFD8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,32
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 32, ctx.xer);
	// blt cr6,0x82bfdf7c
	if (ctx.cr6.lt) goto loc_82BFDF7C;
loc_82BFDFE4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFDFEC;
	sub_82C16F48(ctx, base);
loc_82BFDFEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bfceb8
	ctx.lr = 0x82BFDFFC;
	sub_82BFCEB8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFE004;
	sub_82C16F48(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82bfcdf0
	ctx.lr = 0x82BFE00C;
	sub_82BFCDF0(ctx, base);
	// addi r1,r31,624
	ctx.r1.s64 = ctx.r31.s64 + 624;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFE014"))) PPC_WEAK_FUNC(sub_82BFE014);
PPC_FUNC_IMPL(__imp__sub_82BFE014) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-624
	ctx.r31.s64 = ctx.r12.s64 + -624;
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
	// bl 0x82bfd850
	ctx.lr = 0x82BFE02C;
	sub_82BFD850(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE040"))) PPC_WEAK_FUNC(sub_82BFE040);
PPC_FUNC_IMPL(__imp__sub_82BFE040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bfcc38
	ctx.lr = 0x82BFE050;
	sub_82BFCC38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f0,21348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stw r8,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r8.u32);
	// lfs f13,21344(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
loc_82BFE080:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
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
	// bne cr6,0x82bfe080
	if (!ctx.cr6.eq) goto loc_82BFE080;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82BFE0C8:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
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
	// bne cr6,0x82bfe0c8
	if (!ctx.cr6.eq) goto loc_82BFE0C8;
	// li r11,51
	ctx.r11.s64 = 51;
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stw r8,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r8.u32);
	// stw r8,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r8.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE130"))) PPC_WEAK_FUNC(sub_82BFE130);
PPC_FUNC_IMPL(__imp__sub_82BFE130) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bfcdf0
	sub_82BFCDF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFE140"))) PPC_WEAK_FUNC(sub_82BFE140);
PPC_FUNC_IMPL(__imp__sub_82BFE140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x82BFE148;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-336
	ctx.r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82bfe040
	ctx.lr = 0x82BFE164;
	sub_82BFE040(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFE174;
	sub_82C18020(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-16472
	ctx.r29.s64 = ctx.r11.s64 + -16472;
	// beq cr6,0x82bfe1ac
	if (ctx.cr6.eq) goto loc_82BFE1AC;
	// lbz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfe1ac
	if (!ctx.cr6.eq) goto loc_82BFE1AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFE198;
	sub_82C15D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,12420
	ctx.r5.s64 = ctx.r29.s64 + 12420;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFE1AC;
	sub_82C186D0(ctx, base);
loc_82BFE1AC:
	// lis r30,-31988
	ctx.r30.s64 = -2096365568;
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfe1cc
	if (!ctx.cr6.eq) goto loc_82BFE1CC;
	// lfs f0,148(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfe1e4
	if (ctx.cr6.eq) goto loc_82BFE1E4;
loc_82BFE1CC:
	// addi r5,r29,12424
	ctx.r5.s64 = ctx.r29.s64 + 12424;
	// lfs f1,148(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFE1E0;
	sub_82C18620(ctx, base);
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
loc_82BFE1E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfe200
	if (!ctx.cr6.eq) goto loc_82BFE200;
	// lfs f0,152(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82bfe214
	if (ctx.cr6.eq) goto loc_82BFE214;
loc_82BFE200:
	// addi r5,r29,12436
	ctx.r5.s64 = ctx.r29.s64 + 12436;
	// lfs f1,152(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c18620
	ctx.lr = 0x82BFE214;
	sub_82C18620(ctx, base);
loc_82BFE214:
	// addi r5,r29,12448
	ctx.r5.s64 = ctx.r29.s64 + 12448;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r26,156
	ctx.r3.s64 = ctx.r26.s64 + 156;
	// bl 0x82bf8a40
	ctx.lr = 0x82BFE224;
	sub_82BF8A40(ctx, base);
	// lbz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfe248
	if (ctx.cr6.eq) goto loc_82BFE248;
	// addi r5,r29,12456
	ctx.r5.s64 = ctx.r29.s64 + 12456;
	// lwz r4,172(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c18570
	ctx.lr = 0x82BFE244;
	sub_82C18570(ctx, base);
	// b 0x82bfe310
	goto loc_82BFE310;
loc_82BFE248:
	// lbz r11,9732(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfe264
	if (!ctx.cr6.eq) goto loc_82BFE264;
	// lwz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82bfe310
	if (ctx.cr6.eq) goto loc_82BFE310;
loc_82BFE264:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFE274;
	sub_82C18020(ctx, base);
	// addi r5,r29,12464
	ctx.r5.s64 = ctx.r29.s64 + 12464;
	// addi r4,r29,12468
	ctx.r4.s64 = ctx.r29.s64 + 12468;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFE288;
	sub_82C186D0(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82BFE290:
	// slw r28,r24,r25
	ctx.r28.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r25.u8 & 0x3F));
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82bfe2bc
	if (ctx.cr6.eq) goto loc_82BFE2BC;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82bfe2b4
	if (ctx.cr6.eq) goto loc_82BFE2B4;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x82bfe308
	if (!ctx.cr6.eq) goto loc_82BFE308;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82bfe2c0
	goto loc_82BFE2C0;
loc_82BFE2B4:
	// addi r30,r29,-28
	ctx.r30.s64 = ctx.r29.s64 + -28;
	// b 0x82bfe2c0
	goto loc_82BFE2C0;
loc_82BFE2BC:
	// addi r30,r29,-56
	ctx.r30.s64 = ctx.r29.s64 + -56;
loc_82BFE2C0:
	// addi r4,r29,12476
	ctx.r4.s64 = ctx.r29.s64 + 12476;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x82BFE2CC;
	sub_82D5F9F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfe2fc
	if (!ctx.cr6.eq) goto loc_82BFE2FC;
	// lwz r11,172(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// li r4,0
	ctx.r4.s64 = 0;
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfe2ec
	if (ctx.cr6.eq) goto loc_82BFE2EC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82BFE2EC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c184c0
	ctx.lr = 0x82BFE2FC;
	sub_82C184C0(ctx, base);
loc_82BFE2FC:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,32
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 32, ctx.xer);
	// blt cr6,0x82bfe290
	if (ctx.cr6.lt) goto loc_82BFE290;
loc_82BFE308:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFE310;
	sub_82C16F48(ctx, base);
loc_82BFE310:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bfceb8
	ctx.lr = 0x82BFE320;
	sub_82BFCEB8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFE328;
	sub_82C16F48(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82bfcdf0
	ctx.lr = 0x82BFE330;
	sub_82BFCDF0(ctx, base);
	// addi r1,r31,336
	ctx.r1.s64 = ctx.r31.s64 + 336;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFE338"))) PPC_WEAK_FUNC(sub_82BFE338);
PPC_FUNC_IMPL(__imp__sub_82BFE338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-336
	ctx.r31.s64 = ctx.r12.s64 + -336;
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
	// bl 0x82bfe130
	ctx.lr = 0x82BFE350;
	sub_82BFE130(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE360"))) PPC_WEAK_FUNC(sub_82BFE360);
PPC_FUNC_IMPL(__imp__sub_82BFE360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bfcc38
	ctx.lr = 0x82BFE370;
	sub_82BFCC38(ctx, base);
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f13,21344(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,21348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
loc_82BFE390:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
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
	// bne cr6,0x82bfe390
	if (!ctx.cr6.eq) goto loc_82BFE390;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82BFE3D8:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
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
	// bne cr6,0x82bfe3d8
	if (!ctx.cr6.eq) goto loc_82BFE3D8;
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r8,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r8.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE430"))) PPC_WEAK_FUNC(sub_82BFE430);
PPC_FUNC_IMPL(__imp__sub_82BFE430) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bfcdf0
	sub_82BFCDF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFE440"))) PPC_WEAK_FUNC(sub_82BFE440);
PPC_FUNC_IMPL(__imp__sub_82BFE440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x82BFE448;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82bfe360
	ctx.lr = 0x82BFE464;
	sub_82BFE360(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c18020
	ctx.lr = 0x82BFE474;
	sub_82C18020(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bfe4a8
	if (ctx.cr6.eq) goto loc_82BFE4A8;
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfe4a8
	if (!ctx.cr6.eq) goto loc_82BFE4A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c15d08
	ctx.lr = 0x82BFE490;
	sub_82C15D08(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-3932
	ctx.r5.s64 = ctx.r11.s64 + -3932;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c186d0
	ctx.lr = 0x82BFE4A8;
	sub_82C186D0(ctx, base);
loc_82BFE4A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bfceb8
	ctx.lr = 0x82BFE4B8;
	sub_82BFCEB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c16f48
	ctx.lr = 0x82BFE4C0;
	sub_82C16F48(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82bfcdf0
	ctx.lr = 0x82BFE4C8;
	sub_82BFCDF0(ctx, base);
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFE4D0"))) PPC_WEAK_FUNC(sub_82BFE4D0);
PPC_FUNC_IMPL(__imp__sub_82BFE4D0) {
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
	// bl 0x82bfe430
	ctx.lr = 0x82BFE4E8;
	sub_82BFE430(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE4F8"))) PPC_WEAK_FUNC(sub_82BFE4F8);
PPC_FUNC_IMPL(__imp__sub_82BFE4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bfcc38
	ctx.lr = 0x82BFE508;
	sub_82BFCC38(ctx, base);
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f13,21344(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21344);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,21348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
loc_82BFE528:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
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
	// bne cr6,0x82bfe528
	if (!ctx.cr6.eq) goto loc_82BFE528;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82BFE570:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f13,-32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
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
	// bne cr6,0x82bfe570
	if (!ctx.cr6.eq) goto loc_82BFE570;
	// li r11,53
	ctx.r11.s64 = 53;
	// stw r8,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r8.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

