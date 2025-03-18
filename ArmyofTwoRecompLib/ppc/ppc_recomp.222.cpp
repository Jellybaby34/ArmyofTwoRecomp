#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830109D0"))) PPC_WEAK_FUNC(sub_830109D0);
PPC_FUNC_IMPL(__imp__sub_830109D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1502
	ctx.r3.s64 = 1502;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830109D8"))) PPC_WEAK_FUNC(sub_830109D8);
PPC_FUNC_IMPL(__imp__sub_830109D8) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// li r11,13
	ctx.r11.s64 = 13;
	// stb r4,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r4.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bne cr6,0x83010a1c
	if (!ctx.cr6.eq) goto loc_83010A1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,394(r3)
	PPC_STORE_U8(ctx.r3.u32 + 394, ctx.r10.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
loc_83010A1C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b4d0f8
	ctx.lr = 0x83010A24;
	sub_82B4D0F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83010a38
	if (ctx.cr0.eq) goto loc_83010A38;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x83010a3c
	goto loc_83010A3C;
loc_83010A38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83010A3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010A50"))) PPC_WEAK_FUNC(sub_83010A50);
PPC_FUNC_IMPL(__imp__sub_83010A50) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 392);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83010a98
	if (ctx.cr0.eq) goto loc_83010A98;
	// bl 0x82b4d2a0
	ctx.lr = 0x83010A7C;
	sub_82B4D2A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83010a98
	if (ctx.cr0.eq) goto loc_83010A98;
loc_83010A84:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,11113
	ctx.r3.s64 = 728301568;
	// ori r3,r3,29552
	ctx.r3.u64 = ctx.r3.u64 | 29552;
	// stb r11,395(r30)
	PPC_STORE_U8(ctx.r30.u32 + 395, ctx.r11.u8);
	// b 0x83010b44
	goto loc_83010B44;
loc_83010A98:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x83010aac
	if (!ctx.cr6.eq) goto loc_83010AAC;
	// lis r3,32361
	ctx.r3.s64 = 2120810496;
loc_83010AA4:
	// ori r3,r3,28265
	ctx.r3.u64 = ctx.r3.u64 | 28265;
	// b 0x83010b44
	goto loc_83010B44;
loc_83010AAC:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83010abc
	if (ctx.cr0.eq) goto loc_83010ABC;
	// lis r3,11625
	ctx.r3.s64 = 761856000;
	// b 0x83010aa4
	goto loc_83010AA4;
loc_83010ABC:
	// rlwinm. r11,r31,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83010ad0
	if (ctx.cr0.eq) goto loc_83010AD0;
	// lis r3,11636
	ctx.r3.s64 = 762576896;
	// ori r3,r3,29282
	ctx.r3.u64 = ctx.r3.u64 | 29282;
	// b 0x83010b44
	goto loc_83010B44;
loc_83010AD0:
	// rlwinm. r11,r31,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x60;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83010a84
	if (!ctx.cr0.eq) goto loc_83010A84;
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83010aec
	if (ctx.cr0.eq) goto loc_83010AEC;
	// lis r3,32357
	ctx.r3.s64 = 2120548352;
	// ori r3,r3,29800
	ctx.r3.u64 = ctx.r3.u64 | 29800;
	// b 0x83010b44
	goto loc_83010B44;
loc_83010AEC:
	// rlwinm. r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83010b00
	if (ctx.cr0.eq) goto loc_83010B00;
	// lis r3,32356
	ctx.r3.s64 = 2120482816;
	// ori r3,r3,28275
	ctx.r3.u64 = ctx.r3.u64 | 28275;
	// b 0x83010b44
	goto loc_83010B44;
loc_83010B00:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83010b14
	if (ctx.cr0.eq) goto loc_83010B14;
	// lis r3,32371
	ctx.r3.s64 = 2121465856;
	// ori r3,r3,29793
	ctx.r3.u64 = ctx.r3.u64 | 29793;
	// b 0x83010b44
	goto loc_83010B44;
loc_83010B14:
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83010b28
	if (ctx.cr0.eq) goto loc_83010B28;
	// lis r3,32356
	ctx.r3.s64 = 2120482816;
	// ori r3,r3,26736
	ctx.r3.u64 = ctx.r3.u64 | 26736;
	// b 0x83010b44
	goto loc_83010B44;
loc_83010B28:
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83010b3c
	if (ctx.cr0.eq) goto loc_83010B3C;
	// lis r3,32368
	ctx.r3.s64 = 2121269248;
	// ori r3,r3,28784
	ctx.r3.u64 = ctx.r3.u64 | 28784;
	// b 0x83010b44
	goto loc_83010B44;
loc_83010B3C:
	// lis r3,16191
	ctx.r3.s64 = 1061093376;
	// ori r3,r3,11583
	ctx.r3.u64 = ctx.r3.u64 | 11583;
loc_83010B44:
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

__attribute__((alias("__imp__sub_83010B60"))) PPC_WEAK_FUNC(sub_83010B60);
PPC_FUNC_IMPL(__imp__sub_83010B60) {
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
	// beq cr6,0x83010bcc
	if (ctx.cr6.eq) goto loc_83010BCC;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r31,r11,-12800
	ctx.r31.s64 = ctx.r11.s64 + -12800;
	// addi r4,r31,-444
	ctx.r4.s64 = ctx.r31.s64 + -444;
	// bl 0x82d5f9f0
	ctx.lr = 0x83010B90;
	sub_82D5F9F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83010bcc
	if (!ctx.cr0.eq) goto loc_83010BCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x83010BA4;
	sub_82D5F9F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83010bb8
	if (ctx.cr0.eq) goto loc_83010BB8;
	// lis r3,17729
	ctx.r3.s64 = 1161887744;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// b 0x83010bd0
	goto loc_83010BD0;
loc_83010BB8:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5df38
	ctx.lr = 0x83010BC8;
	sub_82D5DF38(ctx, base);
	// b 0x83010bd0
	goto loc_83010BD0;
loc_83010BCC:
	// lis r3,17729
	ctx.r3.s64 = 1161887744;
loc_83010BD0:
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

__attribute__((alias("__imp__sub_83010BE8"))) PPC_WEAK_FUNC(sub_83010BE8);
PPC_FUNC_IMPL(__imp__sub_83010BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83010BF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83010c30
	if (!ctx.cr6.gt) goto loc_83010C30;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
loc_83010C10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82b735a0
	ctx.lr = 0x83010C1C;
	sub_82B735A0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83010c10
	if (ctx.cr6.lt) goto loc_83010C10;
loc_83010C30:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83010ca0
	if (ctx.cr6.eq) goto loc_83010CA0;
	// addi r6,r31,360
	ctx.r6.s64 = ctx.r31.s64 + 360;
	// lis r4,30829
	ctx.r4.s64 = 2020409344;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,24944
	ctx.r4.u64 = ctx.r4.u64 | 24944;
	// std r29,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r29.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r29,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r29.u64);
	// std r29,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r29.u64);
	// std r29,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r29.u64);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// stw r29,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r29.u32);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// bl 0x83013cb8
	ctx.lr = 0x83010C78;
	sub_83013CB8(ctx, base);
	// lis r5,32512
	ctx.r5.s64 = 2130706432;
	// lis r4,30820
	ctx.r4.s64 = 2019819520;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// ori r4,r4,28275
	ctx.r4.u64 = ctx.r4.u64 | 28275;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83013cb8
	ctx.lr = 0x83010C98;
	sub_83013CB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83010ca4
	goto loc_83010CA4;
loc_83010CA0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83010CA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010CB0"))) PPC_WEAK_FUNC(sub_83010CB0);
PPC_FUNC_IMPL(__imp__sub_83010CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83010CB8;
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83010d00
	if (!ctx.cr6.eq) goto loc_83010D00;
	// lis r4,28259
	ctx.r4.s64 = 1851981824;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,1502
	ctx.r3.s64 = 1502;
	// ori r4,r4,28526
	ctx.r4.u64 = ctx.r4.u64 | 28526;
	// bl 0x82217ec8
	ctx.lr = 0x83010CE8;
	sub_82217EC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// bne 0x83010d00
	if (!ctx.cr0.eq) goto loc_83010D00;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x83010d7c
	goto loc_83010D7C;
loc_83010D00:
	// addi r29,r30,204
	ctx.r29.s64 = ctx.r30.s64 + 204;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x83010D14;
	sub_82D5CB60(ctx, base);
	// li r5,1502
	ctx.r5.s64 = 1502;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82d5cb60
	ctx.lr = 0x83010D24;
	sub_82D5CB60(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,1502
	ctx.r4.s64 = 1502;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b74f10
	ctx.lr = 0x83010D38;
	sub_82B74F10(ctx, base);
	// cmpwi cr6,r3,997
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 997, ctx.xer);
	// bne cr6,0x83010d54
	if (!ctx.cr6.eq) goto loc_83010D54;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stb r10,400(r30)
	PPC_STORE_U8(ctx.r30.u32 + 400, ctx.r10.u8);
	// b 0x83010d7c
	goto loc_83010D7C;
loc_83010D54:
	// lis r4,28259
	ctx.r4.s64 = 1851981824;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r4,r4,28526
	ctx.r4.u64 = ctx.r4.u64 | 28526;
	// bl 0x822138a8
	ctx.lr = 0x83010D68;
	sub_822138A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stb r11,400(r30)
	PPC_STORE_U8(ctx.r30.u32 + 400, ctx.r11.u8);
loc_83010D7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010D88"))) PPC_WEAK_FUNC(sub_83010D88);
PPC_FUNC_IMPL(__imp__sub_83010D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83010D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x83010de8
	if (ctx.cr6.eq) goto loc_83010DE8;
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r29,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r29.u8);
	// bl 0x82a3bdd0
	ctx.lr = 0x83010DB8;
	sub_82A3BDD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83010dc8
	if (!ctx.cr0.eq) goto loc_83010DC8;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83010de4
	goto loc_83010DE4;
loc_83010DC8:
	// lis r4,28259
	ctx.r4.s64 = 1851981824;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// ori r4,r4,28526
	ctx.r4.u64 = ctx.r4.u64 | 28526;
	// bl 0x822138a8
	ctx.lr = 0x83010DDC;
	sub_822138A8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
loc_83010DE4:
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_83010DE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010DF0"))) PPC_WEAK_FUNC(sub_83010DF0);
PPC_FUNC_IMPL(__imp__sub_83010DF0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
loc_83010E08:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x83010e24
	if (!ctx.cr6.eq) goto loc_83010E24;
	// lbz r9,400(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 400);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83010e40
	if (ctx.cr0.eq) goto loc_83010E40;
loc_83010E24:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x83010e4c
	if (ctx.cr6.eq) goto loc_83010E4C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x83010e08
	if (ctx.cr6.lt) goto loc_83010E08;
	// b 0x83010e54
	goto loc_83010E54;
loc_83010E40:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83010cb0
	ctx.lr = 0x83010E48;
	sub_83010CB0(ctx, base);
	// b 0x83010e54
	goto loc_83010E54;
loc_83010E4C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83010d88
	ctx.lr = 0x83010E54;
	sub_83010D88(ctx, base);
loc_83010E54:
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_83010E78"))) PPC_WEAK_FUNC(sub_83010E78);
PPC_FUNC_IMPL(__imp__sub_83010E78) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3a270
	ctx.lr = 0x83010EA0;
	sub_82A3A270(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3a008
	ctx.lr = 0x83010EB0;
	sub_82A3A008(ctx, base);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x83010ef4
	if (!ctx.cr6.eq) goto loc_83010EF4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83010EC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x83010eec
	if (ctx.cr0.eq) goto loc_83010EEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x83010ec8
	if (ctx.cr6.eq) goto loc_83010EC8;
loc_83010EEC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83010f10
	if (ctx.cr0.eq) goto loc_83010F10;
loc_83010EF4:
	// li r5,16
	ctx.r5.s64 = 16;
	// std r7,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r7.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301b690
	ctx.lr = 0x83010F08;
	sub_8301B690(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_83010F10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_83010F28"))) PPC_WEAK_FUNC(sub_83010F28);
PPC_FUNC_IMPL(__imp__sub_83010F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83010F30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r29,72
	ctx.r31.s64 = ctx.r29.s64 + 72;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83010F44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3a010
	ctx.lr = 0x83010F4C;
	sub_82A3A010(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x83010f64
	if (!ctx.cr6.eq) goto loc_83010F64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83010e78
	ctx.lr = 0x83010F60;
	sub_83010E78(ctx, base);
	// b 0x83010f90
	goto loc_83010F90;
loc_83010F64:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83010f80
	if (ctx.cr0.eq) goto loc_83010F80;
	// lis r4,28259
	ctx.r4.s64 = 1851981824;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r4,r4,28526
	ctx.r4.u64 = ctx.r4.u64 | 28526;
	// bl 0x822138a8
	ctx.lr = 0x83010F80;
	sub_822138A8(ctx, base);
loc_83010F80:
	// std r28,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r28.u64);
	// std r28,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r28.u64);
	// std r28,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r28.u64);
	// std r28,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r28.u64);
loc_83010F90:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x83010f44
	if (ctx.cr6.lt) goto loc_83010F44;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83010FA8"))) PPC_WEAK_FUNC(sub_83010FA8);
PPC_FUNC_IMPL(__imp__sub_83010FA8) {
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
	// bl 0x82b4d2a0
	ctx.lr = 0x83010FC0;
	sub_82B4D2A0(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83010fd4
	if (!ctx.cr0.eq) goto loc_83010FD4;
loc_83010FC8:
	// lis r3,11635
	ctx.r3.s64 = 762511360;
	// ori r3,r3,30307
	ctx.r3.u64 = ctx.r3.u64 | 30307;
	// b 0x83011008
	goto loc_83011008;
loc_83010FD4:
	// lbz r11,394(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 394);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83010ff0
	if (!ctx.cr6.eq) goto loc_83010FF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83010be8
	ctx.lr = 0x83010FE8;
	sub_83010BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83010fc8
	if (ctx.cr0.lt) goto loc_83010FC8;
loc_83010FF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83010f28
	ctx.lr = 0x83010FF8;
	sub_83010F28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,11128
	ctx.r3.s64 = 729284608;
	// ori r3,r3,25196
	ctx.r3.u64 = ctx.r3.u64 | 25196;
	// stb r11,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r11.u8);
loc_83011008:
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

__attribute__((alias("__imp__sub_83011020"))) PPC_WEAK_FUNC(sub_83011020);
PPC_FUNC_IMPL(__imp__sub_83011020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,11128
	ctx.r11.s64 = 729284608;
	// ori r11,r11,25196
	ctx.r11.u64 = ctx.r11.u64 | 25196;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011038"))) PPC_WEAK_FUNC(sub_83011038);
PPC_FUNC_IMPL(__imp__sub_83011038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a8
	ctx.lr = 0x83011040;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// addi r28,r28,13292
	ctx.r28.s64 = ctx.r28.s64 + 13292;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r25,r10,13304
	ctx.r25.u64 = ctx.r10.u64 | 13304;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83011130
	if (!ctx.cr6.eq) goto loc_83011130;
	// lis r4,1024
	ctx.r4.s64 = 67108864;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x8308aa14
	ctx.lr = 0x83011084;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830110ec
	if (!ctx.cr0.eq) goto loc_830110EC;
	// lis r4,1024
	ctx.r4.s64 = 67108864;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x8308aa14
	ctx.lr = 0x830110A4;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830110cc
	if (ctx.cr0.eq) goto loc_830110CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r29,401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 401, ctx.r29.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,19702
	ctx.r11.s64 = ctx.r11.s64 + 19702;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x83011130
	goto loc_83011130;
loc_830110CC:
	// lis r4,1024
	ctx.r4.s64 = 67108864;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8308aa14
	ctx.lr = 0x830110E4;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830110fc
	if (ctx.cr0.eq) goto loc_830110FC;
loc_830110EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r29,401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 401, ctx.r29.u8);
	// b 0x83011130
	goto loc_83011130;
loc_830110FC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,13300
	ctx.r11.u64 = ctx.r11.u64 | 13300;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83011130
	if (ctx.cr0.eq) goto loc_83011130;
	// lwzx r10,r31,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// subf r10,r10,r20
	ctx.r10.s64 = ctx.r20.s64 - ctx.r10.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x83011130
	if (!ctx.cr6.gt) goto loc_83011130;
	// stb r29,401(r31)
	PPC_STORE_U8(ctx.r31.u32 + 401, ctx.r29.u8);
	// stb r29,402(r31)
	PPC_STORE_U8(ctx.r31.u32 + 402, ctx.r29.u8);
	// stb r29,403(r31)
	PPC_STORE_U8(ctx.r31.u32 + 403, ctx.r29.u8);
	// stb r29,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r29.u8);
loc_83011130:
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r23,r23,13272
	ctx.r23.s64 = ctx.r23.s64 + 13272;
	// li r22,1
	ctx.r22.s64 = 1;
loc_83011140:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r21,r10,13296
	ctx.r21.u64 = ctx.r10.u64 | 13296;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r27,r10,13288
	ctx.r27.u64 = ctx.r10.u64 | 13288;
	// bne cr6,0x830111b8
	if (!ctx.cr6.eq) goto loc_830111B8;
	// add r24,r30,r31
	ctx.r24.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r11,401(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 401);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830111b8
	if (!ctx.cr0.eq) goto loc_830111B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3a010
	ctx.lr = 0x83011174;
	sub_82A3A010(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x830111b8
	if (!ctx.cr6.eq) goto loc_830111B8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// bl 0x82a3b090
	ctx.lr = 0x83011190;
	sub_82A3B090(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830111a4
	if (!ctx.cr0.eq) goto loc_830111A4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830111a8
	if (ctx.cr0.eq) goto loc_830111A8;
loc_830111A4:
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_830111A8:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830111cc
	if (ctx.cr0.eq) goto loc_830111CC;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// stb r22,401(r24)
	PPC_STORE_U8(ctx.r24.u32 + 401, ctx.r22.u8);
loc_830111B8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x83011140
	if (ctx.cr6.lt) goto loc_83011140;
	// b 0x83011294
	goto loc_83011294;
loc_830111CC:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stwx r30,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r30.u32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b74440
	ctx.lr = 0x830111E8;
	sub_82B74440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83011260
	if (!ctx.cr0.eq) goto loc_83011260;
	// addi r26,r31,232
	ctx.r26.s64 = ctx.r31.s64 + 232;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x83011204;
	sub_82D5CB60(ctx, base);
	// mulli r11,r30,19600
	ctx.r11.s64 = ctx.r30.s64 * 19600;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,19600
	ctx.r5.s64 = 19600;
	// addi r4,r11,408
	ctx.r4.s64 = ctx.r11.s64 + 408;
	// bl 0x82a3a958
	ctx.lr = 0x83011224;
	sub_82A3A958(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x83011294
	if (ctx.cr6.eq) goto loc_83011294;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82a3a2c0
	ctx.lr = 0x83011234;
	sub_82A3A2C0(ctx, base);
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r10,r30,19702
	ctx.r10.s64 = ctx.r30.s64 + 19702;
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r22,401(r9)
	PPC_STORE_U8(ctx.r9.u32 + 401, ctx.r22.u8);
	// stwx r29,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x83011290
	goto loc_83011290;
loc_83011260:
	// addi r10,r30,19702
	ctx.r10.s64 = ctx.r30.s64 + 19702;
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// stb r22,401(r9)
	PPC_STORE_U8(ctx.r9.u32 + 401, ctx.r22.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82a3a2c0
	ctx.lr = 0x8301128C;
	sub_82A3A2C0(ctx, base);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_83011290:
	// stwx r20,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r20.u32);
loc_83011294:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301132c
	if (ctx.cr6.eq) goto loc_8301132C;
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8301132c
	if (ctx.cr6.eq) goto loc_8301132C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3a820
	ctx.lr = 0x830112C0;
	sub_82A3A820(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830112e4
	if (!ctx.cr0.eq) goto loc_830112E4;
	// add r11,r31,r21
	ctx.r11.u64 = ctx.r31.u64 + ctx.r21.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,19702
	ctx.r10.s64 = ctx.r10.s64 + 19702;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// b 0x83011300
	goto loc_83011300;
loc_830112E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3bdd0
	ctx.lr = 0x830112EC;
	sub_82A3BDD0(ctx, base);
	// add r11,r31,r21
	ctx.r11.u64 = ctx.r31.u64 + ctx.r21.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,19702
	ctx.r10.s64 = ctx.r10.s64 + 19702;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
loc_83011300:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r22,401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 401, ctx.r22.u8);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82a3a2c0
	ctx.lr = 0x83011314;
	sub_82A3A2C0(ctx, base);
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// stwx r20,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r20.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8301132C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82d5c4f8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011338"))) PPC_WEAK_FUNC(sub_83011338);
PPC_FUNC_IMPL(__imp__sub_83011338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83011340;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x82b4d290
	ctx.lr = 0x83011354;
	sub_82B4D290(ctx, base);
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r3,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x8308aa14
	ctx.lr = 0x83011370;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83011384
	if (ctx.cr0.eq) goto loc_83011384;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
loc_83011384:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83011038
	ctx.lr = 0x83011390;
	sub_83011038(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x830113e0
	if (ctx.cr6.lt) goto loc_830113E0;
	// beq cr6,0x830114fc
	if (ctx.cr6.eq) goto loc_830114FC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x83011480
	if (ctx.cr6.lt) goto loc_83011480;
	// beq cr6,0x8301143c
	if (ctx.cr6.eq) goto loc_8301143C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8301173c
	if (!ctx.cr6.lt) goto loc_8301173C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83010df0
	ctx.lr = 0x830113C0;
	sub_83010DF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830113d4
	if (!ctx.cr0.gt) goto loc_830113D4;
	// lis r11,11119
	ctx.r11.s64 = 728694784;
	// ori r11,r11,28268
	ctx.r11.u64 = ctx.r11.u64 | 28268;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
loc_830113D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8301173c
	if (ctx.cr6.eq) goto loc_8301173C;
	// stw r29,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
loc_830113E0:
	// lbz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 396);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8301173c
	if (ctx.cr0.eq) goto loc_8301173C;
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8308aa14
	ctx.lr = 0x83011404;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83011674
	if (ctx.cr0.eq) goto loc_83011674;
	// lis r11,21
	ctx.r11.s64 = 1376256;
	// ori r10,r11,4336
	ctx.r10.u64 = ctx.r11.u64 | 4336;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83011674
	if (ctx.cr6.eq) goto loc_83011674;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83011560
	if (!ctx.cr6.eq) goto loc_83011560;
	// lis r11,11630
	ctx.r11.s64 = 762183680;
	// ori r11,r11,25972
	ctx.r11.u64 = ctx.r11.u64 | 25972;
	// b 0x8301166c
	goto loc_8301166C;
loc_8301143C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82b4d1a8
	ctx.lr = 0x83011444;
	sub_82B4D1A8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x83011460
	if (!ctx.cr6.eq) goto loc_83011460;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stb r10,397(r31)
	PPC_STORE_U8(ctx.r31.u32 + 397, ctx.r10.u8);
	// b 0x8301173c
	goto loc_8301173C;
loc_83011460:
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8301173c
	if (!ctx.cr6.eq) goto loc_8301173C;
	// lis r11,11635
	ctx.r11.s64 = 762511360;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,30307
	ctx.r11.u64 = ctx.r11.u64 | 30307;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// b 0x8301173c
	goto loc_8301173C;
loc_83011480:
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lis r11,11520
	ctx.r11.s64 = 754974720;
	// rlwinm r10,r10,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830114a4
	if (ctx.cr6.eq) goto loc_830114A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x83010fa8
	ctx.lr = 0x830114A0;
	sub_83010FA8(ctx, base);
	// stw r3,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
loc_830114A4:
	// lis r10,11128
	ctx.r10.s64 = 729284608;
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// ori r10,r10,25196
	ctx.r10.u64 = ctx.r10.u64 | 25196;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8301173c
	if (!ctx.cr6.eq) goto loc_8301173C;
	// lbz r11,394(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 394);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830114f0
	if (ctx.cr0.eq) goto loc_830114F0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82b4d198
	ctx.lr = 0x830114CC;
	sub_82B4D198(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830114e8
	if (ctx.cr0.eq) goto loc_830114E8;
	// lis r11,11623
	ctx.r11.s64 = 761724928;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,24948
	ctx.r11.u64 = ctx.r11.u64 | 24948;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
loc_830114E8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x830114f4
	goto loc_830114F4;
loc_830114F0:
	// li r11,4
	ctx.r11.s64 = 4;
loc_830114F4:
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// b 0x8301173c
	goto loc_8301173C;
loc_830114FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x83010a50
	ctx.lr = 0x83011508;
	sub_83010A50(ctx, base);
	// lbz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 392);
	// stw r3,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8301173c
	if (!ctx.cr6.eq) goto loc_8301173C;
	// lis r11,11113
	ctx.r11.s64 = 728301568;
	// ori r11,r11,29552
	ctx.r11.u64 = ctx.r11.u64 | 29552;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8301173c
	if (!ctx.cr6.eq) goto loc_8301173C;
	// lbz r11,393(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 393);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8301173c
	if (!ctx.cr0.eq) goto loc_8301173C;
	// addi r30,r31,312
	ctx.r30.s64 = ctx.r31.s64 + 312;
	// addi r29,r31,304
	ctx.r29.s64 = ctx.r31.s64 + 304;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b4d120
	ctx.lr = 0x83011548;
	sub_82B4D120(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b4d130
	ctx.lr = 0x83011554;
	sub_82B4D130(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,393(r31)
	PPC_STORE_U8(ctx.r31.u32 + 393, ctx.r11.u8);
	// b 0x8301173c
	goto loc_8301173C;
loc_83011560:
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4097
	ctx.r10.u64 = ctx.r10.u64 | 4097;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83011664
	if (ctx.cr6.eq) goto loc_83011664;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83011664
	if (ctx.cr6.eq) goto loc_83011664;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4353
	ctx.r10.u64 = ctx.r10.u64 | 4353;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83011664
	if (ctx.cr6.eq) goto loc_83011664;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4354
	ctx.r10.u64 = ctx.r10.u64 | 4354;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83011664
	if (ctx.cr6.eq) goto loc_83011664;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4098
	ctx.r10.u64 = ctx.r10.u64 | 4098;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83011658
	if (ctx.cr6.eq) goto loc_83011658;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4103
	ctx.r10.u64 = ctx.r10.u64 | 4103;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83011658
	if (ctx.cr6.eq) goto loc_83011658;
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4099
	ctx.r10.u64 = ctx.r10.u64 | 4099;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830115dc
	if (!ctx.cr6.eq) goto loc_830115DC;
	// lis r11,11618
	ctx.r11.s64 = 761397248;
	// ori r11,r11,29561
	ctx.r11.u64 = ctx.r11.u64 | 29561;
	// b 0x8301166c
	goto loc_8301166C;
loc_830115DC:
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4100
	ctx.r10.u64 = ctx.r10.u64 | 4100;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830115f8
	if (!ctx.cr6.eq) goto loc_830115F8;
	// lis r11,11628
	ctx.r11.s64 = 762052608;
	// ori r11,r11,29556
	ctx.r11.u64 = ctx.r11.u64 | 29556;
	// b 0x8301166c
	goto loc_8301166C;
loc_830115F8:
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4101
	ctx.r10.u64 = ctx.r10.u64 | 4101;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83011614
	if (!ctx.cr6.eq) goto loc_83011614;
	// lis r11,11620
	ctx.r11.s64 = 761528320;
	// ori r11,r11,30064
	ctx.r11.u64 = ctx.r11.u64 | 30064;
	// b 0x8301166c
	goto loc_8301166C;
loc_83011614:
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r10,r10,4102
	ctx.r10.u64 = ctx.r10.u64 | 4102;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83011630
	if (!ctx.cr6.eq) goto loc_83011630;
	// lis r11,11625
	ctx.r11.s64 = 761856000;
	// ori r11,r11,28278
	ctx.r11.u64 = ctx.r11.u64 | 28278;
	// b 0x8301166c
	goto loc_8301166C;
loc_83011630:
	// lis r10,21
	ctx.r10.s64 = 1376256;
	// ori r10,r10,4337
	ctx.r10.u64 = ctx.r10.u64 | 4337;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8301164c
	if (!ctx.cr6.eq) goto loc_8301164C;
	// lis r11,11628
	ctx.r11.s64 = 762052608;
	// ori r11,r11,28518
	ctx.r11.u64 = ctx.r11.u64 | 28518;
	// b 0x8301166c
	goto loc_8301166C;
loc_8301164C:
	// lis r11,11640
	ctx.r11.s64 = 762839040;
	// ori r11,r11,25196
	ctx.r11.u64 = ctx.r11.u64 | 25196;
	// b 0x8301166c
	goto loc_8301166C;
loc_83011658:
	// lis r11,11637
	ctx.r11.s64 = 762642432;
	// ori r11,r11,28772
	ctx.r11.u64 = ctx.r11.u64 | 28772;
	// b 0x8301166c
	goto loc_8301166C;
loc_83011664:
	// lis r11,11635
	ctx.r11.s64 = 762511360;
	// ori r11,r11,30307
	ctx.r11.u64 = ctx.r11.u64 | 30307;
loc_8301166C:
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stb r29,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r29.u8);
loc_83011674:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x8308aa14
	ctx.lr = 0x83011688;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83011698
	if (ctx.cr0.eq) goto loc_83011698;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83010f28
	ctx.lr = 0x83011698;
	sub_83010F28(ctx, base);
loc_83011698:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x8308aa14
	ctx.lr = 0x830116AC;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830116bc
	if (ctx.cr0.eq) goto loc_830116BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83010f28
	ctx.lr = 0x830116BC;
	sub_83010F28(ctx, base);
loc_830116BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83010df0
	ctx.lr = 0x830116C4;
	sub_83010DF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8301173c
	if (ctx.cr0.lt) goto loc_8301173C;
	// addi r30,r31,264
	ctx.r30.s64 = ctx.r31.s64 + 264;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301171c
	if (ctx.cr0.eq) goto loc_8301171C;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// andi. r11,r11,9
	ctx.r11.u64 = ctx.r11.u64 & 9;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83011704
	if (ctx.cr0.eq) goto loc_83011704;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lhz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
loc_83011704:
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8301173c
	if (ctx.cr0.eq) goto loc_8301173C;
	// bl 0x82b4d280
	ctx.lr = 0x83011714;
	sub_82B4D280(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// b 0x8301173c
	goto loc_8301173C;
loc_8301171C:
	// lbz r11,399(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 399);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8301173c
	if (!ctx.cr6.eq) goto loc_8301173C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b4d268
	ctx.lr = 0x83011738;
	sub_82B4D268(ctx, base);
	// stb r29,399(r31)
	PPC_STORE_U8(ctx.r31.u32 + 399, ctx.r29.u8);
loc_8301173C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011748"))) PPC_WEAK_FUNC(sub_83011748);
PPC_FUNC_IMPL(__imp__sub_83011748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x83011750;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r23,r11,-17544
	ctx.r23.s64 = ctx.r11.s64 + -17544;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,4
	ctx.r26.s64 = 4;
	// lwz r24,0(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x8301c188
	ctx.lr = 0x83011774;
	sub_8301C188(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83011784
	if (!ctx.cr6.eq) goto loc_83011784;
	// addi r31,r23,4
	ctx.r31.s64 = ctx.r23.s64 + 4;
loc_83011784:
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-12760
	ctx.r30.s64 = ctx.r11.s64 + -12760;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// bl 0x82d5f9f0
	ctx.lr = 0x83011798;
	sub_82D5F9F0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830117a8
	if (ctx.cr0.eq) goto loc_830117A8;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_830117A8:
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x830117B4;
	sub_82D5F9F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830117c0
	if (ctx.cr0.eq) goto loc_830117C0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_830117C0:
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x830117CC;
	sub_82D5F9F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830117d8
	if (ctx.cr0.eq) goto loc_830117D8;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_830117D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d5f9f0
	ctx.lr = 0x830117E4;
	sub_82D5F9F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83011800
	if (ctx.cr0.eq) goto loc_83011800;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82d5df38
	ctx.lr = 0x830117FC;
	sub_82D5DF38(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_83011800:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83011810
	if (ctx.cr6.eq) goto loc_83011810;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8301190c
	goto loc_8301190C;
loc_83011810:
	// lis r4,28259
	ctx.r4.s64 = 1851981824;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r4,r4,28526
	ctx.r4.u64 = ctx.r4.u64 | 28526;
	// ori r3,r3,13312
	ctx.r3.u64 = ctx.r3.u64 | 13312;
	// bl 0x82217ec8
	ctx.lr = 0x83011828;
	sub_82217EC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83011838
	if (!ctx.cr0.eq) goto loc_83011838;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8301190c
	goto loc_8301190C;
loc_83011838:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,13312
	ctx.r5.u64 = ctx.r5.u64 | 13312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x8301184C;
	sub_82D5CB60(ctx, base);
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,394(r31)
	PPC_STORE_U8(ctx.r31.u32 + 394, ctx.r29.u8);
	// stb r25,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r25.u8);
	// bl 0x830109d8
	ctx.lr = 0x83011868;
	sub_830109D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83011878
	if (ctx.cr0.eq) goto loc_83011878;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x8301190c
	goto loc_8301190C;
loc_83011878:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83013108
	ctx.lr = 0x83011880;
	sub_83013108(ctx, base);
	// lbz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 392);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83011894
	if (!ctx.cr0.eq) goto loc_83011894;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b73520
	ctx.lr = 0x83011894;
	sub_82B73520(ctx, base);
loc_83011894:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r29,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,4920
	ctx.r3.s64 = ctx.r11.s64 + 4920;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x83012628
	ctx.lr = 0x830118B4;
	sub_83012628(ctx, base);
	// li r3,111
	ctx.r3.s64 = 111;
	// bl 0x82a3bdf8
	ctx.lr = 0x830118BC;
	sub_82A3BDF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r3.u32);
	// bne 0x830118d0
	if (!ctx.cr0.eq) goto loc_830118D0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8301190c
	goto loc_8301190C;
loc_830118D0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// ori r11,r11,13300
	ctx.r11.u64 = ctx.r11.u64 | 13300;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x83010640
	ctx.lr = 0x830118E4;
	sub_83010640(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,13304
	ctx.r11.u64 = ctx.r11.u64 | 13304;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// bl 0x82a3a970
	ctx.lr = 0x830118F4;
	sub_82A3A970(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,13308
	ctx.r10.u64 = ctx.r10.u64 | 13308;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8301190C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011918"))) PPC_WEAK_FUNC(sub_83011918);
PPC_FUNC_IMPL(__imp__sub_83011918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83011920;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,-17544(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17544);
	// bl 0x83010640
	ctx.lr = 0x83011938;
	sub_83010640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83011338
	ctx.lr = 0x83011944;
	sub_83011338(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301199c
	if (ctx.cr6.eq) goto loc_8301199C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r31,72
	ctx.r7.s64 = ctx.r31.s64 + 72;
loc_83011954:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8301195C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x83011980
	if (ctx.cr0.eq) goto loc_83011980;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8301195c
	if (ctx.cr6.eq) goto loc_8301195C;
loc_83011980:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83011a00
	if (ctx.cr0.eq) goto loc_83011A00;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x83011954
	if (ctx.cr6.lt) goto loc_83011954;
	// b 0x830119fc
	goto loc_830119FC;
loc_8301199C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830119fc
	if (ctx.cr6.eq) goto loc_830119FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
loc_830119AC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_830119B8:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x830119d8
	if (!ctx.cr0.eq) goto loc_830119D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x830119b8
	if (!ctx.cr6.eq) goto loc_830119B8;
loc_830119D8:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x830119ec
	if (!ctx.cr0.eq) goto loc_830119EC;
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x83011a00
	if (!ctx.cr6.eq) goto loc_83011A00;
loc_830119EC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x830119ac
	if (ctx.cr6.lt) goto loc_830119AC;
loc_830119FC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83011A00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011A08"))) PPC_WEAK_FUNC(sub_83011A08);
PPC_FUNC_IMPL(__imp__sub_83011A08) {
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
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r31,-17544(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17544);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lbz r8,395(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 395);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r9,399(r31)
	PPC_STORE_U8(ctx.r31.u32 + 399, ctx.r9.u8);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// bne 0x83011a54
	if (!ctx.cr0.eq) goto loc_83011A54;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83011a7c
	goto loc_83011A7C;
loc_83011A54:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83010b60
	ctx.lr = 0x83011A5C;
	sub_83010B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bne 0x83011a70
	if (!ctx.cr0.eq) goto loc_83011A70;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83011a7c
	goto loc_83011A7C;
loc_83011A70:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
loc_83011A7C:
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

__attribute__((alias("__imp__sub_83011A90"))) PPC_WEAK_FUNC(sub_83011A90);
PPC_FUNC_IMPL(__imp__sub_83011A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83011A98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,-17544(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17544);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83011abc
	if (ctx.cr0.eq) goto loc_83011ABC;
	// bl 0x82b4d280
	ctx.lr = 0x83011AB8;
	sub_82B4D280(ctx, base);
	// stw r29,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r29.u32);
loc_83011ABC:
	// lbz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 400);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83011ad4
	if (!ctx.cr6.eq) goto loc_83011AD4;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x82e99e28
	ctx.lr = 0x83011AD0;
	sub_82E99E28(ctx, base);
	// stb r29,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r29.u8);
loc_83011AD4:
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// li r28,4
	ctx.r28.s64 = 4;
loc_83011ADC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83011af8
	if (ctx.cr0.eq) goto loc_83011AF8;
	// lis r4,28259
	ctx.r4.s64 = 1851981824;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r4,r4,28526
	ctx.r4.u64 = ctx.r4.u64 | 28526;
	// bl 0x822138a8
	ctx.lr = 0x83011AF8;
	sub_822138A8(ctx, base);
loc_83011AF8:
	// addi r11,r30,-28
	ctx.r11.s64 = ctx.r30.s64 + -28;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// std r29,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r29.u64);
	// std r29,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r29.u64);
	// bne 0x83011adc
	if (!ctx.cr0.eq) goto loc_83011ADC;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x82b4d140
	ctx.lr = 0x83011B20;
	sub_82B4D140(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011B40"))) PPC_WEAK_FUNC(sub_83011B40);
PPC_FUNC_IMPL(__imp__sub_83011B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x83011B48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r31,-17544(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17544);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83011b74
	if (!ctx.cr6.eq) goto loc_83011B74;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83011c3c
	goto loc_83011C3C;
loc_83011B74:
	// lis r11,26226
	ctx.r11.s64 = 1718747136;
	// ori r11,r11,29300
	ctx.r11.u64 = ctx.r11.u64 | 29300;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83011bac
	if (!ctx.cr6.eq) goto loc_83011BAC;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,13300
	ctx.r11.s64 = ctx.r11.s64 + 13300;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x83011c04
	if (ctx.cr6.eq) goto loc_83011C04;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x83010640
	ctx.lr = 0x83011BA0;
	sub_83010640(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,13304
	ctx.r11.u64 = ctx.r11.u64 | 13304;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
loc_83011BAC:
	// lis r11,29541
	ctx.r11.s64 = 1935998976;
	// ori r3,r11,29302
	ctx.r3.u64 = ctx.r11.u64 | 29302;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x83011be4
	if (!ctx.cr6.eq) goto loc_83011BE4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x83011c04
	if (!ctx.cr6.lt) goto loc_83011C04;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x83011c38
	goto loc_83011C38;
loc_83011BE4:
	// lis r11,29801
	ctx.r11.s64 = 1953038336;
	// ori r11,r11,29804
	ctx.r11.u64 = ctx.r11.u64 | 29804;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83011c20
	if (ctx.cr6.eq) goto loc_83011C20;
	// lis r11,30828
	ctx.r11.s64 = 2020343808;
	// ori r11,r11,29552
	ctx.r11.u64 = ctx.r11.u64 | 29552;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83011c20
	if (ctx.cr6.eq) goto loc_83011C20;
loc_83011C04:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83013cb8
	ctx.lr = 0x83011C1C;
	sub_83013CB8(ctx, base);
	// b 0x83011c3c
	goto loc_83011C3C;
loc_83011C20:
	// lis r4,17729
	ctx.r4.s64 = 1161887744;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,2053
	ctx.r4.u64 = ctx.r4.u64 | 2053;
	// bl 0x83011b40
	ctx.lr = 0x83011C38;
	sub_83011B40(ctx, base);
loc_83011C38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83011C3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83011C48"))) PPC_WEAK_FUNC(sub_83011C48);
PPC_FUNC_IMPL(__imp__sub_83011C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x83011C50;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,28528
	ctx.r11.s64 = 1869611008;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,25966
	ctx.r10.u64 = ctx.r11.u64 | 25966;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// lwz r30,-17544(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17544);
	// bne cr6,0x83011c8c
	if (!ctx.cr6.eq) goto loc_83011C8C;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x8301240c
	goto loc_8301240C;
loc_83011C8C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83011c9c
	if (!ctx.cr6.eq) goto loc_83011C9C;
loc_83011C94:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8301240c
	goto loc_8301240C;
loc_83011C9C:
	// bl 0x82a3a970
	ctx.lr = 0x83011CA0;
	sub_82A3A970(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,13308
	ctx.r11.u64 = ctx.r11.u64 | 13308;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83011cc4
	if (!ctx.cr6.eq) goto loc_83011CC4;
	// bl 0x83010640
	ctx.lr = 0x83011CB8;
	sub_83010640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83011338
	ctx.lr = 0x83011CC4;
	sub_83011338(ctx, base);
loc_83011CC4:
	// lis r11,24932
	ctx.r11.s64 = 1633943552;
	// ori r11,r11,25714
	ctx.r11.u64 = ctx.r11.u64 | 25714;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83011cdc
	if (!ctx.cr6.eq) goto loc_83011CDC;
	// bl 0x830148a0
	ctx.lr = 0x83011CD8;
	sub_830148A0(ctx, base);
	// b 0x8301240c
	goto loc_8301240C;
loc_83011CDC:
	// lis r11,25186
	ctx.r11.s64 = 1650589696;
	// ori r11,r11,28260
	ctx.r11.u64 = ctx.r11.u64 | 28260;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83011cf4
	if (!ctx.cr6.eq) goto loc_83011CF4;
loc_83011CEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8301240c
	goto loc_8301240C;
loc_83011CF4:
	// lis r11,25200
	ctx.r11.s64 = 1651507200;
	// ori r11,r11,29540
	ctx.r11.u64 = ctx.r11.u64 | 29540;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83011d0c
	if (!ctx.cr6.eq) goto loc_83011D0C;
	// lwz r3,348(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// b 0x8301240c
	goto loc_8301240C;
loc_83011D0C:
	// lis r11,25200
	ctx.r11.s64 = 1651507200;
	// ori r11,r11,29557
	ctx.r11.u64 = ctx.r11.u64 | 29557;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83011d24
	if (!ctx.cr6.eq) goto loc_83011D24;
	// lwz r3,344(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// b 0x8301240c
	goto loc_8301240C;
loc_83011D24:
	// lis r11,25455
	ctx.r11.s64 = 1668218880;
	// ori r11,r11,28270
	ctx.r11.u64 = ctx.r11.u64 | 28270;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83012408
	if (ctx.cr6.eq) goto loc_83012408;
	// lis r11,29556
	ctx.r11.s64 = 1936982016;
	// ori r11,r11,24946
	ctx.r11.u64 = ctx.r11.u64 | 24946;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83012408
	if (ctx.cr6.eq) goto loc_83012408;
	// lis r11,26226
	ctx.r11.s64 = 1718747136;
	// ori r11,r11,28260
	ctx.r11.u64 = ctx.r11.u64 | 28260;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83011d90
	if (!ctx.cr6.eq) goto loc_83011D90;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bgt cr6,0x83011c94
	if (ctx.cr6.gt) goto loc_83011C94;
	// addi r11,r29,19702
	ctx.r11.s64 = ctx.r29.s64 + 19702;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r5,r11,196
	ctx.r5.s64 = ctx.r11.s64 * 196;
	// cmpw cr6,r27,r5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x83011c94
	if (ctx.cr6.lt) goto loc_83011C94;
	// mulli r11,r29,19600
	ctx.r11.s64 = ctx.r29.s64 * 19600;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,408
	ctx.r4.s64 = ctx.r11.s64 + 408;
	// bl 0x82d5c630
	ctx.lr = 0x83011D88;
	sub_82D5C630(ctx, base);
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// b 0x8301240c
	goto loc_8301240C;
loc_83011D90:
	// lis r11,26226
	ctx.r11.s64 = 1718747136;
	// ori r11,r11,28278
	ctx.r11.u64 = ctx.r11.u64 | 28278;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83011db0
	if (!ctx.cr6.eq) goto loc_83011DB0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,13288
	ctx.r11.u64 = ctx.r11.u64 | 13288;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// b 0x8301240c
	goto loc_8301240C;
loc_83011DB0:
	// lis r11,26465
	ctx.r11.s64 = 1734410240;
	// ori r11,r11,29797
	ctx.r11.u64 = ctx.r11.u64 | 29797;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83011dc8
	if (!ctx.cr6.eq) goto loc_83011DC8;
	// lbz r3,397(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 397);
	// b 0x8301240c
	goto loc_8301240C;
loc_83011DC8:
	// lis r10,26990
	ctx.r10.s64 = 1768816640;
	// lis r11,26484
	ctx.r11.s64 = 1735655424;
	// ori r9,r10,30324
	ctx.r9.u64 = ctx.r10.u64 | 30324;
	// lis r10,27759
	ctx.r10.s64 = 1819213824;
	// ori r11,r11,24935
	ctx.r11.u64 = ctx.r11.u64 | 24935;
	// ori r8,r10,25452
	ctx.r8.u64 = ctx.r10.u64 | 25452;
	// lis r10,29541
	ctx.r10.s64 = 1935998976;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r5,r10,29302
	ctx.r5.u64 = ctx.r10.u64 | 29302;
	// lis r10,30830
	ctx.r10.s64 = 2020474880;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r4,r10,26223
	ctx.r4.u64 = ctx.r10.u64 | 26223;
	// lis r10,30837
	ctx.r10.s64 = 2020933632;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// ori r3,r10,26980
	ctx.r3.u64 = ctx.r10.u64 | 26980;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83011E24:
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83011e40
	if (!ctx.cr6.gt) goto loc_83011E40;
	// addi r26,r10,4
	ctx.r26.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x83011e40
	if (ctx.cr6.gt) goto loc_83011E40;
	// subf r29,r10,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r10.s64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_83011E40:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r26,r7,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r26,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83011e24
	if (!ctx.cr0.eq) goto loc_83011E24;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83011e8c
	if (!ctx.cr6.eq) goto loc_83011E8C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83011f7c
	if (ctx.cr6.eq) goto loc_83011F7C;
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x83011f7c
	if (ctx.cr6.lt) goto loc_83011F7C;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,72
	ctx.r4.s64 = ctx.r11.s64 + 72;
loc_83011E80:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d5c630
	ctx.lr = 0x83011E88;
	sub_82D5C630(ctx, base);
	// b 0x83011cec
	goto loc_83011CEC;
loc_83011E8C:
	// lis r11,26735
	ctx.r11.s64 = 1752104960;
	// ori r11,r11,29556
	ctx.r11.u64 = ctx.r11.u64 | 29556;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83011ec0
	if (!ctx.cr6.eq) goto loc_83011EC0;
	// lbz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 396);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83011f7c
	if (ctx.cr0.eq) goto loc_83011F7C;
	// lbz r11,394(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 394);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83011f7c
	if (ctx.cr0.eq) goto loc_83011F7C;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83014b68
	ctx.lr = 0x83011EBC;
	sub_83014B68(ctx, base);
	// b 0x8301240c
	goto loc_8301240C;
loc_83011EC0:
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83011f14
	if (!ctx.cr6.eq) goto loc_83011F14;
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83011f7c
	if (ctx.cr6.eq) goto loc_83011F7C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b745a0
	ctx.lr = 0x83011EE0;
	sub_82B745A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83011c94
	if (!ctx.cr0.eq) goto loc_83011C94;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83011f00
	if (ctx.cr6.eq) goto loc_83011F00;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d5c630
	ctx.lr = 0x83011F00;
	sub_82D5C630(ctx, base);
loc_83011F00:
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r11.u32);
	// b 0x8301240c
	goto loc_8301240C;
loc_83011F14:
	// lis r11,26995
	ctx.r11.s64 = 1769144320;
	// ori r11,r11,26226
	ctx.r11.u64 = ctx.r11.u64 | 26226;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83011f84
	if (!ctx.cr6.eq) goto loc_83011F84;
	// ld r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bgt cr6,0x83011f7c
	if (ctx.cr6.gt) goto loc_83011F7C;
	// addi r11,r29,19702
	ctx.r11.s64 = ctx.r29.s64 + 19702;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83011f7c
	if (ctx.cr0.eq) goto loc_83011F7C;
	// mulli r11,r29,19600
	ctx.r11.s64 = ctx.r29.s64 * 19600;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
loc_83011F54:
	// ld r7,-24(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + -24);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x83011f6c
	if (!ctx.cr6.eq) goto loc_83011F6C;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r7,0,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC0000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x83011cec
	if (ctx.cr0.eq) goto loc_83011CEC;
loc_83011F6C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 + 196;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83011f54
	if (ctx.cr6.lt) goto loc_83011F54;
loc_83011F7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301240c
	goto loc_8301240C;
loc_83011F84:
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x830120d4
	if (!ctx.cr6.eq) goto loc_830120D4;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830120c8
	if (ctx.cr0.eq) goto loc_830120C8;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830120c8
	if (!ctx.cr6.eq) goto loc_830120C8;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// lhz r7,54(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 54);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-13280
	ctx.r11.s64 = ctx.r11.s64 + -13280;
	// li r5,31354
	ctx.r5.s64 = 31354;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_83011FC4:
	// lhz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x83011fe4
	if (ctx.cr6.eq) goto loc_83011FE4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// blt cr6,0x83011fc4
	if (ctx.cr6.lt) goto loc_83011FC4;
	// b 0x83011ff0
	goto loc_83011FF0;
loc_83011FE4:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lhzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
loc_83011FF0:
	// lbz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 56);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,23130
	ctx.r6.s64 = 23130;
loc_83012000:
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83012020
	if (ctx.cr6.eq) goto loc_83012020;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,110
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 110, ctx.xer);
	// blt cr6,0x83012000
	if (ctx.cr6.lt) goto loc_83012000;
	// b 0x83012030
	goto loc_83012030;
loc_83012020:
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
loc_83012030:
	// rlwinm r11,r5,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x8301204c
	if (ctx.cr6.lt) goto loc_8301204C;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// ble cr6,0x83012050
	if (!ctx.cr6.gt) goto loc_83012050;
loc_8301204C:
	// rlwinm r10,r5,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
loc_83012050:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x83012068
	if (ctx.cr6.lt) goto loc_83012068;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// ori r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 | 32;
	// ble cr6,0x8301206c
	if (!ctx.cr6.gt) goto loc_8301206C;
loc_83012068:
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
loc_8301206C:
	// rlwinm r11,r6,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x83012088
	if (ctx.cr6.lt) goto loc_83012088;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// rlwinm r8,r11,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// ble cr6,0x8301208c
	if (!ctx.cr6.gt) goto loc_8301208C;
loc_83012088:
	// rlwinm r8,r6,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF;
loc_8301208C:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x830120a4
	if (ctx.cr6.lt) goto loc_830120A4;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// rlwinm r9,r11,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// ble cr6,0x830120a8
	if (!ctx.cr6.gt) goto loc_830120A8;
loc_830120A4:
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
loc_830120A8:
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8301240c
	goto loc_8301240C;
loc_830120C8:
	// lis r3,31354
	ctx.r3.s64 = 2054815744;
	// ori r3,r3,23130
	ctx.r3.u64 = ctx.r3.u64 | 23130;
	// b 0x8301240c
	goto loc_8301240C;
loc_830120D4:
	// lis r11,28001
	ctx.r11.s64 = 1835073536;
	// ori r11,r11,25464
	ctx.r11.u64 = ctx.r11.u64 | 25464;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301210c
	if (!ctx.cr6.eq) goto loc_8301210C;
	// lbz r11,395(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 395);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83011f7c
	if (!ctx.cr6.eq) goto loc_83011F7C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83011f7c
	if (ctx.cr6.eq) goto loc_83011F7C;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// blt cr6,0x83011f7c
	if (ctx.cr6.lt) goto loc_83011F7C;
	// addi r4,r30,278
	ctx.r4.s64 = ctx.r30.s64 + 278;
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x83011e80
	goto loc_83011E80;
loc_8301210C:
	// lis r11,28018
	ctx.r11.s64 = 1836187648;
	// ori r11,r11,29812
	ctx.r11.u64 = ctx.r11.u64 | 29812;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83012124
	if (!ctx.cr6.eq) goto loc_83012124;
	// lwz r3,352(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// b 0x8301240c
	goto loc_8301240C;
loc_83012124:
	// lis r11,28526
	ctx.r11.s64 = 1869479936;
	// ori r11,r11,27758
	ctx.r11.u64 = ctx.r11.u64 | 27758;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83012154
	if (!ctx.cr6.eq) goto loc_83012154;
	// lbz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83011f7c
	if (!ctx.cr6.eq) goto loc_83011F7C;
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8301240c
	if (ctx.cr6.eq) goto loc_8301240C;
	// b 0x83011f7c
	goto loc_83011F7C;
loc_83012154:
	// lis r11,28780
	ctx.r11.s64 = 1886126080;
	// ori r11,r11,30055
	ctx.r11.u64 = ctx.r11.u64 | 30055;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83012170
	if (!ctx.cr6.eq) goto loc_83012170;
	// bl 0x82b4d2a0
	ctx.lr = 0x83012168;
	sub_82B4D2A0(ctx, base);
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// b 0x8301240c
	goto loc_8301240C;
loc_83012170:
	// lis r11,29537
	ctx.r11.s64 = 1935736832;
	// ori r11,r11,25714
	ctx.r11.u64 = ctx.r11.u64 | 25714;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830121b8
	if (!ctx.cr6.eq) goto loc_830121B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
loc_83012188:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x830121a8
	if (ctx.cr6.eq) goto loc_830121A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83012188
	if (ctx.cr6.lt) goto loc_83012188;
	// b 0x83011f7c
	goto loc_83011F7C;
loc_830121A8:
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
loc_830121AC:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8301240c
	goto loc_8301240C;
loc_830121B8:
	// lis r11,29541
	ctx.r11.s64 = 1935998976;
	// ori r11,r11,25461
	ctx.r11.u64 = ctx.r11.u64 | 25461;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830121d0
	if (!ctx.cr6.eq) goto loc_830121D0;
	// lbz r3,394(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 394);
	// b 0x8301240c
	goto loc_8301240C;
loc_830121D0:
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8301223c
	if (!ctx.cr6.eq) goto loc_8301223C;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bgt cr6,0x83012220
	if (ctx.cr6.gt) goto loc_83012220;
	// lbz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 396);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83011c94
	if (ctx.cr0.eq) goto loc_83011C94;
	// lbz r11,394(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 394);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83011c94
	if (ctx.cr0.eq) goto loc_83011C94;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83012218
	if (ctx.cr6.eq) goto loc_83012218;
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x82d5c630
	ctx.lr = 0x83012218;
	sub_82D5C630(ctx, base);
loc_83012218:
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// b 0x830121ac
	goto loc_830121AC;
loc_83012220:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b735a0
	ctx.lr = 0x8301222C;
	sub_82B735A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83011c94
	if (!ctx.cr0.eq) goto loc_83011C94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8301240c
	goto loc_8301240C;
loc_8301223C:
	// lis r11,29548
	ctx.r11.s64 = 1936457728;
	// ori r11,r11,28267
	ctx.r11.u64 = ctx.r11.u64 | 28267;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83012254
	if (!ctx.cr6.eq) goto loc_83012254;
	// lbz r3,392(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 392);
	// b 0x8301240c
	goto loc_8301240C;
loc_83012254:
	// lis r11,29811
	ctx.r11.s64 = 1953693696;
	// ori r11,r11,29302
	ctx.r11.u64 = ctx.r11.u64 | 29302;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830123fc
	if (ctx.cr6.eq) goto loc_830123FC;
	// lis r11,30828
	ctx.r11.s64 = 2020343808;
	// ori r11,r11,29552
	ctx.r11.u64 = ctx.r11.u64 | 29552;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830123fc
	if (ctx.cr6.eq) goto loc_830123FC;
	// lis r11,29817
	ctx.r11.s64 = 1954086912;
	// ori r11,r11,28773
	ctx.r11.u64 = ctx.r11.u64 | 28773;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830122ac
	if (!ctx.cr6.eq) goto loc_830122AC;
	// lbz r11,395(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 395);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8301240c
	if (!ctx.cr6.eq) goto loc_8301240C;
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// li r3,4
	ctx.r3.s64 = 4;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8301240c
	if (ctx.cr0.eq) goto loc_8301240C;
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x8301240c
	goto loc_8301240C;
loc_830122AC:
	// lis r11,30817
	ctx.r11.s64 = 2019622912;
	// ori r11,r11,25700
	ctx.r11.u64 = ctx.r11.u64 | 25700;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830122e0
	if (!ctx.cr6.eq) goto loc_830122E0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83011c94
	if (ctx.cr6.eq) goto loc_83011C94;
	// cmplwi cr6,r27,36
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 36, ctx.xer);
	// blt cr6,0x83011c94
	if (ctx.cr6.lt) goto loc_83011C94;
	// addi r4,r30,268
	ctx.r4.s64 = ctx.r30.s64 + 268;
	// li r5,36
	ctx.r5.s64 = 36;
loc_830122D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d5c630
	ctx.lr = 0x830122DC;
	sub_82D5C630(ctx, base);
	// b 0x83011f7c
	goto loc_83011F7C;
loc_830122E0:
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x83012344
	if (!ctx.cr6.eq) goto loc_83012344;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x83011c94
	if (ctx.cr6.eq) goto loc_83011C94;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83011c94
	if (ctx.cr6.eq) goto loc_83011C94;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x83011c94
	if (!ctx.cr6.eq) goto loc_83011C94;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// bne cr6,0x83011c94
	if (!ctx.cr6.eq) goto loc_83011C94;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,2(r28)
	PPC_STORE_U8(ctx.r28.u32 + 2, ctx.r10.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,3(r28)
	PPC_STORE_U8(ctx.r28.u32 + 3, ctx.r11.u8);
	// b 0x8301240c
	goto loc_8301240C;
loc_83012344:
	// lis r11,30827
	ctx.r11.s64 = 2020278272;
	// ori r11,r11,25977
	ctx.r11.u64 = ctx.r11.u64 | 25977;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301237c
	if (!ctx.cr6.eq) goto loc_8301237C;
	// lbz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830123e0
	if (!ctx.cr6.eq) goto loc_830123E0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83011c94
	if (ctx.cr6.eq) goto loc_83011C94;
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x83011c94
	if (ctx.cr6.lt) goto loc_83011C94;
	// addi r4,r30,312
	ctx.r4.s64 = ctx.r30.s64 + 312;
	// li r5,16
	ctx.r5.s64 = 16;
	// b 0x830122d4
	goto loc_830122D4;
loc_8301237C:
	// lis r11,30827
	ctx.r11.s64 = 2020278272;
	// ori r11,r11,26980
	ctx.r11.u64 = ctx.r11.u64 | 26980;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830123b4
	if (!ctx.cr6.eq) goto loc_830123B4;
	// lbz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830123e0
	if (!ctx.cr6.eq) goto loc_830123E0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83011c94
	if (ctx.cr6.eq) goto loc_83011C94;
	// cmplwi cr6,r27,8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 8, ctx.xer);
	// blt cr6,0x83011c94
	if (ctx.cr6.lt) goto loc_83011C94;
	// addi r4,r30,304
	ctx.r4.s64 = ctx.r30.s64 + 304;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x830122d4
	goto loc_830122D4;
loc_830123B4:
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x830123e0
	if (!ctx.cr6.eq) goto loc_830123E0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83011c94
	if (ctx.cr6.eq) goto loc_83011C94;
	// cmplwi cr6,r27,8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 8, ctx.xer);
	// blt cr6,0x83011c94
	if (ctx.cr6.lt) goto loc_83011C94;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,8
	ctx.r5.s64 = 8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// b 0x830122d4
	goto loc_830122D4;
loc_830123E0:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83013920
	ctx.lr = 0x830123F8;
	sub_83013920(ctx, base);
	// b 0x8301240c
	goto loc_8301240C;
loc_830123FC:
	// lis r3,17729
	ctx.r3.s64 = 1161887744;
	// ori r3,r3,2053
	ctx.r3.u64 = ctx.r3.u64 | 2053;
	// b 0x8301240c
	goto loc_8301240C;
loc_83012408:
	// lwz r3,336(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
loc_8301240C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012418"))) PPC_WEAK_FUNC(sub_83012418);
PPC_FUNC_IMPL(__imp__sub_83012418) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a3ad50
	sub_82A3AD50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012420"))) PPC_WEAK_FUNC(sub_83012420);
PPC_FUNC_IMPL(__imp__sub_83012420) {
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
	// lis r31,-31979
	ctx.r31.s64 = -2095775744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-17544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83012450
	if (!ctx.cr6.eq) goto loc_83012450;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830124a8
	goto loc_830124A8;
loc_83012450:
	// lwz r3,260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// bl 0x82a3a2c0
	ctx.lr = 0x83012458;
	sub_82A3A2C0(ctx, base);
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// lwz r4,-17544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17544);
	// addi r3,r11,4920
	ctx.r3.s64 = ctx.r11.s64 + 4920;
	// bl 0x83012698
	ctx.lr = 0x83012468;
	sub_83012698(ctx, base);
	// bl 0x83012758
	ctx.lr = 0x8301246C;
	sub_83012758(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83012488
	if (!ctx.cr0.eq) goto loc_83012488;
	// bl 0x83011a90
	ctx.lr = 0x83012478;
	sub_83011A90(ctx, base);
	// bl 0x82b73530
	ctx.lr = 0x8301247C;
	sub_82B73530(ctx, base);
	// bl 0x82b4d108
	ctx.lr = 0x83012480;
	sub_82B4D108(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830146e8
	ctx.lr = 0x83012488;
	sub_830146E8(ctx, base);
loc_83012488:
	// lwz r3,-17544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17544);
	// lis r4,28259
	ctx.r4.s64 = 1851981824;
	// ori r4,r4,28526
	ctx.r4.u64 = ctx.r4.u64 | 28526;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822138a8
	ctx.lr = 0x8301249C;
	sub_822138A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-17544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17544, ctx.r11.u32);
loc_830124A8:
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

__attribute__((alias("__imp__sub_830124C0"))) PPC_WEAK_FUNC(sub_830124C0);
PPC_FUNC_IMPL(__imp__sub_830124C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x830124C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-17536
	ctx.r30.s64 = ctx.r11.s64 + -17536;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_830124DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830124f8
	if (ctx.cr0.eq) goto loc_830124F8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830124F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830124F8:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,256
	ctx.r11.s64 = ctx.r30.s64 + 256;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x830124dc
	if (ctx.cr6.lt) goto loc_830124DC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012510"))) PPC_WEAK_FUNC(sub_83012510);
PPC_FUNC_IMPL(__imp__sub_83012510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83012518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r31,r11,-17280
	ctx.r31.s64 = ctx.r11.s64 + -17280;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83012610
	if (!ctx.cr0.eq) goto loc_83012610;
	// lis r3,28001
	ctx.r3.s64 = 1835073536;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,25464
	ctx.r3.u64 = ctx.r3.u64 | 25464;
	// bl 0x83011c48
	ctx.lr = 0x83012548;
	sub_83011C48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x83012610
	if (!ctx.cr0.gt) goto loc_83012610;
	// li r4,36
	ctx.r4.s64 = 36;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// clrlwi r3,r10,28
	ctx.r3.u64 = ctx.r10.u32 & 0xF;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r11,r11,18440
	ctx.r11.s64 = ctx.r11.s64 + 18440;
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r30,r9,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// lbz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r4,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r4.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// lbz r5,5(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r29,r8,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// stb r4,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r4.u8);
	// rlwinm r4,r10,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lbzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r4,r7,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r3,r6,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// stb r10,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r10.u8);
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// stb r10,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r10.u8);
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r6,r5,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// stb r10,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r10.u8);
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// clrlwi r8,r5,28
	ctx.r8.u64 = ctx.r5.u32 & 0xF;
	// stb r10,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r10.u8);
	// lbzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// stb r10,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r10.u8);
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r10,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r10.u8);
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r10,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r10.u8);
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r10,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r10.u8);
	// lbzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stb r10,31(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31, ctx.r10.u8);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
loc_83012610:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012620"))) PPC_WEAK_FUNC(sub_83012620);
PPC_FUNC_IMPL(__imp__sub_83012620) {
	PPC_FUNC_PROLOGUE();
	// b 0x83010640
	sub_83010640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012628"))) PPC_WEAK_FUNC(sub_83012628);
PPC_FUNC_IMPL(__imp__sub_83012628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r10,r11,-17536
	ctx.r10.s64 = ctx.r11.s64 + -17536;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8301263C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83012654
	if (!ctx.cr6.eq) goto loc_83012654;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83012678
	if (ctx.cr6.eq) goto loc_83012678;
loc_83012654:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83012680
	if (ctx.cr6.eq) goto loc_83012680;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r10,256
	ctx.r7.s64 = ctx.r10.s64 + 256;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8301263c
	if (ctx.cr6.lt) goto loc_8301263C;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_83012678:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83012680:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012698"))) PPC_WEAK_FUNC(sub_83012698);
PPC_FUNC_IMPL(__imp__sub_83012698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-17536
	ctx.r11.s64 = ctx.r11.s64 + -17536;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_830126AC:
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x830126c4
	if (!ctx.cr6.eq) goto loc_830126C4;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x830126e0
	if (ctx.cr6.eq) goto loc_830126E0;
loc_830126C4:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r7,r11,260
	ctx.r7.s64 = ctx.r11.s64 + 260;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x830126ac
	if (ctx.cr6.lt) goto loc_830126AC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_830126E0:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830126F8"))) PPC_WEAK_FUNC(sub_830126F8);
PPC_FUNC_IMPL(__imp__sub_830126F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,28528
	ctx.r3.s64 = 1869611008;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,25966
	ctx.r3.u64 = ctx.r3.u64 | 25966;
	// bl 0x83011c48
	ctx.lr = 0x8301271C;
	sub_83011C48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83012744
	if (ctx.cr0.eq) goto loc_83012744;
	// bl 0x83010640
	ctx.lr = 0x83012728;
	sub_83010640(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r10,-17264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17264);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83012744
	if (ctx.cr6.lt) goto loc_83012744;
	// addi r10,r3,5
	ctx.r10.s64 = ctx.r3.s64 + 5;
	// stw r10,-17264(r11)
	PPC_STORE_U32(ctx.r11.u32 + -17264, ctx.r10.u32);
	// bl 0x830124c0
	ctx.lr = 0x83012744;
	sub_830124C0(ctx, base);
loc_83012744:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012758"))) PPC_WEAK_FUNC(sub_83012758);
PPC_FUNC_IMPL(__imp__sub_83012758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-17536
	ctx.r10.s64 = ctx.r11.s64 + -17536;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83012768:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8301277c
	if (ctx.cr6.eq) goto loc_8301277C;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8301277C:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r10,256
	ctx.r8.s64 = ctx.r10.s64 + 256;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x83012768
	if (ctx.cr6.lt) goto loc_83012768;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r11,272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012798"))) PPC_WEAK_FUNC(sub_83012798);
PPC_FUNC_IMPL(__imp__sub_83012798) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_830127A0:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830127a0
	if (!ctx.cr6.eq) goto loc_830127A0;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830127C4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x830127c4
	if (!ctx.cr6.eq) goto loc_830127C4;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// b 0x83012804
	goto loc_83012804;
loc_830127EC:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83012814
	if (ctx.cr6.eq) goto loc_83012814;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83012814
	if (!ctx.cr6.eq) goto loc_83012814;
loc_83012804:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x830127ec
	if (!ctx.cr6.eq) goto loc_830127EC;
loc_83012814:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,42
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 42, ctx.xer);
	// bne cr6,0x83012828
	if (!ctx.cr6.eq) goto loc_83012828;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_83012828:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8301284c
	if (ctx.cr0.eq) goto loc_8301284C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x83012828
	if (ctx.cr6.eq) goto loc_83012828;
loc_8301284C:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012858"))) PPC_WEAK_FUNC(sub_83012858);
PPC_FUNC_IMPL(__imp__sub_83012858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r3,520
	ctx.r4.s64 = ctx.r3.s64 + 520;
	// b 0x83012884
	goto loc_83012884;
loc_83012870:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x83012798
	ctx.lr = 0x83012878;
	sub_83012798(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83012890
	if (!ctx.cr0.eq) goto loc_83012890;
	// addi r4,r4,104
	ctx.r4.s64 = ctx.r4.s64 + 104;
loc_83012884:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83012870
	if (!ctx.cr6.eq) goto loc_83012870;
loc_83012890:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830128a0
	if (!ctx.cr6.eq) goto loc_830128A0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_830128A0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830128B8"))) PPC_WEAK_FUNC(sub_830128B8);
PPC_FUNC_IMPL(__imp__sub_830128B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x830128C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// or r26,r8,r7
	ctx.r26.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r29,-17244(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// or r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// or r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x83014a30
	ctx.lr = 0x83012920;
	sub_83014A30(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83012858
	ctx.lr = 0x8301292C;
	sub_83012858(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301297c
	if (ctx.cr0.eq) goto loc_8301297C;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8301297c
	if (ctx.cr0.eq) goto loc_8301297C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x8301297c
	goto loc_8301297C;
loc_83012948:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83012978
	if (!ctx.cr6.eq) goto loc_83012978;
	// lhz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8301298c
	if (ctx.cr0.eq) goto loc_8301298C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8301298c
	if (ctx.cr6.eq) goto loc_8301298C;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8301298c
	if (ctx.cr6.eq) goto loc_8301298C;
loc_83012978:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
loc_8301297C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83012948
	if (!ctx.cr6.eq) goto loc_83012948;
	// b 0x830129e4
	goto loc_830129E4;
loc_8301298C:
	// lhz r29,14(r28)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x8301299c
	if (!ctx.cr0.eq) goto loc_8301299C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8301299C:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5c630
	ctx.lr = 0x830129AC;
	sub_82D5C630(ctx, base);
	// rlwinm r10,r29,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stb r29,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r29.u8);
	// stb r10,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r10.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,7(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7, ctx.r10.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r10.u8);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
loc_830129E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830129F0"))) PPC_WEAK_FUNC(sub_830129F0);
PPC_FUNC_IMPL(__imp__sub_830129F0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r4,10035
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10035, ctx.xer);
	// beq cr6,0x83012a60
	if (ctx.cr6.eq) goto loc_83012A60;
	// cmpwi cr6,r4,10054
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10054, ctx.xer);
	// beq cr6,0x83012a60
	if (ctx.cr6.eq) goto loc_83012A60;
	// cmpwi cr6,r4,997
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 997, ctx.xer);
	// beq cr6,0x83012a60
	if (ctx.cr6.eq) goto loc_83012A60;
	// cmpwi cr6,r4,10051
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10051, ctx.xer);
	// beq cr6,0x83012a58
	if (ctx.cr6.eq) goto loc_83012A58;
	// cmpwi cr6,r4,10065
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10065, ctx.xer);
	// beq cr6,0x83012a58
	if (ctx.cr6.eq) goto loc_83012A58;
	// cmpwi cr6,r4,10057
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10057, ctx.xer);
	// bne cr6,0x83012a30
	if (!ctx.cr6.eq) goto loc_83012A30;
	// li r3,-2
	ctx.r3.s64 = -2;
	// blr 
	return;
loc_83012A30:
	// cmpwi cr6,r4,10061
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10061, ctx.xer);
	// bne cr6,0x83012a40
	if (!ctx.cr6.eq) goto loc_83012A40;
	// li r3,-6
	ctx.r3.s64 = -6;
	// blr 
	return;
loc_83012A40:
	// cmpwi cr6,r4,10022
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10022, ctx.xer);
	// bne cr6,0x83012a50
	if (!ctx.cr6.eq) goto loc_83012A50;
	// li r3,-11
	ctx.r3.s64 = -11;
	// blr 
	return;
loc_83012A50:
	// li r3,-7
	ctx.r3.s64 = -7;
	// blr 
	return;
loc_83012A58:
	// li r3,-5
	ctx.r3.s64 = -5;
	// blr 
	return;
loc_83012A60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012A68"))) PPC_WEAK_FUNC(sub_83012A68);
PPC_FUNC_IMPL(__imp__sub_83012A68) {
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
	// bl 0x82b4d010
	ctx.lr = 0x83012A80;
	sub_82B4D010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830129f0
	ctx.lr = 0x83012A8C;
	sub_830129F0(ctx, base);
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

__attribute__((alias("__imp__sub_83012AA0"))) PPC_WEAK_FUNC(sub_83012AA0);
PPC_FUNC_IMPL(__imp__sub_83012AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x83012AA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r28,-17244(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x83012af8
	if (!ctx.cr6.eq) goto loc_83012AF8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b4cdc8
	ctx.lr = 0x83012AE4;
	sub_82B4CDC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x83012af8
	if (!ctx.cr6.eq) goto loc_83012AF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83012bc0
	goto loc_83012BC0;
loc_83012AF8:
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// lwz r5,3916(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3916);
	// li r3,1444
	ctx.r3.s64 = 1444;
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// bl 0x82217ec8
	ctx.lr = 0x83012B0C;
	sub_82217EC8(ctx, base);
	// li r5,1444
	ctx.r5.s64 = 1444;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x83012B1C;
	sub_82D5CB60(ctx, base);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b4ce00
	ctx.lr = 0x83012B34;
	sub_82B4CE00(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x83012b60
	if (!ctx.cr6.eq) goto loc_83012B60;
	// cmpwi cr6,r27,254
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 254, ctx.xer);
	// beq cr6,0x83012b60
	if (ctx.cr6.eq) goto loc_83012B60;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b4ce18
	ctx.lr = 0x83012B60;
	sub_82B4CE18(ctx, base);
loc_83012B60:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82b4d018
	ctx.lr = 0x83012B88;
	sub_82B4D018(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r4,r11,-12748
	ctx.r4.s64 = ctx.r11.s64 + -12748;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bl 0x83010650
	ctx.lr = 0x83012BA0;
	sub_83010650(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83010748
	ctx.lr = 0x83012BA8;
	sub_83010748(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// bl 0x830107f8
	ctx.lr = 0x83012BBC;
	sub_830107F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83012BC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012BC8"))) PPC_WEAK_FUNC(sub_83012BC8);
PPC_FUNC_IMPL(__imp__sub_83012BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x83012BD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r30,-17244(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x83010748
	ctx.lr = 0x83012BF4;
	sub_83010748(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x83012c14
	goto loc_83012C14;
loc_83012C00:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83012c20
	if (ctx.cr6.eq) goto loc_83012C20;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83012C14:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83012c00
	if (!ctx.cr6.eq) goto loc_83012C00;
	// b 0x83012c2c
	goto loc_83012C2C;
loc_83012C20:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83012C2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830107f8
	ctx.lr = 0x83012C34;
	sub_830107F8(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83012c44
	if (!ctx.cr0.eq) goto loc_83012C44;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83012cd8
	goto loc_83012CD8;
loc_83012C44:
	// bl 0x8301f3d0
	ctx.lr = 0x83012C48;
	sub_8301F3D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83010748
	ctx.lr = 0x83012C50;
	sub_83010748(ctx, base);
	// lwz r3,3944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3944);
	// bl 0x82b4d028
	ctx.lr = 0x83012C58;
	sub_82B4D028(ctx, base);
	// addi r29,r30,3948
	ctx.r29.s64 = ctx.r30.s64 + 3948;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83010748
	ctx.lr = 0x83012C64;
	sub_83010748(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x83010680
	ctx.lr = 0x83012C6C;
	sub_83010680(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82b4d020
	ctx.lr = 0x83012C74;
	sub_82B4D020(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// bl 0x830107f8
	ctx.lr = 0x83012C80;
	sub_830107F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830107f8
	ctx.lr = 0x83012C88;
	sub_830107F8(ctx, base);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x83012cac
	if (!ctx.cr6.eq) goto loc_83012CAC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83012cac
	if (ctx.cr6.eq) goto loc_83012CAC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82b4cdf0
	ctx.lr = 0x83012CA4;
	sub_82B4CDF0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82b4cde0
	ctx.lr = 0x83012CAC;
	sub_82B4CDE0(ctx, base);
loc_83012CAC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r27,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r27.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x83010748
	ctx.lr = 0x83012CC0;
	sub_83010748(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x830107f8
	ctx.lr = 0x83012CD4;
	sub_830107F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83012CD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012CE0"))) PPC_WEAK_FUNC(sub_83012CE0);
PPC_FUNC_IMPL(__imp__sub_83012CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83012CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83010640
	ctx.lr = 0x83012CF4;
	sub_83010640(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83010748
	ctx.lr = 0x83012D00;
	sub_83010748(ctx, base);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x83012d64
	goto loc_83012D64;
loc_83012D08:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83012d60
	if (ctx.cr0.eq) goto loc_83012D60;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83012d60
	if (ctx.cr0.eq) goto loc_83012D60;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83012d60
	if (ctx.cr6.eq) goto loc_83012D60;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83012d60
	if (!ctx.cr6.gt) goto loc_83012D60;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83012D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x83010640
	ctx.lr = 0x83012D58;
	sub_83010640(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_83012D60:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83012D64:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x83012d08
	if (!ctx.cr0.eq) goto loc_83012D08;
	// b 0x83012d88
	goto loc_83012D88;
loc_83012D70:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// lwz r5,3916(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3916);
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x822138a8
	ctx.lr = 0x83012D88;
	sub_822138A8(ctx, base);
loc_83012D88:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83012d70
	if (!ctx.cr0.eq) goto loc_83012D70;
	// bl 0x830107f8
	ctx.lr = 0x83012D98;
	sub_830107F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012DA0"))) PPC_WEAK_FUNC(sub_83012DA0);
PPC_FUNC_IMPL(__imp__sub_83012DA0) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83012de4
	if (ctx.cr6.eq) goto loc_83012DE4;
	// bl 0x83010640
	ctx.lr = 0x83012DC4;
	sub_83010640(ctx, base);
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// stb r3,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r3.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r10.u8);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,167(r31)
	PPC_STORE_U8(ctx.r31.u32 + 167, ctx.r11.u8);
	// stb r10,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r10.u8);
loc_83012DE4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x83012e2c
	if (ctx.cr6.eq) goto loc_83012E2C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83012e2c
	if (ctx.cr0.eq) goto loc_83012E2C;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83012e2c
	if (ctx.cr0.eq) goto loc_83012E2C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83012E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x83010640
	ctx.lr = 0x83012E28;
	sub_83010640(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
loc_83012E2C:
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

__attribute__((alias("__imp__sub_83012E40"))) PPC_WEAK_FUNC(sub_83012E40);
PPC_FUNC_IMPL(__imp__sub_83012E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83012E48;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 + 176;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83012f24
	if (!ctx.cr6.eq) goto loc_83012F24;
	// lbz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x83012f24
	if (ctx.cr6.eq) goto loc_83012F24;
	// lbz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x83012f24
	if (ctx.cr6.eq) goto loc_83012F24;
	// addi r9,r31,180
	ctx.r9.s64 = ctx.r31.s64 + 180;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r31,152
	ctx.r7.s64 = ctx.r31.s64 + 152;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r9,1264
	ctx.r9.s64 = 1264;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bne cr6,0x83012ed4
	if (!ctx.cr6.eq) goto loc_83012ED4;
	// addi r9,r31,148
	ctx.r9.s64 = ctx.r31.s64 + 148;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r28,16
	ctx.r28.s64 = 16;
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
	// addi r8,r31,158
	ctx.r8.s64 = ctx.r31.s64 + 158;
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
	// bl 0x82b4cf80
	ctx.lr = 0x83012ED0;
	sub_82B4CF80(ctx, base);
	// b 0x83012ee0
	goto loc_83012EE0;
loc_83012ED4:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r31,84
	ctx.r8.s64 = ctx.r31.s64 + 84;
	// bl 0x82b4cf38
	ctx.lr = 0x83012EE0;
	sub_82B4CF38(ctx, base);
loc_83012EE0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x83012f08
	if (ctx.cr6.eq) goto loc_83012F08;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// bl 0x82b4d010
	ctx.lr = 0x83012EF0;
	sub_82B4D010(ctx, base);
	// cmpwi cr6,r3,997
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 997, ctx.xer);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// bne cr6,0x83012f1c
	if (!ctx.cr6.eq) goto loc_83012F1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r11.u8);
	// b 0x83012f1c
	goto loc_83012F1C;
loc_83012F08:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x83012f1c
	if (!ctx.cr0.gt) goto loc_83012F1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012da0
	ctx.lr = 0x83012F1C;
	sub_83012DA0(ctx, base);
loc_83012F1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x83012f28
	goto loc_83012F28;
loc_83012F24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83012F28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83012F30"))) PPC_WEAK_FUNC(sub_83012F30);
PPC_FUNC_IMPL(__imp__sub_83012F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x83012F38;
	__savegprlr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,-17244(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3940(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3940, ctx.r11.u32);
	// bl 0x82d5cb60
	ctx.lr = 0x83012F5C;
	sub_82D5CB60(ctx, base);
	// lwz r11,3936(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3936);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830130fc
	if (ctx.cr6.eq) goto loc_830130FC;
	// addi r25,r27,3948
	ctx.r25.s64 = ctx.r27.s64 + 3948;
loc_83012F70:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83010748
	ctx.lr = 0x83012F78;
	sub_83010748(ctx, base);
	// lwz r11,3944(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3944);
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x83013040
	if (ctx.cr0.eq) goto loc_83013040;
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
loc_83012F94:
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// bge cr6,0x83013040
	if (!ctx.cr6.lt) goto loc_83013040;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83012fb0
	if (ctx.cr6.eq) goto loc_83012FB0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x83013034
	if (!ctx.cr6.eq) goto loc_83013034;
loc_83012FB0:
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83010748
	ctx.lr = 0x83012FBC;
	sub_83010748(ctx, base);
	// addi r5,r31,176
	ctx.r5.s64 = ctx.r31.s64 + 176;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8301302c
	if (ctx.cr6.gt) goto loc_8301302C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lbz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83013024
	if (!ctx.cr6.eq) goto loc_83013024;
	// addi r7,r31,152
	ctx.r7.s64 = ctx.r31.s64 + 152;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// bl 0x82b4cf00
	ctx.lr = 0x83012FFC;
	sub_82B4CF00(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83013014
	if (!ctx.cr6.eq) goto loc_83013014;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r26,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r26.u8);
	// bl 0x83012da0
	ctx.lr = 0x83013010;
	sub_83012DA0(ctx, base);
	// b 0x83013024
	goto loc_83013024;
loc_83013014:
	// bl 0x82b4d010
	ctx.lr = 0x83013018;
	sub_82B4D010(ctx, base);
	// cmpwi cr6,r3,996
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 996, ctx.xer);
	// beq cr6,0x83013024
	if (ctx.cr6.eq) goto loc_83013024;
	// stb r26,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r26.u8);
loc_83013024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012e40
	ctx.lr = 0x8301302C;
	sub_83012E40(ctx, base);
loc_8301302C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830107f8
	ctx.lr = 0x83013034;
	sub_830107F8(ctx, base);
loc_83013034:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x83012f94
	if (!ctx.cr0.eq) goto loc_83012F94;
loc_83013040:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83010748
	ctx.lr = 0x83013048;
	sub_83010748(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830107f8
	ctx.lr = 0x83013050;
	sub_830107F8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b4d038
	ctx.lr = 0x83013068;
	sub_82B4D038(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830107f8
	ctx.lr = 0x83013074;
	sub_830107F8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x830130f0
	if (ctx.cr6.lt) goto loc_830130F0;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x830130f0
	if (!ctx.cr6.lt) goto loc_830130F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83010748
	ctx.lr = 0x8301308C;
	sub_83010748(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830130c8
	if (ctx.cr0.eq) goto loc_830130C8;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
loc_830130A8:
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830130c4
	if (ctx.cr6.eq) goto loc_830130C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830130a8
	if (!ctx.cr0.eq) goto loc_830130A8;
	// b 0x830130c8
	goto loc_830130C8;
loc_830130C4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_830130C8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x830130d8
	if (ctx.cr6.eq) goto loc_830130D8;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830130e8
	if (!ctx.cr6.eq) goto loc_830130E8;
loc_830130D8:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b4d030
	ctx.lr = 0x830130E8;
	sub_82B4D030(ctx, base);
loc_830130E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830107f8
	ctx.lr = 0x830130F0;
	sub_830107F8(ctx, base);
loc_830130F0:
	// lwz r11,3936(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83012f70
	if (!ctx.cr6.eq) goto loc_83012F70;
loc_830130FC:
	// stw r26,3940(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3940, ctx.r26.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013108"))) PPC_WEAK_FUNC(sub_83013108);
PPC_FUNC_IMPL(__imp__sub_83013108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83013110;
	__savegprlr_28(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31979
	ctx.r29.s64 = -2095775744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,-17244(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17244);
	// bl 0x8301c188
	ctx.lr = 0x83013124;
	sub_8301C188(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83013238
	if (!ctx.cr6.eq) goto loc_83013238;
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// li r3,3996
	ctx.r3.s64 = 3996;
	// bl 0x82217ec8
	ctx.lr = 0x83013144;
	sub_82217EC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x83013238
	if (ctx.cr0.eq) goto loc_83013238;
	// li r5,3996
	ctx.r5.s64 = 3996;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x8301315C;
	sub_82D5CB60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,-17244(r29)
	PPC_STORE_U32(ctx.r29.u32 + -17244, ctx.r31.u32);
	// stw r30,3916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3916, ctx.r30.u32);
	// bl 0x83010840
	ctx.lr = 0x8301316C;
	sub_83010840(ctx, base);
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// bl 0x8301f338
	ctx.lr = 0x8301317C;
	sub_8301F338(ctx, base);
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d5cb60
	ctx.lr = 0x8301318C;
	sub_82D5CB60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x82b4cdb0
	ctx.lr = 0x83013198;
	sub_82B4CDB0(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,3920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3920, ctx.r11.u32);
	// bl 0x82a3a8b8
	ctx.lr = 0x830131C8;
	sub_82A3A8B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r3,r31,3948
	ctx.r3.s64 = ctx.r31.s64 + 3948;
	// addi r4,r11,-12736
	ctx.r4.s64 = ctx.r11.s64 + -12736;
	// stw r10,3944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3944, ctx.r10.u32);
	// bl 0x83010650
	ctx.lr = 0x830131E0;
	sub_83010650(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12080
	ctx.r5.s64 = ctx.r11.s64 + 12080;
	// stw r10,3936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3936, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a3ad58
	ctx.lr = 0x83013208;
	sub_82A3AD58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,3936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3936, ctx.r3.u32);
	// beq 0x83013228
	if (ctx.cr0.eq) goto loc_83013228;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,3936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3936);
	// bl 0x82a3aaf8
	ctx.lr = 0x83013220;
	sub_82A3AAF8(ctx, base);
	// lwz r3,3936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3936);
	// bl 0x82a3a2c0
	ctx.lr = 0x83013228;
	sub_82A3A2C0(ctx, base);
loc_83013228:
	// bl 0x8301f500
	ctx.lr = 0x8301322C;
	sub_8301F500(ctx, base);
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// stw r3,3928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3928, ctx.r3.u32);
	// stw r11,3932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3932, ctx.r11.u32);
loc_83013238:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013240"))) PPC_WEAK_FUNC(sub_83013240);
PPC_FUNC_IMPL(__imp__sub_83013240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x83013248;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r30,-17244(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b4cdc8
	ctx.lr = 0x8301326C;
	sub_82B4CDC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x83013280
	if (!ctx.cr6.eq) goto loc_83013280;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83013348
	goto loc_83013348;
loc_83013280:
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// lwz r5,3916(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3916);
	// li r3,1444
	ctx.r3.s64 = 1444;
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// bl 0x82217ec8
	ctx.lr = 0x83013294;
	sub_82217EC8(ctx, base);
	// li r5,1444
	ctx.r5.s64 = 1444;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x830132A4;
	sub_82D5CB60(ctx, base);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b4ce00
	ctx.lr = 0x830132BC;
	sub_82B4CE00(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x830132e8
	if (!ctx.cr6.eq) goto loc_830132E8;
	// cmpwi cr6,r27,254
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 254, ctx.xer);
	// beq cr6,0x830132e8
	if (ctx.cr6.eq) goto loc_830132E8;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b4ce18
	ctx.lr = 0x830132E8;
	sub_82B4CE18(ctx, base);
loc_830132E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82b4d018
	ctx.lr = 0x83013310;
	sub_82B4D018(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r4,r11,-12748
	ctx.r4.s64 = ctx.r11.s64 + -12748;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bl 0x83010650
	ctx.lr = 0x83013328;
	sub_83010650(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83010748
	ctx.lr = 0x83013330;
	sub_83010748(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x830107f8
	ctx.lr = 0x83013344;
	sub_830107F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83013348:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013350"))) PPC_WEAK_FUNC(sub_83013350);
PPC_FUNC_IMPL(__imp__sub_83013350) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83012bc8
	sub_83012BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013358"))) PPC_WEAK_FUNC(sub_83013358);
PPC_FUNC_IMPL(__imp__sub_83013358) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83012bc8
	sub_83012BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301336C"))) PPC_WEAK_FUNC(sub_8301336C);
PPC_FUNC_IMPL(__imp__sub_8301336C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013370"))) PPC_WEAK_FUNC(sub_83013370);
PPC_FUNC_IMPL(__imp__sub_83013370) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830133c8
	if (ctx.cr6.eq) goto loc_830133C8;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8301339c
	if (!ctx.cr6.eq) goto loc_8301339C;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x830133b8
	goto loc_830133B8;
loc_8301339C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x830133ac
	if (!ctx.cr6.eq) goto loc_830133AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x830133b8
	goto loc_830133B8;
loc_830133AC:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x830133b8
	if (!ctx.cr6.eq) goto loc_830133B8;
	// li r4,2
	ctx.r4.s64 = 2;
loc_830133B8:
	// lbz r10,23(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stb r10,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
	// bl 0x82b4cdf0
	ctx.lr = 0x830133C8;
	sub_82B4CDF0(ctx, base);
loc_830133C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830133E0"))) PPC_WEAK_FUNC(sub_830133E0);
PPC_FUNC_IMPL(__imp__sub_830133E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x830133E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r9,6(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,7(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,-17244(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83013460
	if (!ctx.cr0.eq) goto loc_83013460;
	// lwz r31,3924(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3924);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x83013460
	if (ctx.cr0.eq) goto loc_83013460;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82d5c630
	ctx.lr = 0x83013440;
	sub_82D5C630(ctx, base);
	// rlwinm r11,r31,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
loc_83013460:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830134ec
	if (!ctx.cr6.eq) goto loc_830134EC;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr. r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x830134ec
	if (ctx.cr0.eq) goto loc_830134EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r28,3848
	ctx.r11.s64 = ctx.r28.s64 + 3848;
loc_83013490:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830134ac
	if (ctx.cr6.eq) goto loc_830134AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x83013490
	if (ctx.cr6.lt) goto loc_83013490;
loc_830134AC:
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bge cr6,0x830134ec
	if (!ctx.cr6.lt) goto loc_830134EC;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830134d8
	if (ctx.cr6.eq) goto loc_830134D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82b4cdf0
	ctx.lr = 0x830134C8;
	sub_82B4CDF0(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82b4cde0
	ctx.lr = 0x830134D0;
	sub_82B4CDE0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_830134D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r31,60(r30)
	PPC_STORE_U16(ctx.r30.u32 + 60, ctx.r31.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r11.u8);
	// b 0x83013534
	goto loc_83013534;
loc_830134EC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82b4ce88
	ctx.lr = 0x830134F8;
	sub_82B4CE88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b4d010
	ctx.lr = 0x83013500;
	sub_82B4D010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830129f0
	ctx.lr = 0x8301350C;
	sub_830129F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x83013530
	if (!ctx.cr0.eq) goto loc_83013530;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83013528
	if (ctx.cr6.eq) goto loc_83013528;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x83013530
	if (!ctx.cr6.eq) goto loc_83013530;
loc_83013528:
	// lwz r3,3944(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3944);
	// bl 0x82b4d028
	ctx.lr = 0x83013530;
	sub_82B4D028(ctx, base);
loc_83013530:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83013534:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013540"))) PPC_WEAK_FUNC(sub_83013540);
PPC_FUNC_IMPL(__imp__sub_83013540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83013548;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,-17244(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17244);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x830133e0
	ctx.lr = 0x8301358C;
	sub_830133E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8301359c
	if (!ctx.cr0.lt) goto loc_8301359C;
	// cmpwi cr6,r3,-11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -11, ctx.xer);
	// bne cr6,0x830135f4
	if (!ctx.cr6.eq) goto loc_830135F4;
loc_8301359C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830128b8
	ctx.lr = 0x830135A8;
	sub_830128B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82b4cea0
	ctx.lr = 0x830135B8;
	sub_82B4CEA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82b4d010
	ctx.lr = 0x830135C0;
	sub_82B4D010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830129f0
	ctx.lr = 0x830135CC;
	sub_830129F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x830135f0
	if (!ctx.cr0.eq) goto loc_830135F0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x830135e8
	if (ctx.cr6.eq) goto loc_830135E8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830135f0
	if (!ctx.cr6.eq) goto loc_830135F0;
loc_830135E8:
	// lwz r3,3944(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3944);
	// bl 0x82b4d028
	ctx.lr = 0x830135F0;
	sub_82B4D028(ctx, base);
loc_830135F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830135F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013600"))) PPC_WEAK_FUNC(sub_83013600);
PPC_FUNC_IMPL(__imp__sub_83013600) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82b4ceb8
	ctx.lr = 0x83013618;
	sub_82B4CEB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b4d010
	ctx.lr = 0x83013620;
	sub_82B4D010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830129f0
	ctx.lr = 0x8301362C;
	sub_830129F0(ctx, base);
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

__attribute__((alias("__imp__sub_83013640"))) PPC_WEAK_FUNC(sub_83013640);
PPC_FUNC_IMPL(__imp__sub_83013640) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83013670
	if (!ctx.cr6.eq) goto loc_83013670;
loc_83013668:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830136b4
	goto loc_830136B4;
loc_83013670:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83013684
	if (ctx.cr6.eq) goto loc_83013684;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x83013668
	if (ctx.cr6.lt) goto loc_83013668;
loc_83013684:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830136b0
	if (!ctx.cr6.eq) goto loc_830136B0;
	// bl 0x82b4cec8
	ctx.lr = 0x83013694;
	sub_82B4CEC8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830136b0
	if (ctx.cr6.eq) goto loc_830136B0;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83012aa0
	ctx.lr = 0x830136AC;
	sub_83012AA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830136B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830136B4:
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

__attribute__((alias("__imp__sub_830136D0"))) PPC_WEAK_FUNC(sub_830136D0);
PPC_FUNC_IMPL(__imp__sub_830136D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x830136D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,-17244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r10,3988(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3988);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x83013724
	if (ctx.cr0.eq) goto loc_83013724;
	// lwz r8,3992(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3992);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8301371C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x830137a4
	if (ctx.cr0.gt) goto loc_830137A4;
loc_83013724:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83013738
	if (!ctx.cr6.eq) goto loc_83013738;
	// li r3,-11
	ctx.r3.s64 = -11;
	// b 0x830137a4
	goto loc_830137A4;
loc_83013738:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8301374c
	if (!ctx.cr6.eq) goto loc_8301374C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830137a4
	goto loc_830137A4;
loc_8301374C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83013768
	if (!ctx.cr6.eq) goto loc_83013768;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b4cfd0
	ctx.lr = 0x83013764;
	sub_82B4CFD0(ctx, base);
	// b 0x83013790
	goto loc_83013790;
loc_83013768:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830128b8
	ctx.lr = 0x83013774;
	sub_830128B8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x82b4cfe8
	ctx.lr = 0x83013790;
	sub_82B4CFE8(ctx, base);
loc_83013790:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b4d010
	ctx.lr = 0x83013798;
	sub_82B4D010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830129f0
	ctx.lr = 0x830137A4;
	sub_830129F0(ctx, base);
loc_830137A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830137B0"))) PPC_WEAK_FUNC(sub_830137B0);
PPC_FUNC_IMPL(__imp__sub_830137B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x830137B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r23,-17244(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17244);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x83013864
	if (ctx.cr6.eq) goto loc_83013864;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x83013864
	if (ctx.cr6.eq) goto loc_83013864;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x83013800
	if (!ctx.cr6.eq) goto loc_83013800;
	// li r3,-11
	ctx.r3.s64 = -11;
	// b 0x83013914
	goto loc_83013914;
loc_83013800:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// beq cr6,0x83013850
	if (ctx.cr6.eq) goto loc_83013850;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82b4cf60
	ctx.lr = 0x83013820;
	sub_82B4CF60(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x83013858
	if (!ctx.cr0.gt) goto loc_83013858;
	// bl 0x83010640
	ctx.lr = 0x8301382C;
	sub_83010640(ctx, base);
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// stb r3,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r3.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r10.u8);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r11.u8);
	// stb r10,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r10.u8);
	// b 0x83013858
	goto loc_83013858;
loc_83013850:
	// bl 0x82b4cf20
	ctx.lr = 0x83013854;
	sub_82B4CF20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83013858:
	// bl 0x82b4d010
	ctx.lr = 0x8301385C;
	sub_82B4D010(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x830138f8
	goto loc_830138F8;
loc_83013864:
	// addi r24,r31,104
	ctx.r24.s64 = ctx.r31.s64 + 104;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83010748
	ctx.lr = 0x83013870;
	sub_83010748(ctx, base);
	// lwz r29,176(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x830138d4
	if (ctx.cr0.eq) goto loc_830138D4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x830138d4
	if (!ctx.cr6.gt) goto loc_830138D4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830138a8
	if (ctx.cr6.eq) goto loc_830138A8;
	// addi r4,r31,158
	ctx.r4.s64 = ctx.r31.s64 + 158;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5c630
	ctx.lr = 0x830138A0;
	sub_82D5C630(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_830138A8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x830138d0
	if (!ctx.cr6.gt) goto loc_830138D0;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x830138bc
	if (!ctx.cr6.gt) goto loc_830138BC;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_830138BC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d5c630
	ctx.lr = 0x830138CC;
	sub_82D5C630(ctx, base);
	// stw r25,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r25.u32);
loc_830138D0:
	// stw r25,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r25.u32);
loc_830138D4:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,997
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 997, ctx.xer);
	// beq cr6,0x830138ec
	if (ctx.cr6.eq) goto loc_830138EC;
	// stw r25,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r25.u32);
	// lwz r3,3944(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3944);
	// bl 0x82b4d028
	ctx.lr = 0x830138EC;
	sub_82B4D028(ctx, base);
loc_830138EC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r31,144(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x830107f8
	ctx.lr = 0x830138F8;
	sub_830107F8(ctx, base);
loc_830138F8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x83013908
	if (!ctx.cr6.eq) goto loc_83013908;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83013914
	goto loc_83013914;
loc_83013908:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830129f0
	ctx.lr = 0x83013914;
	sub_830129F0(ctx, base);
loc_83013914:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013920"))) PPC_WEAK_FUNC(sub_83013920);
PPC_FUNC_IMPL(__imp__sub_83013920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x83013928;
	__savegprlr_25(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r29,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r29.u32);
	// lwz r27,-17244(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83013964
	if (ctx.cr6.eq) goto loc_83013964;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x83013964;
	sub_82D5CB60(ctx, base);
loc_83013964:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lis r11,25193
	ctx.r11.s64 = 1651048448;
	// bne cr6,0x83013a80
	if (!ctx.cr6.eq) goto loc_83013A80;
	// ori r26,r11,28260
	ctx.r26.u64 = ctx.r11.u64 | 28260;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x830139ec
	if (!ctx.cr6.eq) goto loc_830139EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// bl 0x83010748
	ctx.lr = 0x83013988;
	sub_83010748(ctx, base);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x830139dc
	if (ctx.cr0.eq) goto loc_830139DC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83013998:
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83013920
	ctx.lr = 0x830139B0;
	sub_83013920(ctx, base);
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x830139d0
	if (!ctx.cr6.eq) goto loc_830139D0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_830139D0:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x83013998
	if (!ctx.cr0.eq) goto loc_83013998;
loc_830139DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830107f8
	ctx.lr = 0x830139E4;
	sub_830107F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x83013c60
	goto loc_83013C60;
loc_830139EC:
	// lis r11,28001
	ctx.r11.s64 = 1835073536;
	// ori r11,r11,30832
	ctx.r11.u64 = ctx.r11.u64 | 30832;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83013a04
	if (!ctx.cr6.eq) goto loc_83013A04;
	// li r3,1264
	ctx.r3.s64 = 1264;
	// b 0x83013c60
	goto loc_83013C60;
loc_83013A04:
	// lis r11,30829
	ctx.r11.s64 = 2020409344;
	// ori r11,r11,24944
	ctx.r11.u64 = ctx.r11.u64 | 24944;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83013a44
	if (!ctx.cr6.eq) goto loc_83013A44;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83013a78
	if (ctx.cr6.eq) goto loc_83013A78;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x83013a78
	if (!ctx.cr6.gt) goto loc_83013A78;
	// cmplwi cr6,r29,512
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 512, ctx.xer);
	// ble cr6,0x83013a30
	if (!ctx.cr6.gt) goto loc_83013A30;
	// li r29,512
	ctx.r29.s64 = 512;
loc_83013A30:
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
loc_83013A34:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5c630
	ctx.lr = 0x83013A40;
	sub_82D5C630(ctx, base);
	// b 0x83013c5c
	goto loc_83013C5C;
loc_83013A44:
	// lis r11,30830
	ctx.r11.s64 = 2020474880;
	// ori r11,r11,24941
	ctx.r11.u64 = ctx.r11.u64 | 24941;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83013a78
	if (!ctx.cr6.eq) goto loc_83013A78;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83013a78
	if (ctx.cr6.eq) goto loc_83013A78;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x83013a78
	if (!ctx.cr6.gt) goto loc_83013A78;
	// cmplwi cr6,r29,3328
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3328, ctx.xer);
	// ble cr6,0x83013a70
	if (!ctx.cr6.gt) goto loc_83013A70;
	// li r29,3328
	ctx.r29.s64 = 3328;
loc_83013A70:
	// addi r4,r27,520
	ctx.r4.s64 = ctx.r27.s64 + 520;
	// b 0x83013a34
	goto loc_83013A34;
loc_83013A78:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83013c60
	goto loc_83013C60;
loc_83013A80:
	// ori r11,r11,28260
	ctx.r11.u64 = ctx.r11.u64 | 28260;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83013b2c
	if (!ctx.cr6.eq) goto loc_83013B2C;
	// lbz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 22);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x83013ac8
	if (!ctx.cr6.eq) goto loc_83013AC8;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lbz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lhz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 60);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// b 0x83013ad8
	goto loc_83013AD8;
loc_83013AC8:
	// addi r5,r1,820
	ctx.r5.s64 = ctx.r1.s64 + 820;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b4ce58
	ctx.lr = 0x83013AD8;
	sub_82B4CE58(ctx, base);
loc_83013AD8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83013c5c
	if (!ctx.cr6.eq) goto loc_83013C5C;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83013c5c
	if (ctx.cr0.eq) goto loc_83013C5C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b4d290
	ctx.lr = 0x83013B00;
	sub_82B4D290(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x83014b68
	ctx.lr = 0x83013B08;
	sub_83014B68(ctx, base);
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// stb r3,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r3.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// b 0x83013c5c
	goto loc_83013C5C;
loc_83013B2C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83013b40
	if (!ctx.cr6.eq) goto loc_83013B40;
	// li r3,-7
	ctx.r3.s64 = -7;
	// b 0x83013c60
	goto loc_83013C60;
loc_83013B40:
	// lis r10,25455
	ctx.r10.s64 = 1668218880;
	// ori r10,r10,28270
	ctx.r10.u64 = ctx.r10.u64 | 28270;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x83013c4c
	if (ctx.cr6.eq) goto loc_83013C4C;
	// lis r10,28773
	ctx.r10.s64 = 1885667328;
	// ori r10,r10,25970
	ctx.r10.u64 = ctx.r10.u64 | 25970;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x83013c4c
	if (ctx.cr6.eq) goto loc_83013C4C;
	// lis r10,28786
	ctx.r10.s64 = 1886519296;
	// ori r10,r10,28532
	ctx.r10.u64 = ctx.r10.u64 | 28532;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83013b78
	if (!ctx.cr6.eq) goto loc_83013B78;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// b 0x83013c60
	goto loc_83013C60;
loc_83013B78:
	// lis r10,29556
	ctx.r10.s64 = 1936982016;
	// ori r10,r10,24948
	ctx.r10.u64 = ctx.r10.u64 | 24948;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83013a78
	if (!ctx.cr6.eq) goto loc_83013A78;
	// lbz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83013bfc
	if (!ctx.cr6.eq) goto loc_83013BFC;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x82b4cee0
	ctx.lr = 0x83013BD0;
	sub_82B4CEE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83013bfc
	if (ctx.cr0.eq) goto loc_83013BFC;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83013bec
	if (ctx.cr6.eq) goto loc_83013BEC;
	// stb r28,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r28.u8);
	// b 0x83013bfc
	goto loc_83013BFC;
loc_83013BEC:
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83013bfc
	if (ctx.cr6.eq) goto loc_83013BFC;
	// stb r31,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r31.u8);
loc_83013BFC:
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x83013c40
	if (!ctx.cr0.gt) goto loc_83013C40;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r5,r1,820
	ctx.r5.s64 = ctx.r1.s64 + 820;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r11.u32);
	// bl 0x82b4ce70
	ctx.lr = 0x83013C20;
	sub_82B4CE70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b4d010
	ctx.lr = 0x83013C28;
	sub_82B4D010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830129f0
	ctx.lr = 0x83013C34;
	sub_830129F0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x83013c40
	if (!ctx.cr6.eq) goto loc_83013C40;
	// stb r28,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r28.u8);
loc_83013C40:
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// b 0x83013c60
	goto loc_83013C60;
loc_83013C4C:
	// addi r5,r1,820
	ctx.r5.s64 = ctx.r1.s64 + 820;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82b4ce70
	ctx.lr = 0x83013C5C;
	sub_82B4CE70(ctx, base);
loc_83013C5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83013C60:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013C68"))) PPC_WEAK_FUNC(sub_83013C68);
PPC_FUNC_IMPL(__imp__sub_83013C68) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// stw r7,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,44(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,52(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013CB8"))) PPC_WEAK_FUNC(sub_83013CB8);
PPC_FUNC_IMPL(__imp__sub_83013CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83013CC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,27745
	ctx.r11.s64 = 1818296320;
	// stw r5,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,25714
	ctx.r10.u64 = ctx.r11.u64 | 25714;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// lwz r29,-17244(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// bne cr6,0x83013cf8
	if (!ctx.cr6.eq) goto loc_83013CF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,3924(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3924, ctx.r5.u32);
	// b 0x83014004
	goto loc_83014004;
loc_83013CF8:
	// lis r11,28001
	ctx.r11.s64 = 1835073536;
	// ori r11,r11,25714
	ctx.r11.u64 = ctx.r11.u64 | 25714;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83013d2c
	if (!ctx.cr6.eq) goto loc_83013D2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830128b8
	ctx.lr = 0x83013D14;
	sub_830128B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83013D20:
	// bl 0x82d5c630
	ctx.lr = 0x83013D24;
	sub_82D5C630(ctx, base);
loc_83013D24:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83014004
	goto loc_83014004;
loc_83013D2C:
	// lis r11,28260
	ctx.r11.s64 = 1852047360;
	// ori r11,r11,27769
	ctx.r11.u64 = ctx.r11.u64 | 27769;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83013d80
	if (!ctx.cr6.eq) goto loc_83013D80;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83014000
	if (ctx.cr6.eq) goto loc_83014000;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x83014000
	if (!ctx.cr6.eq) goto loc_83014000;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
loc_83013D58:
	// addi r6,r1,708
	ctx.r6.s64 = ctx.r1.s64 + 708;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x82b4ce18
	ctx.lr = 0x83013D68;
	sub_82B4CE18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b4d010
	ctx.lr = 0x83013D70;
	sub_82B4D010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830129f0
	ctx.lr = 0x83013D7C;
	sub_830129F0(ctx, base);
	// b 0x83014004
	goto loc_83014004;
loc_83013D80:
	// lis r11,28783
	ctx.r11.s64 = 1886322688;
	// ori r11,r11,27756
	ctx.r11.u64 = ctx.r11.u64 | 27756;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83013fc8
	if (!ctx.cr6.eq) goto loc_83013FC8;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// li r7,0
	ctx.r7.s64 = 0;
	// divw r10,r5,r11
	ctx.r10.s32 = ctx.r5.s32 / ctx.r11.s32;
	// divw r11,r5,r11
	ctx.r11.s32 = ctx.r5.s32 / ctx.r11.s32;
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// stw r7,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r11,r10,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x83013eb4
	if (ctx.cr6.eq) goto loc_83013EB4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83013ea4
	goto loc_83013EA4;
loc_83013DCC:
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// bge cr6,0x83013fac
	if (!ctx.cr6.lt) goto loc_83013FAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83013e08
	if (ctx.cr6.eq) goto loc_83013E08;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,372
	ctx.r10.s64 = ctx.r1.s64 + 372;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_83013DEC:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83013e08
	if (ctx.cr6.eq) goto loc_83013E08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83013dec
	if (ctx.cr6.lt) goto loc_83013DEC;
loc_83013E08:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83013e38
	if (!ctx.cr6.eq) goto loc_83013E38;
	// cmplwi cr6,r7,64
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 64, ctx.xer);
	// bge cr6,0x83013e38
	if (!ctx.cr6.lt) goto loc_83013E38;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,372
	ctx.r9.s64 = ctx.r1.s64 + 372;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
loc_83013E38:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83013e6c
	if (ctx.cr6.eq) goto loc_83013E6C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_83013E50:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83013e6c
	if (ctx.cr6.eq) goto loc_83013E6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83013e50
	if (ctx.cr6.lt) goto loc_83013E50;
loc_83013E6C:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x83013e9c
	if (!ctx.cr6.eq) goto loc_83013E9C;
	// cmplwi cr6,r8,64
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 64, ctx.xer);
	// bge cr6,0x83013e9c
	if (!ctx.cr6.lt) goto loc_83013E9C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
loc_83013E9C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_83013EA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83013dcc
	if (!ctx.cr6.eq) goto loc_83013DCC;
	// b 0x83013fac
	goto loc_83013FAC;
loc_83013EB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83010748
	ctx.lr = 0x83013EBC;
	sub_83010748(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83013fa4
	if (ctx.cr0.eq) goto loc_83013FA4;
	// lwz r6,368(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83013ED4:
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// bge cr6,0x83013fa4
	if (!ctx.cr6.lt) goto loc_83013FA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83013f0c
	if (ctx.cr6.eq) goto loc_83013F0C;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// addi r10,r1,372
	ctx.r10.s64 = ctx.r1.s64 + 372;
loc_83013EF0:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83013f0c
	if (ctx.cr6.eq) goto loc_83013F0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x83013ef0
	if (ctx.cr6.lt) goto loc_83013EF0;
loc_83013F0C:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x83013f38
	if (!ctx.cr6.eq) goto loc_83013F38;
	// cmplwi cr6,r6,64
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 64, ctx.xer);
	// bge cr6,0x83013f38
	if (!ctx.cr6.lt) goto loc_83013F38;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,372
	ctx.r8.s64 = ctx.r1.s64 + 372;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r6.u32);
loc_83013F38:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83013f68
	if (ctx.cr6.eq) goto loc_83013F68;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
loc_83013F4C:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83013f68
	if (ctx.cr6.eq) goto loc_83013F68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83013f4c
	if (ctx.cr6.lt) goto loc_83013F4C;
loc_83013F68:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83013f94
	if (!ctx.cr6.eq) goto loc_83013F94;
	// cmplwi cr6,r7,64
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 64, ctx.xer);
	// bge cr6,0x83013f94
	if (!ctx.cr6.lt) goto loc_83013F94;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
loc_83013F94:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x83013ed4
	if (!ctx.cr0.eq) goto loc_83013ED4;
loc_83013FA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830107f8
	ctx.lr = 0x83013FAC;
	sub_830107F8(ctx, base);
loc_83013FAC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b4cee0
	ctx.lr = 0x83013FC4;
	sub_82B4CEE0(ctx, base);
	// b 0x83014004
	goto loc_83014004;
loc_83013FC8:
	// lis r11,28789
	ctx.r11.s64 = 1886715904;
	// ori r11,r11,29544
	ctx.r11.u64 = ctx.r11.u64 | 29544;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83014090
	if (!ctx.cr6.eq) goto loc_83014090;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83014000
	if (ctx.cr6.eq) goto loc_83014000;
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83010748
	ctx.lr = 0x83013FEC;
	sub_83010748(ctx, base);
	// lwz r5,708(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// cmplwi cr6,r5,1264
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1264, ctx.xer);
	// ble cr6,0x8301400c
	if (!ctx.cr6.gt) goto loc_8301400C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830107f8
	ctx.lr = 0x83014000;
	sub_830107F8(ctx, base);
loc_83014000:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83014004:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
loc_8301400C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r5,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r5.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x82d5c630
	ctx.lr = 0x8301401C;
	sub_82D5C630(ctx, base);
	// addi r3,r31,158
	ctx.r3.s64 = ctx.r31.s64 + 158;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301402C;
	sub_82D5C630(ctx, base);
	// bl 0x83010640
	ctx.lr = 0x83014030;
	sub_83010640(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r10.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r10.u8);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,167(r31)
	PPC_STORE_U8(ctx.r31.u32 + 167, ctx.r11.u8);
	// stb r10,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r10.u8);
	// bl 0x830107f8
	ctx.lr = 0x83014060;
	sub_830107F8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83013d24
	if (ctx.cr0.eq) goto loc_83013D24;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83013d24
	if (ctx.cr0.eq) goto loc_83013D24;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8301408C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83013d24
	goto loc_83013D24;
loc_83014090:
	// lis r11,29281
	ctx.r11.s64 = 1918959616;
	// ori r11,r11,25714
	ctx.r11.u64 = ctx.r11.u64 | 25714;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830140b0
	if (!ctx.cr6.eq) goto loc_830140B0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// b 0x83013d58
	goto loc_83013D58;
loc_830140B0:
	// lis r11,29540
	ctx.r11.s64 = 1935933440;
	// ori r11,r11,25442
	ctx.r11.u64 = ctx.r11.u64 | 25442;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830140d0
	if (!ctx.cr6.eq) goto loc_830140D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,3988(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3988, ctx.r30.u32);
	// stw r28,3992(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3992, ctx.r28.u32);
	// b 0x83014004
	goto loc_83014004;
loc_830140D0:
	// lis r11,30305
	ctx.r11.s64 = 1986068480;
	// ori r11,r11,25700
	ctx.r11.u64 = ctx.r11.u64 | 25700;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83014124
	if (!ctx.cr6.eq) goto loc_83014124;
	// addi r10,r29,3848
	ctx.r10.s64 = ctx.r29.s64 + 3848;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x83014110
	if (ctx.cr0.eq) goto loc_83014110;
loc_830140F4:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830140f4
	if (!ctx.cr0.eq) goto loc_830140F4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x83014000
	if (!ctx.cr6.lt) goto loc_83014000;
loc_83014110:
	// addi r11,r11,1924
	ctx.r11.s64 = ctx.r11.s64 + 1924;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r11,r29
	PPC_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u16);
	// b 0x83014004
	goto loc_83014004;
loc_83014124:
	// lis r11,30308
	ctx.r11.s64 = 1986265088;
	// ori r11,r11,25964
	ctx.r11.u64 = ctx.r11.u64 | 25964;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301417c
	if (!ctx.cr6.eq) goto loc_8301417C;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r10,r29,3848
	ctx.r10.s64 = ctx.r29.s64 + 3848;
loc_83014140:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8301415c
	if (ctx.cr6.eq) goto loc_8301415C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x83014140
	if (ctx.cr6.lt) goto loc_83014140;
loc_8301415C:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x83014000
	if (!ctx.cr6.lt) goto loc_83014000;
	// addi r11,r11,1924
	ctx.r11.s64 = ctx.r11.s64 + 1924;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// sthx r10,r11,r29
	PPC_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u16);
	// b 0x83014004
	goto loc_83014004;
loc_8301417C:
	// lis r11,30820
	ctx.r11.s64 = 2019819520;
	// ori r11,r11,28275
	ctx.r11.u64 = ctx.r11.u64 | 28275;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83014198
	if (!ctx.cr6.eq) goto loc_83014198;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,3912(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3912, ctx.r5.u32);
	// b 0x83014004
	goto loc_83014004;
loc_83014198:
	// lis r11,30829
	ctx.r11.s64 = 2020409344;
	// ori r11,r11,24944
	ctx.r11.u64 = ctx.r11.u64 | 24944;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830141c4
	if (!ctx.cr6.eq) goto loc_830141C4;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r5,512
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 512, ctx.xer);
	// ble cr6,0x830141b8
	if (!ctx.cr6.gt) goto loc_830141B8;
	// li r5,512
	ctx.r5.s64 = 512;
loc_830141B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// b 0x83013d20
	goto loc_83013D20;
loc_830141C4:
	// lis r11,30830
	ctx.r11.s64 = 2020474880;
	// ori r11,r11,24941
	ctx.r11.u64 = ctx.r11.u64 | 24941;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83014000
	if (!ctx.cr6.eq) goto loc_83014000;
	// mulli r5,r5,104
	ctx.r5.s64 = ctx.r5.s64 * 104;
	// cmplwi cr6,r5,3328
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3328, ctx.xer);
	// ble cr6,0x830141e4
	if (!ctx.cr6.gt) goto loc_830141E4;
	// li r5,3328
	ctx.r5.s64 = 3328;
loc_830141E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,520
	ctx.r3.s64 = ctx.r29.s64 + 520;
	// b 0x83013d20
	goto loc_83013D20;
}

__attribute__((alias("__imp__sub_830141F0"))) PPC_WEAK_FUNC(sub_830141F0);
PPC_FUNC_IMPL(__imp__sub_830141F0) {
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
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r31,80(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83014288
	if (ctx.cr0.eq) goto loc_83014288;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a3a980
	ctx.lr = 0x83014220;
	sub_82A3A980(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83014288
	if (!ctx.cr0.eq) goto loc_83014288;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83014278
	if (!ctx.cr0.eq) goto loc_83014278;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83014288
	if (!ctx.cr6.gt) goto loc_83014288;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// lbz r8,11(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x83014288
	goto loc_83014288;
loc_83014278:
	// cmpwi cr6,r11,10036
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10036, ctx.xer);
	// beq cr6,0x83014288
	if (ctx.cr6.eq) goto loc_83014288;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83014288:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
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

__attribute__((alias("__imp__sub_830142A8"))) PPC_WEAK_FUNC(sub_830142A8);
PPC_FUNC_IMPL(__imp__sub_830142A8) {
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
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r30,-17244(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830142d8
	if (ctx.cr0.eq) goto loc_830142D8;
	// bl 0x82b4d1d0
	ctx.lr = 0x830142D8;
	sub_82B4D1D0(ctx, base);
loc_830142D8:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830142e8
	if (ctx.cr0.eq) goto loc_830142E8;
	// bl 0x82b4d020
	ctx.lr = 0x830142E8;
	sub_82B4D020(ctx, base);
loc_830142E8:
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// lwz r5,3916(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3916);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// bl 0x822138a8
	ctx.lr = 0x830142FC;
	sub_822138A8(ctx, base);
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

__attribute__((alias("__imp__sub_83014318"))) PPC_WEAK_FUNC(sub_83014318);
PPC_FUNC_IMPL(__imp__sub_83014318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83014320;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,-17244(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x83014344
	if (!ctx.cr6.eq) goto loc_83014344;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83014424
	goto loc_83014424;
loc_83014344:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,3928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3928);
	// bl 0x8301f5d8
	ctx.lr = 0x83014350;
	sub_8301F5D8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83014424
	if (!ctx.cr6.eq) goto loc_83014424;
	// lwz r11,3932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3932);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,3932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3932);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3932, ctx.r11.u32);
loc_83014378:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83014398
	if (ctx.cr6.eq) goto loc_83014398;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// blt cr6,0x83014378
	if (ctx.cr6.lt) goto loc_83014378;
	// b 0x83014424
	goto loc_83014424;
loc_83014398:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// addi r11,r31,616
	ctx.r11.s64 = ctx.r31.s64 + 616;
loc_830143A4:
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_830143AC:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r6,r6,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r6.s64;
	// beq 0x830143d0
	if (ctx.cr0.eq) goto loc_830143D0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x830143ac
	if (ctx.cr6.eq) goto loc_830143AC;
loc_830143D0:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x83014414
	if (!ctx.cr0.eq) goto loc_83014414;
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// beq cr6,0x83014424
	if (ctx.cr6.eq) goto loc_83014424;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r9,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r9.u16);
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// sth r9,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, ctx.r9.u16);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_83014414:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x830143a4
	if (ctx.cr6.lt) goto loc_830143A4;
loc_83014424:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83014430"))) PPC_WEAK_FUNC(sub_83014430);
PPC_FUNC_IMPL(__imp__sub_83014430) {
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
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,-17244(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// lwz r3,3928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3928);
	// bl 0x8301f580
	ctx.lr = 0x8301445C;
	sub_8301F580(ctx, base);
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// lwz r5,3916(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3916);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// bl 0x822138a8
	ctx.lr = 0x83014470;
	sub_822138A8(ctx, base);
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

__attribute__((alias("__imp__sub_83014488"))) PPC_WEAK_FUNC(sub_83014488);
PPC_FUNC_IMPL(__imp__sub_83014488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x83014490;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r30,-17244(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// bge cr6,0x830144b0
	if (!ctx.cr6.lt) goto loc_830144B0;
loc_830144A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830145fc
	goto loc_830145FC;
loc_830144B0:
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// lwz r5,3916(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3916);
	// li r3,92
	ctx.r3.s64 = 92;
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// bl 0x82217ec8
	ctx.lr = 0x830144C4;
	sub_82217EC8(ctx, base);
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x830144D4;
	sub_82D5CB60(ctx, base);
	// lis r10,-31999
	ctx.r10.s64 = -2097086464;
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// addi r10,r10,16880
	ctx.r10.s64 = ctx.r10.s64 + 16880;
	// addi r11,r11,17064
	ctx.r11.s64 = ctx.r11.s64 + 17064;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,3912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83014590
	if (ctx.cr6.eq) goto loc_83014590;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83012858
	ctx.lr = 0x83014504;
	sub_83012858(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301456c
	if (ctx.cr0.eq) goto loc_8301456C;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83014564
	if (!ctx.cr0.eq) goto loc_83014564;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8301b690
	ctx.lr = 0x83014528;
	sub_8301B690(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,3928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3928);
	// bl 0x8301f6d8
	ctx.lr = 0x83014534;
	sub_8301F6D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83014548
	if (ctx.cr0.eq) goto loc_83014548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83014430
	ctx.lr = 0x83014544;
	sub_83014430(ctx, base);
	// b 0x830144a8
	goto loc_830144A8;
loc_83014548:
	// lis r10,-31999
	ctx.r10.s64 = -2097086464;
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// addi r10,r10,17176
	ctx.r10.s64 = ctx.r10.s64 + 17176;
	// addi r11,r11,17456
	ctx.r11.s64 = ctx.r11.s64 + 17456;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x830145f8
	goto loc_830145F8;
loc_83014564:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83014584
	goto loc_83014584;
loc_8301456C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83014be8
	ctx.lr = 0x83014574;
	sub_83014BE8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83014584
	if (!ctx.cr0.eq) goto loc_83014584;
	// lwz r11,3912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3912);
loc_83014584:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x830145f8
	goto loc_830145F8;
loc_83014590:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83014be8
	ctx.lr = 0x83014598;
	sub_83014BE8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x83014564
	if (!ctx.cr0.eq) goto loc_83014564;
	// bl 0x82b4d018
	ctx.lr = 0x830145A4;
	sub_82B4D018(ctx, base);
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// bl 0x8301b690
	ctx.lr = 0x830145C8;
	sub_8301B690(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82b4d1b8
	ctx.lr = 0x830145D8;
	sub_82B4D1B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830145f8
	if (ctx.cr0.eq) goto loc_830145F8;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82b4d020
	ctx.lr = 0x830145E8;
	sub_82B4D020(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830145F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830145FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83014608"))) PPC_WEAK_FUNC(sub_83014608);
PPC_FUNC_IMPL(__imp__sub_83014608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x83014634
	if (ctx.cr6.eq) goto loc_83014634;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830146d0
	goto loc_830146D0;
loc_83014634:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x830146c4
	if (!ctx.cr6.eq) goto loc_830146C4;
	// bl 0x82d5c630
	ctx.lr = 0x8301464C;
	sub_82D5C630(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// bl 0x82b4d290
	ctx.lr = 0x83014668;
	sub_82B4D290(ctx, base);
	// rlwinm. r11,r3,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x60;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830146bc
	if (ctx.cr0.eq) goto loc_830146BC;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r9,r10,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r9,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// b 0x830146d0
	goto loc_830146D0;
loc_830146BC:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x830146d0
	goto loc_830146D0;
loc_830146C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d5cb60
	ctx.lr = 0x830146CC;
	sub_82D5CB60(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
loc_830146D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830146E8"))) PPC_WEAK_FUNC(sub_830146E8);
PPC_FUNC_IMPL(__imp__sub_830146E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x830146F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31979
	ctx.r30.s64 = -2095775744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,-17244(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17244);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830147ac
	if (ctx.cr6.eq) goto loc_830147AC;
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// bl 0x8301f368
	ctx.lr = 0x83014718;
	sub_8301F368(ctx, base);
	// bl 0x8301f3d0
	ctx.lr = 0x8301471C;
	sub_8301F3D0(ctx, base);
	// lwz r3,3928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3928);
	// bl 0x8301f570
	ctx.lr = 0x83014724;
	sub_8301F570(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,3944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3944);
	// stw r11,3936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3936, ctx.r11.u32);
	// bl 0x82b4d028
	ctx.lr = 0x83014734;
	sub_82B4D028(ctx, base);
	// b 0x83014740
	goto loc_83014740;
loc_83014738:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a3ad50
	ctx.lr = 0x83014740;
	sub_82A3AD50(ctx, base);
loc_83014740:
	// lwz r11,3940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x83014738
	if (ctx.cr6.gt) goto loc_83014738;
	// b 0x8301475c
	goto loc_8301475C;
loc_83014750:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83012bc8
	ctx.lr = 0x8301475C;
	sub_83012BC8(ctx, base);
loc_8301475C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83014750
	if (!ctx.cr6.eq) goto loc_83014750;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012ce0
	ctx.lr = 0x83014770;
	sub_83012CE0(ctx, base);
	// addi r3,r31,3948
	ctx.r3.s64 = ctx.r31.s64 + 3948;
	// bl 0x83010680
	ctx.lr = 0x83014778;
	sub_83010680(ctx, base);
	// lwz r3,3944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3944);
	// bl 0x82a3a2c0
	ctx.lr = 0x83014780;
	sub_82A3A2C0(ctx, base);
	// lis r4,25715
	ctx.r4.s64 = 1685258240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,3916(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3916);
	// ori r4,r4,28515
	ctx.r4.u64 = ctx.r4.u64 | 28515;
	// bl 0x822138a8
	ctx.lr = 0x83014794;
	sub_822138A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-17244(r30)
	PPC_STORE_U32(ctx.r30.u32 + -17244, ctx.r11.u32);
	// bl 0x83010950
	ctx.lr = 0x830147A0;
	sub_83010950(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x830147ac
	if (!ctx.cr6.eq) goto loc_830147AC;
	// bl 0x82b4cdc0
	ctx.lr = 0x830147AC;
	sub_82B4CDC0(ctx, base);
loc_830147AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830147B8"))) PPC_WEAK_FUNC(sub_830147B8);
PPC_FUNC_IMPL(__imp__sub_830147B8) {
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
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,-17244(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// bl 0x83010748
	ctx.lr = 0x830147E0;
	sub_83010748(ctx, base);
	// b 0x830147ec
	goto loc_830147EC;
loc_830147E4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x830147f8
	if (ctx.cr6.eq) goto loc_830147F8;
loc_830147EC:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x830147e4
	if (!ctx.cr0.eq) goto loc_830147E4;
loc_830147F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830107f8
	ctx.lr = 0x83014800;
	sub_830107F8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83014884
	if (!ctx.cr6.eq) goto loc_83014884;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4104
	ctx.r5.s64 = 4104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b4ce38
	ctx.lr = 0x83014828;
	sub_82B4CE38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83014884
	if (ctx.cr6.eq) goto loc_83014884;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83012aa0
	ctx.lr = 0x83014844;
	sub_83012AA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,25193
	ctx.r4.s64 = 1651048448;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28260
	ctx.r4.u64 = ctx.r4.u64 | 28260;
	// addi r6,r31,28
	ctx.r6.s64 = ctx.r31.s64 + 28;
	// bl 0x83013920
	ctx.lr = 0x83014860;
	sub_83013920(ctx, base);
	// lis r4,28773
	ctx.r4.s64 = 1885667328;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r31,44
	ctx.r6.s64 = ctx.r31.s64 + 44;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,25970
	ctx.r4.u64 = ctx.r4.u64 | 25970;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83013920
	ctx.lr = 0x8301487C;
	sub_83013920(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
loc_83014884:
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

__attribute__((alias("__imp__sub_830148A0"))) PPC_WEAK_FUNC(sub_830148A0);
PPC_FUNC_IMPL(__imp__sub_830148A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// li r10,2
	ctx.r10.s64 = 2;
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// li r11,79
	ctx.r11.s64 = 79;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// li r11,-88
	ctx.r11.s64 = -88;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// li r11,-64
	ctx.r11.s64 = -64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// bl 0x83014608
	ctx.lr = 0x8301490C;
	sub_83014608(ctx, base);
	// lbz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r10,101(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// lbz r9,102(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r3,103(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r9,r11,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r9,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014940"))) PPC_WEAK_FUNC(sub_83014940);
PPC_FUNC_IMPL(__imp__sub_83014940) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8301495c
	if (ctx.cr6.eq) goto loc_8301495C;
	// subf r3,r9,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r9.s64;
	// blr 
	return;
loc_8301495C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x83014968
	if (!ctx.cr6.eq) goto loc_83014968;
	// li r10,6
	ctx.r10.s64 = 6;
loc_83014968:
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// addi r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83014980:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83014980
	if (!ctx.cr6.eq) goto loc_83014980;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830149A8"))) PPC_WEAK_FUNC(sub_830149A8);
PPC_FUNC_IMPL(__imp__sub_830149A8) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_830149B4:
	// stbx r7,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x830149dc
	goto loc_830149DC;
loc_830149BC:
	// cmpwi cr6,r8,57
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 57, ctx.xer);
	// bgt cr6,0x830149ec
	if (ctx.cr6.gt) goto loc_830149EC;
	// lbzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// mulli r11,r6,10
	ctx.r11.s64 = ctx.r6.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
loc_830149DC:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,48
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 48, ctx.xer);
	// bge cr6,0x830149bc
	if (!ctx.cr6.lt) goto loc_830149BC;
loc_830149EC:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x83014a00
	if (!ctx.cr6.lt) goto loc_83014A00;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x83014a18
	if (!ctx.cr6.eq) goto loc_83014A18;
loc_83014A00:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x830149b4
	if (ctx.cr6.lt) goto loc_830149B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83014A18:
	// li r3,-1
	ctx.r3.s64 = -1;
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// stb r7,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// stb r7,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014A30"))) PPC_WEAK_FUNC(sub_83014A30);
PPC_FUNC_IMPL(__imp__sub_83014A30) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x83014a44
	if (ctx.cr6.gt) goto loc_83014A44;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83014A44:
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// bge cr6,0x83014a5c
	if (!ctx.cr6.lt) goto loc_83014A5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_83014A5C:
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r3,2
	ctx.r5.s64 = ctx.r3.s64 + 2;
	// li r7,100
	ctx.r7.s64 = 100;
	// li r8,10
	ctx.r8.s64 = 10;
loc_83014A6C:
	// lbzx r11,r5,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// ble cr6,0x83014ab0
	if (!ctx.cr6.gt) goto loc_83014AB0;
	// divw r9,r11,r7
	ctx.r9.s32 = ctx.r11.s32 / ctx.r7.s32;
	// divw r3,r11,r7
	ctx.r3.s32 = ctx.r11.s32 / ctx.r7.s32;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// mulli r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 * 100;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divw r9,r11,r8
	ctx.r9.s32 = ctx.r11.s32 / ctx.r8.s32;
	// divw r3,r11,r8
	ctx.r3.s32 = ctx.r11.s32 / ctx.r8.s32;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// mulli r3,r3,10
	ctx.r3.s64 = ctx.r3.s64 * 10;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_83014AB0:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x83014ad4
	if (!ctx.cr6.gt) goto loc_83014AD4;
	// divw r9,r11,r8
	ctx.r9.s32 = ctx.r11.s32 / ctx.r8.s32;
	// divw r3,r11,r8
	ctx.r3.s32 = ctx.r11.s32 / ctx.r8.s32;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// mulli r3,r3,10
	ctx.r3.s64 = ctx.r3.s64 * 10;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_83014AD4:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x83014af4
	if (!ctx.cr6.lt) goto loc_83014AF4;
	// li r11,46
	ctx.r11.s64 = 46;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_83014AF4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// blt cr6,0x83014a6c
	if (ctx.cr6.lt) goto loc_83014A6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014B10"))) PPC_WEAK_FUNC(sub_83014B10);
PPC_FUNC_IMPL(__imp__sub_83014B10) {
	PPC_FUNC_PROLOGUE();
	// sth r3,22(r1)
	PPC_STORE_U16(ctx.r1.u32 + 22, ctx.r3.u16);
	// lbz r11,22(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 22);
	// lbz r10,23(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 23);
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014B28"))) PPC_WEAK_FUNC(sub_83014B28);
PPC_FUNC_IMPL(__imp__sub_83014B28) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lbz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 20);
	// lbz r10,21(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 21);
	// lbz r9,22(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 22);
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r3,23(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 23);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r9,r11,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r9,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014B50"))) PPC_WEAK_FUNC(sub_83014B50);
PPC_FUNC_IMPL(__imp__sub_83014B50) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r3,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r3.u8);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// lhz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014B68"))) PPC_WEAK_FUNC(sub_83014B68);
PPC_FUNC_IMPL(__imp__sub_83014B68) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// stb r3,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r3.u8);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014B90"))) PPC_WEAK_FUNC(sub_83014B90);
PPC_FUNC_IMPL(__imp__sub_83014B90) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// addi r4,r9,-17240
	ctx.r4.s64 = ctx.r9.s64 + -17240;
	// li r5,20
	ctx.r5.s64 = 20;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// rlwinm r11,r10,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// bl 0x83014a30
	ctx.lr = 0x83014BD0;
	sub_83014A30(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014BE8"))) PPC_WEAK_FUNC(sub_83014BE8);
PPC_FUNC_IMPL(__imp__sub_83014BE8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830149a8
	ctx.lr = 0x83014C04;
	sub_830149A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83014c2c
	if (!ctx.cr0.eq) goto loc_83014C2C;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r5,87(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r9,r11,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r5,r9,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
loc_83014C2C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014C40"))) PPC_WEAK_FUNC(sub_83014C40);
PPC_FUNC_IMPL(__imp__sub_83014C40) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83014c58
	goto loc_83014C58;
loc_83014C4C:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x83014c64
	if (ctx.cr6.gt) goto loc_83014C64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_83014C58:
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x83014c4c
	if (ctx.cr0.gt) goto loc_83014C4C;
loc_83014C64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83014C68:
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x83014c80
	if (ctx.cr6.lt) goto loc_83014C80;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x83014c88
	if (!ctx.cr6.gt) goto loc_83014C88;
loc_83014C80:
	// cmpwi cr6,r10,46
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 46, ctx.xer);
	// bne cr6,0x83014cb4
	if (!ctx.cr6.eq) goto loc_83014CB4;
loc_83014C88:
	// cmpwi cr6,r10,46
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 46, ctx.xer);
	// beq cr6,0x83014ca8
	if (ctx.cr6.eq) goto loc_83014CA8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// mulli r10,r7,9
	ctx.r10.s64 = ctx.r7.s64 * 9;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x83014cac
	goto loc_83014CAC;
loc_83014CA8:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
loc_83014CAC:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x83014c68
	goto loc_83014C68;
loc_83014CB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// beq cr6,0x83014cd4
	if (ctx.cr6.eq) goto loc_83014CD4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83014cd4
	goto loc_83014CD4;
loc_83014CC8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83014ce4
	if (ctx.cr6.eq) goto loc_83014CE4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_83014CD4:
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// bne cr6,0x83014cc8
	if (!ctx.cr6.eq) goto loc_83014CC8;
loc_83014CE4:
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x83014d24
	if (!ctx.cr6.eq) goto loc_83014D24;
	// b 0x83014d0c
	goto loc_83014D0C;
loc_83014CF8:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x83014d20
	if (ctx.cr6.gt) goto loc_83014D20;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83014D0C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x83014cf8
	if (!ctx.cr6.lt) goto loc_83014CF8;
loc_83014D20:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_83014D24:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x83014d74
	if (!ctx.cr6.eq) goto loc_83014D74;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// b 0x83014d60
	goto loc_83014D60;
loc_83014D48:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x83014d70
	if (ctx.cr6.gt) goto loc_83014D70;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mulli r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 * 10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_83014D60:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x83014d48
	if (!ctx.cr6.lt) goto loc_83014D48;
loc_83014D70:
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
loc_83014D74:
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014D80"))) PPC_WEAK_FUNC(sub_83014D80);
PPC_FUNC_IMPL(__imp__sub_83014D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x83014c40
	ctx.lr = 0x83014DC4;
	sub_83014C40(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r10,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r9,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
	// stb r8,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r8.u8);
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014E10"))) PPC_WEAK_FUNC(sub_83014E10);
PPC_FUNC_IMPL(__imp__sub_83014E10) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
loc_83014E1C:
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r9,r10,4,59
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x83014e44
	if (ctx.cr6.lt) goto loc_83014E44;
	// cmpwi cr6,r10,58
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 58, ctx.xer);
	// li r8,48
	ctx.r8.s64 = 48;
	// blt cr6,0x83014e48
	if (ctx.cr6.lt) goto loc_83014E48;
loc_83014E44:
	// li r8,87
	ctx.r8.s64 = 87;
loc_83014E48:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// blt cr6,0x83014e1c
	if (ctx.cr6.lt) goto loc_83014E1C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014E68"))) PPC_WEAK_FUNC(sub_83014E68);
PPC_FUNC_IMPL(__imp__sub_83014E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83014E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83014E80:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83014E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw r11,r3,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// or r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 | ctx.r29.u64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x83014e80
	if (ctx.cr6.lt) goto loc_83014E80;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// beq 0x83014ecc
	if (ctx.cr0.eq) goto loc_83014ECC;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// b 0x83014ed0
	goto loc_83014ED0;
loc_83014ECC:
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
loc_83014ED0:
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// stw r29,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83014EE0"))) PPC_WEAK_FUNC(sub_83014EE0);
PPC_FUNC_IMPL(__imp__sub_83014EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x83014EE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r3,26226
	ctx.r3.s64 = 1718747136;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,28278
	ctx.r3.u64 = ctx.r3.u64 | 28278;
	// bl 0x83011c48
	ctx.lr = 0x83014F08;
	sub_83011C48(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x83014fe4
	if (ctx.cr6.eq) goto loc_83014FE4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// ble 0x83014fc8
	if (!ctx.cr0.gt) goto loc_83014FC8;
	// li r27,0
	ctx.r27.s64 = 0;
loc_83014F38:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// slw r26,r10,r28
	ctx.r26.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r28.u8 & 0x3F));
loc_83014F4C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,251
	ctx.r4.s64 = 251;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a3a020
	ctx.lr = 0x83014F5C;
	sub_82A3A020(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x83014fa8
	if (!ctx.cr0.eq) goto loc_83014FA8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83014fa8
	if (ctx.cr6.eq) goto loc_83014FA8;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lis r3,26995
	ctx.r3.s64 = 1769144320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r3,r3,26226
	ctx.r3.u64 = ctx.r3.u64 | 26226;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x83011c48
	ctx.lr = 0x83014F94;
	sub_83011C48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83014fa8
	if (!ctx.cr0.eq) goto loc_83014FA8;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// andc r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r26.u64;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
loc_83014FA8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x83014f4c
	if (ctx.cr6.lt) goto loc_83014F4C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,368
	ctx.r27.s64 = ctx.r27.s64 + 368;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83014f38
	if (ctx.cr6.lt) goto loc_83014F38;
loc_83014FC8:
	// lis r3,26226
	ctx.r3.s64 = 1718747136;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,28278
	ctx.r3.u64 = ctx.r3.u64 | 28278;
	// bl 0x83011c48
	ctx.lr = 0x83014FE0;
	sub_83011C48(ctx, base);
	// stw r3,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r3.u32);
loc_83014FE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83014FF0"))) PPC_WEAK_FUNC(sub_83014FF0);
PPC_FUNC_IMPL(__imp__sub_83014FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83014FF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83015080
	if (ctx.cr6.eq) goto loc_83015080;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83015078
	if (!ctx.cr6.gt) goto loc_83015078;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83015020:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83015064
	if (!ctx.cr6.eq) goto loc_83015064;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82b75138
	ctx.lr = 0x83015050;
	sub_82B75138(ctx, base);
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83015064
	if (ctx.cr6.eq) goto loc_83015064;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
loc_83015064:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,368
	ctx.r29.s64 = ctx.r29.s64 + 368;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83015020
	if (ctx.cr6.lt) goto loc_83015020;
loc_83015078:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r11.u32);
loc_83015080:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83015088"))) PPC_WEAK_FUNC(sub_83015088);
PPC_FUNC_IMPL(__imp__sub_83015088) {
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
	// li r4,252
	ctx.r4.s64 = 252;
	// addi r5,r31,244
	ctx.r5.s64 = ctx.r31.s64 + 244;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82a3a020
	ctx.lr = 0x830150AC;
	sub_82A3A020(ctx, base);
	// addi r5,r31,248
	ctx.r5.s64 = ctx.r31.s64 + 248;
	// li r4,251
	ctx.r4.s64 = 251;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82a3a020
	ctx.lr = 0x830150BC;
	sub_82A3A020(ctx, base);
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

__attribute__((alias("__imp__sub_830150D0"))) PPC_WEAK_FUNC(sub_830150D0);
PPC_FUNC_IMPL(__imp__sub_830150D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x830150D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83015200
	if (!ctx.cr6.gt) goto loc_83015200;
	// li r26,0
	ctx.r26.s64 = 0;
loc_830150F4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r28,r26,r11
	ctx.r28.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830151ec
	if (!ctx.cr6.eq) goto loc_830151EC;
	// lwz r11,360(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// bne cr6,0x8301515c
	if (!ctx.cr6.eq) goto loc_8301515C;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83015140
	if (!ctx.cr6.eq) goto loc_83015140;
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8301515c
	if (ctx.cr6.eq) goto loc_8301515C;
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// and. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8301515c
	if (ctx.cr0.eq) goto loc_8301515C;
loc_83015140:
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r9,1
	ctx.r9.s64 = 1;
	// and. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83015160
	if (ctx.cr0.eq) goto loc_83015160;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x83015170
	goto loc_83015170;
loc_8301515C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83015160:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// andc r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// beq cr6,0x8301518c
	if (ctx.cr6.eq) goto loc_8301518C;
loc_83015170:
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// and. r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8301518c
	if (ctx.cr0.eq) goto loc_8301518C;
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r29,0
	ctx.r29.s64 = 0;
	// or r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x83015198
	goto loc_83015198;
loc_8301518C:
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r29,-1
	ctx.r29.s64 = -1;
	// andc r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 & ~ctx.r11.u64;
loc_83015198:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x830151a8
	if (ctx.cr6.eq) goto loc_830151A8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83020108
	ctx.lr = 0x830151A8;
	sub_83020108(ctx, base);
loc_830151A8:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830151c0
	if (ctx.cr6.eq) goto loc_830151C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83020120
	ctx.lr = 0x830151C0;
	sub_83020120(ctx, base);
loc_830151C0:
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r5,224(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830151EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830151EC:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,368
	ctx.r26.s64 = ctx.r26.s64 + 368;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x830150f4
	if (ctx.cr6.lt) goto loc_830150F4;
loc_83015200:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83015208"))) PPC_WEAK_FUNC(sub_83015208);
PPC_FUNC_IMPL(__imp__sub_83015208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r4,17
	ctx.r5.s64 = ctx.r4.s64 + 17;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83015244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015258"))) PPC_WEAK_FUNC(sub_83015258);
PPC_FUNC_IMPL(__imp__sub_83015258) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83015288"))) PPC_WEAK_FUNC(sub_83015288);
PPC_FUNC_IMPL(__imp__sub_83015288) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,18456
	ctx.r11.s64 = ctx.r11.s64 + 18456;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,47
	ctx.r11.s64 = 47;
	// beq cr6,0x830152bc
	if (ctx.cr6.eq) goto loc_830152BC;
	// li r11,10
	ctx.r11.s64 = 10;
loc_830152BC:
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x83015334
	if (ctx.cr0.lt) goto loc_83015334;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830152EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83015334
	if (ctx.cr0.lt) goto loc_83015334;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_830152F8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301ffa0
	ctx.lr = 0x83015308;
	sub_8301FFA0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8301532C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830152f8
	if (!ctx.cr0.lt) goto loc_830152F8;
loc_83015334:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_83015350"))) PPC_WEAK_FUNC(sub_83015350);
PPC_FUNC_IMPL(__imp__sub_83015350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83015358;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x830153f4
	if (ctx.cr6.eq) goto loc_830153F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x830153c0
	if (ctx.cr6.eq) goto loc_830153C0;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8301539C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,232(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830153BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830153ec
	goto loc_830153EC;
loc_830153C0:
	// lwz r5,224(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830153D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830153EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830153EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r11.u32);
loc_830153F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83015400"))) PPC_WEAK_FUNC(sub_83015400);
PPC_FUNC_IMPL(__imp__sub_83015400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83015408;
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
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8301546c
	if (!ctx.cr6.gt) goto loc_8301546C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83015428:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x83015458
	if (!ctx.cr6.eq) goto loc_83015458;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83015350
	ctx.lr = 0x83015458;
	sub_83015350(ctx, base);
loc_83015458:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,368
	ctx.r30.s64 = ctx.r30.s64 + 368;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83015428
	if (ctx.cr6.lt) goto loc_83015428;
loc_8301546C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83015478"))) PPC_WEAK_FUNC(sub_83015478);
PPC_FUNC_IMPL(__imp__sub_83015478) {
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
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x830154ec
	if (ctx.cr6.eq) goto loc_830154EC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,236(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830154BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830154D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_830154EC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83015504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8301553c
	if (!ctx.cr0.eq) goto loc_8301553C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,232(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8301552C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
loc_8301553C:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_83015568"))) PPC_WEAK_FUNC(sub_83015568);
PPC_FUNC_IMPL(__imp__sub_83015568) {
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
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x83015598
	if (!ctx.cr6.eq) goto loc_83015598;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830155c4
	goto loc_830155C4;
loc_83015598:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83015400
	ctx.lr = 0x830155A4;
	sub_83015400(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83015478
	ctx.lr = 0x830155B0;
	sub_83015478(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83015400
	ctx.lr = 0x830155C0;
	sub_83015400(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_830155C4:
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

__attribute__((alias("__imp__sub_830155E0"))) PPC_WEAK_FUNC(sub_830155E0);
PPC_FUNC_IMPL(__imp__sub_830155E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830155E8"))) PPC_WEAK_FUNC(sub_830155E8);
PPC_FUNC_IMPL(__imp__sub_830155E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x830155F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r31,176
	ctx.r29.s64 = ctx.r31.s64 + 176;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x8308acb4
	ctx.lr = 0x8301561C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83020878
	ctx.lr = 0x83015640;
	sub_83020878(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8308acc4
	ctx.lr = 0x83015648;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83015650"))) PPC_WEAK_FUNC(sub_83015650);
PPC_FUNC_IMPL(__imp__sub_83015650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8308aa14
	ctx.lr = 0x83015678;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83015688
	if (ctx.cr0.eq) goto loc_83015688;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
loc_83015688:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x8308aa14
	ctx.lr = 0x8301569C;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830156ac
	if (ctx.cr0.eq) goto loc_830156AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83015088
	ctx.lr = 0x830156AC;
	sub_83015088(ctx, base);
loc_830156AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83014ff0
	ctx.lr = 0x830156B4;
	sub_83014FF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83014ee0
	ctx.lr = 0x830156BC;
	sub_83014EE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830150d0
	ctx.lr = 0x830156C4;
	sub_830150D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83014e68
	ctx.lr = 0x830156CC;
	sub_83014E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83015288
	ctx.lr = 0x830156D4;
	sub_83015288(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83020a60
	ctx.lr = 0x830156DC;
	sub_83020A60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830156F0"))) PPC_WEAK_FUNC(sub_830156F0);
PPC_FUNC_IMPL(__imp__sub_830156F0) {
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
	// b 0x83015714
	goto loc_83015714;
loc_8301570C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a3ad50
	ctx.lr = 0x83015714;
	sub_82A3AD50(ctx, base);
loc_83015714:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301570c
	if (ctx.cr6.eq) goto loc_8301570C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83015764
	if (ctx.cr6.eq) goto loc_83015764;
	// addi r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 + 176;
loc_83015738:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308acb4
	ctx.lr = 0x83015740;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83015650
	ctx.lr = 0x83015748;
	sub_83015650(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308acc4
	ctx.lr = 0x83015750;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82a3ad50
	ctx.lr = 0x83015758;
	sub_82A3AD50(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83015738
	if (!ctx.cr6.eq) goto loc_83015738;
loc_83015764:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83015788"))) PPC_WEAK_FUNC(sub_83015788);
PPC_FUNC_IMPL(__imp__sub_83015788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015790"))) PPC_WEAK_FUNC(sub_83015790);
PPC_FUNC_IMPL(__imp__sub_83015790) {
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
	// lwz r5,240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x830157d0
	if (ctx.cr6.eq) goto loc_830157D0;
	// lwz r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830157C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_830157D0:
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x83015800
	if (ctx.cr6.eq) goto loc_83015800;
	// lwz r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830157F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_83015800:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83015840
	if (ctx.cr6.eq) goto loc_83015840;
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83015838
	if (ctx.cr0.eq) goto loc_83015838;
	// lwz r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r5,r11,0,23,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83015838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83015838:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_83015840:
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

__attribute__((alias("__imp__sub_83015858"))) PPC_WEAK_FUNC(sub_83015858);
PPC_FUNC_IMPL(__imp__sub_83015858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x83015860;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x8301c188
	ctx.lr = 0x83015874;
	sub_8301C188(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r28,r11,-17220
	ctx.r28.s64 = ctx.r11.s64 + -17220;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83015894
	if (ctx.cr6.eq) goto loc_83015894;
loc_8301588C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83015a54
	goto loc_83015A54;
loc_83015894:
	// lis r11,30319
	ctx.r11.s64 = 1986985984;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// ori r25,r11,26992
	ctx.r25.u64 = ctx.r11.u64 | 26992;
	// li r3,264
	ctx.r3.s64 = 264;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82217ec8
	ctx.lr = 0x830158AC;
	sub_82217EC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8301588c
	if (ctx.cr0.eq) goto loc_8301588C;
	// li r5,264
	ctx.r5.s64 = 264;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x830158C4;
	sub_82D5CB60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83020ca8
	ctx.lr = 0x830158CC;
	sub_83020CA8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// bl 0x8301fdb8
	ctx.lr = 0x830158F4;
	sub_8301FDB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83015910
	if (!ctx.cr0.lt) goto loc_83015910;
loc_830158FC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822138a8
	ctx.lr = 0x8301590C;
	sub_822138A8(ctx, base);
	// b 0x8301588c
	goto loc_8301588C;
loc_83015910:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83015920:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x83015920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83015920;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r11,-13116
	ctx.r30.s64 = ctx.r11.s64 + -13116;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r11,-31468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31468);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83015984
	if (ctx.cr6.eq) goto loc_83015984;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
loc_83015984:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b77e20
	ctx.lr = 0x83015994;
	sub_82B77E20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830158fc
	if (ctx.cr0.lt) goto loc_830158FC;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x8308acd4
	ctx.lr = 0x830159A4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// addi r8,r31,172
	ctx.r8.s64 = ctx.r31.s64 + 172;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,22256
	ctx.r5.s64 = ctx.r11.s64 + 22256;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a3ad58
	ctx.lr = 0x830159C4;
	sub_82A3AD58(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x82a3aaf8
	ctx.lr = 0x830159D4;
	sub_82A3AAF8(ctx, base);
	// lis r10,-31999
	ctx.r10.s64 = -2097086464;
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,21328
	ctx.r5.s64 = ctx.r10.s64 + 21328;
	// addi r4,r11,21000
	ctx.r4.s64 = ctx.r11.s64 + 21000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8301fe50
	ctx.lr = 0x830159F0;
	sub_8301FE50(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// li r3,111
	ctx.r3.s64 = 111;
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// bl 0x82a3bdf8
	ctx.lr = 0x83015A14;
	sub_82A3BDF8(ctx, base);
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,22408
	ctx.r7.s64 = ctx.r11.s64 + 22408;
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,22416
	ctx.r3.s64 = ctx.r11.s64 + 22416;
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r7.u32);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// bl 0x83012628
	ctx.lr = 0x83015A48;
	sub_83012628(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
loc_83015A54:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83015A60"))) PPC_WEAK_FUNC(sub_83015A60);
PPC_FUNC_IMPL(__imp__sub_83015A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r3,-17216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015A70"))) PPC_WEAK_FUNC(sub_83015A70);
PPC_FUNC_IMPL(__imp__sub_83015A70) {
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
	// lis r30,-31979
	ctx.r30.s64 = -2095775744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-17216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83015b40
	if (ctx.cr6.eq) goto loc_83015B40;
loc_83015A98:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83015a98
	if (ctx.cr6.lt) goto loc_83015A98;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// b 0x83015ab8
	goto loc_83015AB8;
loc_83015AB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a3ad50
	ctx.lr = 0x83015AB8;
	sub_82A3AD50(ctx, base);
loc_83015AB8:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83015ab0
	if (!ctx.cr6.eq) goto loc_83015AB0;
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,22416
	ctx.r3.s64 = ctx.r11.s64 + 22416;
	// bl 0x83012698
	ctx.lr = 0x83015AD4;
	sub_83012698(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8301fe60
	ctx.lr = 0x83015ADC;
	sub_8301FE60(ctx, base);
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x83015afc
	if (ctx.cr6.eq) goto loc_83015AFC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83015AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83015AFC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83015B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83015b20
	if (ctx.cr0.eq) goto loc_83015B20;
	// bl 0x82a3a2c0
	ctx.lr = 0x83015B20;
	sub_82A3A2C0(ctx, base);
loc_83015B20:
	// bl 0x83020c98
	ctx.lr = 0x83015B24;
	sub_83020C98(ctx, base);
	// lis r4,30319
	ctx.r4.s64 = 1986985984;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,26992
	ctx.r4.u64 = ctx.r4.u64 | 26992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822138a8
	ctx.lr = 0x83015B38;
	sub_822138A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-17216(r30)
	PPC_STORE_U32(ctx.r30.u32 + -17216, ctx.r11.u32);
loc_83015B40:
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

__attribute__((alias("__imp__sub_83015B58"))) PPC_WEAK_FUNC(sub_83015B58);
PPC_FUNC_IMPL(__imp__sub_83015B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83015B60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83014e10
	ctx.lr = 0x83015B70;
	sub_83014E10(ctx, base);
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
loc_83015B78:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a3a270
	ctx.lr = 0x83015B84;
	sub_82A3A270(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, ctx.xer);
	// beq cr6,0x83015ba0
	if (ctx.cr6.eq) goto loc_83015BA0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x83015b78
	if (ctx.cr6.lt) goto loc_83015B78;
	// b 0x83015bc0
	goto loc_83015BC0;
loc_83015BA0:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stdx r29,r11,r30
	PPC_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u64);
	// bl 0x83015568
	ctx.lr = 0x83015BB8;
	sub_83015568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83015088
	ctx.lr = 0x83015BC0;
	sub_83015088(ctx, base);
loc_83015BC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83015BC8"))) PPC_WEAK_FUNC(sub_83015BC8);
PPC_FUNC_IMPL(__imp__sub_83015BC8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// stw r5,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015BD8"))) PPC_WEAK_FUNC(sub_83015BD8);
PPC_FUNC_IMPL(__imp__sub_83015BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x83015BE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x83015c20
	if (!ctx.cr6.eq) goto loc_83015C20;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8301fec8
	ctx.lr = 0x83015C10;
	sub_8301FEC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x83015c64
	if (!ctx.cr0.lt) goto loc_83015C64;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x83015cd0
	goto loc_83015CD0;
loc_83015C20:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x83015ccc
	if (ctx.cr6.lt) goto loc_83015CCC;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x83015ccc
	if (!ctx.cr6.lt) goto loc_83015CCC;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83015c64
	if (ctx.cr6.eq) goto loc_83015C64;
	// addi r29,r30,176
	ctx.r29.s64 = ctx.r30.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8308acb4
	ctx.lr = 0x83015C50;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8301ff10
	ctx.lr = 0x83015C5C;
	sub_8301FF10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8308acc4
	ctx.lr = 0x83015C64;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_83015C64:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x83015ca4
	if (ctx.cr6.eq) goto loc_83015CA4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83014e10
	ctx.lr = 0x83015C78;
	sub_83014E10(ctx, base);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830155e8
	ctx.lr = 0x83015C98;
	sub_830155E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83014ff0
	ctx.lr = 0x83015CA0;
	sub_83014FF0(ctx, base);
	// b 0x83015cc4
	goto loc_83015CC4;
loc_83015CA4:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830155e8
	ctx.lr = 0x83015CC4;
	sub_830155E8(ctx, base);
loc_83015CC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83015cd0
	goto loc_83015CD0;
loc_83015CCC:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_83015CD0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83015CD8"))) PPC_WEAK_FUNC(sub_83015CD8);
PPC_FUNC_IMPL(__imp__sub_83015CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83015CE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,176
	ctx.r30.s64 = ctx.r31.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308acb4
	ctx.lr = 0x83015CF8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8301ff10
	ctx.lr = 0x83015D04;
	sub_8301FF10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8308acc4
	ctx.lr = 0x83015D0C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83015D18"))) PPC_WEAK_FUNC(sub_83015D18);
PPC_FUNC_IMPL(__imp__sub_83015D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83015D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,176
	ctx.r29.s64 = ctx.r31.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8308acb4
	ctx.lr = 0x83015D38;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83020b48
	ctx.lr = 0x83015D44;
	sub_83020B48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x8301fd98
	ctx.lr = 0x83015D50;
	sub_8301FD98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x8301fd98
	ctx.lr = 0x83015D60;
	sub_8301FD98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// bl 0x8308acc4
	ctx.lr = 0x83015D70;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83015D78"))) PPC_WEAK_FUNC(sub_83015D78);
PPC_FUNC_IMPL(__imp__sub_83015D78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// bne cr6,0x83015dc0
	if (!ctx.cr6.eq) goto loc_83015DC0;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
loc_83015DA8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,368
	ctx.r10.s64 = ctx.r10.s64 + 368;
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// bne 0x83015da8
	if (!ctx.cr0.eq) goto loc_83015DA8;
	// blr 
	return;
loc_83015DC0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r11,r4,368
	ctx.r11.s64 = ctx.r4.s64 * 368;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015DE8"))) PPC_WEAK_FUNC(sub_83015DE8);
PPC_FUNC_IMPL(__imp__sub_83015DE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r3,r3,0,26,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015E10"))) PPC_WEAK_FUNC(sub_83015E10);
PPC_FUNC_IMPL(__imp__sub_83015E10) {
	PPC_FUNC_PROLOGUE();
	// stw r4,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015E18"))) PPC_WEAK_FUNC(sub_83015E18);
PPC_FUNC_IMPL(__imp__sub_83015E18) {
	PPC_FUNC_PROLOGUE();
	// stw r4,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015E20"))) PPC_WEAK_FUNC(sub_83015E20);
PPC_FUNC_IMPL(__imp__sub_83015E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,26226
	ctx.r11.s64 = 1718747136;
	// ori r11,r11,28525
	ctx.r11.u64 = ctx.r11.u64 | 28525;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83015e38
	if (!ctx.cr6.eq) goto loc_83015E38;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// blr 
	return;
loc_83015E38:
	// lis r11,26739
	ctx.r11.s64 = 1752367104;
	// ori r11,r11,25972
	ctx.r11.u64 = ctx.r11.u64 | 25972;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83015e68
	if (!ctx.cr6.eq) goto loc_83015E68;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// blr 
	return;
loc_83015E68:
	// lis r11,27759
	ctx.r11.s64 = 1819213824;
	// ori r11,r11,25451
	ctx.r11.u64 = ctx.r11.u64 | 25451;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83015e80
	if (!ctx.cr6.eq) goto loc_83015E80;
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// blr 
	return;
loc_83015E80:
	// lis r11,27760
	ctx.r11.s64 = 1819279360;
	// ori r11,r11,29300
	ctx.r11.u64 = ctx.r11.u64 | 29300;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83015e98
	if (!ctx.cr6.eq) goto loc_83015E98;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// blr 
	return;
loc_83015E98:
	// lis r11,28009
	ctx.r11.s64 = 1835597824;
	// ori r11,r11,25458
	ctx.r11.u64 = ctx.r11.u64 | 25458;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83015eb0
	if (!ctx.cr6.eq) goto loc_83015EB0;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// blr 
	return;
loc_83015EB0:
	// lis r11,28783
	ctx.r11.s64 = 1886322688;
	// ori r11,r11,29300
	ctx.r11.u64 = ctx.r11.u64 | 29300;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83015ec8
	if (!ctx.cr6.eq) goto loc_83015EC8;
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// blr 
	return;
loc_83015EC8:
	// lis r11,29552
	ctx.r11.s64 = 1936719872;
	// ori r11,r11,27506
	ctx.r11.u64 = ctx.r11.u64 | 27506;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83015ee0
	if (!ctx.cr6.eq) goto loc_83015EE0;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// blr 
	return;
loc_83015EE0:
	// lis r11,30061
	ctx.r11.s64 = 1970077696;
	// ori r11,r11,26979
	ctx.r11.u64 = ctx.r11.u64 | 26979;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83015ef8
	if (!ctx.cr6.eq) goto loc_83015EF8;
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// blr 
	return;
loc_83015EF8:
	// lis r11,30067
	ctx.r11.s64 = 1970470912;
	// ori r11,r11,28779
	ctx.r11.u64 = ctx.r11.u64 | 28779;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83015f10
	if (!ctx.cr6.eq) goto loc_83015F10;
	// lwz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// blr 
	return;
loc_83015F10:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015F18"))) PPC_WEAK_FUNC(sub_83015F18);
PPC_FUNC_IMPL(__imp__sub_83015F18) {
	PPC_FUNC_PROLOGUE();
	// lis r9,25452
	ctx.r9.s64 = 1668022272;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ori r9,r9,26980
	ctx.r9.u64 = ctx.r9.u64 | 26980;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83015f40
	if (!ctx.cr6.eq) goto loc_83015F40;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r4.u32);
	// blr 
	return;
loc_83015F40:
	// lis r9,26220
	ctx.r9.s64 = 1718353920;
	// ori r9,r9,29544
	ctx.r9.u64 = ctx.r9.u64 | 29544;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83015f58
	if (!ctx.cr6.eq) goto loc_83015F58;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// b 0x83020090
	sub_83020090(ctx, base);
	return;
loc_83015F58:
	// lis r9,27759
	ctx.r9.s64 = 1819213824;
	// ori r9,r9,25451
	ctx.r9.u64 = ctx.r9.u64 | 25451;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83015f74
	if (!ctx.cr6.eq) goto loc_83015F74;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r4.u32);
	// blr 
	return;
loc_83015F74:
	// lis r9,28018
	ctx.r9.s64 = 1836187648;
	// ori r9,r9,25714
	ctx.r9.u64 = ctx.r9.u64 | 25714;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83015f94
	if (!ctx.cr6.eq) goto loc_83015F94;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,-17220(r11)
	PPC_STORE_U32(ctx.r11.u32 + -17220, ctx.r4.u32);
	// blr 
	return;
loc_83015F94:
	// lis r9,28783
	ctx.r9.s64 = 1886322688;
	// ori r9,r9,29300
	ctx.r9.u64 = ctx.r9.u64 | 29300;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83015fac
	if (!ctx.cr6.eq) goto loc_83015FAC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x83015568
	sub_83015568(ctx, base);
	return;
loc_83015FAC:
	// lis r9,29045
	ctx.r9.s64 = 1903493120;
	// ori r9,r9,24940
	ctx.r9.u64 = ctx.r9.u64 | 24940;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83015fc4
	if (!ctx.cr6.eq) goto loc_83015FC4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83015FC4:
	// lis r9,29541
	ctx.r9.s64 = 1935998976;
	// ori r9,r9,29302
	ctx.r9.u64 = ctx.r9.u64 | 29302;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83015fe0
	if (!ctx.cr6.eq) goto loc_83015FE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r4,144(r10)
	PPC_STORE_U8(ctx.r10.u32 + 144, ctx.r4.u8);
	// blr 
	return;
loc_83015FE0:
	// lis r9,29801
	ctx.r9.s64 = 1953038336;
	// ori r9,r9,28005
	ctx.r9.u64 = ctx.r9.u64 | 28005;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83015ffc
	if (!ctx.cr6.eq) goto loc_83015FFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 140, ctx.r4.u32);
	// blr 
	return;
loc_83015FFC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016008"))) PPC_WEAK_FUNC(sub_83016008);
PPC_FUNC_IMPL(__imp__sub_83016008) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016010"))) PPC_WEAK_FUNC(sub_83016010);
PPC_FUNC_IMPL(__imp__sub_83016010) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016018"))) PPC_WEAK_FUNC(sub_83016018);
PPC_FUNC_IMPL(__imp__sub_83016018) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016020"))) PPC_WEAK_FUNC(sub_83016020);
PPC_FUNC_IMPL(__imp__sub_83016020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x83016028;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83016054
	if (!ctx.cr6.eq) goto loc_83016054;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83016208
	goto loc_83016208;
loc_83016054:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lhz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x83016070
	if (!ctx.cr6.gt) goto loc_83016070;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83016208
	goto loc_83016208;
loc_83016070:
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8301608c
	if (!ctx.cr0.eq) goto loc_8301608C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,250
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 250, ctx.xer);
	// ble cr6,0x83016108
	if (!ctx.cr6.gt) goto loc_83016108;
loc_8301608C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83014b28
	ctx.lr = 0x83016094;
	sub_83014B28(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x83014b28
	ctx.lr = 0x830160AC;
	sub_83014B28(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83014b10
	ctx.lr = 0x830160D0;
	sub_83014B10(ctx, base);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// sth r3,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r3.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82d5c630
	ctx.lr = 0x830160EC;
	sub_82D5C630(ctx, base);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// sth r11,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r11.u16);
	// stb r10,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r10.u8);
loc_83016108:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x83016130
	if (!ctx.cr6.eq) goto loc_83016130;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x83016140
	goto loc_83016140;
loc_83016130:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// li r6,3
	ctx.r6.s64 = 3;
	// beq cr6,0x83016140
	if (ctx.cr6.eq) goto loc_83016140;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_83016140:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8301615C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x83016180
	if (ctx.cr6.eq) goto loc_83016180;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// xori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 ^ 64;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// stb r10,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r10.u8);
	// sth r11,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r11.u16);
loc_83016180:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x83016208
	if (!ctx.cr6.gt) goto loc_83016208;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// beq cr6,0x83016198
	if (ctx.cr6.eq) goto loc_83016198;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_83016198:
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r8,408(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r8.u32);
	// stw r10,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// beq 0x830161e8
	if (ctx.cr0.eq) goto loc_830161E8;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830161e8
	if (!ctx.cr6.gt) goto loc_830161E8;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
loc_830161E8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83016208
	if (ctx.cr0.eq) goto loc_83016208;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x83016208
	if (!ctx.cr6.gt) goto loc_83016208;
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
loc_83016208:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83016210"))) PPC_WEAK_FUNC(sub_83016210);
PPC_FUNC_IMPL(__imp__sub_83016210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83016218;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic. r5,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r5.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8301651c
	if (!ctx.cr0.gt) goto loc_8301651C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 84);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8301624c
	if (!ctx.cr6.gt) goto loc_8301624C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_8301624C:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83016268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8301651c
	if (!ctx.cr0.gt) goto loc_8301651C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 84);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8301651c
	if (ctx.cr6.gt) goto loc_8301651C;
	// sth r3,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r3.u16);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// beq 0x830162cc
	if (ctx.cr0.eq) goto loc_830162CC;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830162cc
	if (!ctx.cr6.gt) goto loc_830162CC;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_830162CC:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830162ec
	if (ctx.cr0.eq) goto loc_830162EC;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830162ec
	if (!ctx.cr6.gt) goto loc_830162EC;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_830162EC:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r11,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r11.u16);
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r11,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r11.u8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830164d0
	if (ctx.cr0.eq) goto loc_830164D0;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,10
	ctx.r5.s64 = 10;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// sth r11,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r11.u16);
	// bl 0x82d5c630
	ctx.lr = 0x8301633C;
	sub_82D5C630(ctx, base);
	// lbz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// xori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 ^ 64;
	// stb r11,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r11.u8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// bge cr6,0x83016360
	if (!ctx.cr6.lt) goto loc_83016360;
	// li r30,10
	ctx.r30.s64 = 10;
loc_83016360:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x83014b68
	ctx.lr = 0x8301636C;
	sub_83014B68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x83014b50
	ctx.lr = 0x8301637C;
	sub_83014B50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x83014b68
	ctx.lr = 0x83016390;
	sub_83014B68(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// mr. r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x830164d0
	if (ctx.cr0.lt) goto loc_830164D0;
	// cmpwi cr6,r10,2500
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2500, ctx.xer);
	// bgt cr6,0x830164d0
	if (ctx.cr6.gt) goto loc_830164D0;
	// cmpwi cr6,r30,1024
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1024, ctx.xer);
	// bge cr6,0x83016400
	if (!ctx.cr6.lt) goto loc_83016400;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subfic r11,r30,1024
	ctx.xer.ca = ctx.r30.u32 <= 1024;
	ctx.r11.s64 = 1024 - ctx.r30.s64;
	// subf. r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x830163c8
	if (!ctx.cr0.lt) goto loc_830163C8;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_830163C8:
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r7,r10,r30
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r11,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 10;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 10;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// b 0x83016408
	goto loc_83016408;
loc_83016400:
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
loc_83016408:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplwi cr6,r9,250
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 250, ctx.xer);
	// blt cr6,0x83016464
	if (ctx.cr6.lt) goto loc_83016464;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// addi r11,r10,19
	ctx.r11.s64 = ctx.r10.s64 + 19;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// b 0x830164c8
	goto loc_830164C8;
loc_83016464:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r11,r11,19
	ctx.r11.s64 = ctx.r11.s64 + 19;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x83016484
	if (!ctx.cr6.lt) goto loc_83016484;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
loc_83016484:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x83016494
	if (!ctx.cr6.gt) goto loc_83016494;
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
loc_83016494:
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// twllei r9,0
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r8,r8,r9
	ctx.r8.s32 = ctx.r8.s32 / ctx.r9.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
loc_830164C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_830164D0:
	// lbz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x830164f4
	if (!ctx.cr6.eq) goto loc_830164F4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830164EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830164EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83016520
	goto loc_83016520;
loc_830164F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830164ec
	if (ctx.cr6.eq) goto loc_830164EC;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,0,17,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFC;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// b 0x830164ec
	goto loc_830164EC;
loc_8301651C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83016520:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83016528"))) PPC_WEAK_FUNC(sub_83016528);
PPC_FUNC_IMPL(__imp__sub_83016528) {
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
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83016550
	if (!ctx.cr6.gt) goto loc_83016550;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83016568
	goto loc_83016568;
loc_83016550:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// bl 0x83016210
	ctx.lr = 0x83016560;
	sub_83016210(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
loc_83016568:
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

__attribute__((alias("__imp__sub_83016580"))) PPC_WEAK_FUNC(sub_83016580);
PPC_FUNC_IMPL(__imp__sub_83016580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83016588;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x830165a4
	goto loc_830165A4;
loc_83016598:
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
loc_830165A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83016528
	ctx.lr = 0x830165B0;
	sub_83016528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x83016598
	if (ctx.cr0.gt) goto loc_83016598;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// stw r29,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r29.u32);
	// cmplwi cr6,r10,1000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1000, ctx.xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// blt cr6,0x830166a8
	if (ctx.cr6.lt) goto loc_830166A8;
	// lwz r8,408(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// twllei r10,0
	// lwz r6,412(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// twllei r10,0
	// mulli r8,r8,1000
	ctx.r8.s64 = ctx.r8.s64 * 1000;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,416(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r7,424(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r5,420(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// divwu r4,r8,r10
	ctx.r4.u32 = ctx.r8.u32 / ctx.r10.u32;
	// mulli r8,r6,1000
	ctx.r8.s64 = ctx.r6.s64 * 1000;
	// stw r4,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r4.u32);
	// addi r8,r8,500
	ctx.r8.s64 = ctx.r8.s64 + 500;
	// twllei r10,0
	// divwu r6,r8,r10
	ctx.r6.u32 = ctx.r8.u32 / ctx.r10.u32;
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// twllei r10,0
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// twllei r10,0
	// mulli r8,r8,1000
	ctx.r8.s64 = ctx.r8.s64 * 1000;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// lwz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r6,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r6.u32);
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// divwu r7,r4,r10
	ctx.r7.u32 = ctx.r4.u32 / ctx.r10.u32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r9,r9,1000
	ctx.r9.s64 = ctx.r9.s64 * 1000;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// divwu r9,r9,r10
	ctx.r9.u32 = ctx.r9.u32 / ctx.r10.u32;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r29,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r29.u32);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// stw r29,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r29.u32);
	// mulli r9,r9,1000
	ctx.r9.s64 = ctx.r9.s64 * 1000;
	// addi r9,r9,500
	ctx.r9.s64 = ctx.r9.s64 + 500;
	// divwu r10,r9,r10
	ctx.r10.u32 = ctx.r9.u32 / ctx.r10.u32;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r10.u32);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r10.u32);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
loc_830166A8:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830166c8
	if (ctx.cr0.eq) goto loc_830166C8;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830166c8
	if (!ctx.cr6.gt) goto loc_830166C8;
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
loc_830166C8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830166f8
	if (ctx.cr0.eq) goto loc_830166F8;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x830166f8
	if (!ctx.cr6.gt) goto loc_830166F8;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bge cr6,0x830166f8
	if (!ctx.cr6.lt) goto loc_830166F8;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_830166F8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83016718
	if (ctx.cr0.eq) goto loc_83016718;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x83016718
	if (!ctx.cr6.gt) goto loc_83016718;
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
loc_83016718:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83016748
	if (ctx.cr0.eq) goto loc_83016748;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x83016748
	if (!ctx.cr6.gt) goto loc_83016748;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bge cr6,0x83016748
	if (!ctx.cr6.lt) goto loc_83016748;
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_83016748:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,500
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 500, ctx.xer);
	// ble cr6,0x830167ac
	if (!ctx.cr6.gt) goto loc_830167AC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83016774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x830167ac
	if (!ctx.cr0.gt) goto loc_830167AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,87(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 87);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x830167ac
	if (!ctx.cr6.lt) goto loc_830167AC;
	// li r11,64
	ctx.r11.s64 = 64;
	// sth r29,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r29.u16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// bl 0x83016020
	ctx.lr = 0x830167AC;
	sub_83016020(ctx, base);
loc_830167AC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830167B8"))) PPC_WEAK_FUNC(sub_830167B8);
PPC_FUNC_IMPL(__imp__sub_830167B8) {
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
	// lwz r31,76(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r30,r31,440
	ctx.r30.s64 = ctx.r31.s64 + 440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830106a0
	ctx.lr = 0x830167DC;
	sub_830106A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8301683c
	if (ctx.cr0.eq) goto loc_8301683C;
	// bl 0x83010640
	ctx.lr = 0x830167E8;
	sub_83010640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83016580
	ctx.lr = 0x830167F4;
	sub_83016580(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83016830
	if (!ctx.cr6.gt) goto loc_83016830;
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83016830
	if (ctx.cr0.eq) goto loc_83016830;
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x83016830
	if (!ctx.cr6.gt) goto loc_83016830;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83016830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83016830:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830107f8
	ctx.lr = 0x83016838;
	sub_830107F8(ctx, base);
	// b 0x83016848
	goto loc_83016848;
loc_8301683C:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
loc_83016848:
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

__attribute__((alias("__imp__sub_83016860"))) PPC_WEAK_FUNC(sub_83016860);
PPC_FUNC_IMPL(__imp__sub_83016860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x83016868;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8301c188
	ctx.lr = 0x8301687C;
	sub_8301C188(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r4,28263
	ctx.r4.s64 = 1852243968;
	// li r3,504
	ctx.r3.s64 = 504;
	// ori r4,r4,27755
	ctx.r4.u64 = ctx.r4.u64 | 27755;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82217ec8
	ctx.lr = 0x83016894;
	sub_82217EC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830168a4
	if (!ctx.cr0.eq) goto loc_830168A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83016978
	goto loc_83016978;
loc_830168A4:
	// li r5,504
	ctx.r5.s64 = 504;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x830168B4;
	sub_82D5CB60(ctx, base);
	// cmpwi cr6,r29,4096
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4096, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// bge cr6,0x830168cc
	if (!ctx.cr6.lt) goto loc_830168CC;
	// li r29,4096
	ctx.r29.s64 = 4096;
loc_830168CC:
	// lis r4,28263
	ctx.r4.s64 = 1852243968;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,27755
	ctx.r4.u64 = ctx.r4.u64 | 27755;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82217ec8
	ctx.lr = 0x830168E0;
	sub_82217EC8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r3.u32);
	// stw r29,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r29.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x83010640
	ctx.lr = 0x830168F8;
	sub_83010640(ctx, base);
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
	// addi r11,r31,154
	ctx.r11.s64 = ctx.r31.s64 + 154;
	// stb r30,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r30.u8);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r9,200
	ctx.r9.s64 = 200;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
loc_83016928:
	// sth r9,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r9.u16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// sth r30,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r30.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x83016928
	if (!ctx.cr0.eq) goto loc_83016928;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// addi r4,r11,-12720
	ctx.r4.s64 = ctx.r11.s64 + -12720;
	// bl 0x83010650
	ctx.lr = 0x83016954;
	sub_83010650(ctx, base);
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,26552
	ctx.r4.s64 = ctx.r11.s64 + 26552;
	// stw r31,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83016970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
loc_83016978:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83016980"))) PPC_WEAK_FUNC(sub_83016980);
PPC_FUNC_IMPL(__imp__sub_83016980) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830169A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830169c4
	if (ctx.cr6.eq) goto loc_830169C4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830169C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830169C4:
	// lis r4,28263
	ctx.r4.s64 = 1852243968;
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r4,r4,27755
	ctx.r4.u64 = ctx.r4.u64 | 27755;
	// bl 0x822138a8
	ctx.lr = 0x830169D8;
	sub_822138A8(ctx, base);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// bl 0x83010680
	ctx.lr = 0x830169E0;
	sub_83010680(ctx, base);
	// lis r4,28263
	ctx.r4.s64 = 1852243968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r4,r4,27755
	ctx.r4.u64 = ctx.r4.u64 | 27755;
	// bl 0x822138a8
	ctx.lr = 0x830169F4;
	sub_822138A8(ctx, base);
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

__attribute__((alias("__imp__sub_83016A08"))) PPC_WEAK_FUNC(sub_83016A08);
PPC_FUNC_IMPL(__imp__sub_83016A08) {
	PPC_FUNC_PROLOGUE();
	// stw r4,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r4.u32);
	// stw r5,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016A18"))) PPC_WEAK_FUNC(sub_83016A18);
PPC_FUNC_IMPL(__imp__sub_83016A18) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
loc_83016A34:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83010640
	ctx.lr = 0x83016A40;
	sub_83010640(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83016a34
	if (!ctx.cr6.eq) goto loc_83016A34;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83016A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// beq cr6,0x83016a88
	if (ctx.cr6.eq) goto loc_83016A88;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x83016a8c
	if (!ctx.cr6.eq) goto loc_83016A8C;
loc_83016A88:
	// li r10,1
	ctx.r10.s64 = 1;
loc_83016A8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r10.u8);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83016AC8"))) PPC_WEAK_FUNC(sub_83016AC8);
PPC_FUNC_IMPL(__imp__sub_83016AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x83016AD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83010640
	ctx.lr = 0x83016AE8;
	sub_83010640(ctx, base);
	// addi r26,r29,440
	ctx.r26.s64 = ctx.r29.s64 + 440;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83010748
	ctx.lr = 0x83016AF8;
	sub_83010748(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x83016b60
	if (!ctx.cr6.gt) goto loc_83016B60;
loc_83016B00:
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x83016b20
	if (!ctx.cr6.eq) goto loc_83016B20;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83016B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x83016b38
	goto loc_83016B38;
loc_83016B20:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83016020
	ctx.lr = 0x83016B30;
	sub_83016020(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x83016b60
	if (!ctx.cr0.gt) goto loc_83016B60;
loc_83016B38:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// addi r11,r11,23
	ctx.r11.s64 = ctx.r11.s64 + 23;
	// rlwinm r11,r11,0,17,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFC;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x83016b60
	if (ctx.cr6.eq) goto loc_83016B60;
	// subf. r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bgt 0x83016b00
	if (ctx.cr0.gt) goto loc_83016B00;
loc_83016B60:
	// lwz r11,480(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83016b78
	if (!ctx.cr6.gt) goto loc_83016B78;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83016580
	ctx.lr = 0x83016B78;
	sub_83016580(ctx, base);
loc_83016B78:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830107f8
	ctx.lr = 0x83016B80;
	sub_830107F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83016B90"))) PPC_WEAK_FUNC(sub_83016B90);
PPC_FUNC_IMPL(__imp__sub_83016B90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x83016bb0
	if (!ctx.cr6.gt) goto loc_83016BB0;
	// lwz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// b 0x83016bb4
	goto loc_83016BB4;
loc_83016BB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83016BB4:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016BC0"))) PPC_WEAK_FUNC(sub_83016BC0);
PPC_FUNC_IMPL(__imp__sub_83016BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x83016BC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83010640
	ctx.lr = 0x83016BDC;
	sub_83010640(ctx, base);
	// addi r27,r31,440
	ctx.r27.s64 = ctx.r31.s64 + 440;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83010748
	ctx.lr = 0x83016BEC;
	sub_83010748(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83016c0c
	if (!ctx.cr6.eq) goto loc_83016C0C;
loc_83016BF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83016528
	ctx.lr = 0x83016C04;
	sub_83016528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x83016bf8
	if (ctx.cr0.gt) goto loc_83016BF8;
loc_83016C0C:
	// lwz r5,432(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x83016c20
	if (!ctx.cr0.eq) goto loc_83016C20;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83016cc0
	goto loc_83016CC0;
loc_83016C20:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x83016c30
	if (!ctx.cr6.eq) goto loc_83016C30;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83016C30:
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x83016c58
	if (ctx.cr6.gt) goto loc_83016C58;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83016c4c
	if (ctx.cr6.eq) goto loc_83016C4C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// bl 0x82d5c630
	ctx.lr = 0x83016C4C;
	sub_82D5C630(ctx, base);
loc_83016C4C:
	// lwz r30,432(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83016cbc
	goto loc_83016CBC;
loc_83016C58:
	// lwz r4,428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x83016cc0
	if (ctx.cr6.gt) goto loc_83016CC0;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
loc_83016C70:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x83016c70
	if (!ctx.cr6.gt) goto loc_83016C70;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x83016cc0
	if (!ctx.cr6.gt) goto loc_83016CC0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83016ca0
	if (ctx.cr6.eq) goto loc_83016CA0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d5c630
	ctx.lr = 0x83016CA0;
	sub_82D5C630(ctx, base);
loc_83016CA0:
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r5,r30,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x82d5d610
	ctx.lr = 0x83016CB4;
	sub_82D5D610(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_83016CBC:
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
loc_83016CC0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830107f8
	ctx.lr = 0x83016CC8;
	sub_830107F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83016CD8"))) PPC_WEAK_FUNC(sub_83016CD8);
PPC_FUNC_IMPL(__imp__sub_83016CD8) {
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
	// lis r10,29541
	ctx.r10.s64 = 1935998976;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r10,28260
	ctx.r10.u64 = ctx.r10.u64 | 28260;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83016d24
	if (!ctx.cr6.eq) goto loc_83016D24;
	// stw r5,500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 500, ctx.r5.u32);
loc_83016D08:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83016D0C:
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
loc_83016D24:
	// lis r10,29553
	ctx.r10.s64 = 1936785408;
	// ori r30,r10,30053
	ctx.r30.u64 = ctx.r10.u64 | 30053;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x83016d4c
	if (ctx.cr6.eq) goto loc_83016D4C;
	// lis r10,29548
	ctx.r10.s64 = 1936457728;
	// ori r10,r10,25966
	ctx.r10.u64 = ctx.r10.u64 | 25966;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x83016d4c
	if (ctx.cr6.eq) goto loc_83016D4C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83016d0c
	goto loc_83016D0C;
loc_83016D4C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83016D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x83016d0c
	if (!ctx.cr6.eq) goto loc_83016D0C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x83016d08
	if (!ctx.cr6.gt) goto loc_83016D08;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x83016d0c
	goto loc_83016D0C;
}

__attribute__((alias("__imp__sub_83016D88"))) PPC_WEAK_FUNC(sub_83016D88);
PPC_FUNC_IMPL(__imp__sub_83016D88) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi. r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// beq 0x83016dc8
	if (ctx.cr0.eq) goto loc_83016DC8;
	// subfic r4,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r4.s64 = 4 - ctx.r11.s64;
	// bl 0x83020dc0
	ctx.lr = 0x83016DBC;
	sub_83020DC0(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_83016DC8:
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

__attribute__((alias("__imp__sub_83016DE0"))) PPC_WEAK_FUNC(sub_83016DE0);
PPC_FUNC_IMPL(__imp__sub_83016DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x83016DE8;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r25,r31,44
	ctx.r25.s64 = ctx.r31.s64 + 44;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// bl 0x83010748
	ctx.lr = 0x83016E08;
	sub_83010748(ctx, base);
	// addi r24,r31,84
	ctx.r24.s64 = ctx.r31.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83010748
	ctx.lr = 0x83016E14;
	sub_83010748(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x83016ec0
	if (!ctx.cr0.gt) goto loc_83016EC0;
	// addi r30,r31,132
	ctx.r30.s64 = ctx.r31.s64 + 132;
loc_83016E30:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x83016ea8
	if (!ctx.cr6.eq) goto loc_83016EA8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x83016ea4
	if (ctx.cr6.eq) goto loc_83016EA4;
	// cmpwi cr6,r22,16
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 16, ctx.xer);
	// blt cr6,0x83016ea4
	if (ctx.cr6.lt) goto loc_83016EA4;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r29,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r29.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// bl 0x82d5c630
	ctx.lr = 0x83016EA4;
	sub_82D5C630(ctx, base);
loc_83016EA4:
	// lwz r28,-4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
loc_83016EA8:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,2924
	ctx.r30.s64 = ctx.r30.s64 + 2924;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83016e30
	if (ctx.cr6.lt) goto loc_83016E30;
loc_83016EC0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830107f8
	ctx.lr = 0x83016EC8;
	sub_830107F8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830107f8
	ctx.lr = 0x83016ED0;
	sub_830107F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83016EE0"))) PPC_WEAK_FUNC(sub_83016EE0);
PPC_FUNC_IMPL(__imp__sub_83016EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x83016EE8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// addi r31,r30,1659
	ctx.r31.s64 = ctx.r30.s64 + 1659;
	// lbz r11,42(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 42);
	// addi r26,r30,1675
	ctx.r26.s64 = ctx.r30.s64 + 1675;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x83016fa4
	if (!ctx.cr0.gt) goto loc_83016FA4;
loc_83016F18:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// or r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 | ctx.r11.u64;
	// lbz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x83016f88
	if (!ctx.cr6.eq) goto loc_83016F88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d5c630
	ctx.lr = 0x83016F54;
	sub_82D5C630(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r25,r29,r25
	ctx.r25.u64 = ctx.r29.u64 + ctx.r25.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83016F88:
	// lbz r11,42(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 42);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83016f18
	if (ctx.cr6.lt) goto loc_83016F18;
loc_83016FA4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83016FB0"))) PPC_WEAK_FUNC(sub_83016FB0);
PPC_FUNC_IMPL(__imp__sub_83016FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x83016FB8;
	__savegprlr_23(ctx, base);
	// stwu r1,-1456(r1)
	ea = -1456 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r23,r31,44
	ctx.r23.s64 = ctx.r31.s64 + 44;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83010748
	ctx.lr = 0x83016FD0;
	sub_83010748(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301720c
	if (ctx.cr6.eq) goto loc_8301720C;
	// lha r11,40(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 40));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8301720c
	if (!ctx.cr0.gt) goto loc_8301720C;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,2
	ctx.r9.s64 = 2;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// li r5,1264
	ctx.r5.s64 = 1264;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// sth r30,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r30.u16);
	// sth r9,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r9.u16);
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stb r11,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r9,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r9.u8);
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// bl 0x82d5cb60
	ctx.lr = 0x83017044;
	sub_82D5CB60(ctx, base);
	// addi r11,r1,114
	ctx.r11.s64 = ctx.r1.s64 + 114;
	// lbz r9,42(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1656);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r29,r10
	ctx.r28.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// beq 0x830170e4
	if (ctx.cr0.eq) goto loc_830170E4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r8,r11,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// sth r30,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r30.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r10,1652(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1652);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bl 0x82d5c630
	ctx.lr = 0x830170C0;
	sub_82D5C630(ctx, base);
	// li r11,103
	ctx.r11.s64 = 103;
	// stb r30,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r30.u8);
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r28,6
	ctx.r11.s64 = ctx.r28.s64 + 6;
	// li r28,6
	ctx.r28.s64 = 6;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x830170e8
	goto loc_830170E8;
loc_830170E4:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_830170E8:
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83016ee0
	ctx.lr = 0x83017104;
	sub_83016EE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x83016ee0
	ctx.lr = 0x83017128;
	sub_83016EE0(ctx, base);
	// lwz r9,20(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r27,r11,-2
	ctx.r27.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r28,r10,r29
	ctx.r28.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bne cr6,0x83017180
	if (!ctx.cr6.eq) goto loc_83017180;
	// addi r26,r31,84
	ctx.r26.s64 = ctx.r31.s64 + 84;
	// addi r25,r31,88
	ctx.r25.s64 = ctx.r31.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,114
	ctx.r4.s64 = ctx.r1.s64 + 114;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// bl 0x83020d58
	ctx.lr = 0x8301716C;
	sub_83020D58(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83016d88
	ctx.lr = 0x8301717C;
	sub_83016D88(ctx, base);
	// b 0x83017198
	goto loc_83017198;
loc_83017180:
	// clrlwi r3,r27,16
	ctx.r3.u64 = ctx.r27.u32 & 0xFFFF;
	// bl 0x83014b10
	ctx.lr = 0x83017188;
	sub_83014B10(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
loc_83017198:
	// lbz r11,42(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lbz r10,1656(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1656);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lhz r7,612(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 612);
	// lhz r8,614(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 614);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lwz r10,604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// sth r30,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r30.u16);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r30,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r30.u8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sth r7,612(r31)
	PPC_STORE_U16(ctx.r31.u32 + 612, ctx.r7.u16);
	// sth r9,614(r31)
	PPC_STORE_U16(ctx.r31.u32 + 614, ctx.r9.u16);
	// stw r10,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r10.u32);
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// bl 0x830107f8
	ctx.lr = 0x830171EC;
	sub_830107F8(ctx, base);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x830136d0
	ctx.lr = 0x83017208;
	sub_830136D0(ctx, base);
	// b 0x83017214
	goto loc_83017214;
loc_8301720C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830107f8
	ctx.lr = 0x83017214;
	sub_830107F8(ctx, base);
loc_83017214:
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83017220"))) PPC_WEAK_FUNC(sub_83017220);
PPC_FUNC_IMPL(__imp__sub_83017220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x83017228;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301730c
	if (ctx.cr6.eq) goto loc_8301730C;
	// cmplwi cr6,r30,1260
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1260, ctx.xer);
	// bge cr6,0x8301730c
	if (!ctx.cr6.lt) goto loc_8301730C;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83010748
	ctx.lr = 0x8301725C;
	sub_83010748(ctx, base);
	// lha r11,40(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 40));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,1264
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1264, ctx.xer);
	// bgt cr6,0x83017278
	if (ctx.cr6.gt) goto loc_83017278;
	// lbz r11,42(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x83017284
	if (!ctx.cr6.eq) goto loc_83017284;
loc_83017278:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83016fb0
	ctx.lr = 0x83017284;
	sub_83016FB0(ctx, base);
loc_83017284:
	// lhz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830172a8
	if (!ctx.cr6.eq) goto loc_830172A8;
	// li r11,18
	ctx.r11.s64 = 18;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1657
	ctx.r3.s64 = ctx.r31.s64 + 1657;
	// sth r11,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r11.u16);
	// bl 0x82d5cb60
	ctx.lr = 0x830172A8;
	sub_82D5CB60(ctx, base);
loc_830172A8:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r30,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// or r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 | ctx.r27.u64;
	// lbz r11,42(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,1659(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1659, ctx.r10.u8);
	// stb r9,1660(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1660, ctx.r9.u8);
	// lha r11,40(r31)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 40));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1657
	ctx.r3.s64 = ctx.r11.s64 + 1657;
	// bl 0x82d5c630
	ctx.lr = 0x830172E4;
	sub_82D5C630(ctx, base);
	// lhz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// lbz r9,42(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// sth r10,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r10.u16);
	// stb r11,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r11.u8);
	// bl 0x830107f8
	ctx.lr = 0x83017304;
	sub_830107F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x83017310
	goto loc_83017310;
loc_8301730C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83017310:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83017318"))) PPC_WEAK_FUNC(sub_83017318);
PPC_FUNC_IMPL(__imp__sub_83017318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x83017320;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x83017460
	if (!ctx.cr6.eq) goto loc_83017460;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x83017460
	if (ctx.cr6.eq) goto loc_83017460;
	// lis r4,28786
	ctx.r4.s64 = 1886519296;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28532
	ctx.r4.u64 = ctx.r4.u64 | 28532;
	// bl 0x83013920
	ctx.lr = 0x8301736C;
	sub_83013920(ctx, base);
	// cmpwi cr6,r3,254
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 254, ctx.xer);
	// bne cr6,0x8301737c
	if (!ctx.cr6.eq) goto loc_8301737C;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r24,r24,-2
	ctx.r24.s64 = ctx.r24.s64 + -2;
loc_8301737C:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r28,r30,44
	ctx.r28.s64 = ctx.r30.s64 + 44;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r27,r8,r7
	ctx.r27.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x83010748
	ctx.lr = 0x830173C0;
	sub_83010748(ctx, base);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x83017450
	if (!ctx.cr0.gt) goto loc_83017450;
	// addi r11,r30,136
	ctx.r11.s64 = ctx.r30.s64 + 136;
loc_830173D8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8301742c
	if (!ctx.cr6.eq) goto loc_8301742C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r26,r11,-12
	ctx.r26.s64 = ctx.r11.s64 + -12;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8301741c
	if (!ctx.cr6.eq) goto loc_8301741C;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830173F8:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x83017418
	if (ctx.cr6.eq) goto loc_83017418;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x830173f8
	if (ctx.cr6.lt) goto loc_830173F8;
	// b 0x8301741c
	goto loc_8301741C;
loc_83017418:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8301741C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,2924
	ctx.r11.s64 = ctx.r11.s64 + 2924;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x830173d8
	if (ctx.cr6.lt) goto loc_830173D8;
loc_8301742C:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x83017450
	if (!ctx.cr6.eq) goto loc_83017450;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83017220
	ctx.lr = 0x8301744C;
	sub_83017220(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_83017450:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830107f8
	ctx.lr = 0x83017458;
	sub_830107F8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x83017464
	goto loc_83017464;
loc_83017460:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83017464:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83017470"))) PPC_WEAK_FUNC(sub_83017470);
PPC_FUNC_IMPL(__imp__sub_83017470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x83017478;
	__savegprlr_22(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// bl 0x82d5c630
	ctx.lr = 0x83017498;
	sub_82D5C630(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r23,r28,346
	ctx.r23.s64 = ctx.r28.s64 + 346;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,258
	ctx.r5.s64 = 258;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// or r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82d5c630
	ctx.lr = 0x830174BC;
	sub_82D5C630(ctx, base);
	// addi r24,r28,86
	ctx.r24.s64 = ctx.r28.s64 + 86;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83017500
	if (ctx.cr6.eq) goto loc_83017500;
	// subf. r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x830174e8
	if (!ctx.cr0.lt) goto loc_830174E8;
	// cmpwi cr6,r30,-16384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -16384, ctx.xer);
	// blt cr6,0x830174e4
	if (ctx.cr6.lt) goto loc_830174E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830175d4
	goto loc_830175D4;
loc_830174E4:
	// addis r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 65536;
loc_830174E8:
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83020dc0
	ctx.lr = 0x830174F4;
	sub_83020DC0(ctx, base);
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r11,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r11.u16);
loc_83017500:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// ble cr6,0x83017574
	if (!ctx.cr6.gt) goto loc_83017574;
loc_8301751C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83020d58
	ctx.lr = 0x8301752C;
	sub_83020D58(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// rotlwi r9,r10,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r8,r11,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lbz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 2;
	// beq 0x83017564
	if (ctx.cr0.eq) goto loc_83017564;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_83017564:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8301751c
	if (ctx.cr6.lt) goto loc_8301751C;
loc_83017574:
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x83017594
	if (ctx.cr6.eq) goto loc_83017594;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301758C;
	sub_82D5C630(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x830175d4
	goto loc_830175D4;
loc_83017594:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x830175b0
	if (!ctx.cr6.gt) goto loc_830175B0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83020d58
	ctx.lr = 0x830175AC;
	sub_83020D58(ctx, base);
	// add r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 + ctx.r29.u64;
loc_830175B0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,258
	ctx.r5.s64 = 258;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d5c630
	ctx.lr = 0x830175C0;
	sub_82D5C630(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83016d88
	ctx.lr = 0x830175D0;
	sub_83016D88(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_830175D4:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830175E0"))) PPC_WEAK_FUNC(sub_830175E0);
PPC_FUNC_IMPL(__imp__sub_830175E0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// addic. r9,r4,-2
	ctx.xer.ca = ctx.r4.u32 > 1;
	ctx.r9.s64 = ctx.r4.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x83017620
	if (!ctx.cr0.gt) goto loc_83017620;
loc_830175F4:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rotlwi r7,r7,4
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x830175f4
	if (ctx.cr6.lt) goto loc_830175F4;
loc_83017620:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017630"))) PPC_WEAK_FUNC(sub_83017630);
PPC_FUNC_IMPL(__imp__sub_83017630) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8301767c
	if (!ctx.cr6.gt) goto loc_8301767C;
loc_83017648:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// cmplwi cr6,r7,7
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 7, ctx.xer);
	// beq cr6,0x83017684
	if (ctx.cr6.eq) goto loc_83017684;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x83017648
	if (ctx.cr6.lt) goto loc_83017648;
loc_8301767C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83017684:
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017690"))) PPC_WEAK_FUNC(sub_83017690);
PPC_FUNC_IMPL(__imp__sub_83017690) {
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
	// lis r4,29540
	ctx.r4.s64 = 1935933440;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,25442
	ctx.r4.u64 = ctx.r4.u64 | 25442;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83013cb8
	ctx.lr = 0x830176C0;
	sub_83013CB8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83013350
	ctx.lr = 0x830176C8;
	sub_83013350(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x83010680
	ctx.lr = 0x830176D0;
	sub_83010680(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x83010680
	ctx.lr = 0x830176D8;
	sub_83010680(ctx, base);
	// lis r4,28788
	ctx.r4.s64 = 1886650368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r4,r4,30062
	ctx.r4.u64 = ctx.r4.u64 | 30062;
	// bl 0x822138a8
	ctx.lr = 0x830176EC;
	sub_822138A8(ctx, base);
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

__attribute__((alias("__imp__sub_83017700"))) PPC_WEAK_FUNC(sub_83017700);
PPC_FUNC_IMPL(__imp__sub_83017700) {
	PPC_FUNC_PROLOGUE();
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017710"))) PPC_WEAK_FUNC(sub_83017710);
PPC_FUNC_IMPL(__imp__sub_83017710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x83017718;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r27,r30,44
	ctx.r27.s64 = ctx.r30.s64 + 44;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83010748
	ctx.lr = 0x83017734;
	sub_83010748(ctx, base);
	// addi r26,r30,84
	ctx.r26.s64 = ctx.r30.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83010748
	ctx.lr = 0x83017740;
	sub_83010748(ctx, base);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8301777c
	if (!ctx.cr0.gt) goto loc_8301777C;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r30,124
	ctx.r11.s64 = ctx.r30.s64 + 124;
loc_83017758:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83017868
	if (ctx.cr6.eq) goto loc_83017868;
	// lbz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2924
	ctx.r11.s64 = ctx.r11.s64 + 2924;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x83017758
	if (ctx.cr6.lt) goto loc_83017758;
loc_8301777C:
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830178d0
	if (ctx.cr6.eq) goto loc_830178D0;
	// mulli r11,r10,2924
	ctx.r11.s64 = ctx.r10.s64 * 2924;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r11,124
	ctx.r31.s64 = ctx.r11.s64 + 124;
	// li r5,2924
	ctx.r5.s64 = 2924;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r10.u8);
	// bl 0x82d5cb60
	ctx.lr = 0x830177B0;
	sub_82D5CB60(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5c630
	ctx.lr = 0x830177C0;
	sub_82D5C630(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// addi r4,r11,-12660
	ctx.r4.s64 = ctx.r11.s64 + -12660;
	// bl 0x83010650
	ctx.lr = 0x830177D0;
	sub_83010650(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830177D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x830177d8
	if (!ctx.cr6.eq) goto loc_830177D8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x83020cb8
	ctx.lr = 0x83017804;
	sub_83020CB8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,628
	ctx.r3.s64 = ctx.r31.s64 + 628;
	// bl 0x8301b690
	ctx.lr = 0x83017814;
	sub_8301B690(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1653(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1653, ctx.r11.u8);
	// stb r11,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r11.u8);
	// stb r11,1656(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1656, ctx.r11.u8);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8301784c
	if (!ctx.cr0.eq) goto loc_8301784C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
loc_8301784C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830107f8
	ctx.lr = 0x83017854;
	sub_830107F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830107f8
	ctx.lr = 0x8301785C;
	sub_830107F8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_83017860:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
loc_83017868:
	// lbz r10,1653(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1653);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r11,628
	ctx.r7.s64 = ctx.r11.s64 + 628;
	// stb r10,1653(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1653, ctx.r10.u8);
loc_83017884:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8301789c
	if (!ctx.cr6.eq) goto loc_8301789C;
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8301789c
	if (!ctx.cr6.eq) goto loc_8301789C;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_8301789C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x83017884
	if (ctx.cr6.lt) goto loc_83017884;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x830178d0
	if (ctx.cr6.eq) goto loc_830178D0;
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,128
	ctx.r5.s64 = 128;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,628
	ctx.r3.s64 = ctx.r11.s64 + 628;
	// bl 0x8301b690
	ctx.lr = 0x830178CC;
	sub_8301B690(ctx, base);
	// b 0x830178d4
	goto loc_830178D4;
loc_830178D0:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_830178D4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830107f8
	ctx.lr = 0x830178DC;
	sub_830107F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830107f8
	ctx.lr = 0x830178E4;
	sub_830107F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x83017860
	goto loc_83017860;
}

__attribute__((alias("__imp__sub_830178F0"))) PPC_WEAK_FUNC(sub_830178F0);
PPC_FUNC_IMPL(__imp__sub_830178F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x830178F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r26,r30,44
	ctx.r26.s64 = ctx.r30.s64 + 44;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83010748
	ctx.lr = 0x83017914;
	sub_83010748(ctx, base);
	// addi r25,r30,84
	ctx.r25.s64 = ctx.r30.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83010748
	ctx.lr = 0x83017920;
	sub_83010748(ctx, base);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r30,124
	ctx.r31.s64 = ctx.r30.s64 + 124;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x83017abc
	if (!ctx.cr0.gt) goto loc_83017ABC;
loc_83017934:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8301795c
	if (ctx.cr6.eq) goto loc_8301795C;
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,2924
	ctx.r31.s64 = ctx.r31.s64 + 2924;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83017934
	if (ctx.cr6.lt) goto loc_83017934;
	// b 0x83017abc
	goto loc_83017ABC;
loc_8301795C:
	// lbz r11,1653(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1653);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830179b8
	if (!ctx.cr6.eq) goto loc_830179B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83016fb0
	ctx.lr = 0x83017974;
	sub_83016FB0(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x83010680
	ctx.lr = 0x8301797C;
	sub_83010680(ctx, base);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x830179a8
	if (ctx.cr6.eq) goto loc_830179A8;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r4,r31,2924
	ctx.r4.s64 = ctx.r31.s64 + 2924;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r5,r11,2924
	ctx.r5.s64 = ctx.r11.s64 * 2924;
	// bl 0x82d5d610
	ctx.lr = 0x830179A8;
	sub_82D5D610(ctx, base);
loc_830179A8:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// b 0x83017abc
	goto loc_83017ABC;
loc_830179B8:
	// addi r28,r31,628
	ctx.r28.s64 = ctx.r31.s64 + 628;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_830179C4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_830179CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x830179f0
	if (ctx.cr0.eq) goto loc_830179F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x830179cc
	if (ctx.cr6.eq) goto loc_830179CC;
loc_830179F0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x83017a0c
	if (ctx.cr0.eq) goto loc_83017A0C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x830179c4
	if (ctx.cr6.lt) goto loc_830179C4;
	// b 0x83017a24
	goto loc_83017A24;
loc_83017A0C:
	// rlwinm r11,r30,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,128
	ctx.r5.s64 = 128;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,628
	ctx.r3.s64 = ctx.r11.s64 + 628;
	// bl 0x82d5cb60
	ctx.lr = 0x83017A24;
	sub_82D5CB60(ctx, base);
loc_83017A24:
	// lbz r10,1654(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1654);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83017ab0
	if (!ctx.cr6.eq) goto loc_83017AB0;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83017A3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83017a5c
	if (!ctx.cr6.eq) goto loc_83017A5C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x83017a3c
	if (ctx.cr6.lt) goto loc_83017A3C;
	// b 0x83017ab0
	goto loc_83017AB0;
loc_83017A5C:
	// rlwinm r11,r29,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,628
	ctx.r4.s64 = ctx.r11.s64 + 628;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83017A70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83017a70
	if (!ctx.cr6.eq) goto loc_83017A70;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83020cb8
	ctx.lr = 0x83017A9C;
	sub_83020CB8(ctx, base);
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r4,r11,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x83020dc0
	ctx.lr = 0x83017AAC;
	sub_83020DC0(ctx, base);
	// stb r29,1654(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1654, ctx.r29.u8);
loc_83017AB0:
	// lbz r11,1653(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1653);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,1653(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1653, ctx.r11.u8);
loc_83017ABC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830107f8
	ctx.lr = 0x83017AC4;
	sub_830107F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830107f8
	ctx.lr = 0x83017ACC;
	sub_830107F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83017AD8"))) PPC_WEAK_FUNC(sub_83017AD8);
PPC_FUNC_IMPL(__imp__sub_83017AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x83017AE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-1680(r1)
	ea = -1680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83017b2c
	if (ctx.cr6.eq) goto loc_83017B2C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83017b1c
	if (ctx.cr6.eq) goto loc_83017B1C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d5c630
	ctx.lr = 0x83017B1C;
	sub_82D5C630(ctx, base);
loc_83017B1C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830175e0
	ctx.lr = 0x83017B28;
	sub_830175E0(ctx, base);
	// b 0x83017c44
	goto loc_83017C44;
loc_83017B2C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d5c630
	ctx.lr = 0x83017B3C;
	sub_82D5C630(ctx, base);
	// lbz r10,352(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 352);
	// lbz r9,353(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 353);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
loc_83017B54:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83017b54
	if (!ctx.cr6.eq) goto loc_83017B54;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83020cb8
	ctx.lr = 0x83017B80;
	sub_83020CB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83017b94
	if (ctx.cr6.eq) goto loc_83017B94;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83020dc0
	ctx.lr = 0x83017B94;
	sub_83020DC0(ctx, base);
loc_83017B94:
	// addi r31,r1,354
	ctx.r31.s64 = ctx.r1.s64 + 354;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// ble cr6,0x83017c00
	if (!ctx.cr6.gt) goto loc_83017C00;
loc_83017BAC:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83020d58
	ctx.lr = 0x83017BBC;
	sub_83020D58(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r10,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r8,r11,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lbz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 2;
	// beq 0x83017bf0
	if (ctx.cr0.eq) goto loc_83017BF0;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_83017BF0:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x83017bac
	if (ctx.cr6.lt) goto loc_83017BAC;
loc_83017C00:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x83017c10
	if (ctx.cr6.eq) goto loc_83017C10;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83017c44
	goto loc_83017C44;
loc_83017C10:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x83017c40
	if (ctx.cr6.eq) goto loc_83017C40;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x83017c30
	if (!ctx.cr6.gt) goto loc_83017C30;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83020d58
	ctx.lr = 0x83017C30;
	sub_83020D58(ctx, base);
loc_83017C30:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d5c630
	ctx.lr = 0x83017C40;
	sub_82D5C630(ctx, base);
loc_83017C40:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_83017C44:
	// addi r1,r1,1680
	ctx.r1.s64 = ctx.r1.s64 + 1680;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83017C50"))) PPC_WEAK_FUNC(sub_83017C50);
PPC_FUNC_IMPL(__imp__sub_83017C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,27760
	ctx.r9.s64 = 1819279360;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r9,29300
	ctx.r9.u64 = ctx.r9.u64 | 29300;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83017c80
	if (!ctx.cr6.eq) goto loc_83017C80;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x83017d54
	goto loc_83017D54;
loc_83017C80:
	// lis r9,29283
	ctx.r9.s64 = 1919090688;
	// ori r9,r9,30323
	ctx.r9.u64 = ctx.r9.u64 | 30323;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83017ccc
	if (!ctx.cr6.eq) goto loc_83017CCC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83017d50
	if (ctx.cr6.eq) goto loc_83017D50;
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// bne cr6,0x83017d50
	if (!ctx.cr6.eq) goto loc_83017D50;
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x83017d50
	if (!ctx.cr6.lt) goto loc_83017D50;
	// mulli r10,r10,2924
	ctx.r10.s64 = ctx.r10.s64 * 2924;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,740
	ctx.r4.s64 = ctx.r11.s64 + 740;
loc_83017CBC:
	// li r5,12
	ctx.r5.s64 = 12;
loc_83017CC0:
	// bl 0x82d5c630
	ctx.lr = 0x83017CC4;
	sub_82D5C630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83017d54
	goto loc_83017D54;
loc_83017CCC:
	// lis r9,29550
	ctx.r9.s64 = 1936588800;
	// ori r9,r9,25715
	ctx.r9.u64 = ctx.r9.u64 | 25715;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83017d0c
	if (!ctx.cr6.eq) goto loc_83017D0C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83017d50
	if (ctx.cr6.eq) goto loc_83017D50;
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// bne cr6,0x83017d50
	if (!ctx.cr6.eq) goto loc_83017D50;
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x83017d50
	if (!ctx.cr6.lt) goto loc_83017D50;
	// mulli r10,r10,2924
	ctx.r10.s64 = ctx.r10.s64 * 2924;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,728
	ctx.r4.s64 = ctx.r11.s64 + 728;
	// b 0x83017cbc
	goto loc_83017CBC;
loc_83017D0C:
	// lis r9,29551
	ctx.r9.s64 = 1936654336;
	// ori r9,r9,25451
	ctx.r9.u64 = ctx.r9.u64 | 25451;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83017d28
	if (!ctx.cr6.eq) goto loc_83017D28;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x83017cc0
	goto loc_83017CC0;
loc_83017D28:
	// lis r9,30324
	ctx.r9.s64 = 1987313664;
	// ori r9,r9,28528
	ctx.r9.u64 = ctx.r9.u64 | 28528;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x83017d50
	if (!ctx.cr6.eq) goto loc_83017D50;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83016de0
	ctx.lr = 0x83017D4C;
	sub_83016DE0(ctx, base);
	// b 0x83017d54
	goto loc_83017D54;
loc_83017D50:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83017D54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017D68"))) PPC_WEAK_FUNC(sub_83017D68);
PPC_FUNC_IMPL(__imp__sub_83017D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83017D70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,25452
	ctx.r11.s64 = 1668022272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,26980
	ctx.r11.u64 = ctx.r11.u64 | 26980;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83017d98
	if (!ctx.cr6.eq) goto loc_83017D98;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x83017e78
	goto loc_83017E78;
loc_83017D98:
	// lis r11,26220
	ctx.r11.s64 = 1718353920;
	// ori r11,r11,29544
	ctx.r11.u64 = ctx.r11.u64 | 29544;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83017e1c
	if (!ctx.cr6.eq) goto loc_83017E1C;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83010748
	ctx.lr = 0x83017DB4;
	sub_83010748(ctx, base);
	// addi r28,r31,84
	ctx.r28.s64 = ctx.r31.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83010748
	ctx.lr = 0x83017DC0;
	sub_83010748(ctx, base);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x83017e04
	if (!ctx.cr0.gt) goto loc_83017E04;
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
loc_83017DD4:
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x83017dfc
	if (ctx.cr6.eq) goto loc_83017DFC;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r4,2924
	ctx.r4.s64 = ctx.r4.s64 + 2924;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83017dd4
	if (ctx.cr6.lt) goto loc_83017DD4;
	// b 0x83017e04
	goto loc_83017E04;
loc_83017DFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83016fb0
	ctx.lr = 0x83017E04;
	sub_83016FB0(ctx, base);
loc_83017E04:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830107f8
	ctx.lr = 0x83017E0C;
	sub_830107F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830107f8
	ctx.lr = 0x83017E14;
	sub_830107F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83017e78
	goto loc_83017E78;
loc_83017E1C:
	// lis r11,28015
	ctx.r11.s64 = 1835991040;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,25701
	ctx.r11.u64 = ctx.r11.u64 | 25701;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83017e38
	if (!ctx.cr6.eq) goto loc_83017E38;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// b 0x83017e78
	goto loc_83017E78;
loc_83017E38:
	// lis r11,29281
	ctx.r11.s64 = 1918959616;
	// ori r11,r11,29797
	ctx.r11.u64 = ctx.r11.u64 | 29797;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83017e50
	if (!ctx.cr6.eq) goto loc_83017E50;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x83017e78
	goto loc_83017E78;
loc_83017E50:
	// lis r11,29552
	ctx.r11.s64 = 1936719872;
	// ori r11,r11,24941
	ctx.r11.u64 = ctx.r11.u64 | 24941;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83017e68
	if (!ctx.cr6.eq) goto loc_83017E68;
	// stb r30,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r30.u8);
	// b 0x83017e78
	goto loc_83017E78;
loc_83017E68:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83013cb8
	ctx.lr = 0x83017E78;
	sub_83013CB8(ctx, base);
loc_83017E78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83017E80"))) PPC_WEAK_FUNC(sub_83017E80);
PPC_FUNC_IMPL(__imp__sub_83017E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x83017E88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83010640
	ctx.lr = 0x83017E94;
	sub_83010640(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r10,r10,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r10.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83017f10
	if (ctx.cr6.lt) goto loc_83017F10;
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83010748
	ctx.lr = 0x83017EB8;
	sub_83010748(ctx, base);
	// addi r27,r31,84
	ctx.r27.s64 = ctx.r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83010748
	ctx.lr = 0x83017EC4;
	sub_83010748(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x83017efc
	if (!ctx.cr0.gt) goto loc_83017EFC;
	// addi r29,r31,124
	ctx.r29.s64 = ctx.r31.s64 + 124;
loc_83017ED8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83016fb0
	ctx.lr = 0x83017EE4;
	sub_83016FB0(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r29,r29,2924
	ctx.r29.s64 = ctx.r29.s64 + 2924;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83017ed8
	if (ctx.cr6.lt) goto loc_83017ED8;
loc_83017EFC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830107f8
	ctx.lr = 0x83017F04;
	sub_830107F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830107f8
	ctx.lr = 0x83017F0C;
	sub_830107F8(ctx, base);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
loc_83017F10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83017F18"))) PPC_WEAK_FUNC(sub_83017F18);
PPC_FUNC_IMPL(__imp__sub_83017F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x83017F20;
	__savegprlr_24(ctx, base);
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r28,r31,628
	ctx.r28.s64 = ctx.r31.s64 + 628;
loc_83017F44:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83017f74
	if (ctx.cr6.eq) goto loc_83017F74;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83017ad8
	ctx.lr = 0x83017F6C;
	sub_83017AD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt 0x83017f8c
	if (ctx.cr0.gt) goto loc_83017F8C;
loc_83017F74:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,128
	ctx.r28.s64 = ctx.r28.s64 + 128;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x83017f44
	if (ctx.cr6.lt) goto loc_83017F44;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x83018074
	if (!ctx.cr6.gt) goto loc_83018074;
loc_83017F8C:
	// lbz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1652);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83017fe4
	if (ctx.cr0.eq) goto loc_83017FE4;
	// rlwinm r11,r30,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,628
	ctx.r4.s64 = ctx.r11.s64 + 628;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83017FAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83017fac
	if (!ctx.cr6.eq) goto loc_83017FAC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,346
	ctx.r3.s64 = ctx.r31.s64 + 346;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83020cb8
	ctx.lr = 0x83017FD4;
	sub_83020CB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_83017FD8:
	// stb r30,1655(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1655, ctx.r30.u8);
	// sth r24,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r24.u16);
	// b 0x83018078
	goto loc_83018078;
loc_83017FE4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83017630
	ctx.lr = 0x83017FF4;
	sub_83017630(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83018074
	if (ctx.cr0.eq) goto loc_83018074;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,3(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83018074
	if (!ctx.cr6.eq) goto loc_83018074;
	// rlwinm r11,r30,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,628
	ctx.r4.s64 = ctx.r11.s64 + 628;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83018044:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83018044
	if (!ctx.cr6.eq) goto loc_83018044;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r31,346
	ctx.r3.s64 = ctx.r31.s64 + 346;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83020cb8
	ctx.lr = 0x8301806C;
	sub_83020CB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83017fd8
	goto loc_83017FD8;
loc_83018074:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83018078:
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018080"))) PPC_WEAK_FUNC(sub_83018080);
PPC_FUNC_IMPL(__imp__sub_83018080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a8
	ctx.lr = 0x83018088;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r21,r30,84
	ctx.r21.s64 = ctx.r30.s64 + 84;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x83010748
	ctx.lr = 0x830180B0;
	sub_83010748(ctx, base);
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// li r20,0
	ctx.r20.s64 = 0;
	// lbz r10,3(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// lbz r9,6(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// or r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,7(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 7);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 | ctx.r10.u64;
	// extsb. r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x83018158
	if (!ctx.cr0.gt) goto loc_83018158;
	// addi r28,r30,132
	ctx.r28.s64 = ctx.r30.s64 + 132;
loc_83018100:
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x83018140
	if (!ctx.cr6.eq) goto loc_83018140;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x83018140
	if (!ctx.cr6.eq) goto loc_83018140;
	// lbz r11,1644(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1644);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83018158
	if (!ctx.cr0.eq) goto loc_83018158;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83017f18
	ctx.lr = 0x83018138;
	sub_83017F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83018158
	if (!ctx.cr0.eq) goto loc_83018158;
loc_83018140:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,2924
	ctx.r28.s64 = ctx.r28.s64 + 2924;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83018100
	if (ctx.cr6.lt) goto loc_83018100;
loc_83018158:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830181b8
	if (!ctx.cr6.eq) goto loc_830181B8;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x830181b8
	if (!ctx.cr6.gt) goto loc_830181B8;
	// addi r28,r30,124
	ctx.r28.s64 = ctx.r30.s64 + 124;
loc_83018178:
	// lbz r11,1652(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1652);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830181a0
	if (!ctx.cr0.eq) goto loc_830181A0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83017f18
	ctx.lr = 0x83018198;
	sub_83017F18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830181b8
	if (!ctx.cr0.eq) goto loc_830181B8;
loc_830181A0:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,2924
	ctx.r28.s64 = ctx.r28.s64 + 2924;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x83018178
	if (ctx.cr6.lt) goto loc_83018178;
loc_830181B8:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x830182f4
	if (!ctx.cr6.lt) goto loc_830182F4;
	// mulli r11,r31,2924
	ctx.r11.s64 = ctx.r31.s64 * 2924;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,124
	ctx.r31.s64 = ctx.r11.s64 + 124;
	// lbz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1652);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830181f0
	if (!ctx.cr0.eq) goto loc_830181F0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// sth r25,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r25.u16);
	// stb r10,1652(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1652, ctx.r10.u8);
loc_830181F0:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d5c630
	ctx.lr = 0x83018200;
	sub_82D5C630(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83018220
	if (!ctx.cr6.eq) goto loc_83018220;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83017470
	ctx.lr = 0x8301821C;
	sub_83017470(ctx, base);
	// b 0x8301822c
	goto loc_8301822C;
loc_83018220:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830175e0
	ctx.lr = 0x8301822C;
	sub_830175E0(ctx, base);
loc_8301822C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x830182dc
	if (!ctx.cr6.gt) goto loc_830182DC;
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,624(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 624);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lhz r9,626(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 626);
	// lwz r10,616(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// sth r8,624(r31)
	PPC_STORE_U16(ctx.r31.u32 + 624, ctx.r8.u16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r9,626(r31)
	PPC_STORE_U16(ctx.r31.u32 + 626, ctx.r9.u16);
	// stw r10,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r10.u32);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// bl 0x83017630
	ctx.lr = 0x83018284;
	sub_83017630(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83018294
	if (ctx.cr0.eq) goto loc_83018294;
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// b 0x830182a4
	goto loc_830182A4;
loc_83018294:
	// lbz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1656);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830182b0
	if (ctx.cr0.eq) goto loc_830182B0;
	// lbz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1652);
loc_830182A4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830182b0
	if (!ctx.cr6.eq) goto loc_830182B0;
	// stb r20,1656(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1656, ctx.r20.u8);
loc_830182B0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r10.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r10.u8);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// stb r10,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r10.u8);
	// b 0x830182f8
	goto loc_830182F8;
loc_830182DC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83017f18
	ctx.lr = 0x830182F0;
	sub_83017F18(ctx, base);
	// b 0x830182f8
	goto loc_830182F8;
loc_830182F4:
	// li r28,-2
	ctx.r28.s64 = -2;
loc_830182F8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830107f8
	ctx.lr = 0x83018300;
	sub_830107F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82d5c4f8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018310"))) PPC_WEAK_FUNC(sub_83018310);
PPC_FUNC_IMPL(__imp__sub_83018310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x83018318;
	__savegprlr_27(ctx, base);
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r3,1460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1460, ctx.r3.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1264
	ctx.r5.s64 = 1264;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x830137b0
	ctx.lr = 0x83018344;
	sub_830137B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x83018494
	if (!ctx.cr0.gt) goto loc_83018494;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83018080
	ctx.lr = 0x83018368;
	sub_83018080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x83018394
	if (!ctx.cr6.eq) goto loc_83018394;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83018080
	ctx.lr = 0x83018390;
	sub_83018080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83018394:
	// cmpwi cr6,r31,-2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -2, ctx.xer);
	// bne cr6,0x830183c8
	if (!ctx.cr6.eq) goto loc_830183C8;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83018494
	if (ctx.cr0.eq) goto loc_83018494;
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830183C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830183C8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x83018494
	if (!ctx.cr6.gt) goto loc_83018494;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,130
	ctx.r10.s64 = ctx.r1.s64 + 130;
	// addi r30,r1,130
	ctx.r30.s64 = ctx.r1.s64 + 130;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_830183E0:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r29,r11,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// lhzx r27,r11,r9
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// beq cr6,0x83018484
	if (ctx.cr6.eq) goto loc_83018484;
	// lis r4,25193
	ctx.r4.s64 = 1651048448;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,1460
	ctx.r6.s64 = ctx.r1.s64 + 1460;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r4,r4,28260
	ctx.r4.u64 = ctx.r4.u64 | 28260;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83013920
	ctx.lr = 0x83018428;
	sub_83013920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x83018484
	if (!ctx.cr0.eq) goto loc_83018484;
	// rlwinm r11,r27,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFFFFFF;
	// lwz r3,1460(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1460);
	// lis r4,28786
	ctx.r4.s64 = 1886519296;
	// stb r27,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r27.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28532
	ctx.r4.u64 = ctx.r4.u64 | 28532;
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// bl 0x83013920
	ctx.lr = 0x83018458;
	sub_83013920(ctx, base);
	// cmpwi cr6,r3,254
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 254, ctx.xer);
	// bne cr6,0x83018468
	if (!ctx.cr6.eq) goto loc_83018468;
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
loc_83018468:
	// lis r4,28789
	ctx.r4.s64 = 1886715904;
	// lwz r3,1460(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1460);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,29544
	ctx.r4.u64 = ctx.r4.u64 | 29544;
	// bl 0x83013cb8
	ctx.lr = 0x83018484;
	sub_83013CB8(ctx, base);
loc_83018484:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bne 0x830183e0
	if (!ctx.cr0.eq) goto loc_830183E0;
loc_83018494:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830184A0"))) PPC_WEAK_FUNC(sub_830184A0);
PPC_FUNC_IMPL(__imp__sub_830184A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x830184A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83013240
	ctx.lr = 0x830184C4;
	sub_83013240(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bne 0x830184d8
	if (!ctx.cr0.eq) goto loc_830184D8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83018598
	goto loc_83018598;
loc_830184D8:
	// li r31,0
	ctx.r31.s64 = 0;
	// srawi r11,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 8;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r29,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r29.u8);
	// bl 0x830133e0
	ctx.lr = 0x8301850C;
	sub_830133E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83018548
	if (ctx.cr0.eq) goto loc_83018548;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r31.u8);
	// bl 0x830133e0
	ctx.lr = 0x8301852C;
	sub_830133E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83018548
	if (ctx.cr0.eq) goto loc_83018548;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83013350
	ctx.lr = 0x8301853C;
	sub_83013350(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// b 0x83018598
	goto loc_83018598;
loc_83018548:
	// lis r4,25193
	ctx.r4.s64 = 1651048448;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28260
	ctx.r4.u64 = ctx.r4.u64 | 28260;
	// bl 0x83013920
	ctx.lr = 0x83018564;
	sub_83013920(ctx, base);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lis r11,-31998
	ctx.r11.s64 = -2097020928;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r7,r11,-31984
	ctx.r7.s64 = ctx.r11.s64 + -31984;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x83013c68
	ctx.lr = 0x83018594;
	sub_83013C68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83018598:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830185A0"))) PPC_WEAK_FUNC(sub_830185A0);
PPC_FUNC_IMPL(__imp__sub_830185A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x830185A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8301c188
	ctx.lr = 0x830185B8;
	sub_8301C188(ctx, base);
	// mulli r11,r30,2924
	ctx.r11.s64 = ctx.r30.s64 * 2924;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,124
	ctx.r28.s64 = ctx.r11.s64 + 124;
	// lis r4,28788
	ctx.r4.s64 = 1886650368;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,30062
	ctx.r4.u64 = ctx.r4.u64 | 30062;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82217ec8
	ctx.lr = 0x830185D8;
	sub_82217EC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830185e8
	if (!ctx.cr0.eq) goto loc_830185E8;
loc_830185E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83018690
	goto loc_83018690;
loc_830185E8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x830185F8;
	sub_82D5CB60(ctx, base);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x830184a0
	ctx.lr = 0x83018620;
	sub_830184A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x83018640
	if (!ctx.cr0.lt) goto loc_83018640;
	// lis r4,28788
	ctx.r4.s64 = 1886650368;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,30062
	ctx.r4.u64 = ctx.r4.u64 | 30062;
	// bl 0x822138a8
	ctx.lr = 0x8301863C;
	sub_822138A8(ctx, base);
	// b 0x830185e0
	goto loc_830185E0;
loc_83018640:
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// addi r30,r11,-12708
	ctx.r30.s64 = ctx.r11.s64 + -12708;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83010650
	ctx.lr = 0x83018654;
	sub_83010650(ctx, base);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x83010650
	ctx.lr = 0x83018660;
	sub_83010650(ctx, base);
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// lis r4,29540
	ctx.r4.s64 = 1935933440;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r11,29464
	ctx.r6.s64 = ctx.r11.s64 + 29464;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,25442
	ctx.r4.u64 = ctx.r4.u64 | 25442;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83013cb8
	ctx.lr = 0x83018680;
	sub_83013CB8(ctx, base);
	// bl 0x83010640
	ctx.lr = 0x83018684;
	sub_83010640(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_83018690:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018698"))) PPC_WEAK_FUNC(sub_83018698);
PPC_FUNC_IMPL(__imp__sub_83018698) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,25193
	ctx.r4.s64 = 1651048448;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// ori r4,r4,28260
	ctx.r4.u64 = ctx.r4.u64 | 28260;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r30,7(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,122(r31)
	PPC_STORE_U16(ctx.r31.u32 + 122, ctx.r11.u16);
	// bl 0x83013920
	ctx.lr = 0x83018710;
	sub_83013920(ctx, base);
	// bl 0x830148a0
	ctx.lr = 0x83018714;
	sub_830148A0(ctx, base);
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r10,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_83018740"))) PPC_WEAK_FUNC(sub_83018740);
PPC_FUNC_IMPL(__imp__sub_83018740) {
	PPC_FUNC_PROLOGUE();
	// stw r4,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r4.u32);
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018750"))) PPC_WEAK_FUNC(sub_83018750);
PPC_FUNC_IMPL(__imp__sub_83018750) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x82d629a0
	ctx.lr = 0x83018770;
	sub_82D629A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83018784
	if (ctx.cr0.eq) goto loc_83018784;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x8301f4d0
	ctx.lr = 0x83018780;
	sub_8301F4D0(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
loc_83018784:
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

__attribute__((alias("__imp__sub_83018798"))) PPC_WEAK_FUNC(sub_83018798);
PPC_FUNC_IMPL(__imp__sub_83018798) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,256
	ctx.r9.s64 = 256;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r9,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r9.u32);
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x83010640
	ctx.lr = 0x830187E4;
	sub_83010640(ctx, base);
	// addi r11,r3,-5000
	ctx.r11.s64 = ctx.r3.s64 + -5000;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// bl 0x83010640
	ctx.lr = 0x830187F0;
	sub_83010640(ctx, base);
	// addi r11,r3,-5000
	ctx.r11.s64 = ctx.r3.s64 + -5000;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83018810"))) PPC_WEAK_FUNC(sub_83018810);
PPC_FUNC_IMPL(__imp__sub_83018810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 120);
	// li r11,28
	ctx.r11.s64 = 28;
	// cmplwi cr6,r10,1000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1000, ctx.xer);
	// bne cr6,0x83018830
	if (!ctx.cr6.eq) goto loc_83018830;
	// lhz r9,122(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 122);
	// cmplwi cr6,r9,1000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1000, ctx.xer);
	// beq cr6,0x83018858
	if (ctx.cr6.eq) goto loc_83018858;
	// cmplwi cr6,r10,1000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1000, ctx.xer);
loc_83018830:
	// ble cr6,0x83018854
	if (!ctx.cr6.gt) goto loc_83018854;
	// cmplwi cr6,r10,1255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1255, ctx.xer);
	// bge cr6,0x83018854
	if (!ctx.cr6.lt) goto loc_83018854;
	// lhz r11,122(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 122);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// ble cr6,0x83018854
	if (!ctx.cr6.gt) goto loc_83018854;
	// cmplwi cr6,r11,1255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1255, ctx.xer);
	// li r11,30
	ctx.r11.s64 = 30;
	// blt cr6,0x83018858
	if (ctx.cr6.lt) goto loc_83018858;
loc_83018854:
	// li r11,32
	ctx.r11.s64 = 32;
loc_83018858:
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subfic r10,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r10.s64 = 8 - ctx.r10.s64;
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018888"))) PPC_WEAK_FUNC(sub_83018888);
PPC_FUNC_IMPL(__imp__sub_83018888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x83018890;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// bl 0x83014b28
	ctx.lr = 0x830188B8;
	sub_83014B28(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83014b28
	ctx.lr = 0x830188C4;
	sub_83014B28(ctx, base);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830136d0
	ctx.lr = 0x830188E4;
	sub_830136D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83014b68
	ctx.lr = 0x830188F0;
	sub_83014B68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x83014b68
	ctx.lr = 0x83018900;
	sub_83014B68(ctx, base);
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// bne cr6,0x83018958
	if (!ctx.cr6.eq) goto loc_83018958;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r26,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x83018810
	ctx.lr = 0x83018934;
	sub_83018810(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x83018964
	if (ctx.cr6.lt) goto loc_83018964;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// b 0x83018964
	goto loc_83018964;
loc_83018958:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
loc_83018964:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018970"))) PPC_WEAK_FUNC(sub_83018970);
PPC_FUNC_IMPL(__imp__sub_83018970) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x830189bc
	if (!ctx.cr6.eq) goto loc_830189BC;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r5,r31,132
	ctx.r5.s64 = ctx.r31.s64 + 132;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83018888
	ctx.lr = 0x830189BC;
	sub_83018888(ctx, base);
loc_830189BC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_830189E8"))) PPC_WEAK_FUNC(sub_830189E8);
PPC_FUNC_IMPL(__imp__sub_830189E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83018a34
	if (ctx.cr6.eq) goto loc_83018A34;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
loc_83018A24:
	// bne cr6,0x83018abc
	if (!ctx.cr6.eq) goto loc_83018ABC;
	// li r11,5
	ctx.r11.s64 = 5;
loc_83018A2C:
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// b 0x83018abc
	goto loc_83018ABC;
loc_83018A34:
	// addi r10,r30,-1000
	ctx.r10.s64 = ctx.r30.s64 + -1000;
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x83018a88
	if (ctx.cr6.eq) goto loc_83018A88;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x83018a88
	if (ctx.cr6.eq) goto loc_83018A88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x83018a74
	if (!ctx.cr6.eq) goto loc_83018A74;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x83018abc
	if (!ctx.cr6.eq) goto loc_83018ABC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018698
	ctx.lr = 0x83018A6C;
	sub_83018698(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83018a2c
	goto loc_83018A2C;
loc_83018A74:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x83018abc
	if (!ctx.cr6.eq) goto loc_83018ABC;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// b 0x83018a24
	goto loc_83018A24;
loc_83018A88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018698
	ctx.lr = 0x83018A90;
	sub_83018698(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,132
	ctx.r5.s64 = ctx.r31.s64 + 132;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83018888
	ctx.lr = 0x83018ABC;
	sub_83018888(ctx, base);
loc_83018ABC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_83018AD8"))) PPC_WEAK_FUNC(sub_83018AD8);
PPC_FUNC_IMPL(__imp__sub_83018AD8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83014b28
	ctx.lr = 0x83018B14;
	sub_83014B28(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,132
	ctx.r5.s64 = ctx.r31.s64 + 132;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018888
	ctx.lr = 0x83018B2C;
	sub_83018888(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_83018B48"))) PPC_WEAK_FUNC(sub_83018B48);
PPC_FUNC_IMPL(__imp__sub_83018B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b4
	ctx.lr = 0x83018B50;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r24,2048
	ctx.r24.s64 = 2048;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x83018bd8
	if (ctx.cr6.eq) goto loc_83018BD8;
	// lwz r8,216(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// lwz r7,196(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r6,212(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
loc_83018B80:
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// twllei r10,0
	// divw r11,r5,r10
	ctx.r11.s32 = ctx.r5.s32 / ctx.r10.s32;
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// andc r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// subf r24,r4,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r4.s64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// twlgei r9,-1
	// bne cr6,0x83018b80
	if (!ctx.cr6.eq) goto loc_83018B80;
	// cmpwi cr6,r24,256
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 256, ctx.xer);
	// bge cr6,0x83018bd0
	if (!ctx.cr6.lt) goto loc_83018BD0;
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// subf r11,r11,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,250
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 250, ctx.xer);
	// ble cr6,0x83018bd0
	if (!ctx.cr6.gt) goto loc_83018BD0;
	// li r24,256
	ctx.r24.s64 = 256;
loc_83018BD0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x83018ee4
	if (!ctx.cr6.gt) goto loc_83018EE4;
loc_83018BD8:
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lis r25,-31986
	ctx.r25.s64 = -2096234496;
	// addi r31,r11,-17200
	ctx.r31.s64 = ctx.r11.s64 + -17200;
	// lis r26,4096
	ctx.r26.s64 = 268435456;
loc_83018BE8:
	// lis r4,28001
	ctx.r4.s64 = 1835073536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,30832
	ctx.r4.u64 = ctx.r4.u64 | 30832;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83013920
	ctx.lr = 0x83018C04;
	sub_83013920(ctx, base);
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x83018c14
	if (!ctx.cr6.gt) goto loc_83018C14;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_83018C14:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83018C18:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x83018c98
	if (!ctx.cr6.gt) goto loc_83018C98;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r10,204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x83018c98
	if (ctx.cr6.eq) goto loc_83018C98;
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// ble cr6,0x83018c50
	if (!ctx.cr6.gt) goto loc_83018C50;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x83018c98
	if (!ctx.cr6.gt) goto loc_83018C98;
loc_83018C50:
	// lwz r8,196(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r7,200(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// twllei r7,0
	// divw r5,r6,r7
	ctx.r5.s32 = ctx.r6.s32 / ctx.r7.s32;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r5,r5,r7
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// subf r6,r5,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r5.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stw r6,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r6.u32);
	// twlgei r8,-1
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bgt cr6,0x83018c98
	if (ctx.cr6.gt) goto loc_83018C98;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x83018c18
	if (ctx.cr6.lt) goto loc_83018C18;
loc_83018C98:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x83018ee4
	if (ctx.cr6.eq) goto loc_83018EE4;
	// lwz r8,196(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,212(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// twllei r11,0
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divw r7,r8,r11
	ctx.r7.s32 = ctx.r8.s32 / ctx.r11.s32;
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r28,r7,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twlgei r11,-1
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x82d5c630
	ctx.lr = 0x83018CEC;
	sub_82D5C630(ctx, base);
	// addic. r27,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r27.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble 0x83018da4
	if (!ctx.cr0.gt) goto loc_83018DA4;
loc_83018CF4:
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r8,196(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// twllei r11,0
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r7,r8,r28
	ctx.r7.u64 = ctx.r8.u64 + ctx.r28.u64;
	// divw r6,r7,r11
	ctx.r6.s32 = ctx.r7.s32 / ctx.r11.s32;
	// rotlwi r8,r7,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r28,r6,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r6.s64;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// add r29,r9,r28
	ctx.r29.u64 = ctx.r9.u64 + ctx.r28.u64;
	// twlgei r11,-1
	// beq 0x83018d50
	if (ctx.cr0.eq) goto loc_83018D50;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83018D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83018D50:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82d5c630
	ctx.lr = 0x83018D74;
	sub_82D5C630(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bgt 0x83018cf4
	if (ctx.cr0.gt) goto loc_83018CF4;
loc_83018DA4:
	// lwz r27,-12640(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12640);
loc_83018DA8:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83018e80
	if (ctx.cr6.eq) goto loc_83018E80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x83018e80
	if (ctx.cr6.gt) goto loc_83018E80;
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r9,196(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// twllei r11,0
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r7,r9,r28
	ctx.r7.u64 = ctx.r9.u64 + ctx.r28.u64;
	// divw r6,r7,r11
	ctx.r6.s32 = ctx.r7.s32 / ctx.r11.s32;
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// subf r28,r6,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r6.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r29,r10,r28
	ctx.r29.u64 = ctx.r10.u64 + ctx.r28.u64;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twlgei r11,-1
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bgt cr6,0x83018e80
	if (ctx.cr6.gt) goto loc_83018E80;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x83018e34
	if (ctx.cr0.eq) goto loc_83018E34;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83018E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r27,-12640(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12640);
loc_83018E34:
	// add r11,r8,r26
	ctx.r11.u64 = ctx.r8.u64 + ctx.r26.u64;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82d5c630
	ctx.lr = 0x83018E54;
	sub_82D5C630(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83018da8
	goto loc_83018DA8;
loc_83018E80:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83018e94
	if (!ctx.cr6.eq) goto loc_83018E94;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// b 0x83018ea8
	goto loc_83018EA8;
loc_83018E94:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x83018ea8
	if (ctx.cr6.lt) goto loc_83018EA8;
	// lis r11,-4096
	ctx.r11.s64 = -268435456;
loc_83018EA8:
	// stw r11,-12640(r25)
	PPC_STORE_U32(ctx.r25.u32 + -12640, ctx.r11.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// addi r5,r30,132
	ctx.r5.s64 = ctx.r30.s64 + 132;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x83018888
	ctx.lr = 0x83018ED0;
	sub_83018888(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83018ee4
	if (ctx.cr0.lt) goto loc_83018EE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf. r24,r11,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bgt 0x83018be8
	if (ctx.cr0.gt) goto loc_83018BE8;
loc_83018EE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c504
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018EF0"))) PPC_WEAK_FUNC(sub_83018EF0);
PPC_FUNC_IMPL(__imp__sub_83018EF0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x83018f24
	if (ctx.cr0.eq) goto loc_83018F24;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// b 0x83018f28
	goto loc_83018F28;
loc_83018F24:
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_83018F28:
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x83018fcc
	if (ctx.cr6.eq) goto loc_83018FCC;
	// lwz r8,216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
loc_83018F3C:
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83018fcc
	if (ctx.cr6.lt) goto loc_83018FCC;
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83018f8c
	if (!ctx.cr6.eq) goto loc_83018F8C;
	// lwz r9,196(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r4,200(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// twllei r4,0
	// divw r31,r9,r4
	ctx.r31.s32 = ctx.r9.s32 / ctx.r4.s32;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r31,r31,r4
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// andc r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	// stw r9,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r9.u32);
loc_83018F8C:
	// lwz r10,196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r9,200(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r9,0
	// divw r4,r10,r9
	ctx.r4.s32 = ctx.r10.s32 / ctx.r9.s32;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r10.u32);
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x83018f3c
	if (!ctx.cr6.eq) goto loc_83018F3C;
loc_83018FCC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x83018fe4
	if (ctx.cr6.eq) goto loc_83018FE4;
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// bl 0x83018b48
	ctx.lr = 0x83018FE4;
	sub_83018B48(ctx, base);
loc_83018FE4:
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

__attribute__((alias("__imp__sub_83018FF8"))) PPC_WEAK_FUNC(sub_83018FF8);
PPC_FUNC_IMPL(__imp__sub_83018FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x83019000;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r7,168(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r8,172(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// twllei r11,0
	// divw r3,r4,r11
	ctx.r3.s32 = ctx.r4.s32 / ctx.r11.s32;
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// mullw r3,r3,r11
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// twlgei r10,-1
	// bne cr6,0x83019050
	if (!ctx.cr6.eq) goto loc_83019050;
loc_83019048:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83019244
	goto loc_83019244;
loc_83019050:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x830190f8
	if (ctx.cr6.lt) goto loc_830190F8;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x830190f8
	if (!ctx.cr6.lt) goto loc_830190F8;
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// twllei r11,0
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// twllei r9,0
	// divw r4,r6,r11
	ctx.r4.s32 = ctx.r6.s32 / ctx.r11.s32;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// subf r6,r4,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r4.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r6,r6,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r6.s64;
	// andc r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r8,r6,r9
	ctx.r8.s32 = ctx.r6.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twlgei r4,-1
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// clrlwi r11,r9,25
	ctx.r11.u64 = ctx.r9.u32 & 0x7F;
	// bgt cr6,0x830190c4
	if (ctx.cr6.gt) goto loc_830190C4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x830190d0
	if (!ctx.cr6.lt) goto loc_830190D0;
loc_830190C4:
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_830190D0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// blt cr6,0x830190ec
	if (ctx.cr6.lt) goto loc_830190EC;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
loc_830190EC:
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bgt cr6,0x8301915c
	if (ctx.cr6.gt) goto loc_8301915C;
	// b 0x83019048
	goto loc_83019048;
loc_830190F8:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8301910c
	if (!ctx.cr6.lt) goto loc_8301910C;
loc_83019104:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83019244
	goto loc_83019244;
loc_8301910C:
	// ble cr6,0x83019150
	if (!ctx.cr6.gt) goto loc_83019150;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r9,4
	ctx.r9.s64 = 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r31,132
	ctx.r5.s64 = ctx.r31.s64 + 132;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x83018888
	ctx.lr = 0x83019148;
	sub_83018888(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83019244
	goto loc_83019244;
loc_83019150:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83019104
	if (ctx.cr6.eq) goto loc_83019104;
loc_8301915C:
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r29,r10,r7
	ctx.r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83019174:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83019174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83019174;
	// addi r28,r29,16
	ctx.r28.s64 = ctx.r29.s64 + 16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301919C;
	sub_82D5C630(ctx, base);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r9,0
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r8,r10,r9
	ctx.r8.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// twlgei r11,-1
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x83019204
	if (ctx.cr6.lt) goto loc_83019204;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
loc_83019204:
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r10.u32);
	// beq 0x83019234
	if (ctx.cr0.eq) goto loc_83019234;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83019234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83019234:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
loc_83019244:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019250"))) PPC_WEAK_FUNC(sub_83019250);
PPC_FUNC_IMPL(__imp__sub_83019250) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83014b28
	ctx.lr = 0x8301928C;
	sub_83014B28(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,132
	ctx.r5.s64 = ctx.r31.s64 + 132;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018888
	ctx.lr = 0x830192A4;
	sub_83018888(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_830192C0"))) PPC_WEAK_FUNC(sub_830192C0);
PPC_FUNC_IMPL(__imp__sub_830192C0) {
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
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,208(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x83019324
	if (ctx.cr6.eq) goto loc_83019324;
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x83019324
	if (!ctx.cr6.eq) goto loc_83019324;
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// lwz r9,196(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// twllei r11,0
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r11,-1
	// stw r9,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r9.u32);
	// bl 0x83018b48
	ctx.lr = 0x83019320;
	sub_83018B48(ctx, base);
	// b 0x83019354
	goto loc_83019354;
loc_83019324:
	// lwz r10,220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// addi r5,r3,132
	ctx.r5.s64 = ctx.r3.s64 + 132;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x83018888
	ctx.lr = 0x83019354;
	sub_83018888(ctx, base);
loc_83019354:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019368"))) PPC_WEAK_FUNC(sub_83019368);
PPC_FUNC_IMPL(__imp__sub_83019368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x83019370;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r30,208(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// twllei r11,0
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// divw r8,r7,r11
	ctx.r8.s32 = ctx.r7.s32 / ctx.r11.s32;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// andc r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r27,r8,r9
	ctx.r27.s32 = ctx.r8.s32 / ctx.r9.s32;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// twllei r9,0
	// twlgei r11,-1
	// twlgei r10,-1
	// beq cr6,0x8301942c
	if (ctx.cr6.eq) goto loc_8301942C;
	// addi r28,r31,132
	ctx.r28.s64 = ctx.r31.s64 + 132;
loc_830193DC:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018888
	ctx.lr = 0x830193F4;
	sub_83018888(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// twllei r10,0
	// divw r7,r9,r10
	ctx.r7.s32 = ctx.r9.s32 / ctx.r10.s32;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r30,r7,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r7.s64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// twlgei r11,-1
	// bne cr6,0x830193dc
	if (!ctx.cr6.eq) goto loc_830193DC;
loc_8301942C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019438"))) PPC_WEAK_FUNC(sub_83019438);
PPC_FUNC_IMPL(__imp__sub_83019438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4ac
	ctx.lr = 0x83019440;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r10,-14616
	ctx.r30.s64 = ctx.r10.s64 + -14616;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r23,-1
	ctx.r23.s64 = -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// stw r23,-1312(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1312, ctx.r23.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
	// beq cr6,0x830199c4
	if (ctx.cr6.eq) goto loc_830199C4;
loc_83019480:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830194cc
	if (ctx.cr0.eq) goto loc_830194CC;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x830194cc
	if (ctx.cr6.eq) goto loc_830194CC;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// addi r11,r30,-1312
	ctx.r11.s64 = ctx.r30.s64 + -1312;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1264
	ctx.r5.s64 = 1264;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x830137b0
	ctx.lr = 0x830194C0;
	sub_830137B0(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bgt 0x830194dc
	if (ctx.cr0.gt) goto loc_830194DC;
loc_830194CC:
	// lwz r31,124(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x83019480
	if (!ctx.cr0.eq) goto loc_83019480;
	// b 0x83019524
	goto loc_83019524;
loc_830194DC:
	// lbz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// lbz r9,105(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// lbz r8,106(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// rlwimi r9,r11,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r11,107(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// lwz r3,-1304(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r10,-1312(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1312, ctx.r10.u32);
	// rlwimi r8,r9,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r8,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,-1308(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1308, ctx.r11.u32);
	// bl 0x83014b68
	ctx.lr = 0x83019510;
	sub_83014B68(ctx, base);
	// stw r3,-1304(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1304, ctx.r3.u32);
	// lwz r3,-1300(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1300);
	// bl 0x83014b68
	ctx.lr = 0x8301951C;
	sub_83014B68(ctx, base);
	// stw r3,-1300(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1300, ctx.r3.u32);
	// li r21,1
	ctx.r21.s64 = 1;
loc_83019524:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830199c4
	if (ctx.cr6.eq) goto loc_830199C4;
	// li r25,4
	ctx.r25.s64 = 4;
loc_83019534:
	// bl 0x83010640
	ctx.lr = 0x83019538;
	sub_83010640(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x83019590
	if (!ctx.cr6.eq) goto loc_83019590;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x83019590
	if (!ctx.cr6.eq) goto loc_83019590;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x83019590
	if (!ctx.cr6.eq) goto loc_83019590;
	// lwz r11,-1312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83019590
	if (ctx.cr6.lt) goto loc_83019590;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8301957c
	if (ctx.cr6.eq) goto loc_8301957C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x83019590
	if (!ctx.cr6.eq) goto loc_83019590;
loc_8301957C:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r9,-1300(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1300);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83019590
	if (!ctx.cr6.eq) goto loc_83019590;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
loc_83019590:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x830195a8
	if (ctx.cr6.eq) goto loc_830195A8;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x830195a8
	if (ctx.cr6.eq) goto loc_830195A8;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x830195bc
	goto loc_830195BC;
loc_830195A8:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r9,-1300(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1300);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_830195BC:
	// lwz r11,-1312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x830197b8
	if (ctx.cr6.lt) goto loc_830197B8;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x830197b8
	if (ctx.cr6.eq) goto loc_830197B8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x830197b8
	if (ctx.cr6.eq) goto loc_830197B8;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830197b8
	if (!ctx.cr6.eq) goto loc_830197B8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x83014940
	ctx.lr = 0x830195F4;
	sub_83014940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x830197b4
	if (!ctx.cr0.eq) goto loc_830197B4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x830197b4
	if (ctx.cr6.eq) goto loc_830197B4;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,-1312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1312);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
	// bne cr6,0x83019648
	if (!ctx.cr6.eq) goto loc_83019648;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// beq cr6,0x83019640
	if (ctx.cr6.eq) goto loc_83019640;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x83019648
	if (!ctx.cr6.eq) goto loc_83019648;
loc_83019640:
	// stw r25,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r25.u32);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_83019648:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8301979c
	if (ctx.cr6.eq) goto loc_8301979C;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x8301979c
	if (ctx.cr6.eq) goto loc_8301979C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8301979c
	if (ctx.cr6.eq) goto loc_8301979C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x8301979c
	if (ctx.cr6.eq) goto loc_8301979C;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x830199b0
	if (!ctx.cr6.eq) goto loc_830199B0;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x83019698
	if (!ctx.cr6.eq) goto loc_83019698;
	// lwz r11,-1308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1308);
	// addi r4,r30,-1312
	ctx.r4.s64 = ctx.r30.s64 + -1312;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// bl 0x83018ef0
	ctx.lr = 0x83019694;
	sub_83018EF0(ctx, base);
	// b 0x830197b0
	goto loc_830197B0;
loc_83019698:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,-1308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1308);
	// ble cr6,0x8301976c
	if (!ctx.cr6.gt) goto loc_8301976C;
	// rlwinm. r29,r10,4,28,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// clrlwi r9,r10,4
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// lwz r10,-1300(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1300);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lwz r28,180(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// subf r11,r29,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r29.s64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// b 0x83019760
	goto loc_83019760;
loc_830196CC:
	// lwz r11,-1312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1312);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x830196f0
	if (!ctx.cr6.gt) goto loc_830196F0;
	// addi r10,r30,-1312
	ctx.r10.s64 = ctx.r30.s64 + -1312;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,-1312(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1312, ctx.r11.u32);
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x830196f4
	goto loc_830196F4;
loc_830196F0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830196F4:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-1312(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1312, ctx.r11.u32);
	// bl 0x83018ef0
	ctx.lr = 0x83019710;
	sub_83018EF0(ctx, base);
	// addi r11,r30,-1312
	ctx.r11.s64 = ctx.r30.s64 + -1312;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r11,-1312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1312);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83018ff8
	ctx.lr = 0x83019730;
	sub_83018FF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8301973c
	if (!ctx.cr0.lt) goto loc_8301973C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8301973C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x83019754
	if (!ctx.cr6.gt) goto loc_83019754;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83019754
	if (ctx.cr6.eq) goto loc_83019754;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_83019754:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83019760:
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bge 0x830196cc
	if (!ctx.cr0.lt) goto loc_830196CC;
	// b 0x830197b0
	goto loc_830197B0;
loc_8301976C:
	// addi r4,r30,-1312
	ctx.r4.s64 = ctx.r30.s64 + -1312;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018ef0
	ctx.lr = 0x83019780;
	sub_83018EF0(ctx, base);
	// addi r11,r30,-1312
	ctx.r11.s64 = ctx.r30.s64 + -1312;
	// addi r4,r30,-1312
	ctx.r4.s64 = ctx.r30.s64 + -1312;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018ff8
	ctx.lr = 0x83019798;
	sub_83018FF8(ctx, base);
	// b 0x830197b0
	goto loc_830197B0;
loc_8301979C:
	// addi r4,r30,-1312
	ctx.r4.s64 = ctx.r30.s64 + -1312;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830189e8
	ctx.lr = 0x830197B0;
	sub_830189E8(ctx, base);
loc_830197B0:
	// stw r23,-1312(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1312, ctx.r23.u32);
loc_830197B4:
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830197B8:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x830197e4
	if (!ctx.cr6.eq) goto loc_830197E4;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// ble cr6,0x830197e4
	if (!ctx.cr6.gt) goto loc_830197E4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018ad8
	ctx.lr = 0x830197E0;
	sub_83018AD8(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830197E4:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x83019810
	if (!ctx.cr6.eq) goto loc_83019810;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x83019810
	if (ctx.cr6.eq) goto loc_83019810;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018b48
	ctx.lr = 0x8301980C;
	sub_83018B48(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_83019810:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x83019854
	if (!ctx.cr6.eq) goto loc_83019854;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,54464
	ctx.r9.u64 = ctx.r9.u64 | 54464;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x83019854
	if (!ctx.cr6.gt) goto loc_83019854;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,2000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2000, ctx.xer);
	// bge cr6,0x83019854
	if (!ctx.cr6.lt) goto loc_83019854;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018970
	ctx.lr = 0x83019850;
	sub_83018970(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_83019854:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,-5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5, ctx.xer);
	// bne cr6,0x83019890
	if (!ctx.cr6.eq) goto loc_83019890;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8301987c
	if (ctx.cr6.eq) goto loc_8301987C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8301987c
	if (ctx.cr6.eq) goto loc_8301987C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x83019890
	if (!ctx.cr6.eq) goto loc_83019890;
loc_8301987C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018970
	ctx.lr = 0x83019888;
	sub_83018970(ctx, base);
	// stw r26,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r26.u32);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_83019890:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x830198c8
	if (!ctx.cr6.eq) goto loc_830198C8;
	// lhz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x830198c8
	if (!ctx.cr6.eq) goto loc_830198C8;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830198c8
	if (!ctx.cr6.gt) goto loc_830198C8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83019250
	ctx.lr = 0x830198C4;
	sub_83019250(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830198C8:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830198f0
	if (!ctx.cr6.eq) goto loc_830198F0;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,250
	ctx.r11.s64 = ctx.r11.s64 + 250;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830198f0
	if (!ctx.cr6.gt) goto loc_830198F0;
	// stw r27,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r27.u32);
	// stw r25,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r25.u32);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830198F0:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83019940
	if (!ctx.cr6.eq) goto loc_83019940;
	// lwz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x83019940
	if (ctx.cr0.eq) goto loc_83019940;
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// beq 0x8301992c
	if (ctx.cr0.eq) goto loc_8301992C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8301992C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8301992C:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r26,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_83019940:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x830199b0
	if (!ctx.cr6.eq) goto loc_830199B0;
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830199b0
	if (!ctx.cr6.eq) goto loc_830199B0;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x83019988
	if (!ctx.cr6.gt) goto loc_83019988;
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r7,180(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8301999c
	if (!ctx.cr6.eq) goto loc_8301999C;
	// lwz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8301999c
	if (!ctx.cr6.eq) goto loc_8301999C;
loc_83019988:
	// cmplwi cr6,r11,2500
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2500, ctx.xer);
	// bgt cr6,0x8301999c
	if (ctx.cr6.gt) goto loc_8301999C;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// blt cr6,0x830199b0
	if (ctx.cr6.lt) goto loc_830199B0;
loc_8301999C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r26,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830192c0
	ctx.lr = 0x830199AC;
	sub_830192C0(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830199B0:
	// lwz r31,124(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x83019534
	if (!ctx.cr0.eq) goto loc_83019534;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x830199c8
	goto loc_830199C8;
loc_830199C4:
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_830199C8:
	// lwz r11,-1312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83019adc
	if (ctx.cr6.lt) goto loc_83019ADC;
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x83019adc
	if (!ctx.cr6.eq) goto loc_83019ADC;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x830199f8
	if (ctx.cr6.eq) goto loc_830199F8;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x830199f8
	if (ctx.cr6.eq) goto loc_830199F8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x83019adc
	if (!ctx.cr6.eq) goto loc_83019ADC;
loc_830199F8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83019adc
	if (ctx.cr6.eq) goto loc_83019ADC;
loc_83019A04:
	// lwz r9,148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x83019a18
	if (ctx.cr6.eq) goto loc_83019A18;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x83019a34
	if (!ctx.cr6.eq) goto loc_83019A34;
loc_83019A18:
	// lhz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 132);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x83019a34
	if (!ctx.cr6.eq) goto loc_83019A34;
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lwz r8,-1300(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1300);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x83019a44
	if (ctx.cr6.eq) goto loc_83019A44;
loc_83019A34:
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x83019a04
	if (!ctx.cr0.eq) goto loc_83019A04;
	// b 0x83019adc
	goto loc_83019ADC;
loc_83019A44:
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplw cr6,r24,r9
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83019adc
	if (!ctx.cr6.eq) goto loc_83019ADC;
	// lbz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// lbz r8,137(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,101(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// lbz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbz r6,138(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 138);
	// rlwimi r7,r4,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r5,139(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 139);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// lbz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwimi r7,r8,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// lbz r8,103(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwimi r8,r7,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x83019adc
	if (!ctx.cr6.eq) goto loc_83019ADC;
	// lbz r8,98(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// lbz r9,134(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 134);
	// lbz r6,99(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r7,135(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 135);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rlwimi r6,r8,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x83019adc
	if (ctx.cr6.eq) goto loc_83019ADC;
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82d5c630
	ctx.lr = 0x83019AD8;
	sub_82D5C630(ctx, base);
	// lwz r10,-1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1304);
loc_83019ADC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x83019b9c
	if (ctx.cr6.eq) goto loc_83019B9C;
	// lwz r11,-1312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x83019b9c
	if (ctx.cr6.lt) goto loc_83019B9C;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x83019b00
	if (ctx.cr6.eq) goto loc_83019B00;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x83019b9c
	if (!ctx.cr6.eq) goto loc_83019B9C;
loc_83019B00:
	// lbz r11,136(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 136);
	// lbz r10,137(r22)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + 137);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,138(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 138);
	// lbz r8,139(r22)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r22.u32 + 139);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r7,-1300(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1300);
	// lwz r10,152(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 152);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// bne cr6,0x83019b9c
	if (!ctx.cr6.eq) goto loc_83019B9C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83019b68
	if (ctx.cr6.eq) goto loc_83019B68;
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r10,101(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// lbz r9,102(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// rlwimi r10,r8,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r8,103(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r9,r10,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r8,r9,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x83019b9c
	if (!ctx.cr6.eq) goto loc_83019B9C;
loc_83019B68:
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,148(r22)
	PPC_STORE_U32(ctx.r22.u32 + 148, ctx.r10.u32);
	// bne cr6,0x83019b88
	if (!ctx.cr6.eq) goto loc_83019B88;
	// addi r3,r22,132
	ctx.r3.s64 = ctx.r22.s64 + 132;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82d5c630
	ctx.lr = 0x83019B88;
	sub_82D5C630(ctx, base);
loc_83019B88:
	// addi r4,r30,-1312
	ctx.r4.s64 = ctx.r30.s64 + -1312;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830189e8
	ctx.lr = 0x83019B9C;
	sub_830189E8(ctx, base);
loc_83019B9C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82d5c4fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019BA8"))) PPC_WEAK_FUNC(sub_83019BA8);
PPC_FUNC_IMPL(__imp__sub_83019BA8) {
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
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r31,r11,-17208
	ctx.r31.s64 = ctx.r11.s64 + -17208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,2552
	ctx.r3.s64 = ctx.r31.s64 + 2552;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x830106a0
	ctx.lr = 0x83019BD4;
	sub_830106A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x83019c08
	if (ctx.cr0.eq) goto loc_83019C08;
	// bl 0x83010640
	ctx.lr = 0x83019BE0;
	sub_83010640(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83019BE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83019438
	ctx.lr = 0x83019BEC;
	sub_83019438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x83019be4
	if (ctx.cr0.gt) goto loc_83019BE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,2552
	ctx.r3.s64 = ctx.r31.s64 + 2552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x830107f8
	ctx.lr = 0x83019C04;
	sub_830107F8(ctx, base);
	// b 0x83019c14
	goto loc_83019C14;
loc_83019C08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83019C14:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83019C38"))) PPC_WEAK_FUNC(sub_83019C38);
PPC_FUNC_IMPL(__imp__sub_83019C38) {
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
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-17208
	ctx.r31.s64 = ctx.r11.s64 + -17208;
	// lwz r11,2592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83019c80
	if (!ctx.cr6.eq) goto loc_83019C80;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r3,r31,2552
	ctx.r3.s64 = ctx.r31.s64 + 2552;
	// addi r4,r11,-12636
	ctx.r4.s64 = ctx.r11.s64 + -12636;
	// bl 0x83010650
	ctx.lr = 0x83019C74;
	sub_83010650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83019C80:
	// addi r3,r31,2552
	ctx.r3.s64 = ctx.r31.s64 + 2552;
	// bl 0x83010748
	ctx.lr = 0x83019C88;
	sub_83010748(ctx, base);
	// lwz r11,2592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2592);
	// addi r3,r31,2552
	ctx.r3.s64 = ctx.r31.s64 + 2552;
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// stw r30,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r30.u32);
	// bl 0x830107f8
	ctx.lr = 0x83019C9C;
	sub_830107F8(ctx, base);
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

__attribute__((alias("__imp__sub_83019CB8"))) PPC_WEAK_FUNC(sub_83019CB8);
PPC_FUNC_IMPL(__imp__sub_83019CB8) {
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
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-14616
	ctx.r31.s64 = ctx.r11.s64 + -14616;
	// addi r3,r31,-40
	ctx.r3.s64 = ctx.r31.s64 + -40;
	// bl 0x83010748
	ctx.lr = 0x83019CE0;
	sub_83010748(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x83019cf4
	goto loc_83019CF4;
loc_83019CEC:
	// addi r11,r10,124
	ctx.r11.s64 = ctx.r10.s64 + 124;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83019CF4:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x83019cec
	if (!ctx.cr6.eq) goto loc_83019CEC;
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r3,r31,-40
	ctx.r3.s64 = ctx.r31.s64 + -40;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x830107f8
	ctx.lr = 0x83019D0C;
	sub_830107F8(ctx, base);
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

__attribute__((alias("__imp__sub_83019D28"))) PPC_WEAK_FUNC(sub_83019D28);
PPC_FUNC_IMPL(__imp__sub_83019D28) {
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
	// bl 0x83010640
	ctx.lr = 0x83019D44;
	sub_83010640(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83019368
	ctx.lr = 0x83019D58;
	sub_83019368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83019cb8
	ctx.lr = 0x83019D60;
	sub_83019CB8(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x83019d78
	if (!ctx.cr6.eq) goto loc_83019D78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018970
	ctx.lr = 0x83019D78;
	sub_83018970(ctx, base);
loc_83019D78:
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r30,r11,-14656
	ctx.r30.s64 = ctx.r11.s64 + -14656;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// beq 0x83019dd0
	if (ctx.cr0.eq) goto loc_83019DD0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83019dbc
	if (ctx.cr6.eq) goto loc_83019DBC;
loc_83019D9C:
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x83019db4
	if (ctx.cr6.eq) goto loc_83019DB4;
	// lwz r10,124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x83019d9c
	if (!ctx.cr0.eq) goto loc_83019D9C;
loc_83019DB4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83019dd0
	if (!ctx.cr6.eq) goto loc_83019DD0;
loc_83019DBC:
	// bl 0x83013350
	ctx.lr = 0x83019DC0;
	sub_83013350(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
loc_83019DD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83019de0
	if (!ctx.cr6.eq) goto loc_83019DE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83010680
	ctx.lr = 0x83019DE0;
	sub_83010680(ctx, base);
loc_83019DE0:
	// lis r11,25461
	ctx.r11.s64 = 1668612096;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// ori r30,r11,25712
	ctx.r30.u64 = ctx.r11.u64 | 25712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822138a8
	ctx.lr = 0x83019DF8;
	sub_822138A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x822138a8
	ctx.lr = 0x83019E08;
	sub_822138A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822138a8
	ctx.lr = 0x83019E18;
	sub_822138A8(ctx, base);
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

__attribute__((alias("__imp__sub_83019E30"))) PPC_WEAK_FUNC(sub_83019E30);
PPC_FUNC_IMPL(__imp__sub_83019E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83019E38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-14656
	ctx.r30.s64 = ctx.r11.s64 + -14656;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83010748
	ctx.lr = 0x83019E54;
	sub_83010748(ctx, base);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// bl 0x830107f8
	ctx.lr = 0x83019E6C;
	sub_830107F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019E78"))) PPC_WEAK_FUNC(sub_83019E78);
PPC_FUNC_IMPL(__imp__sub_83019E78) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019E80"))) PPC_WEAK_FUNC(sub_83019E80);
PPC_FUNC_IMPL(__imp__sub_83019E80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019E88"))) PPC_WEAK_FUNC(sub_83019E88);
PPC_FUNC_IMPL(__imp__sub_83019E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x83019E90;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x83019ebc
	if (ctx.cr6.eq) goto loc_83019EBC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83013350
	ctx.lr = 0x83019EB4;
	sub_83013350(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x83019fe0
	goto loc_83019FE0;
loc_83019EBC:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bl 0x83018798
	ctx.lr = 0x83019ED0;
	sub_83018798(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// bl 0x82d5cb60
	ctx.lr = 0x83019EEC;
	sub_82D5CB60(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r30,-14616(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14616);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83019f64
	if (ctx.cr6.eq) goto loc_83019F64;
loc_83019EFC:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83019f58
	if (ctx.cr6.eq) goto loc_83019F58;
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x83019f58
	if (ctx.cr0.eq) goto loc_83019F58;
	// lis r4,25193
	ctx.r4.s64 = 1651048448;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28260
	ctx.r4.u64 = ctx.r4.u64 | 28260;
	// bl 0x83013920
	ctx.lr = 0x83019F28;
	sub_83013920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x83019f58
	if (ctx.cr0.lt) goto loc_83019F58;
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,3(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// rlwimi r8,r10,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x83019f9c
	if (ctx.cr6.eq) goto loc_83019F9C;
loc_83019F58:
	// lwz r30,124(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x83019efc
	if (!ctx.cr0.eq) goto loc_83019EFC;
loc_83019F64:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830133e0
	ctx.lr = 0x83019F74;
	sub_830133E0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bge 0x83019fb4
	if (!ctx.cr0.lt) goto loc_83019FB4;
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// bl 0x83013350
	ctx.lr = 0x83019F88;
	sub_83013350(ctx, base);
	// cmpwi cr6,r30,-11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -11, ctx.xer);
	// li r3,-9
	ctx.r3.s64 = -9;
	// beq cr6,0x83019fe0
	if (ctx.cr6.eq) goto loc_83019FE0;
	// li r3,-5
	ctx.r3.s64 = -5;
	// b 0x83019fe0
	goto loc_83019FE0;
loc_83019F9C:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x83013350
	ctx.lr = 0x83019FB0;
	sub_83013350(ctx, base);
	// b 0x83019fd4
	goto loc_83019FD4;
loc_83019FB4:
	// lis r11,-31998
	ctx.r11.s64 = -2097020928;
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// addi r7,r11,-25688
	ctx.r7.s64 = ctx.r11.s64 + -25688;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83013c68
	ctx.lr = 0x83019FD4;
	sub_83013C68(ctx, base);
loc_83019FD4:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_83019FE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019FE8"))) PPC_WEAK_FUNC(sub_83019FE8);
PPC_FUNC_IMPL(__imp__sub_83019FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x83019FF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83010640
	ctx.lr = 0x83019FFC;
	sub_83010640(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83019368
	ctx.lr = 0x8301A010;
	sub_83019368(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8301a028
	if (!ctx.cr6.eq) goto loc_8301A028;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_8301A028:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301a050
	if (ctx.cr6.eq) goto loc_8301A050;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018970
	ctx.lr = 0x8301A040;
	sub_83018970(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x83013350
	ctx.lr = 0x8301A048;
	sub_83013350(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_8301A050:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A068"))) PPC_WEAK_FUNC(sub_8301A068);
PPC_FUNC_IMPL(__imp__sub_8301A068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8301A070;
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
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8301a09c
	if (ctx.cr6.eq) goto loc_8301A09C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83013350
	ctx.lr = 0x8301A094;
	sub_83013350(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8301a0f0
	goto loc_8301A0F0;
loc_8301A09C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x83018798
	ctx.lr = 0x8301A0B0;
	sub_83018798(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301A0C0;
	sub_82D5C630(ctx, base);
	// lis r11,-31998
	ctx.r11.s64 = -2097020928;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r7,r11,-25688
	ctx.r7.s64 = ctx.r11.s64 + -25688;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83013c68
	ctx.lr = 0x8301A0E4;
	sub_83013C68(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_8301A0F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A0F8"))) PPC_WEAK_FUNC(sub_8301A0F8);
PPC_FUNC_IMPL(__imp__sub_8301A0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8301A100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83010640
	ctx.lr = 0x8301A10C;
	sub_83010640(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83019368
	ctx.lr = 0x8301A120;
	sub_83019368(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8301a138
	if (!ctx.cr6.eq) goto loc_8301A138;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_8301A138:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301a160
	if (ctx.cr6.eq) goto loc_8301A160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018970
	ctx.lr = 0x8301A150;
	sub_83018970(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x83013350
	ctx.lr = 0x8301A158;
	sub_83013350(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_8301A160:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A178"))) PPC_WEAK_FUNC(sub_8301A178);
PPC_FUNC_IMPL(__imp__sub_8301A178) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8301a1bc
	if (ctx.cr6.eq) goto loc_8301A1BC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8301a1bc
	if (ctx.cr6.eq) goto loc_8301A1BC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8301a1b4
	if (ctx.cr6.eq) goto loc_8301A1B4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8301a1b4
	if (ctx.cr6.eq) goto loc_8301A1B4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// blr 
	return;
loc_8301A1B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8301A1BC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A1C8"))) PPC_WEAK_FUNC(sub_8301A1C8);
PPC_FUNC_IMPL(__imp__sub_8301A1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,25452
	ctx.r10.s64 = 1668022272;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r10,r10,26980
	ctx.r10.u64 = ctx.r10.u64 | 26980;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8301a1e8
	if (!ctx.cr6.eq) goto loc_8301A1E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r5.u32);
	// blr 
	return;
loc_8301A1E8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A1F0"))) PPC_WEAK_FUNC(sub_8301A1F0);
PPC_FUNC_IMPL(__imp__sub_8301A1F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83010640
	sub_83010640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A1F8"))) PPC_WEAK_FUNC(sub_8301A1F8);
PPC_FUNC_IMPL(__imp__sub_8301A1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x8301A200;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83010640
	ctx.lr = 0x8301A218;
	sub_83010640(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8301a230
	if (ctx.cr6.eq) goto loc_8301A230;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8301a494
	goto loc_8301A494;
loc_8301A230:
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// twllei r11,0
	// divw r5,r6,r11
	ctx.r5.s32 = ctx.r6.s32 / ctx.r11.s32;
	// rotlwi r7,r6,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r6,r5,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r5.s64;
	// andc r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// twlgei r7,-1
	// bne cr6,0x8301a274
	if (!ctx.cr6.eq) goto loc_8301A274;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301a494
	goto loc_8301A494;
loc_8301A274:
	// addi r7,r10,-16
	ctx.r7.s64 = ctx.r10.s64 + -16;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8301a288
	if (!ctx.cr6.gt) goto loc_8301A288;
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x8301a494
	goto loc_8301A494;
loc_8301A288:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8301a2d8
	if (!ctx.cr6.eq) goto loc_8301A2D8;
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// twllei r11,0
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// twllei r10,0
	// divw r7,r8,r11
	ctx.r7.s32 = ctx.r8.s32 / ctx.r11.s32;
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// rotlwi r8,r7,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r9,r7,r10
	ctx.r9.s32 = ctx.r7.s32 / ctx.r10.s32;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// twlgei r11,-1
	// twlgei r10,-1
	// b 0x8301a494
	goto loc_8301A494;
loc_8301A2D8:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bl 0x82d5c630
	ctx.lr = 0x8301A2F4;
	sub_82D5C630(ctx, base);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8301a394
	if (ctx.cr0.eq) goto loc_8301A394;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r29,r11,-17208
	ctx.r29.s64 = ctx.r11.s64 + -17208;
	// addi r3,r29,2552
	ctx.r3.s64 = ctx.r29.s64 + 2552;
	// bl 0x83010748
	ctx.lr = 0x8301A310;
	sub_83010748(ctx, base);
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// beq 0x8301a358
	if (ctx.cr0.eq) goto loc_8301A358;
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82d5c630
	ctx.lr = 0x8301A33C;
	sub_82D5C630(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// b 0x8301a35c
	goto loc_8301A35C;
loc_8301A358:
	// addi r5,r31,132
	ctx.r5.s64 = ctx.r31.s64 + 132;
loc_8301A35C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018888
	ctx.lr = 0x8301A36C;
	sub_83018888(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// blt cr6,0x8301a388
	if (ctx.cr6.lt) goto loc_8301A388;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
loc_8301A388:
	// addi r3,r29,2552
	ctx.r3.s64 = ctx.r29.s64 + 2552;
	// bl 0x830107f8
	ctx.lr = 0x8301A390;
	sub_830107F8(ctx, base);
	// b 0x8301a490
	goto loc_8301A490;
loc_8301A394:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lbz r8,87(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 87);
	// twllei r10,0
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,208(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r5,r9,r11
	ctx.r5.s32 = ctx.r9.s32 / ctx.r11.s32;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// twlgei r8,-1
	// subf r8,r7,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r7.s64;
	// twllei r11,0
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// twllei r11,0
	// divw r5,r7,r11
	ctx.r5.s32 = ctx.r7.s32 / ctx.r11.s32;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// rotlwi r8,r7,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// subf r9,r5,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r5.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divw r30,r9,r10
	ctx.r30.s32 = ctx.r9.s32 / ctx.r10.s32;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twlgei r11,-1
	// andc r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// twlgei r11,-1
	// bge cr6,0x8301a484
	if (!ctx.cr6.lt) goto loc_8301A484;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r29,r11,-17208
	ctx.r29.s64 = ctx.r11.s64 + -17208;
	// addi r3,r29,2552
	ctx.r3.s64 = ctx.r29.s64 + 2552;
	// bl 0x83010748
	ctx.lr = 0x8301A44C;
	sub_83010748(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018b48
	ctx.lr = 0x8301A458;
	sub_83018B48(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8301a47c
	if (ctx.cr6.eq) goto loc_8301A47C;
loc_8301A464:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83019438
	ctx.lr = 0x8301A46C;
	sub_83019438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x8301a464
	if (ctx.cr0.gt) goto loc_8301A464;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8301A47C:
	// addi r3,r29,2552
	ctx.r3.s64 = ctx.r29.s64 + 2552;
	// bl 0x830107f8
	ctx.lr = 0x8301A484;
	sub_830107F8(ctx, base);
loc_8301A484:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bgt cr6,0x8301a494
	if (ctx.cr6.gt) goto loc_8301A494;
loc_8301A490:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8301A494:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A4A0"))) PPC_WEAK_FUNC(sub_8301A4A0);
PPC_FUNC_IMPL(__imp__sub_8301A4A0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// lwz r8,168(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8301a4dc
	if (!ctx.cr6.eq) goto loc_8301A4DC;
	// li r3,-7
	ctx.r3.s64 = -7;
	// b 0x8301a51c
	goto loc_8301A51C;
loc_8301A4DC:
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x8301a508
	if (!ctx.cr6.gt) goto loc_8301A508;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8301a500
	if (!ctx.cr6.lt) goto loc_8301A500;
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x8301a51c
	goto loc_8301A51C;
loc_8301A500:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x82d5c630
	ctx.lr = 0x8301A508;
	sub_82D5C630(ctx, base);
loc_8301A508:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301a518
	if (ctx.cr6.eq) goto loc_8301A518;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8301A518:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8301A51C:
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

__attribute__((alias("__imp__sub_8301A538"))) PPC_WEAK_FUNC(sub_8301A538);
PPC_FUNC_IMPL(__imp__sub_8301A538) {
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
	// bl 0x8301a4a0
	ctx.lr = 0x8301A550;
	sub_8301A4A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8301a58c
	if (ctx.cr0.lt) goto loc_8301A58C;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r9,164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r9,0
	// divw r8,r10,r9
	ctx.r8.s32 = ctx.r10.s32 / ctx.r9.s32;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
loc_8301A58C:
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

__attribute__((alias("__imp__sub_8301A5A0"))) PPC_WEAK_FUNC(sub_8301A5A0);
PPC_FUNC_IMPL(__imp__sub_8301A5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x8301A5A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,2
	ctx.r28.s64 = 2;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// sth r30,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r28.u16);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// bl 0x83014c40
	ctx.lr = 0x8301A5E4;
	sub_83014C40(ctx, base);
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8301a5f8
	if (ctx.cr6.eq) goto loc_8301A5F8;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x8301a6b4
	goto loc_8301A6B4;
loc_8301A5F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r11,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// stb r10,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// bl 0x83013240
	ctx.lr = 0x8301A618;
	sub_83013240(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8301a628
	if (!ctx.cr0.eq) goto loc_8301A628;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8301a6b4
	goto loc_8301A6B4;
loc_8301A628:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83019e88
	ctx.lr = 0x8301A634;
	sub_83019E88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018750
	ctx.lr = 0x8301A644;
	sub_83018750(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8301a6ac
	if (!ctx.cr6.eq) goto loc_8301A6AC;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8301a6ac
	if (ctx.cr6.eq) goto loc_8301A6AC;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8301a66c
	if (!ctx.cr6.eq) goto loc_8301A66C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_8301A66C:
	// rlwinm r11,r9,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// sth r30,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r30.u16);
	// srawi r8,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// stb r10,135(r31)
	PPC_STORE_U8(ctx.r31.u32 + 135, ctx.r10.u8);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// sth r28,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r28.u16);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stb r9,139(r31)
	PPC_STORE_U8(ctx.r31.u32 + 139, ctx.r9.u8);
	// stb r8,134(r31)
	PPC_STORE_U8(ctx.r31.u32 + 134, ctx.r8.u8);
	// stb r7,138(r31)
	PPC_STORE_U8(ctx.r31.u32 + 138, ctx.r7.u8);
	// stb r11,137(r31)
	PPC_STORE_U8(ctx.r31.u32 + 137, ctx.r11.u8);
	// stb r10,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r10.u8);
loc_8301A6AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
loc_8301A6B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A6C0"))) PPC_WEAK_FUNC(sub_8301A6C0);
PPC_FUNC_IMPL(__imp__sub_8301A6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8301A6C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// sth r31,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r31.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// sth r31,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r31.u16);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x83014c40
	ctx.lr = 0x8301A718;
	sub_83014C40(ctx, base);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8301a72c
	if (ctx.cr6.eq) goto loc_8301A72C;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x8301a898
	goto loc_8301A898;
loc_8301A72C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x8301a748
	if (!ctx.cr6.eq) goto loc_8301A748;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8301A748:
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// stb r11,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// bl 0x83018750
	ctx.lr = 0x8301A760;
	sub_83018750(ctx, base);
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// lwz r30,-14616(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14616);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301a7d4
	if (ctx.cr6.eq) goto loc_8301A7D4;
loc_8301A770:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8301a7b8
	if (ctx.cr6.eq) goto loc_8301A7B8;
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301a7b8
	if (ctx.cr0.eq) goto loc_8301A7B8;
	// lis r4,25193
	ctx.r4.s64 = 1651048448;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28260
	ctx.r4.u64 = ctx.r4.u64 | 28260;
	// bl 0x83013920
	ctx.lr = 0x8301A79C;
	sub_83013920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8301a7b8
	if (ctx.cr0.lt) goto loc_8301A7B8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83014940
	ctx.lr = 0x8301A7B0;
	sub_83014940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8301a7c8
	if (ctx.cr0.eq) goto loc_8301A7C8;
loc_8301A7B8:
	// lwz r30,124(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x8301a770
	if (!ctx.cr0.eq) goto loc_8301A770;
	// b 0x8301a7d4
	goto loc_8301A7D4;
loc_8301A7C8:
	// lwz r30,128(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x8301a854
	if (!ctx.cr0.eq) goto loc_8301A854;
loc_8301A7D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83013240
	ctx.lr = 0x8301A7E4;
	sub_83013240(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8301a7f4
	if (!ctx.cr0.eq) goto loc_8301A7F4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8301a898
	goto loc_8301A898;
loc_8301A7F4:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830133e0
	ctx.lr = 0x8301A804;
	sub_830133E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8301a854
	if (!ctx.cr0.lt) goto loc_8301A854;
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r31,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830133e0
	ctx.lr = 0x8301A824;
	sub_830133E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge 0x8301a83c
	if (!ctx.cr0.lt) goto loc_8301A83C;
	// bl 0x83013350
	ctx.lr = 0x8301A834;
	sub_83013350(ctx, base);
	// li r3,-5
	ctx.r3.s64 = -5;
	// b 0x8301a898
	goto loc_8301A898;
loc_8301A83C:
	// lis r4,25193
	ctx.r4.s64 = 1651048448;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28260
	ctx.r4.u64 = ctx.r4.u64 | 28260;
	// bl 0x83013920
	ctx.lr = 0x8301A854;
	sub_83013920(ctx, base);
loc_8301A854:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r10,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// stw r31,228(r29)
	PPC_STORE_U32(ctx.r29.u32 + 228, ctx.r31.u32);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// bl 0x8301a068
	ctx.lr = 0x8301A898;
	sub_8301A068(ctx, base);
loc_8301A898:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A8A0"))) PPC_WEAK_FUNC(sub_8301A8A0);
PPC_FUNC_IMPL(__imp__sub_8301A8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4a4
	ctx.lr = 0x8301A8A8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8301c188
	ctx.lr = 0x8301A8BC;
	sub_8301C188(ctx, base);
	// lis r11,25461
	ctx.r11.s64 = 1668612096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r25,r11,25712
	ctx.r25.u64 = ctx.r11.u64 | 25712;
	// li r3,256
	ctx.r3.s64 = 256;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82217ec8
	ctx.lr = 0x8301A8D8;
	sub_82217EC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8301a8e8
	if (!ctx.cr0.eq) goto loc_8301A8E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301aa3c
	goto loc_8301AA3C;
loc_8301A8E8:
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x8301A8F8;
	sub_82D5CB60(ctx, base);
	// lis r11,-31998
	ctx.r11.s64 = -2097020928;
	// lis r5,-31998
	ctx.r5.s64 = -2097020928;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r11,r11,-23240
	ctx.r11.s64 = ctx.r11.s64 + -23240;
	// sth r28,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r28.u16);
	// addi r5,r5,-25040
	ctx.r5.s64 = ctx.r5.s64 + -25040;
	// stb r27,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r27.u8);
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// stb r26,87(r31)
	PPC_STORE_U8(ctx.r31.u32 + 87, ctx.r26.u8);
	// addi r29,r28,16
	ctx.r29.s64 = ctx.r28.s64 + 16;
	// addi r3,r3,-22848
	ctx.r3.s64 = ctx.r3.s64 + -22848;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// lis r4,-31998
	ctx.r4.s64 = -2097020928;
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r4,-24328
	ctx.r4.s64 = ctx.r4.s64 + -24328;
	// rlwinm r30,r11,0,17,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFC;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r19,-31998
	ctx.r19.s64 = -2097020928;
	// lis r20,-31998
	ctx.r20.s64 = -2097020928;
	// lis r21,-31998
	ctx.r21.s64 = -2097020928;
	// lis r22,-31998
	ctx.r22.s64 = -2097020928;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lis r23,-31998
	ctx.r23.s64 = -2097020928;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// lis r24,-31998
	ctx.r24.s64 = -2097020928;
	// lis r6,-31998
	ctx.r6.s64 = -2097020928;
	// lis r7,-31998
	ctx.r7.s64 = -2097020928;
	// lis r8,-31998
	ctx.r8.s64 = -2097020928;
	// lis r9,-31998
	ctx.r9.s64 = -2097020928;
	// lis r10,-31998
	ctx.r10.s64 = -2097020928;
	// addi r6,r6,-24120
	ctx.r6.s64 = ctx.r6.s64 + -24120;
	// addi r7,r7,-24200
	ctx.r7.s64 = ctx.r7.s64 + -24200;
	// addi r8,r8,-24080
	ctx.r8.s64 = ctx.r8.s64 + -24080;
	// addi r9,r9,-24072
	ctx.r9.s64 = ctx.r9.s64 + -24072;
	// addi r10,r10,-23392
	ctx.r10.s64 = ctx.r10.s64 + -23392;
	// mullw r3,r30,r27
	ctx.r3.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r27.s32);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// addi r19,r19,-22368
	ctx.r19.s64 = ctx.r19.s64 + -22368;
	// addi r20,r20,-25304
	ctx.r20.s64 = ctx.r20.s64 + -25304;
	// addi r21,r21,-24968
	ctx.r21.s64 = ctx.r21.s64 + -24968;
	// addi r22,r22,-24960
	ctx.r22.s64 = ctx.r22.s64 + -24960;
	// addi r23,r23,-23136
	ctx.r23.s64 = ctx.r23.s64 + -23136;
	// addi r24,r24,-24600
	ctx.r24.s64 = ctx.r24.s64 + -24600;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r19,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r19.u32);
	// stw r20,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r20.u32);
	// stw r21,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// bl 0x82217ec8
	ctx.lr = 0x8301A9E0;
	sub_82217EC8(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// mullw r3,r30,r26
	ctx.r3.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r26.s32);
	// stw r29,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r29.u32);
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82217ec8
	ctx.lr = 0x8301AA00;
	sub_82217EC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x82d5cb60
	ctx.lr = 0x8301AA24;
	sub_82D5CB60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// bl 0x83019c38
	ctx.lr = 0x8301AA38;
	sub_83019C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8301AA3C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82d5c4f4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301AA48"))) PPC_WEAK_FUNC(sub_8301AA48);
PPC_FUNC_IMPL(__imp__sub_8301AA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x8301AA50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,28784
	ctx.r4.s64 = 1886388224;
	// li r3,384
	ctx.r3.s64 = 384;
	// ori r4,r4,28263
	ctx.r4.u64 = ctx.r4.u64 | 28263;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82217ec8
	ctx.lr = 0x8301AA78;
	sub_82217EC8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8301aa88
	if (!ctx.cr0.eq) goto loc_8301AA88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301ab28
	goto loc_8301AB28;
loc_8301AA88:
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x8301AA98;
	sub_82D5CB60(ctx, base);
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bge cr6,0x8301aadc
	if (!ctx.cr6.lt) goto loc_8301AADC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8301AABC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301aabc
	if (!ctx.cr6.eq) goto loc_8301AABC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_8301AADC:
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// ble cr6,0x8301aae8
	if (!ctx.cr6.gt) goto loc_8301AAE8;
	// li r31,256
	ctx.r31.s64 = 256;
loc_8301AAE8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8301ab00
	if (ctx.cr6.eq) goto loc_8301AB00;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x82d5c630
	ctx.lr = 0x8301AB00;
	sub_82D5C630(ctx, base);
loc_8301AB00:
	// stw r31,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r31.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8301ab18
	goto loc_8301AB18;
loc_8301AB10:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8301AB18:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8301ab10
	if (!ctx.cr0.eq) goto loc_8301AB10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
loc_8301AB28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301AB30"))) PPC_WEAK_FUNC(sub_8301AB30);
PPC_FUNC_IMPL(__imp__sub_8301AB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8301AB38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8301ab64
	goto loc_8301AB64;
loc_8301AB50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8301ab70
	if (ctx.cr6.eq) goto loc_8301AB70;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8301AB64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301ab50
	if (!ctx.cr6.eq) goto loc_8301AB50;
	// b 0x8301abdc
	goto loc_8301ABDC;
loc_8301AB70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301ab84
	if (ctx.cr0.eq) goto loc_8301AB84;
	// bl 0x82b4d280
	ctx.lr = 0x8301AB84;
	sub_82B4D280(ctx, base);
loc_8301AB84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8301abbc
	if (!ctx.cr6.eq) goto loc_8301ABBC;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82e99e28
	ctx.lr = 0x8301AB9C;
	sub_82E99E28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301abbc
	if (ctx.cr0.eq) goto loc_8301ABBC;
	// lis r4,28784
	ctx.r4.s64 = 1886388224;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// ori r4,r4,28263
	ctx.r4.u64 = ctx.r4.u64 | 28263;
	// bl 0x822138a8
	ctx.lr = 0x8301ABBC;
	sub_822138A8(ctx, base);
loc_8301ABBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,28784
	ctx.r4.s64 = 1886388224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,28263
	ctx.r4.u64 = ctx.r4.u64 | 28263;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x822138a8
	ctx.lr = 0x8301ABDC;
	sub_822138A8(ctx, base);
loc_8301ABDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301ABE8"))) PPC_WEAK_FUNC(sub_8301ABE8);
PPC_FUNC_IMPL(__imp__sub_8301ABE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8301ABF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8301ac74
	if (!ctx.cr6.eq) goto loc_8301AC74;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// bl 0x82b741d0
	ctx.lr = 0x8301AC28;
	sub_82B741D0(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// bne cr6,0x8301ad18
	if (!ctx.cr6.eq) goto loc_8301AD18;
	// lis r4,28784
	ctx.r4.s64 = 1886388224;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// ori r4,r4,28263
	ctx.r4.u64 = ctx.r4.u64 | 28263;
	// bl 0x82217ec8
	ctx.lr = 0x8301AC44;
	sub_82217EC8(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// beq 0x8301ad58
	if (ctx.cr0.eq) goto loc_8301AD58;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ld r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// bl 0x82b741d0
	ctx.lr = 0x8301AC64;
	sub_82B741D0(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x8301ad18
	if (!ctx.cr6.eq) goto loc_8301AD18;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8301AC74:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8301ad58
	if (!ctx.cr6.eq) goto loc_8301AD58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82a3a820
	ctx.lr = 0x8301AC90;
	sub_82A3A820(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8301ad24
	if (!ctx.cr0.eq) goto loc_8301AD24;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8301ad30
	if (!ctx.cr6.eq) goto loc_8301AD30;
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d5c630
	ctx.lr = 0x8301ACCC;
	sub_82D5C630(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82b4d200
	ctx.lr = 0x8301AD04;
	sub_82B4D200(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8301ad34
	goto loc_8301AD34;
loc_8301AD18:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8301ad58
	goto loc_8301AD58;
loc_8301AD24:
	// cmplwi cr6,r3,996
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 996, ctx.xer);
	// beq cr6,0x8301ad38
	if (ctx.cr6.eq) goto loc_8301AD38;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8301AD30:
	// li r11,4
	ctx.r11.s64 = 4;
loc_8301AD34:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8301AD38:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8301ad58
	if (ctx.cr6.eq) goto loc_8301AD58;
	// lis r4,28784
	ctx.r4.s64 = 1886388224;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// ori r4,r4,28263
	ctx.r4.u64 = ctx.r4.u64 | 28263;
	// bl 0x822138a8
	ctx.lr = 0x8301AD58;
	sub_822138A8(ctx, base);
loc_8301AD58:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301AD60"))) PPC_WEAK_FUNC(sub_8301AD60);
PPC_FUNC_IMPL(__imp__sub_8301AD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8301AD68;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8301af0c
	if (!ctx.cr6.eq) goto loc_8301AF0C;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8301adb8
	if (!ctx.cr0.eq) goto loc_8301ADB8;
	// lis r3,26735
	ctx.r3.s64 = 1752104960;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,29556
	ctx.r3.u64 = ctx.r3.u64 | 29556;
	// bl 0x83011c48
	ctx.lr = 0x8301ADA8;
	sub_83011C48(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r3,29541
	ctx.r3.s64 = 1935998976;
	// ori r3,r3,29302
	ctx.r3.u64 = ctx.r3.u64 | 29302;
	// b 0x8301aea4
	goto loc_8301AEA4;
loc_8301ADB8:
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r9,17729
	ctx.r9.s64 = 1161887744;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8301ae00
	if (!ctx.cr6.eq) goto loc_8301AE00;
	// lis r3,29541
	ctx.r3.s64 = 1935998976;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// ori r3,r3,29302
	ctx.r3.u64 = ctx.r3.u64 | 29302;
	// bl 0x83011c48
	ctx.lr = 0x8301ADE0;
	sub_83011C48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8301af04
	if (ctx.cr0.lt) goto loc_8301AF04;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x83014b68
	ctx.lr = 0x8301ADF0;
	sub_83014B68(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x8301aeb8
	goto loc_8301AEB8;
loc_8301AE00:
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r11.u8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lis r3,28001
	ctx.r3.s64 = 1835073536;
	// sth r31,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r31.u16);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// sth r10,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r11.u8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// ori r3,r3,25714
	ctx.r3.u64 = ctx.r3.u64 | 25714;
	// stb r11,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r11.u8);
	// stb r10,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r10.u8);
	// bl 0x83011b40
	ctx.lr = 0x8301AE50;
	sub_83011B40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8301af04
	if (!ctx.cr0.eq) goto loc_8301AF04;
	// lbz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 148);
	// lis r3,29537
	ctx.r3.s64 = 1935736832;
	// lbz r10,149(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 149);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r9,150(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 150);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r4,151(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// ori r3,r3,25714
	ctx.r3.u64 = ctx.r3.u64 | 25714;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r9,r11,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r4,r9,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// bl 0x83011c48
	ctx.lr = 0x8301AE90;
	sub_83011C48(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8301aeb8
	if (!ctx.cr0.eq) goto loc_8301AEB8;
	// lis r3,30828
	ctx.r3.s64 = 2020343808;
	// ori r3,r3,29552
	ctx.r3.u64 = ctx.r3.u64 | 29552;
loc_8301AEA4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83011c48
	ctx.lr = 0x8301AEB4;
	sub_83011C48(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_8301AEB8:
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b4d200
	ctx.lr = 0x8301AEF0;
	sub_82B4D200(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8301af08
	goto loc_8301AF08;
loc_8301AF04:
	// li r11,4
	ctx.r11.s64 = 4;
loc_8301AF08:
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_8301AF0C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301AF18"))) PPC_WEAK_FUNC(sub_8301AF18);
PPC_FUNC_IMPL(__imp__sub_8301AF18) {
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
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8301b010
	goto loc_8301B010;
loc_8301AF38:
	// lis r3,28526
	ctx.r3.s64 = 1869479936;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,27758
	ctx.r3.u64 = ctx.r3.u64 | 27758;
	// bl 0x83011c48
	ctx.lr = 0x8301AF50;
	sub_83011C48(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8301af60
	if (ctx.cr6.eq) goto loc_8301AF60;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8301AF60:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8301af9c
	if (!ctx.cr6.lt) goto loc_8301AF9C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8301af84
	if (!ctx.cr6.eq) goto loc_8301AF84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301abe8
	ctx.lr = 0x8301AF84;
	sub_8301ABE8(ctx, base);
loc_8301AF84:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8301af9c
	if (!ctx.cr6.eq) goto loc_8301AF9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301ad60
	ctx.lr = 0x8301AF9C;
	sub_8301AD60(ctx, base);
loc_8301AF9C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8301aff8
	if (!ctx.cr6.eq) goto loc_8301AFF8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8301aff8
	if (ctx.cr0.eq) goto loc_8301AFF8;
	// lhz r11,22(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 22);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x8301afd0
	if (!ctx.cr0.eq) goto loc_8301AFD0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8301afdc
	goto loc_8301AFDC;
loc_8301AFD0:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8301afe0
	if (!ctx.cr6.eq) goto loc_8301AFE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8301AFDC:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8301AFE0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lhz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r10,10(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8301AFF8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8301b034
	if (ctx.cr6.eq) goto loc_8301B034;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8301b034
	if (ctx.cr6.eq) goto loc_8301B034;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8301B010:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x8301af38
	if (!ctx.cr0.eq) goto loc_8301AF38;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301B01C:
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
loc_8301B034:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8301b01c
	goto loc_8301B01C;
}

__attribute__((alias("__imp__sub_8301B040"))) PPC_WEAK_FUNC(sub_8301B040);
PPC_FUNC_IMPL(__imp__sub_8301B040) {
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
	// bl 0x8301c188
	ctx.lr = 0x8301B058;
	sub_8301C188(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r4,28784
	ctx.r4.s64 = 1886388224;
	// li r3,32
	ctx.r3.s64 = 32;
	// ori r4,r4,28263
	ctx.r4.u64 = ctx.r4.u64 | 28263;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82217ec8
	ctx.lr = 0x8301B070;
	sub_82217EC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8301b080
	if (!ctx.cr0.eq) goto loc_8301B080;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301b0a0
	goto loc_8301B0A0;
loc_8301B080:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x8301B090;
	sub_82D5CB60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8301B0A0:
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

__attribute__((alias("__imp__sub_8301B0B8"))) PPC_WEAK_FUNC(sub_8301B0B8);
PPC_FUNC_IMPL(__imp__sub_8301B0B8) {
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
	// b 0x8301b0d8
	goto loc_8301B0D8;
loc_8301B0D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301ab30
	ctx.lr = 0x8301B0D8;
	sub_8301AB30(ctx, base);
loc_8301B0D8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x8301b0d0
	if (!ctx.cr0.eq) goto loc_8301B0D0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b104
	if (ctx.cr6.eq) goto loc_8301B104;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82b4d1e0
	ctx.lr = 0x8301B104;
	sub_82B4D1E0(ctx, base);
loc_8301B104:
	// lis r4,28784
	ctx.r4.s64 = 1886388224;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,28263
	ctx.r4.u64 = ctx.r4.u64 | 28263;
	// bl 0x822138a8
	ctx.lr = 0x8301B118;
	sub_822138A8(ctx, base);
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

__attribute__((alias("__imp__sub_8301B130"))) PPC_WEAK_FUNC(sub_8301B130);
PPC_FUNC_IMPL(__imp__sub_8301B130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8301B138;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,28272
	ctx.r11.s64 = 1852833792;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,29282
	ctx.r11.u64 = ctx.r11.u64 | 29282;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301b160
	if (!ctx.cr6.eq) goto loc_8301B160;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// b 0x8301b210
	goto loc_8301B210;
loc_8301B160:
	// lis r11,29541
	ctx.r11.s64 = 1935998976;
	// ori r11,r11,29555
	ctx.r11.u64 = ctx.r11.u64 | 29555;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301b1f0
	if (!ctx.cr6.eq) goto loc_8301B1F0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b1b0
	if (ctx.cr6.eq) goto loc_8301B1B0;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b4d1e0
	ctx.lr = 0x8301B198;
	sub_82B4D1E0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x8301B1A8;
	sub_82D5CB60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8301B1B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301b1e8
	if (ctx.cr6.eq) goto loc_8301B1E8;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b4d1e0
	ctx.lr = 0x8301B1D0;
	sub_82B4D1E0(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301B1E0;
	sub_82D5C630(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8301B1E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301b210
	goto loc_8301B210;
loc_8301B1F0:
	// lis r11,30057
	ctx.r11.s64 = 1969815552;
	// ori r11,r11,25720
	ctx.r11.u64 = ctx.r11.u64 | 25720;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301b20c
	if (!ctx.cr6.eq) goto loc_8301B20C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// b 0x8301b210
	goto loc_8301B210;
loc_8301B20C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8301B210:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B218"))) PPC_WEAK_FUNC(sub_8301B218);
PPC_FUNC_IMPL(__imp__sub_8301B218) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8301aa48
	ctx.lr = 0x8301B238;
	sub_8301AA48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8301b248
	if (!ctx.cr0.eq) goto loc_8301B248;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301b25c
	goto loc_8301B25C;
loc_8301B248:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301B258;
	sub_82D5C630(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8301B25C:
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

__attribute__((alias("__imp__sub_8301B278"))) PPC_WEAK_FUNC(sub_8301B278);
PPC_FUNC_IMPL(__imp__sub_8301B278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8301B280;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r3,29541
	ctx.r3.s64 = 1935998976;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,25461
	ctx.r3.u64 = ctx.r3.u64 | 25461;
	// bl 0x83011c48
	ctx.lr = 0x8301B2AC;
	sub_83011C48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8301b2bc
	if (!ctx.cr0.eq) goto loc_8301B2BC;
loc_8301B2B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301b2e0
	goto loc_8301B2E0;
loc_8301B2BC:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301aa48
	ctx.lr = 0x8301B2D0;
	sub_8301AA48(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8301b2b4
	if (ctx.cr0.eq) goto loc_8301B2B4;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r28,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r28.u32);
loc_8301B2E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B2E8"))) PPC_WEAK_FUNC(sub_8301B2E8);
PPC_FUNC_IMPL(__imp__sub_8301B2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x8301B2F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8301af18
	ctx.lr = 0x8301B308;
	sub_8301AF18(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8301b318
	if (!ctx.cr0.eq) goto loc_8301B318;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301b3c0
	goto loc_8301B3C0;
loc_8301B318:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301b378
	if (ctx.cr6.eq) goto loc_8301B378;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x8301B330;
	sub_82D5CB60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x8301b340
	if (ctx.cr0.gt) goto loc_8301B340;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8301B340:
	// sth r11,68(r30)
	PPC_STORE_U16(ctx.r30.u32 + 68, ctx.r11.u16);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,70(r30)
	PPC_STORE_U16(ctx.r30.u32 + 70, ctx.r11.u16);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,75(r30)
	PPC_STORE_U8(ctx.r30.u32 + 75, ctx.r11.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// sth r11,72(r30)
	PPC_STORE_U16(ctx.r30.u32 + 72, ctx.r11.u16);
	// bl 0x82d5c630
	ctx.lr = 0x8301B378;
	sub_82D5C630(ctx, base);
loc_8301B378:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8301b3ac
	if (ctx.cr6.eq) goto loc_8301B3AC;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8301b394
	if (!ctx.cr6.gt) goto loc_8301B394;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8301B394:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8301b3ac
	if (ctx.cr0.eq) goto loc_8301B3AC;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301B3AC;
	sub_82D5C630(ctx, base);
loc_8301B3AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8301ab30
	ctx.lr = 0x8301B3BC;
	sub_8301AB30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8301B3C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B3C8"))) PPC_WEAK_FUNC(sub_8301B3C8);
PPC_FUNC_IMPL(__imp__sub_8301B3C8) {
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
	// addic. r31,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r31.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8301b3f0
	if (!ctx.cr0.lt) goto loc_8301B3F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301b418
	goto loc_8301B418;
loc_8301B3F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d60820
	ctx.lr = 0x8301B3FC;
	sub_82D60820(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x8301b40c
	if (ctx.cr6.gt) goto loc_8301B40C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8301b410
	if (!ctx.cr6.lt) goto loc_8301B410;
loc_8301B40C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301B410:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r3,r30
	PPC_STORE_U8(ctx.r3.u32 + ctx.r30.u32, ctx.r11.u8);
loc_8301B418:
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

__attribute__((alias("__imp__sub_8301B430"))) PPC_WEAK_FUNC(sub_8301B430);
PPC_FUNC_IMPL(__imp__sub_8301B430) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addic. r31,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r31.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8301b46c
	if (!ctx.cr0.lt) goto loc_8301B46C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301b4a4
	goto loc_8301B4A4;
loc_8301B46C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d60820
	ctx.lr = 0x8301B488;
	sub_82D60820(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x8301b498
	if (ctx.cr6.gt) goto loc_8301B498;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8301b49c
	if (!ctx.cr6.lt) goto loc_8301B49C;
loc_8301B498:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301B49C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r3,r30
	PPC_STORE_U8(ctx.r3.u32 + ctx.r30.u32, ctx.r11.u8);
loc_8301B4A4:
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

__attribute__((alias("__imp__sub_8301B4C0"))) PPC_WEAK_FUNC(sub_8301B4C0);
PPC_FUNC_IMPL(__imp__sub_8301B4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x8301B4C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301b594
	if (ctx.cr6.eq) goto loc_8301B594;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b594
	if (ctx.cr6.eq) goto loc_8301B594;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8301b594
	if (ctx.cr6.eq) goto loc_8301B594;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8301b594
	if (ctx.cr0.eq) goto loc_8301B594;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82d62970
	ctx.lr = 0x8301B508;
	sub_82D62970(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8301b594
	if (ctx.cr0.eq) goto loc_8301B594;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r27,r10,-14612
	ctx.r27.s64 = ctx.r10.s64 + -14612;
loc_8301B520:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82d62970
	ctx.lr = 0x8301B528;
	sub_82D62970(ctx, base);
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8301b584
	if (!ctx.cr6.eq) goto loc_8301B584;
	// addi r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 1;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b57c
	if (ctx.cr6.eq) goto loc_8301B57C;
	// subf r29,r28,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r28.s64;
loc_8301B544:
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8301b584
	if (ctx.cr0.eq) goto loc_8301B584;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82d62970
	ctx.lr = 0x8301B558;
	sub_82D62970(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82d62970
	ctx.lr = 0x8301B564;
	sub_82D62970(ctx, base);
	// cmpw cr6,r24,r3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8301b584
	if (!ctx.cr6.eq) goto loc_8301B584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301b544
	if (!ctx.cr6.eq) goto loc_8301B544;
loc_8301B57C:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8301B584:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8301b520
	if (!ctx.cr0.eq) goto loc_8301B520;
loc_8301B594:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B5A0"))) PPC_WEAK_FUNC(sub_8301B5A0);
PPC_FUNC_IMPL(__imp__sub_8301B5A0) {
	PPC_FUNC_PROLOGUE();
loc_8301B5A0:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x8301b5c4
	if (ctx.cr6.lt) goto loc_8301B5C4;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x8301b5c4
	if (ctx.cr6.gt) goto loc_8301B5C4;
	// xori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 ^ 32;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
loc_8301B5C4:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x8301b5e8
	if (ctx.cr6.lt) goto loc_8301B5E8;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x8301b5e8
	if (ctx.cr6.gt) goto loc_8301B5E8;
	// xori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 ^ 32;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
loc_8301B5E8:
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq 0x8301b600
	if (ctx.cr0.eq) goto loc_8301B600;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8301b5a0
	if (ctx.cr6.eq) goto loc_8301B5A0;
loc_8301B600:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B608"))) PPC_WEAK_FUNC(sub_8301B608);
PPC_FUNC_IMPL(__imp__sub_8301B608) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8301b618
	if (!ctx.cr6.eq) goto loc_8301B618;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8301B618:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8301B61C:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x8301b640
	if (ctx.cr6.lt) goto loc_8301B640;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x8301b640
	if (ctx.cr6.gt) goto loc_8301B640;
	// xori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 ^ 32;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
loc_8301B640:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x8301b664
	if (ctx.cr6.lt) goto loc_8301B664;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x8301b664
	if (ctx.cr6.gt) goto loc_8301B664;
	// xori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 ^ 32;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
loc_8301B664:
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// beq 0x8301b688
	if (ctx.cr0.eq) goto loc_8301B688;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8301b688
	if (!ctx.cr6.eq) goto loc_8301B688;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8301b61c
	if (ctx.cr6.lt) goto loc_8301B61C;
loc_8301B688:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B690"))) PPC_WEAK_FUNC(sub_8301B690);
PPC_FUNC_IMPL(__imp__sub_8301B690) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82d5e188
	ctx.lr = 0x8301B6B0;
	sub_82D5E188(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8301B6D8"))) PPC_WEAK_FUNC(sub_8301B6D8);
PPC_FUNC_IMPL(__imp__sub_8301B6D8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addic. r7,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r7.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bltlr 
	if (ctx.cr0.lt) return;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8301b720
	if (!ctx.cr6.gt) goto loc_8301B720;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_8301B6F8:
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8301b720
	if (!ctx.cr6.lt) goto loc_8301B720;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8301b720
	if (ctx.cr0.eq) goto loc_8301B720;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8301b6f8
	if (ctx.cr6.lt) goto loc_8301B6F8;
loc_8301B720:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B730"))) PPC_WEAK_FUNC(sub_8301B730);
PPC_FUNC_IMPL(__imp__sub_8301B730) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bltlr 
	if (ctx.cr0.lt) return;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301b780
	if (!ctx.cr6.gt) goto loc_8301B780;
loc_8301B74C:
	// lbzx r9,r3,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8301b780
	if (ctx.cr6.eq) goto loc_8301B780;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8301b74c
	if (ctx.cr6.lt) goto loc_8301B74C;
	// b 0x8301b780
	goto loc_8301B780;
loc_8301B768:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8301b788
	if (ctx.cr0.eq) goto loc_8301B788;
	// stbx r9,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8301B780:
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8301b768
	if (ctx.cr6.lt) goto loc_8301B768;
loc_8301B788:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B798"))) PPC_WEAK_FUNC(sub_8301B798);
PPC_FUNC_IMPL(__imp__sub_8301B798) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addic. r10,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r10.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bltlr 
	if (ctx.cr0.lt) return;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301b7c8
	if (!ctx.cr6.gt) goto loc_8301B7C8;
loc_8301B7B0:
	// lbzx r11,r3,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301b7c8
	if (ctx.cr6.eq) goto loc_8301B7C8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8301b7b0
	if (ctx.cr6.lt) goto loc_8301B7B0;
loc_8301B7C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8301b7f0
	goto loc_8301B7F0;
loc_8301B7D0:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8301b7f8
	if (!ctx.cr6.lt) goto loc_8301B7F8;
	// lbzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8301b7f8
	if (ctx.cr0.eq) goto loc_8301B7F8;
	// stbx r9,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8301B7F0:
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8301b7d0
	if (ctx.cr6.lt) goto loc_8301B7D0;
loc_8301B7F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B808"))) PPC_WEAK_FUNC(sub_8301B808);
PPC_FUNC_IMPL(__imp__sub_8301B808) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d65728
	sub_82D65728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B810"))) PPC_WEAK_FUNC(sub_8301B810);
PPC_FUNC_IMPL(__imp__sub_8301B810) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d65440
	sub_82D65440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B818"))) PPC_WEAK_FUNC(sub_8301B818);
PPC_FUNC_IMPL(__imp__sub_8301B818) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d650c0
	sub_82D650C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B820"))) PPC_WEAK_FUNC(sub_8301B820);
PPC_FUNC_IMPL(__imp__sub_8301B820) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d65788
	sub_82D65788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301B828"))) PPC_WEAK_FUNC(sub_8301B828);
PPC_FUNC_IMPL(__imp__sub_8301B828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d65788
	ctx.lr = 0x8301B83C;
	sub_82D65788(ctx, base);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B850"))) PPC_WEAK_FUNC(sub_8301B850);
PPC_FUNC_IMPL(__imp__sub_8301B850) {
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
	// lis r30,-31986
	ctx.r30.s64 = -2096234496;
	// lwz r3,-12620(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12620);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8301b8ac
	if (!ctx.cr6.eq) goto loc_8301B8AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d65788
	ctx.lr = 0x8301B87C;
	sub_82D65788(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d65728
	ctx.lr = 0x8301B888;
	sub_82D65728(ctx, base);
	// bl 0x82d650c0
	ctx.lr = 0x8301B88C;
	sub_82D650C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d65440
	ctx.lr = 0x8301B898;
	sub_82D65440(ctx, base);
	// bl 0x82d650c0
	ctx.lr = 0x8301B89C;
	sub_82D650C0(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r3,-12620(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12620, ctx.r3.u32);
loc_8301B8AC:
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

__attribute__((alias("__imp__sub_8301B8C8"))) PPC_WEAK_FUNC(sub_8301B8C8);
PPC_FUNC_IMPL(__imp__sub_8301B8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r8,60
	ctx.r8.s64 = 60;
	// ori r11,r11,20864
	ctx.r11.u64 = ctx.r11.u64 | 20864;
	// li r5,400
	ctx.r5.s64 = 400;
	// divwu r10,r4,r11
	ctx.r10.u32 = ctx.r4.u32 / ctx.r11.u32;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1970
	ctx.r11.s64 = 1970;
	// divw r7,r9,r8
	ctx.r7.s32 = ctx.r9.s32 / ctx.r8.s32;
	// divwu r10,r4,r10
	ctx.r10.u32 = ctx.r4.u32 / ctx.r10.u32;
	// mulli r7,r7,60
	ctx.r7.s64 = ctx.r7.s64 * 60;
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// divw r9,r9,r8
	ctx.r9.s32 = ctx.r9.s32 / ctx.r8.s32;
	// li r4,100
	ctx.r4.s64 = 100;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// divw r7,r9,r8
	ctx.r7.s32 = ctx.r9.s32 / ctx.r8.s32;
	// divw r8,r9,r8
	ctx.r8.s32 = ctx.r9.s32 / ctx.r8.s32;
	// mulli r7,r7,60
	ctx.r7.s64 = ctx.r7.s64 * 60;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_8301B924:
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8301b954
	if (!ctx.cr0.eq) goto loc_8301B954;
	// divw r9,r11,r4
	ctx.r9.s32 = ctx.r11.s32 / ctx.r4.s32;
	// mulli r9,r9,100
	ctx.r9.s64 = ctx.r9.s64 * 100;
	// subf. r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8301b94c
	if (!ctx.cr0.eq) goto loc_8301B94C;
	// divw r9,r11,r5
	ctx.r9.s32 = ctx.r11.s32 / ctx.r5.s32;
	// mulli r9,r9,400
	ctx.r9.s64 = ctx.r9.s64 * 400;
	// subf. r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8301b954
	if (!ctx.cr0.eq) goto loc_8301B954;
loc_8301B94C:
	// li r9,366
	ctx.r9.s64 = 366;
	// b 0x8301b958
	goto loc_8301B958;
loc_8301B954:
	// li r9,365
	ctx.r9.s64 = 365;
loc_8301B958:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8301b9cc
	if (ctx.cr6.lt) goto loc_8301B9CC;
	// li r9,366
	ctx.r9.s64 = 366;
	// divw r9,r10,r9
	ctx.r9.s32 = ctx.r10.s32 / ctx.r9.s32;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301b978
	if (!ctx.cr6.eq) goto loc_8301B978;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8301B978:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// mulli r6,r11,365
	ctx.r6.s64 = ctx.r11.s64 * 365;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// divw r7,r9,r5
	ctx.r7.s32 = ctx.r9.s32 / ctx.r5.s32;
	// divw r31,r8,r5
	ctx.r31.s32 = ctx.r8.s32 / ctx.r5.s32;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// divw r6,r9,r4
	ctx.r6.s32 = ctx.r9.s32 / ctx.r4.s32;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r31.s64;
	// srawi r31,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	// subf r9,r6,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r6.s64;
	// divw r6,r8,r4
	ctx.r6.s32 = ctx.r8.s32 / ctx.r4.s32;
	// addze r7,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r7.s64 = temp.s64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x8301b924
	goto loc_8301B924;
loc_8301B9CC:
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// addi r6,r11,-1900
	ctx.r6.s64 = ctx.r11.s64 + -1900;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r9,18464
	ctx.r9.s64 = ctx.r9.s64 + 18464;
	// mulli r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 * 48;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// b 0x8301ba0c
	goto loc_8301BA0C;
loc_8301B9F8:
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
loc_8301BA0C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8301b9f8
	if (!ctx.cr6.lt) goto loc_8301B9F8;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BA30"))) PPC_WEAK_FUNC(sub_8301BA30);
PPC_FUNC_IMPL(__imp__sub_8301BA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x8301BA38;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r27,20(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
loc_8301BA4C:
	// and r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 & ctx.r31.u64;
	// rlwinm r9,r30,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r10,r31,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8301b8c8
	ctx.lr = 0x8301BA70;
	sub_8301B8C8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf. r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8301bacc
	if (!ctx.cr0.eq) goto loc_8301BACC;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8301bacc
	if (!ctx.cr0.eq) goto loc_8301BACC;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8301bacc
	if (!ctx.cr0.eq) goto loc_8301BACC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8301bacc
	if (!ctx.cr0.eq) goto loc_8301BACC;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8301bacc
	if (!ctx.cr0.eq) goto loc_8301BACC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8301baf8
	if (ctx.cr0.eq) goto loc_8301BAF8;
loc_8301BACC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8301baf0
	if (ctx.cr6.eq) goto loc_8301BAF0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8301bae4
	if (!ctx.cr6.gt) goto loc_8301BAE4;
	// addi r30,r29,-1
	ctx.r30.s64 = ctx.r29.s64 + -1;
	// b 0x8301bae8
	goto loc_8301BAE8;
loc_8301BAE4:
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
loc_8301BAE8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8301ba4c
	if (!ctx.cr6.gt) goto loc_8301BA4C;
loc_8301BAF0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8301bb00
	if (!ctx.cr6.eq) goto loc_8301BB00;
loc_8301BAF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8301bb04
	goto loc_8301BB04;
loc_8301BB00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301BB04:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301BB10"))) PPC_WEAK_FUNC(sub_8301BB10);
PPC_FUNC_IMPL(__imp__sub_8301BB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,-1
	ctx.r10.s64 = -1;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8301bb5c
	if (ctx.cr0.eq) goto loc_8301BB5C;
loc_8301BB44:
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bgt cr6,0x8301bb5c
	if (ctx.cr6.gt) goto loc_8301BB5C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8301bb44
	if (!ctx.cr0.eq) goto loc_8301BB44;
loc_8301BB5C:
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r11,-12508
	ctx.r9.s64 = ctx.r11.s64 + -12508;
	// lwz r11,-80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301bbc4
	if (ctx.cr6.eq) goto loc_8301BBC4;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r8,r9,-80
	ctx.r8.s64 = ctx.r9.s64 + -80;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_8301BB80:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8301bbb0
	if (!ctx.cr6.eq) goto loc_8301BBB0;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,1(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8301bbb0
	if (!ctx.cr6.eq) goto loc_8301BBB0;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,2(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301bc3c
	if (ctx.cr6.eq) goto loc_8301BC3C;
loc_8301BBB0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8301bb80
	if (!ctx.cr0.eq) goto loc_8301BB80;
loc_8301BBC4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x8301bbe0
	if (ctx.cr6.lt) goto loc_8301BBE0;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x8301bcfc
	if (!ctx.cr6.gt) goto loc_8301BCFC;
loc_8301BBE0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8301bcfc
	if (ctx.cr6.eq) goto loc_8301BCFC;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_8301BBF4:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8301bc24
	if (!ctx.cr6.eq) goto loc_8301BC24;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,1(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8301bc24
	if (!ctx.cr6.eq) goto loc_8301BC24;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,2(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301bc88
	if (ctx.cr6.eq) goto loc_8301BC88;
loc_8301BC24:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8301bbf4
	if (!ctx.cr0.eq) goto loc_8301BBF4;
	// b 0x8301bcfc
	goto loc_8301BCFC;
loc_8301BC3C:
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// b 0x8301bc60
	goto loc_8301BC60;
loc_8301BC44:
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x8301bc68
	if (ctx.cr6.eq) goto loc_8301BC68;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8301bc68
	if (ctx.cr6.eq) goto loc_8301BC68;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
loc_8301BC60:
	// cmpwi cr6,r10,44
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 44, ctx.xer);
	// bne cr6,0x8301bc44
	if (!ctx.cr6.eq) goto loc_8301BC44;
loc_8301BC68:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// beq cr6,0x8301bc80
	if (ctx.cr6.eq) goto loc_8301BC80;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x8301bbc4
	if (!ctx.cr6.eq) goto loc_8301BBC4;
loc_8301BC80:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x8301bc68
	goto loc_8301BC68;
loc_8301BC88:
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8301bcb4
	if (ctx.cr6.eq) goto loc_8301BCB4;
loc_8301BC94:
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x8301bca4
	if (ctx.cr6.lt) goto loc_8301BCA4;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x8301bcb4
	if (!ctx.cr6.gt) goto loc_8301BCB4;
loc_8301BCA4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8301bc94
	if (!ctx.cr0.eq) goto loc_8301BC94;
loc_8301BCB4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8301bcfc
	if (ctx.cr6.lt) goto loc_8301BCFC;
loc_8301BCC8:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8301bcf0
	if (ctx.cr6.gt) goto loc_8301BCF0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x8301bcc8
	if (!ctx.cr6.lt) goto loc_8301BCC8;
loc_8301BCF0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301bcfc
	if (!ctx.cr6.gt) goto loc_8301BCFC;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8301BCFC:
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x8301be20
	if (!ctx.cr6.lt) goto loc_8301BE20;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8301be20
	if (ctx.cr6.lt) goto loc_8301BE20;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8301be20
	if (ctx.cr6.gt) goto loc_8301BE20;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8301bd50
	if (ctx.cr6.gt) goto loc_8301BD50;
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bgt cr6,0x8301bd50
	if (ctx.cr6.gt) goto loc_8301BD50;
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x8301be20
	if (!ctx.cr6.gt) goto loc_8301BE20;
loc_8301BD50:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8301BD54:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8301bd7c
	if (ctx.cr6.gt) goto loc_8301BD7C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x8301bd54
	if (!ctx.cr6.lt) goto loc_8301BD54;
loc_8301BD7C:
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// b 0x8301bd88
	goto loc_8301BD88;
loc_8301BD84:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8301BD88:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x8301bd84
	if (ctx.cr6.lt) goto loc_8301BD84;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8301be20
	if (ctx.cr6.eq) goto loc_8301BE20;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_8301BDB0:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8301bde0
	if (!ctx.cr6.eq) goto loc_8301BDE0;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,1(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8301bde0
	if (!ctx.cr6.eq) goto loc_8301BDE0;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,2(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8301bdf8
	if (ctx.cr6.eq) goto loc_8301BDF8;
loc_8301BDE0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8301bdb0
	if (!ctx.cr0.eq) goto loc_8301BDB0;
	// b 0x8301be20
	goto loc_8301BE20;
loc_8301BDF8:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// beq cr6,0x8301be20
	if (ctx.cr6.eq) goto loc_8301BE20;
loc_8301BE08:
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x8301be20
	if (ctx.cr6.eq) goto loc_8301BE20;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8301be08
	if (!ctx.cr0.eq) goto loc_8301BE08;
loc_8301BE20:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8301bed8
	if (ctx.cr6.lt) goto loc_8301BED8;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8301bed8
	if (ctx.cr6.gt) goto loc_8301BED8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x8301bed8
	if (!ctx.cr6.lt) goto loc_8301BED8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8301BE44:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8301be6c
	if (ctx.cr6.gt) goto loc_8301BE6C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x8301be44
	if (!ctx.cr6.lt) goto loc_8301BE44;
loc_8301BE6C:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301be80
	if (ctx.cr6.eq) goto loc_8301BE80;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8301BE80:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8301bea0
	goto loc_8301BEA0;
loc_8301BE88:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8301beb0
	if (ctx.cr6.gt) goto loc_8301BEB0;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8301BEA0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x8301be88
	if (!ctx.cr6.lt) goto loc_8301BE88;
loc_8301BEB0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301bed8
	if (ctx.cr6.eq) goto loc_8301BED8;
	// b 0x8301bed4
	goto loc_8301BED4;
loc_8301BEC4:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8301bed4
	if (ctx.cr6.lt) goto loc_8301BED4;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x8301bee4
	if (!ctx.cr6.gt) goto loc_8301BEE4;
loc_8301BED4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8301BED8:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8301bec4
	if (!ctx.cr0.eq) goto loc_8301BEC4;
loc_8301BEE4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x8301bf8c
	if (ctx.cr6.lt) goto loc_8301BF8C;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x8301bf8c
	if (ctx.cr6.gt) goto loc_8301BF8C;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// beq cr6,0x8301bf8c
	if (ctx.cr6.eq) goto loc_8301BF8C;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// beq cr6,0x8301bf8c
	if (ctx.cr6.eq) goto loc_8301BF8C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8301BF18:
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x8301bf40
	if (ctx.cr6.gt) goto loc_8301BF40;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// bge cr6,0x8301bf18
	if (!ctx.cr6.lt) goto loc_8301BF18;
loc_8301BF40:
	// cmpwi cr6,r11,999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 999, ctx.xer);
	// ble cr6,0x8301bf50
	if (!ctx.cr6.gt) goto loc_8301BF50;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x8301bf60
	goto loc_8301BF60;
loc_8301BF50:
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// addi r9,r11,1900
	ctx.r9.s64 = ctx.r11.s64 + 1900;
	// bge cr6,0x8301bf60
	if (!ctx.cr6.lt) goto loc_8301BF60;
	// addi r9,r11,2000
	ctx.r9.s64 = ctx.r11.s64 + 2000;
loc_8301BF60:
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// b 0x8301bf7c
	goto loc_8301BF7C;
loc_8301BF68:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8301bf78
	if (ctx.cr6.lt) goto loc_8301BF78;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x8301bf90
	if (!ctx.cr6.gt) goto loc_8301BF90;
loc_8301BF78:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8301BF7C:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8301bf68
	if (!ctx.cr0.eq) goto loc_8301BF68;
	// b 0x8301bf90
	goto loc_8301BF90;
loc_8301BF8C:
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8301BF90:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8301bfec
	if (ctx.cr6.lt) goto loc_8301BFEC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8301bfec
	if (ctx.cr6.gt) goto loc_8301BFEC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x8301bfd8
	if (ctx.cr6.lt) goto loc_8301BFD8;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x8301bfd8
	if (ctx.cr6.gt) goto loc_8301BFD8;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8301BFD8:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r10,58
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 58, ctx.xer);
	// bne cr6,0x8301bfec
	if (!ctx.cr6.eq) goto loc_8301BFEC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8301BFEC:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8301c048
	if (ctx.cr6.lt) goto loc_8301C048;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8301c048
	if (ctx.cr6.gt) goto loc_8301C048;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x8301c034
	if (ctx.cr6.lt) goto loc_8301C034;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x8301c034
	if (ctx.cr6.gt) goto loc_8301C034;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8301C034:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,58
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 58, ctx.xer);
	// bne cr6,0x8301c048
	if (!ctx.cr6.eq) goto loc_8301C048;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8301C048:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8301c094
	if (ctx.cr6.lt) goto loc_8301C094;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8301c094
	if (ctx.cr6.gt) goto loc_8301C094;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x8301c090
	if (ctx.cr6.lt) goto loc_8301C090;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x8301c090
	if (ctx.cr6.gt) goto loc_8301C090;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8301C090:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8301C094:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8301c10c
	if (!ctx.cr6.lt) goto loc_8301C10C;
	// b 0x8301c0b4
	goto loc_8301C0B4;
loc_8301C0A0:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x8301c0c0
	if (!ctx.cr6.lt) goto loc_8301C0C0;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x8301c0c0
	if (!ctx.cr6.gt) goto loc_8301C0C0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8301C0B4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8301c0a0
	if (!ctx.cr0.eq) goto loc_8301C0A0;
loc_8301C0C0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8301c10c
	if (ctx.cr6.lt) goto loc_8301C10C;
loc_8301C0D4:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8301c0fc
	if (ctx.cr6.gt) goto loc_8301C0FC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x8301c0d4
	if (!ctx.cr6.lt) goto loc_8301C0D4;
loc_8301C0FC:
	// cmpwi cr6,r10,999
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 999, ctx.xer);
	// ble cr6,0x8301c10c
	if (!ctx.cr6.gt) goto loc_8301C10C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_8301C10C:
	// cmpwi cr6,r9,1900
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1900, ctx.xer);
	// ble cr6,0x8301c11c
	if (!ctx.cr6.gt) goto loc_8301C11C;
	// addi r11,r9,-1900
	ctx.r11.s64 = ctx.r9.s64 + -1900;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8301C11C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8301ba30
	ctx.lr = 0x8301C124;
	sub_8301BA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C138"))) PPC_WEAK_FUNC(sub_8301C138);
PPC_FUNC_IMPL(__imp__sub_8301C138) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// lwz r11,-14608(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14608);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-31986
	ctx.r10.s64 = -2096234496;
	// addi r10,r10,-12456
	ctx.r10.s64 = ctx.r10.s64 + -12456;
	// stw r11,-14608(r9)
	PPC_STORE_U32(ctx.r9.u32 + -14608, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C168"))) PPC_WEAK_FUNC(sub_8301C168);
PPC_FUNC_IMPL(__imp__sub_8301C168) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// lwz r11,-14608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-14608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C188"))) PPC_WEAK_FUNC(sub_8301C188);
PPC_FUNC_IMPL(__imp__sub_8301C188) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// addi r11,r11,-12456
	ctx.r11.s64 = ctx.r11.s64 + -12456;
	// lwz r10,-14608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14608);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C1A8"))) PPC_WEAK_FUNC(sub_8301C1A8);
PPC_FUNC_IMPL(__imp__sub_8301C1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8301C1B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-14596
	ctx.r31.s64 = ctx.r11.s64 + -14596;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c1dc
	if (!ctx.cr6.eq) goto loc_8301C1DC;
	// bl 0x83010640
	ctx.lr = 0x8301C1D8;
	sub_83010640(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8301C1DC:
	// bl 0x83010640
	ctx.lr = 0x8301C1E0;
	sub_83010640(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8301C204:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x8301c204
	if (ctx.cr6.lt) goto loc_8301C204;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8301c254
	if (ctx.cr6.eq) goto loc_8301C254;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83020cb8
	ctx.lr = 0x8301C244;
	sub_83020CB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83020d58
	ctx.lr = 0x8301C254;
	sub_83020D58(ctx, base);
loc_8301C254:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C260"))) PPC_WEAK_FUNC(sub_8301C260);
PPC_FUNC_IMPL(__imp__sub_8301C260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8301C268;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301c28c
	if (ctx.cr0.eq) goto loc_8301C28C;
	// bl 0x83013350
	ctx.lr = 0x8301C288;
	sub_83013350(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8301C28C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301c2a8
	if (ctx.cr0.eq) goto loc_8301C2A8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8301C2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8301C2A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// bne cr6,0x8301c2e0
	if (!ctx.cr6.eq) goto loc_8301C2E0;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301c320
	if (ctx.cr0.eq) goto loc_8301C320;
	// lis r4,28787
	ctx.r4.s64 = 1886584832;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r4,r4,29548
	ctx.r4.u64 = ctx.r4.u64 | 29548;
	// bl 0x822138a8
	ctx.lr = 0x8301C2D8;
	sub_822138A8(ctx, base);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// b 0x8301c320
	goto loc_8301C320;
loc_8301C2E0:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301c320
	if (!ctx.cr6.eq) goto loc_8301C320;
	// lis r4,28787
	ctx.r4.s64 = 1886584832;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,29548
	ctx.r4.u64 = ctx.r4.u64 | 29548;
	// ori r3,r3,35032
	ctx.r3.u64 = ctx.r3.u64 | 35032;
	// bl 0x82217ec8
	ctx.lr = 0x8301C304;
	sub_82217EC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r3.u32);
	// beq 0x8301c320
	if (ctx.cr0.eq) goto loc_8301C320;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,35032
	ctx.r5.u64 = ctx.r5.u64 | 35032;
	// bl 0x82d5cb60
	ctx.lr = 0x8301C320;
	sub_82D5CB60(ctx, base);
loc_8301C320:
	// lwz r31,292(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8301c364
	if (ctx.cr0.eq) goto loc_8301C364;
	// addi r5,r31,524
	ctx.r5.s64 = ctx.r31.s64 + 524;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8301c1a8
	ctx.lr = 0x8301C33C;
	sub_8301C1A8(ctx, base);
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x8300e978
	ctx.lr = 0x8301C35C;
	sub_8300E978(ctx, base);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x830210b8
	ctx.lr = 0x8301C364;
	sub_830210B8(ctx, base);
loc_8301C364:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8301c378
	if (ctx.cr6.eq) goto loc_8301C378;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// li r3,-8
	ctx.r3.s64 = -8;
	// beq cr6,0x8301c37c
	if (ctx.cr6.eq) goto loc_8301C37C;
loc_8301C378:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8301C37C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C388"))) PPC_WEAK_FUNC(sub_8301C388);
PPC_FUNC_IMPL(__imp__sub_8301C388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b8
	ctx.lr = 0x8301C390;
	__savegprlr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r31,292(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 292);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r29,r31,2269
	ctx.r29.s64 = ctx.r31.s64 + 2269;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stb r11,2265(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2265, ctx.r11.u8);
	// stb r24,2266(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2266, ctx.r24.u8);
	// stb r28,2264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2264, ctx.r28.u8);
	// bl 0x82d5c630
	ctx.lr = 0x8301C3D4;
	sub_82D5C630(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r29,r30
	ctx.r3.u64 = ctx.r29.u64 + ctx.r30.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301C3E4;
	sub_82D5C630(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bne cr6,0x8301c414
	if (!ctx.cr6.eq) goto loc_8301C414;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// bl 0x8300e9b8
	ctx.lr = 0x8301C404;
	sub_8300E9B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x83021108
	ctx.lr = 0x8301C414;
	sub_83021108(ctx, base);
loc_8301C414:
	// lwz r11,284(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 284);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x8301c604
	if (ctx.cr6.lt) goto loc_8301C604;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bgt cr6,0x8301c604
	if (ctx.cr6.gt) goto loc_8301C604;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8301c604
	if (ctx.cr0.eq) goto loc_8301C604;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r9,2264(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2264);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// stb r24,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r24.u8);
	// stb r24,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r24.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r24,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r24.u8);
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r30.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// srawi r10,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 8;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r28,r11,18560
	ctx.r28.s64 = ctx.r11.s64 + 18560;
	// bne cr6,0x8301c530
	if (!ctx.cr6.eq) goto loc_8301C530;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e978
	ctx.lr = 0x8301C494;
	sub_8300E978(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x8300e9b8
	ctx.lr = 0x8301C4A4;
	sub_8300E9B8(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e9b8
	ctx.lr = 0x8301C4B4;
	sub_8300E9B8(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e9b8
	ctx.lr = 0x8301C4C4;
	sub_8300E9B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e9b8
	ctx.lr = 0x8301C4D4;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300ea88
	ctx.lr = 0x8301C4E4;
	sub_8300EA88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e978
	ctx.lr = 0x8301C4EC;
	sub_8300E978(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x8300e9b8
	ctx.lr = 0x8301C4FC;
	sub_8300E9B8(ctx, base);
	// addi r4,r28,48
	ctx.r4.s64 = ctx.r28.s64 + 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e9b8
	ctx.lr = 0x8301C50C;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e9b8
	ctx.lr = 0x8301C51C;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300ea88
	ctx.lr = 0x8301C52C;
	sub_8300EA88(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
loc_8301C530:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bne cr6,0x8301c5e4
	if (!ctx.cr6.eq) goto loc_8301C5E4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830210b8
	ctx.lr = 0x8301C548;
	sub_830210B8(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x83021108
	ctx.lr = 0x8301C558;
	sub_83021108(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301C568;
	sub_83021108(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301C578;
	sub_83021108(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301C588;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021200
	ctx.lr = 0x8301C598;
	sub_83021200(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830210b8
	ctx.lr = 0x8301C5A0;
	sub_830210B8(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x83021108
	ctx.lr = 0x8301C5B0;
	sub_83021108(ctx, base);
	// addi r4,r28,48
	ctx.r4.s64 = ctx.r28.s64 + 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301C5C0;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301C5D0;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021200
	ctx.lr = 0x8301C5E0;
	sub_83021200(ctx, base);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
loc_8301C5E4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8301c604
	if (!ctx.cr6.eq) goto loc_8301C604;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,782
	ctx.r3.s64 = ctx.r31.s64 + 782;
	// bl 0x83020d58
	ctx.lr = 0x8301C604;
	sub_83020D58(ctx, base);
loc_8301C604:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// srawi r10,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 8;
	// addi r9,r30,5
	ctx.r9.s64 = ctx.r30.s64 + 5;
	// stb r30,2268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2268, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,2267(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2267, ctx.r10.u8);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82d5c508
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C638"))) PPC_WEAK_FUNC(sub_8301C638);
PPC_FUNC_IMPL(__imp__sub_8301C638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8301C640;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,292(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x8301c668
	if (ctx.cr6.eq) goto loc_8301C668;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8301c9e8
	goto loc_8301C9E8;
loc_8301C668:
	// lbz r10,18648(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18648);
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// blt cr6,0x8301c9e4
	if (ctx.cr6.lt) goto loc_8301C9E4;
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// bgt cr6,0x8301c9e4
	if (ctx.cr6.gt) goto loc_8301C9E4;
	// lbz r10,18649(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18649);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8301c9dc
	if (!ctx.cr6.eq) goto loc_8301C9DC;
	// lbz r10,18650(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18650);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8301c9dc
	if (!ctx.cr0.eq) goto loc_8301C9DC;
	// lbz r10,18651(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18651);
	// lbz r9,18652(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18652);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8301c6b8
	if (ctx.cr6.eq) goto loc_8301C6B8;
loc_8301C6B0:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8301c9e8
	goto loc_8301C9E8;
loc_8301C6B8:
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r10,284(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// blt cr6,0x8301c97c
	if (ctx.cr6.lt) goto loc_8301C97C;
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// bgt cr6,0x8301c97c
	if (ctx.cr6.gt) goto loc_8301C97C;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8301c97c
	if (ctx.cr0.eq) goto loc_8301C97C;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8301c6fc
	if (!ctx.cr6.eq) goto loc_8301C6FC;
	// addi r5,r11,-5
	ctx.r5.s64 = ctx.r11.s64 + -5;
	// addi r4,r31,18653
	ctx.r4.s64 = ctx.r31.s64 + 18653;
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// bl 0x83020d58
	ctx.lr = 0x8301C6FC;
	sub_83020D58(ctx, base);
loc_8301C6FC:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lbz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8301c6b0
	if (ctx.cr6.lt) goto loc_8301C6B0;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lbz r7,18(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// lbz r7,18648(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18648);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// lbz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r30,r10,18560
	ctx.r30.s64 = ctx.r10.s64 + 18560;
	// bne cr6,0x8301c87c
	if (!ctx.cr6.eq) goto loc_8301C87C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e978
	ctx.lr = 0x8301C794;
	sub_8300E978(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// bl 0x8300e9b8
	ctx.lr = 0x8301C7A4;
	sub_8300E9B8(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e9b8
	ctx.lr = 0x8301C7B4;
	sub_8300E9B8(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e9b8
	ctx.lr = 0x8301C7C4;
	sub_8300E9B8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r4,r10,18648
	ctx.r4.s64 = ctx.r10.s64 + 18648;
	// bl 0x8300e9b8
	ctx.lr = 0x8301C7E0;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300ea88
	ctx.lr = 0x8301C7F0;
	sub_8300EA88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e978
	ctx.lr = 0x8301C7F8;
	sub_8300E978(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// bl 0x8300e9b8
	ctx.lr = 0x8301C808;
	sub_8300E9B8(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e9b8
	ctx.lr = 0x8301C818;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e9b8
	ctx.lr = 0x8301C828;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300ea88
	ctx.lr = 0x8301C838;
	sub_8300EA88(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,18648
	ctx.r9.s64 = ctx.r9.s64 + 18648;
loc_8301C84C:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8301c86c
	if (!ctx.cr0.eq) goto loc_8301C86C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8301c84c
	if (!ctx.cr6.eq) goto loc_8301C84C;
loc_8301C86C:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8301c87c
	if (ctx.cr0.eq) goto loc_8301C87C;
	// li r3,-5
	ctx.r3.s64 = -5;
	// b 0x8301c9e8
	goto loc_8301C9E8;
loc_8301C87C:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// bne cr6,0x8301c97c
	if (!ctx.cr6.eq) goto loc_8301C97C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830210b8
	ctx.lr = 0x8301C894;
	sub_830210B8(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// bl 0x83021108
	ctx.lr = 0x8301C8A4;
	sub_83021108(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301C8B4;
	sub_83021108(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301C8C4;
	sub_83021108(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r4,r10,18648
	ctx.r4.s64 = ctx.r10.s64 + 18648;
	// bl 0x83021108
	ctx.lr = 0x8301C8E0;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021200
	ctx.lr = 0x8301C8F0;
	sub_83021200(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830210b8
	ctx.lr = 0x8301C8F8;
	sub_830210B8(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// bl 0x83021108
	ctx.lr = 0x8301C908;
	sub_83021108(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301C918;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301C928;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021200
	ctx.lr = 0x8301C938;
	sub_83021200(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// addi r9,r9,18648
	ctx.r9.s64 = ctx.r9.s64 + 18648;
loc_8301C94C:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8301c96c
	if (!ctx.cr0.eq) goto loc_8301C96C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8301c94c
	if (!ctx.cr6.eq) goto loc_8301C94C;
loc_8301C96C:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8301c97c
	if (ctx.cr0.eq) goto loc_8301C97C;
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x8301c9e8
	goto loc_8301C9E8;
loc_8301C97C:
	// lbz r10,18648(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18648);
	// cmplwi cr6,r10,22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 22, ctx.xer);
	// bne cr6,0x8301c9c8
	if (!ctx.cr6.eq) goto loc_8301C9C8;
	// lwz r10,284(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// bge cr6,0x8301c9c8
	if (!ctx.cr6.lt) goto loc_8301C9C8;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r9,18648
	ctx.r4.s64 = ctx.r9.s64 + 18648;
	// bl 0x8300e9b8
	ctx.lr = 0x8301C9AC;
	sub_8300E9B8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r4,r10,18648
	ctx.r4.s64 = ctx.r10.s64 + 18648;
	// bl 0x83021108
	ctx.lr = 0x8301C9C8;
	sub_83021108(ctx, base);
loc_8301C9C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8301c9e8
	goto loc_8301C9E8;
loc_8301C9DC:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x8301c9e8
	goto loc_8301C9E8;
loc_8301C9E4:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_8301C9E8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301C9F0"))) PPC_WEAK_FUNC(sub_8301C9F0);
PPC_FUNC_IMPL(__imp__sub_8301C9F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,18648
	ctx.r11.s64 = ctx.r11.s64 + 18648;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8301ca18
	if (ctx.cr6.eq) goto loc_8301CA18;
loc_8301CA10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8301CA18:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x8301ca10
	if (ctx.cr6.gt) goto loc_8301CA10;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CA58"))) PPC_WEAK_FUNC(sub_8301CA58);
PPC_FUNC_IMPL(__imp__sub_8301CA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8301CA60;
	__savegprlr_28(ctx, base);
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r5,28(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// addi r6,r3,32
	ctx.r6.s64 = ctx.r3.s64 + 32;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83021920
	ctx.lr = 0x8301CA8C;
	sub_83021920(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83021a40
	ctx.lr = 0x8301CA9C;
	sub_83021A40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83021a48
	ctx.lr = 0x8301CAA4;
	sub_83021A48(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301CAC0;
	sub_82D5C630(ctx, base);
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301CAC8"))) PPC_WEAK_FUNC(sub_8301CAC8);
PPC_FUNC_IMPL(__imp__sub_8301CAC8) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8301cad8
	if (ctx.cr6.eq) goto loc_8301CAD8;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
loc_8301CAD8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8301cae4
	if (ctx.cr6.eq) goto loc_8301CAE4;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_8301CAE4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301caf4
	if (!ctx.cr6.eq) goto loc_8301CAF4;
loc_8301CAEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8301CAF4:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8301caec
	if (ctx.cr6.eq) goto loc_8301CAEC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8301cb0c
	if (ctx.cr6.eq) goto loc_8301CB0C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8301CB0C:
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8301caec
	if (ctx.cr6.eq) goto loc_8301CAEC;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// ble cr6,0x8301cb54
	if (!ctx.cr6.gt) goto loc_8301CB54;
	// clrlwi. r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// ble 0x8301cb54
	if (!ctx.cr0.gt) goto loc_8301CB54;
loc_8301CB34:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8301caec
	if (ctx.cr6.eq) goto loc_8301CAEC;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// bgt 0x8301cb34
	if (ctx.cr0.gt) goto loc_8301CB34;
loc_8301CB54:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CB68"))) PPC_WEAK_FUNC(sub_8301CB68);
PPC_FUNC_IMPL(__imp__sub_8301CB68) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r11,18672
	ctx.r6.s64 = ctx.r11.s64 + 18672;
loc_8301CB84:
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8301cbd8
	if (ctx.cr6.lt) goto loc_8301CBD8;
	// addi r8,r6,8
	ctx.r8.s64 = ctx.r6.s64 + 8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8301cbd0
	if (ctx.cr0.eq) goto loc_8301CBD0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8301CBB0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8301cbd0
	if (!ctx.cr0.eq) goto loc_8301CBD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8301cbb0
	if (!ctx.cr6.eq) goto loc_8301CBB0;
loc_8301CBD0:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8301cbf0
	if (ctx.cr0.eq) goto loc_8301CBF0;
loc_8301CBD8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mulli r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 * 24;
	// lwzx r11,r10,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8301cb84
	if (!ctx.cr6.eq) goto loc_8301CB84;
	// b 0x8301cbf8
	goto loc_8301CBF8;
loc_8301CBF0:
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// lwzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
loc_8301CBF8:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CC00"))) PPC_WEAK_FUNC(sub_8301CC00);
PPC_FUNC_IMPL(__imp__sub_8301CC00) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8301cc2c
	if (!ctx.cr6.gt) goto loc_8301CC2C;
loc_8301CC08:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x8301cc2c
	if (!ctx.cr6.gt) goto loc_8301CC2C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bgt 0x8301cc08
	if (ctx.cr0.gt) goto loc_8301CC08;
loc_8301CC2C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CC40"))) PPC_WEAK_FUNC(sub_8301CC40);
PPC_FUNC_IMPL(__imp__sub_8301CC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4ac
	ctx.lr = 0x8301CC48;
	__savegprlr_21(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r6,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r5,1224
	ctx.r5.s64 = 1224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r27,r31,r6
	ctx.r27.u64 = ctx.r31.u64 + ctx.r6.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x8301CC70;
	sub_82D5CB60(ctx, base);
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301CC84;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d918
	if (ctx.cr0.eq) goto loc_8301D918;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8301d918
	if (!ctx.cr6.eq) goto loc_8301D918;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301CCA8;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d910
	if (ctx.cr0.eq) goto loc_8301D910;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8301d910
	if (!ctx.cr6.eq) goto loc_8301D910;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// add r26,r3,r11
	ctx.r26.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8301ccf8
	if (ctx.cr6.eq) goto loc_8301CCF8;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8301cac8
	ctx.lr = 0x8301CCE0;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8301ccf0
	if (!ctx.cr0.eq) goto loc_8301CCF0;
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301CCF0:
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_8301CCF8:
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301CD08;
	sub_8301CAC8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8301d908
	if (ctx.cr0.eq) goto loc_8301D908;
	// lwz r31,396(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8301d908
	if (ctx.cr6.lt) goto loc_8301D908;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bgt cr6,0x8301d908
	if (ctx.cr6.gt) goto loc_8301D908;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r31,452(r28)
	PPC_STORE_U32(ctx.r28.u32 + 452, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,456
	ctx.r3.s64 = ctx.r28.s64 + 456;
	// bl 0x82d5c630
	ctx.lr = 0x8301CD38;
	sub_82D5C630(ctx, base);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301CD4C;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d900
	if (ctx.cr0.eq) goto loc_8301D900;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8301d900
	if (!ctx.cr6.eq) goto loc_8301D900;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r25,r3,r11
	ctx.r25.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301CD74;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d8f8
	if (ctx.cr0.eq) goto loc_8301D8F8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8301d8f8
	if (!ctx.cr6.eq) goto loc_8301D8F8;
	// lwz r4,396(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// bl 0x8301cb68
	ctx.lr = 0x8301CD90;
	sub_8301CB68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 488, ctx.r3.u32);
	// bne 0x8301cda4
	if (!ctx.cr0.eq) goto loc_8301CDA4;
	// li r3,-7
	ctx.r3.s64 = -7;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301CDA4:
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301CDB8;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d8f0
	if (ctx.cr0.eq) goto loc_8301D8F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8301d8f0
	if (!ctx.cr6.eq) goto loc_8301D8F0;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// li r24,0
	ctx.r24.s64 = 0;
	// add r29,r3,r11
	ctx.r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// b 0x8301cff0
	goto loc_8301CFF0;
loc_8301CDE0:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 48, ctx.xer);
	// beq cr6,0x8301cfec
	if (ctx.cr6.eq) goto loc_8301CFEC;
	// cmpwi cr6,r31,49
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 49, ctx.xer);
	// beq cr6,0x8301cfec
	if (ctx.cr6.eq) goto loc_8301CFEC;
	// lwz r4,396(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bne cr6,0x8301ce0c
	if (!ctx.cr6.eq) goto loc_8301CE0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301cb68
	ctx.lr = 0x8301CE08;
	sub_8301CB68(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8301CE0C:
	// cmpwi cr6,r31,19
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 19, ctx.xer);
	// beq cr6,0x8301ce1c
	if (ctx.cr6.eq) goto loc_8301CE1C;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// bne cr6,0x8301cfe8
	if (!ctx.cr6.eq) goto loc_8301CFE8;
loc_8301CE1C:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8301ce68
	if (!ctx.cr6.eq) goto loc_8301CE68;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8301ce64
	if (!ctx.cr6.gt) goto loc_8301CE64;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_8301CE3C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301ce5c
	if (!ctx.cr6.gt) goto loc_8301CE5C;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x8301ce3c
	if (ctx.cr0.gt) goto loc_8301CE3C;
loc_8301CE5C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301cfe4
	if (!ctx.cr6.gt) goto loc_8301CFE4;
loc_8301CE64:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301CE68:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8301ceb4
	if (!ctx.cr6.eq) goto loc_8301CEB4;
	// addi r11,r28,36
	ctx.r11.s64 = ctx.r28.s64 + 36;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8301ceb0
	if (!ctx.cr6.gt) goto loc_8301CEB0;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_8301CE88:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301cea8
	if (!ctx.cr6.gt) goto loc_8301CEA8;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x8301ce88
	if (ctx.cr0.gt) goto loc_8301CE88;
loc_8301CEA8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301cfe4
	if (!ctx.cr6.gt) goto loc_8301CFE4;
loc_8301CEB0:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301CEB4:
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x8301cf00
	if (!ctx.cr6.eq) goto loc_8301CF00;
	// addi r11,r28,68
	ctx.r11.s64 = ctx.r28.s64 + 68;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8301cefc
	if (!ctx.cr6.gt) goto loc_8301CEFC;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_8301CED4:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301cef4
	if (!ctx.cr6.gt) goto loc_8301CEF4;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x8301ced4
	if (ctx.cr0.gt) goto loc_8301CED4;
loc_8301CEF4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301cfe4
	if (!ctx.cr6.gt) goto loc_8301CFE4;
loc_8301CEFC:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301CF00:
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x8301cf4c
	if (!ctx.cr6.eq) goto loc_8301CF4C;
	// addi r11,r28,100
	ctx.r11.s64 = ctx.r28.s64 + 100;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8301cf48
	if (!ctx.cr6.gt) goto loc_8301CF48;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_8301CF20:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301cf40
	if (!ctx.cr6.gt) goto loc_8301CF40;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x8301cf20
	if (ctx.cr0.gt) goto loc_8301CF20;
loc_8301CF40:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301cfe4
	if (!ctx.cr6.gt) goto loc_8301CFE4;
loc_8301CF48:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301CF4C:
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// bne cr6,0x8301cf98
	if (!ctx.cr6.eq) goto loc_8301CF98;
	// addi r11,r28,132
	ctx.r11.s64 = ctx.r28.s64 + 132;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8301cf94
	if (!ctx.cr6.gt) goto loc_8301CF94;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_8301CF6C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301cf8c
	if (!ctx.cr6.gt) goto loc_8301CF8C;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x8301cf6c
	if (ctx.cr0.gt) goto loc_8301CF6C;
loc_8301CF8C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301cfe4
	if (!ctx.cr6.gt) goto loc_8301CFE4;
loc_8301CF94:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301CF98:
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bne cr6,0x8301cfe4
	if (!ctx.cr6.eq) goto loc_8301CFE4;
	// addi r11,r28,164
	ctx.r11.s64 = ctx.r28.s64 + 164;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8301cfe0
	if (!ctx.cr6.gt) goto loc_8301CFE0;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_8301CFB8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301cfd8
	if (!ctx.cr6.gt) goto loc_8301CFD8;
	// lbzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt 0x8301cfb8
	if (ctx.cr0.gt) goto loc_8301CFB8;
loc_8301CFD8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301cfe4
	if (!ctx.cr6.gt) goto loc_8301CFE4;
loc_8301CFE0:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301CFE4:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_8301CFE8:
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
loc_8301CFEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8301CFF0:
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301D000;
	sub_8301CAC8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8301cde0
	if (!ctx.cr0.eq) goto loc_8301CDE0;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301D01C;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d8e8
	if (ctx.cr0.eq) goto loc_8301D8E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8301d8e8
	if (!ctx.cr6.eq) goto loc_8301D8E8;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8301cac8
	ctx.lr = 0x8301D03C;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d8e0
	if (ctx.cr0.eq) goto loc_8301D8E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bne cr6,0x8301d8e0
	if (!ctx.cr6.eq) goto loc_8301D8E0;
	// lwz r7,396(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// addi r11,r28,388
	ctx.r11.s64 = ctx.r28.s64 + 388;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8301d094
	if (!ctx.cr6.gt) goto loc_8301D094;
	// addi r9,r7,-32
	ctx.r9.s64 = ctx.r7.s64 + -32;
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_8301D06C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301d08c
	if (!ctx.cr6.gt) goto loc_8301D08C;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x8301d06c
	if (ctx.cr0.gt) goto loc_8301D06C;
loc_8301D08C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301d098
	if (!ctx.cr6.gt) goto loc_8301D098;
loc_8301D094:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301D098:
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301D0AC;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d8d8
	if (ctx.cr0.eq) goto loc_8301D8D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bne cr6,0x8301d8d8
	if (!ctx.cr6.eq) goto loc_8301D8D8;
	// lwz r7,396(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// addi r11,r28,420
	ctx.r11.s64 = ctx.r28.s64 + 420;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8301d104
	if (!ctx.cr6.gt) goto loc_8301D104;
	// addi r9,r7,-32
	ctx.r9.s64 = ctx.r7.s64 + -32;
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_8301D0DC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301d0fc
	if (!ctx.cr6.gt) goto loc_8301D0FC;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x8301d0dc
	if (ctx.cr0.gt) goto loc_8301D0DC;
loc_8301D0FC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301d108
	if (!ctx.cr6.gt) goto loc_8301D108;
loc_8301D104:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301D108:
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301D11C;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d8d0
	if (ctx.cr0.eq) goto loc_8301D8D0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8301d8d0
	if (!ctx.cr6.eq) goto loc_8301D8D0;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// add r29,r3,r11
	ctx.r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// b 0x8301d350
	goto loc_8301D350;
loc_8301D140:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 48, ctx.xer);
	// beq cr6,0x8301d34c
	if (ctx.cr6.eq) goto loc_8301D34C;
	// cmpwi cr6,r31,49
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 49, ctx.xer);
	// beq cr6,0x8301d34c
	if (ctx.cr6.eq) goto loc_8301D34C;
	// lwz r4,396(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bne cr6,0x8301d16c
	if (!ctx.cr6.eq) goto loc_8301D16C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301cb68
	ctx.lr = 0x8301D168;
	sub_8301CB68(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8301D16C:
	// cmpwi cr6,r31,19
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 19, ctx.xer);
	// beq cr6,0x8301d17c
	if (ctx.cr6.eq) goto loc_8301D17C;
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 20, ctx.xer);
	// bne cr6,0x8301d348
	if (!ctx.cr6.eq) goto loc_8301D348;
loc_8301D17C:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8301d1c8
	if (!ctx.cr6.eq) goto loc_8301D1C8;
	// addi r11,r28,196
	ctx.r11.s64 = ctx.r28.s64 + 196;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8301d1c4
	if (!ctx.cr6.gt) goto loc_8301D1C4;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_8301D19C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301d1bc
	if (!ctx.cr6.gt) goto loc_8301D1BC;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x8301d19c
	if (ctx.cr0.gt) goto loc_8301D19C;
loc_8301D1BC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301d344
	if (!ctx.cr6.gt) goto loc_8301D344;
loc_8301D1C4:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301D1C8:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8301d214
	if (!ctx.cr6.eq) goto loc_8301D214;
	// addi r11,r28,228
	ctx.r11.s64 = ctx.r28.s64 + 228;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8301d210
	if (!ctx.cr6.gt) goto loc_8301D210;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_8301D1E8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301d208
	if (!ctx.cr6.gt) goto loc_8301D208;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x8301d1e8
	if (ctx.cr0.gt) goto loc_8301D1E8;
loc_8301D208:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301d344
	if (!ctx.cr6.gt) goto loc_8301D344;
loc_8301D210:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301D214:
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x8301d260
	if (!ctx.cr6.eq) goto loc_8301D260;
	// addi r11,r28,260
	ctx.r11.s64 = ctx.r28.s64 + 260;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8301d25c
	if (!ctx.cr6.gt) goto loc_8301D25C;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_8301D234:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301d254
	if (!ctx.cr6.gt) goto loc_8301D254;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x8301d234
	if (ctx.cr0.gt) goto loc_8301D234;
loc_8301D254:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301d344
	if (!ctx.cr6.gt) goto loc_8301D344;
loc_8301D25C:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301D260:
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x8301d2ac
	if (!ctx.cr6.eq) goto loc_8301D2AC;
	// addi r11,r28,292
	ctx.r11.s64 = ctx.r28.s64 + 292;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8301d2a8
	if (!ctx.cr6.gt) goto loc_8301D2A8;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_8301D280:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301d2a0
	if (!ctx.cr6.gt) goto loc_8301D2A0;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x8301d280
	if (ctx.cr0.gt) goto loc_8301D280;
loc_8301D2A0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301d344
	if (!ctx.cr6.gt) goto loc_8301D344;
loc_8301D2A8:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301D2AC:
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// bne cr6,0x8301d2f8
	if (!ctx.cr6.eq) goto loc_8301D2F8;
	// addi r11,r28,324
	ctx.r11.s64 = ctx.r28.s64 + 324;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8301d2f4
	if (!ctx.cr6.gt) goto loc_8301D2F4;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_8301D2CC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301d2ec
	if (!ctx.cr6.gt) goto loc_8301D2EC;
	// lbzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x8301d2cc
	if (ctx.cr0.gt) goto loc_8301D2CC;
loc_8301D2EC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301d344
	if (!ctx.cr6.gt) goto loc_8301D344;
loc_8301D2F4:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301D2F8:
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bne cr6,0x8301d344
	if (!ctx.cr6.eq) goto loc_8301D344;
	// addi r11,r28,356
	ctx.r11.s64 = ctx.r28.s64 + 356;
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8301d340
	if (!ctx.cr6.gt) goto loc_8301D340;
	// addi r9,r4,-32
	ctx.r9.s64 = ctx.r4.s64 + -32;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_8301D318:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8301d338
	if (!ctx.cr6.gt) goto loc_8301D338;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add. r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt 0x8301d318
	if (ctx.cr0.gt) goto loc_8301D318;
loc_8301D338:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8301d344
	if (!ctx.cr6.gt) goto loc_8301D344;
loc_8301D340:
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
loc_8301D344:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_8301D348:
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
loc_8301D34C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8301D350:
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301D360;
	sub_8301CAC8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8301d140
	if (!ctx.cr0.eq) goto loc_8301D140;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301D37C;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d8c8
	if (ctx.cr0.eq) goto loc_8301D8C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8301d8c8
	if (!ctx.cr6.eq) goto loc_8301D8C8;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8301cac8
	ctx.lr = 0x8301D39C;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d8c0
	if (ctx.cr0.eq) goto loc_8301D8C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8301d8c0
	if (!ctx.cr6.eq) goto loc_8301D8C0;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301D3C8;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d8b8
	if (ctx.cr0.eq) goto loc_8301D8B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8301d8b8
	if (!ctx.cr6.eq) goto loc_8301D8B8;
	// lwz r4,396(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// bl 0x8301cb68
	ctx.lr = 0x8301D3E4;
	sub_8301CB68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,624(r28)
	PPC_STORE_U32(ctx.r28.u32 + 624, ctx.r11.u32);
	// bl 0x8301cac8
	ctx.lr = 0x8301D400;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d8b0
	if (ctx.cr0.eq) goto loc_8301D8B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8301d8b0
	if (!ctx.cr6.eq) goto loc_8301D8B0;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8301d8b0
	if (ctx.cr6.lt) goto loc_8301D8B0;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x8301d8b0
	if (ctx.cr6.gt) goto loc_8301D8B0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r30,r28,696
	ctx.r30.s64 = ctx.r28.s64 + 696;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,692(r28)
	PPC_STORE_U32(ctx.r28.u32 + 692, ctx.r10.u32);
	// bl 0x82d5c630
	ctx.lr = 0x8301D444;
	sub_82D5C630(ctx, base);
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301D458;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d8a8
	if (ctx.cr0.eq) goto loc_8301D8A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8301d8a8
	if (!ctx.cr6.eq) goto loc_8301D8A8;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8301cac8
	ctx.lr = 0x8301D484;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d8a0
	if (ctx.cr0.eq) goto loc_8301D8A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8301d8a0
	if (!ctx.cr6.eq) goto loc_8301D8A0;
	// lwz r4,396(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// bl 0x8301cb68
	ctx.lr = 0x8301D4A0;
	sub_8301CB68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 488, ctx.r11.u32);
	// bl 0x8301cac8
	ctx.lr = 0x8301D4BC;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d898
	if (ctx.cr0.eq) goto loc_8301D898;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8301d898
	if (!ctx.cr6.eq) goto loc_8301D898;
	// lwz r10,396(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8301d898
	if (ctx.cr0.lt) goto loc_8301D898;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// bgt cr6,0x8301d898
	if (ctx.cr6.gt) goto loc_8301D898;
	// addi r29,r28,496
	ctx.r29.s64 = ctx.r28.s64 + 496;
	// stw r11,492(r28)
	PPC_STORE_U32(ctx.r28.u32 + 492, ctx.r11.u32);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301D4FC;
	sub_82D5C630(ctx, base);
	// lwz r11,624(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8301d610
	if (!ctx.cr6.eq) goto loc_8301D610;
	// lwz r11,692(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 692);
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,696
	ctx.r4.s64 = ctx.r11.s64 + 696;
	// bl 0x8301cac8
	ctx.lr = 0x8301D524;
	sub_8301CAC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301d65c
	if (ctx.cr0.eq) goto loc_8301D65C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8301d65c
	if (!ctx.cr6.eq) goto loc_8301D65C;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8301cac8
	ctx.lr = 0x8301D544;
	sub_8301CAC8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8301d654
	if (ctx.cr0.eq) goto loc_8301D654;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8301d654
	if (!ctx.cr6.eq) goto loc_8301D654;
	// lwz r31,396(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8301d654
	if (ctx.cr6.lt) goto loc_8301D654;
	// cmplwi cr6,r31,129
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 129, ctx.xer);
	// bgt cr6,0x8301d654
	if (ctx.cr6.gt) goto loc_8301D654;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r3,r28,956
	ctx.r3.s64 = ctx.r28.s64 + 956;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8301d590
	if (!ctx.cr0.eq) goto loc_8301D590;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// addi r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -1;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// stw r11,952(r28)
	PPC_STORE_U32(ctx.r28.u32 + 952, ctx.r11.u32);
	// b 0x8301d59c
	goto loc_8301D59C;
loc_8301D590:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r31,952(r28)
	PPC_STORE_U32(ctx.r28.u32 + 952, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8301D59C:
	// bl 0x82d5c630
	ctx.lr = 0x8301D5A0;
	sub_82D5C630(ctx, base);
	// lwz r11,692(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 692);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,696
	ctx.r4.s64 = ctx.r11.s64 + 696;
	// bl 0x8301cac8
	ctx.lr = 0x8301D5BC;
	sub_8301CAC8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8301d64c
	if (ctx.cr0.eq) goto loc_8301D64C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8301d64c
	if (!ctx.cr6.eq) goto loc_8301D64C;
	// lwz r5,396(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x8301d64c
	if (ctx.cr6.lt) goto loc_8301D64C;
	// cmplwi cr6,r5,129
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 129, ctx.xer);
	// bgt cr6,0x8301d64c
	if (ctx.cr6.gt) goto loc_8301D64C;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r3,r28,1092
	ctx.r3.s64 = ctx.r28.s64 + 1092;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8301d608
	if (!ctx.cr0.eq) goto loc_8301D608;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r11,1088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1088, ctx.r11.u32);
	// b 0x8301d60c
	goto loc_8301D60C;
loc_8301D608:
	// stw r5,1088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1088, ctx.r5.u32);
loc_8301D60C:
	// bl 0x82d5c630
	ctx.lr = 0x8301D610;
	sub_82D5C630(ctx, base);
loc_8301D610:
	// addi r10,r28,356
	ctx.r10.s64 = ctx.r28.s64 + 356;
	// addi r11,r23,12
	ctx.r11.s64 = ctx.r23.s64 + 12;
loc_8301D618:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8301d63c
	if (ctx.cr0.eq) goto loc_8301D63C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8301d618
	if (ctx.cr6.eq) goto loc_8301D618;
loc_8301D63C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8301d664
	if (ctx.cr0.eq) goto loc_8301D664;
	// li r3,-24
	ctx.r3.s64 = -24;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D64C:
	// li r3,-23
	ctx.r3.s64 = -23;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D654:
	// li r3,-22
	ctx.r3.s64 = -22;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D65C:
	// li r3,-21
	ctx.r3.s64 = -21;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D664:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r11,19296
	ctx.r10.s64 = ctx.r11.s64 + 19296;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301d79c
	if (ctx.cr6.eq) goto loc_8301D79C;
	// addi r7,r28,4
	ctx.r7.s64 = ctx.r28.s64 + 4;
loc_8301D680:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8301D684:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8301d6a8
	if (ctx.cr0.eq) goto loc_8301D6A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8301d684
	if (ctx.cr6.eq) goto loc_8301D684;
loc_8301D6A8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8301d780
	if (!ctx.cr0.eq) goto loc_8301D780;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r28,36
	ctx.r10.s64 = ctx.r28.s64 + 36;
loc_8301D6B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8301d6dc
	if (ctx.cr0.eq) goto loc_8301D6DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8301d6b8
	if (ctx.cr6.eq) goto loc_8301D6B8;
loc_8301D6DC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8301d780
	if (!ctx.cr0.eq) goto loc_8301D780;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r28,68
	ctx.r10.s64 = ctx.r28.s64 + 68;
loc_8301D6EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8301d710
	if (ctx.cr0.eq) goto loc_8301D710;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8301d6ec
	if (ctx.cr6.eq) goto loc_8301D6EC;
loc_8301D710:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8301d780
	if (!ctx.cr0.eq) goto loc_8301D780;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r28,100
	ctx.r10.s64 = ctx.r28.s64 + 100;
loc_8301D720:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8301d744
	if (ctx.cr0.eq) goto loc_8301D744;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8301d720
	if (ctx.cr6.eq) goto loc_8301D720;
loc_8301D744:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8301d780
	if (!ctx.cr0.eq) goto loc_8301D780;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r28,164
	ctx.r10.s64 = ctx.r28.s64 + 164;
loc_8301D754:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8301d778
	if (ctx.cr0.eq) goto loc_8301D778;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8301d754
	if (ctx.cr6.eq) goto loc_8301D754;
loc_8301D778:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8301d790
	if (ctx.cr0.eq) goto loc_8301D790;
loc_8301D780:
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8301d680
	if (!ctx.cr0.eq) goto loc_8301D680;
loc_8301D790:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301d7a4
	if (!ctx.cr6.eq) goto loc_8301D7A4;
loc_8301D79C:
	// li r3,-25
	ctx.r3.s64 = -25;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D7A4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,492(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 492);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8301d7bc
	if (ctx.cr6.eq) goto loc_8301D7BC;
	// li r3,-26
	ctx.r3.s64 = -26;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D7BC:
	// lwz r11,488(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 488);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8301d808
	if (ctx.cr6.eq) goto loc_8301D808;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8301d7d8
	if (ctx.cr6.eq) goto loc_8301D7D8;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x8301d834
	goto loc_8301D834;
loc_8301D7D8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x830210b8
	ctx.lr = 0x8301D7E0;
	sub_830210B8(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83021108
	ctx.lr = 0x8301D7F0;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r31,20
	ctx.r31.s64 = 20;
	// bl 0x83021200
	ctx.lr = 0x8301D804;
	sub_83021200(ctx, base);
	// b 0x8301d834
	goto loc_8301D834;
loc_8301D808:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8300e978
	ctx.lr = 0x8301D810;
	sub_8300E978(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8300e9b8
	ctx.lr = 0x8301D820;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r31,16
	ctx.r31.s64 = 16;
	// bl 0x8300ea88
	ctx.lr = 0x8301D834;
	sub_8300EA88(ctx, base);
loc_8301D834:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,492(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 492);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301ca58
	ctx.lr = 0x8301D84C;
	sub_8301CA58(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8301d884
	if (ctx.cr0.eq) goto loc_8301D884;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8301D864:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8301d884
	if (!ctx.cr0.eq) goto loc_8301D884;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8301d864
	if (!ctx.cr6.eq) goto loc_8301D864;
loc_8301D884:
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r11,0,31,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r3,r3,0,29,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D898:
	// li r3,-20
	ctx.r3.s64 = -20;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D8A0:
	// li r3,-19
	ctx.r3.s64 = -19;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D8A8:
	// li r3,-18
	ctx.r3.s64 = -18;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D8B0:
	// li r3,-16
	ctx.r3.s64 = -16;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D8B8:
	// li r3,-15
	ctx.r3.s64 = -15;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D8C0:
	// li r3,-14
	ctx.r3.s64 = -14;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D8C8:
	// li r3,-13
	ctx.r3.s64 = -13;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D8D0:
	// li r3,-12
	ctx.r3.s64 = -12;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D8D8:
	// li r3,-11
	ctx.r3.s64 = -11;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D8E0:
	// li r3,-10
	ctx.r3.s64 = -10;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D8E8:
	// li r3,-9
	ctx.r3.s64 = -9;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D8F0:
	// li r3,-8
	ctx.r3.s64 = -8;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D8F8:
	// li r3,-6
	ctx.r3.s64 = -6;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D900:
	// li r3,-5
	ctx.r3.s64 = -5;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D908:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D910:
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x8301d91c
	goto loc_8301D91C;
loc_8301D918:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8301D91C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82d5c4fc
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D928"))) PPC_WEAK_FUNC(sub_8301D928);
PPC_FUNC_IMPL(__imp__sub_8301D928) {
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
	// bl 0x8301c188
	ctx.lr = 0x8301D940;
	sub_8301C188(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r4,28787
	ctx.r4.s64 = 1886584832;
	// li r3,296
	ctx.r3.s64 = 296;
	// ori r4,r4,29548
	ctx.r4.u64 = ctx.r4.u64 | 29548;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82217ec8
	ctx.lr = 0x8301D958;
	sub_82217EC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8301d968
	if (!ctx.cr0.eq) goto loc_8301D968;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301d980
	goto loc_8301D980;
loc_8301D968:
	// li r5,296
	ctx.r5.s64 = 296;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x8301D978;
	sub_82D5CB60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8301D980:
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

__attribute__((alias("__imp__sub_8301D998"))) PPC_WEAK_FUNC(sub_8301D998);
PPC_FUNC_IMPL(__imp__sub_8301D998) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8301c260
	sub_8301C260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301D9A0"))) PPC_WEAK_FUNC(sub_8301D9A0);
PPC_FUNC_IMPL(__imp__sub_8301D9A0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8301c260
	ctx.lr = 0x8301D9BC;
	sub_8301C260(ctx, base);
	// lis r4,28787
	ctx.r4.s64 = 1886584832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r4,r4,29548
	ctx.r4.u64 = ctx.r4.u64 | 29548;
	// bl 0x822138a8
	ctx.lr = 0x8301D9D0;
	sub_822138A8(ctx, base);
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

__attribute__((alias("__imp__sub_8301D9E8"))) PPC_WEAK_FUNC(sub_8301D9E8);
PPC_FUNC_IMPL(__imp__sub_8301D9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8301D9F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8301da0c
	if (ctx.cr6.eq) goto loc_8301DA0C;
loc_8301DA04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8301da5c
	goto loc_8301DA5C;
loc_8301DA0C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83013640
	ctx.lr = 0x8301DA1C;
	sub_83013640(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8301da04
	if (ctx.cr0.eq) goto loc_8301DA04;
	// bl 0x8301d928
	ctx.lr = 0x8301DA28;
	sub_8301D928(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8301da3c
	if (!ctx.cr0.eq) goto loc_8301DA3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83013350
	ctx.lr = 0x8301DA38;
	sub_83013350(ctx, base);
	// b 0x8301da04
	goto loc_8301DA04;
loc_8301DA3C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d5c630
	ctx.lr = 0x8301DA50;
	sub_82D5C630(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
loc_8301DA5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301DA68"))) PPC_WEAK_FUNC(sub_8301DA68);
PPC_FUNC_IMPL(__imp__sub_8301DA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8301DA70;
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301da90
	if (ctx.cr0.eq) goto loc_8301DA90;
	// bl 0x83013350
	ctx.lr = 0x8301DA90;
	sub_83013350(ctx, base);
loc_8301DA90:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83013240
	ctx.lr = 0x8301DAA0;
	sub_83013240(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne 0x8301dab4
	if (!ctx.cr0.eq) goto loc_8301DAB4;
	// li r3,-7
	ctx.r3.s64 = -7;
	// b 0x8301dac0
	goto loc_8301DAC0;
loc_8301DAB4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830133e0
	ctx.lr = 0x8301DAC0;
	sub_830133E0(ctx, base);
loc_8301DAC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301DAC8"))) PPC_WEAK_FUNC(sub_8301DAC8);
PPC_FUNC_IMPL(__imp__sub_8301DAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x8301DAD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8301c260
	ctx.lr = 0x8301DAE8;
	sub_8301C260(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8301dc6c
	if (!ctx.cr0.eq) goto loc_8301DC6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83013240
	ctx.lr = 0x8301DB00;
	sub_83013240(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bne 0x8301db14
	if (!ctx.cr0.eq) goto loc_8301DB14;
	// li r3,-9
	ctx.r3.s64 = -9;
	// b 0x8301dc6c
	goto loc_8301DC6C;
loc_8301DB14:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// sth r25,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r25.u16);
	// sth r9,270(r31)
	PPC_STORE_U16(ctx.r31.u32 + 270, ctx.r9.u16);
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// bne cr6,0x8301db44
	if (!ctx.cr6.eq) goto loc_8301DB44;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// addi r29,r11,-14598
	ctx.r29.s64 = ctx.r11.s64 + -14598;
loc_8301DB44:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// b 0x8301db70
	goto loc_8301DB70;
loc_8301DB50:
	// cmpwi cr6,r10,58
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 58, ctx.xer);
	// beq cr6,0x8301db78
	if (ctx.cr6.eq) goto loc_8301DB78;
	// cmplwi cr6,r30,255
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 255, ctx.xer);
	// bge cr6,0x8301db78
	if (!ctx.cr6.lt) goto loc_8301DB78;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r11,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r11.u8);
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
loc_8301DB70:
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8301db50
	if (!ctx.cr0.eq) goto loc_8301DB50;
loc_8301DB78:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r9,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// bl 0x830149a8
	ctx.lr = 0x8301DB8C;
	sub_830149A8(ctx, base);
	// lbz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 272);
	// lbz r10,273(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 273);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,274(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 274);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r10,275(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 275);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8301dbd8
	if (!ctx.cr0.eq) goto loc_8301DBD8;
	// rlwinm r11,r27,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFFFFFF;
	// stb r27,275(r31)
	PPC_STORE_U8(ctx.r31.u32 + 275, ctx.r27.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,274(r31)
	PPC_STORE_U8(ctx.r31.u32 + 274, ctx.r10.u8);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r11.u8);
	// stb r10,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r10.u8);
loc_8301DBD8:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,58
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 58, ctx.xer);
	// bne cr6,0x8301dc10
	if (!ctx.cr6.eq) goto loc_8301DC10;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5d4f0
	ctx.lr = 0x8301DBF4;
	sub_82D5D4F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// stb r11,270(r31)
	PPC_STORE_U8(ctx.r31.u32 + 270, ctx.r11.u8);
	// bl 0x82d5d4f0
	ctx.lr = 0x8301DC08;
	sub_82D5D4F0(ctx, base);
	// stb r3,271(r31)
	PPC_STORE_U8(ctx.r31.u32 + 271, ctx.r3.u8);
	// b 0x8301dc1c
	goto loc_8301DC1C;
loc_8301DC10:
	// srawi r10,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 8;
	// stb r26,271(r31)
	PPC_STORE_U8(ctx.r31.u32 + 271, ctx.r26.u8);
	// stb r10,270(r31)
	PPC_STORE_U8(ctx.r31.u32 + 270, ctx.r10.u8);
loc_8301DC1C:
	// lbz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 272);
	// lbz r10,273(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 273);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,274(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 274);
	// lbz r8,275(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 275);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8301dc64
	if (!ctx.cr0.eq) goto loc_8301DC64;
	// li r4,30000
	ctx.r4.s64 = 30000;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83014488
	ctx.lr = 0x8301DC54;
	sub_83014488(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// b 0x8301dc68
	goto loc_8301DC68;
loc_8301DC64:
	// stw r25,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r25.u32);
loc_8301DC68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301DC6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301DC78"))) PPC_WEAK_FUNC(sub_8301DC78);
PPC_FUNC_IMPL(__imp__sub_8301DC78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x83013600
	sub_83013600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301DC80"))) PPC_WEAK_FUNC(sub_8301DC80);
PPC_FUNC_IMPL(__imp__sub_8301DC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// bl 0x8301c260
	ctx.lr = 0x8301DCA0;
	sub_8301C260(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DCB8"))) PPC_WEAK_FUNC(sub_8301DCB8);
PPC_FUNC_IMPL(__imp__sub_8301DCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8301DCC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// stb r31,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r31.u8);
	// addi r5,r11,524
	ctx.r5.s64 = ctx.r11.s64 + 524;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301c1a8
	ctx.lr = 0x8301DCF0;
	sub_8301C1A8(ctx, base);
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301DD00;
	sub_82D5C630(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stb r31,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r31.u8);
	// addi r9,r11,18656
	ctx.r9.s64 = ctx.r11.s64 + 18656;
	// stb r31,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r31.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// addi r11,r1,133
	ctx.r11.s64 = ctx.r1.s64 + 133;
loc_8301DD20:
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// addi r6,r9,11
	ctx.r6.s64 = ctx.r9.s64 + 11;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x8301dd20
	if (ctx.cr6.lt) goto loc_8301DD20;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// bl 0x8301c388
	ctx.lr = 0x8301DD90;
	sub_8301C388(ctx, base);
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301DDA0"))) PPC_WEAK_FUNC(sub_8301DDA0);
PPC_FUNC_IMPL(__imp__sub_8301DDA0) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r30,292(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8301de50
	if (!ctx.cr6.eq) goto loc_8301DE50;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8301de50
	if (!ctx.cr0.eq) goto loc_8301DE50;
	// addi r31,r4,2
	ctx.r31.s64 = ctx.r4.s64 + 2;
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301DDE4;
	sub_82D5C630(ctx, base);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r10,r10,18656
	ctx.r10.s64 = ctx.r10.s64 + 18656;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r7.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
loc_8301DE08:
	// lbz r6,-1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8301de24
	if (!ctx.cr6.eq) goto loc_8301DE24;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8301de3c
	if (ctx.cr6.eq) goto loc_8301DE3C;
loc_8301DE24:
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// addi r6,r10,11
	ctx.r6.s64 = ctx.r10.s64 + 11;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8301de08
	if (ctx.cr6.lt) goto loc_8301DE08;
	// b 0x8301de48
	goto loc_8301DE48;
loc_8301DE3C:
	// mulli r11,r7,5
	ctx.r11.s64 = ctx.r7.s64 * 5;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_8301DE48:
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x8301de54
	goto loc_8301DE54;
loc_8301DE50:
	// li r3,4100
	ctx.r3.s64 = 4100;
loc_8301DE54:
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

__attribute__((alias("__imp__sub_8301DE70"))) PPC_WEAK_FUNC(sub_8301DE70);
PPC_FUNC_IMPL(__imp__sub_8301DE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8301decc
	if (!ctx.cr6.gt) goto loc_8301DECC;
	// li r3,4100
	ctx.r3.s64 = 4100;
	// b 0x8301dee8
	goto loc_8301DEE8;
loc_8301DECC:
	// addi r5,r4,6
	ctx.r5.s64 = ctx.r4.s64 + 6;
	// addi r4,r10,1040
	ctx.r4.s64 = ctx.r10.s64 + 1040;
	// bl 0x8301cc40
	ctx.lr = 0x8301DED8;
	sub_8301CC40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,4099
	ctx.r3.s64 = 4099;
	// blt 0x8301dee8
	if (ctx.cr0.lt) goto loc_8301DEE8;
	// li r3,21
	ctx.r3.s64 = 21;
loc_8301DEE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DEF8"))) PPC_WEAK_FUNC(sub_8301DEF8);
PPC_FUNC_IMPL(__imp__sub_8301DEF8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r3,4100
	ctx.r3.s64 = 4100;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DF10"))) PPC_WEAK_FUNC(sub_8301DF10);
PPC_FUNC_IMPL(__imp__sub_8301DF10) {
	PPC_FUNC_PROLOGUE();
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DF18"))) PPC_WEAK_FUNC(sub_8301DF18);
PPC_FUNC_IMPL(__imp__sub_8301DF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4b0
	ctx.lr = 0x8301DF20;
	__savegprlr_22(ctx, base);
	// stwu r1,-1936(r1)
	ea = -1936 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r31,292(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 292);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r5,r31,524
	ctx.r5.s64 = ctx.r31.s64 + 524;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301c1a8
	ctx.lr = 0x8301DF40;
	sub_8301C1A8(ctx, base);
	// li r28,3
	ctx.r28.s64 = 3;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r7,2128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2128);
	// addi r6,r31,2132
	ctx.r6.s64 = ctx.r31.s64 + 2132;
	// lwz r5,1992(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1992);
	// addi r4,r31,1996
	ctx.r4.s64 = ctx.r31.s64 + 1996;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// stb r22,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r22.u8);
	// bl 0x83021920
	ctx.lr = 0x8301DF68;
	sub_83021920(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x83021960
	ctx.lr = 0x8301DF78;
	sub_83021960(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x83021a48
	ctx.lr = 0x8301DF80;
	sub_83021A48(ctx, base);
	// addi r26,r31,148
	ctx.r26.s64 = ctx.r31.s64 + 148;
	// addi r25,r31,36
	ctx.r25.s64 = ctx.r31.s64 + 36;
	// addi r24,r31,68
	ctx.r24.s64 = ctx.r31.s64 + 68;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_8301DF94:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8300e978
	ctx.lr = 0x8301DF9C;
	sub_8300E978(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8300e9b8
	ctx.lr = 0x8301DFAC;
	sub_8300E9B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830210b8
	ctx.lr = 0x8301DFB4;
	sub_830210B8(ctx, base);
	// addi r11,r29,64
	ctx.r11.s64 = ctx.r29.s64 + 64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,290(r1)
	PPC_STORE_U8(ctx.r1.u32 + 290, ctx.r11.u8);
	// stb r11,289(r1)
	PPC_STORE_U8(ctx.r1.u32 + 289, ctx.r11.u8);
	// stb r11,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r11.u8);
	// bl 0x83021108
	ctx.lr = 0x8301DFD8;
	sub_83021108(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83021108
	ctx.lr = 0x8301DFE8;
	sub_83021108(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83021108
	ctx.lr = 0x8301DFF8;
	sub_83021108(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83021108
	ctx.lr = 0x8301E008;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83021200
	ctx.lr = 0x8301E018;
	sub_83021200(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E028;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8300ea88
	ctx.lr = 0x8301E038;
	sub_8300EA88(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// bne 0x8301df94
	if (!ctx.cr0.eq) goto loc_8301DF94;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5cb60
	ctx.lr = 0x8301E058;
	sub_82D5CB60(ctx, base);
	// addi r29,r31,196
	ctx.r29.s64 = ctx.r31.s64 + 196;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r28,8
	ctx.r28.s64 = 8;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_8301E068:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8300e978
	ctx.lr = 0x8301E070;
	sub_8300E978(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E080;
	sub_8300E9B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830210b8
	ctx.lr = 0x8301E088;
	sub_830210B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82d5cb60
	ctx.lr = 0x8301E098;
	sub_82D5CB60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83021108
	ctx.lr = 0x8301E0A8;
	sub_83021108(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83021108
	ctx.lr = 0x8301E0B8;
	sub_83021108(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83021108
	ctx.lr = 0x8301E0C8;
	sub_83021108(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83021108
	ctx.lr = 0x8301E0D8;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83021200
	ctx.lr = 0x8301E0E8;
	sub_83021200(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E0F8;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8300ea88
	ctx.lr = 0x8301E108;
	sub_8300EA88(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// bne 0x8301e068
	if (!ctx.cr0.eq) goto loc_8301E068;
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r29,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
	// addi r7,r1,544
	ctx.r7.s64 = ctx.r1.s64 + 544;
	// lwz r8,1992(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1992);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r22,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r22.u8);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r4,22
	ctx.r4.s64 = 22;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// bl 0x8301c388
	ctx.lr = 0x8301E174;
	sub_8301C388(ctx, base);
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r1,r1,1936
	ctx.r1.s64 = ctx.r1.s64 + 1936;
	// b 0x82d5c500
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E180"))) PPC_WEAK_FUNC(sub_8301E180);
PPC_FUNC_IMPL(__imp__sub_8301E180) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r31,292(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// addi r3,r31,782
	ctx.r3.s64 = ctx.r31.s64 + 782;
	// lwz r4,336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// bl 0x83020cb8
	ctx.lr = 0x8301E1B0;
	sub_83020CB8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,20
	ctx.r4.s64 = 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301c388
	ctx.lr = 0x8301E1D4;
	sub_8301C388(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8301E1F8"))) PPC_WEAK_FUNC(sub_8301E1F8);
PPC_FUNC_IMPL(__imp__sub_8301E1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x8301E200;
	__savegprlr_27(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,92
	ctx.r5.s64 = 92;
	// lwz r29,292(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// addi r4,r29,340
	ctx.r4.s64 = ctx.r29.s64 + 340;
	// bl 0x82d5c630
	ctx.lr = 0x8301E21C;
	sub_82D5C630(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r27,r11,-12164
	ctx.r27.s64 = ctx.r11.s64 + -12164;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E234;
	sub_8300E9B8(ctx, base);
	// addi r31,r29,148
	ctx.r31.s64 = ctx.r29.s64 + 148;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E248;
	sub_8300E9B8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r30,r11,18560
	ctx.r30.s64 = ctx.r11.s64 + 18560;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E260;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300ea88
	ctx.lr = 0x8301E270;
	sub_8300EA88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e978
	ctx.lr = 0x8301E278;
	sub_8300E978(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E288;
	sub_8300E9B8(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E298;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E2A8;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8300ea88
	ctx.lr = 0x8301E2B8;
	sub_8300EA88(ctx, base);
	// addi r4,r29,432
	ctx.r4.s64 = ctx.r29.s64 + 432;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x82d5c630
	ctx.lr = 0x8301E2C8;
	sub_82D5C630(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83021108
	ctx.lr = 0x8301E2D8;
	sub_83021108(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83021108
	ctx.lr = 0x8301E2E8;
	sub_83021108(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83021108
	ctx.lr = 0x8301E2F8;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83021200
	ctx.lr = 0x8301E308;
	sub_83021200(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x830210b8
	ctx.lr = 0x8301E310;
	sub_830210B8(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83021108
	ctx.lr = 0x8301E320;
	sub_83021108(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83021108
	ctx.lr = 0x8301E330;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83021108
	ctx.lr = 0x8301E340;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83021200
	ctx.lr = 0x8301E350;
	sub_83021200(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// li r8,36
	ctx.r8.s64 = 36;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// li r11,36
	ctx.r11.s64 = 36;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x8301c388
	ctx.lr = 0x8301E388;
	sub_8301C388(ctx, base);
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E398"))) PPC_WEAK_FUNC(sub_8301E398);
PPC_FUNC_IMPL(__imp__sub_8301E398) {
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
	// lwz r31,292(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x83020cb8
	ctx.lr = 0x8301E3C0;
	sub_83020CB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,26
	ctx.r3.s64 = 26;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8301E3E0"))) PPC_WEAK_FUNC(sub_8301E3E0);
PPC_FUNC_IMPL(__imp__sub_8301E3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c4
	ctx.lr = 0x8301E3E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,292(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r5,92
	ctx.r5.s64 = 92;
	// addi r4,r29,340
	ctx.r4.s64 = ctx.r29.s64 + 340;
	// bl 0x82d5c630
	ctx.lr = 0x8301E404;
	sub_82D5C630(ctx, base);
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r28,r11,-12148
	ctx.r28.s64 = ctx.r11.s64 + -12148;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E41C;
	sub_8300E9B8(ctx, base);
	// addi r31,r29,148
	ctx.r31.s64 = ctx.r29.s64 + 148;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E430;
	sub_8300E9B8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r30,r11,18560
	ctx.r30.s64 = ctx.r11.s64 + 18560;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E448;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8300ea88
	ctx.lr = 0x8301E458;
	sub_8300EA88(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8300e978
	ctx.lr = 0x8301E460;
	sub_8300E978(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E470;
	sub_8300E9B8(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E480;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8300e9b8
	ctx.lr = 0x8301E490;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8300ea88
	ctx.lr = 0x8301E4A0;
	sub_8300EA88(ctx, base);
	// addi r4,r29,432
	ctx.r4.s64 = ctx.r29.s64 + 432;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x82d5c630
	ctx.lr = 0x8301E4B0;
	sub_82D5C630(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301E4C0;
	sub_83021108(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301E4D0;
	sub_83021108(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301E4E0;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021200
	ctx.lr = 0x8301E4F0;
	sub_83021200(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830210b8
	ctx.lr = 0x8301E4F8;
	sub_830210B8(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301E508;
	sub_83021108(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301E518;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021108
	ctx.lr = 0x8301E528;
	sub_83021108(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83021200
	ctx.lr = 0x8301E538;
	sub_83021200(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
loc_8301E544:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8301e564
	if (!ctx.cr0.eq) goto loc_8301E564;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8301e544
	if (!ctx.cr6.eq) goto loc_8301E544;
loc_8301E564:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8301e5a4
	if (!ctx.cr0.eq) goto loc_8301E5A4;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
loc_8301E578:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8301e598
	if (!ctx.cr0.eq) goto loc_8301E598;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8301e578
	if (!ctx.cr6.eq) goto loc_8301E578;
loc_8301E598:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r3,30
	ctx.r3.s64 = 30;
	// beq 0x8301e5a8
	if (ctx.cr0.eq) goto loc_8301E5A8;
loc_8301E5A4:
	// li r3,4100
	ctx.r3.s64 = 4100;
loc_8301E5A8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82d5c514
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301E5B0"))) PPC_WEAK_FUNC(sub_8301E5B0);
PPC_FUNC_IMPL(__imp__sub_8301E5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4bc
	ctx.lr = 0x8301E5B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// lwz r30,292(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8301e648
	if (!ctx.cr6.eq) goto loc_8301E648;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8301E5E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8301e648
	if (ctx.cr0.eq) goto loc_8301E648;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301e608
	if (!ctx.cr6.eq) goto loc_8301E608;
	// li r11,4097
	ctx.r11.s64 = 4097;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// b 0x8301e638
	goto loc_8301E638;
loc_8301E608:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,275(r31)
	PPC_STORE_U8(ctx.r31.u32 + 275, ctx.r10.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r10,274(r31)
	PPC_STORE_U8(ctx.r31.u32 + 274, ctx.r10.u8);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,273(r31)
	PPC_STORE_U8(ctx.r31.u32 + 273, ctx.r11.u8);
	// stb r10,272(r31)
	PPC_STORE_U8(ctx.r31.u32 + 272, ctx.r10.u8);
loc_8301E638:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8301E644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_8301E648:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8301e66c
	if (!ctx.cr6.eq) goto loc_8301E66C;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// bl 0x83013540
	ctx.lr = 0x8301E664;
	sub_83013540(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
loc_8301E66C:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8301e6d0
	if (!ctx.cr6.eq) goto loc_8301E6D0;
	// lis r4,29556
	ctx.r4.s64 = 1936982016;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,24948
	ctx.r4.u64 = ctx.r4.u64 | 24948;
	// bl 0x83013920
	ctx.lr = 0x8301E698;
	sub_83013920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8301e6bc
	if (!ctx.cr0.gt) goto loc_8301E6BC;
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// stw r27,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r27.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
loc_8301E6BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8301e6d0
	if (!ctx.cr6.lt) goto loc_8301E6D0;
	// li r11,4098
	ctx.r11.s64 = 4098;
	// stw r26,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r26.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
loc_8301E6D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301ea3c
	if (ctx.cr6.eq) goto loc_8301EA3C;
	// li r25,4100
	ctx.r25.s64 = 4100;
loc_8301E6E0:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x8301ea3c
	if (ctx.cr6.lt) goto loc_8301EA3C;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bgt cr6,0x8301ea3c
	if (ctx.cr6.gt) goto loc_8301EA3C;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8301e758
	if (!ctx.cr6.eq) goto loc_8301E758;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x8301e71c
	if (!ctx.cr6.eq) goto loc_8301E71C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301dcb8
	ctx.lr = 0x8301E718;
	sub_8301DCB8(ctx, base);
	// b 0x8301e754
	goto loc_8301E754;
loc_8301E71C:
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x8301e730
	if (!ctx.cr6.eq) goto loc_8301E730;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301df18
	ctx.lr = 0x8301E72C;
	sub_8301DF18(ctx, base);
	// b 0x8301e754
	goto loc_8301E754;
loc_8301E730:
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bne cr6,0x8301e744
	if (!ctx.cr6.eq) goto loc_8301E744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301e180
	ctx.lr = 0x8301E740;
	sub_8301E180(ctx, base);
	// b 0x8301e754
	goto loc_8301E754;
loc_8301E744:
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x8301e758
	if (!ctx.cr6.eq) goto loc_8301E758;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301e1f8
	ctx.lr = 0x8301E754;
	sub_8301E1F8(ctx, base);
loc_8301E754:
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
loc_8301E758:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8301e7b8
	if (!ctx.cr6.lt) goto loc_8301E7B8;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r4,r9,2264
	ctx.r4.s64 = ctx.r9.s64 + 2264;
	// bl 0x830136d0
	ctx.lr = 0x8301E788;
	sub_830136D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8301e7a0
	if (!ctx.cr0.gt) goto loc_8301E7A0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_8301E7A0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8301e7b8
	if (!ctx.cr6.eq) goto loc_8301E7B8;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
loc_8301E7B8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x8301e808
	if (!ctx.cr6.lt) goto loc_8301E808;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subfic r5,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r5.s64 = 5 - ctx.r11.s64;
	// addi r4,r10,18648
	ctx.r4.s64 = ctx.r10.s64 + 18648;
	// bl 0x830137b0
	ctx.lr = 0x8301E7E4;
	sub_830137B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8301e7fc
	if (!ctx.cr0.gt) goto loc_8301E7FC;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_8301E7FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8301e808
	if (!ctx.cr6.lt) goto loc_8301E808;
	// stw r26,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r26.u32);
loc_8301E808:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8301e84c
	if (!ctx.cr6.eq) goto loc_8301E84C;
	// lbz r11,18649(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 18649);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8301e82c
	if (!ctx.cr6.eq) goto loc_8301E82C;
	// lbz r11,18650(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 18650);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8301e834
	if (ctx.cr0.eq) goto loc_8301E834;
loc_8301E82C:
	// stb r27,18651(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18651, ctx.r27.u8);
	// stb r27,18652(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18652, ctx.r27.u8);
loc_8301E834:
	// lbz r11,18651(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 18651);
	// lbz r10,18652(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 18652);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_8301E84C:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8301e8b4
	if (!ctx.cr6.lt) goto loc_8301E8B4;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r4,r9,18648
	ctx.r4.s64 = ctx.r9.s64 + 18648;
	// bl 0x830137b0
	ctx.lr = 0x8301E87C;
	sub_830137B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x8301e8a8
	if (!ctx.cr0.gt) goto loc_8301E8A8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8301e8a8
	if (!ctx.cr6.eq) goto loc_8301E8A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301c638
	ctx.lr = 0x8301E8A8;
	sub_8301C638(ctx, base);
loc_8301E8A8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8301e8b4
	if (!ctx.cr6.lt) goto loc_8301E8B4;
	// stw r26,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r26.u32);
loc_8301E8B4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301ea28
	if (!ctx.cr6.eq) goto loc_8301EA28;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8301ea28
	if (!ctx.cr6.lt) goto loc_8301EA28;
	// lbz r9,18648(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 18648);
	// cmplwi cr6,r9,21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 21, ctx.xer);
	// bne cr6,0x8301e910
	if (!ctx.cr6.eq) goto loc_8301E910;
	// lbz r11,18653(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 18653);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8301e908
	if (!ctx.cr6.eq) goto loc_8301E908;
	// lbz r11,18654(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 18654);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8301e908
	if (!ctx.cr0.eq) goto loc_8301E908;
	// stw r26,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r26.u32);
	// stw r27,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// stw r27,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r27.u32);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// b 0x8301ea0c
	goto loc_8301EA0C;
loc_8301E908:
	// stw r25,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r25.u32);
	// b 0x8301ea0c
	goto loc_8301EA0C;
loc_8301E910:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bne cr6,0x8301e9b4
	if (!ctx.cr6.eq) goto loc_8301E9B4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301c9f0
	ctx.lr = 0x8301E928;
	sub_8301C9F0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8301e93c
	if (ctx.cr0.eq) goto loc_8301E93C;
	// bl 0x8301dda0
	ctx.lr = 0x8301E938;
	sub_8301DDA0(ctx, base);
	// b 0x8301ea08
	goto loc_8301EA08;
loc_8301E93C:
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8301c9f0
	ctx.lr = 0x8301E944;
	sub_8301C9F0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8301e958
	if (ctx.cr0.eq) goto loc_8301E958;
	// bl 0x8301de70
	ctx.lr = 0x8301E954;
	sub_8301DE70(ctx, base);
	// b 0x8301ea08
	goto loc_8301EA08;
loc_8301E958:
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8301c9f0
	ctx.lr = 0x8301E960;
	sub_8301C9F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301e980
	if (ctx.cr0.eq) goto loc_8301E980;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x8301e9ac
	if (!ctx.cr6.eq) goto loc_8301E9AC;
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x8301e9ac
	goto loc_8301E9AC;
loc_8301E980:
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301c9f0
	ctx.lr = 0x8301E98C;
	sub_8301C9F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8301e908
	if (!ctx.cr0.eq) goto loc_8301E908;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301c9f0
	ctx.lr = 0x8301E9A0;
	sub_8301C9F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8301ea0c
	if (ctx.cr0.eq) goto loc_8301EA0C;
	// li r11,22
	ctx.r11.s64 = 22;
loc_8301E9AC:
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// b 0x8301ea0c
	goto loc_8301EA0C;
loc_8301E9B4:
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x8301e9e4
	if (!ctx.cr6.eq) goto loc_8301E9E4;
	// cmplwi cr6,r9,20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 20, ctx.xer);
	// bne cr6,0x8301ea0c
	if (!ctx.cr6.eq) goto loc_8301EA0C;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18648
	ctx.r4.s64 = ctx.r11.s64 + 18648;
	// bl 0x8301e398
	ctx.lr = 0x8301E9D4;
	sub_8301E398(ctx, base);
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x8301ea0c
	goto loc_8301EA0C;
loc_8301E9E4:
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x8301ea0c
	if (!ctx.cr6.eq) goto loc_8301EA0C;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301c9f0
	ctx.lr = 0x8301E9F8;
	sub_8301C9F0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8301ea0c
	if (ctx.cr0.eq) goto loc_8301EA0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301e3e0
	ctx.lr = 0x8301EA08;
	sub_8301E3E0(ctx, base);
loc_8301EA08:
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
loc_8301EA0C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8301ea28
	if (ctx.cr6.lt) goto loc_8301EA28;
	// stw r27,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// stw r27,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r27.u32);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
loc_8301EA28:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8301ea3c
	if (ctx.cr6.eq) goto loc_8301EA3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301e6e0
	if (!ctx.cr6.eq) goto loc_8301E6E0;
loc_8301EA3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c50c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301EA48"))) PPC_WEAK_FUNC(sub_8301EA48);
PPC_FUNC_IMPL(__imp__sub_8301EA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c8
	ctx.lr = 0x8301EA50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r9,292(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// bge cr6,0x8301ea94
	if (!ctx.cr6.lt) goto loc_8301EA94;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8301EA78:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8301ea78
	if (!ctx.cr6.eq) goto loc_8301EA78;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8301EA94:
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x8301eae4
	if (!ctx.cr6.eq) goto loc_8301EAE4;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8301eae4
	if (!ctx.cr6.eq) goto loc_8301EAE4;
	// cmpwi cr6,r31,16000
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16000, ctx.xer);
	// ble cr6,0x8301eabc
	if (!ctx.cr6.gt) goto loc_8301EABC;
	// li r31,16000
	ctx.r31.s64 = 16000;
loc_8301EABC:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301c388
	ctx.lr = 0x8301EAD8;
	sub_8301C388(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x8301e5b0
	ctx.lr = 0x8301EAE4;
	sub_8301E5B0(ctx, base);
loc_8301EAE4:
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x8301eb10
	if (!ctx.cr6.eq) goto loc_8301EB10;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830136d0
	ctx.lr = 0x8301EB0C;
	sub_830136D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8301EB10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82d5c518
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301EB20"))) PPC_WEAK_FUNC(sub_8301EB20);
PPC_FUNC_IMPL(__imp__sub_8301EB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x8301EB28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// lwz r31,292(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x8301ec00
	if (!ctx.cr6.eq) goto loc_8301EC00;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8301eb68
	if (ctx.cr6.eq) goto loc_8301EB68;
	// bl 0x8301e5b0
	ctx.lr = 0x8301EB68;
	sub_8301E5B0(ctx, base);
loc_8301EB68:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8301eb80
	if (ctx.cr6.lt) goto loc_8301EB80;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8301eb94
	if (!ctx.cr6.lt) goto loc_8301EB94;
loc_8301EB80:
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8301eb94
	if (ctx.cr6.eq) goto loc_8301EB94;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x8301ec00
	goto loc_8301EC00;
loc_8301EB94:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8301ec00
	if (!ctx.cr6.eq) goto loc_8301EC00;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8301ec00
	if (!ctx.cr6.lt) goto loc_8301EC00;
	// lbz r9,18648(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18648);
	// cmplwi cr6,r9,23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 23, ctx.xer);
	// bne cr6,0x8301ec00
	if (!ctx.cr6.eq) goto loc_8301EC00;
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x8301ebc8
	if (!ctx.cr6.gt) goto loc_8301EBC8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8301EBC8:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18648
	ctx.r4.s64 = ctx.r11.s64 + 18648;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301EBDC;
	sub_82D5C630(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// blt cr6,0x8301ec00
	if (ctx.cr6.lt) goto loc_8301EC00;
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
loc_8301EC00:
	// lwz r11,284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x8301ec2c
	if (!ctx.cr6.eq) goto loc_8301EC2C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830137b0
	ctx.lr = 0x8301EC28;
	sub_830137B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8301EC2C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8301ec40
	if (!ctx.cr6.gt) goto loc_8301EC40;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8301ec40
	if (!ctx.cr6.lt) goto loc_8301EC40;
	// stbx r26,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r26.u8);
loc_8301EC40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301EC50"))) PPC_WEAK_FUNC(sub_8301EC50);
PPC_FUNC_IMPL(__imp__sub_8301EC50) {
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
	// lis r11,29551
	ctx.r11.s64 = 1936654336;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,25451
	ctx.r11.u64 = ctx.r11.u64 | 25451;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301ecc0
	if (!ctx.cr6.eq) goto loc_8301ECC0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8301ecb8
	if (ctx.cr6.eq) goto loc_8301ECB8;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bne cr6,0x8301ecb8
	if (!ctx.cr6.eq) goto loc_8301ECB8;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r11,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r11.u8);
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stb r11,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r11.u8);
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// stb r11,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r11.u8);
	// b 0x8301ed24
	goto loc_8301ED24;
loc_8301ECB8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8301ed28
	goto loc_8301ED28;
loc_8301ECC0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8301ed28
	if (ctx.cr0.eq) goto loc_8301ED28;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83013920
	ctx.lr = 0x8301ECE0;
	sub_83013920(ctx, base);
	// lis r11,29556
	ctx.r11.s64 = 1936982016;
	// ori r11,r11,24948
	ctx.r11.u64 = ctx.r11.u64 | 24948;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8301ed28
	if (!ctx.cr6.eq) goto loc_8301ED28;
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// blt cr6,0x8301ed00
	if (ctx.cr6.lt) goto loc_8301ED00;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8301ED00:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8301ed0c
	if (!ctx.cr6.eq) goto loc_8301ED0C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301ED0C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8301ed28
	if (!ctx.cr6.gt) goto loc_8301ED28;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// beq cr6,0x8301ed28
	if (ctx.cr6.eq) goto loc_8301ED28;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x8301ed28
	if (ctx.cr6.eq) goto loc_8301ED28;
loc_8301ED24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301ED28:
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

__attribute__((alias("__imp__sub_8301ED40"))) PPC_WEAK_FUNC(sub_8301ED40);
PPC_FUNC_IMPL(__imp__sub_8301ED40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8301ED48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301ED68;
	sub_82D5C630(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301ED78;
	sub_82D5C630(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301ED88;
	sub_82D5C630(ctx, base);
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301ED98"))) PPC_WEAK_FUNC(sub_8301ED98);
PPC_FUNC_IMPL(__imp__sub_8301ED98) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// blt cr6,0x8301eda8
	if (ctx.cr6.lt) goto loc_8301EDA8;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x82d5c630
	sub_82D5C630(ctx, base);
	return;
loc_8301EDA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8301EDB8:
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbzx r8,r11,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// bne cr6,0x8301edb8
	if (!ctx.cr6.eq) goto loc_8301EDB8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EDE8"))) PPC_WEAK_FUNC(sub_8301EDE8);
PPC_FUNC_IMPL(__imp__sub_8301EDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4c0
	ctx.lr = 0x8301EDF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31986
	ctx.r11.s64 = -2096234496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-12140
	ctx.r29.s64 = ctx.r11.s64 + -12140;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8301b430
	ctx.lr = 0x8301EE1C;
	sub_8301B430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8300e978
	ctx.lr = 0x8301EE24;
	sub_8300E978(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8300e9b8
	ctx.lr = 0x8301EE34;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8300ea88
	ctx.lr = 0x8301EE44;
	sub_8300EA88(ctx, base);
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8301b430
	ctx.lr = 0x8301EE58;
	sub_8301B430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8300e978
	ctx.lr = 0x8301EE60;
	sub_8300E978(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8300e9b8
	ctx.lr = 0x8301EE70;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8300ea88
	ctx.lr = 0x8301EE80;
	sub_8300EA88(ctx, base);
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301EE94;
	sub_82D5C630(ctx, base);
	// addi r5,r29,32
	ctx.r5.s64 = ctx.r29.s64 + 32;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8301b430
	ctx.lr = 0x8301EEAC;
	sub_8301B430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8300e978
	ctx.lr = 0x8301EEB4;
	sub_8300E978(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8300e9b8
	ctx.lr = 0x8301EEC4;
	sub_8300E9B8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8300ea88
	ctx.lr = 0x8301EED8;
	sub_8300EA88(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301EEE8;
	sub_82D5C630(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301EEF8;
	sub_82D5C630(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301EF08;
	sub_82D5C630(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x83020cb8
	ctx.lr = 0x8301EF1C;
	sub_83020CB8(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x83020d58
	ctx.lr = 0x8301EF2C;
	sub_83020D58(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x82d5c510
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301EF38"))) PPC_WEAK_FUNC(sub_8301EF38);
PPC_FUNC_IMPL(__imp__sub_8301EF38) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301ef6c
	if (ctx.cr6.eq) goto loc_8301EF6C;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301EF6C;
	sub_82D5C630(ctx, base);
loc_8301EF6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8301ef84
	if (ctx.cr6.eq) goto loc_8301EF84;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301EF84;
	sub_82D5C630(ctx, base);
loc_8301EF84:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8301EFA0"))) PPC_WEAK_FUNC(sub_8301EFA0);
PPC_FUNC_IMPL(__imp__sub_8301EFA0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8301effc
	if (ctx.cr6.eq) goto loc_8301EFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,266
	ctx.r3.s64 = ctx.r31.s64 + 266;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83020cb8
	ctx.lr = 0x8301EFE8;
	sub_83020CB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83020cb8
	ctx.lr = 0x8301EFFC;
	sub_83020CB8(ctx, base);
loc_8301EFFC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_8301F018"))) PPC_WEAK_FUNC(sub_8301F018);
PPC_FUNC_IMPL(__imp__sub_8301F018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82d5c4cc
	ctx.lr = 0x8301F020;
	__savegprlr_29(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8301f048
	if (!ctx.cr6.eq) goto loc_8301F048;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8301f104
	goto loc_8301F104;
loc_8301F048:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82d5c630
	ctx.lr = 0x8301F054;
	sub_82D5C630(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301F064;
	sub_82D5C630(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82d5c630
	ctx.lr = 0x8301F074;
	sub_82D5C630(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d5c630
	ctx.lr = 0x8301F084;
	sub_82D5C630(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x83020cb8
	ctx.lr = 0x8301F098;
	sub_83020CB8(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x83020d58
	ctx.lr = 0x8301F0A8;
	sub_83020D58(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8301f100
	if (ctx.cr6.gt) goto loc_8301F100;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,3600
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3600, ctx.xer);
	// bgt cr6,0x8301f100
	if (ctx.cr6.gt) goto loc_8301F100;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x83020cb8
	ctx.lr = 0x8301F0D4;
	sub_83020CB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r29,266
	ctx.r3.s64 = ctx.r29.s64 + 266;
	// bl 0x83020cb8
	ctx.lr = 0x8301F0E8;
	sub_83020CB8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// b 0x8301f104
	goto loc_8301F104;
loc_8301F100:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8301F104:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82d5c51c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301F110"))) PPC_WEAK_FUNC(sub_8301F110);
PPC_FUNC_IMPL(__imp__sub_8301F110) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8301f140
	if (ctx.cr6.eq) goto loc_8301F140;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83020d58
	ctx.lr = 0x8301F138;
	sub_83020D58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8301F140:
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

__attribute__((alias("__imp__sub_8301F158"))) PPC_WEAK_FUNC(sub_8301F158);
PPC_FUNC_IMPL(__imp__sub_8301F158) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8301f204
	if (ctx.cr6.eq) goto loc_8301F204;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8301f204
	if (ctx.cr6.eq) goto loc_8301F204;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bge cr6,0x8301f19c
	if (!ctx.cr6.lt) goto loc_8301F19C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8301f208
	goto loc_8301F208;
loc_8301F19C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8300e978
	ctx.lr = 0x8301F1A4;
	sub_8300E978(ctx, base);
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8300e9b8
	ctx.lr = 0x8301F1B4;
	sub_8300E9B8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8300ea88
	ctx.lr = 0x8301F1C4;
	sub_8300EA88(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_8301F1D4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8301f1f4
	if (!ctx.cr0.eq) goto loc_8301F1F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8301f1d4
	if (!ctx.cr6.eq) goto loc_8301F1D4;
loc_8301F1F4:
	// subfic r11,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r8.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r11,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8301f208
	goto loc_8301F208;
loc_8301F204:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8301F208:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_8301F220"))) PPC_WEAK_FUNC(sub_8301F220);
PPC_FUNC_IMPL(__imp__sub_8301F220) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8301f244
	if (ctx.cr6.eq) goto loc_8301F244;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8301f244
	if (ctx.cr6.eq) goto loc_8301F244;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// blt cr6,0x8301f244
	if (ctx.cr6.lt) goto loc_8301F244;
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
loc_8301F244:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F250"))) PPC_WEAK_FUNC(sub_8301F250);
PPC_FUNC_IMPL(__imp__sub_8301F250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8301f260
	if (ctx.cr6.eq) goto loc_8301F260;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
loc_8301F260:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

